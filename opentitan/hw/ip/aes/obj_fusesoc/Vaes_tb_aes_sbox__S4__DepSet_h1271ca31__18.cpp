// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i__95(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i__95\n"); );
    // Init
    CData/*7:0*/ __Vfunc_aes_mvm__1986__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1986__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1986__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1987__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1987__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1988__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1988__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1989__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1989__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1989__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1990__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1990__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1991__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1991__vec_c;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2012__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2012__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2012__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2012__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2012__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2012__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2013__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2013__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2013__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2013__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2013__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2013__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2013__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2014__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2014__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2014__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2014__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2014__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2014__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2014__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2015__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2015__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2015__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2015__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2015__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2015__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2015__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2016__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2016__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2016__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2017__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2017__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2017__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2018__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2018__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2018__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2018__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2018__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2018__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2019__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2019__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2019__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2019__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2019__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2019__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2019__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2020__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2020__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2020__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2020__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2020__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2020__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2020__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2021__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2021__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2021__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2021__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2021__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2021__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2021__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2022__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2022__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2022__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2023__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2023__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2023__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2024__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2024__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2024__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2025__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2025__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2025__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2026__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2026__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2026__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2027__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2027__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2027__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2028__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2028__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2028__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2029__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2029__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__2029__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2032__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2032__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2032__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2032__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2032__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2032__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2032__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2033__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2033__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2033__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2033__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2033__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2033__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2033__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2036__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2036__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2036__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2036__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2036__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2036__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2036__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2037__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2037__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2037__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2037__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2037__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2037__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2037__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2040__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2040__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2040__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2040__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2040__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2040__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2040__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2041__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2041__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2041__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2041__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2041__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2041__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2041__c;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2042__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2042__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2042__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2042__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2042__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2042__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2043__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2043__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2043__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2043__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2043__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2043__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2043__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2044__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2044__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2044__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2044__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2044__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2044__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2044__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2045__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2045__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2045__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2045__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2045__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2045__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2045__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2046__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2046__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2046__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2047__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2047__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2047__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2048__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2048__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2048__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2048__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2048__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2048__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2049__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2049__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2049__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2049__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2049__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2049__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2049__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2050__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2050__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2050__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2050__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2050__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2050__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2050__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2051__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2051__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2051__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2051__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2051__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2051__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2051__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2052__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2052__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2052__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2053__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2053__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2053__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2054__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2054__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2054__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2054__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2054__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2054__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2055__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2055__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2055__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2055__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2055__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2055__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2055__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2056__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2056__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2056__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2056__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2056__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2056__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2056__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2057__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2057__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2057__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2057__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2057__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2057__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2057__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2058__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2058__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2058__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2059__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2059__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2059__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2060__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2060__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2060__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2060__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2060__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2060__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2061__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2061__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2061__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2061__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2061__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2061__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2061__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2062__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2062__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2062__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2062__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2062__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2062__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2062__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2063__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2063__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2063__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2063__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2063__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2063__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2063__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2064__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2064__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2064__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2065__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2065__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2065__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2066__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2066__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2066__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2066__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2066__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2066__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2067__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2067__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2067__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2067__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2067__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2067__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2067__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2068__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2068__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2068__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2068__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2068__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2068__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2068__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2069__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2069__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2069__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2069__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2069__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2069__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2069__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2070__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2070__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2070__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2071__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2071__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2071__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2072__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2072__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2072__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2072__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2072__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2072__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2073__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2073__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2073__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2073__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2073__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2073__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2073__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2074__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2074__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2074__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2074__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2074__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2074__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2074__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2075__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2075__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2075__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2075__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2075__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2075__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2075__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2076__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2076__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2076__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2077__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2077__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2077__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2078__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2078__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2078__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2078__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2079__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2079__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2079__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2079__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2079__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2080__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2080__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2080__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2080__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2080__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2080__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2080__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2081__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2081__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2081__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2081__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2081__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2081__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2081__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2082__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2082__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2082__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2083__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2083__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2083__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2084__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2084__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2084__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2084__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2084__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2084__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2085__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2085__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2085__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2085__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2085__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2085__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2085__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2086__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2086__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2086__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2086__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2086__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2086__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2086__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2087__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2087__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2087__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2087__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2087__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2087__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2087__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2088__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2088__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2088__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2089__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2089__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2089__d;
    // Body
    if (vlSymsp->TOP.rst_ni) {
        if ((1U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we))) {
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y_ss__q_o 
                = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d) 
                    << 4U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d));
        }
        if ((2U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we))) {
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o 
                = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d) 
                    << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d));
        }
        if ((4U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we))) {
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o 
                = ((0xf000U & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                               << 8U)) | ((0xf00U & 
                                           ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                            << 8U)) 
                                          | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
        }
        if ((1U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we))) {
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0xf0U & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                              << 4U) ^ (0xfff0U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                   >> 0x10U)))) 
                   | (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                              ^ (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                 >> 0x14U))));
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o 
                = ((0xf000U & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                               << 8U)) | ((0xf00U & 
                                           ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                            << 8U)) 
                                          | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
        }
        if ((8U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we))) {
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o 
                = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d) 
                    << 4U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d));
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o 
                = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d) 
                    << 4U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d));
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o 
                = ((0xf0U & ((vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                              ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by)) 
                             << 4U)) | (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx))));
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o 
                = ((0xf0U & ((0xfffffff0U & vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd) 
                             ^ ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by) 
                                << 4U))) | (0xfU & 
                                            ((vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                              >> 4U) 
                                             ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx))));
        }
        if ((4U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we))) {
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o 
                = vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i;
        }
        if ((1U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we))) {
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0xf0U & ((0xfffffff0U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i)) 
                             ^ (0xff0U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                          >> 0x14U)))) 
                   | (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i) 
                              ^ (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                 >> 0x18U))));
        }
        if ((4U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we))) {
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0xcU & ((0xfffffffcU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i)) 
                            ^ (0xfffffcU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 8U)))) 
                   | (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i) 
                            ^ (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                               >> 0xaU))));
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0xcU & ((0xfffffffcU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i)) 
                            ^ (0xffffcU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0xcU)))) 
                   | (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i) 
                            ^ (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                               >> 0xeU))));
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0xcU & ((0xfffffffcU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i)) 
                            ^ (0x3ffffcU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0xaU)))) 
                   | (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i) 
                            ^ (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                               >> 0xcU))));
            vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q 
                = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d;
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o 
                = vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o;
        } else {
            vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q 
                = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d;
        }
        if ((2U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we))) {
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0xcU & ((0xfffffffcU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i)) 
                            ^ (0xfffcU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                          >> 0x10U)))) 
                   | (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i) 
                            ^ (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                               >> 0x12U))));
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0xcU & ((0x3ffffffcU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                            >> 2U)) 
                            ^ (0x3fffcU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0xeU)))) 
                   | (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                            ^ (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                               >> 0x10U))));
        }
        if ((4U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we))) {
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0xcU & ((0x3ffffffcU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U)) 
                            ^ (0x3fffffcU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                             >> 6U)))) 
                   | (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                            ^ (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                               >> 8U))));
        }
    } else {
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y_ss__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = 0U;
        vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = 0U;
    }
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i 
        = ((0xf0U & ((0xffffff0U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                    >> 4U)) ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                                               << 4U))) 
           | (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                      ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                         >> 4U))));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x 
        = ((0xfU & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x)) 
           | (0xf0U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                        ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o)) 
                       << 4U)));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x 
        = ((0xfU & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x)) 
           | (0xf0U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                       ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o))));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x 
        = ((0xf0U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x)) 
           | (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                      ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o))));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x 
        = ((0xf0U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x)) 
           | (0xfU & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                       ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o)) 
                      >> 4U)));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i 
        = ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
           ^ ((0xcU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                       << 2U)) | (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                                        >> 2U))));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma10_prd2 
        = ((0xcU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                    << 2U)) | (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o)));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i 
        = ((0xcU & ((0x3ffffffcU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                    >> 2U)) ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                                               << 2U))) 
           | (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                    ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                       >> 2U))));
    if (vlSymsp->TOP.rst_ni) {
        if ((2U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we))) {
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o 
                = vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i;
        }
    } else {
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o = 0U;
    }
    __Vfunc_aes_mul_gf2p4__2012__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p4__2012__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__2013__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2012__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2013__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2012__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2013__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2013__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2013__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2013__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2013__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2013__d)));
    __Vfunc_aes_mul_gf2p2__2013__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2013__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2013__d)));
    __Vfunc_aes_mul_gf2p2__2013__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2013__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2013__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2013__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2013__b)));
    __Vfunc_aes_mul_gf2p2__2013__Vfuncout = __Vfunc_aes_mul_gf2p2__2013__f;
    __Vfunc_aes_mul_gf2p4__2012__a = __Vfunc_aes_mul_gf2p2__2013__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2014__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2012__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2012__delta)));
    __Vfunc_aes_mul_gf2p2__2014__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2012__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2012__gamma)));
    __Vfunc_aes_mul_gf2p2__2014__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2014__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2014__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2014__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2014__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2014__d)));
    __Vfunc_aes_mul_gf2p2__2014__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2014__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2014__d)));
    __Vfunc_aes_mul_gf2p2__2014__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2014__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2014__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2014__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2014__b)));
    __Vfunc_aes_mul_gf2p2__2014__Vfuncout = __Vfunc_aes_mul_gf2p2__2014__f;
    __Vfunc_aes_mul_gf2p4__2012__b = __Vfunc_aes_mul_gf2p2__2014__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2015__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2012__delta));
    __Vfunc_aes_mul_gf2p2__2015__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2012__gamma));
    __Vfunc_aes_mul_gf2p2__2015__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2015__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2015__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2015__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2015__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2015__d)));
    __Vfunc_aes_mul_gf2p2__2015__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2015__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2015__d)));
    __Vfunc_aes_mul_gf2p2__2015__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2015__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2015__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2015__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2015__b)));
    __Vfunc_aes_mul_gf2p2__2015__Vfuncout = __Vfunc_aes_mul_gf2p2__2015__f;
    __Vfunc_aes_mul_gf2p4__2012__c = __Vfunc_aes_mul_gf2p2__2015__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2016__g = __Vfunc_aes_mul_gf2p4__2012__b;
    __Vfunc_aes_scale_omega2_gf2p2__2016__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2016__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2016__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2016__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2016__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2012__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2012__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__2012__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2016__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__2017__g = __Vfunc_aes_mul_gf2p4__2012__b;
    __Vfunc_aes_scale_omega2_gf2p2__2017__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2017__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2017__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2017__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2017__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2012__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2012__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__2012__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2017__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__2012__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__2012__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__2012__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2018__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p4__2018__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__2019__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2018__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2019__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2018__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2019__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2019__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2019__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2019__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2019__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2019__d)));
    __Vfunc_aes_mul_gf2p2__2019__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2019__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2019__d)));
    __Vfunc_aes_mul_gf2p2__2019__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2019__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2019__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2019__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2019__b)));
    __Vfunc_aes_mul_gf2p2__2019__Vfuncout = __Vfunc_aes_mul_gf2p2__2019__f;
    __Vfunc_aes_mul_gf2p4__2018__a = __Vfunc_aes_mul_gf2p2__2019__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2020__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2018__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2018__delta)));
    __Vfunc_aes_mul_gf2p2__2020__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2018__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2018__gamma)));
    __Vfunc_aes_mul_gf2p2__2020__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2020__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2020__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2020__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2020__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2020__d)));
    __Vfunc_aes_mul_gf2p2__2020__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2020__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2020__d)));
    __Vfunc_aes_mul_gf2p2__2020__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2020__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2020__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2020__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2020__b)));
    __Vfunc_aes_mul_gf2p2__2020__Vfuncout = __Vfunc_aes_mul_gf2p2__2020__f;
    __Vfunc_aes_mul_gf2p4__2018__b = __Vfunc_aes_mul_gf2p2__2020__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2021__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2018__delta));
    __Vfunc_aes_mul_gf2p2__2021__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2018__gamma));
    __Vfunc_aes_mul_gf2p2__2021__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2021__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2021__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2021__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2021__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2021__d)));
    __Vfunc_aes_mul_gf2p2__2021__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2021__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2021__d)));
    __Vfunc_aes_mul_gf2p2__2021__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2021__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2021__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2021__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2021__b)));
    __Vfunc_aes_mul_gf2p2__2021__Vfuncout = __Vfunc_aes_mul_gf2p2__2021__f;
    __Vfunc_aes_mul_gf2p4__2018__c = __Vfunc_aes_mul_gf2p2__2021__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2022__g = __Vfunc_aes_mul_gf2p4__2018__b;
    __Vfunc_aes_scale_omega2_gf2p2__2022__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2022__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2022__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2022__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2022__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2018__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2018__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__2018__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2022__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__2023__g = __Vfunc_aes_mul_gf2p4__2018__b;
    __Vfunc_aes_scale_omega2_gf2p2__2023__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2023__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2023__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2023__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2023__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2018__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2018__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__2018__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2023__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__2018__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__2018__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__2018__Vfuncout;
    vlSelf->__Vfunc_aes_mvm__1991__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1990__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__1989__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1991__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1990__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__1989__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1991__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1990__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__1989__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1991__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1990__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1989__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1991__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1990__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__1989__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1991__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1990__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__1989__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1991__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1990__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__1989__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1991__mat_a[7U] = 0x24U;
    vlSelf->__Vfunc_aes_mvm__1990__mat_a[7U] = 0x60U;
    vlSelf->__Vfunc_aes_mvm__1989__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1991__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1990__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1989__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1991__vec_c = 0U;
    __Vfunc_aes_mvm__1990__vec_c = 0U;
    __Vfunc_aes_mvm__1989__vec_c = 0U;
    __Vfunc_aes_mvm__1991__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1991__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1990__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1989__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1991__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1990__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1989__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1991__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1990__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1989__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1991__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1990__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1989__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1991__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1990__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1989__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1991__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1990__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1989__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1991__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1991__vec_b)))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1990__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1990__vec_b)))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1989__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1989__vec_b)))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1991__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1991__vec_b)))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1990__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1990__vec_b)))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1989__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1989__vec_b)))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1991__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1991__vec_b)))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1990__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1990__vec_b)))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1989__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1989__vec_b)))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1991__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1991__vec_b)))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1990__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1990__vec_b)))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1989__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1989__vec_b)))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1991__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1991__vec_b)))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1990__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1990__vec_b)))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1989__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1989__vec_b)))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1991__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1991__vec_b)))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1990__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1990__vec_b)))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1989__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1989__vec_b)))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1991__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1991__vec_b)))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1990__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1990__vec_b)))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1989__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1989__vec_b)))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1991__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1991__vec_b)))));
    __Vfunc_aes_mvm__1990__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1990__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1990__vec_b)))));
    __Vfunc_aes_mvm__1989__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1989__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1989__vec_b)))));
    __Vfunc_aes_mvm__1991__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1991__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1991__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1991__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1991__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1990__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1990__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1990__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1990__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1989__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1989__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1989__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1989__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1989__Vfuncout = __Vfunc_aes_mvm__1989__vec_c;
    vlSelf->mask_o = __Vfunc_aes_mvm__1989__Vfuncout;
    vlSelf->__Vfunc_aes_mvm__1988__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1987__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__1986__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1988__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1987__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__1986__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1988__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1987__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__1986__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1988__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1987__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1986__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1988__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1987__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__1986__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1988__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1987__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__1986__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1988__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1987__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__1986__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1988__mat_a[7U] = 0x24U;
    vlSelf->__Vfunc_aes_mvm__1987__mat_a[7U] = 0x60U;
    vlSelf->__Vfunc_aes_mvm__1986__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1988__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1987__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1986__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1988__vec_c = 0U;
    __Vfunc_aes_mvm__1987__vec_c = 0U;
    __Vfunc_aes_mvm__1986__vec_c = 0U;
    __Vfunc_aes_mvm__1988__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1988__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1987__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1986__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1988__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1987__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1986__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1988__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1987__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1986__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1988__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1987__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1986__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1988__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1987__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1986__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1988__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1987__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1986__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1988__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1988__vec_b)))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1987__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1987__vec_b)))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1986__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1986__vec_b)))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1988__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1988__vec_b)))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1987__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1987__vec_b)))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1986__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1986__vec_b)))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1988__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1988__vec_b)))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1987__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1987__vec_b)))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1986__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1986__vec_b)))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1988__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1988__vec_b)))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1987__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1987__vec_b)))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1986__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1986__vec_b)))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1988__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1988__vec_b)))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1987__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1987__vec_b)))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1986__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1986__vec_b)))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1988__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1988__vec_b)))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1987__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1987__vec_b)))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1986__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1986__vec_b)))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1988__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1988__vec_b)))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1987__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1987__vec_b)))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1986__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1986__vec_b)))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1988__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1988__vec_b)))));
    __Vfunc_aes_mvm__1987__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1987__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1987__vec_b)))));
    __Vfunc_aes_mvm__1986__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1986__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1986__vec_b)))));
    __Vfunc_aes_mvm__1988__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1988__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1988__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1988__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1988__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1987__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1987__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1987__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1987__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1986__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1986__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1986__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1986__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1986__Vfuncout = __Vfunc_aes_mvm__1986__vec_c;
    vlSelf->data_o = (0x63U ^ (IData)(__Vfunc_aes_mvm__1986__Vfuncout));
    __Vfunc_aes_mul_gf2p2__2036__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2036__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__2036__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2036__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2036__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2036__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2036__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2036__d)));
    __Vfunc_aes_mul_gf2p2__2036__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2036__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2036__d)));
    __Vfunc_aes_mul_gf2p2__2036__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2036__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2036__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2036__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2036__b)));
    __Vfunc_aes_mul_gf2p2__2036__Vfuncout = __Vfunc_aes_mul_gf2p2__2036__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__2036__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2037__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__2037__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2037__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2037__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2037__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2037__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2037__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2037__d)));
    __Vfunc_aes_mul_gf2p2__2037__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2037__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2037__d)));
    __Vfunc_aes_mul_gf2p2__2037__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2037__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2037__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2037__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2037__b)));
    __Vfunc_aes_mul_gf2p2__2037__Vfuncout = __Vfunc_aes_mul_gf2p2__2037__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__2037__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2040__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2040__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2040__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2040__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2040__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2040__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2040__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2040__d)));
    __Vfunc_aes_mul_gf2p2__2040__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2040__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2040__d)));
    __Vfunc_aes_mul_gf2p2__2040__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2040__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2040__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2040__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2040__b)));
    __Vfunc_aes_mul_gf2p2__2040__Vfuncout = __Vfunc_aes_mul_gf2p2__2040__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__2040__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2041__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__2041__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__2041__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2041__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2041__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2041__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2041__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2041__d)));
    __Vfunc_aes_mul_gf2p2__2041__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2041__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2041__d)));
    __Vfunc_aes_mul_gf2p2__2041__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2041__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2041__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2041__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2041__b)));
    __Vfunc_aes_mul_gf2p2__2041__Vfuncout = __Vfunc_aes_mul_gf2p2__2041__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__2041__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 4U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i 
        = ((0xcU & ((0x3ffffffcU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                    >> 2U)) ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                                               << 2U))) 
           | (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                    ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                       >> 2U))));
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
    __Vfunc_aes_mul_gf2p2__2032__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2032__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__2032__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2032__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2032__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2032__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2032__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2032__d)));
    __Vfunc_aes_mul_gf2p2__2032__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2032__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2032__d)));
    __Vfunc_aes_mul_gf2p2__2032__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2032__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2032__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2032__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2032__b)));
    __Vfunc_aes_mul_gf2p2__2032__Vfuncout = __Vfunc_aes_mul_gf2p2__2032__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__2032__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2033__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__2033__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2033__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2033__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2033__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2033__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2033__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2033__d)));
    __Vfunc_aes_mul_gf2p2__2033__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2033__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2033__d)));
    __Vfunc_aes_mul_gf2p2__2033__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2033__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2033__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2033__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2033__b)));
    __Vfunc_aes_mul_gf2p2__2033__Vfuncout = __Vfunc_aes_mul_gf2p2__2033__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__2033__Vfuncout;
    __Vfunc_aes_square_gf2p2__2025__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                >> 6U) 
                                               ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                  >> 4U)));
    __Vfunc_aes_square_gf2p2__2025__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__2025__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__2025__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__2025__Vfuncout = __Vfunc_aes_square_gf2p2__2025__d;
    __Vfunc_aes_scale_omega2_gf2p2__2024__g = __Vfunc_aes_square_gf2p2__2025__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2024__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2024__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2024__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2024__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2024__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__2024__Vfuncout;
    __Vfunc_aes_square_gf2p2__2027__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                >> 2U) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i)));
    __Vfunc_aes_square_gf2p2__2027__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__2027__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__2027__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__2027__Vfuncout = __Vfunc_aes_square_gf2p2__2027__d;
    __Vfunc_aes_scale_omega2_gf2p2__2026__g = __Vfunc_aes_square_gf2p2__2027__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2026__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2026__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2026__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2026__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2026__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__2026__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2048__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__2048__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__2049__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2048__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2049__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2048__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2049__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2049__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2049__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2049__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2049__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2049__d)));
    __Vfunc_aes_mul_gf2p2__2049__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2049__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2049__d)));
    __Vfunc_aes_mul_gf2p2__2049__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2049__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2049__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2049__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2049__b)));
    __Vfunc_aes_mul_gf2p2__2049__Vfuncout = __Vfunc_aes_mul_gf2p2__2049__f;
    __Vfunc_aes_mul_gf2p4__2048__a = __Vfunc_aes_mul_gf2p2__2049__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2050__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2048__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2048__delta)));
    __Vfunc_aes_mul_gf2p2__2050__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2048__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2048__gamma)));
    __Vfunc_aes_mul_gf2p2__2050__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2050__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2050__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2050__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2050__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2050__d)));
    __Vfunc_aes_mul_gf2p2__2050__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2050__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2050__d)));
    __Vfunc_aes_mul_gf2p2__2050__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2050__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2050__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2050__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2050__b)));
    __Vfunc_aes_mul_gf2p2__2050__Vfuncout = __Vfunc_aes_mul_gf2p2__2050__f;
    __Vfunc_aes_mul_gf2p4__2048__b = __Vfunc_aes_mul_gf2p2__2050__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2051__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2048__delta));
    __Vfunc_aes_mul_gf2p2__2051__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2048__gamma));
    __Vfunc_aes_mul_gf2p2__2051__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2051__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2051__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2051__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2051__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2051__d)));
    __Vfunc_aes_mul_gf2p2__2051__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2051__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2051__d)));
    __Vfunc_aes_mul_gf2p2__2051__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2051__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2051__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2051__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2051__b)));
    __Vfunc_aes_mul_gf2p2__2051__Vfuncout = __Vfunc_aes_mul_gf2p2__2051__f;
    __Vfunc_aes_mul_gf2p4__2048__c = __Vfunc_aes_mul_gf2p2__2051__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2052__g = __Vfunc_aes_mul_gf2p4__2048__b;
    __Vfunc_aes_scale_omega2_gf2p2__2052__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2052__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2052__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2052__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2052__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2048__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2048__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__2048__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2052__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__2053__g = __Vfunc_aes_mul_gf2p4__2048__b;
    __Vfunc_aes_scale_omega2_gf2p2__2053__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2053__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2053__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2053__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2053__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2048__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2048__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__2048__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2053__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__2048__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__2048__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__2048__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2054__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__2054__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__2055__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2054__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2055__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2054__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2055__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2055__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2055__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2055__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2055__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2055__d)));
    __Vfunc_aes_mul_gf2p2__2055__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2055__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2055__d)));
    __Vfunc_aes_mul_gf2p2__2055__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2055__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2055__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2055__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2055__b)));
    __Vfunc_aes_mul_gf2p2__2055__Vfuncout = __Vfunc_aes_mul_gf2p2__2055__f;
    __Vfunc_aes_mul_gf2p4__2054__a = __Vfunc_aes_mul_gf2p2__2055__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2056__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2054__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2054__delta)));
    __Vfunc_aes_mul_gf2p2__2056__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2054__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2054__gamma)));
    __Vfunc_aes_mul_gf2p2__2056__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2056__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2056__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2056__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2056__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2056__d)));
    __Vfunc_aes_mul_gf2p2__2056__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2056__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2056__d)));
    __Vfunc_aes_mul_gf2p2__2056__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2056__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2056__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2056__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2056__b)));
    __Vfunc_aes_mul_gf2p2__2056__Vfuncout = __Vfunc_aes_mul_gf2p2__2056__f;
    __Vfunc_aes_mul_gf2p4__2054__b = __Vfunc_aes_mul_gf2p2__2056__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2057__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2054__delta));
    __Vfunc_aes_mul_gf2p2__2057__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2054__gamma));
    __Vfunc_aes_mul_gf2p2__2057__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2057__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2057__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2057__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2057__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2057__d)));
    __Vfunc_aes_mul_gf2p2__2057__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2057__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2057__d)));
    __Vfunc_aes_mul_gf2p2__2057__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2057__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2057__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2057__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2057__b)));
    __Vfunc_aes_mul_gf2p2__2057__Vfuncout = __Vfunc_aes_mul_gf2p2__2057__f;
    __Vfunc_aes_mul_gf2p4__2054__c = __Vfunc_aes_mul_gf2p2__2057__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2058__g = __Vfunc_aes_mul_gf2p4__2054__b;
    __Vfunc_aes_scale_omega2_gf2p2__2058__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2058__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2058__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2058__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2058__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2054__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2054__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__2054__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2058__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__2059__g = __Vfunc_aes_mul_gf2p4__2054__b;
    __Vfunc_aes_scale_omega2_gf2p2__2059__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2059__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2059__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2059__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2059__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2054__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2054__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__2054__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2059__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__2054__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__2054__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__2054__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2072__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__2072__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p2__2073__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2072__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2073__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2072__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2073__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2073__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2073__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2073__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2073__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2073__d)));
    __Vfunc_aes_mul_gf2p2__2073__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2073__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2073__d)));
    __Vfunc_aes_mul_gf2p2__2073__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2073__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2073__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2073__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2073__b)));
    __Vfunc_aes_mul_gf2p2__2073__Vfuncout = __Vfunc_aes_mul_gf2p2__2073__f;
    __Vfunc_aes_mul_gf2p4__2072__a = __Vfunc_aes_mul_gf2p2__2073__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2074__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2072__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2072__delta)));
    __Vfunc_aes_mul_gf2p2__2074__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2072__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2072__gamma)));
    __Vfunc_aes_mul_gf2p2__2074__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2074__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2074__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2074__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2074__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2074__d)));
    __Vfunc_aes_mul_gf2p2__2074__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2074__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2074__d)));
    __Vfunc_aes_mul_gf2p2__2074__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2074__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2074__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2074__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2074__b)));
    __Vfunc_aes_mul_gf2p2__2074__Vfuncout = __Vfunc_aes_mul_gf2p2__2074__f;
    __Vfunc_aes_mul_gf2p4__2072__b = __Vfunc_aes_mul_gf2p2__2074__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2075__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2072__delta));
    __Vfunc_aes_mul_gf2p2__2075__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2072__gamma));
    __Vfunc_aes_mul_gf2p2__2075__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2075__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2075__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2075__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2075__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2075__d)));
    __Vfunc_aes_mul_gf2p2__2075__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2075__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2075__d)));
    __Vfunc_aes_mul_gf2p2__2075__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2075__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2075__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2075__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2075__b)));
    __Vfunc_aes_mul_gf2p2__2075__Vfuncout = __Vfunc_aes_mul_gf2p2__2075__f;
    __Vfunc_aes_mul_gf2p4__2072__c = __Vfunc_aes_mul_gf2p2__2075__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2076__g = __Vfunc_aes_mul_gf2p4__2072__b;
    __Vfunc_aes_scale_omega2_gf2p2__2076__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2076__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2076__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2076__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2076__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2072__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2072__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__2072__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2076__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__2077__g = __Vfunc_aes_mul_gf2p4__2072__b;
    __Vfunc_aes_scale_omega2_gf2p2__2077__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2077__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2077__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2077__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2077__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2072__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2072__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__2072__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2077__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__2072__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__2072__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__2072__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2084__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__2084__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 8U));
    __Vfunc_aes_mul_gf2p2__2085__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2084__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2085__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2084__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2085__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2085__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2085__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2085__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2085__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2085__d)));
    __Vfunc_aes_mul_gf2p2__2085__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2085__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2085__d)));
    __Vfunc_aes_mul_gf2p2__2085__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2085__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2085__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2085__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2085__b)));
    __Vfunc_aes_mul_gf2p2__2085__Vfuncout = __Vfunc_aes_mul_gf2p2__2085__f;
    __Vfunc_aes_mul_gf2p4__2084__a = __Vfunc_aes_mul_gf2p2__2085__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2086__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2084__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2084__delta)));
    __Vfunc_aes_mul_gf2p2__2086__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2084__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2084__gamma)));
    __Vfunc_aes_mul_gf2p2__2086__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2086__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2086__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2086__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2086__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2086__d)));
    __Vfunc_aes_mul_gf2p2__2086__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2086__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2086__d)));
    __Vfunc_aes_mul_gf2p2__2086__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2086__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2086__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2086__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2086__b)));
    __Vfunc_aes_mul_gf2p2__2086__Vfuncout = __Vfunc_aes_mul_gf2p2__2086__f;
    __Vfunc_aes_mul_gf2p4__2084__b = __Vfunc_aes_mul_gf2p2__2086__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2087__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2084__delta));
    __Vfunc_aes_mul_gf2p2__2087__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2084__gamma));
    __Vfunc_aes_mul_gf2p2__2087__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2087__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2087__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2087__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2087__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2087__d)));
    __Vfunc_aes_mul_gf2p2__2087__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2087__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2087__d)));
    __Vfunc_aes_mul_gf2p2__2087__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2087__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2087__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2087__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2087__b)));
    __Vfunc_aes_mul_gf2p2__2087__Vfuncout = __Vfunc_aes_mul_gf2p2__2087__f;
    __Vfunc_aes_mul_gf2p4__2084__c = __Vfunc_aes_mul_gf2p2__2087__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2088__g = __Vfunc_aes_mul_gf2p4__2084__b;
    __Vfunc_aes_scale_omega2_gf2p2__2088__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2088__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2088__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2088__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2088__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2084__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2084__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__2084__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2088__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__2089__g = __Vfunc_aes_mul_gf2p4__2084__b;
    __Vfunc_aes_scale_omega2_gf2p2__2089__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2089__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2089__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2089__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2089__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2084__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2084__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__2084__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2089__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__2084__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__2084__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__2084__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2042__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p4__2042__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__2043__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2042__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2043__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2042__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2043__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2043__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2043__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2043__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2043__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2043__d)));
    __Vfunc_aes_mul_gf2p2__2043__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2043__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2043__d)));
    __Vfunc_aes_mul_gf2p2__2043__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2043__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2043__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2043__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2043__b)));
    __Vfunc_aes_mul_gf2p2__2043__Vfuncout = __Vfunc_aes_mul_gf2p2__2043__f;
    __Vfunc_aes_mul_gf2p4__2042__a = __Vfunc_aes_mul_gf2p2__2043__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2044__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2042__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2042__delta)));
    __Vfunc_aes_mul_gf2p2__2044__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2042__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2042__gamma)));
    __Vfunc_aes_mul_gf2p2__2044__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2044__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2044__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2044__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2044__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2044__d)));
    __Vfunc_aes_mul_gf2p2__2044__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2044__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2044__d)));
    __Vfunc_aes_mul_gf2p2__2044__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2044__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2044__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2044__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2044__b)));
    __Vfunc_aes_mul_gf2p2__2044__Vfuncout = __Vfunc_aes_mul_gf2p2__2044__f;
    __Vfunc_aes_mul_gf2p4__2042__b = __Vfunc_aes_mul_gf2p2__2044__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2045__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2042__delta));
    __Vfunc_aes_mul_gf2p2__2045__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2042__gamma));
    __Vfunc_aes_mul_gf2p2__2045__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2045__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2045__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2045__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2045__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2045__d)));
    __Vfunc_aes_mul_gf2p2__2045__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2045__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2045__d)));
    __Vfunc_aes_mul_gf2p2__2045__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2045__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2045__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2045__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2045__b)));
    __Vfunc_aes_mul_gf2p2__2045__Vfuncout = __Vfunc_aes_mul_gf2p2__2045__f;
    __Vfunc_aes_mul_gf2p4__2042__c = __Vfunc_aes_mul_gf2p2__2045__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2046__g = __Vfunc_aes_mul_gf2p4__2042__b;
    __Vfunc_aes_scale_omega2_gf2p2__2046__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2046__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2046__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2046__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2046__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2042__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2042__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__2042__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2046__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__2047__g = __Vfunc_aes_mul_gf2p4__2042__b;
    __Vfunc_aes_scale_omega2_gf2p2__2047__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2047__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2047__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2047__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2047__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2042__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2042__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__2042__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2047__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__2042__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__2042__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__2042__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2060__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p4__2060__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__2061__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2060__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2061__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2060__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2061__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2061__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2061__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2061__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2061__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2061__d)));
    __Vfunc_aes_mul_gf2p2__2061__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2061__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2061__d)));
    __Vfunc_aes_mul_gf2p2__2061__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2061__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2061__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2061__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2061__b)));
    __Vfunc_aes_mul_gf2p2__2061__Vfuncout = __Vfunc_aes_mul_gf2p2__2061__f;
    __Vfunc_aes_mul_gf2p4__2060__a = __Vfunc_aes_mul_gf2p2__2061__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2062__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2060__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2060__delta)));
    __Vfunc_aes_mul_gf2p2__2062__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2060__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2060__gamma)));
    __Vfunc_aes_mul_gf2p2__2062__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2062__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2062__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2062__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2062__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2062__d)));
    __Vfunc_aes_mul_gf2p2__2062__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2062__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2062__d)));
    __Vfunc_aes_mul_gf2p2__2062__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2062__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2062__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2062__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2062__b)));
    __Vfunc_aes_mul_gf2p2__2062__Vfuncout = __Vfunc_aes_mul_gf2p2__2062__f;
    __Vfunc_aes_mul_gf2p4__2060__b = __Vfunc_aes_mul_gf2p2__2062__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2063__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2060__delta));
    __Vfunc_aes_mul_gf2p2__2063__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2060__gamma));
    __Vfunc_aes_mul_gf2p2__2063__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2063__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2063__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2063__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2063__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2063__d)));
    __Vfunc_aes_mul_gf2p2__2063__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2063__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2063__d)));
    __Vfunc_aes_mul_gf2p2__2063__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2063__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2063__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2063__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2063__b)));
    __Vfunc_aes_mul_gf2p2__2063__Vfuncout = __Vfunc_aes_mul_gf2p2__2063__f;
    __Vfunc_aes_mul_gf2p4__2060__c = __Vfunc_aes_mul_gf2p2__2063__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2064__g = __Vfunc_aes_mul_gf2p4__2060__b;
    __Vfunc_aes_scale_omega2_gf2p2__2064__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2064__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2064__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2064__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2064__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2060__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2060__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__2060__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2064__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__2065__g = __Vfunc_aes_mul_gf2p4__2060__b;
    __Vfunc_aes_scale_omega2_gf2p2__2065__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2065__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2065__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2065__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2065__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2060__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2060__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__2060__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2065__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__2060__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__2060__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__2060__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2066__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 8U));
    __Vfunc_aes_mul_gf2p4__2066__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__2067__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2066__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2067__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2066__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2067__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2067__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2067__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2067__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2067__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2067__d)));
    __Vfunc_aes_mul_gf2p2__2067__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2067__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2067__d)));
    __Vfunc_aes_mul_gf2p2__2067__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2067__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2067__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2067__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2067__b)));
    __Vfunc_aes_mul_gf2p2__2067__Vfuncout = __Vfunc_aes_mul_gf2p2__2067__f;
    __Vfunc_aes_mul_gf2p4__2066__a = __Vfunc_aes_mul_gf2p2__2067__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2068__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2066__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2066__delta)));
    __Vfunc_aes_mul_gf2p2__2068__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2066__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2066__gamma)));
    __Vfunc_aes_mul_gf2p2__2068__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2068__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2068__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2068__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2068__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2068__d)));
    __Vfunc_aes_mul_gf2p2__2068__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2068__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2068__d)));
    __Vfunc_aes_mul_gf2p2__2068__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2068__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2068__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2068__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2068__b)));
    __Vfunc_aes_mul_gf2p2__2068__Vfuncout = __Vfunc_aes_mul_gf2p2__2068__f;
    __Vfunc_aes_mul_gf2p4__2066__b = __Vfunc_aes_mul_gf2p2__2068__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2069__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2066__delta));
    __Vfunc_aes_mul_gf2p2__2069__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2066__gamma));
    __Vfunc_aes_mul_gf2p2__2069__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2069__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2069__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2069__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2069__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2069__d)));
    __Vfunc_aes_mul_gf2p2__2069__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2069__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2069__d)));
    __Vfunc_aes_mul_gf2p2__2069__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2069__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2069__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2069__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2069__b)));
    __Vfunc_aes_mul_gf2p2__2069__Vfuncout = __Vfunc_aes_mul_gf2p2__2069__f;
    __Vfunc_aes_mul_gf2p4__2066__c = __Vfunc_aes_mul_gf2p2__2069__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2070__g = __Vfunc_aes_mul_gf2p4__2066__b;
    __Vfunc_aes_scale_omega2_gf2p2__2070__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2070__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2070__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2070__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2070__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2066__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2066__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__2066__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2070__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__2071__g = __Vfunc_aes_mul_gf2p4__2066__b;
    __Vfunc_aes_scale_omega2_gf2p2__2071__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2071__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2071__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2071__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2071__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2066__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2066__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__2066__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2071__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__2066__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__2066__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__2066__Vfuncout;
    vlSelf->__Vfunc_aes_mul_gf2p4__2078__delta = (0xfU 
                                                  & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    vlSelf->__Vfunc_aes_mul_gf2p4__2078__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    vlSelf->__Vfunc_aes_mul_gf2p2__2079__d = (3U & 
                                              ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2078__delta) 
                                               >> 2U));
    vlSelf->__Vfunc_aes_mul_gf2p2__2079__g = (3U & 
                                              ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2078__gamma) 
                                               >> 2U));
    __Vfunc_aes_mul_gf2p2__2079__a = (1U & (((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__2079__g) 
                                             & (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__2079__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2079__b = (1U & (VL_REDXOR_2(vlSelf->__Vfunc_aes_mul_gf2p2__2079__g) 
                                            & VL_REDXOR_2(vlSelf->__Vfunc_aes_mul_gf2p2__2079__d)));
    __Vfunc_aes_mul_gf2p2__2079__c = (1U & ((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__2079__g) 
                                            & (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__2079__d)));
    __Vfunc_aes_mul_gf2p2__2079__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2079__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2079__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2079__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2079__b)));
    __Vfunc_aes_mul_gf2p2__2079__Vfuncout = __Vfunc_aes_mul_gf2p2__2079__f;
    __Vfunc_aes_mul_gf2p4__2078__a = __Vfunc_aes_mul_gf2p2__2079__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2080__d = (3U & (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2078__delta) 
                                             >> 2U) 
                                            ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2078__delta)));
    __Vfunc_aes_mul_gf2p2__2080__g = (3U & (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2078__gamma) 
                                             >> 2U) 
                                            ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2078__gamma)));
    __Vfunc_aes_mul_gf2p2__2080__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2080__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2080__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2080__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2080__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2080__d)));
    __Vfunc_aes_mul_gf2p2__2080__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2080__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2080__d)));
    __Vfunc_aes_mul_gf2p2__2080__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2080__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2080__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2080__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2080__b)));
    __Vfunc_aes_mul_gf2p2__2080__Vfuncout = __Vfunc_aes_mul_gf2p2__2080__f;
    __Vfunc_aes_mul_gf2p4__2078__b = __Vfunc_aes_mul_gf2p2__2080__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2081__d = (3U & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2078__delta));
    __Vfunc_aes_mul_gf2p2__2081__g = (3U & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2078__gamma));
    __Vfunc_aes_mul_gf2p2__2081__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2081__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2081__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2081__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2081__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2081__d)));
    __Vfunc_aes_mul_gf2p2__2081__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2081__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2081__d)));
    __Vfunc_aes_mul_gf2p2__2081__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2081__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2081__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2081__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2081__b)));
    __Vfunc_aes_mul_gf2p2__2081__Vfuncout = __Vfunc_aes_mul_gf2p2__2081__f;
    __Vfunc_aes_mul_gf2p4__2078__c = __Vfunc_aes_mul_gf2p2__2081__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2082__g = __Vfunc_aes_mul_gf2p4__2078__b;
    __Vfunc_aes_scale_omega2_gf2p2__2082__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2082__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2082__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2082__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2082__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2078__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2078__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__2078__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2082__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__2083__g = __Vfunc_aes_mul_gf2p4__2078__b;
    __Vfunc_aes_scale_omega2_gf2p2__2083__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2083__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2083__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2083__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2083__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2078__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2078__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__2078__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2083__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__2078__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__2078__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__2078__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    __Vfunc_aes_square_gf2p2__2028__g = (3U & ((((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                 ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)) 
                                               >> 2U));
    __Vfunc_aes_square_gf2p2__2028__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__2028__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__2028__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__2028__Vfuncout = __Vfunc_aes_square_gf2p2__2028__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__2028__Vfuncout;
    __Vfunc_aes_square_gf2p2__2029__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__2029__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__2029__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__2029__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__2029__Vfuncout = __Vfunc_aes_square_gf2p2__2029__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__2029__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i__115(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i__115\n"); );
    // Init
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2030__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2030__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2030__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2030__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2030__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2030__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2030__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2031__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2031__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2031__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2031__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2031__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2031__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2031__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2034__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2034__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2034__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2034__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2034__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2034__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2034__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2035__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2035__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2035__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2035__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2035__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2035__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2035__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2038__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2038__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2038__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2038__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2038__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2038__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2038__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2039__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2039__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2039__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2039__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2039__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2039__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2039__c;
    // Body
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
        = ((0xff00000U & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd[1U] 
                          >> 4U)) | ((0xf0000U & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd[2U] 
                                                  << 0x10U)) 
                                     | ((0xff00U & 
                                         (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd[2U] 
                                          << 4U)) | 
                                        (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd[2U] 
                                                  >> 0xcU)))));
    __Vfunc_aes_mul_gf2p2__2030__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0x10U));
    __Vfunc_aes_mul_gf2p2__2030__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__2030__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2030__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2030__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2030__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2030__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2030__d)));
    __Vfunc_aes_mul_gf2p2__2030__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2030__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2030__d)));
    __Vfunc_aes_mul_gf2p2__2030__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2030__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2030__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2030__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2030__b)));
    __Vfunc_aes_mul_gf2p2__2030__Vfuncout = __Vfunc_aes_mul_gf2p2__2030__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__2030__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2031__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0x10U));
    __Vfunc_aes_mul_gf2p2__2031__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2031__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2031__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2031__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2031__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2031__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2031__d)));
    __Vfunc_aes_mul_gf2p2__2031__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2031__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2031__d)));
    __Vfunc_aes_mul_gf2p2__2031__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2031__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2031__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2031__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2031__b)));
    __Vfunc_aes_mul_gf2p2__2031__Vfuncout = __Vfunc_aes_mul_gf2p2__2031__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__2031__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2034__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0xcU));
    __Vfunc_aes_mul_gf2p2__2034__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__2034__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2034__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2034__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2034__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2034__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2034__d)));
    __Vfunc_aes_mul_gf2p2__2034__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2034__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2034__d)));
    __Vfunc_aes_mul_gf2p2__2034__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2034__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2034__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2034__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2034__b)));
    __Vfunc_aes_mul_gf2p2__2034__Vfuncout = __Vfunc_aes_mul_gf2p2__2034__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__2034__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2035__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0xcU));
    __Vfunc_aes_mul_gf2p2__2035__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2035__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2035__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2035__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2035__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2035__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2035__d)));
    __Vfunc_aes_mul_gf2p2__2035__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2035__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2035__d)));
    __Vfunc_aes_mul_gf2p2__2035__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2035__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2035__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2035__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2035__b)));
    __Vfunc_aes_mul_gf2p2__2035__Vfuncout = __Vfunc_aes_mul_gf2p2__2035__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__2035__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2038__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__2038__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2038__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2038__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2038__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2038__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2038__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2038__d)));
    __Vfunc_aes_mul_gf2p2__2038__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2038__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2038__d)));
    __Vfunc_aes_mul_gf2p2__2038__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2038__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2038__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2038__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2038__b)));
    __Vfunc_aes_mul_gf2p2__2038__Vfuncout = __Vfunc_aes_mul_gf2p2__2038__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__2038__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2039__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__2039__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i));
    __Vfunc_aes_mul_gf2p2__2039__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2039__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2039__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2039__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2039__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2039__d)));
    __Vfunc_aes_mul_gf2p2__2039__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2039__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2039__d)));
    __Vfunc_aes_mul_gf2p2__2039__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2039__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2039__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2039__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2039__b)));
    __Vfunc_aes_mul_gf2p2__2039__Vfuncout = __Vfunc_aes_mul_gf2p2__2039__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__2039__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0));
}

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___combo__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i__119(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___combo__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i__119\n"); );
    // Init
    CData/*7:0*/ __Vfunc_aes_mvm__1980__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1980__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1980__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1981__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1981__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1982__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1982__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1983__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1983__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1983__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1984__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1984__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1985__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1985__vec_c;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1993__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1993__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1993__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1994__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1994__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1994__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1995__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1995__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1995__d;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1997__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1997__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1997__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1998__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1998__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1998__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1999__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1999__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1999__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2000__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2000__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2000__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2000__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2000__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2000__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2001__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2001__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2001__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2001__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2001__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2001__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2001__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2002__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2002__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2002__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2002__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2002__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2002__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2002__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2003__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2003__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2003__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2003__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2003__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2003__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2003__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2004__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2004__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2004__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2005__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2005__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2005__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2006__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2006__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2006__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2006__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2006__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2006__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2007__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2007__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2007__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2007__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2007__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2007__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2007__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2008__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2008__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2008__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2008__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2008__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2008__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2008__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2009__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2009__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2009__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2009__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2009__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2009__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2009__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2010__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2010__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2010__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2011__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2011__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2011__d;
    // Body
    vlSelf->out_req_o = ((3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_key_expand_en)) 
                         & (4U == (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we 
        = ((0xcU & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we)) 
           | ((((3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_key_expand_en)) 
                & (1U == (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q))) 
               << 1U) | ((3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_key_expand_en)) 
                         & (0U == (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)))));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we 
        = ((3U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we)) 
           | ((((3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_key_expand_en)) 
                & (3U == (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q))) 
               << 3U) | (((3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_key_expand_en)) 
                          & (2U == (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q))) 
                         << 2U)));
    vlSelf->__Vfunc_aes_mvm__1982__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1981__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1980__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1982__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1981__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__1980__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1982__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1981__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__1980__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1982__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1981__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__1980__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1982__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1981__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__1980__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1982__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1981__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1980__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1982__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1981__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__1980__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1982__mat_a[7U] = 0xffU;
    vlSelf->__Vfunc_aes_mvm__1981__mat_a[7U] = 0x53U;
    vlSelf->__Vfunc_aes_mvm__1980__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1982__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__sub_word_in 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1981__vec_b = (0xffU & (0x63U 
                                             ^ (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__sub_word_in 
                                                >> 0x10U)));
    __Vfunc_aes_mvm__1980__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__sub_word_in 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1982__vec_c = 0U;
    __Vfunc_aes_mvm__1981__vec_c = 0U;
    __Vfunc_aes_mvm__1980__vec_c = 0U;
    __Vfunc_aes_mvm__1982__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1982__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1981__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1980__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1982__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1981__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1980__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1982__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1981__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1980__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1982__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1981__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1980__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1982__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1981__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1980__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1982__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1981__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1980__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1982__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1982__vec_b)))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1981__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1981__vec_b)))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1980__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1980__vec_b)))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1982__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1982__vec_b)))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1981__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1981__vec_b)))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1980__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1980__vec_b)))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1982__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1982__vec_b)))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1981__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1981__vec_b)))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1980__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1980__vec_b)))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1982__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1982__vec_b)))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1981__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1981__vec_b)))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1980__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1980__vec_b)))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1982__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1982__vec_b)))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1981__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1981__vec_b)))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1980__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1980__vec_b)))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1982__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1982__vec_b)))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1981__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1981__vec_b)))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1980__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1980__vec_b)))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1982__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1982__vec_b)))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1981__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1981__vec_b)))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1980__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1980__vec_b)))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1982__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1982__vec_b)))));
    __Vfunc_aes_mvm__1981__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1981__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1981__vec_b)))));
    __Vfunc_aes_mvm__1980__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1980__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1980__vec_b)))));
    __Vfunc_aes_mvm__1982__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1982__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1982__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1982__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1982__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1981__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1981__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1981__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1981__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1980__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1980__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1980__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1980__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1980__Vfuncout = __Vfunc_aes_mvm__1980__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = __Vfunc_aes_mvm__1980__Vfuncout;
    vlSelf->__Vfunc_aes_mvm__1985__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1984__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1983__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1985__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1984__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__1983__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1985__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1984__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__1983__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1985__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1984__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__1983__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1985__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1984__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__1983__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1985__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1984__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1983__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1985__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1984__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__1983__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1985__mat_a[7U] = 0xffU;
    vlSelf->__Vfunc_aes_mvm__1984__mat_a[7U] = 0x53U;
    vlSelf->__Vfunc_aes_mvm__1983__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1985__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__sw_in_mask 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1984__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__sw_in_mask 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1983__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__sw_in_mask 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1985__vec_c = 0U;
    __Vfunc_aes_mvm__1984__vec_c = 0U;
    __Vfunc_aes_mvm__1983__vec_c = 0U;
    __Vfunc_aes_mvm__1985__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1985__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1984__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1983__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1985__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1984__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1983__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1985__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1984__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1983__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1985__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1984__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1983__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1985__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1984__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1983__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1985__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1984__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1983__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1985__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1985__vec_b)))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1984__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1984__vec_b)))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1983__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1983__vec_b)))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1985__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1985__vec_b)))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1984__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1984__vec_b)))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1983__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1983__vec_b)))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1985__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1985__vec_b)))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1984__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1984__vec_b)))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1983__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1983__vec_b)))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1985__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1985__vec_b)))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1984__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1984__vec_b)))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1983__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1983__vec_b)))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1985__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1985__vec_b)))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1984__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1984__vec_b)))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1983__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1983__vec_b)))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1985__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1985__vec_b)))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1984__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1984__vec_b)))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1983__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1983__vec_b)))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1985__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1985__vec_b)))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1984__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1984__vec_b)))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1983__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1983__vec_b)))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1985__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1985__vec_b)))));
    __Vfunc_aes_mvm__1984__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1984__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1984__vec_b)))));
    __Vfunc_aes_mvm__1983__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1983__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1983__vec_b)))));
    __Vfunc_aes_mvm__1985__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1985__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1985__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1985__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1985__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1984__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1984__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1984__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1984__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1983__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1983__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1983__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1983__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1983__Vfuncout = __Vfunc_aes_mvm__1983__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = __Vfunc_aes_mvm__1983__Vfuncout;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d 
        = (((IData)(vlSelf->out_req_o) & (3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_key_expand_out_ack)))
            ? 0U : (7U & ((IData)(vlSelf->out_req_o)
                           ? (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)
                           : ((3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_key_expand_en))
                               ? ((IData)(1U) + (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q))
                               : (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1992__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1992__gamma)));
    __Vfunc_aes_square_gf2p2__1993__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1992__gamma));
    __Vfunc_aes_square_gf2p2__1993__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1993__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1993__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1993__Vfuncout = __Vfunc_aes_square_gf2p2__1993__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__b = __Vfunc_aes_square_gf2p2__1993__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__1995__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__b;
    __Vfunc_aes_scale_omega_gf2p2__1995__d = ((2U & 
                                               (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__1995__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_aes_scale_omega_gf2p2__1995__g) 
                                                    >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__1995__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__1995__d;
    __Vfunc_aes_square_gf2p2__1994__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__a;
    __Vfunc_aes_square_gf2p2__1994__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1994__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1994__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1994__Vfuncout = __Vfunc_aes_square_gf2p2__1994__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__1994__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__1995__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1992__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2000__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                  >> 0x14U));
    __Vfunc_aes_mul_gf2p4__2000__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__2001__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2000__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2001__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2000__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2001__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2001__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2001__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2001__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2001__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2001__d)));
    __Vfunc_aes_mul_gf2p2__2001__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2001__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2001__d)));
    __Vfunc_aes_mul_gf2p2__2001__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2001__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2001__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2001__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2001__b)));
    __Vfunc_aes_mul_gf2p2__2001__Vfuncout = __Vfunc_aes_mul_gf2p2__2001__f;
    __Vfunc_aes_mul_gf2p4__2000__a = __Vfunc_aes_mul_gf2p2__2001__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2002__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2000__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2000__delta)));
    __Vfunc_aes_mul_gf2p2__2002__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2000__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2000__gamma)));
    __Vfunc_aes_mul_gf2p2__2002__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2002__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2002__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2002__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2002__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2002__d)));
    __Vfunc_aes_mul_gf2p2__2002__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2002__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2002__d)));
    __Vfunc_aes_mul_gf2p2__2002__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2002__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2002__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2002__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2002__b)));
    __Vfunc_aes_mul_gf2p2__2002__Vfuncout = __Vfunc_aes_mul_gf2p2__2002__f;
    __Vfunc_aes_mul_gf2p4__2000__b = __Vfunc_aes_mul_gf2p2__2002__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2003__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2000__delta));
    __Vfunc_aes_mul_gf2p2__2003__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2000__gamma));
    __Vfunc_aes_mul_gf2p2__2003__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2003__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2003__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2003__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2003__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2003__d)));
    __Vfunc_aes_mul_gf2p2__2003__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2003__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2003__d)));
    __Vfunc_aes_mul_gf2p2__2003__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2003__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2003__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2003__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2003__b)));
    __Vfunc_aes_mul_gf2p2__2003__Vfuncout = __Vfunc_aes_mul_gf2p2__2003__f;
    __Vfunc_aes_mul_gf2p4__2000__c = __Vfunc_aes_mul_gf2p2__2003__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2004__g = __Vfunc_aes_mul_gf2p4__2000__b;
    __Vfunc_aes_scale_omega2_gf2p2__2004__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2004__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2004__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2004__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2004__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2000__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2000__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__2000__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2004__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__2005__g = __Vfunc_aes_mul_gf2p4__2000__b;
    __Vfunc_aes_scale_omega2_gf2p2__2005__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2005__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2005__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2005__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2005__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2000__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2000__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__2000__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2005__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__2000__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__2000__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__2000__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1996__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1996__gamma)));
    __Vfunc_aes_square_gf2p2__1997__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1996__gamma));
    __Vfunc_aes_square_gf2p2__1997__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1997__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1997__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1997__Vfuncout = __Vfunc_aes_square_gf2p2__1997__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__b = __Vfunc_aes_square_gf2p2__1997__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__1999__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__b;
    __Vfunc_aes_scale_omega_gf2p2__1999__d = ((2U & 
                                               (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__1999__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_aes_scale_omega_gf2p2__1999__g) 
                                                    >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__1999__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__1999__d;
    __Vfunc_aes_square_gf2p2__1998__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__a;
    __Vfunc_aes_square_gf2p2__1998__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1998__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1998__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1998__Vfuncout = __Vfunc_aes_square_gf2p2__1998__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__1998__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__1999__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1996__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2006__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                  >> 0x14U));
    __Vfunc_aes_mul_gf2p4__2006__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__2007__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2006__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2007__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2006__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2007__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2007__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2007__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2007__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2007__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2007__d)));
    __Vfunc_aes_mul_gf2p2__2007__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2007__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2007__d)));
    __Vfunc_aes_mul_gf2p2__2007__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2007__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2007__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2007__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2007__b)));
    __Vfunc_aes_mul_gf2p2__2007__Vfuncout = __Vfunc_aes_mul_gf2p2__2007__f;
    __Vfunc_aes_mul_gf2p4__2006__a = __Vfunc_aes_mul_gf2p2__2007__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2008__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2006__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2006__delta)));
    __Vfunc_aes_mul_gf2p2__2008__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2006__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2006__gamma)));
    __Vfunc_aes_mul_gf2p2__2008__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2008__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2008__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2008__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2008__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2008__d)));
    __Vfunc_aes_mul_gf2p2__2008__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2008__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2008__d)));
    __Vfunc_aes_mul_gf2p2__2008__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2008__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2008__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2008__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2008__b)));
    __Vfunc_aes_mul_gf2p2__2008__Vfuncout = __Vfunc_aes_mul_gf2p2__2008__f;
    __Vfunc_aes_mul_gf2p4__2006__b = __Vfunc_aes_mul_gf2p2__2008__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2009__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2006__delta));
    __Vfunc_aes_mul_gf2p2__2009__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2006__gamma));
    __Vfunc_aes_mul_gf2p2__2009__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2009__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2009__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2009__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2009__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2009__d)));
    __Vfunc_aes_mul_gf2p2__2009__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2009__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2009__d)));
    __Vfunc_aes_mul_gf2p2__2009__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2009__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2009__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2009__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2009__b)));
    __Vfunc_aes_mul_gf2p2__2009__Vfuncout = __Vfunc_aes_mul_gf2p2__2009__f;
    __Vfunc_aes_mul_gf2p4__2006__c = __Vfunc_aes_mul_gf2p2__2009__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2010__g = __Vfunc_aes_mul_gf2p4__2006__b;
    __Vfunc_aes_scale_omega2_gf2p2__2010__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2010__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2010__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2010__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2010__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2006__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2006__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__2006__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2010__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__2011__g = __Vfunc_aes_mul_gf2p4__2006__b;
    __Vfunc_aes_scale_omega2_gf2p2__2011__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2011__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2011__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2011__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2011__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2006__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2006__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__2006__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2011__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__2006__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__2006__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__2006__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0) 
            << 4U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0));
}
