// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sha512.h for the primary calling header

#ifndef VERILATED_VTB_SHA512___024ROOT_H_
#define VERILATED_VTB_SHA512___024ROOT_H_  // guard

#include "verilated.h"

class Vtb_sha512__Syms;
VL_MODULE(Vtb_sha512___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_sha512__DOT__tb_clk;
        CData/*0:0*/ tb_sha512__DOT__tb_reset_n;
        CData/*0:0*/ tb_sha512__DOT__tb_cs;
        CData/*0:0*/ tb_sha512__DOT__tb_we;
        CData/*7:0*/ tb_sha512__DOT__tb_address;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__init_reg;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__init_new;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__next_reg;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__next_new;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__ready_reg;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__work_factor_reg;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__work_factor_new;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__work_factor_we;
        CData/*1:0*/ tb_sha512__DOT__dut__DOT__mode_reg;
        CData/*1:0*/ tb_sha512__DOT__dut__DOT__mode_new;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__mode_we;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__work_factor_num_we;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__block_we;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__digest_valid_reg;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__a_h_we;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__H_we;
        CData/*6:0*/ tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_reg;
        CData/*6:0*/ tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_new;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_we;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_we;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__ready_reg;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__ready_new;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__ready_we;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_reg;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_new;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_we;
        CData/*1:0*/ tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg;
        CData/*1:0*/ tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_new;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_we;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_we;
        CData/*6:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_reg;
        CData/*6:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_new;
        CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_we;
        CData/*0:0*/ __VinpClk__TOP__tb_sha512__DOT__tb_clk;
        CData/*0:0*/ __VinpClk__TOP__tb_sha512__DOT__tb_reset_n;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__tb_sha512__DOT__tb_clk;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__tb_sha512__DOT__tb_reset_n;
        CData/*0:0*/ __Vchglast__TOP__tb_sha512__DOT__tb_clk;
        CData/*0:0*/ __Vchglast__TOP__tb_sha512__DOT__tb_reset_n;
        IData/*31:0*/ tb_sha512__DOT__tb_write_data;
        VlWide<16>/*511:0*/ tb_sha512__DOT__digest_data;
        IData/*31:0*/ tb_sha512__DOT__dut__DOT__work_factor_num_reg;
        VlWide<16>/*511:0*/ tb_sha512__DOT__dut__DOT__digest_reg;
        IData/*31:0*/ tb_sha512__DOT__dut__DOT__tmp_read_data;
        IData/*31:0*/ tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_reg;
        IData/*31:0*/ tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__a_reg;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__a_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__b_reg;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__b_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__c_reg;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__c_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__d_reg;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__d_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__e_reg;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__e_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__f_reg;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__f_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__g_reg;
    };
    struct {
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__g_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__h_reg;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__h_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__H0_reg;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__H0_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__H1_reg;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__H1_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__H2_reg;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__H2_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__H3_reg;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__H3_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__H4_reg;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__H4_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__H5_reg;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__H5_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__H6_reg;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__H6_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__H7_reg;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__H7_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem00_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem01_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem02_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem03_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem04_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem05_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem06_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem07_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem08_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem09_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem10_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem11_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem12_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem13_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem14_new;
        QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem15_new;
        VlUnpacked<IData/*31:0*/, 32> tb_sha512__DOT__dut__DOT__block_reg;
        VlUnpacked<QData/*63:0*/, 16> tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem;
    };

    // INTERNAL VARIABLES
    Vtb_sha512__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vtb_sha512___024root(const char* name);
    ~Vtb_sha512___024root();
    VL_UNCOPYABLE(Vtb_sha512___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vtb_sha512__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
