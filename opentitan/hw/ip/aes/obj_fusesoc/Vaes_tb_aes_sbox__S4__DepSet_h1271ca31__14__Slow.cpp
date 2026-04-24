// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__29(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__29\n"); );
    // Init
    CData/*7:0*/ __Vfunc_aes_mvm__1540__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1540__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1540__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1541__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1541__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1541__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1542__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1542__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1542__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1543__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1543__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1543__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1544__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1544__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1544__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1545__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1545__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1545__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1546__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1546__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1546__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1547__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1547__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1547__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1548__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1548__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1548__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1549__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1549__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1549__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1550__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1550__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1550__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1551__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1551__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1551__vec_c;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1553__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1553__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1553__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1554__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1554__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1554__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1555__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1555__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1555__d;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1557__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1557__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1557__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1558__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1558__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1558__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1559__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1559__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1559__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1572__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1572__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1572__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1572__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1572__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1572__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1573__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1573__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1573__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1573__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1573__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1573__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1573__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1574__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1574__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1574__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1574__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1574__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1574__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1574__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1575__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1575__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1575__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1575__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1575__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1575__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1575__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1576__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1576__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1576__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1577__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1577__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1577__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1578__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1578__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1578__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1578__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1578__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1578__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1579__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1579__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1579__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1579__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1579__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1579__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1579__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1580__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1580__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1580__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1580__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1580__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1580__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1580__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1581__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1581__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1581__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1581__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1581__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1581__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1581__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1582__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1582__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1582__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1583__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1583__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1583__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1584__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1584__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1584__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1585__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1585__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1585__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1586__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1586__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1586__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1587__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1587__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1587__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1588__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1588__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1588__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1589__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1589__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1589__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1592__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1592__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1592__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1592__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1592__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1592__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1592__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1593__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1593__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1593__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1593__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1593__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1593__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1593__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1596__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1596__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1596__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1596__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1596__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1596__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1596__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1597__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1597__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1597__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1597__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1597__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1597__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1597__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1600__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1600__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1600__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1600__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1600__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1600__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1600__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1601__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1601__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1601__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1601__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1601__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1601__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1601__c;
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
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1608__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1608__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1608__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1608__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1608__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1608__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1609__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1609__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1609__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1609__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1609__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1609__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1609__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1610__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1610__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1610__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1610__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1610__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1610__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1610__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1611__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1611__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1611__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1611__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1611__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1611__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1611__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1612__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1612__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1612__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1613__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1613__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1613__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1614__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1614__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1614__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1614__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1614__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1614__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1615__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1615__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1615__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1615__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1615__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1615__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1615__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1616__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1616__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1616__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1616__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1616__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1616__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1616__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1617__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1617__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1617__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1617__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1617__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1617__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1617__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1618__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1618__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1618__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1619__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1619__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1619__d;
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
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1630__g;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1632__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1632__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1632__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1632__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1633__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1633__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1633__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1633__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1633__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1633__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1633__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1634__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1634__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1634__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1634__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1634__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1634__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1634__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1635__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1635__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1635__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1635__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1636__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1636__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1636__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1637__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1637__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1637__d;
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
    vlSelf->__Vfunc_aes_mvm__1542__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1542__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1542__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1542__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1542__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1542__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1542__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1542__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1542__vec_b = (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                    [0U][2U] >> 0x18U);
    __Vfunc_aes_mvm__1542__vec_c = 0U;
    __Vfunc_aes_mvm__1542__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1542__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1542__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1542__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1542__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1542__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1542__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1542__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1542__vec_b)))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1542__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1542__vec_b)))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1542__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1542__vec_b)))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1542__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1542__vec_b)))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1542__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1542__vec_b)))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1542__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1542__vec_b)))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1542__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1542__vec_b)))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1542__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1542__vec_b)))));
    __Vfunc_aes_mvm__1542__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1542__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1542__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1542__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1542__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1542__Vfuncout = __Vfunc_aes_mvm__1542__vec_c;
    vlSelf->__Vfunc_aes_mvm__1541__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1541__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__1541__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__1541__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__1541__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__1541__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1541__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__1541__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__1541__vec_b = (0xffU & (0x63U 
                                             ^ ((vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                 [0U][2U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                   [0U][2U] 
                                                   >> 0x18U))));
    __Vfunc_aes_mvm__1541__vec_c = 0U;
    __Vfunc_aes_mvm__1541__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1541__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1541__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1541__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1541__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1541__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1541__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1541__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1541__vec_b)))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1541__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1541__vec_b)))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1541__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1541__vec_b)))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1541__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1541__vec_b)))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1541__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1541__vec_b)))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1541__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1541__vec_b)))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1541__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1541__vec_b)))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1541__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1541__vec_b)))));
    __Vfunc_aes_mvm__1541__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1541__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1541__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1541__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1541__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1541__Vfuncout = __Vfunc_aes_mvm__1541__vec_c;
    vlSelf->__Vfunc_aes_mvm__1540__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1540__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1540__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1540__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1540__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1540__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1540__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1540__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1540__vec_b = (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                    [0U][2U] >> 0x18U);
    __Vfunc_aes_mvm__1540__vec_c = 0U;
    __Vfunc_aes_mvm__1540__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1540__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1540__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1540__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1540__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1540__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1540__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1540__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1540__vec_b)))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1540__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1540__vec_b)))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1540__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1540__vec_b)))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1540__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1540__vec_b)))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1540__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1540__vec_b)))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1540__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1540__vec_b)))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1540__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1540__vec_b)))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1540__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1540__vec_b)))));
    __Vfunc_aes_mvm__1540__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1540__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1540__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1540__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1540__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1540__Vfuncout = __Vfunc_aes_mvm__1540__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__1540__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__1541__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__1542__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__1545__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1545__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1545__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1545__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1545__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1545__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1545__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1545__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1545__vec_b = (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                    [1U][2U] >> 0x18U);
    __Vfunc_aes_mvm__1545__vec_c = 0U;
    __Vfunc_aes_mvm__1545__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1545__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1545__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1545__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1545__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1545__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1545__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1545__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1545__vec_b)))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1545__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1545__vec_b)))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1545__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1545__vec_b)))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1545__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1545__vec_b)))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1545__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1545__vec_b)))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1545__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1545__vec_b)))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1545__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1545__vec_b)))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1545__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1545__vec_b)))));
    __Vfunc_aes_mvm__1545__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1545__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1545__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1545__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1545__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1545__Vfuncout = __Vfunc_aes_mvm__1545__vec_c;
    vlSelf->__Vfunc_aes_mvm__1544__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1544__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__1544__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__1544__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__1544__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__1544__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1544__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__1544__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__1544__vec_b = (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                    [1U][2U] >> 0x18U);
    __Vfunc_aes_mvm__1544__vec_c = 0U;
    __Vfunc_aes_mvm__1544__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1544__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1544__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1544__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1544__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1544__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1544__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1544__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1544__vec_b)))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1544__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1544__vec_b)))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1544__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1544__vec_b)))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1544__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1544__vec_b)))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1544__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1544__vec_b)))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1544__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1544__vec_b)))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1544__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1544__vec_b)))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1544__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1544__vec_b)))));
    __Vfunc_aes_mvm__1544__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1544__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1544__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1544__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1544__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1544__Vfuncout = __Vfunc_aes_mvm__1544__vec_c;
    vlSelf->__Vfunc_aes_mvm__1543__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1543__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1543__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1543__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1543__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1543__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1543__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1543__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1543__vec_b = (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                    [1U][2U] >> 0x18U);
    __Vfunc_aes_mvm__1543__vec_c = 0U;
    __Vfunc_aes_mvm__1543__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1543__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1543__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1543__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1543__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1543__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1543__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1543__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1543__vec_b)))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1543__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1543__vec_b)))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1543__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1543__vec_b)))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1543__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1543__vec_b)))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1543__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1543__vec_b)))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1543__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1543__vec_b)))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1543__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1543__vec_b)))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1543__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1543__vec_b)))));
    __Vfunc_aes_mvm__1543__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1543__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1543__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1543__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1543__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1543__Vfuncout = __Vfunc_aes_mvm__1543__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__1543__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__1544__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__1545__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1572__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p4__1572__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1573__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1572__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1573__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1572__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1573__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1573__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1573__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1573__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1573__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1573__d)));
    __Vfunc_aes_mul_gf2p2__1573__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1573__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1573__d)));
    __Vfunc_aes_mul_gf2p2__1573__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1573__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1573__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1573__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1573__b)));
    __Vfunc_aes_mul_gf2p2__1573__Vfuncout = __Vfunc_aes_mul_gf2p2__1573__f;
    __Vfunc_aes_mul_gf2p4__1572__a = __Vfunc_aes_mul_gf2p2__1573__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1574__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1572__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1572__delta)));
    __Vfunc_aes_mul_gf2p2__1574__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1572__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1572__gamma)));
    __Vfunc_aes_mul_gf2p2__1574__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1574__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1574__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1574__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1574__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1574__d)));
    __Vfunc_aes_mul_gf2p2__1574__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1574__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1574__d)));
    __Vfunc_aes_mul_gf2p2__1574__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1574__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1574__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1574__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1574__b)));
    __Vfunc_aes_mul_gf2p2__1574__Vfuncout = __Vfunc_aes_mul_gf2p2__1574__f;
    __Vfunc_aes_mul_gf2p4__1572__b = __Vfunc_aes_mul_gf2p2__1574__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1575__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1572__delta));
    __Vfunc_aes_mul_gf2p2__1575__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1572__gamma));
    __Vfunc_aes_mul_gf2p2__1575__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1575__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1575__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1575__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1575__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1575__d)));
    __Vfunc_aes_mul_gf2p2__1575__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1575__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1575__d)));
    __Vfunc_aes_mul_gf2p2__1575__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1575__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1575__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1575__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1575__b)));
    __Vfunc_aes_mul_gf2p2__1575__Vfuncout = __Vfunc_aes_mul_gf2p2__1575__f;
    __Vfunc_aes_mul_gf2p4__1572__c = __Vfunc_aes_mul_gf2p2__1575__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1576__g = __Vfunc_aes_mul_gf2p4__1572__b;
    __Vfunc_aes_scale_omega2_gf2p2__1576__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1576__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1576__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1576__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1576__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1572__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1572__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1572__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1576__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1577__g = __Vfunc_aes_mul_gf2p4__1572__b;
    __Vfunc_aes_scale_omega2_gf2p2__1577__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1577__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1577__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1577__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1577__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1572__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1572__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1572__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1577__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1572__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1572__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__1572__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1578__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p4__1578__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1579__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1578__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1579__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1578__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1579__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1579__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1579__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1579__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1579__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1579__d)));
    __Vfunc_aes_mul_gf2p2__1579__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1579__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1579__d)));
    __Vfunc_aes_mul_gf2p2__1579__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1579__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1579__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1579__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1579__b)));
    __Vfunc_aes_mul_gf2p2__1579__Vfuncout = __Vfunc_aes_mul_gf2p2__1579__f;
    __Vfunc_aes_mul_gf2p4__1578__a = __Vfunc_aes_mul_gf2p2__1579__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1580__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1578__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1578__delta)));
    __Vfunc_aes_mul_gf2p2__1580__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1578__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1578__gamma)));
    __Vfunc_aes_mul_gf2p2__1580__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1580__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1580__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1580__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1580__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1580__d)));
    __Vfunc_aes_mul_gf2p2__1580__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1580__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1580__d)));
    __Vfunc_aes_mul_gf2p2__1580__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1580__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1580__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1580__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1580__b)));
    __Vfunc_aes_mul_gf2p2__1580__Vfuncout = __Vfunc_aes_mul_gf2p2__1580__f;
    __Vfunc_aes_mul_gf2p4__1578__b = __Vfunc_aes_mul_gf2p2__1580__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1581__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1578__delta));
    __Vfunc_aes_mul_gf2p2__1581__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1578__gamma));
    __Vfunc_aes_mul_gf2p2__1581__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1581__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1581__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1581__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1581__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1581__d)));
    __Vfunc_aes_mul_gf2p2__1581__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1581__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1581__d)));
    __Vfunc_aes_mul_gf2p2__1581__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1581__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1581__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1581__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1581__b)));
    __Vfunc_aes_mul_gf2p2__1581__Vfuncout = __Vfunc_aes_mul_gf2p2__1581__f;
    __Vfunc_aes_mul_gf2p4__1578__c = __Vfunc_aes_mul_gf2p2__1581__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1582__g = __Vfunc_aes_mul_gf2p4__1578__b;
    __Vfunc_aes_scale_omega2_gf2p2__1582__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1582__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1582__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1582__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1582__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1578__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1578__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1578__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1582__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1583__g = __Vfunc_aes_mul_gf2p4__1578__b;
    __Vfunc_aes_scale_omega2_gf2p2__1583__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1583__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1583__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1583__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1583__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1578__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1578__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1578__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1583__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1578__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1578__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__1578__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1596__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1596__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1596__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1596__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1596__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1596__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1596__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1596__d)));
    __Vfunc_aes_mul_gf2p2__1596__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1596__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1596__d)));
    __Vfunc_aes_mul_gf2p2__1596__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1596__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1596__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1596__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1596__b)));
    __Vfunc_aes_mul_gf2p2__1596__Vfuncout = __Vfunc_aes_mul_gf2p2__1596__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1596__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1597__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1597__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1597__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1597__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1597__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1597__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1597__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1597__d)));
    __Vfunc_aes_mul_gf2p2__1597__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1597__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1597__d)));
    __Vfunc_aes_mul_gf2p2__1597__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1597__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1597__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1597__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1597__b)));
    __Vfunc_aes_mul_gf2p2__1597__Vfuncout = __Vfunc_aes_mul_gf2p2__1597__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1597__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1600__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1600__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1600__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1600__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1600__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1600__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1600__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1600__d)));
    __Vfunc_aes_mul_gf2p2__1600__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1600__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1600__d)));
    __Vfunc_aes_mul_gf2p2__1600__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1600__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1600__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1600__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1600__b)));
    __Vfunc_aes_mul_gf2p2__1600__Vfuncout = __Vfunc_aes_mul_gf2p2__1600__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1600__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1601__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1601__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__1601__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1601__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1601__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1601__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1601__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1601__d)));
    __Vfunc_aes_mul_gf2p2__1601__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1601__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1601__d)));
    __Vfunc_aes_mul_gf2p2__1601__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1601__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1601__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1601__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1601__b)));
    __Vfunc_aes_mul_gf2p2__1601__Vfuncout = __Vfunc_aes_mul_gf2p2__1601__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1601__Vfuncout;
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
    vlSelf->__Vfunc_aes_mvm__1551__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1551__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1551__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1551__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1551__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1551__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1551__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1551__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1551__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1551__vec_c = 0U;
    __Vfunc_aes_mvm__1551__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1551__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1551__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1551__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1551__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1551__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1551__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1551__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1551__vec_b)))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1551__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1551__vec_b)))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1551__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1551__vec_b)))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1551__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1551__vec_b)))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1551__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1551__vec_b)))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1551__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1551__vec_b)))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1551__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1551__vec_b)))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1551__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1551__vec_b)))));
    __Vfunc_aes_mvm__1551__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1551__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1551__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1551__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1551__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1551__Vfuncout = __Vfunc_aes_mvm__1551__vec_c;
    vlSelf->__Vfunc_aes_mvm__1550__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__1550__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__1550__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__1550__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1550__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__1550__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__1550__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__1550__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__1550__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1550__vec_c = 0U;
    __Vfunc_aes_mvm__1550__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1550__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1550__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1550__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1550__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1550__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1550__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1550__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1550__vec_b)))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1550__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1550__vec_b)))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1550__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1550__vec_b)))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1550__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1550__vec_b)))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1550__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1550__vec_b)))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1550__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1550__vec_b)))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1550__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1550__vec_b)))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1550__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1550__vec_b)))));
    __Vfunc_aes_mvm__1550__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1550__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1550__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1550__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1550__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1550__Vfuncout = __Vfunc_aes_mvm__1550__vec_c;
    vlSelf->__Vfunc_aes_mvm__1549__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1549__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1549__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1549__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1549__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1549__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1549__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1549__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1549__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1549__vec_c = 0U;
    __Vfunc_aes_mvm__1549__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1549__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1549__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1549__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1549__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1549__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1549__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1549__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1549__vec_b)))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1549__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1549__vec_b)))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1549__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1549__vec_b)))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1549__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1549__vec_b)))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1549__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1549__vec_b)))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1549__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1549__vec_b)))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1549__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1549__vec_b)))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1549__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1549__vec_b)))));
    __Vfunc_aes_mvm__1549__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1549__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1549__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1549__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1549__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1549__Vfuncout = __Vfunc_aes_mvm__1549__vec_c;
    vlSelf->mask_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (IData)(__Vfunc_aes_mvm__1549__Vfuncout)
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__1550__Vfuncout)
                           : (IData)(__Vfunc_aes_mvm__1551__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__1548__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1548__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1548__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1548__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1548__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1548__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1548__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1548__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1548__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1548__vec_c = 0U;
    __Vfunc_aes_mvm__1548__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1548__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1548__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1548__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1548__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1548__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1548__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1548__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1548__vec_b)))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1548__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1548__vec_b)))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1548__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1548__vec_b)))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1548__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1548__vec_b)))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1548__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1548__vec_b)))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1548__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1548__vec_b)))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1548__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1548__vec_b)))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1548__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1548__vec_b)))));
    __Vfunc_aes_mvm__1548__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1548__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1548__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1548__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1548__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1548__Vfuncout = __Vfunc_aes_mvm__1548__vec_c;
    vlSelf->__Vfunc_aes_mvm__1547__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__1547__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__1547__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__1547__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1547__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__1547__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__1547__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__1547__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__1547__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1547__vec_c = 0U;
    __Vfunc_aes_mvm__1547__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1547__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1547__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1547__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1547__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1547__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1547__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1547__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1547__vec_b)))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1547__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1547__vec_b)))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1547__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1547__vec_b)))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1547__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1547__vec_b)))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1547__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1547__vec_b)))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1547__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1547__vec_b)))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1547__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1547__vec_b)))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1547__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1547__vec_b)))));
    __Vfunc_aes_mvm__1547__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1547__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1547__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1547__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1547__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1547__Vfuncout = __Vfunc_aes_mvm__1547__vec_c;
    vlSelf->__Vfunc_aes_mvm__1546__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1546__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1546__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1546__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1546__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1546__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1546__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1546__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1546__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1546__vec_c = 0U;
    __Vfunc_aes_mvm__1546__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1546__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1546__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1546__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1546__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1546__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1546__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1546__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1546__vec_b)))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1546__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1546__vec_b)))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1546__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1546__vec_b)))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1546__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1546__vec_b)))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1546__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1546__vec_b)))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1546__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1546__vec_b)))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1546__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1546__vec_b)))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1546__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1546__vec_b)))));
    __Vfunc_aes_mvm__1546__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1546__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1546__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1546__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1546__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1546__Vfuncout = __Vfunc_aes_mvm__1546__vec_c;
    vlSelf->data_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (0x63U ^ (IData)(__Vfunc_aes_mvm__1546__Vfuncout))
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__1547__Vfuncout)
                           : (0x63U ^ (IData)(__Vfunc_aes_mvm__1548__Vfuncout))));
    __Vfunc_aes_mul_gf2p2__1592__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1592__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1592__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1592__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1592__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1592__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1592__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1592__d)));
    __Vfunc_aes_mul_gf2p2__1592__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1592__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1592__d)));
    __Vfunc_aes_mul_gf2p2__1592__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1592__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1592__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1592__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1592__b)));
    __Vfunc_aes_mul_gf2p2__1592__Vfuncout = __Vfunc_aes_mul_gf2p2__1592__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1592__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1593__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1593__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1593__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1593__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1593__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1593__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1593__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1593__d)));
    __Vfunc_aes_mul_gf2p2__1593__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1593__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1593__d)));
    __Vfunc_aes_mul_gf2p2__1593__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1593__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1593__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1593__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1593__b)));
    __Vfunc_aes_mul_gf2p2__1593__Vfuncout = __Vfunc_aes_mul_gf2p2__1593__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1593__Vfuncout;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d 
        = (((IData)(vlSelf->out_req_o) & (3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_out_ack)))
            ? 0U : (7U & ((IData)(vlSelf->out_req_o)
                           ? (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)
                           : ((3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_en))
                               ? ((IData)(1U) + (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q))
                               : (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1552__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1552__gamma)));
    __Vfunc_aes_square_gf2p2__1553__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1552__gamma));
    __Vfunc_aes_square_gf2p2__1553__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1553__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1553__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1553__Vfuncout = __Vfunc_aes_square_gf2p2__1553__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__b = __Vfunc_aes_square_gf2p2__1553__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__1555__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__b;
    __Vfunc_aes_scale_omega_gf2p2__1555__d = ((2U & 
                                               (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__1555__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_aes_scale_omega_gf2p2__1555__g) 
                                                    >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__1555__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__1555__d;
    __Vfunc_aes_square_gf2p2__1554__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__a;
    __Vfunc_aes_square_gf2p2__1554__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1554__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1554__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1554__Vfuncout = __Vfunc_aes_square_gf2p2__1554__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__1554__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__1555__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1556__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1556__gamma)));
    __Vfunc_aes_square_gf2p2__1557__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1556__gamma));
    __Vfunc_aes_square_gf2p2__1557__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1557__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1557__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1557__Vfuncout = __Vfunc_aes_square_gf2p2__1557__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__b = __Vfunc_aes_square_gf2p2__1557__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__1559__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__b;
    __Vfunc_aes_scale_omega_gf2p2__1559__d = ((2U & 
                                               (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__1559__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_aes_scale_omega_gf2p2__1559__g) 
                                                    >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__1559__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__1559__d;
    __Vfunc_aes_square_gf2p2__1558__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__a;
    __Vfunc_aes_square_gf2p2__1558__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1558__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1558__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1558__Vfuncout = __Vfunc_aes_square_gf2p2__1558__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__1558__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__1559__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__Vfuncout;
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
    __Vfunc_aes_square_gf2p2__1585__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                >> 6U) 
                                               ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                  >> 4U)));
    __Vfunc_aes_square_gf2p2__1585__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1585__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1585__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1585__Vfuncout = __Vfunc_aes_square_gf2p2__1585__d;
    __Vfunc_aes_scale_omega2_gf2p2__1584__g = __Vfunc_aes_square_gf2p2__1585__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1584__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1584__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1584__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1584__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1584__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1584__Vfuncout;
    __Vfunc_aes_square_gf2p2__1587__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                >> 2U) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i)));
    __Vfunc_aes_square_gf2p2__1587__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1587__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1587__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1587__Vfuncout = __Vfunc_aes_square_gf2p2__1587__d;
    __Vfunc_aes_scale_omega2_gf2p2__1586__g = __Vfunc_aes_square_gf2p2__1587__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1586__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1586__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1586__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1586__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1586__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1586__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1608__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1608__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1609__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1608__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1609__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1608__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1609__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1609__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1609__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1609__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1609__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1609__d)));
    __Vfunc_aes_mul_gf2p2__1609__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1609__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1609__d)));
    __Vfunc_aes_mul_gf2p2__1609__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1609__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1609__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1609__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1609__b)));
    __Vfunc_aes_mul_gf2p2__1609__Vfuncout = __Vfunc_aes_mul_gf2p2__1609__f;
    __Vfunc_aes_mul_gf2p4__1608__a = __Vfunc_aes_mul_gf2p2__1609__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1610__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1608__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1608__delta)));
    __Vfunc_aes_mul_gf2p2__1610__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1608__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1608__gamma)));
    __Vfunc_aes_mul_gf2p2__1610__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1610__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1610__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1610__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1610__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1610__d)));
    __Vfunc_aes_mul_gf2p2__1610__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1610__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1610__d)));
    __Vfunc_aes_mul_gf2p2__1610__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1610__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1610__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1610__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1610__b)));
    __Vfunc_aes_mul_gf2p2__1610__Vfuncout = __Vfunc_aes_mul_gf2p2__1610__f;
    __Vfunc_aes_mul_gf2p4__1608__b = __Vfunc_aes_mul_gf2p2__1610__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1611__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1608__delta));
    __Vfunc_aes_mul_gf2p2__1611__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1608__gamma));
    __Vfunc_aes_mul_gf2p2__1611__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1611__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1611__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1611__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1611__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1611__d)));
    __Vfunc_aes_mul_gf2p2__1611__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1611__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1611__d)));
    __Vfunc_aes_mul_gf2p2__1611__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1611__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1611__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1611__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1611__b)));
    __Vfunc_aes_mul_gf2p2__1611__Vfuncout = __Vfunc_aes_mul_gf2p2__1611__f;
    __Vfunc_aes_mul_gf2p4__1608__c = __Vfunc_aes_mul_gf2p2__1611__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1612__g = __Vfunc_aes_mul_gf2p4__1608__b;
    __Vfunc_aes_scale_omega2_gf2p2__1612__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1612__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1612__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1612__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1612__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1608__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1608__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1608__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1612__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1613__g = __Vfunc_aes_mul_gf2p4__1608__b;
    __Vfunc_aes_scale_omega2_gf2p2__1613__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1613__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1613__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1613__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1613__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1608__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1608__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1608__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1613__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1608__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1608__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1608__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1614__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1614__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1615__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1614__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1615__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1614__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1615__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1615__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1615__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1615__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1615__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1615__d)));
    __Vfunc_aes_mul_gf2p2__1615__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1615__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1615__d)));
    __Vfunc_aes_mul_gf2p2__1615__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1615__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1615__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1615__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1615__b)));
    __Vfunc_aes_mul_gf2p2__1615__Vfuncout = __Vfunc_aes_mul_gf2p2__1615__f;
    __Vfunc_aes_mul_gf2p4__1614__a = __Vfunc_aes_mul_gf2p2__1615__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1616__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1614__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1614__delta)));
    __Vfunc_aes_mul_gf2p2__1616__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1614__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1614__gamma)));
    __Vfunc_aes_mul_gf2p2__1616__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1616__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1616__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1616__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1616__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1616__d)));
    __Vfunc_aes_mul_gf2p2__1616__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1616__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1616__d)));
    __Vfunc_aes_mul_gf2p2__1616__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1616__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1616__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1616__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1616__b)));
    __Vfunc_aes_mul_gf2p2__1616__Vfuncout = __Vfunc_aes_mul_gf2p2__1616__f;
    __Vfunc_aes_mul_gf2p4__1614__b = __Vfunc_aes_mul_gf2p2__1616__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1617__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1614__delta));
    __Vfunc_aes_mul_gf2p2__1617__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1614__gamma));
    __Vfunc_aes_mul_gf2p2__1617__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1617__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1617__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1617__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1617__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1617__d)));
    __Vfunc_aes_mul_gf2p2__1617__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1617__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1617__d)));
    __Vfunc_aes_mul_gf2p2__1617__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1617__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1617__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1617__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1617__b)));
    __Vfunc_aes_mul_gf2p2__1617__Vfuncout = __Vfunc_aes_mul_gf2p2__1617__f;
    __Vfunc_aes_mul_gf2p4__1614__c = __Vfunc_aes_mul_gf2p2__1617__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1618__g = __Vfunc_aes_mul_gf2p4__1614__b;
    __Vfunc_aes_scale_omega2_gf2p2__1618__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1618__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1618__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1618__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1618__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1614__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1614__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1614__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1618__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1619__g = __Vfunc_aes_mul_gf2p4__1614__b;
    __Vfunc_aes_scale_omega2_gf2p2__1619__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1619__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1619__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1619__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1619__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1614__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1614__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1614__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1619__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1614__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1614__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1614__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1632__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1632__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p2__1633__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1632__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1633__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1632__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1633__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1633__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1633__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1633__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1633__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1633__d)));
    __Vfunc_aes_mul_gf2p2__1633__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1633__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1633__d)));
    __Vfunc_aes_mul_gf2p2__1633__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1633__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1633__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1633__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1633__b)));
    __Vfunc_aes_mul_gf2p2__1633__Vfuncout = __Vfunc_aes_mul_gf2p2__1633__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1632__a = __Vfunc_aes_mul_gf2p2__1633__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1634__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1632__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1632__delta)));
    __Vfunc_aes_mul_gf2p2__1634__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1632__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1632__gamma)));
    __Vfunc_aes_mul_gf2p2__1634__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1634__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1634__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1634__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1634__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1634__d)));
    __Vfunc_aes_mul_gf2p2__1634__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1634__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1634__d)));
    __Vfunc_aes_mul_gf2p2__1634__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1634__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1634__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1634__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1634__b)));
    __Vfunc_aes_mul_gf2p2__1634__Vfuncout = __Vfunc_aes_mul_gf2p2__1634__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1632__b = __Vfunc_aes_mul_gf2p2__1634__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1635__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1632__delta));
    __Vfunc_aes_mul_gf2p2__1635__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1632__gamma));
    vlSelf->__Vfunc_aes_mul_gf2p2__1635__a = (1U & 
                                              (((IData)(__Vfunc_aes_mul_gf2p2__1635__g) 
                                                & (IData)(__Vfunc_aes_mul_gf2p2__1635__d)) 
                                               >> 1U));
    vlSelf->__Vfunc_aes_mul_gf2p2__1635__b = (1U & 
                                              (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1635__g) 
                                               & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1635__d)));
    vlSelf->__Vfunc_aes_mul_gf2p2__1635__c = (1U & 
                                              ((IData)(__Vfunc_aes_mul_gf2p2__1635__g) 
                                               & (IData)(__Vfunc_aes_mul_gf2p2__1635__d)));
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
}
