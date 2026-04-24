// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sha512_core.h for the primary calling header

#ifndef VERILATED_VTB_SHA512_CORE___024ROOT_H_
#define VERILATED_VTB_SHA512_CORE___024ROOT_H_  // guard

#include "verilated.h"

class Vtb_sha512_core__Syms;
VL_MODULE(Vtb_sha512_core___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_sha512_core__DOT__tb_clk;
        CData/*0:0*/ tb_sha512_core__DOT__tb_reset_n;
        CData/*0:0*/ tb_sha512_core__DOT__tb_init;
        CData/*0:0*/ tb_sha512_core__DOT__tb_next;
        CData/*1:0*/ tb_sha512_core__DOT__tb_mode;
        CData/*0:0*/ tb_sha512_core__DOT__tb_work_factor;
        CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__a_h_we;
        CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__H_we;
        CData/*6:0*/ tb_sha512_core__DOT__dut__DOT__round_ctr_reg;
        CData/*6:0*/ tb_sha512_core__DOT__dut__DOT__round_ctr_new;
        CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__round_ctr_we;
        CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__round_ctr_inc;
        CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__round_ctr_rst;
        CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__work_factor_ctr_we;
        CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__ready_reg;
        CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__ready_new;
        CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__ready_we;
        CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__digest_valid_reg;
        CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__digest_valid_new;
        CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__digest_valid_we;
        CData/*1:0*/ tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg;
        CData/*1:0*/ tb_sha512_core__DOT__dut__DOT__sha512_ctrl_new;
        CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__sha512_ctrl_we;
        CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__digest_init;
        CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__digest_update;
        CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__state_init;
        CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__state_update;
        CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__first_block;
        CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__w_init;
        CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_we;
        CData/*6:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg;
        CData/*6:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_new;
        CData/*0:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_we;
        CData/*0:0*/ __VinpClk__TOP__tb_sha512_core__DOT__tb_clk;
        CData/*0:0*/ __VinpClk__TOP__tb_sha512_core__DOT__tb_reset_n;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__tb_sha512_core__DOT__tb_clk;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__tb_sha512_core__DOT__tb_reset_n;
        CData/*0:0*/ __Vchglast__TOP__tb_sha512_core__DOT__tb_clk;
        CData/*0:0*/ __Vchglast__TOP__tb_sha512_core__DOT__tb_reset_n;
        IData/*31:0*/ tb_sha512_core__DOT__tb_work_factor_num;
        VlWide<32>/*1023:0*/ tb_sha512_core__DOT__tb_block;
        IData/*31:0*/ tb_sha512_core__DOT__dut__DOT__work_factor_ctr_reg;
        IData/*31:0*/ tb_sha512_core__DOT__dut__DOT__work_factor_ctr_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__a_reg;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__a_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__b_reg;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__b_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__c_reg;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__c_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__d_reg;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__d_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__e_reg;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__e_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__f_reg;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__f_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__g_reg;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__g_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__h_reg;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__h_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__H0_reg;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__H0_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__H1_reg;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__H1_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__H2_reg;
    };
    struct {
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__H2_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__H3_reg;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__H3_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__H4_reg;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__H4_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__H5_reg;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__H5_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__H6_reg;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__H6_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__H7_reg;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__H7_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__t1;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__t2;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__k_constants_inst__DOT__tmp_K;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H0;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H1;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H2;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H3;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H4;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H5;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H6;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H7;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem00_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem01_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem02_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem03_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem04_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem05_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem06_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem07_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem08_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem09_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem10_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem11_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem12_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem13_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem14_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem15_new;
        QData/*63:0*/ tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_new;
        VlUnpacked<QData/*63:0*/, 16> tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem;
    };

    // INTERNAL VARIABLES
    Vtb_sha512_core__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vtb_sha512_core___024root(const char* name);
    ~Vtb_sha512_core___024root();
    VL_UNCOPYABLE(Vtb_sha512_core___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vtb_sha512_core__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
