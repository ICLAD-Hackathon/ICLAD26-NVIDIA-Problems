// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb_aes_sbox__S4.h"

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__86(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__86\n"); );
    // Init
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1368__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1368__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1368__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1369__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1369__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1369__d;
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
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1406__Vfuncout;
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
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1410__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1410__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1411__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1411__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1411__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1412__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1412__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1415__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1415__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1416__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1416__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1416__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1417__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1417__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1417__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1418__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1418__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1418__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1418__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1418__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1418__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1419__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1419__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1419__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1419__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1419__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1419__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1419__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1420__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1420__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1420__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1420__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1420__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1420__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1420__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1421__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1421__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1421__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1421__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1421__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1421__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1421__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1422__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1422__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1422__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1423__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1423__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1423__d;
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
    __Vfunc_aes_scale_omega2_gf2p2__1410__Vfuncout 
        = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1410__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1406__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1406__theta)) 
                                                  | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1406__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1410__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1411__g = vlSelf->__Vfunc_aes_mul_gf2p4__1406__b;
    __Vfunc_aes_scale_omega2_gf2p2__1411__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1411__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1411__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1411__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1411__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1406__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1406__theta)) 
                                                  | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1406__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1411__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1406__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1406__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1406__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1418__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1418__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1419__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1418__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1419__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1418__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1419__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1419__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1419__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1419__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1419__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1419__d)));
    __Vfunc_aes_mul_gf2p2__1419__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1419__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1419__d)));
    __Vfunc_aes_mul_gf2p2__1419__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1419__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1419__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1419__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1419__b)));
    __Vfunc_aes_mul_gf2p2__1419__Vfuncout = __Vfunc_aes_mul_gf2p2__1419__f;
    __Vfunc_aes_mul_gf2p4__1418__a = __Vfunc_aes_mul_gf2p2__1419__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1420__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1418__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1418__delta)));
    __Vfunc_aes_mul_gf2p2__1420__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1418__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1418__gamma)));
    __Vfunc_aes_mul_gf2p2__1420__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1420__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1420__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1420__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1420__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1420__d)));
    __Vfunc_aes_mul_gf2p2__1420__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1420__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1420__d)));
    __Vfunc_aes_mul_gf2p2__1420__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1420__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1420__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1420__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1420__b)));
    __Vfunc_aes_mul_gf2p2__1420__Vfuncout = __Vfunc_aes_mul_gf2p2__1420__f;
    __Vfunc_aes_mul_gf2p4__1418__b = __Vfunc_aes_mul_gf2p2__1420__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1421__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1418__delta));
    __Vfunc_aes_mul_gf2p2__1421__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1418__gamma));
    __Vfunc_aes_mul_gf2p2__1421__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1421__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1421__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1421__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1421__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1421__d)));
    __Vfunc_aes_mul_gf2p2__1421__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1421__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1421__d)));
    __Vfunc_aes_mul_gf2p2__1421__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1421__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1421__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1421__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1421__b)));
    __Vfunc_aes_mul_gf2p2__1421__Vfuncout = __Vfunc_aes_mul_gf2p2__1421__f;
    __Vfunc_aes_mul_gf2p4__1418__c = __Vfunc_aes_mul_gf2p2__1421__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1422__g = __Vfunc_aes_mul_gf2p4__1418__b;
    __Vfunc_aes_scale_omega2_gf2p2__1422__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1422__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1422__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1422__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1422__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1418__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1418__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1418__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1422__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1423__g = __Vfunc_aes_mul_gf2p4__1418__b;
    __Vfunc_aes_scale_omega2_gf2p2__1423__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1423__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1423__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1423__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1423__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1418__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1418__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1418__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1423__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1418__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1418__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1418__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
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
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__88(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__88\n"); );
    // Init
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1478__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1478__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1478__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1479__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1479__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1479__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1492__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1492__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1492__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1492__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1492__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1492__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1493__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1493__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1493__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1493__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1493__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1493__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1493__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1494__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1494__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1494__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1494__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1494__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1494__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1494__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1495__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1495__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1495__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1495__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1495__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1495__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1495__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1496__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1496__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1496__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1497__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1497__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1497__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1510__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1510__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1510__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1510__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1510__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1510__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1511__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1511__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1511__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1511__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1511__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1511__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1511__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1512__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1512__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1512__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1512__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1512__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1512__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1512__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1513__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1513__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1513__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1513__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1513__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1513__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1513__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1514__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1514__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1514__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1515__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1515__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1515__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1516__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1516__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1516__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1517__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1517__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1517__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1517__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1517__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1517__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1517__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1518__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1518__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1518__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1518__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1518__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1518__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1518__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1519__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1519__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1519__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1519__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1519__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1519__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1519__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1520__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1520__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1521__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1521__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1521__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1522__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1522__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1525__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1525__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1526__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1526__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1526__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1527__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1527__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1527__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1528__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1528__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1528__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1528__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1528__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1528__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1529__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1529__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1529__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1529__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1529__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1529__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1529__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1530__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1530__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1530__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1530__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1530__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1530__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1530__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1531__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1531__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1531__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1531__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1531__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1531__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1531__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1532__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1532__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1532__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1533__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1533__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1533__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1534__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1534__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1534__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1534__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1534__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1534__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1535__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1535__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1535__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1535__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1535__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1535__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1535__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1536__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1536__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1536__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1536__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1536__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1536__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1536__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1537__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1537__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1537__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1537__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1537__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1537__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1537__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1538__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1538__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1538__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1539__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1539__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1539__d;
    // Body
    __Vfunc_aes_mul_gf2p2__1525__f = ((((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1525__a) 
                                        ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1525__b)) 
                                       << 1U) | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1525__c) 
                                                 ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1525__b)));
    __Vfunc_aes_mul_gf2p2__1525__Vfuncout = __Vfunc_aes_mul_gf2p2__1525__f;
    __Vfunc_aes_mul_gf2p4__1522__c = __Vfunc_aes_mul_gf2p2__1525__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1526__g = vlSelf->__Vfunc_aes_mul_gf2p4__1522__b;
    __Vfunc_aes_scale_omega2_gf2p2__1526__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1526__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1526__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1526__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1526__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1522__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1522__theta)) 
                                                  | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1522__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1526__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1527__g = vlSelf->__Vfunc_aes_mul_gf2p4__1522__b;
    __Vfunc_aes_scale_omega2_gf2p2__1527__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1527__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1527__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1527__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1527__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1522__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1522__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1522__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1527__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1522__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1522__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1522__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1534__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1534__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 8U));
    __Vfunc_aes_mul_gf2p2__1535__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1534__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1535__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1534__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1535__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1535__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1535__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1535__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1535__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1535__d)));
    __Vfunc_aes_mul_gf2p2__1535__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1535__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1535__d)));
    __Vfunc_aes_mul_gf2p2__1535__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1535__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1535__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1535__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1535__b)));
    __Vfunc_aes_mul_gf2p2__1535__Vfuncout = __Vfunc_aes_mul_gf2p2__1535__f;
    __Vfunc_aes_mul_gf2p4__1534__a = __Vfunc_aes_mul_gf2p2__1535__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1536__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1534__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1534__delta)));
    __Vfunc_aes_mul_gf2p2__1536__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1534__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1534__gamma)));
    __Vfunc_aes_mul_gf2p2__1536__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1536__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1536__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1536__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1536__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1536__d)));
    __Vfunc_aes_mul_gf2p2__1536__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1536__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1536__d)));
    __Vfunc_aes_mul_gf2p2__1536__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1536__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1536__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1536__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1536__b)));
    __Vfunc_aes_mul_gf2p2__1536__Vfuncout = __Vfunc_aes_mul_gf2p2__1536__f;
    __Vfunc_aes_mul_gf2p4__1534__b = __Vfunc_aes_mul_gf2p2__1536__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1537__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1534__delta));
    __Vfunc_aes_mul_gf2p2__1537__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1534__gamma));
    __Vfunc_aes_mul_gf2p2__1537__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1537__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1537__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1537__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1537__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1537__d)));
    __Vfunc_aes_mul_gf2p2__1537__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1537__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1537__d)));
    __Vfunc_aes_mul_gf2p2__1537__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1537__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1537__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1537__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1537__b)));
    __Vfunc_aes_mul_gf2p2__1537__Vfuncout = __Vfunc_aes_mul_gf2p2__1537__f;
    __Vfunc_aes_mul_gf2p4__1534__c = __Vfunc_aes_mul_gf2p2__1537__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1538__g = __Vfunc_aes_mul_gf2p4__1534__b;
    __Vfunc_aes_scale_omega2_gf2p2__1538__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1538__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1538__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1538__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1538__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1534__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1534__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1534__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1538__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1539__g = __Vfunc_aes_mul_gf2p4__1534__b;
    __Vfunc_aes_scale_omega2_gf2p2__1539__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1539__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1539__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1539__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1539__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1534__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1534__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1534__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1539__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1534__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1534__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1534__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1492__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p4__1492__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1493__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1492__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1493__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1492__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1493__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1493__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1493__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1493__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1493__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1493__d)));
    __Vfunc_aes_mul_gf2p2__1493__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1493__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1493__d)));
    __Vfunc_aes_mul_gf2p2__1493__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1493__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1493__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1493__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1493__b)));
    __Vfunc_aes_mul_gf2p2__1493__Vfuncout = __Vfunc_aes_mul_gf2p2__1493__f;
    __Vfunc_aes_mul_gf2p4__1492__a = __Vfunc_aes_mul_gf2p2__1493__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1494__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1492__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1492__delta)));
    __Vfunc_aes_mul_gf2p2__1494__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1492__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1492__gamma)));
    __Vfunc_aes_mul_gf2p2__1494__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1494__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1494__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1494__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1494__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1494__d)));
    __Vfunc_aes_mul_gf2p2__1494__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1494__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1494__d)));
    __Vfunc_aes_mul_gf2p2__1494__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1494__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1494__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1494__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1494__b)));
    __Vfunc_aes_mul_gf2p2__1494__Vfuncout = __Vfunc_aes_mul_gf2p2__1494__f;
    __Vfunc_aes_mul_gf2p4__1492__b = __Vfunc_aes_mul_gf2p2__1494__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1495__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1492__delta));
    __Vfunc_aes_mul_gf2p2__1495__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1492__gamma));
    __Vfunc_aes_mul_gf2p2__1495__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1495__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1495__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1495__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1495__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1495__d)));
    __Vfunc_aes_mul_gf2p2__1495__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1495__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1495__d)));
    __Vfunc_aes_mul_gf2p2__1495__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1495__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1495__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1495__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1495__b)));
    __Vfunc_aes_mul_gf2p2__1495__Vfuncout = __Vfunc_aes_mul_gf2p2__1495__f;
    __Vfunc_aes_mul_gf2p4__1492__c = __Vfunc_aes_mul_gf2p2__1495__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1496__g = __Vfunc_aes_mul_gf2p4__1492__b;
    __Vfunc_aes_scale_omega2_gf2p2__1496__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1496__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1496__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1496__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1496__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1492__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1492__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1492__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1496__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1497__g = __Vfunc_aes_mul_gf2p4__1492__b;
    __Vfunc_aes_scale_omega2_gf2p2__1497__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1497__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1497__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1497__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1497__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1492__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1492__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1492__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1497__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1492__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1492__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1492__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1510__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p4__1510__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1511__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1510__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1511__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1510__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1511__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1511__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1511__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1511__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1511__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1511__d)));
    __Vfunc_aes_mul_gf2p2__1511__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1511__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1511__d)));
    __Vfunc_aes_mul_gf2p2__1511__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1511__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1511__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1511__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1511__b)));
    __Vfunc_aes_mul_gf2p2__1511__Vfuncout = __Vfunc_aes_mul_gf2p2__1511__f;
    __Vfunc_aes_mul_gf2p4__1510__a = __Vfunc_aes_mul_gf2p2__1511__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1512__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1510__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1510__delta)));
    __Vfunc_aes_mul_gf2p2__1512__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1510__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1510__gamma)));
    __Vfunc_aes_mul_gf2p2__1512__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1512__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1512__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1512__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1512__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1512__d)));
    __Vfunc_aes_mul_gf2p2__1512__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1512__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1512__d)));
    __Vfunc_aes_mul_gf2p2__1512__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1512__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1512__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1512__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1512__b)));
    __Vfunc_aes_mul_gf2p2__1512__Vfuncout = __Vfunc_aes_mul_gf2p2__1512__f;
    __Vfunc_aes_mul_gf2p4__1510__b = __Vfunc_aes_mul_gf2p2__1512__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1513__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1510__delta));
    __Vfunc_aes_mul_gf2p2__1513__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1510__gamma));
    __Vfunc_aes_mul_gf2p2__1513__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1513__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1513__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1513__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1513__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1513__d)));
    __Vfunc_aes_mul_gf2p2__1513__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1513__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1513__d)));
    __Vfunc_aes_mul_gf2p2__1513__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1513__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1513__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1513__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1513__b)));
    __Vfunc_aes_mul_gf2p2__1513__Vfuncout = __Vfunc_aes_mul_gf2p2__1513__f;
    __Vfunc_aes_mul_gf2p4__1510__c = __Vfunc_aes_mul_gf2p2__1513__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1514__g = __Vfunc_aes_mul_gf2p4__1510__b;
    __Vfunc_aes_scale_omega2_gf2p2__1514__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1514__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1514__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1514__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1514__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1510__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1510__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1510__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1514__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1515__g = __Vfunc_aes_mul_gf2p4__1510__b;
    __Vfunc_aes_scale_omega2_gf2p2__1515__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1515__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1515__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1515__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1515__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1510__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1510__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1510__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1515__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1510__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1510__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1510__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1516__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 8U));
    __Vfunc_aes_mul_gf2p4__1516__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1517__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1516__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1517__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1516__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1517__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1517__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1517__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1517__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1517__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1517__d)));
    __Vfunc_aes_mul_gf2p2__1517__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1517__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1517__d)));
    __Vfunc_aes_mul_gf2p2__1517__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1517__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1517__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1517__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1517__b)));
    __Vfunc_aes_mul_gf2p2__1517__Vfuncout = __Vfunc_aes_mul_gf2p2__1517__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1516__a = __Vfunc_aes_mul_gf2p2__1517__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1518__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1516__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1516__delta)));
    __Vfunc_aes_mul_gf2p2__1518__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1516__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1516__gamma)));
    __Vfunc_aes_mul_gf2p2__1518__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1518__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1518__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1518__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1518__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1518__d)));
    __Vfunc_aes_mul_gf2p2__1518__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1518__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1518__d)));
    __Vfunc_aes_mul_gf2p2__1518__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1518__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1518__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1518__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1518__b)));
    __Vfunc_aes_mul_gf2p2__1518__Vfuncout = __Vfunc_aes_mul_gf2p2__1518__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1516__b = __Vfunc_aes_mul_gf2p2__1518__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1519__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1516__delta));
    __Vfunc_aes_mul_gf2p2__1519__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1516__gamma));
    __Vfunc_aes_mul_gf2p2__1519__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1519__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1519__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1519__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1519__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1519__d)));
    __Vfunc_aes_mul_gf2p2__1519__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1519__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1519__d)));
    __Vfunc_aes_mul_gf2p2__1519__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1519__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1519__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1519__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1519__b)));
    __Vfunc_aes_mul_gf2p2__1519__Vfuncout = __Vfunc_aes_mul_gf2p2__1519__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1516__c = __Vfunc_aes_mul_gf2p2__1519__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1520__g = vlSelf->__Vfunc_aes_mul_gf2p4__1516__b;
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1520__d 
        = ((2U & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1520__g) 
                  << 1U)) | (1U & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1520__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1520__Vfuncout 
        = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1520__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1516__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1516__theta)) 
                                                  | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1516__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1520__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1521__g = vlSelf->__Vfunc_aes_mul_gf2p4__1516__b;
    __Vfunc_aes_scale_omega2_gf2p2__1521__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1521__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1521__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1521__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1521__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1516__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1516__theta)) 
                                                  | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1516__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1521__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1516__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1516__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1516__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1528__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1528__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1529__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1528__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1529__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1528__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1529__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1529__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1529__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1529__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1529__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1529__d)));
    __Vfunc_aes_mul_gf2p2__1529__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1529__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1529__d)));
    __Vfunc_aes_mul_gf2p2__1529__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1529__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1529__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1529__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1529__b)));
    __Vfunc_aes_mul_gf2p2__1529__Vfuncout = __Vfunc_aes_mul_gf2p2__1529__f;
    __Vfunc_aes_mul_gf2p4__1528__a = __Vfunc_aes_mul_gf2p2__1529__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1530__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1528__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1528__delta)));
    __Vfunc_aes_mul_gf2p2__1530__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1528__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1528__gamma)));
    __Vfunc_aes_mul_gf2p2__1530__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1530__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1530__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1530__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1530__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1530__d)));
    __Vfunc_aes_mul_gf2p2__1530__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1530__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1530__d)));
    __Vfunc_aes_mul_gf2p2__1530__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1530__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1530__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1530__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1530__b)));
    __Vfunc_aes_mul_gf2p2__1530__Vfuncout = __Vfunc_aes_mul_gf2p2__1530__f;
    __Vfunc_aes_mul_gf2p4__1528__b = __Vfunc_aes_mul_gf2p2__1530__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1531__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1528__delta));
    __Vfunc_aes_mul_gf2p2__1531__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1528__gamma));
    __Vfunc_aes_mul_gf2p2__1531__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1531__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1531__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1531__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1531__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1531__d)));
    __Vfunc_aes_mul_gf2p2__1531__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1531__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1531__d)));
    __Vfunc_aes_mul_gf2p2__1531__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1531__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1531__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1531__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1531__b)));
    __Vfunc_aes_mul_gf2p2__1531__Vfuncout = __Vfunc_aes_mul_gf2p2__1531__f;
    __Vfunc_aes_mul_gf2p4__1528__c = __Vfunc_aes_mul_gf2p2__1531__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1532__g = __Vfunc_aes_mul_gf2p4__1528__b;
    __Vfunc_aes_scale_omega2_gf2p2__1532__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1532__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1532__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1532__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1532__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1528__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1528__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1528__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1532__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1533__g = __Vfunc_aes_mul_gf2p4__1528__b;
    __Vfunc_aes_scale_omega2_gf2p2__1533__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1533__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1533__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1533__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1533__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1528__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1528__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1528__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1533__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1528__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1528__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1528__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    __Vfunc_aes_square_gf2p2__1478__g = (3U & ((((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                 ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)) 
                                               >> 2U));
    __Vfunc_aes_square_gf2p2__1478__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1478__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1478__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1478__Vfuncout = __Vfunc_aes_square_gf2p2__1478__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__1478__Vfuncout;
    __Vfunc_aes_square_gf2p2__1479__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__1479__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1479__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1479__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1479__Vfuncout = __Vfunc_aes_square_gf2p2__1479__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__1479__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__90(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__90\n"); );
    // Init
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1588__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1588__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1588__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1589__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1589__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1589__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1602__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1602__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1602__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1602__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1602__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1602__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1603__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1603__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1603__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1603__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1603__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1603__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1603__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1604__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1604__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1604__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1604__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1604__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1604__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1604__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1605__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1605__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1605__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1605__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1605__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1605__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1605__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1606__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1606__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1606__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1607__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1607__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1607__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1620__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1620__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1620__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1620__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1620__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1620__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1621__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1621__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1621__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1621__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1621__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1621__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1621__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1622__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1622__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1622__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1622__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1622__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1622__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1622__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1623__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1623__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1623__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1623__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1623__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1623__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1623__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1624__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1624__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1624__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1625__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1625__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1625__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1626__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1626__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1626__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1627__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1627__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1627__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1627__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1627__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1627__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1627__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1628__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1628__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1628__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1628__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1628__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1628__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1628__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1629__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1629__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1629__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1629__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1629__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1629__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1629__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1630__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1630__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1631__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1631__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1631__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1632__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1632__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1635__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1635__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1636__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1636__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1636__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1637__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1637__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1637__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1638__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1638__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1638__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1638__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1638__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1638__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1639__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1639__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1639__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1639__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1639__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1639__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1639__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1640__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1640__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1640__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1640__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1640__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1640__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1640__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1641__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1641__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1641__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1641__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1641__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1641__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1641__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1642__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1642__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1642__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1643__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1643__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1643__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1644__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1644__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1644__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1644__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1644__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1644__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1645__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1645__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1645__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1645__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1645__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1645__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1645__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1646__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1646__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1646__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1646__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1646__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1646__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1646__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1647__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1647__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1647__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1647__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1647__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1647__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1647__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1648__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1648__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1648__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1649__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1649__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1649__d;
    // Body
    __Vfunc_aes_mul_gf2p2__1635__f = ((((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1635__a) 
                                        ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1635__b)) 
                                       << 1U) | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1635__c) 
                                                 ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1635__b)));
    __Vfunc_aes_mul_gf2p2__1635__Vfuncout = __Vfunc_aes_mul_gf2p2__1635__f;
    __Vfunc_aes_mul_gf2p4__1632__c = __Vfunc_aes_mul_gf2p2__1635__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1636__g = vlSelf->__Vfunc_aes_mul_gf2p4__1632__b;
    __Vfunc_aes_scale_omega2_gf2p2__1636__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1636__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1636__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1636__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1636__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1632__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1632__theta)) 
                                                  | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1632__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1636__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1637__g = vlSelf->__Vfunc_aes_mul_gf2p4__1632__b;
    __Vfunc_aes_scale_omega2_gf2p2__1637__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1637__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1637__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1637__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1637__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1632__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1632__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1632__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1637__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1632__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1632__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1632__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1644__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1644__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 8U));
    __Vfunc_aes_mul_gf2p2__1645__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1644__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1645__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1644__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1645__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1645__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1645__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1645__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1645__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1645__d)));
    __Vfunc_aes_mul_gf2p2__1645__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1645__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1645__d)));
    __Vfunc_aes_mul_gf2p2__1645__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1645__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1645__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1645__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1645__b)));
    __Vfunc_aes_mul_gf2p2__1645__Vfuncout = __Vfunc_aes_mul_gf2p2__1645__f;
    __Vfunc_aes_mul_gf2p4__1644__a = __Vfunc_aes_mul_gf2p2__1645__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1646__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1644__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1644__delta)));
    __Vfunc_aes_mul_gf2p2__1646__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1644__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1644__gamma)));
    __Vfunc_aes_mul_gf2p2__1646__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1646__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1646__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1646__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1646__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1646__d)));
    __Vfunc_aes_mul_gf2p2__1646__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1646__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1646__d)));
    __Vfunc_aes_mul_gf2p2__1646__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1646__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1646__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1646__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1646__b)));
    __Vfunc_aes_mul_gf2p2__1646__Vfuncout = __Vfunc_aes_mul_gf2p2__1646__f;
    __Vfunc_aes_mul_gf2p4__1644__b = __Vfunc_aes_mul_gf2p2__1646__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1647__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1644__delta));
    __Vfunc_aes_mul_gf2p2__1647__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1644__gamma));
    __Vfunc_aes_mul_gf2p2__1647__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1647__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1647__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1647__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1647__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1647__d)));
    __Vfunc_aes_mul_gf2p2__1647__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1647__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1647__d)));
    __Vfunc_aes_mul_gf2p2__1647__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1647__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1647__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1647__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1647__b)));
    __Vfunc_aes_mul_gf2p2__1647__Vfuncout = __Vfunc_aes_mul_gf2p2__1647__f;
    __Vfunc_aes_mul_gf2p4__1644__c = __Vfunc_aes_mul_gf2p2__1647__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1648__g = __Vfunc_aes_mul_gf2p4__1644__b;
    __Vfunc_aes_scale_omega2_gf2p2__1648__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1648__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1648__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1648__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1648__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1644__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1644__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1644__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1648__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1649__g = __Vfunc_aes_mul_gf2p4__1644__b;
    __Vfunc_aes_scale_omega2_gf2p2__1649__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1649__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1649__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1649__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1649__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1644__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1644__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1644__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1649__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1644__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1644__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1644__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1602__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p4__1602__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1603__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1602__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1603__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1602__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1603__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1603__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1603__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1603__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1603__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1603__d)));
    __Vfunc_aes_mul_gf2p2__1603__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1603__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1603__d)));
    __Vfunc_aes_mul_gf2p2__1603__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1603__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1603__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1603__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1603__b)));
    __Vfunc_aes_mul_gf2p2__1603__Vfuncout = __Vfunc_aes_mul_gf2p2__1603__f;
    __Vfunc_aes_mul_gf2p4__1602__a = __Vfunc_aes_mul_gf2p2__1603__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1604__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1602__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1602__delta)));
    __Vfunc_aes_mul_gf2p2__1604__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1602__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1602__gamma)));
    __Vfunc_aes_mul_gf2p2__1604__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1604__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1604__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1604__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1604__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1604__d)));
    __Vfunc_aes_mul_gf2p2__1604__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1604__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1604__d)));
    __Vfunc_aes_mul_gf2p2__1604__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1604__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1604__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1604__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1604__b)));
    __Vfunc_aes_mul_gf2p2__1604__Vfuncout = __Vfunc_aes_mul_gf2p2__1604__f;
    __Vfunc_aes_mul_gf2p4__1602__b = __Vfunc_aes_mul_gf2p2__1604__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1605__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1602__delta));
    __Vfunc_aes_mul_gf2p2__1605__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1602__gamma));
    __Vfunc_aes_mul_gf2p2__1605__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1605__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1605__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1605__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1605__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1605__d)));
    __Vfunc_aes_mul_gf2p2__1605__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1605__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1605__d)));
    __Vfunc_aes_mul_gf2p2__1605__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1605__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1605__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1605__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1605__b)));
    __Vfunc_aes_mul_gf2p2__1605__Vfuncout = __Vfunc_aes_mul_gf2p2__1605__f;
    __Vfunc_aes_mul_gf2p4__1602__c = __Vfunc_aes_mul_gf2p2__1605__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1606__g = __Vfunc_aes_mul_gf2p4__1602__b;
    __Vfunc_aes_scale_omega2_gf2p2__1606__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1606__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1606__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1606__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1606__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1602__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1602__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1602__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1606__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1607__g = __Vfunc_aes_mul_gf2p4__1602__b;
    __Vfunc_aes_scale_omega2_gf2p2__1607__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1607__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1607__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1607__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1607__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1602__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1602__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1602__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1607__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1602__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1602__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1602__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1620__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p4__1620__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1621__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1620__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1621__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1620__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1621__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1621__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1621__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1621__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1621__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1621__d)));
    __Vfunc_aes_mul_gf2p2__1621__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1621__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1621__d)));
    __Vfunc_aes_mul_gf2p2__1621__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1621__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1621__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1621__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1621__b)));
    __Vfunc_aes_mul_gf2p2__1621__Vfuncout = __Vfunc_aes_mul_gf2p2__1621__f;
    __Vfunc_aes_mul_gf2p4__1620__a = __Vfunc_aes_mul_gf2p2__1621__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1622__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1620__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1620__delta)));
    __Vfunc_aes_mul_gf2p2__1622__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1620__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1620__gamma)));
    __Vfunc_aes_mul_gf2p2__1622__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1622__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1622__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1622__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1622__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1622__d)));
    __Vfunc_aes_mul_gf2p2__1622__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1622__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1622__d)));
    __Vfunc_aes_mul_gf2p2__1622__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1622__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1622__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1622__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1622__b)));
    __Vfunc_aes_mul_gf2p2__1622__Vfuncout = __Vfunc_aes_mul_gf2p2__1622__f;
    __Vfunc_aes_mul_gf2p4__1620__b = __Vfunc_aes_mul_gf2p2__1622__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1623__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1620__delta));
    __Vfunc_aes_mul_gf2p2__1623__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1620__gamma));
    __Vfunc_aes_mul_gf2p2__1623__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1623__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1623__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1623__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1623__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1623__d)));
    __Vfunc_aes_mul_gf2p2__1623__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1623__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1623__d)));
    __Vfunc_aes_mul_gf2p2__1623__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1623__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1623__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1623__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1623__b)));
    __Vfunc_aes_mul_gf2p2__1623__Vfuncout = __Vfunc_aes_mul_gf2p2__1623__f;
    __Vfunc_aes_mul_gf2p4__1620__c = __Vfunc_aes_mul_gf2p2__1623__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1624__g = __Vfunc_aes_mul_gf2p4__1620__b;
    __Vfunc_aes_scale_omega2_gf2p2__1624__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1624__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1624__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1624__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1624__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1620__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1620__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1620__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1624__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1625__g = __Vfunc_aes_mul_gf2p4__1620__b;
    __Vfunc_aes_scale_omega2_gf2p2__1625__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1625__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1625__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1625__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1625__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1620__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1620__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1620__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1625__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1620__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1620__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1620__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1626__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 8U));
    __Vfunc_aes_mul_gf2p4__1626__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1627__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1626__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1627__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1626__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1627__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1627__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1627__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1627__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1627__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1627__d)));
    __Vfunc_aes_mul_gf2p2__1627__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1627__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1627__d)));
    __Vfunc_aes_mul_gf2p2__1627__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1627__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1627__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1627__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1627__b)));
    __Vfunc_aes_mul_gf2p2__1627__Vfuncout = __Vfunc_aes_mul_gf2p2__1627__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1626__a = __Vfunc_aes_mul_gf2p2__1627__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1628__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1626__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1626__delta)));
    __Vfunc_aes_mul_gf2p2__1628__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1626__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1626__gamma)));
    __Vfunc_aes_mul_gf2p2__1628__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1628__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1628__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1628__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1628__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1628__d)));
    __Vfunc_aes_mul_gf2p2__1628__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1628__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1628__d)));
    __Vfunc_aes_mul_gf2p2__1628__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1628__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1628__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1628__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1628__b)));
    __Vfunc_aes_mul_gf2p2__1628__Vfuncout = __Vfunc_aes_mul_gf2p2__1628__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1626__b = __Vfunc_aes_mul_gf2p2__1628__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1629__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1626__delta));
    __Vfunc_aes_mul_gf2p2__1629__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1626__gamma));
    __Vfunc_aes_mul_gf2p2__1629__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1629__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1629__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1629__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1629__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1629__d)));
    __Vfunc_aes_mul_gf2p2__1629__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1629__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1629__d)));
    __Vfunc_aes_mul_gf2p2__1629__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1629__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1629__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1629__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1629__b)));
    __Vfunc_aes_mul_gf2p2__1629__Vfuncout = __Vfunc_aes_mul_gf2p2__1629__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1626__c = __Vfunc_aes_mul_gf2p2__1629__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1630__g = vlSelf->__Vfunc_aes_mul_gf2p4__1626__b;
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1630__d 
        = ((2U & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1630__g) 
                  << 1U)) | (1U & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1630__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1630__Vfuncout 
        = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1630__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1626__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1626__theta)) 
                                                  | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1626__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1630__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1631__g = vlSelf->__Vfunc_aes_mul_gf2p4__1626__b;
    __Vfunc_aes_scale_omega2_gf2p2__1631__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1631__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1631__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1631__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1631__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1626__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1626__theta)) 
                                                  | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1626__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1631__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1626__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1626__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1626__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1638__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1638__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1639__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1638__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1639__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1638__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1639__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1639__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1639__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1639__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1639__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1639__d)));
    __Vfunc_aes_mul_gf2p2__1639__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1639__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1639__d)));
    __Vfunc_aes_mul_gf2p2__1639__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1639__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1639__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1639__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1639__b)));
    __Vfunc_aes_mul_gf2p2__1639__Vfuncout = __Vfunc_aes_mul_gf2p2__1639__f;
    __Vfunc_aes_mul_gf2p4__1638__a = __Vfunc_aes_mul_gf2p2__1639__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1640__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1638__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1638__delta)));
    __Vfunc_aes_mul_gf2p2__1640__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1638__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1638__gamma)));
    __Vfunc_aes_mul_gf2p2__1640__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1640__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1640__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1640__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1640__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1640__d)));
    __Vfunc_aes_mul_gf2p2__1640__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1640__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1640__d)));
    __Vfunc_aes_mul_gf2p2__1640__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1640__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1640__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1640__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1640__b)));
    __Vfunc_aes_mul_gf2p2__1640__Vfuncout = __Vfunc_aes_mul_gf2p2__1640__f;
    __Vfunc_aes_mul_gf2p4__1638__b = __Vfunc_aes_mul_gf2p2__1640__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1641__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1638__delta));
    __Vfunc_aes_mul_gf2p2__1641__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1638__gamma));
    __Vfunc_aes_mul_gf2p2__1641__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1641__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1641__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1641__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1641__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1641__d)));
    __Vfunc_aes_mul_gf2p2__1641__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1641__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1641__d)));
    __Vfunc_aes_mul_gf2p2__1641__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1641__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1641__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1641__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1641__b)));
    __Vfunc_aes_mul_gf2p2__1641__Vfuncout = __Vfunc_aes_mul_gf2p2__1641__f;
    __Vfunc_aes_mul_gf2p4__1638__c = __Vfunc_aes_mul_gf2p2__1641__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1642__g = __Vfunc_aes_mul_gf2p4__1638__b;
    __Vfunc_aes_scale_omega2_gf2p2__1642__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1642__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1642__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1642__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1642__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1638__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1638__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1638__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1642__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1643__g = __Vfunc_aes_mul_gf2p4__1638__b;
    __Vfunc_aes_scale_omega2_gf2p2__1643__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1643__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1643__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1643__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1643__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1638__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1638__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1638__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1643__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1638__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1638__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1638__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    __Vfunc_aes_square_gf2p2__1588__g = (3U & ((((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                 ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)) 
                                               >> 2U));
    __Vfunc_aes_square_gf2p2__1588__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1588__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1588__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1588__Vfuncout = __Vfunc_aes_square_gf2p2__1588__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__1588__Vfuncout;
    __Vfunc_aes_square_gf2p2__1589__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__1589__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1589__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1589__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1589__Vfuncout = __Vfunc_aes_square_gf2p2__1589__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__1589__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__92(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__92\n"); );
    // Init
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1698__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1698__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1698__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1699__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1699__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1699__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1712__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1712__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1712__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1712__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1712__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1712__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1713__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1713__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1713__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1713__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1713__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1713__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1713__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1714__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1714__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1714__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1714__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1714__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1714__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1714__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1715__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1715__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1715__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1715__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1715__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1715__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1715__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1716__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1716__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1716__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1717__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1717__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1717__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1730__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1730__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1730__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1730__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1730__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1730__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1731__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1731__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1731__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1731__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1731__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1731__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1731__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1732__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1732__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1732__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1732__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1732__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1732__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1732__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1733__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1733__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1733__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1733__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1733__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1733__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1733__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1734__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1734__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1734__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1735__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1735__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1735__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1736__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1736__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1736__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1737__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1737__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1737__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1737__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1737__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1737__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1737__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1738__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1738__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1738__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1738__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1738__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1738__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1738__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1739__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1739__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1739__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1739__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1739__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1739__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1739__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1740__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1740__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1741__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1741__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1741__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1742__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1742__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1745__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1745__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1746__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1746__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1746__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1747__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1747__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1747__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1748__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1748__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1748__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1748__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1748__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1748__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1749__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1749__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1749__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1749__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1749__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1749__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1749__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1750__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1750__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1750__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1750__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1750__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1750__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1750__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1751__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1751__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1751__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1751__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1751__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1751__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1751__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1752__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1752__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1752__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1753__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1753__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1753__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1754__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1754__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1754__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1754__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1754__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1754__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1755__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1755__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1755__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1755__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1755__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1755__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1755__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1756__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1756__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1756__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1756__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1756__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1756__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1756__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1757__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1757__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1757__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1757__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1757__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1757__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1757__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1758__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1758__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1758__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1759__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1759__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1759__d;
    // Body
    __Vfunc_aes_mul_gf2p2__1745__f = ((((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1745__a) 
                                        ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1745__b)) 
                                       << 1U) | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1745__c) 
                                                 ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1745__b)));
    __Vfunc_aes_mul_gf2p2__1745__Vfuncout = __Vfunc_aes_mul_gf2p2__1745__f;
    __Vfunc_aes_mul_gf2p4__1742__c = __Vfunc_aes_mul_gf2p2__1745__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1746__g = vlSelf->__Vfunc_aes_mul_gf2p4__1742__b;
    __Vfunc_aes_scale_omega2_gf2p2__1746__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1746__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1746__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1746__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1746__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1742__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1742__theta)) 
                                                  | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1742__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1746__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1747__g = vlSelf->__Vfunc_aes_mul_gf2p4__1742__b;
    __Vfunc_aes_scale_omega2_gf2p2__1747__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1747__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1747__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1747__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1747__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1742__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1742__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1742__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1747__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1742__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1742__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1742__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1754__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1754__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 8U));
    __Vfunc_aes_mul_gf2p2__1755__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1754__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1755__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1754__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1755__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1755__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1755__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1755__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1755__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1755__d)));
    __Vfunc_aes_mul_gf2p2__1755__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1755__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1755__d)));
    __Vfunc_aes_mul_gf2p2__1755__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1755__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1755__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1755__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1755__b)));
    __Vfunc_aes_mul_gf2p2__1755__Vfuncout = __Vfunc_aes_mul_gf2p2__1755__f;
    __Vfunc_aes_mul_gf2p4__1754__a = __Vfunc_aes_mul_gf2p2__1755__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1756__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1754__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1754__delta)));
    __Vfunc_aes_mul_gf2p2__1756__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1754__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1754__gamma)));
    __Vfunc_aes_mul_gf2p2__1756__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1756__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1756__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1756__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1756__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1756__d)));
    __Vfunc_aes_mul_gf2p2__1756__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1756__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1756__d)));
    __Vfunc_aes_mul_gf2p2__1756__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1756__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1756__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1756__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1756__b)));
    __Vfunc_aes_mul_gf2p2__1756__Vfuncout = __Vfunc_aes_mul_gf2p2__1756__f;
    __Vfunc_aes_mul_gf2p4__1754__b = __Vfunc_aes_mul_gf2p2__1756__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1757__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1754__delta));
    __Vfunc_aes_mul_gf2p2__1757__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1754__gamma));
    __Vfunc_aes_mul_gf2p2__1757__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1757__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1757__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1757__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1757__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1757__d)));
    __Vfunc_aes_mul_gf2p2__1757__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1757__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1757__d)));
    __Vfunc_aes_mul_gf2p2__1757__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1757__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1757__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1757__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1757__b)));
    __Vfunc_aes_mul_gf2p2__1757__Vfuncout = __Vfunc_aes_mul_gf2p2__1757__f;
    __Vfunc_aes_mul_gf2p4__1754__c = __Vfunc_aes_mul_gf2p2__1757__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1758__g = __Vfunc_aes_mul_gf2p4__1754__b;
    __Vfunc_aes_scale_omega2_gf2p2__1758__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1758__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1758__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1758__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1758__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1754__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1754__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1754__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1758__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1759__g = __Vfunc_aes_mul_gf2p4__1754__b;
    __Vfunc_aes_scale_omega2_gf2p2__1759__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1759__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1759__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1759__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1759__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1754__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1754__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1754__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1759__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1754__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1754__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1754__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1712__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p4__1712__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1713__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1712__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1713__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1712__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1713__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1713__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1713__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1713__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1713__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1713__d)));
    __Vfunc_aes_mul_gf2p2__1713__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1713__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1713__d)));
    __Vfunc_aes_mul_gf2p2__1713__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1713__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1713__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1713__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1713__b)));
    __Vfunc_aes_mul_gf2p2__1713__Vfuncout = __Vfunc_aes_mul_gf2p2__1713__f;
    __Vfunc_aes_mul_gf2p4__1712__a = __Vfunc_aes_mul_gf2p2__1713__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1714__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1712__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1712__delta)));
    __Vfunc_aes_mul_gf2p2__1714__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1712__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1712__gamma)));
    __Vfunc_aes_mul_gf2p2__1714__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1714__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1714__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1714__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1714__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1714__d)));
    __Vfunc_aes_mul_gf2p2__1714__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1714__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1714__d)));
    __Vfunc_aes_mul_gf2p2__1714__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1714__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1714__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1714__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1714__b)));
    __Vfunc_aes_mul_gf2p2__1714__Vfuncout = __Vfunc_aes_mul_gf2p2__1714__f;
    __Vfunc_aes_mul_gf2p4__1712__b = __Vfunc_aes_mul_gf2p2__1714__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1715__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1712__delta));
    __Vfunc_aes_mul_gf2p2__1715__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1712__gamma));
    __Vfunc_aes_mul_gf2p2__1715__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1715__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1715__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1715__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1715__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1715__d)));
    __Vfunc_aes_mul_gf2p2__1715__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1715__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1715__d)));
    __Vfunc_aes_mul_gf2p2__1715__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1715__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1715__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1715__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1715__b)));
    __Vfunc_aes_mul_gf2p2__1715__Vfuncout = __Vfunc_aes_mul_gf2p2__1715__f;
    __Vfunc_aes_mul_gf2p4__1712__c = __Vfunc_aes_mul_gf2p2__1715__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1716__g = __Vfunc_aes_mul_gf2p4__1712__b;
    __Vfunc_aes_scale_omega2_gf2p2__1716__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1716__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1716__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1716__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1716__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1712__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1712__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1712__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1716__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1717__g = __Vfunc_aes_mul_gf2p4__1712__b;
    __Vfunc_aes_scale_omega2_gf2p2__1717__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1717__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1717__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1717__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1717__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1712__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1712__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1712__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1717__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1712__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1712__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1712__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1730__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p4__1730__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1731__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1730__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1731__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1730__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1731__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1731__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1731__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1731__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1731__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1731__d)));
    __Vfunc_aes_mul_gf2p2__1731__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1731__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1731__d)));
    __Vfunc_aes_mul_gf2p2__1731__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1731__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1731__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1731__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1731__b)));
    __Vfunc_aes_mul_gf2p2__1731__Vfuncout = __Vfunc_aes_mul_gf2p2__1731__f;
    __Vfunc_aes_mul_gf2p4__1730__a = __Vfunc_aes_mul_gf2p2__1731__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1732__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1730__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1730__delta)));
    __Vfunc_aes_mul_gf2p2__1732__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1730__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1730__gamma)));
    __Vfunc_aes_mul_gf2p2__1732__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1732__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1732__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1732__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1732__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1732__d)));
    __Vfunc_aes_mul_gf2p2__1732__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1732__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1732__d)));
    __Vfunc_aes_mul_gf2p2__1732__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1732__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1732__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1732__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1732__b)));
    __Vfunc_aes_mul_gf2p2__1732__Vfuncout = __Vfunc_aes_mul_gf2p2__1732__f;
    __Vfunc_aes_mul_gf2p4__1730__b = __Vfunc_aes_mul_gf2p2__1732__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1733__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1730__delta));
    __Vfunc_aes_mul_gf2p2__1733__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1730__gamma));
    __Vfunc_aes_mul_gf2p2__1733__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1733__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1733__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1733__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1733__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1733__d)));
    __Vfunc_aes_mul_gf2p2__1733__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1733__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1733__d)));
    __Vfunc_aes_mul_gf2p2__1733__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1733__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1733__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1733__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1733__b)));
    __Vfunc_aes_mul_gf2p2__1733__Vfuncout = __Vfunc_aes_mul_gf2p2__1733__f;
    __Vfunc_aes_mul_gf2p4__1730__c = __Vfunc_aes_mul_gf2p2__1733__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1734__g = __Vfunc_aes_mul_gf2p4__1730__b;
    __Vfunc_aes_scale_omega2_gf2p2__1734__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1734__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1734__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1734__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1734__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1730__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1730__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1730__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1734__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1735__g = __Vfunc_aes_mul_gf2p4__1730__b;
    __Vfunc_aes_scale_omega2_gf2p2__1735__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1735__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1735__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1735__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1735__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1730__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1730__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1730__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1735__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1730__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1730__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1730__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1736__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 8U));
    __Vfunc_aes_mul_gf2p4__1736__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1737__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1736__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1737__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1736__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1737__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1737__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1737__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1737__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1737__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1737__d)));
    __Vfunc_aes_mul_gf2p2__1737__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1737__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1737__d)));
    __Vfunc_aes_mul_gf2p2__1737__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1737__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1737__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1737__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1737__b)));
    __Vfunc_aes_mul_gf2p2__1737__Vfuncout = __Vfunc_aes_mul_gf2p2__1737__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1736__a = __Vfunc_aes_mul_gf2p2__1737__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1738__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1736__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1736__delta)));
    __Vfunc_aes_mul_gf2p2__1738__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1736__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1736__gamma)));
    __Vfunc_aes_mul_gf2p2__1738__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1738__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1738__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1738__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1738__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1738__d)));
    __Vfunc_aes_mul_gf2p2__1738__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1738__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1738__d)));
    __Vfunc_aes_mul_gf2p2__1738__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1738__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1738__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1738__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1738__b)));
    __Vfunc_aes_mul_gf2p2__1738__Vfuncout = __Vfunc_aes_mul_gf2p2__1738__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1736__b = __Vfunc_aes_mul_gf2p2__1738__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1739__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1736__delta));
    __Vfunc_aes_mul_gf2p2__1739__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1736__gamma));
    __Vfunc_aes_mul_gf2p2__1739__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1739__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1739__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1739__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1739__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1739__d)));
    __Vfunc_aes_mul_gf2p2__1739__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1739__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1739__d)));
    __Vfunc_aes_mul_gf2p2__1739__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1739__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1739__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1739__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1739__b)));
    __Vfunc_aes_mul_gf2p2__1739__Vfuncout = __Vfunc_aes_mul_gf2p2__1739__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1736__c = __Vfunc_aes_mul_gf2p2__1739__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1740__g = vlSelf->__Vfunc_aes_mul_gf2p4__1736__b;
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1740__d 
        = ((2U & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1740__g) 
                  << 1U)) | (1U & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1740__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1740__Vfuncout 
        = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1740__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1736__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1736__theta)) 
                                                  | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1736__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1740__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1741__g = vlSelf->__Vfunc_aes_mul_gf2p4__1736__b;
    __Vfunc_aes_scale_omega2_gf2p2__1741__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1741__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1741__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1741__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1741__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1736__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1736__theta)) 
                                                  | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1736__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1741__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1736__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1736__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1736__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1748__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1748__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1749__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1748__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1749__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1748__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1749__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1749__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1749__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1749__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1749__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1749__d)));
    __Vfunc_aes_mul_gf2p2__1749__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1749__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1749__d)));
    __Vfunc_aes_mul_gf2p2__1749__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1749__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1749__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1749__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1749__b)));
    __Vfunc_aes_mul_gf2p2__1749__Vfuncout = __Vfunc_aes_mul_gf2p2__1749__f;
    __Vfunc_aes_mul_gf2p4__1748__a = __Vfunc_aes_mul_gf2p2__1749__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1750__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1748__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1748__delta)));
    __Vfunc_aes_mul_gf2p2__1750__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1748__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1748__gamma)));
    __Vfunc_aes_mul_gf2p2__1750__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1750__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1750__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1750__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1750__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1750__d)));
    __Vfunc_aes_mul_gf2p2__1750__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1750__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1750__d)));
    __Vfunc_aes_mul_gf2p2__1750__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1750__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1750__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1750__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1750__b)));
    __Vfunc_aes_mul_gf2p2__1750__Vfuncout = __Vfunc_aes_mul_gf2p2__1750__f;
    __Vfunc_aes_mul_gf2p4__1748__b = __Vfunc_aes_mul_gf2p2__1750__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1751__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1748__delta));
    __Vfunc_aes_mul_gf2p2__1751__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1748__gamma));
    __Vfunc_aes_mul_gf2p2__1751__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1751__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1751__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1751__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1751__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1751__d)));
    __Vfunc_aes_mul_gf2p2__1751__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1751__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1751__d)));
    __Vfunc_aes_mul_gf2p2__1751__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1751__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1751__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1751__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1751__b)));
    __Vfunc_aes_mul_gf2p2__1751__Vfuncout = __Vfunc_aes_mul_gf2p2__1751__f;
    __Vfunc_aes_mul_gf2p4__1748__c = __Vfunc_aes_mul_gf2p2__1751__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1752__g = __Vfunc_aes_mul_gf2p4__1748__b;
    __Vfunc_aes_scale_omega2_gf2p2__1752__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1752__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1752__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1752__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1752__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1748__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1748__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1748__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1752__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1753__g = __Vfunc_aes_mul_gf2p4__1748__b;
    __Vfunc_aes_scale_omega2_gf2p2__1753__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1753__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1753__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1753__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1753__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1748__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1748__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1748__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1753__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1748__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1748__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1748__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    __Vfunc_aes_square_gf2p2__1698__g = (3U & ((((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                 ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)) 
                                               >> 2U));
    __Vfunc_aes_square_gf2p2__1698__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1698__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1698__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1698__Vfuncout = __Vfunc_aes_square_gf2p2__1698__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__1698__Vfuncout;
    __Vfunc_aes_square_gf2p2__1699__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__1699__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1699__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1699__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1699__Vfuncout = __Vfunc_aes_square_gf2p2__1699__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__1699__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}
