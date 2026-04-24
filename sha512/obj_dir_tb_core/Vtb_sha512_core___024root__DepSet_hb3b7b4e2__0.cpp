// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sha512_core.h for the primary calling header

#include "verilated.h"

#include "Vtb_sha512_core___024root.h"

VL_INLINE_OPT void Vtb_sha512_core___024root___combo__TOP__1(Vtb_sha512_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sha512_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sha512_core___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->tb_sha512_core__DOT__tb_clk = (1U & (~ (IData)(vlSelf->tb_sha512_core__DOT__tb_clk)));
}

extern const VlUnpacked<QData/*63:0*/, 128> Vtb_sha512_core__ConstPool__TABLE_h2e411c54_0;

VL_INLINE_OPT void Vtb_sha512_core___024root___sequent__TOP__3(Vtb_sha512_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sha512_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sha512_core___024root___sequent__TOP__3\n"); );
    // Init
    CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__work_factor_ctr_rst;
    CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__work_factor_ctr_inc;
    CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__w_next;
    QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__t1_logic__DOT__sum1;
    QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__t1_logic__DOT__ch;
    QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__t2_logic__DOT__sum0;
    QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__t2_logic__DOT__maj;
    QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_0;
    QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_1;
    QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_9;
    QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_14;
    QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__d0;
    QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__d1;
    CData/*6:0*/ __Vtableidx1;
    QData/*63:0*/ __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v0;
    CData/*0:0*/ __Vdlyvset__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v0;
    QData/*63:0*/ __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v1;
    QData/*63:0*/ __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v2;
    QData/*63:0*/ __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v3;
    QData/*63:0*/ __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v4;
    QData/*63:0*/ __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v5;
    QData/*63:0*/ __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v6;
    QData/*63:0*/ __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v7;
    QData/*63:0*/ __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v8;
    QData/*63:0*/ __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v9;
    QData/*63:0*/ __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v10;
    QData/*63:0*/ __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v11;
    QData/*63:0*/ __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v12;
    QData/*63:0*/ __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v13;
    QData/*63:0*/ __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v14;
    QData/*63:0*/ __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v15;
    CData/*0:0*/ __Vdlyvset__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v16;
    // Body
    __Vdlyvset__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v0 = 0U;
    __Vdlyvset__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v16 = 0U;
    if (vlSelf->tb_sha512_core__DOT__tb_reset_n) {
        if (vlSelf->tb_sha512_core__DOT__dut__DOT__ready_we) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__ready_reg 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__ready_new;
        }
        if (vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_we) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_reg 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_new;
        }
        if (vlSelf->tb_sha512_core__DOT__dut__DOT__H_we) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__H3_new;
            vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__H2_new;
            vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__H5_new;
            vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__H6_new;
            vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__H7_new;
            vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__H1_new;
            vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__H4_new;
            vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__H0_new;
        }
        if (vlSelf->tb_sha512_core__DOT__dut__DOT__a_h_we) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__d_reg 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__d_new;
            vlSelf->tb_sha512_core__DOT__dut__DOT__b_reg 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__b_new;
            vlSelf->tb_sha512_core__DOT__dut__DOT__c_reg 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__c_new;
            vlSelf->tb_sha512_core__DOT__dut__DOT__a_reg 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__a_new;
            vlSelf->tb_sha512_core__DOT__dut__DOT__h_reg 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__h_new;
            vlSelf->tb_sha512_core__DOT__dut__DOT__g_reg 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__g_new;
            vlSelf->tb_sha512_core__DOT__dut__DOT__f_reg 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__f_new;
            vlSelf->tb_sha512_core__DOT__dut__DOT__e_reg 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__e_new;
        }
        if (vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_we) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_reg 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_new;
        }
        if (vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_we) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_new;
        }
        if (vlSelf->tb_sha512_core__DOT__dut__DOT__work_factor_ctr_we) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__work_factor_ctr_reg 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__work_factor_ctr_new;
        }
        if (vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_we) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_new;
        }
        if (vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_we) {
            __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v0 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem00_new;
            __Vdlyvset__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v0 = 1U;
            __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v1 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem01_new;
            __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v2 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem02_new;
            __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v3 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem03_new;
            __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v4 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem04_new;
            __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v5 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem05_new;
            __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v6 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem06_new;
            __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v7 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem07_new;
            __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v8 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem08_new;
            __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v9 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem09_new;
            __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v10 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem10_new;
            __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v11 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem11_new;
            __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v12 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem12_new;
            __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v13 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem13_new;
            __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v14 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem14_new;
            __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v15 
                = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem15_new;
        }
    } else {
        vlSelf->tb_sha512_core__DOT__dut__DOT__ready_reg = 1U;
        vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_reg = 0U;
        vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__d_reg = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__b_reg = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__c_reg = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__a_reg = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__h_reg = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__g_reg = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__f_reg = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__e_reg = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_reg = 0U;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg = 0U;
        vlSelf->tb_sha512_core__DOT__dut__DOT__work_factor_ctr_reg = 0U;
        vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg = 0U;
        __Vdlyvset__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v16 = 1U;
    }
    if (__Vdlyvset__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v0) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[0U] 
            = __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v0;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[1U] 
            = __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v1;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[2U] 
            = __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v2;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[3U] 
            = __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v3;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[4U] 
            = __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v4;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[5U] 
            = __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v5;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[6U] 
            = __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v6;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[7U] 
            = __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v7;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[8U] 
            = __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v8;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[9U] 
            = __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v9;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[0xaU] 
            = __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v10;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[0xbU] 
            = __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v11;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[0xcU] 
            = __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v12;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[0xdU] 
            = __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v13;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[0xeU] 
            = __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v14;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[0xfU] 
            = __Vdlyvval__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v15;
    }
    if (__Vdlyvset__tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem__v16) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[0U] = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[1U] = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[2U] = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[3U] = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[4U] = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[5U] = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[6U] = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[7U] = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[8U] = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[9U] = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[0xaU] = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[0xbU] = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[0xcU] = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[0xdU] = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[0xeU] = 0ULL;
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[0xfU] = 0ULL;
    }
    tb_sha512_core__DOT__dut__DOT__t2_logic__DOT__sum0 
        = (((((QData)((IData)((0xfffffffU & (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__a_reg)))) 
              << 0x24U) | (vlSelf->tb_sha512_core__DOT__dut__DOT__a_reg 
                           >> 0x1cU)) ^ ((vlSelf->tb_sha512_core__DOT__dut__DOT__a_reg 
                                          << 0x1eU) 
                                         | (QData)((IData)(
                                                           (0x3fffffffU 
                                                            & (IData)(
                                                                      (vlSelf->tb_sha512_core__DOT__dut__DOT__a_reg 
                                                                       >> 0x22U))))))) 
           ^ ((vlSelf->tb_sha512_core__DOT__dut__DOT__a_reg 
               << 0x19U) | (QData)((IData)((0x1ffffffU 
                                            & (IData)(
                                                      (vlSelf->tb_sha512_core__DOT__dut__DOT__a_reg 
                                                       >> 0x27U)))))));
    tb_sha512_core__DOT__dut__DOT__t2_logic__DOT__maj 
        = (((vlSelf->tb_sha512_core__DOT__dut__DOT__a_reg 
             & vlSelf->tb_sha512_core__DOT__dut__DOT__b_reg) 
            ^ (vlSelf->tb_sha512_core__DOT__dut__DOT__a_reg 
               & vlSelf->tb_sha512_core__DOT__dut__DOT__c_reg)) 
           ^ (vlSelf->tb_sha512_core__DOT__dut__DOT__b_reg 
              & vlSelf->tb_sha512_core__DOT__dut__DOT__c_reg));
    vlSelf->tb_sha512_core__DOT__dut__DOT__t2 = (tb_sha512_core__DOT__dut__DOT__t2_logic__DOT__sum0 
                                                 + tb_sha512_core__DOT__dut__DOT__t2_logic__DOT__maj);
    __Vtableidx1 = vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_reg;
    vlSelf->tb_sha512_core__DOT__dut__DOT__k_constants_inst__DOT__tmp_K 
        = Vtb_sha512_core__ConstPool__TABLE_h2e411c54_0
        [__Vtableidx1];
    vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_we = 0U;
    if ((0U == (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
        if (vlSelf->tb_sha512_core__DOT__tb_init) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_we = 1U;
        }
        if (vlSelf->tb_sha512_core__DOT__tb_next) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_we = 1U;
        }
        vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_we = 0U;
        if (vlSelf->tb_sha512_core__DOT__tb_init) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_we = 1U;
        }
        if (vlSelf->tb_sha512_core__DOT__tb_next) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_we = 1U;
        }
        vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_new = 0U;
        if (vlSelf->tb_sha512_core__DOT__tb_init) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_new = 0U;
        }
        if (vlSelf->tb_sha512_core__DOT__tb_next) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_new = 0U;
        }
        vlSelf->tb_sha512_core__DOT__dut__DOT__ready_new = 0U;
        if (vlSelf->tb_sha512_core__DOT__tb_init) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__ready_new = 0U;
        }
        if (vlSelf->tb_sha512_core__DOT__tb_next) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__ready_new = 0U;
        }
        vlSelf->tb_sha512_core__DOT__dut__DOT__ready_we = 0U;
        if (vlSelf->tb_sha512_core__DOT__tb_init) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__ready_we = 1U;
        }
        if (vlSelf->tb_sha512_core__DOT__tb_next) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__ready_we = 1U;
        }
        vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_new = 0U;
        if (vlSelf->tb_sha512_core__DOT__tb_init) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_new = 1U;
        }
        if (vlSelf->tb_sha512_core__DOT__tb_next) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_new = 1U;
        }
    } else {
        if ((1U == (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
            if ((0x4fU == (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_reg))) {
                vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_we = 1U;
            }
        } else if ((2U == (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_we = 1U;
        }
        vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_we = 0U;
        if ((1U != (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
            if ((2U == (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
                if (vlSelf->tb_sha512_core__DOT__tb_work_factor) {
                    if ((vlSelf->tb_sha512_core__DOT__dut__DOT__work_factor_ctr_reg 
                         >= vlSelf->tb_sha512_core__DOT__tb_work_factor_num)) {
                        vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_we = 1U;
                        vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_new = 0U;
                        vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_new = 1U;
                        vlSelf->tb_sha512_core__DOT__dut__DOT__ready_new = 0U;
                        vlSelf->tb_sha512_core__DOT__dut__DOT__ready_new = 1U;
                        vlSelf->tb_sha512_core__DOT__dut__DOT__ready_we = 0U;
                        vlSelf->tb_sha512_core__DOT__dut__DOT__ready_we = 1U;
                    } else {
                        vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_new = 0U;
                        vlSelf->tb_sha512_core__DOT__dut__DOT__ready_new = 0U;
                        vlSelf->tb_sha512_core__DOT__dut__DOT__ready_we = 0U;
                    }
                } else {
                    vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_we = 1U;
                    vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_new = 0U;
                    vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_new = 1U;
                    vlSelf->tb_sha512_core__DOT__dut__DOT__ready_new = 0U;
                    vlSelf->tb_sha512_core__DOT__dut__DOT__ready_new = 1U;
                    vlSelf->tb_sha512_core__DOT__dut__DOT__ready_we = 0U;
                    vlSelf->tb_sha512_core__DOT__dut__DOT__ready_we = 1U;
                }
            } else {
                vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_new = 0U;
                vlSelf->tb_sha512_core__DOT__dut__DOT__ready_new = 0U;
                vlSelf->tb_sha512_core__DOT__dut__DOT__ready_we = 0U;
            }
        } else {
            vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_new = 0U;
            vlSelf->tb_sha512_core__DOT__dut__DOT__ready_new = 0U;
            vlSelf->tb_sha512_core__DOT__dut__DOT__ready_we = 0U;
        }
        vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_new = 0U;
        if ((1U == (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
            if ((0x4fU == (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_reg))) {
                vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_new = 2U;
            }
        } else if ((2U == (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_new 
                = ((IData)(vlSelf->tb_sha512_core__DOT__tb_work_factor)
                    ? ((vlSelf->tb_sha512_core__DOT__dut__DOT__work_factor_ctr_reg 
                        < vlSelf->tb_sha512_core__DOT__tb_work_factor_num)
                        ? 1U : 0U) : 0U);
        }
    }
    tb_sha512_core__DOT__dut__DOT__work_factor_ctr_inc = 0U;
    if ((0U != (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
        if ((1U == (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
            if ((0x4fU == (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_reg))) {
                tb_sha512_core__DOT__dut__DOT__work_factor_ctr_inc = 1U;
            }
        }
    }
    tb_sha512_core__DOT__dut__DOT__work_factor_ctr_rst = 0U;
    if ((0U == (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
        if (vlSelf->tb_sha512_core__DOT__tb_init) {
            tb_sha512_core__DOT__dut__DOT__work_factor_ctr_rst = 1U;
        }
        if (vlSelf->tb_sha512_core__DOT__tb_next) {
            tb_sha512_core__DOT__dut__DOT__work_factor_ctr_rst = 1U;
        }
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_inc = 0U;
    if ((0U != (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
        if ((1U == (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_inc = 1U;
        }
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_rst = 0U;
    if ((0U == (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
        if (vlSelf->tb_sha512_core__DOT__tb_init) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_rst = 1U;
        }
        if (vlSelf->tb_sha512_core__DOT__tb_next) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_rst = 1U;
        }
        vlSelf->tb_sha512_core__DOT__dut__DOT__digest_init = 0U;
        if (vlSelf->tb_sha512_core__DOT__tb_init) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__digest_init = 1U;
        }
    } else {
        if ((1U != (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
            if ((2U == (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
                if (vlSelf->tb_sha512_core__DOT__tb_work_factor) {
                    if ((vlSelf->tb_sha512_core__DOT__dut__DOT__work_factor_ctr_reg 
                         < vlSelf->tb_sha512_core__DOT__tb_work_factor_num)) {
                        vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_rst = 1U;
                    }
                }
            }
        }
        vlSelf->tb_sha512_core__DOT__dut__DOT__digest_init = 0U;
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__digest_update = 0U;
    if ((0U != (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
        if ((1U != (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
            if ((2U == (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
                if (vlSelf->tb_sha512_core__DOT__tb_work_factor) {
                    if ((vlSelf->tb_sha512_core__DOT__dut__DOT__work_factor_ctr_reg 
                         >= vlSelf->tb_sha512_core__DOT__tb_work_factor_num)) {
                        vlSelf->tb_sha512_core__DOT__dut__DOT__digest_update = 1U;
                    }
                } else {
                    vlSelf->tb_sha512_core__DOT__dut__DOT__digest_update = 1U;
                }
            }
        }
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__first_block = 0U;
    if ((0U == (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
        if (vlSelf->tb_sha512_core__DOT__tb_init) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__first_block = 1U;
        }
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__state_update = 0U;
    if ((0U != (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
        if ((1U == (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__state_update = 1U;
        }
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__state_init = 0U;
    if ((0U == (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
        if (vlSelf->tb_sha512_core__DOT__tb_init) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__state_init = 1U;
        }
        if (vlSelf->tb_sha512_core__DOT__tb_next) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__state_init = 1U;
        }
    } else if ((1U != (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
        if ((2U == (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
            if (vlSelf->tb_sha512_core__DOT__tb_work_factor) {
                if ((vlSelf->tb_sha512_core__DOT__dut__DOT__work_factor_ctr_reg 
                     < vlSelf->tb_sha512_core__DOT__tb_work_factor_num)) {
                    vlSelf->tb_sha512_core__DOT__dut__DOT__state_init = 1U;
                }
            }
        }
    }
    tb_sha512_core__DOT__dut__DOT__w_next = 0U;
    if ((0U != (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
        if ((1U == (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
            tb_sha512_core__DOT__dut__DOT__w_next = 1U;
        }
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_init = 0U;
    if ((0U == (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
        if (vlSelf->tb_sha512_core__DOT__tb_init) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__w_init = 1U;
        }
        if (vlSelf->tb_sha512_core__DOT__tb_next) {
            vlSelf->tb_sha512_core__DOT__dut__DOT__w_init = 1U;
        }
    } else if ((1U != (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
        if ((2U == (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg))) {
            if (vlSelf->tb_sha512_core__DOT__tb_work_factor) {
                if ((vlSelf->tb_sha512_core__DOT__dut__DOT__work_factor_ctr_reg 
                     < vlSelf->tb_sha512_core__DOT__tb_work_factor_num)) {
                    vlSelf->tb_sha512_core__DOT__dut__DOT__w_init = 1U;
                }
            }
        }
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__work_factor_ctr_we = 0U;
    if (tb_sha512_core__DOT__dut__DOT__work_factor_ctr_rst) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__work_factor_ctr_we = 1U;
    }
    if (tb_sha512_core__DOT__dut__DOT__work_factor_ctr_inc) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__work_factor_ctr_we = 1U;
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__work_factor_ctr_new = 0U;
    if (tb_sha512_core__DOT__dut__DOT__work_factor_ctr_rst) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__work_factor_ctr_new = 0U;
    }
    if (tb_sha512_core__DOT__dut__DOT__work_factor_ctr_inc) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__work_factor_ctr_new 
            = ((IData)(1U) + vlSelf->tb_sha512_core__DOT__dut__DOT__work_factor_ctr_reg);
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_we = 0U;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_rst) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_we = 1U;
    }
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_inc) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_we = 1U;
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_new = 0U;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_rst) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_new = 0U;
    }
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_inc) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_new 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_reg)));
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__H_we = 0U;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__digest_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__H_we = 1U;
    }
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__digest_update) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__H_we = 1U;
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__H0_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__digest_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__H0_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H0;
    }
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__digest_update) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__H0_new 
            = (vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
               + vlSelf->tb_sha512_core__DOT__dut__DOT__a_reg);
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__H1_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__digest_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__H1_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H1;
    }
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__digest_update) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__H1_new 
            = (vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
               + vlSelf->tb_sha512_core__DOT__dut__DOT__b_reg);
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__H2_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__digest_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__H2_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H2;
    }
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__digest_update) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__H2_new 
            = (vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
               + vlSelf->tb_sha512_core__DOT__dut__DOT__c_reg);
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__H3_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__digest_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__H3_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H3;
    }
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__digest_update) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__H3_new 
            = (vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
               + vlSelf->tb_sha512_core__DOT__dut__DOT__d_reg);
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__H4_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__digest_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__H4_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H4;
    }
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__digest_update) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__H4_new 
            = (vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
               + vlSelf->tb_sha512_core__DOT__dut__DOT__e_reg);
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__H5_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__digest_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__H5_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H5;
    }
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__digest_update) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__H5_new 
            = (vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
               + vlSelf->tb_sha512_core__DOT__dut__DOT__f_reg);
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__H6_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__digest_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__H6_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H6;
    }
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__digest_update) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__H6_new 
            = (vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
               + vlSelf->tb_sha512_core__DOT__dut__DOT__g_reg);
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__H7_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__digest_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__H7_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H7;
    }
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__digest_update) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__H7_new 
            = (vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
               + vlSelf->tb_sha512_core__DOT__dut__DOT__h_reg);
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__a_h_we = 0U;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__state_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__a_h_we = 1U;
    }
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__state_update) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__a_h_we = 1U;
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__b_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__state_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__b_new 
            = ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__first_block)
                ? vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H1
                : vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg);
    }
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__state_update) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__b_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__a_reg;
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__c_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__state_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__c_new 
            = ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__first_block)
                ? vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H2
                : vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg);
    }
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__state_update) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__c_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__b_reg;
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__d_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__state_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__d_new 
            = ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__first_block)
                ? vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H3
                : vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg);
    }
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__state_update) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__d_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__c_reg;
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__f_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__state_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__f_new 
            = ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__first_block)
                ? vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H5
                : vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg);
    }
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__state_update) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__f_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__e_reg;
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__g_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__state_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__g_new 
            = ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__first_block)
                ? vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H6
                : vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg);
    }
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__state_update) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__g_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__f_reg;
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__h_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__state_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__h_new 
            = ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__first_block)
                ? vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H7
                : vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg);
    }
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__state_update) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__h_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__g_reg;
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_we = 0U;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__w_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_we = 1U;
    }
    if (tb_sha512_core__DOT__dut__DOT__w_next) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_we = 1U;
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_we = 0U;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__w_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_we = 1U;
    }
    if (((IData)(tb_sha512_core__DOT__dut__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_we = 1U;
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_new = 0U;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__w_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_new = 0U;
    }
    if (tb_sha512_core__DOT__dut__DOT__w_next) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_new 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg)));
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem12_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__w_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem12_new 
            = (((QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[6U])));
    }
    if (((IData)(tb_sha512_core__DOT__dut__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem12_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem
            [0xdU];
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem11_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__w_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem11_new 
            = (((QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[9U])) 
                << 0x20U) | (QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[8U])));
    }
    if (((IData)(tb_sha512_core__DOT__dut__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem11_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem
            [0xcU];
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem10_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__w_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem10_new 
            = (((QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0xbU])) 
                << 0x20U) | (QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0xaU])));
    }
    if (((IData)(tb_sha512_core__DOT__dut__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem10_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem
            [0xbU];
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem09_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__w_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem09_new 
            = (((QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0xdU])) 
                << 0x20U) | (QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0xcU])));
    }
    if (((IData)(tb_sha512_core__DOT__dut__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem09_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem
            [0xaU];
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem08_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__w_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem08_new 
            = (((QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0xfU])) 
                << 0x20U) | (QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0xeU])));
    }
    if (((IData)(tb_sha512_core__DOT__dut__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem08_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem
            [9U];
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem07_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__w_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem07_new 
            = (((QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0x11U])) 
                << 0x20U) | (QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0x10U])));
    }
    if (((IData)(tb_sha512_core__DOT__dut__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem07_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem
            [8U];
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem06_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__w_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem06_new 
            = (((QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0x13U])) 
                << 0x20U) | (QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0x12U])));
    }
    if (((IData)(tb_sha512_core__DOT__dut__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem06_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem
            [7U];
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem05_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__w_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem05_new 
            = (((QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0x15U])) 
                << 0x20U) | (QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0x14U])));
    }
    if (((IData)(tb_sha512_core__DOT__dut__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem05_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem
            [6U];
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem04_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__w_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem04_new 
            = (((QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0x17U])) 
                << 0x20U) | (QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0x16U])));
    }
    if (((IData)(tb_sha512_core__DOT__dut__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem04_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem
            [5U];
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem03_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__w_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem03_new 
            = (((QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0x19U])) 
                << 0x20U) | (QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0x18U])));
    }
    if (((IData)(tb_sha512_core__DOT__dut__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem03_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem
            [4U];
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem02_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__w_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem02_new 
            = (((QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0x1bU])) 
                << 0x20U) | (QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0x1aU])));
    }
    if (((IData)(tb_sha512_core__DOT__dut__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem02_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem
            [3U];
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem01_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__w_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem01_new 
            = (((QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0x1dU])) 
                << 0x20U) | (QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0x1cU])));
    }
    if (((IData)(tb_sha512_core__DOT__dut__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem01_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem
            [2U];
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem00_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__w_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem00_new 
            = (((QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0x1fU])) 
                << 0x20U) | (QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0x1eU])));
    }
    if (((IData)(tb_sha512_core__DOT__dut__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem00_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem
            [1U];
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem13_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__w_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem13_new 
            = (((QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[4U])));
    }
    if (((IData)(tb_sha512_core__DOT__dut__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem13_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem
            [0xeU];
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem14_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__w_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem14_new 
            = (((QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[2U])));
    }
    if (((IData)(tb_sha512_core__DOT__dut__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem14_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem
            [0xfU];
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem15_new = 0ULL;
    tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_0 
        = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem
        [0U];
    tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_1 
        = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem
        [1U];
    tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_9 
        = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem
        [9U];
    tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_14 
        = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem
        [0xeU];
    tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__d0 
        = (((((QData)((IData)((1U & (IData)(tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_1)))) 
              << 0x3fU) | (tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_1 
                           >> 1U)) ^ (((QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_1)))) 
                                       << 0x38U) | 
                                      (tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_1 
                                       >> 8U))) ^ (tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_1 
                                                   >> 7U));
    tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__d1 
        = (((((QData)((IData)((0x7ffffU & (IData)(tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_14)))) 
              << 0x2dU) | (tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_14 
                           >> 0x13U)) ^ ((tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_14 
                                          << 3U) | (QData)((IData)(
                                                                   (7U 
                                                                    & (IData)(
                                                                              (tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_14 
                                                                               >> 0x3dU))))))) 
           ^ (tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_14 
              >> 6U));
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_new 
        = (((tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_0 
             + tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__d0) 
            + tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_9) 
           + tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__d1);
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__w_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem15_new 
            = (((QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->tb_sha512_core__DOT__tb_block[0U])));
    }
    if (((IData)(tb_sha512_core__DOT__dut__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem15_new 
            = vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_new;
    }
    tb_sha512_core__DOT__dut__DOT__t1_logic__DOT__sum1 
        = (((((QData)((IData)((0x3fffU & (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__e_reg)))) 
              << 0x32U) | (vlSelf->tb_sha512_core__DOT__dut__DOT__e_reg 
                           >> 0xeU)) ^ (((QData)((IData)(
                                                         (0x3ffffU 
                                                          & (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__e_reg)))) 
                                         << 0x2eU) 
                                        | (vlSelf->tb_sha512_core__DOT__dut__DOT__e_reg 
                                           >> 0x12U))) 
           ^ ((vlSelf->tb_sha512_core__DOT__dut__DOT__e_reg 
               << 0x17U) | (QData)((IData)((0x7fffffU 
                                            & (IData)(
                                                      (vlSelf->tb_sha512_core__DOT__dut__DOT__e_reg 
                                                       >> 0x29U)))))));
    tb_sha512_core__DOT__dut__DOT__t1_logic__DOT__ch 
        = ((vlSelf->tb_sha512_core__DOT__dut__DOT__e_reg 
            & vlSelf->tb_sha512_core__DOT__dut__DOT__f_reg) 
           ^ ((~ vlSelf->tb_sha512_core__DOT__dut__DOT__e_reg) 
              & vlSelf->tb_sha512_core__DOT__dut__DOT__g_reg));
    vlSelf->tb_sha512_core__DOT__dut__DOT__t1 = (((
                                                   (vlSelf->tb_sha512_core__DOT__dut__DOT__h_reg 
                                                    + tb_sha512_core__DOT__dut__DOT__t1_logic__DOT__sum1) 
                                                   + tb_sha512_core__DOT__dut__DOT__t1_logic__DOT__ch) 
                                                  + vlSelf->tb_sha512_core__DOT__dut__DOT__k_constants_inst__DOT__tmp_K) 
                                                 + 
                                                 ((0x10U 
                                                   > (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg))
                                                   ? 
                                                  vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem
                                                  [
                                                  (0xfU 
                                                   & (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg))]
                                                   : vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_new));
    vlSelf->tb_sha512_core__DOT__dut__DOT__a_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__state_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__a_new 
            = ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__first_block)
                ? vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H0
                : vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg);
    }
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__state_update) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__a_new 
            = (vlSelf->tb_sha512_core__DOT__dut__DOT__t1 
               + vlSelf->tb_sha512_core__DOT__dut__DOT__t2);
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__e_new = 0ULL;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__state_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__e_new 
            = ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__first_block)
                ? vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H4
                : vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg);
    }
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__state_update) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__e_new 
            = (vlSelf->tb_sha512_core__DOT__dut__DOT__d_reg 
               + vlSelf->tb_sha512_core__DOT__dut__DOT__t1);
    }
}

void Vtb_sha512_core___024root___eval(Vtb_sha512_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sha512_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sha512_core___024root___eval\n"); );
    // Body
    Vtb_sha512_core___024root___combo__TOP__1(vlSelf);
    if ((((IData)(vlSelf->__VinpClk__TOP__tb_sha512_core__DOT__tb_clk) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__tb_sha512_core__DOT__tb_clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__tb_sha512_core__DOT__tb_reset_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__tb_sha512_core__DOT__tb_reset_n)))) {
        Vtb_sha512_core___024root___sequent__TOP__3(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP____VinpClk__TOP__tb_sha512_core__DOT__tb_clk 
        = vlSelf->__VinpClk__TOP__tb_sha512_core__DOT__tb_clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__tb_sha512_core__DOT__tb_reset_n 
        = vlSelf->__VinpClk__TOP__tb_sha512_core__DOT__tb_reset_n;
    vlSelf->__VinpClk__TOP__tb_sha512_core__DOT__tb_clk 
        = vlSelf->tb_sha512_core__DOT__tb_clk;
    vlSelf->__VinpClk__TOP__tb_sha512_core__DOT__tb_reset_n 
        = vlSelf->tb_sha512_core__DOT__tb_reset_n;
}

QData Vtb_sha512_core___024root___change_request_1(Vtb_sha512_core___024root* vlSelf);

VL_INLINE_OPT QData Vtb_sha512_core___024root___change_request(Vtb_sha512_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sha512_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sha512_core___024root___change_request\n"); );
    // Body
    return (Vtb_sha512_core___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtb_sha512_core___024root___change_request_1(Vtb_sha512_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sha512_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sha512_core___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->tb_sha512_core__DOT__tb_clk ^ vlSelf->__Vchglast__TOP__tb_sha512_core__DOT__tb_clk)
         | (vlSelf->tb_sha512_core__DOT__tb_reset_n ^ vlSelf->__Vchglast__TOP__tb_sha512_core__DOT__tb_reset_n));
    VL_DEBUG_IF( if(__req && ((vlSelf->tb_sha512_core__DOT__tb_clk ^ vlSelf->__Vchglast__TOP__tb_sha512_core__DOT__tb_clk))) VL_DBG_MSGF("        CHANGE: src/tb/tb_sha512_core.v:64: tb_sha512_core.tb_clk\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->tb_sha512_core__DOT__tb_reset_n ^ vlSelf->__Vchglast__TOP__tb_sha512_core__DOT__tb_reset_n))) VL_DBG_MSGF("        CHANGE: src/tb/tb_sha512_core.v:65: tb_sha512_core.tb_reset_n\n"); );
    // Final
    vlSelf->__Vchglast__TOP__tb_sha512_core__DOT__tb_clk 
        = vlSelf->tb_sha512_core__DOT__tb_clk;
    vlSelf->__Vchglast__TOP__tb_sha512_core__DOT__tb_reset_n 
        = vlSelf->tb_sha512_core__DOT__tb_reset_n;
    return __req;
}

#ifdef VL_DEBUG
void Vtb_sha512_core___024root___eval_debug_assertions(Vtb_sha512_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sha512_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sha512_core___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
