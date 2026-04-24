// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__25(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__25\n"); );
    // Init
    CData/*7:0*/ __Vfunc_aes_mvm__1320__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1320__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1320__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1321__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1321__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1321__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1322__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1322__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1322__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1323__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1323__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1323__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1324__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1324__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1324__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1325__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1325__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1325__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1326__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1326__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1326__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1327__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1327__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1327__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1328__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1328__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1328__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1329__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1329__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1329__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1330__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1330__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1330__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1331__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1331__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1331__vec_c;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1333__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1333__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1333__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1334__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1334__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1334__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1335__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1335__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1335__d;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1337__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1337__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1337__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1338__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1338__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1338__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1339__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1339__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1339__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1352__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1352__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1352__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1352__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1352__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1352__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1353__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1353__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1353__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1353__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1353__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1353__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1353__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1354__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1354__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1354__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1354__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1354__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1354__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1354__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1355__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1355__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1355__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1355__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1355__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1355__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1355__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1356__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1356__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1356__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1357__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1357__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1357__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1358__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1358__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1358__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1358__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1358__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1358__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1359__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1359__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1359__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1359__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1359__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1359__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1359__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1360__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1360__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1360__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1360__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1360__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1360__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1360__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1361__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1361__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1361__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1361__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1361__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1361__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1361__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1362__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1362__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1362__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1363__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1363__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1363__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1364__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1364__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1364__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1365__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1365__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1365__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1366__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1366__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1366__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1367__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1367__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1367__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1368__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1368__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1368__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1369__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1369__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1369__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1372__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1372__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1372__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1372__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1372__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1372__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1372__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1373__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1373__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1373__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1373__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1373__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1373__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1373__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1376__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1376__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1376__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1376__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1376__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1376__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1376__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1377__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1377__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1377__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1377__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1377__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1377__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1377__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1380__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1380__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1380__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1380__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1380__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1380__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1380__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1381__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1381__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1381__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1381__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1381__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1381__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1381__c;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1382__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1382__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1382__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1382__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1382__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1382__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1383__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1383__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1383__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1383__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1383__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1383__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1383__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1384__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1384__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1384__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1384__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1384__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1384__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1384__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1385__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1385__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1385__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1385__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1385__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1385__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1385__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1386__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1386__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1386__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1387__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1387__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1387__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1388__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1388__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1388__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1388__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1388__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1388__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1389__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1389__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1389__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1389__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1389__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1389__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1389__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1390__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1390__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1390__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1390__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1390__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1390__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1390__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1391__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1391__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1391__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1391__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1391__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1391__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1391__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1392__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1392__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1392__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1393__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1393__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1393__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1394__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1394__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1394__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1394__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1394__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1394__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1395__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1395__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1395__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1395__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1395__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1395__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1395__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1396__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1396__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1396__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1396__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1396__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1396__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1396__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1397__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1397__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1397__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1397__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1397__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1397__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1397__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1398__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1398__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1398__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1399__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1399__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1399__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1400__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1400__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1400__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1400__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1400__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1400__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1401__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1401__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1401__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1401__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1401__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1401__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1401__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1402__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1402__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1402__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1402__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1402__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1402__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1402__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1403__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1403__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1403__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1403__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1403__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1403__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1403__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1404__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1404__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1404__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1405__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1405__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1405__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1406__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1406__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1407__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1407__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1407__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1407__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1407__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1407__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1407__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1408__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1408__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1408__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1408__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1408__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1408__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1408__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1409__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1409__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1409__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1409__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1409__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1409__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1409__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1410__g;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1412__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1412__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1412__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1412__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1413__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1413__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1413__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1413__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1413__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1413__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1413__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1414__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1414__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1414__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1414__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1414__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1414__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1414__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1415__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1415__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1415__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1415__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1416__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1416__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1416__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1417__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1417__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1417__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1424__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1424__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1424__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1424__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1424__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1424__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1425__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1425__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1425__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1425__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1425__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1425__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1425__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1426__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1426__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1426__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1426__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1426__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1426__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1426__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1427__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1427__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1427__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1427__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1427__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1427__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1427__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1428__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1428__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1428__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1429__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1429__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1429__d;
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
    vlSelf->__Vfunc_aes_mvm__1322__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1322__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1322__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1322__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1322__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1322__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1322__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1322__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1322__vec_b = (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                    [0U][0U] >> 0x18U);
    __Vfunc_aes_mvm__1322__vec_c = 0U;
    __Vfunc_aes_mvm__1322__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1322__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1322__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1322__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1322__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1322__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1322__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1322__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1322__vec_b)))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1322__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1322__vec_b)))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1322__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1322__vec_b)))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1322__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1322__vec_b)))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1322__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1322__vec_b)))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1322__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1322__vec_b)))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1322__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1322__vec_b)))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1322__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1322__vec_b)))));
    __Vfunc_aes_mvm__1322__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1322__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1322__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1322__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1322__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1322__Vfuncout = __Vfunc_aes_mvm__1322__vec_c;
    vlSelf->__Vfunc_aes_mvm__1321__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1321__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__1321__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__1321__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__1321__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__1321__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1321__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__1321__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__1321__vec_b = (0xffU & (0x63U 
                                             ^ ((vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                 [0U][0U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                   [0U][0U] 
                                                   >> 0x18U))));
    __Vfunc_aes_mvm__1321__vec_c = 0U;
    __Vfunc_aes_mvm__1321__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1321__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1321__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1321__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1321__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1321__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1321__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1321__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1321__vec_b)))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1321__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1321__vec_b)))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1321__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1321__vec_b)))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1321__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1321__vec_b)))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1321__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1321__vec_b)))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1321__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1321__vec_b)))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1321__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1321__vec_b)))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1321__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1321__vec_b)))));
    __Vfunc_aes_mvm__1321__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1321__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1321__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1321__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1321__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1321__Vfuncout = __Vfunc_aes_mvm__1321__vec_c;
    vlSelf->__Vfunc_aes_mvm__1320__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1320__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1320__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1320__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1320__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1320__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1320__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1320__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1320__vec_b = (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                    [0U][0U] >> 0x18U);
    __Vfunc_aes_mvm__1320__vec_c = 0U;
    __Vfunc_aes_mvm__1320__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1320__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1320__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1320__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1320__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1320__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1320__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1320__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1320__vec_b)))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1320__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1320__vec_b)))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1320__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1320__vec_b)))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1320__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1320__vec_b)))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1320__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1320__vec_b)))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1320__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1320__vec_b)))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1320__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1320__vec_b)))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1320__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1320__vec_b)))));
    __Vfunc_aes_mvm__1320__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1320__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1320__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1320__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1320__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1320__Vfuncout = __Vfunc_aes_mvm__1320__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__1320__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__1321__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__1322__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__1325__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1325__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1325__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1325__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1325__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1325__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1325__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1325__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1325__vec_b = (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                    [1U][0U] >> 0x18U);
    __Vfunc_aes_mvm__1325__vec_c = 0U;
    __Vfunc_aes_mvm__1325__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1325__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1325__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1325__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1325__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1325__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1325__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1325__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1325__vec_b)))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1325__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1325__vec_b)))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1325__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1325__vec_b)))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1325__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1325__vec_b)))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1325__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1325__vec_b)))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1325__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1325__vec_b)))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1325__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1325__vec_b)))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1325__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1325__vec_b)))));
    __Vfunc_aes_mvm__1325__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1325__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1325__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1325__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1325__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1325__Vfuncout = __Vfunc_aes_mvm__1325__vec_c;
    vlSelf->__Vfunc_aes_mvm__1324__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1324__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__1324__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__1324__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__1324__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__1324__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1324__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__1324__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__1324__vec_b = (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                    [1U][0U] >> 0x18U);
    __Vfunc_aes_mvm__1324__vec_c = 0U;
    __Vfunc_aes_mvm__1324__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1324__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1324__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1324__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1324__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1324__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1324__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1324__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1324__vec_b)))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1324__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1324__vec_b)))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1324__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1324__vec_b)))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1324__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1324__vec_b)))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1324__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1324__vec_b)))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1324__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1324__vec_b)))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1324__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1324__vec_b)))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1324__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1324__vec_b)))));
    __Vfunc_aes_mvm__1324__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1324__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1324__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1324__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1324__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1324__Vfuncout = __Vfunc_aes_mvm__1324__vec_c;
    vlSelf->__Vfunc_aes_mvm__1323__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1323__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1323__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1323__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1323__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1323__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1323__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1323__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1323__vec_b = (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                    [1U][0U] >> 0x18U);
    __Vfunc_aes_mvm__1323__vec_c = 0U;
    __Vfunc_aes_mvm__1323__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1323__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1323__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1323__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1323__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1323__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1323__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1323__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1323__vec_b)))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1323__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1323__vec_b)))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1323__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1323__vec_b)))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1323__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1323__vec_b)))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1323__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1323__vec_b)))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1323__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1323__vec_b)))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1323__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1323__vec_b)))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1323__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1323__vec_b)))));
    __Vfunc_aes_mvm__1323__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1323__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1323__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1323__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1323__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1323__Vfuncout = __Vfunc_aes_mvm__1323__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__1323__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__1324__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__1325__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1352__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p4__1352__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1353__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1352__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1353__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1352__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1353__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1353__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1353__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1353__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1353__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1353__d)));
    __Vfunc_aes_mul_gf2p2__1353__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1353__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1353__d)));
    __Vfunc_aes_mul_gf2p2__1353__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1353__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1353__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1353__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1353__b)));
    __Vfunc_aes_mul_gf2p2__1353__Vfuncout = __Vfunc_aes_mul_gf2p2__1353__f;
    __Vfunc_aes_mul_gf2p4__1352__a = __Vfunc_aes_mul_gf2p2__1353__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1354__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1352__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1352__delta)));
    __Vfunc_aes_mul_gf2p2__1354__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1352__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1352__gamma)));
    __Vfunc_aes_mul_gf2p2__1354__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1354__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1354__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1354__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1354__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1354__d)));
    __Vfunc_aes_mul_gf2p2__1354__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1354__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1354__d)));
    __Vfunc_aes_mul_gf2p2__1354__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1354__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1354__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1354__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1354__b)));
    __Vfunc_aes_mul_gf2p2__1354__Vfuncout = __Vfunc_aes_mul_gf2p2__1354__f;
    __Vfunc_aes_mul_gf2p4__1352__b = __Vfunc_aes_mul_gf2p2__1354__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1355__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1352__delta));
    __Vfunc_aes_mul_gf2p2__1355__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1352__gamma));
    __Vfunc_aes_mul_gf2p2__1355__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1355__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1355__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1355__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1355__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1355__d)));
    __Vfunc_aes_mul_gf2p2__1355__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1355__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1355__d)));
    __Vfunc_aes_mul_gf2p2__1355__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1355__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1355__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1355__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1355__b)));
    __Vfunc_aes_mul_gf2p2__1355__Vfuncout = __Vfunc_aes_mul_gf2p2__1355__f;
    __Vfunc_aes_mul_gf2p4__1352__c = __Vfunc_aes_mul_gf2p2__1355__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1356__g = __Vfunc_aes_mul_gf2p4__1352__b;
    __Vfunc_aes_scale_omega2_gf2p2__1356__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1356__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1356__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1356__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1356__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1352__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1352__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1352__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1356__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1357__g = __Vfunc_aes_mul_gf2p4__1352__b;
    __Vfunc_aes_scale_omega2_gf2p2__1357__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1357__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1357__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1357__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1357__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1352__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1352__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1352__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1357__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1352__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1352__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__1352__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1358__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p4__1358__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1359__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1358__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1359__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1358__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1359__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1359__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1359__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1359__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1359__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1359__d)));
    __Vfunc_aes_mul_gf2p2__1359__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1359__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1359__d)));
    __Vfunc_aes_mul_gf2p2__1359__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1359__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1359__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1359__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1359__b)));
    __Vfunc_aes_mul_gf2p2__1359__Vfuncout = __Vfunc_aes_mul_gf2p2__1359__f;
    __Vfunc_aes_mul_gf2p4__1358__a = __Vfunc_aes_mul_gf2p2__1359__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1360__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1358__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1358__delta)));
    __Vfunc_aes_mul_gf2p2__1360__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1358__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1358__gamma)));
    __Vfunc_aes_mul_gf2p2__1360__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1360__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1360__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1360__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1360__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1360__d)));
    __Vfunc_aes_mul_gf2p2__1360__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1360__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1360__d)));
    __Vfunc_aes_mul_gf2p2__1360__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1360__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1360__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1360__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1360__b)));
    __Vfunc_aes_mul_gf2p2__1360__Vfuncout = __Vfunc_aes_mul_gf2p2__1360__f;
    __Vfunc_aes_mul_gf2p4__1358__b = __Vfunc_aes_mul_gf2p2__1360__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1361__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1358__delta));
    __Vfunc_aes_mul_gf2p2__1361__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1358__gamma));
    __Vfunc_aes_mul_gf2p2__1361__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1361__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1361__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1361__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1361__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1361__d)));
    __Vfunc_aes_mul_gf2p2__1361__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1361__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1361__d)));
    __Vfunc_aes_mul_gf2p2__1361__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1361__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1361__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1361__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1361__b)));
    __Vfunc_aes_mul_gf2p2__1361__Vfuncout = __Vfunc_aes_mul_gf2p2__1361__f;
    __Vfunc_aes_mul_gf2p4__1358__c = __Vfunc_aes_mul_gf2p2__1361__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1362__g = __Vfunc_aes_mul_gf2p4__1358__b;
    __Vfunc_aes_scale_omega2_gf2p2__1362__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1362__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1362__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1362__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1362__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1358__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1358__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1358__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1362__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1363__g = __Vfunc_aes_mul_gf2p4__1358__b;
    __Vfunc_aes_scale_omega2_gf2p2__1363__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1363__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1363__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1363__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1363__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1358__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1358__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1358__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1363__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1358__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1358__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__1358__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1376__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1376__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1376__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1376__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1376__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1376__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1376__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1376__d)));
    __Vfunc_aes_mul_gf2p2__1376__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1376__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1376__d)));
    __Vfunc_aes_mul_gf2p2__1376__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1376__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1376__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1376__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1376__b)));
    __Vfunc_aes_mul_gf2p2__1376__Vfuncout = __Vfunc_aes_mul_gf2p2__1376__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1376__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1377__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1377__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1377__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1377__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1377__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1377__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1377__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1377__d)));
    __Vfunc_aes_mul_gf2p2__1377__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1377__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1377__d)));
    __Vfunc_aes_mul_gf2p2__1377__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1377__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1377__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1377__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1377__b)));
    __Vfunc_aes_mul_gf2p2__1377__Vfuncout = __Vfunc_aes_mul_gf2p2__1377__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1377__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1380__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1380__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1380__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1380__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1380__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1380__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1380__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1380__d)));
    __Vfunc_aes_mul_gf2p2__1380__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1380__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1380__d)));
    __Vfunc_aes_mul_gf2p2__1380__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1380__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1380__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1380__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1380__b)));
    __Vfunc_aes_mul_gf2p2__1380__Vfuncout = __Vfunc_aes_mul_gf2p2__1380__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1380__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1381__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1381__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__1381__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1381__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1381__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1381__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1381__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1381__d)));
    __Vfunc_aes_mul_gf2p2__1381__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1381__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1381__d)));
    __Vfunc_aes_mul_gf2p2__1381__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1381__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1381__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1381__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1381__b)));
    __Vfunc_aes_mul_gf2p2__1381__Vfuncout = __Vfunc_aes_mul_gf2p2__1381__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1381__Vfuncout;
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
    vlSelf->__Vfunc_aes_mvm__1331__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1331__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1331__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1331__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1331__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1331__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1331__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1331__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1331__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1331__vec_c = 0U;
    __Vfunc_aes_mvm__1331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1331__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1331__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1331__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1331__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1331__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1331__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1331__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1331__vec_b)))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1331__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1331__vec_b)))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1331__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1331__vec_b)))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1331__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1331__vec_b)))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1331__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1331__vec_b)))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1331__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1331__vec_b)))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1331__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1331__vec_b)))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1331__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1331__vec_b)))));
    __Vfunc_aes_mvm__1331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1331__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1331__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1331__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1331__Vfuncout = __Vfunc_aes_mvm__1331__vec_c;
    vlSelf->__Vfunc_aes_mvm__1330__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__1330__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__1330__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__1330__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1330__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__1330__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__1330__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__1330__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__1330__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1330__vec_c = 0U;
    __Vfunc_aes_mvm__1330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1330__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1330__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1330__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1330__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1330__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1330__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1330__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1330__vec_b)))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1330__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1330__vec_b)))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1330__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1330__vec_b)))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1330__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1330__vec_b)))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1330__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1330__vec_b)))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1330__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1330__vec_b)))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1330__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1330__vec_b)))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1330__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1330__vec_b)))));
    __Vfunc_aes_mvm__1330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1330__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1330__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1330__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1330__Vfuncout = __Vfunc_aes_mvm__1330__vec_c;
    vlSelf->__Vfunc_aes_mvm__1329__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1329__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1329__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1329__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1329__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1329__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1329__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1329__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1329__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1329__vec_c = 0U;
    __Vfunc_aes_mvm__1329__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1329__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1329__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1329__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1329__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1329__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1329__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1329__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1329__vec_b)))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1329__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1329__vec_b)))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1329__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1329__vec_b)))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1329__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1329__vec_b)))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1329__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1329__vec_b)))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1329__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1329__vec_b)))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1329__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1329__vec_b)))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1329__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1329__vec_b)))));
    __Vfunc_aes_mvm__1329__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1329__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1329__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1329__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1329__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1329__Vfuncout = __Vfunc_aes_mvm__1329__vec_c;
    vlSelf->mask_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (IData)(__Vfunc_aes_mvm__1329__Vfuncout)
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__1330__Vfuncout)
                           : (IData)(__Vfunc_aes_mvm__1331__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__1328__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1328__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1328__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1328__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1328__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1328__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1328__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1328__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1328__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1328__vec_c = 0U;
    __Vfunc_aes_mvm__1328__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1328__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1328__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1328__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1328__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1328__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1328__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1328__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1328__vec_b)))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1328__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1328__vec_b)))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1328__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1328__vec_b)))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1328__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1328__vec_b)))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1328__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1328__vec_b)))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1328__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1328__vec_b)))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1328__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1328__vec_b)))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1328__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1328__vec_b)))));
    __Vfunc_aes_mvm__1328__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1328__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1328__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1328__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1328__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1328__Vfuncout = __Vfunc_aes_mvm__1328__vec_c;
    vlSelf->__Vfunc_aes_mvm__1327__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__1327__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__1327__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__1327__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1327__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__1327__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__1327__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__1327__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__1327__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1327__vec_c = 0U;
    __Vfunc_aes_mvm__1327__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1327__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1327__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1327__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1327__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1327__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1327__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1327__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1327__vec_b)))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1327__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1327__vec_b)))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1327__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1327__vec_b)))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1327__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1327__vec_b)))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1327__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1327__vec_b)))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1327__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1327__vec_b)))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1327__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1327__vec_b)))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1327__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1327__vec_b)))));
    __Vfunc_aes_mvm__1327__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1327__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1327__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1327__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1327__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1327__Vfuncout = __Vfunc_aes_mvm__1327__vec_c;
    vlSelf->__Vfunc_aes_mvm__1326__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1326__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1326__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1326__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1326__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1326__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1326__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1326__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1326__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1326__vec_c = 0U;
    __Vfunc_aes_mvm__1326__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1326__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1326__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1326__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1326__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1326__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1326__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1326__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1326__vec_b)))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1326__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1326__vec_b)))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1326__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1326__vec_b)))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1326__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1326__vec_b)))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1326__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1326__vec_b)))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1326__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1326__vec_b)))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1326__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1326__vec_b)))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1326__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1326__vec_b)))));
    __Vfunc_aes_mvm__1326__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1326__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1326__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1326__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1326__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1326__Vfuncout = __Vfunc_aes_mvm__1326__vec_c;
    vlSelf->data_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (0x63U ^ (IData)(__Vfunc_aes_mvm__1326__Vfuncout))
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__1327__Vfuncout)
                           : (0x63U ^ (IData)(__Vfunc_aes_mvm__1328__Vfuncout))));
    __Vfunc_aes_mul_gf2p2__1372__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1372__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1372__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1372__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1372__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1372__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1372__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1372__d)));
    __Vfunc_aes_mul_gf2p2__1372__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1372__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1372__d)));
    __Vfunc_aes_mul_gf2p2__1372__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1372__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1372__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1372__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1372__b)));
    __Vfunc_aes_mul_gf2p2__1372__Vfuncout = __Vfunc_aes_mul_gf2p2__1372__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1372__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1373__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1373__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1373__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1373__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1373__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1373__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1373__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1373__d)));
    __Vfunc_aes_mul_gf2p2__1373__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1373__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1373__d)));
    __Vfunc_aes_mul_gf2p2__1373__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1373__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1373__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1373__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1373__b)));
    __Vfunc_aes_mul_gf2p2__1373__Vfuncout = __Vfunc_aes_mul_gf2p2__1373__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1373__Vfuncout;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d 
        = (((IData)(vlSelf->out_req_o) & (3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_out_ack)))
            ? 0U : (7U & ((IData)(vlSelf->out_req_o)
                           ? (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)
                           : ((3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_en))
                               ? ((IData)(1U) + (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q))
                               : (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1332__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1332__gamma)));
    __Vfunc_aes_square_gf2p2__1333__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1332__gamma));
    __Vfunc_aes_square_gf2p2__1333__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1333__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1333__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1333__Vfuncout = __Vfunc_aes_square_gf2p2__1333__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__b = __Vfunc_aes_square_gf2p2__1333__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__1335__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__b;
    __Vfunc_aes_scale_omega_gf2p2__1335__d = ((2U & 
                                               (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__1335__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_aes_scale_omega_gf2p2__1335__g) 
                                                    >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__1335__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__1335__d;
    __Vfunc_aes_square_gf2p2__1334__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__a;
    __Vfunc_aes_square_gf2p2__1334__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1334__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1334__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1334__Vfuncout = __Vfunc_aes_square_gf2p2__1334__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__1334__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__1335__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1336__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1336__gamma)));
    __Vfunc_aes_square_gf2p2__1337__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1336__gamma));
    __Vfunc_aes_square_gf2p2__1337__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1337__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1337__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1337__Vfuncout = __Vfunc_aes_square_gf2p2__1337__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__b = __Vfunc_aes_square_gf2p2__1337__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__1339__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__b;
    __Vfunc_aes_scale_omega_gf2p2__1339__d = ((2U & 
                                               (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__1339__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_aes_scale_omega_gf2p2__1339__g) 
                                                    >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__1339__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__1339__d;
    __Vfunc_aes_square_gf2p2__1338__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__a;
    __Vfunc_aes_square_gf2p2__1338__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1338__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1338__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1338__Vfuncout = __Vfunc_aes_square_gf2p2__1338__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__1338__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__1339__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__Vfuncout;
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
    __Vfunc_aes_square_gf2p2__1368__g = (3U & ((((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                 ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)) 
                                               >> 2U));
    __Vfunc_aes_square_gf2p2__1368__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1368__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1368__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1368__Vfuncout = __Vfunc_aes_square_gf2p2__1368__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__1368__Vfuncout;
    __Vfunc_aes_square_gf2p2__1369__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__1369__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1369__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1369__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1369__Vfuncout = __Vfunc_aes_square_gf2p2__1369__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__1369__Vfuncout;
    __Vfunc_aes_square_gf2p2__1365__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                >> 6U) 
                                               ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                  >> 4U)));
    __Vfunc_aes_square_gf2p2__1365__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1365__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1365__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1365__Vfuncout = __Vfunc_aes_square_gf2p2__1365__d;
    __Vfunc_aes_scale_omega2_gf2p2__1364__g = __Vfunc_aes_square_gf2p2__1365__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1364__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1364__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1364__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1364__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1364__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1364__Vfuncout;
    __Vfunc_aes_square_gf2p2__1367__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                >> 2U) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i)));
    __Vfunc_aes_square_gf2p2__1367__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1367__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1367__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1367__Vfuncout = __Vfunc_aes_square_gf2p2__1367__d;
    __Vfunc_aes_scale_omega2_gf2p2__1366__g = __Vfunc_aes_square_gf2p2__1367__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1366__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1366__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1366__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1366__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1366__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1366__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1388__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1388__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1389__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1388__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1389__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1388__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1389__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1389__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1389__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1389__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1389__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1389__d)));
    __Vfunc_aes_mul_gf2p2__1389__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1389__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1389__d)));
    __Vfunc_aes_mul_gf2p2__1389__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1389__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1389__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1389__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1389__b)));
    __Vfunc_aes_mul_gf2p2__1389__Vfuncout = __Vfunc_aes_mul_gf2p2__1389__f;
    __Vfunc_aes_mul_gf2p4__1388__a = __Vfunc_aes_mul_gf2p2__1389__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1390__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1388__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1388__delta)));
    __Vfunc_aes_mul_gf2p2__1390__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1388__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1388__gamma)));
    __Vfunc_aes_mul_gf2p2__1390__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1390__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1390__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1390__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1390__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1390__d)));
    __Vfunc_aes_mul_gf2p2__1390__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1390__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1390__d)));
    __Vfunc_aes_mul_gf2p2__1390__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1390__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1390__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1390__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1390__b)));
    __Vfunc_aes_mul_gf2p2__1390__Vfuncout = __Vfunc_aes_mul_gf2p2__1390__f;
    __Vfunc_aes_mul_gf2p4__1388__b = __Vfunc_aes_mul_gf2p2__1390__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1391__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1388__delta));
    __Vfunc_aes_mul_gf2p2__1391__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1388__gamma));
    __Vfunc_aes_mul_gf2p2__1391__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1391__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1391__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1391__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1391__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1391__d)));
    __Vfunc_aes_mul_gf2p2__1391__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1391__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1391__d)));
    __Vfunc_aes_mul_gf2p2__1391__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1391__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1391__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1391__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1391__b)));
    __Vfunc_aes_mul_gf2p2__1391__Vfuncout = __Vfunc_aes_mul_gf2p2__1391__f;
    __Vfunc_aes_mul_gf2p4__1388__c = __Vfunc_aes_mul_gf2p2__1391__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1392__g = __Vfunc_aes_mul_gf2p4__1388__b;
    __Vfunc_aes_scale_omega2_gf2p2__1392__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1392__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1392__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1392__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1392__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1388__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1388__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1388__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1392__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1393__g = __Vfunc_aes_mul_gf2p4__1388__b;
    __Vfunc_aes_scale_omega2_gf2p2__1393__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1393__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1393__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1393__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1393__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1388__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1388__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1388__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1393__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1388__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1388__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1388__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1394__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1394__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1395__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1394__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1395__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1394__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1395__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1395__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1395__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1395__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1395__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1395__d)));
    __Vfunc_aes_mul_gf2p2__1395__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1395__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1395__d)));
    __Vfunc_aes_mul_gf2p2__1395__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1395__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1395__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1395__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1395__b)));
    __Vfunc_aes_mul_gf2p2__1395__Vfuncout = __Vfunc_aes_mul_gf2p2__1395__f;
    __Vfunc_aes_mul_gf2p4__1394__a = __Vfunc_aes_mul_gf2p2__1395__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1396__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1394__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1394__delta)));
    __Vfunc_aes_mul_gf2p2__1396__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1394__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1394__gamma)));
    __Vfunc_aes_mul_gf2p2__1396__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1396__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1396__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1396__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1396__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1396__d)));
    __Vfunc_aes_mul_gf2p2__1396__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1396__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1396__d)));
    __Vfunc_aes_mul_gf2p2__1396__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1396__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1396__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1396__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1396__b)));
    __Vfunc_aes_mul_gf2p2__1396__Vfuncout = __Vfunc_aes_mul_gf2p2__1396__f;
    __Vfunc_aes_mul_gf2p4__1394__b = __Vfunc_aes_mul_gf2p2__1396__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1397__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1394__delta));
    __Vfunc_aes_mul_gf2p2__1397__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1394__gamma));
    __Vfunc_aes_mul_gf2p2__1397__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1397__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1397__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1397__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1397__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1397__d)));
    __Vfunc_aes_mul_gf2p2__1397__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1397__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1397__d)));
    __Vfunc_aes_mul_gf2p2__1397__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1397__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1397__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1397__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1397__b)));
    __Vfunc_aes_mul_gf2p2__1397__Vfuncout = __Vfunc_aes_mul_gf2p2__1397__f;
    __Vfunc_aes_mul_gf2p4__1394__c = __Vfunc_aes_mul_gf2p2__1397__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1398__g = __Vfunc_aes_mul_gf2p4__1394__b;
    __Vfunc_aes_scale_omega2_gf2p2__1398__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1398__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1398__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1398__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1398__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1394__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1394__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1394__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1398__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1399__g = __Vfunc_aes_mul_gf2p4__1394__b;
    __Vfunc_aes_scale_omega2_gf2p2__1399__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1399__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1399__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1399__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1399__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1394__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1394__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1394__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1399__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1394__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1394__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1394__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1412__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1412__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p2__1413__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1412__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1413__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1412__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1413__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1413__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1413__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1413__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1413__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1413__d)));
    __Vfunc_aes_mul_gf2p2__1413__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1413__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1413__d)));
    __Vfunc_aes_mul_gf2p2__1413__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1413__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1413__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1413__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1413__b)));
    __Vfunc_aes_mul_gf2p2__1413__Vfuncout = __Vfunc_aes_mul_gf2p2__1413__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1412__a = __Vfunc_aes_mul_gf2p2__1413__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1414__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1412__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1412__delta)));
    __Vfunc_aes_mul_gf2p2__1414__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1412__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1412__gamma)));
    __Vfunc_aes_mul_gf2p2__1414__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1414__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1414__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1414__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1414__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1414__d)));
    __Vfunc_aes_mul_gf2p2__1414__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1414__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1414__d)));
    __Vfunc_aes_mul_gf2p2__1414__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1414__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1414__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1414__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1414__b)));
    __Vfunc_aes_mul_gf2p2__1414__Vfuncout = __Vfunc_aes_mul_gf2p2__1414__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1412__b = __Vfunc_aes_mul_gf2p2__1414__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1415__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1412__delta));
    __Vfunc_aes_mul_gf2p2__1415__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1412__gamma));
    vlSelf->__Vfunc_aes_mul_gf2p2__1415__a = (1U & 
                                              (((IData)(__Vfunc_aes_mul_gf2p2__1415__g) 
                                                & (IData)(__Vfunc_aes_mul_gf2p2__1415__d)) 
                                               >> 1U));
    vlSelf->__Vfunc_aes_mul_gf2p2__1415__b = (1U & 
                                              (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1415__g) 
                                               & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1415__d)));
    vlSelf->__Vfunc_aes_mul_gf2p2__1415__c = (1U & 
                                              ((IData)(__Vfunc_aes_mul_gf2p2__1415__g) 
                                               & (IData)(__Vfunc_aes_mul_gf2p2__1415__d)));
    __Vfunc_aes_mul_gf2p2__1415__f = ((((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1415__a) 
                                        ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1415__b)) 
                                       << 1U) | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1415__c) 
                                                 ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1415__b)));
    __Vfunc_aes_mul_gf2p2__1415__Vfuncout = __Vfunc_aes_mul_gf2p2__1415__f;
    __Vfunc_aes_mul_gf2p4__1412__c = __Vfunc_aes_mul_gf2p2__1415__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1416__g = vlSelf->__Vfunc_aes_mul_gf2p4__1412__b;
    __Vfunc_aes_scale_omega2_gf2p2__1416__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1416__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1416__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1416__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1416__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1412__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1412__theta)) 
                                                  | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1412__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1416__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1417__g = vlSelf->__Vfunc_aes_mul_gf2p4__1412__b;
    __Vfunc_aes_scale_omega2_gf2p2__1417__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1417__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1417__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1417__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1417__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1412__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1412__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1412__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1417__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1412__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1412__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1412__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1424__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1424__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 8U));
    __Vfunc_aes_mul_gf2p2__1425__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1424__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1425__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1424__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1425__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1425__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1425__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1425__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1425__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1425__d)));
    __Vfunc_aes_mul_gf2p2__1425__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1425__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1425__d)));
    __Vfunc_aes_mul_gf2p2__1425__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1425__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1425__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1425__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1425__b)));
    __Vfunc_aes_mul_gf2p2__1425__Vfuncout = __Vfunc_aes_mul_gf2p2__1425__f;
    __Vfunc_aes_mul_gf2p4__1424__a = __Vfunc_aes_mul_gf2p2__1425__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1426__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1424__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1424__delta)));
    __Vfunc_aes_mul_gf2p2__1426__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1424__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1424__gamma)));
    __Vfunc_aes_mul_gf2p2__1426__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1426__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1426__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1426__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1426__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1426__d)));
    __Vfunc_aes_mul_gf2p2__1426__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1426__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1426__d)));
    __Vfunc_aes_mul_gf2p2__1426__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1426__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1426__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1426__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1426__b)));
    __Vfunc_aes_mul_gf2p2__1426__Vfuncout = __Vfunc_aes_mul_gf2p2__1426__f;
    __Vfunc_aes_mul_gf2p4__1424__b = __Vfunc_aes_mul_gf2p2__1426__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1427__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1424__delta));
    __Vfunc_aes_mul_gf2p2__1427__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1424__gamma));
    __Vfunc_aes_mul_gf2p2__1427__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1427__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1427__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1427__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1427__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1427__d)));
    __Vfunc_aes_mul_gf2p2__1427__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1427__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1427__d)));
    __Vfunc_aes_mul_gf2p2__1427__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1427__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1427__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1427__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1427__b)));
    __Vfunc_aes_mul_gf2p2__1427__Vfuncout = __Vfunc_aes_mul_gf2p2__1427__f;
    __Vfunc_aes_mul_gf2p4__1424__c = __Vfunc_aes_mul_gf2p2__1427__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1428__g = __Vfunc_aes_mul_gf2p4__1424__b;
    __Vfunc_aes_scale_omega2_gf2p2__1428__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1428__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1428__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1428__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1428__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1424__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1424__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1424__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1428__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1429__g = __Vfunc_aes_mul_gf2p4__1424__b;
    __Vfunc_aes_scale_omega2_gf2p2__1429__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1429__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1429__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1429__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1429__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1424__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1424__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1424__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1429__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1424__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1424__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1424__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1382__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p4__1382__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1383__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1382__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1383__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1382__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1383__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1383__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1383__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1383__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1383__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1383__d)));
    __Vfunc_aes_mul_gf2p2__1383__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1383__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1383__d)));
    __Vfunc_aes_mul_gf2p2__1383__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1383__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1383__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1383__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1383__b)));
    __Vfunc_aes_mul_gf2p2__1383__Vfuncout = __Vfunc_aes_mul_gf2p2__1383__f;
    __Vfunc_aes_mul_gf2p4__1382__a = __Vfunc_aes_mul_gf2p2__1383__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1384__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1382__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1382__delta)));
    __Vfunc_aes_mul_gf2p2__1384__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1382__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1382__gamma)));
    __Vfunc_aes_mul_gf2p2__1384__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1384__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1384__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1384__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1384__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1384__d)));
    __Vfunc_aes_mul_gf2p2__1384__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1384__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1384__d)));
    __Vfunc_aes_mul_gf2p2__1384__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1384__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1384__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1384__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1384__b)));
    __Vfunc_aes_mul_gf2p2__1384__Vfuncout = __Vfunc_aes_mul_gf2p2__1384__f;
    __Vfunc_aes_mul_gf2p4__1382__b = __Vfunc_aes_mul_gf2p2__1384__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1385__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1382__delta));
    __Vfunc_aes_mul_gf2p2__1385__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1382__gamma));
    __Vfunc_aes_mul_gf2p2__1385__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1385__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1385__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1385__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1385__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1385__d)));
    __Vfunc_aes_mul_gf2p2__1385__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1385__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1385__d)));
    __Vfunc_aes_mul_gf2p2__1385__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1385__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1385__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1385__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1385__b)));
    __Vfunc_aes_mul_gf2p2__1385__Vfuncout = __Vfunc_aes_mul_gf2p2__1385__f;
    __Vfunc_aes_mul_gf2p4__1382__c = __Vfunc_aes_mul_gf2p2__1385__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1386__g = __Vfunc_aes_mul_gf2p4__1382__b;
    __Vfunc_aes_scale_omega2_gf2p2__1386__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1386__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1386__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1386__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1386__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1382__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1382__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1382__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1386__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1387__g = __Vfunc_aes_mul_gf2p4__1382__b;
    __Vfunc_aes_scale_omega2_gf2p2__1387__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1387__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1387__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1387__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1387__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1382__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1382__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1382__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1387__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1382__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1382__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1382__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1400__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p4__1400__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1401__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1400__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1401__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1400__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1401__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1401__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1401__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1401__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1401__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1401__d)));
    __Vfunc_aes_mul_gf2p2__1401__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1401__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1401__d)));
    __Vfunc_aes_mul_gf2p2__1401__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1401__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1401__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1401__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1401__b)));
    __Vfunc_aes_mul_gf2p2__1401__Vfuncout = __Vfunc_aes_mul_gf2p2__1401__f;
    __Vfunc_aes_mul_gf2p4__1400__a = __Vfunc_aes_mul_gf2p2__1401__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1402__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1400__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1400__delta)));
    __Vfunc_aes_mul_gf2p2__1402__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1400__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1400__gamma)));
    __Vfunc_aes_mul_gf2p2__1402__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1402__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1402__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1402__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1402__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1402__d)));
    __Vfunc_aes_mul_gf2p2__1402__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1402__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1402__d)));
    __Vfunc_aes_mul_gf2p2__1402__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1402__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1402__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1402__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1402__b)));
    __Vfunc_aes_mul_gf2p2__1402__Vfuncout = __Vfunc_aes_mul_gf2p2__1402__f;
    __Vfunc_aes_mul_gf2p4__1400__b = __Vfunc_aes_mul_gf2p2__1402__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1403__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1400__delta));
    __Vfunc_aes_mul_gf2p2__1403__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1400__gamma));
    __Vfunc_aes_mul_gf2p2__1403__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1403__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1403__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1403__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1403__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1403__d)));
    __Vfunc_aes_mul_gf2p2__1403__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1403__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1403__d)));
    __Vfunc_aes_mul_gf2p2__1403__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1403__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1403__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1403__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1403__b)));
    __Vfunc_aes_mul_gf2p2__1403__Vfuncout = __Vfunc_aes_mul_gf2p2__1403__f;
    __Vfunc_aes_mul_gf2p4__1400__c = __Vfunc_aes_mul_gf2p2__1403__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1404__g = __Vfunc_aes_mul_gf2p4__1400__b;
    __Vfunc_aes_scale_omega2_gf2p2__1404__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1404__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1404__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1404__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1404__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1400__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1400__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1400__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1404__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1405__g = __Vfunc_aes_mul_gf2p4__1400__b;
    __Vfunc_aes_scale_omega2_gf2p2__1405__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1405__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1405__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1405__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1405__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1400__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1400__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1400__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1405__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1400__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1400__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1400__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1406__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 8U));
    __Vfunc_aes_mul_gf2p4__1406__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1407__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1406__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1407__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1406__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1407__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1407__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1407__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1407__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1407__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1407__d)));
    __Vfunc_aes_mul_gf2p2__1407__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1407__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1407__d)));
    __Vfunc_aes_mul_gf2p2__1407__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1407__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1407__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1407__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1407__b)));
    __Vfunc_aes_mul_gf2p2__1407__Vfuncout = __Vfunc_aes_mul_gf2p2__1407__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1406__a = __Vfunc_aes_mul_gf2p2__1407__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1408__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1406__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1406__delta)));
    __Vfunc_aes_mul_gf2p2__1408__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1406__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1406__gamma)));
    __Vfunc_aes_mul_gf2p2__1408__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1408__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1408__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1408__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1408__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1408__d)));
    __Vfunc_aes_mul_gf2p2__1408__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1408__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1408__d)));
    __Vfunc_aes_mul_gf2p2__1408__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1408__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1408__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1408__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1408__b)));
    __Vfunc_aes_mul_gf2p2__1408__Vfuncout = __Vfunc_aes_mul_gf2p2__1408__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1406__b = __Vfunc_aes_mul_gf2p2__1408__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1409__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1406__delta));
    __Vfunc_aes_mul_gf2p2__1409__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1406__gamma));
    __Vfunc_aes_mul_gf2p2__1409__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1409__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1409__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1409__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1409__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1409__d)));
    __Vfunc_aes_mul_gf2p2__1409__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1409__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1409__d)));
    __Vfunc_aes_mul_gf2p2__1409__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1409__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1409__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1409__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1409__b)));
    __Vfunc_aes_mul_gf2p2__1409__Vfuncout = __Vfunc_aes_mul_gf2p2__1409__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1406__c = __Vfunc_aes_mul_gf2p2__1409__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1410__g = vlSelf->__Vfunc_aes_mul_gf2p4__1406__b;
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1410__d 
        = ((2U & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1410__g) 
                  << 1U)) | (1U & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1410__g)));
}
