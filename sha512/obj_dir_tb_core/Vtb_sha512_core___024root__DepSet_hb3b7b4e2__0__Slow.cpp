// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sha512_core.h for the primary calling header

#include "verilated.h"

#include "Vtb_sha512_core___024root.h"

extern const VlUnpacked<QData/*63:0*/, 4> Vtb_sha512_core__ConstPool__TABLE_ha7fe4fed_0;
extern const VlUnpacked<QData/*63:0*/, 4> Vtb_sha512_core__ConstPool__TABLE_hbdc486c2_0;
extern const VlUnpacked<QData/*63:0*/, 4> Vtb_sha512_core__ConstPool__TABLE_hb9dc2dd5_0;
extern const VlUnpacked<QData/*63:0*/, 4> Vtb_sha512_core__ConstPool__TABLE_he4c2f1ed_0;
extern const VlUnpacked<QData/*63:0*/, 4> Vtb_sha512_core__ConstPool__TABLE_h6018ba5a_0;
extern const VlUnpacked<QData/*63:0*/, 4> Vtb_sha512_core__ConstPool__TABLE_hc158f037_0;
extern const VlUnpacked<QData/*63:0*/, 4> Vtb_sha512_core__ConstPool__TABLE_h519155ac_0;
extern const VlUnpacked<QData/*63:0*/, 4> Vtb_sha512_core__ConstPool__TABLE_h2f92bb12_0;
extern const VlUnpacked<QData/*63:0*/, 128> Vtb_sha512_core__ConstPool__TABLE_h2e411c54_0;

VL_ATTR_COLD void Vtb_sha512_core___024root___settle__TOP__2(Vtb_sha512_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sha512_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sha512_core___024root___settle__TOP__2\n"); );
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
    CData/*1:0*/ __Vtableidx2;
    // Body
    vlSelf->tb_sha512_core__DOT__tb_clk = (1U & (~ (IData)(vlSelf->tb_sha512_core__DOT__tb_clk)));
    __Vtableidx2 = vlSelf->tb_sha512_core__DOT__tb_mode;
    vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H0 
        = Vtb_sha512_core__ConstPool__TABLE_ha7fe4fed_0
        [__Vtableidx2];
    vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H1 
        = Vtb_sha512_core__ConstPool__TABLE_hbdc486c2_0
        [__Vtableidx2];
    vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H2 
        = Vtb_sha512_core__ConstPool__TABLE_hb9dc2dd5_0
        [__Vtableidx2];
    vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H3 
        = Vtb_sha512_core__ConstPool__TABLE_he4c2f1ed_0
        [__Vtableidx2];
    vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H4 
        = Vtb_sha512_core__ConstPool__TABLE_h6018ba5a_0
        [__Vtableidx2];
    vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H5 
        = Vtb_sha512_core__ConstPool__TABLE_hc158f037_0
        [__Vtableidx2];
    vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H6 
        = Vtb_sha512_core__ConstPool__TABLE_h519155ac_0
        [__Vtableidx2];
    vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H7 
        = Vtb_sha512_core__ConstPool__TABLE_h2f92bb12_0
        [__Vtableidx2];
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
    vlSelf->tb_sha512_core__DOT__dut__DOT__a_h_we = 0U;
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__state_init) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__a_h_we = 1U;
    }
    if (vlSelf->tb_sha512_core__DOT__dut__DOT__state_update) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__a_h_we = 1U;
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
}

VL_ATTR_COLD void Vtb_sha512_core___024root___settle__TOP__4(Vtb_sha512_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sha512_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sha512_core___024root___settle__TOP__4\n"); );
    // Body
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

extern const VlWide<16>/*511:0*/ Vtb_sha512_core__ConstPool__CONST_h7f43c14c_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512_core__ConstPool__CONST_h04c7e96b_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512_core__ConstPool__CONST_hc527def4_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512_core__ConstPool__CONST_h4f7c38dc_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512_core__ConstPool__CONST_h74741065_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512_core__ConstPool__CONST_hbedbd283_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512_core__ConstPool__CONST_h066943bf_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512_core__ConstPool__CONST_hae569943_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512_core__ConstPool__CONST_h6100fab5_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512_core__ConstPool__CONST_h2fd963c6_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512_core__ConstPool__CONST_h85b866ec_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512_core__ConstPool__CONST_hb18fb88b_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512_core__ConstPool__CONST_ha7c7af92_0;

VL_ATTR_COLD void Vtb_sha512_core___024root___initial__TOP__5(Vtb_sha512_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sha512_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sha512_core___024root___initial__TOP__5\n"); );
    // Init
    IData/*31:0*/ tb_sha512_core__DOT__error_ctr;
    IData/*31:0*/ tb_sha512_core__DOT__tc_ctr;
    CData/*7:0*/ __Vtask_tb_sha512_core__DOT__single_block_test__4__tc_number;
    CData/*1:0*/ __Vtask_tb_sha512_core__DOT__single_block_test__4__mode;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512_core__DOT__single_block_test__4__expected;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512_core__DOT__single_block_test__4__mask;
    CData/*7:0*/ __Vtask_tb_sha512_core__DOT__single_block_test__6__tc_number;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512_core__DOT__single_block_test__6__expected;
    CData/*7:0*/ __Vtask_tb_sha512_core__DOT__single_block_test__8__tc_number;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512_core__DOT__single_block_test__8__expected;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512_core__DOT__single_block_test__8__mask;
    CData/*7:0*/ __Vtask_tb_sha512_core__DOT__single_block_test__10__tc_number;
    CData/*1:0*/ __Vtask_tb_sha512_core__DOT__single_block_test__10__mode;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512_core__DOT__single_block_test__10__expected;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512_core__DOT__single_block_test__10__mask;
    CData/*7:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__12__tc_number;
    CData/*1:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__12__mode;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__12__expected1;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__12__expected2;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__12__mask;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1;
    CData/*0:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__12__db_error;
    CData/*7:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__15__tc_number;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__15__expected1;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__15__expected2;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1;
    CData/*0:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__15__db_error;
    CData/*7:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__18__tc_number;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__18__expected1;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__18__expected2;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__18__mask;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1;
    CData/*0:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__18__db_error;
    CData/*7:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__21__tc_number;
    CData/*1:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__21__mode;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__21__expected1;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__21__expected2;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__21__mask;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1;
    CData/*0:0*/ __Vtask_tb_sha512_core__DOT__double_block_test__21__db_error;
    VlWide<16>/*511:0*/ __Vtemp_h35bd089a__0;
    VlWide<16>/*511:0*/ __Vtemp_hd4c41090__0;
    VlWide<16>/*511:0*/ __Vtemp_h60345c3d__0;
    VlWide<16>/*511:0*/ __Vtemp_h8639f3b5__0;
    VlWide<16>/*511:0*/ __Vtemp_h0fe215cb__0;
    VlWide<16>/*511:0*/ __Vtemp_h1efa6a5b__0;
    VlWide<16>/*511:0*/ __Vtemp_hee715a7c__0;
    VlWide<16>/*511:0*/ __Vtemp_h04783a55__0;
    VlWide<16>/*511:0*/ __Vtemp_hcb0cfb6d__0;
    VlWide<16>/*511:0*/ __Vtemp_h12e018c2__0;
    // Body
    VL_WRITEF("   -- Testbench for sha512 core started --\n");
    tb_sha512_core__DOT__error_ctr = 0U;
    vlSelf->tb_sha512_core__DOT__tb_clk = 0U;
    vlSelf->tb_sha512_core__DOT__tb_work_factor = 0U;
    vlSelf->tb_sha512_core__DOT__tb_work_factor_num = 0U;
    VL_WRITEF("State of DUT\n------------\nInputs and outputs:\ninit   = 0x0, next  = 0x0. mode = 0x0\nblock  = 0x0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000\nready  = 0x%01x, valid = 0x%01x\n",
              1,vlSelf->tb_sha512_core__DOT__dut__DOT__ready_reg,
              1,(IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_reg));
    __Vtemp_h35bd089a__0[0U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg);
    __Vtemp_h35bd089a__0[1U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                                        >> 0x20U));
    __Vtemp_h35bd089a__0[2U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg);
    __Vtemp_h35bd089a__0[3U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                                        >> 0x20U));
    __Vtemp_h35bd089a__0[4U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg);
    __Vtemp_h35bd089a__0[5U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                                        >> 0x20U));
    __Vtemp_h35bd089a__0[6U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg);
    __Vtemp_h35bd089a__0[7U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                                        >> 0x20U));
    __Vtemp_h35bd089a__0[8U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg);
    __Vtemp_h35bd089a__0[9U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                                        >> 0x20U));
    __Vtemp_h35bd089a__0[0xaU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg);
    __Vtemp_h35bd089a__0[0xbU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                                          >> 0x20U));
    __Vtemp_h35bd089a__0[0xcU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg);
    __Vtemp_h35bd089a__0[0xdU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                                          >> 0x20U));
    __Vtemp_h35bd089a__0[0xeU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg);
    __Vtemp_h35bd089a__0[0xfU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                                          >> 0x20U));
    VL_WRITEF("digest = 0x%064x\nH0_reg = 0x%08x, H1_reg = 0x%08x, H2_reg = 0x%08x, H3_reg = 0x%08x\nH4_reg = 0x%08x, H5_reg = 0x%08x, H6_reg = 0x%08x, H7_reg = 0x%08x\n\nControl signals and counter:\nsha512_ctrl_reg = 0x%02x\ndigest_init     = 0x%01x, digest_update = 0x%01x\nstate_init      = 0x%01x, state_update  = 0x%01x\nfirst_block     = 0x%01x, ready_reg    = 0x%01x, w_init    = 0x%01x\nround_ctr_inc       = 0x%01x, round_ctr_rst     = 0x%01x, round_ctr_reg = 0x%02x\n\nState registers:\n",
              512,__Vtemp_h35bd089a__0.data(),64,vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg,
              2,(IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg),
              1,vlSelf->tb_sha512_core__DOT__dut__DOT__digest_init,
              1,(IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__digest_update),
              1,vlSelf->tb_sha512_core__DOT__dut__DOT__state_init,
              1,(IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__state_update),
              1,vlSelf->tb_sha512_core__DOT__dut__DOT__first_block,
              1,(IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__ready_reg),
              1,vlSelf->tb_sha512_core__DOT__dut__DOT__w_init,
              1,(IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_inc),
              1,vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_rst,
              7,(IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_reg));
    VL_WRITEF("a_reg = 0x%08x, b_reg = 0x%08x, c_reg = 0x%08x, d_reg = 0x%08x\ne_reg = 0x%08x, f_reg = 0x%08x, g_reg = 0x%08x, h_reg = 0x%08x\n\na_new = 0x%08x, b_new = 0x%08x, c_new = 0x%08x, d_new = 0x%08x\ne_new = 0x%08x, f_new = 0x%08x, g_new = 0x%08x, h_new = 0x%08x\n\nState update values:\nw  = 0x%08x, k  = 0x%08x\nt1 = 0x%08x, t2 = 0x%08x\n\n",
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__a_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__b_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__c_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__d_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__e_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__f_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__g_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__h_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__a_new,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__b_new,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__c_new,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__d_new,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__e_new,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__f_new,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__g_new,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__h_new,
              64,((0x10U > (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg))
                   ? vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem
                  [(0xfU & (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg))]
                   : vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_new),
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__k_constants_inst__DOT__tmp_K,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__t1,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__t2);
    VL_WRITEF("*** Toggle reset.\n");
    vlSelf->tb_sha512_core__DOT__tb_reset_n = 1U;
    VL_WRITEF("State of DUT\n------------\nInputs and outputs:\ninit   = 0x0, next  = 0x0. mode = 0x0\nblock  = 0x0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000\nready  = 0x%01x, valid = 0x%01x\n",
              1,vlSelf->tb_sha512_core__DOT__dut__DOT__ready_reg,
              1,(IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_reg));
    __Vtemp_hd4c41090__0[0U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg);
    __Vtemp_hd4c41090__0[1U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                                        >> 0x20U));
    __Vtemp_hd4c41090__0[2U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg);
    __Vtemp_hd4c41090__0[3U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                                        >> 0x20U));
    __Vtemp_hd4c41090__0[4U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg);
    __Vtemp_hd4c41090__0[5U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                                        >> 0x20U));
    __Vtemp_hd4c41090__0[6U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg);
    __Vtemp_hd4c41090__0[7U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                                        >> 0x20U));
    __Vtemp_hd4c41090__0[8U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg);
    __Vtemp_hd4c41090__0[9U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                                        >> 0x20U));
    __Vtemp_hd4c41090__0[0xaU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg);
    __Vtemp_hd4c41090__0[0xbU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                                          >> 0x20U));
    __Vtemp_hd4c41090__0[0xcU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg);
    __Vtemp_hd4c41090__0[0xdU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                                          >> 0x20U));
    __Vtemp_hd4c41090__0[0xeU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg);
    __Vtemp_hd4c41090__0[0xfU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                                          >> 0x20U));
    VL_WRITEF("digest = 0x%064x\nH0_reg = 0x%08x, H1_reg = 0x%08x, H2_reg = 0x%08x, H3_reg = 0x%08x\nH4_reg = 0x%08x, H5_reg = 0x%08x, H6_reg = 0x%08x, H7_reg = 0x%08x\n\nControl signals and counter:\nsha512_ctrl_reg = 0x%02x\ndigest_init     = 0x%01x, digest_update = 0x%01x\nstate_init      = 0x%01x, state_update  = 0x%01x\nfirst_block     = 0x%01x, ready_reg    = 0x%01x, w_init    = 0x%01x\nround_ctr_inc       = 0x%01x, round_ctr_rst     = 0x%01x, round_ctr_reg = 0x%02x\n\nState registers:\n",
              512,__Vtemp_hd4c41090__0.data(),64,vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg,
              2,(IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg),
              1,vlSelf->tb_sha512_core__DOT__dut__DOT__digest_init,
              1,(IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__digest_update),
              1,vlSelf->tb_sha512_core__DOT__dut__DOT__state_init,
              1,(IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__state_update),
              1,vlSelf->tb_sha512_core__DOT__dut__DOT__first_block,
              1,(IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__ready_reg),
              1,vlSelf->tb_sha512_core__DOT__dut__DOT__w_init,
              1,(IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_inc),
              1,vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_rst,
              7,(IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_reg));
    VL_WRITEF("a_reg = 0x%08x, b_reg = 0x%08x, c_reg = 0x%08x, d_reg = 0x%08x\ne_reg = 0x%08x, f_reg = 0x%08x, g_reg = 0x%08x, h_reg = 0x%08x\n\na_new = 0x%08x, b_new = 0x%08x, c_new = 0x%08x, d_new = 0x%08x\ne_new = 0x%08x, f_new = 0x%08x, g_new = 0x%08x, h_new = 0x%08x\n\nState update values:\nw  = 0x%08x, k  = 0x%08x\nt1 = 0x%08x, t2 = 0x%08x\n\n",
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__a_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__b_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__c_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__d_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__e_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__f_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__g_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__h_reg,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__a_new,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__b_new,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__c_new,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__d_new,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__e_new,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__f_new,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__g_new,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__h_new,
              64,((0x10U > (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg))
                   ? vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem
                  [(0xfU & (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg))]
                   : vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_new),
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__k_constants_inst__DOT__tmp_K,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__t1,
              64,vlSelf->tb_sha512_core__DOT__dut__DOT__t2);
    __Vtask_tb_sha512_core__DOT__single_block_test__4__expected[0U] = 0xa54ca49fU;
    __Vtask_tb_sha512_core__DOT__single_block_test__4__expected[1U] = 0x2a9ac94fU;
    __Vtask_tb_sha512_core__DOT__single_block_test__4__expected[2U] = 0x643ce80eU;
    __Vtask_tb_sha512_core__DOT__single_block_test__4__expected[3U] = 0x454d4423U;
    __Vtask_tb_sha512_core__DOT__single_block_test__4__expected[4U] = 0xa3feebbdU;
    __Vtask_tb_sha512_core__DOT__single_block_test__4__expected[5U] = 0x36ba3c23U;
    __Vtask_tb_sha512_core__DOT__single_block_test__4__expected[6U] = 0x274fc1a8U;
    __Vtask_tb_sha512_core__DOT__single_block_test__4__expected[7U] = 0x2192992aU;
    __Vtask_tb_sha512_core__DOT__single_block_test__4__expected[8U] = 0x4b55d39aU;
    __Vtask_tb_sha512_core__DOT__single_block_test__4__expected[9U] = 0xa9eeee6U;
    __Vtask_tb_sha512_core__DOT__single_block_test__4__expected[0xaU] = 0x89a97ea2U;
    __Vtask_tb_sha512_core__DOT__single_block_test__4__expected[0xbU] = 0x12e6fa4eU;
    __Vtask_tb_sha512_core__DOT__single_block_test__4__expected[0xcU] = 0xae204131U;
    __Vtask_tb_sha512_core__DOT__single_block_test__4__expected[0xdU] = 0xcc417349U;
    __Vtask_tb_sha512_core__DOT__single_block_test__4__expected[0xeU] = 0x93617abaU;
    __Vtask_tb_sha512_core__DOT__single_block_test__4__expected[0xfU] = 0xddaf35a1U;
    __Vtask_tb_sha512_core__DOT__single_block_test__4__mode = 3U;
    __Vtask_tb_sha512_core__DOT__single_block_test__4__tc_number = 1U;
    VL_WRITEF("*** TC 1 single block test case started.\n");
    while ((1U & (~ (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__ready_reg)))) {
    }
    if ((2U == (IData)(__Vtask_tb_sha512_core__DOT__single_block_test__4__mode))) {
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[0U] = 0U;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[1U] = 0U;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[2U] = 0U;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[3U] = 0U;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[4U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[5U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[6U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[7U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[8U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[9U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[0xaU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[0xbU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[0xcU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[0xdU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[0xeU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[0xfU] = 0xffffffffU;
    } else if ((3U == (IData)(__Vtask_tb_sha512_core__DOT__single_block_test__4__mode))) {
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[0U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[1U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[2U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[3U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[4U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[5U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[6U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[7U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[8U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[9U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[0xaU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[0xbU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[0xcU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[0xdU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[0xeU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[0xfU] = 0xffffffffU;
    }
    if (VL_LIKELY((0U == ((((((((((((((((Vtb_sha512_core__ConstPool__CONST_h7f43c14c_0[0U] 
                                         ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg) 
                                            & __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[0U])) 
                                        | (Vtb_sha512_core__ConstPool__CONST_h7f43c14c_0[1U] 
                                           ^ ((IData)(
                                                      (vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                                                       >> 0x20U)) 
                                              & __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[1U]))) 
                                       | (Vtb_sha512_core__ConstPool__CONST_h7f43c14c_0[2U] 
                                          ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg) 
                                             & __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[2U]))) 
                                      | (Vtb_sha512_core__ConstPool__CONST_h7f43c14c_0[3U] 
                                         ^ ((IData)(
                                                    (vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                                                     >> 0x20U)) 
                                            & __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[3U]))) 
                                     | (Vtb_sha512_core__ConstPool__CONST_h7f43c14c_0[4U] 
                                        ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg) 
                                           & __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[4U]))) 
                                    | (Vtb_sha512_core__ConstPool__CONST_h7f43c14c_0[5U] 
                                       ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                                                   >> 0x20U)) 
                                          & __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[5U]))) 
                                   | (Vtb_sha512_core__ConstPool__CONST_h7f43c14c_0[6U] 
                                      ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg) 
                                         & __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[6U]))) 
                                  | (Vtb_sha512_core__ConstPool__CONST_h7f43c14c_0[7U] 
                                     ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                                                 >> 0x20U)) 
                                        & __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[7U]))) 
                                 | (Vtb_sha512_core__ConstPool__CONST_h7f43c14c_0[8U] 
                                    ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg) 
                                       & __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[8U]))) 
                                | (Vtb_sha512_core__ConstPool__CONST_h7f43c14c_0[9U] 
                                   ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                                               >> 0x20U)) 
                                      & __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[9U]))) 
                               | (Vtb_sha512_core__ConstPool__CONST_h7f43c14c_0[0xaU] 
                                  ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg) 
                                     & __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[0xaU]))) 
                              | (Vtb_sha512_core__ConstPool__CONST_h7f43c14c_0[0xbU] 
                                 ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                                             >> 0x20U)) 
                                    & __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[0xbU]))) 
                             | (Vtb_sha512_core__ConstPool__CONST_h7f43c14c_0[0xcU] 
                                ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg) 
                                   & __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[0xcU]))) 
                            | (Vtb_sha512_core__ConstPool__CONST_h7f43c14c_0[0xdU] 
                               ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                                           >> 0x20U)) 
                                  & __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[0xdU]))) 
                           | (Vtb_sha512_core__ConstPool__CONST_h7f43c14c_0[0xeU] 
                              ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg) 
                                 & __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[0xeU]))) 
                          | (Vtb_sha512_core__ConstPool__CONST_h7f43c14c_0[0xfU] 
                             ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                                         >> 0x20U)) 
                                & __Vtask_tb_sha512_core__DOT__single_block_test__4__mask[0xfU])))))) {
        VL_WRITEF("*** TC %0# successful.\n\n",8,__Vtask_tb_sha512_core__DOT__single_block_test__4__tc_number);
    } else {
        VL_WRITEF("*** ERROR: TC %0# NOT successful.\n",
                  8,__Vtask_tb_sha512_core__DOT__single_block_test__4__tc_number);
        tb_sha512_core__DOT__error_ctr = ((IData)(1U) 
                                          + tb_sha512_core__DOT__error_ctr);
        VL_WRITEF("Expected: 0x%064x\n",512,__Vtask_tb_sha512_core__DOT__single_block_test__4__expected.data());
        __Vtemp_h60345c3d__0[0U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg);
        __Vtemp_h60345c3d__0[1U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                                            >> 0x20U));
        __Vtemp_h60345c3d__0[2U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg);
        __Vtemp_h60345c3d__0[3U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                                            >> 0x20U));
        __Vtemp_h60345c3d__0[4U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg);
        __Vtemp_h60345c3d__0[5U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                                            >> 0x20U));
        __Vtemp_h60345c3d__0[6U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg);
        __Vtemp_h60345c3d__0[7U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                                            >> 0x20U));
        __Vtemp_h60345c3d__0[8U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg);
        __Vtemp_h60345c3d__0[9U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                                            >> 0x20U));
        __Vtemp_h60345c3d__0[0xaU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg);
        __Vtemp_h60345c3d__0[0xbU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                                              >> 0x20U));
        __Vtemp_h60345c3d__0[0xcU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg);
        __Vtemp_h60345c3d__0[0xdU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                                              >> 0x20U));
        __Vtemp_h60345c3d__0[0xeU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg);
        __Vtemp_h60345c3d__0[0xfU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                                              >> 0x20U));
        VL_WRITEF("Got:      0x%064x\n\n",512,__Vtemp_h60345c3d__0.data());
    }
    __Vtask_tb_sha512_core__DOT__single_block_test__6__expected[0U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__6__expected[1U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__6__expected[2U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__6__expected[3U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__6__expected[4U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__6__expected[5U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__6__expected[6U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__6__expected[7U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__6__expected[8U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__6__expected[9U] = 0x3e8924aaU;
    __Vtask_tb_sha512_core__DOT__single_block_test__6__expected[0xaU] = 0x5ceee9a4U;
    __Vtask_tb_sha512_core__DOT__single_block_test__6__expected[0xbU] = 0xe37ed26U;
    __Vtask_tb_sha512_core__DOT__single_block_test__6__expected[0xcU] = 0x460842e2U;
    __Vtask_tb_sha512_core__DOT__single_block_test__6__expected[0xdU] = 0xdaae7530U;
    __Vtask_tb_sha512_core__DOT__single_block_test__6__expected[0xeU] = 0x707b6a54U;
    __Vtask_tb_sha512_core__DOT__single_block_test__6__expected[0xfU] = 0x4634270fU;
    __Vtask_tb_sha512_core__DOT__single_block_test__6__tc_number = 2U;
    VL_WRITEF("*** TC 2 single block test case started.\n");
    while ((1U & (~ (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__ready_reg)))) {
    }
    if (VL_LIKELY((0U == ((((((((((((((((Vtb_sha512_core__ConstPool__CONST_h04c7e96b_0[0U] 
                                         ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[0U] 
                                            & (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg))) 
                                        | (Vtb_sha512_core__ConstPool__CONST_h04c7e96b_0[1U] 
                                           ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[1U] 
                                              & (IData)(
                                                        (vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                                                         >> 0x20U))))) 
                                       | (Vtb_sha512_core__ConstPool__CONST_h04c7e96b_0[2U] 
                                          ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[2U] 
                                             & (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg)))) 
                                      | (Vtb_sha512_core__ConstPool__CONST_h04c7e96b_0[3U] 
                                         ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[3U] 
                                            & (IData)(
                                                      (vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                                                       >> 0x20U))))) 
                                     | (Vtb_sha512_core__ConstPool__CONST_h04c7e96b_0[4U] 
                                        ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[4U] 
                                           & (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg)))) 
                                    | (Vtb_sha512_core__ConstPool__CONST_h04c7e96b_0[5U] 
                                       ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[5U] 
                                          & (IData)(
                                                    (vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                                                     >> 0x20U))))) 
                                   | (Vtb_sha512_core__ConstPool__CONST_h04c7e96b_0[6U] 
                                      ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[6U] 
                                         & (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg)))) 
                                  | (Vtb_sha512_core__ConstPool__CONST_h04c7e96b_0[7U] 
                                     ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[7U] 
                                        & (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                                                   >> 0x20U))))) 
                                 | (Vtb_sha512_core__ConstPool__CONST_h04c7e96b_0[8U] 
                                    ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[8U] 
                                       & (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg)))) 
                                | (Vtb_sha512_core__ConstPool__CONST_h04c7e96b_0[9U] 
                                   ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[9U] 
                                      & (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                                                 >> 0x20U))))) 
                               | (Vtb_sha512_core__ConstPool__CONST_h04c7e96b_0[0xaU] 
                                  ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[0xaU] 
                                     & (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg)))) 
                              | (Vtb_sha512_core__ConstPool__CONST_h04c7e96b_0[0xbU] 
                                 ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[0xbU] 
                                    & (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                                               >> 0x20U))))) 
                             | (Vtb_sha512_core__ConstPool__CONST_h04c7e96b_0[0xcU] 
                                ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[0xcU] 
                                   & (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg)))) 
                            | (Vtb_sha512_core__ConstPool__CONST_h04c7e96b_0[0xdU] 
                               ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[0xdU] 
                                  & (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                                             >> 0x20U))))) 
                           | (Vtb_sha512_core__ConstPool__CONST_h04c7e96b_0[0xeU] 
                              ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[0xeU] 
                                 & (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg)))) 
                          | (Vtb_sha512_core__ConstPool__CONST_h04c7e96b_0[0xfU] 
                             ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[0xfU] 
                                & (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                                           >> 0x20U)))))))) {
        VL_WRITEF("*** TC %0# successful.\n\n",8,__Vtask_tb_sha512_core__DOT__single_block_test__6__tc_number);
    } else {
        tb_sha512_core__DOT__error_ctr = ((IData)(1U) 
                                          + tb_sha512_core__DOT__error_ctr);
        VL_WRITEF("*** ERROR: TC %0# NOT successful.\nExpected: 0x%064x\n",
                  8,__Vtask_tb_sha512_core__DOT__single_block_test__6__tc_number,
                  512,__Vtask_tb_sha512_core__DOT__single_block_test__6__expected.data());
        __Vtemp_h8639f3b5__0[0U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg);
        __Vtemp_h8639f3b5__0[1U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                                            >> 0x20U));
        __Vtemp_h8639f3b5__0[2U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg);
        __Vtemp_h8639f3b5__0[3U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                                            >> 0x20U));
        __Vtemp_h8639f3b5__0[4U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg);
        __Vtemp_h8639f3b5__0[5U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                                            >> 0x20U));
        __Vtemp_h8639f3b5__0[6U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg);
        __Vtemp_h8639f3b5__0[7U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                                            >> 0x20U));
        __Vtemp_h8639f3b5__0[8U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg);
        __Vtemp_h8639f3b5__0[9U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                                            >> 0x20U));
        __Vtemp_h8639f3b5__0[0xaU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg);
        __Vtemp_h8639f3b5__0[0xbU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                                              >> 0x20U));
        __Vtemp_h8639f3b5__0[0xcU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg);
        __Vtemp_h8639f3b5__0[0xdU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                                              >> 0x20U));
        __Vtemp_h8639f3b5__0[0xeU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg);
        __Vtemp_h8639f3b5__0[0xfU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                                              >> 0x20U));
        VL_WRITEF("Got:      0x%064x\n\n",512,__Vtemp_h8639f3b5__0.data());
    }
    __Vtask_tb_sha512_core__DOT__single_block_test__8__expected[0U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__expected[1U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__expected[2U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__expected[3U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__expected[4U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__expected[5U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__expected[6U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__expected[7U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__expected[8U] = 0x7e7af23U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__expected[9U] = 0xe0e2f131U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__expected[0xaU] = 0x34fc6d46U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__expected[0xbU] = 0xe4c2d0c6U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__expected[0xcU] = 0x6b4c7dabU;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__expected[0xdU] = 0x9b2e29b7U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__expected[0xeU] = 0x81941ef9U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__expected[0xfU] = 0x53048e26U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__tc_number = 3U;
    VL_WRITEF("*** TC 3 single block test case started.\n");
    while ((1U & (~ (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__ready_reg)))) {
    }
    __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[0U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[1U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[2U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[3U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[4U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[5U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[6U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[7U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[8U] = 0xffffffffU;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[9U] = 0xffffffffU;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[0xaU] = 0xffffffffU;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[0xbU] = 0xffffffffU;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[0xcU] = 0xffffffffU;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[0xdU] = 0xffffffffU;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[0xeU] = 0xffffffffU;
    __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[0xfU] = 0xffffffffU;
    if (VL_LIKELY((0U == ((((((((((((((((Vtb_sha512_core__ConstPool__CONST_h4f7c38dc_0[0U] 
                                         ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg) 
                                            & __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[0U])) 
                                        | (Vtb_sha512_core__ConstPool__CONST_h4f7c38dc_0[1U] 
                                           ^ ((IData)(
                                                      (vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                                                       >> 0x20U)) 
                                              & __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[1U]))) 
                                       | (Vtb_sha512_core__ConstPool__CONST_h4f7c38dc_0[2U] 
                                          ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg) 
                                             & __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[2U]))) 
                                      | (Vtb_sha512_core__ConstPool__CONST_h4f7c38dc_0[3U] 
                                         ^ ((IData)(
                                                    (vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                                                     >> 0x20U)) 
                                            & __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[3U]))) 
                                     | (Vtb_sha512_core__ConstPool__CONST_h4f7c38dc_0[4U] 
                                        ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg) 
                                           & __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[4U]))) 
                                    | (Vtb_sha512_core__ConstPool__CONST_h4f7c38dc_0[5U] 
                                       ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                                                   >> 0x20U)) 
                                          & __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[5U]))) 
                                   | (Vtb_sha512_core__ConstPool__CONST_h4f7c38dc_0[6U] 
                                      ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg) 
                                         & __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[6U]))) 
                                  | (Vtb_sha512_core__ConstPool__CONST_h4f7c38dc_0[7U] 
                                     ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                                                 >> 0x20U)) 
                                        & __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[7U]))) 
                                 | (Vtb_sha512_core__ConstPool__CONST_h4f7c38dc_0[8U] 
                                    ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg) 
                                       & __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[8U]))) 
                                | (Vtb_sha512_core__ConstPool__CONST_h4f7c38dc_0[9U] 
                                   ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                                               >> 0x20U)) 
                                      & __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[9U]))) 
                               | (Vtb_sha512_core__ConstPool__CONST_h4f7c38dc_0[0xaU] 
                                  ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg) 
                                     & __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[0xaU]))) 
                              | (Vtb_sha512_core__ConstPool__CONST_h4f7c38dc_0[0xbU] 
                                 ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                                             >> 0x20U)) 
                                    & __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[0xbU]))) 
                             | (Vtb_sha512_core__ConstPool__CONST_h4f7c38dc_0[0xcU] 
                                ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg) 
                                   & __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[0xcU]))) 
                            | (Vtb_sha512_core__ConstPool__CONST_h4f7c38dc_0[0xdU] 
                               ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                                           >> 0x20U)) 
                                  & __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[0xdU]))) 
                           | (Vtb_sha512_core__ConstPool__CONST_h4f7c38dc_0[0xeU] 
                              ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg) 
                                 & __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[0xeU]))) 
                          | (Vtb_sha512_core__ConstPool__CONST_h4f7c38dc_0[0xfU] 
                             ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                                         >> 0x20U)) 
                                & __Vtask_tb_sha512_core__DOT__single_block_test__8__mask[0xfU])))))) {
        VL_WRITEF("*** TC %0# successful.\n\n",8,__Vtask_tb_sha512_core__DOT__single_block_test__8__tc_number);
    } else {
        tb_sha512_core__DOT__error_ctr = ((IData)(1U) 
                                          + tb_sha512_core__DOT__error_ctr);
        VL_WRITEF("*** ERROR: TC %0# NOT successful.\nExpected: 0x%064x\n",
                  8,__Vtask_tb_sha512_core__DOT__single_block_test__8__tc_number,
                  512,__Vtask_tb_sha512_core__DOT__single_block_test__8__expected.data());
        __Vtemp_h0fe215cb__0[0U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg);
        __Vtemp_h0fe215cb__0[1U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                                            >> 0x20U));
        __Vtemp_h0fe215cb__0[2U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg);
        __Vtemp_h0fe215cb__0[3U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                                            >> 0x20U));
        __Vtemp_h0fe215cb__0[4U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg);
        __Vtemp_h0fe215cb__0[5U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                                            >> 0x20U));
        __Vtemp_h0fe215cb__0[6U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg);
        __Vtemp_h0fe215cb__0[7U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                                            >> 0x20U));
        __Vtemp_h0fe215cb__0[8U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg);
        __Vtemp_h0fe215cb__0[9U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                                            >> 0x20U));
        __Vtemp_h0fe215cb__0[0xaU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg);
        __Vtemp_h0fe215cb__0[0xbU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                                              >> 0x20U));
        __Vtemp_h0fe215cb__0[0xcU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg);
        __Vtemp_h0fe215cb__0[0xdU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                                              >> 0x20U));
        __Vtemp_h0fe215cb__0[0xeU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg);
        __Vtemp_h0fe215cb__0[0xfU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                                              >> 0x20U));
        VL_WRITEF("Got:      0x%064x\n\n",512,__Vtemp_h0fe215cb__0.data());
    }
    __Vtask_tb_sha512_core__DOT__single_block_test__10__expected[0U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__10__expected[1U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__10__expected[2U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__10__expected[3U] = 0U;
    __Vtask_tb_sha512_core__DOT__single_block_test__10__expected[4U] = 0x34c825a7U;
    __Vtask_tb_sha512_core__DOT__single_block_test__10__expected[5U] = 0x58baeca1U;
    __Vtask_tb_sha512_core__DOT__single_block_test__10__expected[6U] = 0xa1e7cc23U;
    __Vtask_tb_sha512_core__DOT__single_block_test__10__expected[7U] = 0x8086072bU;
    __Vtask_tb_sha512_core__DOT__single_block_test__10__expected[8U] = 0x43ff5bedU;
    __Vtask_tb_sha512_core__DOT__single_block_test__10__expected[9U] = 0x1a8b605aU;
    __Vtask_tb_sha512_core__DOT__single_block_test__10__expected[0xaU] = 0xeded163U;
    __Vtask_tb_sha512_core__DOT__single_block_test__10__expected[0xbU] = 0x272c32abU;
    __Vtask_tb_sha512_core__DOT__single_block_test__10__expected[0xcU] = 0x9ac65007U;
    __Vtask_tb_sha512_core__DOT__single_block_test__10__expected[0xdU] = 0xb5a03d69U;
    __Vtask_tb_sha512_core__DOT__single_block_test__10__expected[0xeU] = 0x45a35e8bU;
    __Vtask_tb_sha512_core__DOT__single_block_test__10__expected[0xfU] = 0xcb00753fU;
    __Vtask_tb_sha512_core__DOT__single_block_test__10__mode = 2U;
    __Vtask_tb_sha512_core__DOT__single_block_test__10__tc_number = 4U;
    VL_WRITEF("*** TC 4 single block test case started.\n");
    while ((1U & (~ (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__ready_reg)))) {
    }
    if ((2U == (IData)(__Vtask_tb_sha512_core__DOT__single_block_test__10__mode))) {
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[0U] = 0U;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[1U] = 0U;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[2U] = 0U;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[3U] = 0U;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[4U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[5U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[6U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[7U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[8U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[9U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[0xaU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[0xbU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[0xcU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[0xdU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[0xeU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[0xfU] = 0xffffffffU;
    } else if ((3U == (IData)(__Vtask_tb_sha512_core__DOT__single_block_test__10__mode))) {
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[0U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[1U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[2U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[3U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[4U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[5U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[6U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[7U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[8U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[9U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[0xaU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[0xbU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[0xcU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[0xdU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[0xeU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[0xfU] = 0xffffffffU;
    }
    if (VL_LIKELY((0U == ((((((((((((((((Vtb_sha512_core__ConstPool__CONST_h74741065_0[0U] 
                                         ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg) 
                                            & __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[0U])) 
                                        | (Vtb_sha512_core__ConstPool__CONST_h74741065_0[1U] 
                                           ^ ((IData)(
                                                      (vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                                                       >> 0x20U)) 
                                              & __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[1U]))) 
                                       | (Vtb_sha512_core__ConstPool__CONST_h74741065_0[2U] 
                                          ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg) 
                                             & __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[2U]))) 
                                      | (Vtb_sha512_core__ConstPool__CONST_h74741065_0[3U] 
                                         ^ ((IData)(
                                                    (vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                                                     >> 0x20U)) 
                                            & __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[3U]))) 
                                     | (Vtb_sha512_core__ConstPool__CONST_h74741065_0[4U] 
                                        ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg) 
                                           & __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[4U]))) 
                                    | (Vtb_sha512_core__ConstPool__CONST_h74741065_0[5U] 
                                       ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                                                   >> 0x20U)) 
                                          & __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[5U]))) 
                                   | (Vtb_sha512_core__ConstPool__CONST_h74741065_0[6U] 
                                      ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg) 
                                         & __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[6U]))) 
                                  | (Vtb_sha512_core__ConstPool__CONST_h74741065_0[7U] 
                                     ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                                                 >> 0x20U)) 
                                        & __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[7U]))) 
                                 | (Vtb_sha512_core__ConstPool__CONST_h74741065_0[8U] 
                                    ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg) 
                                       & __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[8U]))) 
                                | (Vtb_sha512_core__ConstPool__CONST_h74741065_0[9U] 
                                   ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                                               >> 0x20U)) 
                                      & __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[9U]))) 
                               | (Vtb_sha512_core__ConstPool__CONST_h74741065_0[0xaU] 
                                  ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg) 
                                     & __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[0xaU]))) 
                              | (Vtb_sha512_core__ConstPool__CONST_h74741065_0[0xbU] 
                                 ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                                             >> 0x20U)) 
                                    & __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[0xbU]))) 
                             | (Vtb_sha512_core__ConstPool__CONST_h74741065_0[0xcU] 
                                ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg) 
                                   & __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[0xcU]))) 
                            | (Vtb_sha512_core__ConstPool__CONST_h74741065_0[0xdU] 
                               ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                                           >> 0x20U)) 
                                  & __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[0xdU]))) 
                           | (Vtb_sha512_core__ConstPool__CONST_h74741065_0[0xeU] 
                              ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg) 
                                 & __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[0xeU]))) 
                          | (Vtb_sha512_core__ConstPool__CONST_h74741065_0[0xfU] 
                             ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                                         >> 0x20U)) 
                                & __Vtask_tb_sha512_core__DOT__single_block_test__10__mask[0xfU])))))) {
        VL_WRITEF("*** TC %0# successful.\n\n",8,__Vtask_tb_sha512_core__DOT__single_block_test__10__tc_number);
    } else {
        tb_sha512_core__DOT__error_ctr = ((IData)(1U) 
                                          + tb_sha512_core__DOT__error_ctr);
        VL_WRITEF("*** ERROR: TC %0# NOT successful.\nExpected: 0x%064x\n",
                  8,__Vtask_tb_sha512_core__DOT__single_block_test__10__tc_number,
                  512,__Vtask_tb_sha512_core__DOT__single_block_test__10__expected.data());
        __Vtemp_h1efa6a5b__0[0U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg);
        __Vtemp_h1efa6a5b__0[1U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                                            >> 0x20U));
        __Vtemp_h1efa6a5b__0[2U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg);
        __Vtemp_h1efa6a5b__0[3U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                                            >> 0x20U));
        __Vtemp_h1efa6a5b__0[4U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg);
        __Vtemp_h1efa6a5b__0[5U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                                            >> 0x20U));
        __Vtemp_h1efa6a5b__0[6U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg);
        __Vtemp_h1efa6a5b__0[7U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                                            >> 0x20U));
        __Vtemp_h1efa6a5b__0[8U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg);
        __Vtemp_h1efa6a5b__0[9U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                                            >> 0x20U));
        __Vtemp_h1efa6a5b__0[0xaU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg);
        __Vtemp_h1efa6a5b__0[0xbU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                                              >> 0x20U));
        __Vtemp_h1efa6a5b__0[0xcU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg);
        __Vtemp_h1efa6a5b__0[0xdU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                                              >> 0x20U));
        __Vtemp_h1efa6a5b__0[0xeU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg);
        __Vtemp_h1efa6a5b__0[0xfU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                                              >> 0x20U));
        VL_WRITEF("Got:      0x%064x\n\n",512,__Vtemp_h1efa6a5b__0.data());
    }
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected2[0U] = 0x874be909U;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected2[1U] = 0x5e96e55bU;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected2[2U] = 0xb6dd2654U;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected2[3U] = 0xc7d329eeU;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected2[4U] = 0xc4b5433aU;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected2[5U] = 0x331b99deU;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected2[6U] = 0x4900f7e4U;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected2[7U] = 0x501d289eU;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected2[8U] = 0xb6889018U;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected2[9U] = 0x7299aeadU;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected2[0xaU] = 0xeb9f7fa1U;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected2[0xbU] = 0x8f7779c6U;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected2[0xcU] = 0x14fc143fU;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected2[0xdU] = 0x8cf4f728U;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected2[0xeU] = 0xdae313daU;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected2[0xfU] = 0x8e959b75U;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected1[0U] = 0xe671c72U;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected1[1U] = 0x6add5b5U;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected1[2U] = 0x37d14b8eU;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected1[3U] = 0xec057fU;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected1[4U] = 0x9736920U;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected1[5U] = 0xa2601447U;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected1[6U] = 0x4b20bda2U;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected1[7U] = 0xd787d676U;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected1[8U] = 0x2f810585U;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected1[9U] = 0x6ef8b71dU;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected1[0xaU] = 0x9f30aa95U;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected1[0xbU] = 0x186bf19U;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected1[0xcU] = 0x8bae5e89U;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected1[0xdU] = 0xcd4b0593U;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected1[0xeU] = 0x2b706e69U;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__expected1[0xfU] = 0x4319017aU;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__mode = 3U;
    __Vtask_tb_sha512_core__DOT__double_block_test__12__tc_number = 5U;
    VL_WRITEF("*** TC 5 double block test case started.\n");
    __Vtask_tb_sha512_core__DOT__double_block_test__12__db_error = 0U;
    VL_WRITEF("*** TC 5 first block started.\n");
    while ((1U & (~ (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__ready_reg)))) {
    }
    __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[0U] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[1U] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[2U] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[3U] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[4U] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[5U] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[6U] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[7U] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[8U] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[9U] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[0xaU] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[0xbU] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[0xcU] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[0xdU] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[0xeU] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[0xfU] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                   >> 0x20U));
    VL_WRITEF("*** TC 5 first block done.\n*** TC 5 second block started.\n");
    while ((1U & (~ (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__ready_reg)))) {
    }
    VL_WRITEF("*** TC 5 second block done.\n");
    if (VL_LIKELY((0U == ((((((((((((((((Vtb_sha512_core__ConstPool__CONST_hbedbd283_0[0U] 
                                         ^ __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[0U]) 
                                        | (Vtb_sha512_core__ConstPool__CONST_hbedbd283_0[1U] 
                                           ^ __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[1U])) 
                                       | (Vtb_sha512_core__ConstPool__CONST_hbedbd283_0[2U] 
                                          ^ __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[2U])) 
                                      | (Vtb_sha512_core__ConstPool__CONST_hbedbd283_0[3U] 
                                         ^ __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[3U])) 
                                     | (Vtb_sha512_core__ConstPool__CONST_hbedbd283_0[4U] 
                                        ^ __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[4U])) 
                                    | (Vtb_sha512_core__ConstPool__CONST_hbedbd283_0[5U] 
                                       ^ __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[5U])) 
                                   | (Vtb_sha512_core__ConstPool__CONST_hbedbd283_0[6U] 
                                      ^ __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[6U])) 
                                  | (Vtb_sha512_core__ConstPool__CONST_hbedbd283_0[7U] 
                                     ^ __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[7U])) 
                                 | (Vtb_sha512_core__ConstPool__CONST_hbedbd283_0[8U] 
                                    ^ __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[8U])) 
                                | (Vtb_sha512_core__ConstPool__CONST_hbedbd283_0[9U] 
                                   ^ __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[9U])) 
                               | (Vtb_sha512_core__ConstPool__CONST_hbedbd283_0[0xaU] 
                                  ^ __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[0xaU])) 
                              | (Vtb_sha512_core__ConstPool__CONST_hbedbd283_0[0xbU] 
                                 ^ __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[0xbU])) 
                             | (Vtb_sha512_core__ConstPool__CONST_hbedbd283_0[0xcU] 
                                ^ __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[0xcU])) 
                            | (Vtb_sha512_core__ConstPool__CONST_hbedbd283_0[0xdU] 
                               ^ __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[0xdU])) 
                           | (Vtb_sha512_core__ConstPool__CONST_hbedbd283_0[0xeU] 
                              ^ __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[0xeU])) 
                          | (Vtb_sha512_core__ConstPool__CONST_hbedbd283_0[0xfU] 
                             ^ __Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1[0xfU]))))) {
        VL_WRITEF("*** TC %0# first block successful\n\n",
                  8,__Vtask_tb_sha512_core__DOT__double_block_test__12__tc_number);
    } else {
        VL_WRITEF("*** ERROR: TC %0# first block NOT successful\n",
                  8,__Vtask_tb_sha512_core__DOT__double_block_test__12__tc_number);
        __Vtask_tb_sha512_core__DOT__double_block_test__12__db_error = 1U;
        VL_WRITEF("Expected: 0x%064x\nGot:      0x%064x\n\n",
                  512,__Vtask_tb_sha512_core__DOT__double_block_test__12__expected1.data(),
                  512,__Vtask_tb_sha512_core__DOT__double_block_test__12__db_digest1.data());
    }
    if ((2U == (IData)(__Vtask_tb_sha512_core__DOT__double_block_test__12__mode))) {
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[0U] = 0U;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[1U] = 0U;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[2U] = 0U;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[3U] = 0U;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[4U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[5U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[6U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[7U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[8U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[9U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[0xaU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[0xbU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[0xcU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[0xdU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[0xeU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[0xfU] = 0xffffffffU;
    } else if ((3U == (IData)(__Vtask_tb_sha512_core__DOT__double_block_test__12__mode))) {
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[0U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[1U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[2U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[3U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[4U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[5U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[6U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[7U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[8U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[9U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[0xaU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[0xbU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[0xcU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[0xdU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[0xeU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[0xfU] = 0xffffffffU;
    }
    if (VL_LIKELY((0U == ((((((((((((((((Vtb_sha512_core__ConstPool__CONST_h066943bf_0[0U] 
                                         ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg) 
                                            & __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[0U])) 
                                        | (Vtb_sha512_core__ConstPool__CONST_h066943bf_0[1U] 
                                           ^ ((IData)(
                                                      (vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                                                       >> 0x20U)) 
                                              & __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[1U]))) 
                                       | (Vtb_sha512_core__ConstPool__CONST_h066943bf_0[2U] 
                                          ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg) 
                                             & __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[2U]))) 
                                      | (Vtb_sha512_core__ConstPool__CONST_h066943bf_0[3U] 
                                         ^ ((IData)(
                                                    (vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                                                     >> 0x20U)) 
                                            & __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[3U]))) 
                                     | (Vtb_sha512_core__ConstPool__CONST_h066943bf_0[4U] 
                                        ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg) 
                                           & __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[4U]))) 
                                    | (Vtb_sha512_core__ConstPool__CONST_h066943bf_0[5U] 
                                       ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                                                   >> 0x20U)) 
                                          & __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[5U]))) 
                                   | (Vtb_sha512_core__ConstPool__CONST_h066943bf_0[6U] 
                                      ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg) 
                                         & __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[6U]))) 
                                  | (Vtb_sha512_core__ConstPool__CONST_h066943bf_0[7U] 
                                     ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                                                 >> 0x20U)) 
                                        & __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[7U]))) 
                                 | (Vtb_sha512_core__ConstPool__CONST_h066943bf_0[8U] 
                                    ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg) 
                                       & __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[8U]))) 
                                | (Vtb_sha512_core__ConstPool__CONST_h066943bf_0[9U] 
                                   ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                                               >> 0x20U)) 
                                      & __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[9U]))) 
                               | (Vtb_sha512_core__ConstPool__CONST_h066943bf_0[0xaU] 
                                  ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg) 
                                     & __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[0xaU]))) 
                              | (Vtb_sha512_core__ConstPool__CONST_h066943bf_0[0xbU] 
                                 ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                                             >> 0x20U)) 
                                    & __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[0xbU]))) 
                             | (Vtb_sha512_core__ConstPool__CONST_h066943bf_0[0xcU] 
                                ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg) 
                                   & __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[0xcU]))) 
                            | (Vtb_sha512_core__ConstPool__CONST_h066943bf_0[0xdU] 
                               ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                                           >> 0x20U)) 
                                  & __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[0xdU]))) 
                           | (Vtb_sha512_core__ConstPool__CONST_h066943bf_0[0xeU] 
                              ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg) 
                                 & __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[0xeU]))) 
                          | (Vtb_sha512_core__ConstPool__CONST_h066943bf_0[0xfU] 
                             ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                                         >> 0x20U)) 
                                & __Vtask_tb_sha512_core__DOT__double_block_test__12__mask[0xfU])))))) {
        VL_WRITEF("*** TC %0# second block successful\n\n",
                  8,__Vtask_tb_sha512_core__DOT__double_block_test__12__tc_number);
    } else {
        VL_WRITEF("*** ERROR: TC %0# second block NOT successful\n",
                  8,__Vtask_tb_sha512_core__DOT__double_block_test__12__tc_number);
        __Vtask_tb_sha512_core__DOT__double_block_test__12__db_error = 1U;
        VL_WRITEF("Expected: 0x%064x\n",512,__Vtask_tb_sha512_core__DOT__double_block_test__12__expected2.data());
        __Vtemp_hee715a7c__0[0U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg);
        __Vtemp_hee715a7c__0[1U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                                            >> 0x20U));
        __Vtemp_hee715a7c__0[2U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg);
        __Vtemp_hee715a7c__0[3U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                                            >> 0x20U));
        __Vtemp_hee715a7c__0[4U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg);
        __Vtemp_hee715a7c__0[5U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                                            >> 0x20U));
        __Vtemp_hee715a7c__0[6U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg);
        __Vtemp_hee715a7c__0[7U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                                            >> 0x20U));
        __Vtemp_hee715a7c__0[8U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg);
        __Vtemp_hee715a7c__0[9U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                                            >> 0x20U));
        __Vtemp_hee715a7c__0[0xaU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg);
        __Vtemp_hee715a7c__0[0xbU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                                              >> 0x20U));
        __Vtemp_hee715a7c__0[0xcU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg);
        __Vtemp_hee715a7c__0[0xdU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                                              >> 0x20U));
        __Vtemp_hee715a7c__0[0xeU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg);
        __Vtemp_hee715a7c__0[0xfU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                                              >> 0x20U));
        VL_WRITEF("Got:      0x%064x\n\n",512,__Vtemp_hee715a7c__0.data());
    }
    if (__Vtask_tb_sha512_core__DOT__double_block_test__12__db_error) {
        tb_sha512_core__DOT__error_ctr = ((IData)(1U) 
                                          + tb_sha512_core__DOT__error_ctr);
    }
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected2[0U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected2[1U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected2[2U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected2[3U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected2[4U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected2[5U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected2[6U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected2[7U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected2[8U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected2[9U] = 0x68674af9U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected2[0xaU] = 0x4fe40e72U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected2[0xbU] = 0x35d66473U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected2[0xcU] = 0xb0c4533U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected2[0xdU] = 0x30819264U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected2[0xeU] = 0x94d60b23U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected2[0xfU] = 0x23fec5bbU;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected1[0U] = 0x700c35b3U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected1[1U] = 0xe6c0f55eU;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected1[2U] = 0x135486f8U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected1[3U] = 0x5319224bU;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected1[4U] = 0xf4737fd7U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected1[5U] = 0x6debaae2U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected1[6U] = 0xeed49509U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected1[7U] = 0x25852563U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected1[8U] = 0x45861086U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected1[9U] = 0x54ea2966U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected1[0xaU] = 0x89c412bbU;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected1[0xbU] = 0x1417ed9eU;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected1[0xcU] = 0x74a8f9efU;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected1[0xdU] = 0x5fe35e26U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected1[0xeU] = 0xb7823ce7U;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__expected1[0xfU] = 0x9606cb2dU;
    __Vtask_tb_sha512_core__DOT__double_block_test__15__tc_number = 6U;
    VL_WRITEF("*** TC 6 double block test case started.\n");
    __Vtask_tb_sha512_core__DOT__double_block_test__15__db_error = 0U;
    VL_WRITEF("*** TC 6 first block started.\n");
    while ((1U & (~ (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__ready_reg)))) {
    }
    __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[0U] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[1U] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[2U] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[3U] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[4U] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[5U] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[6U] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[7U] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[8U] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[9U] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[0xaU] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[0xbU] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[0xcU] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[0xdU] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[0xeU] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[0xfU] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                   >> 0x20U));
    VL_WRITEF("*** TC 6 first block done.\n*** TC 6 second block started.\n");
    while ((1U & (~ (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__ready_reg)))) {
    }
    VL_WRITEF("*** TC 6 second block done.\n");
    if (VL_LIKELY((0U == ((((((((((((((((Vtb_sha512_core__ConstPool__CONST_hae569943_0[0U] 
                                         ^ __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[0U]) 
                                        | (Vtb_sha512_core__ConstPool__CONST_hae569943_0[1U] 
                                           ^ __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[1U])) 
                                       | (Vtb_sha512_core__ConstPool__CONST_hae569943_0[2U] 
                                          ^ __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[2U])) 
                                      | (Vtb_sha512_core__ConstPool__CONST_hae569943_0[3U] 
                                         ^ __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[3U])) 
                                     | (Vtb_sha512_core__ConstPool__CONST_hae569943_0[4U] 
                                        ^ __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[4U])) 
                                    | (Vtb_sha512_core__ConstPool__CONST_hae569943_0[5U] 
                                       ^ __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[5U])) 
                                   | (Vtb_sha512_core__ConstPool__CONST_hae569943_0[6U] 
                                      ^ __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[6U])) 
                                  | (Vtb_sha512_core__ConstPool__CONST_hae569943_0[7U] 
                                     ^ __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[7U])) 
                                 | (Vtb_sha512_core__ConstPool__CONST_hae569943_0[8U] 
                                    ^ __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[8U])) 
                                | (Vtb_sha512_core__ConstPool__CONST_hae569943_0[9U] 
                                   ^ __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[9U])) 
                               | (Vtb_sha512_core__ConstPool__CONST_hae569943_0[0xaU] 
                                  ^ __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[0xaU])) 
                              | (Vtb_sha512_core__ConstPool__CONST_hae569943_0[0xbU] 
                                 ^ __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[0xbU])) 
                             | (Vtb_sha512_core__ConstPool__CONST_hae569943_0[0xcU] 
                                ^ __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[0xcU])) 
                            | (Vtb_sha512_core__ConstPool__CONST_hae569943_0[0xdU] 
                               ^ __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[0xdU])) 
                           | (Vtb_sha512_core__ConstPool__CONST_hae569943_0[0xeU] 
                              ^ __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[0xeU])) 
                          | (Vtb_sha512_core__ConstPool__CONST_hae569943_0[0xfU] 
                             ^ __Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1[0xfU]))))) {
        VL_WRITEF("*** TC %0# first block successful\n\n",
                  8,__Vtask_tb_sha512_core__DOT__double_block_test__15__tc_number);
    } else {
        VL_WRITEF("*** ERROR: TC %0# first block NOT successful\n",
                  8,__Vtask_tb_sha512_core__DOT__double_block_test__15__tc_number);
        __Vtask_tb_sha512_core__DOT__double_block_test__15__db_error = 1U;
        VL_WRITEF("Expected: 0x%064x\nGot:      0x%064x\n\n",
                  512,__Vtask_tb_sha512_core__DOT__double_block_test__15__expected1.data(),
                  512,__Vtask_tb_sha512_core__DOT__double_block_test__15__db_digest1.data());
    }
    if (VL_LIKELY((0U == ((((((((((((((((Vtb_sha512_core__ConstPool__CONST_h6100fab5_0[0U] 
                                         ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[0U] 
                                            & (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg))) 
                                        | (Vtb_sha512_core__ConstPool__CONST_h6100fab5_0[1U] 
                                           ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[1U] 
                                              & (IData)(
                                                        (vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                                                         >> 0x20U))))) 
                                       | (Vtb_sha512_core__ConstPool__CONST_h6100fab5_0[2U] 
                                          ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[2U] 
                                             & (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg)))) 
                                      | (Vtb_sha512_core__ConstPool__CONST_h6100fab5_0[3U] 
                                         ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[3U] 
                                            & (IData)(
                                                      (vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                                                       >> 0x20U))))) 
                                     | (Vtb_sha512_core__ConstPool__CONST_h6100fab5_0[4U] 
                                        ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[4U] 
                                           & (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg)))) 
                                    | (Vtb_sha512_core__ConstPool__CONST_h6100fab5_0[5U] 
                                       ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[5U] 
                                          & (IData)(
                                                    (vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                                                     >> 0x20U))))) 
                                   | (Vtb_sha512_core__ConstPool__CONST_h6100fab5_0[6U] 
                                      ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[6U] 
                                         & (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg)))) 
                                  | (Vtb_sha512_core__ConstPool__CONST_h6100fab5_0[7U] 
                                     ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[7U] 
                                        & (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                                                   >> 0x20U))))) 
                                 | (Vtb_sha512_core__ConstPool__CONST_h6100fab5_0[8U] 
                                    ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[8U] 
                                       & (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg)))) 
                                | (Vtb_sha512_core__ConstPool__CONST_h6100fab5_0[9U] 
                                   ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[9U] 
                                      & (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                                                 >> 0x20U))))) 
                               | (Vtb_sha512_core__ConstPool__CONST_h6100fab5_0[0xaU] 
                                  ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[0xaU] 
                                     & (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg)))) 
                              | (Vtb_sha512_core__ConstPool__CONST_h6100fab5_0[0xbU] 
                                 ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[0xbU] 
                                    & (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                                               >> 0x20U))))) 
                             | (Vtb_sha512_core__ConstPool__CONST_h6100fab5_0[0xcU] 
                                ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[0xcU] 
                                   & (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg)))) 
                            | (Vtb_sha512_core__ConstPool__CONST_h6100fab5_0[0xdU] 
                               ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[0xdU] 
                                  & (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                                             >> 0x20U))))) 
                           | (Vtb_sha512_core__ConstPool__CONST_h6100fab5_0[0xeU] 
                              ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[0xeU] 
                                 & (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg)))) 
                          | (Vtb_sha512_core__ConstPool__CONST_h6100fab5_0[0xfU] 
                             ^ (Vtb_sha512_core__ConstPool__CONST_hc527def4_0[0xfU] 
                                & (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                                           >> 0x20U)))))))) {
        VL_WRITEF("*** TC %0# second block successful\n\n",
                  8,__Vtask_tb_sha512_core__DOT__double_block_test__15__tc_number);
    } else {
        VL_WRITEF("*** ERROR: TC %0# second block NOT successful\n",
                  8,__Vtask_tb_sha512_core__DOT__double_block_test__15__tc_number);
        __Vtask_tb_sha512_core__DOT__double_block_test__15__db_error = 1U;
        VL_WRITEF("Expected: 0x%064x\n",512,__Vtask_tb_sha512_core__DOT__double_block_test__15__expected2.data());
        __Vtemp_h04783a55__0[0U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg);
        __Vtemp_h04783a55__0[1U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                                            >> 0x20U));
        __Vtemp_h04783a55__0[2U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg);
        __Vtemp_h04783a55__0[3U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                                            >> 0x20U));
        __Vtemp_h04783a55__0[4U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg);
        __Vtemp_h04783a55__0[5U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                                            >> 0x20U));
        __Vtemp_h04783a55__0[6U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg);
        __Vtemp_h04783a55__0[7U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                                            >> 0x20U));
        __Vtemp_h04783a55__0[8U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg);
        __Vtemp_h04783a55__0[9U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                                            >> 0x20U));
        __Vtemp_h04783a55__0[0xaU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg);
        __Vtemp_h04783a55__0[0xbU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                                              >> 0x20U));
        __Vtemp_h04783a55__0[0xcU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg);
        __Vtemp_h04783a55__0[0xdU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                                              >> 0x20U));
        __Vtemp_h04783a55__0[0xeU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg);
        __Vtemp_h04783a55__0[0xfU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                                              >> 0x20U));
        VL_WRITEF("Got:      0x%064x\n\n",512,__Vtemp_h04783a55__0.data());
    }
    if (__Vtask_tb_sha512_core__DOT__double_block_test__15__db_error) {
        tb_sha512_core__DOT__error_ctr = ((IData)(1U) 
                                          + tb_sha512_core__DOT__error_ctr);
    }
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected2[0U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected2[1U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected2[2U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected2[3U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected2[4U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected2[5U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected2[6U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected2[7U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected2[8U] = 0xe19b563aU;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected2[9U] = 0x6feac861U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected2[0xaU] = 0xf83ee614U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected2[0xbU] = 0x65cb9d3eU;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected2[0xcU] = 0x121d31beU;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected2[0xdU] = 0x40da3988U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected2[0xeU] = 0xfb8690f8U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected2[0xfU] = 0x3928e184U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected1[0U] = 0xf11867e1U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected1[1U] = 0x51807937U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected1[2U] = 0xceed9c5bU;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected1[3U] = 0xbf2ea614U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected1[4U] = 0x8e88e3ecU;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected1[5U] = 0x809b348eU;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected1[6U] = 0x83c44c7cU;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected1[7U] = 0xae241754U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected1[8U] = 0xb194048dU;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected1[9U] = 0x953ff7a2U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected1[0xaU] = 0x30419d1eU;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected1[0xbU] = 0xe8e94087U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected1[0xcU] = 0xc7afb288U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected1[0xdU] = 0xcbbbc42cU;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected1[0xeU] = 0x81311f8bU;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__expected1[0xfU] = 0x8dd99eb0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__tc_number = 7U;
    VL_WRITEF("*** TC 7 double block test case started.\n");
    __Vtask_tb_sha512_core__DOT__double_block_test__18__db_error = 0U;
    VL_WRITEF("*** TC 7 first block started.\n");
    while ((1U & (~ (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__ready_reg)))) {
    }
    __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[0U] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[1U] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[2U] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[3U] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[4U] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[5U] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[6U] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[7U] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[8U] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[9U] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[0xaU] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[0xbU] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[0xcU] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[0xdU] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[0xeU] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[0xfU] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                   >> 0x20U));
    VL_WRITEF("*** TC 7 first block done.\n*** TC 7 second block started.\n");
    while ((1U & (~ (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__ready_reg)))) {
    }
    VL_WRITEF("*** TC 7 second block done.\n");
    if (VL_LIKELY((0U == ((((((((((((((((Vtb_sha512_core__ConstPool__CONST_h2fd963c6_0[0U] 
                                         ^ __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[0U]) 
                                        | (Vtb_sha512_core__ConstPool__CONST_h2fd963c6_0[1U] 
                                           ^ __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[1U])) 
                                       | (Vtb_sha512_core__ConstPool__CONST_h2fd963c6_0[2U] 
                                          ^ __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[2U])) 
                                      | (Vtb_sha512_core__ConstPool__CONST_h2fd963c6_0[3U] 
                                         ^ __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[3U])) 
                                     | (Vtb_sha512_core__ConstPool__CONST_h2fd963c6_0[4U] 
                                        ^ __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[4U])) 
                                    | (Vtb_sha512_core__ConstPool__CONST_h2fd963c6_0[5U] 
                                       ^ __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[5U])) 
                                   | (Vtb_sha512_core__ConstPool__CONST_h2fd963c6_0[6U] 
                                      ^ __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[6U])) 
                                  | (Vtb_sha512_core__ConstPool__CONST_h2fd963c6_0[7U] 
                                     ^ __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[7U])) 
                                 | (Vtb_sha512_core__ConstPool__CONST_h2fd963c6_0[8U] 
                                    ^ __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[8U])) 
                                | (Vtb_sha512_core__ConstPool__CONST_h2fd963c6_0[9U] 
                                   ^ __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[9U])) 
                               | (Vtb_sha512_core__ConstPool__CONST_h2fd963c6_0[0xaU] 
                                  ^ __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[0xaU])) 
                              | (Vtb_sha512_core__ConstPool__CONST_h2fd963c6_0[0xbU] 
                                 ^ __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[0xbU])) 
                             | (Vtb_sha512_core__ConstPool__CONST_h2fd963c6_0[0xcU] 
                                ^ __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[0xcU])) 
                            | (Vtb_sha512_core__ConstPool__CONST_h2fd963c6_0[0xdU] 
                               ^ __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[0xdU])) 
                           | (Vtb_sha512_core__ConstPool__CONST_h2fd963c6_0[0xeU] 
                              ^ __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[0xeU])) 
                          | (Vtb_sha512_core__ConstPool__CONST_h2fd963c6_0[0xfU] 
                             ^ __Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1[0xfU]))))) {
        VL_WRITEF("*** TC %0# first block successful\n\n",
                  8,__Vtask_tb_sha512_core__DOT__double_block_test__18__tc_number);
    } else {
        VL_WRITEF("*** ERROR: TC %0# first block NOT successful\n",
                  8,__Vtask_tb_sha512_core__DOT__double_block_test__18__tc_number);
        __Vtask_tb_sha512_core__DOT__double_block_test__18__db_error = 1U;
        VL_WRITEF("Expected: 0x%064x\nGot:      0x%064x\n\n",
                  512,__Vtask_tb_sha512_core__DOT__double_block_test__18__expected1.data(),
                  512,__Vtask_tb_sha512_core__DOT__double_block_test__18__db_digest1.data());
    }
    __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[0U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[1U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[2U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[3U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[4U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[5U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[6U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[7U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[8U] = 0xffffffffU;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[9U] = 0xffffffffU;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[0xaU] = 0xffffffffU;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[0xbU] = 0xffffffffU;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[0xcU] = 0xffffffffU;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[0xdU] = 0xffffffffU;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[0xeU] = 0xffffffffU;
    __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[0xfU] = 0xffffffffU;
    if (VL_LIKELY((0U == ((((((((((((((((Vtb_sha512_core__ConstPool__CONST_h85b866ec_0[0U] 
                                         ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg) 
                                            & __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[0U])) 
                                        | (Vtb_sha512_core__ConstPool__CONST_h85b866ec_0[1U] 
                                           ^ ((IData)(
                                                      (vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                                                       >> 0x20U)) 
                                              & __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[1U]))) 
                                       | (Vtb_sha512_core__ConstPool__CONST_h85b866ec_0[2U] 
                                          ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg) 
                                             & __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[2U]))) 
                                      | (Vtb_sha512_core__ConstPool__CONST_h85b866ec_0[3U] 
                                         ^ ((IData)(
                                                    (vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                                                     >> 0x20U)) 
                                            & __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[3U]))) 
                                     | (Vtb_sha512_core__ConstPool__CONST_h85b866ec_0[4U] 
                                        ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg) 
                                           & __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[4U]))) 
                                    | (Vtb_sha512_core__ConstPool__CONST_h85b866ec_0[5U] 
                                       ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                                                   >> 0x20U)) 
                                          & __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[5U]))) 
                                   | (Vtb_sha512_core__ConstPool__CONST_h85b866ec_0[6U] 
                                      ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg) 
                                         & __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[6U]))) 
                                  | (Vtb_sha512_core__ConstPool__CONST_h85b866ec_0[7U] 
                                     ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                                                 >> 0x20U)) 
                                        & __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[7U]))) 
                                 | (Vtb_sha512_core__ConstPool__CONST_h85b866ec_0[8U] 
                                    ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg) 
                                       & __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[8U]))) 
                                | (Vtb_sha512_core__ConstPool__CONST_h85b866ec_0[9U] 
                                   ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                                               >> 0x20U)) 
                                      & __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[9U]))) 
                               | (Vtb_sha512_core__ConstPool__CONST_h85b866ec_0[0xaU] 
                                  ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg) 
                                     & __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[0xaU]))) 
                              | (Vtb_sha512_core__ConstPool__CONST_h85b866ec_0[0xbU] 
                                 ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                                             >> 0x20U)) 
                                    & __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[0xbU]))) 
                             | (Vtb_sha512_core__ConstPool__CONST_h85b866ec_0[0xcU] 
                                ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg) 
                                   & __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[0xcU]))) 
                            | (Vtb_sha512_core__ConstPool__CONST_h85b866ec_0[0xdU] 
                               ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                                           >> 0x20U)) 
                                  & __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[0xdU]))) 
                           | (Vtb_sha512_core__ConstPool__CONST_h85b866ec_0[0xeU] 
                              ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg) 
                                 & __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[0xeU]))) 
                          | (Vtb_sha512_core__ConstPool__CONST_h85b866ec_0[0xfU] 
                             ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                                         >> 0x20U)) 
                                & __Vtask_tb_sha512_core__DOT__double_block_test__18__mask[0xfU])))))) {
        VL_WRITEF("*** TC %0# second block successful\n\n",
                  8,__Vtask_tb_sha512_core__DOT__double_block_test__18__tc_number);
    } else {
        VL_WRITEF("*** ERROR: TC %0# second block NOT successful\n",
                  8,__Vtask_tb_sha512_core__DOT__double_block_test__18__tc_number);
        __Vtask_tb_sha512_core__DOT__double_block_test__18__db_error = 1U;
        VL_WRITEF("Expected: 0x%064x\n",512,__Vtask_tb_sha512_core__DOT__double_block_test__18__expected2.data());
        __Vtemp_hcb0cfb6d__0[0U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg);
        __Vtemp_hcb0cfb6d__0[1U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                                            >> 0x20U));
        __Vtemp_hcb0cfb6d__0[2U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg);
        __Vtemp_hcb0cfb6d__0[3U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                                            >> 0x20U));
        __Vtemp_hcb0cfb6d__0[4U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg);
        __Vtemp_hcb0cfb6d__0[5U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                                            >> 0x20U));
        __Vtemp_hcb0cfb6d__0[6U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg);
        __Vtemp_hcb0cfb6d__0[7U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                                            >> 0x20U));
        __Vtemp_hcb0cfb6d__0[8U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg);
        __Vtemp_hcb0cfb6d__0[9U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                                            >> 0x20U));
        __Vtemp_hcb0cfb6d__0[0xaU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg);
        __Vtemp_hcb0cfb6d__0[0xbU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                                              >> 0x20U));
        __Vtemp_hcb0cfb6d__0[0xcU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg);
        __Vtemp_hcb0cfb6d__0[0xdU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                                              >> 0x20U));
        __Vtemp_hcb0cfb6d__0[0xeU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg);
        __Vtemp_hcb0cfb6d__0[0xfU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                                              >> 0x20U));
        VL_WRITEF("Got:      0x%064x\n\n",512,__Vtemp_hcb0cfb6d__0.data());
    }
    if (__Vtask_tb_sha512_core__DOT__double_block_test__18__db_error) {
        tb_sha512_core__DOT__error_ctr = ((IData)(1U) 
                                          + tb_sha512_core__DOT__error_ctr);
    }
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected2[0U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected2[1U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected2[2U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected2[3U] = 0U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected2[4U] = 0x91746039U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected2[5U] = 0x66c3e9faU;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected2[6U] = 0x557e2db9U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected2[7U] = 0xfcc7c71aU;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected2[8U] = 0xe3b0f712U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected2[9U] = 0x2fa08086U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected2[0xaU] = 0x3b3b05d2U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected2[0xbU] = 0x53111b17U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected2[0xcU] = 0x82cd1b47U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected2[0xdU] = 0x3d192fc7U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected2[0xeU] = 0xf71147e8U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected2[0xfU] = 0x9330c33U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected1[0U] = 0x81e6a2c5U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected1[1U] = 0x8f2ebe9aU;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected1[2U] = 0x60feb519U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected1[3U] = 0x37eb9a66U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected1[4U] = 0xe2ccf0a9U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected1[5U] = 0x17b61a85U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected1[6U] = 0x9ebb4d64U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected1[7U] = 0xc662113eU;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected1[8U] = 0x56acaff7U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected1[9U] = 0xf6352ca1U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected1[0xaU] = 0x796c1a88U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected1[0xbU] = 0x15a2173U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected1[0xcU] = 0xa673c741U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected1[0xdU] = 0xeaae96d1U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected1[0xeU] = 0x5fd58e0bU;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__expected1[0xfU] = 0x2a7f1d89U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__mode = 2U;
    __Vtask_tb_sha512_core__DOT__double_block_test__21__tc_number = 8U;
    VL_WRITEF("*** TC 8 double block test case started.\n");
    __Vtask_tb_sha512_core__DOT__double_block_test__21__db_error = 0U;
    tb_sha512_core__DOT__tc_ctr = 8U;
    VL_WRITEF("*** TC 8 first block started.\n");
    vlSelf->tb_sha512_core__DOT__tb_mode = 2U;
    vlSelf->tb_sha512_core__DOT__tb_init = 0U;
    while ((1U & (~ (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__ready_reg)))) {
    }
    __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[0U] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[1U] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[2U] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[3U] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[4U] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[5U] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[6U] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[7U] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[8U] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[9U] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[0xaU] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[0xbU] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[0xcU] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[0xdU] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                   >> 0x20U));
    __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[0xeU] 
        = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg);
    __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[0xfU] 
        = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                   >> 0x20U));
    VL_WRITEF("*** TC 8 first block done.\n*** TC 8 second block started.\n");
    vlSelf->tb_sha512_core__DOT__tb_block[0U] = 0x380U;
    vlSelf->tb_sha512_core__DOT__tb_block[1U] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[2U] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[3U] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[4U] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[5U] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[6U] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[7U] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[8U] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[9U] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[0xaU] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[0xbU] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[0xcU] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[0xdU] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[0xeU] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[0xfU] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[0x10U] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[0x11U] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[0x12U] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[0x13U] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[0x14U] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[0x15U] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[0x16U] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[0x17U] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[0x18U] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[0x19U] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[0x1aU] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[0x1bU] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[0x1cU] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[0x1dU] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[0x1eU] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_block[0x1fU] = 0U;
    vlSelf->tb_sha512_core__DOT__tb_next = 0U;
    while ((1U & (~ (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__ready_reg)))) {
    }
    VL_WRITEF("*** TC 8 second block done.\n");
    if (VL_LIKELY((0U == ((((((((((((((((Vtb_sha512_core__ConstPool__CONST_hb18fb88b_0[0U] 
                                         ^ __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[0U]) 
                                        | (Vtb_sha512_core__ConstPool__CONST_hb18fb88b_0[1U] 
                                           ^ __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[1U])) 
                                       | (Vtb_sha512_core__ConstPool__CONST_hb18fb88b_0[2U] 
                                          ^ __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[2U])) 
                                      | (Vtb_sha512_core__ConstPool__CONST_hb18fb88b_0[3U] 
                                         ^ __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[3U])) 
                                     | (Vtb_sha512_core__ConstPool__CONST_hb18fb88b_0[4U] 
                                        ^ __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[4U])) 
                                    | (Vtb_sha512_core__ConstPool__CONST_hb18fb88b_0[5U] 
                                       ^ __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[5U])) 
                                   | (Vtb_sha512_core__ConstPool__CONST_hb18fb88b_0[6U] 
                                      ^ __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[6U])) 
                                  | (Vtb_sha512_core__ConstPool__CONST_hb18fb88b_0[7U] 
                                     ^ __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[7U])) 
                                 | (Vtb_sha512_core__ConstPool__CONST_hb18fb88b_0[8U] 
                                    ^ __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[8U])) 
                                | (Vtb_sha512_core__ConstPool__CONST_hb18fb88b_0[9U] 
                                   ^ __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[9U])) 
                               | (Vtb_sha512_core__ConstPool__CONST_hb18fb88b_0[0xaU] 
                                  ^ __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[0xaU])) 
                              | (Vtb_sha512_core__ConstPool__CONST_hb18fb88b_0[0xbU] 
                                 ^ __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[0xbU])) 
                             | (Vtb_sha512_core__ConstPool__CONST_hb18fb88b_0[0xcU] 
                                ^ __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[0xcU])) 
                            | (Vtb_sha512_core__ConstPool__CONST_hb18fb88b_0[0xdU] 
                               ^ __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[0xdU])) 
                           | (Vtb_sha512_core__ConstPool__CONST_hb18fb88b_0[0xeU] 
                              ^ __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[0xeU])) 
                          | (Vtb_sha512_core__ConstPool__CONST_hb18fb88b_0[0xfU] 
                             ^ __Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1[0xfU]))))) {
        VL_WRITEF("*** TC %0# first block successful\n\n",
                  8,__Vtask_tb_sha512_core__DOT__double_block_test__21__tc_number);
    } else {
        VL_WRITEF("*** ERROR: TC %0# first block NOT successful\n",
                  8,__Vtask_tb_sha512_core__DOT__double_block_test__21__tc_number);
        __Vtask_tb_sha512_core__DOT__double_block_test__21__db_error = 1U;
        VL_WRITEF("Expected: 0x%064x\nGot:      0x%064x\n\n",
                  512,__Vtask_tb_sha512_core__DOT__double_block_test__21__expected1.data(),
                  512,__Vtask_tb_sha512_core__DOT__double_block_test__21__db_digest1.data());
    }
    if ((2U == (IData)(__Vtask_tb_sha512_core__DOT__double_block_test__21__mode))) {
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[0U] = 0U;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[1U] = 0U;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[2U] = 0U;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[3U] = 0U;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[4U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[5U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[6U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[7U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[8U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[9U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[0xaU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[0xbU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[0xcU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[0xdU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[0xeU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[0xfU] = 0xffffffffU;
    } else if ((3U == (IData)(__Vtask_tb_sha512_core__DOT__double_block_test__21__mode))) {
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[0U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[1U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[2U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[3U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[4U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[5U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[6U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[7U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[8U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[9U] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[0xaU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[0xbU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[0xcU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[0xdU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[0xeU] = 0xffffffffU;
        __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[0xfU] = 0xffffffffU;
    }
    if (VL_LIKELY((0U == ((((((((((((((((Vtb_sha512_core__ConstPool__CONST_ha7c7af92_0[0U] 
                                         ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg) 
                                            & __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[0U])) 
                                        | (Vtb_sha512_core__ConstPool__CONST_ha7c7af92_0[1U] 
                                           ^ ((IData)(
                                                      (vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                                                       >> 0x20U)) 
                                              & __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[1U]))) 
                                       | (Vtb_sha512_core__ConstPool__CONST_ha7c7af92_0[2U] 
                                          ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg) 
                                             & __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[2U]))) 
                                      | (Vtb_sha512_core__ConstPool__CONST_ha7c7af92_0[3U] 
                                         ^ ((IData)(
                                                    (vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                                                     >> 0x20U)) 
                                            & __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[3U]))) 
                                     | (Vtb_sha512_core__ConstPool__CONST_ha7c7af92_0[4U] 
                                        ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg) 
                                           & __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[4U]))) 
                                    | (Vtb_sha512_core__ConstPool__CONST_ha7c7af92_0[5U] 
                                       ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                                                   >> 0x20U)) 
                                          & __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[5U]))) 
                                   | (Vtb_sha512_core__ConstPool__CONST_ha7c7af92_0[6U] 
                                      ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg) 
                                         & __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[6U]))) 
                                  | (Vtb_sha512_core__ConstPool__CONST_ha7c7af92_0[7U] 
                                     ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                                                 >> 0x20U)) 
                                        & __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[7U]))) 
                                 | (Vtb_sha512_core__ConstPool__CONST_ha7c7af92_0[8U] 
                                    ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg) 
                                       & __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[8U]))) 
                                | (Vtb_sha512_core__ConstPool__CONST_ha7c7af92_0[9U] 
                                   ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                                               >> 0x20U)) 
                                      & __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[9U]))) 
                               | (Vtb_sha512_core__ConstPool__CONST_ha7c7af92_0[0xaU] 
                                  ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg) 
                                     & __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[0xaU]))) 
                              | (Vtb_sha512_core__ConstPool__CONST_ha7c7af92_0[0xbU] 
                                 ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                                             >> 0x20U)) 
                                    & __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[0xbU]))) 
                             | (Vtb_sha512_core__ConstPool__CONST_ha7c7af92_0[0xcU] 
                                ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg) 
                                   & __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[0xcU]))) 
                            | (Vtb_sha512_core__ConstPool__CONST_ha7c7af92_0[0xdU] 
                               ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                                           >> 0x20U)) 
                                  & __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[0xdU]))) 
                           | (Vtb_sha512_core__ConstPool__CONST_ha7c7af92_0[0xeU] 
                              ^ ((IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg) 
                                 & __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[0xeU]))) 
                          | (Vtb_sha512_core__ConstPool__CONST_ha7c7af92_0[0xfU] 
                             ^ ((IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                                         >> 0x20U)) 
                                & __Vtask_tb_sha512_core__DOT__double_block_test__21__mask[0xfU])))))) {
        VL_WRITEF("*** TC %0# second block successful\n\n",
                  8,__Vtask_tb_sha512_core__DOT__double_block_test__21__tc_number);
    } else {
        VL_WRITEF("*** ERROR: TC %0# second block NOT successful\n",
                  8,__Vtask_tb_sha512_core__DOT__double_block_test__21__tc_number);
        __Vtask_tb_sha512_core__DOT__double_block_test__21__db_error = 1U;
        VL_WRITEF("Expected: 0x%064x\n",512,__Vtask_tb_sha512_core__DOT__double_block_test__21__expected2.data());
        __Vtemp_h12e018c2__0[0U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg);
        __Vtemp_h12e018c2__0[1U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg 
                                            >> 0x20U));
        __Vtemp_h12e018c2__0[2U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg);
        __Vtemp_h12e018c2__0[3U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg 
                                            >> 0x20U));
        __Vtemp_h12e018c2__0[4U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg);
        __Vtemp_h12e018c2__0[5U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg 
                                            >> 0x20U));
        __Vtemp_h12e018c2__0[6U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg);
        __Vtemp_h12e018c2__0[7U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg 
                                            >> 0x20U));
        __Vtemp_h12e018c2__0[8U] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg);
        __Vtemp_h12e018c2__0[9U] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg 
                                            >> 0x20U));
        __Vtemp_h12e018c2__0[0xaU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg);
        __Vtemp_h12e018c2__0[0xbU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg 
                                              >> 0x20U));
        __Vtemp_h12e018c2__0[0xcU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg);
        __Vtemp_h12e018c2__0[0xdU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg 
                                              >> 0x20U));
        __Vtemp_h12e018c2__0[0xeU] = (IData)(vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg);
        __Vtemp_h12e018c2__0[0xfU] = (IData)((vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg 
                                              >> 0x20U));
        VL_WRITEF("Got:      0x%064x\n\n",512,__Vtemp_h12e018c2__0.data());
    }
    if (__Vtask_tb_sha512_core__DOT__double_block_test__21__db_error) {
        tb_sha512_core__DOT__error_ctr = ((IData)(1U) 
                                          + tb_sha512_core__DOT__error_ctr);
    }
    if ((0U == tb_sha512_core__DOT__error_ctr)) {
        VL_WRITEF("*** All %02# test cases completed successfully\n",
                  32,tb_sha512_core__DOT__tc_ctr);
    } else {
        VL_WRITEF("*** %02# test cases did not complete successfully.\n",
                  32,tb_sha512_core__DOT__error_ctr);
    }
    VL_WRITEF("*** Simulation done.\n");
    VL_FINISH_MT("src/tb/tb_sha512_core.v", 531, "");
}

VL_ATTR_COLD void Vtb_sha512_core___024root___eval_initial(Vtb_sha512_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sha512_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sha512_core___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP____VinpClk__TOP__tb_sha512_core__DOT__tb_clk 
        = vlSelf->__VinpClk__TOP__tb_sha512_core__DOT__tb_clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__tb_sha512_core__DOT__tb_reset_n 
        = vlSelf->__VinpClk__TOP__tb_sha512_core__DOT__tb_reset_n;
    Vtb_sha512_core___024root___initial__TOP__5(vlSelf);
}

VL_ATTR_COLD void Vtb_sha512_core___024root___eval_settle(Vtb_sha512_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sha512_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sha512_core___024root___eval_settle\n"); );
    // Body
    Vtb_sha512_core___024root___settle__TOP__2(vlSelf);
    Vtb_sha512_core___024root___settle__TOP__4(vlSelf);
}

VL_ATTR_COLD void Vtb_sha512_core___024root___final(Vtb_sha512_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sha512_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sha512_core___024root___final\n"); );
}

VL_ATTR_COLD void Vtb_sha512_core___024root___ctor_var_reset(Vtb_sha512_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sha512_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sha512_core___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_sha512_core__DOT__tb_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__tb_reset_n = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__tb_init = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__tb_next = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__tb_mode = VL_RAND_RESET_I(2);
    vlSelf->tb_sha512_core__DOT__tb_work_factor = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__tb_work_factor_num = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(1024, vlSelf->tb_sha512_core__DOT__tb_block);
    vlSelf->tb_sha512_core__DOT__dut__DOT__a_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__a_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__b_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__b_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__c_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__c_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__d_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__d_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__e_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__e_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__f_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__f_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__g_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__g_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__h_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__h_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__a_h_we = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__dut__DOT__H0_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__H0_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__H1_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__H1_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__H2_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__H2_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__H3_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__H3_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__H4_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__H4_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__H5_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__H5_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__H6_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__H6_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__H7_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__H7_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__H_we = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_reg = VL_RAND_RESET_I(7);
    vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_new = VL_RAND_RESET_I(7);
    vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_we = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_inc = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__dut__DOT__round_ctr_rst = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__dut__DOT__work_factor_ctr_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_sha512_core__DOT__dut__DOT__work_factor_ctr_new = VL_RAND_RESET_I(32);
    vlSelf->tb_sha512_core__DOT__dut__DOT__work_factor_ctr_we = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__dut__DOT__ready_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__dut__DOT__ready_new = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__dut__DOT__ready_we = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_new = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__dut__DOT__digest_valid_we = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_reg = VL_RAND_RESET_I(2);
    vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_new = VL_RAND_RESET_I(2);
    vlSelf->tb_sha512_core__DOT__dut__DOT__sha512_ctrl_we = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__dut__DOT__digest_init = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__dut__DOT__digest_update = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__dut__DOT__state_init = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__dut__DOT__state_update = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__dut__DOT__first_block = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__dut__DOT__t1 = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__t2 = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_init = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__dut__DOT__k_constants_inst__DOT__tmp_K = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H0 = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H1 = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H2 = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H3 = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H4 = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H5 = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H6 = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__h_constants_inst__DOT__tmp_H7 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem00_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem01_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem02_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem03_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem04_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem05_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem06_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem07_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem08_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem09_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem10_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem11_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem12_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem13_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem14_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem15_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_mem_we = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_reg = VL_RAND_RESET_I(7);
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_new = VL_RAND_RESET_I(7);
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_ctr_we = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512_core__DOT__dut__DOT__w_mem_inst__DOT__w_new = VL_RAND_RESET_Q(64);
    vlSelf->__VinpClk__TOP__tb_sha512_core__DOT__tb_clk = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__tb_sha512_core__DOT__tb_reset_n = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__tb_sha512_core__DOT__tb_clk = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__tb_sha512_core__DOT__tb_reset_n = VL_RAND_RESET_I(1);
}
