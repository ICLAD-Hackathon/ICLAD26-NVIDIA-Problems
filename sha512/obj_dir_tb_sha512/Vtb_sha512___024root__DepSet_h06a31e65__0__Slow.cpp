// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sha512.h for the primary calling header

#include "verilated.h"

#include "Vtb_sha512___024root.h"

extern const VlUnpacked<QData/*63:0*/, 128> Vtb_sha512__ConstPool__TABLE_h2e411c54_0;
extern const VlUnpacked<QData/*63:0*/, 4> Vtb_sha512__ConstPool__TABLE_ha7fe4fed_0;
extern const VlUnpacked<QData/*63:0*/, 4> Vtb_sha512__ConstPool__TABLE_hbdc486c2_0;
extern const VlUnpacked<QData/*63:0*/, 4> Vtb_sha512__ConstPool__TABLE_hb9dc2dd5_0;
extern const VlUnpacked<QData/*63:0*/, 4> Vtb_sha512__ConstPool__TABLE_he4c2f1ed_0;
extern const VlUnpacked<QData/*63:0*/, 4> Vtb_sha512__ConstPool__TABLE_h6018ba5a_0;
extern const VlUnpacked<QData/*63:0*/, 4> Vtb_sha512__ConstPool__TABLE_hc158f037_0;
extern const VlUnpacked<QData/*63:0*/, 4> Vtb_sha512__ConstPool__TABLE_h519155ac_0;
extern const VlUnpacked<QData/*63:0*/, 4> Vtb_sha512__ConstPool__TABLE_h2f92bb12_0;

VL_ATTR_COLD void Vtb_sha512___024root___settle__TOP__2(Vtb_sha512___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sha512__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sha512___024root___settle__TOP__2\n"); );
    // Init
    VlWide<32>/*1023:0*/ tb_sha512__DOT__dut__DOT__core_block;
    CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_inc;
    CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_rst;
    CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_rst;
    CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_inc;
    CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__digest_init;
    CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__digest_update;
    CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__state_init;
    CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__state_update;
    CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__first_block;
    QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__t1;
    QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__t2;
    CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_init;
    CData/*0:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_next;
    QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__t1_logic__DOT__sum1;
    QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__t1_logic__DOT__ch;
    QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__t2_logic__DOT__sum0;
    QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__t2_logic__DOT__maj;
    QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__k_constants_inst__DOT__tmp_K;
    QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H0;
    QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H1;
    QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H2;
    QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H3;
    QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H4;
    QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H5;
    QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H6;
    QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H7;
    QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_new;
    QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_0;
    QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_1;
    QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_9;
    QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_14;
    QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__d0;
    QData/*63:0*/ tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__d1;
    CData/*6:0*/ __Vtableidx1;
    CData/*1:0*/ __Vtableidx2;
    // Body
    vlSelf->tb_sha512__DOT__tb_clk = (1U & (~ (IData)(vlSelf->tb_sha512__DOT__tb_clk)));
    vlSelf->tb_sha512__DOT__dut__DOT__block_we = 0U;
    if (vlSelf->tb_sha512__DOT__tb_cs) {
        if (vlSelf->tb_sha512__DOT__tb_we) {
            if (((0x10U <= (IData)(vlSelf->tb_sha512__DOT__tb_address)) 
                 & (0x2fU >= (IData)(vlSelf->tb_sha512__DOT__tb_address)))) {
                vlSelf->tb_sha512__DOT__dut__DOT__block_we = 1U;
            }
            vlSelf->tb_sha512__DOT__dut__DOT__work_factor_num_we = 0U;
            if ((8U != (IData)(vlSelf->tb_sha512__DOT__tb_address))) {
                if ((0xaU == (IData)(vlSelf->tb_sha512__DOT__tb_address))) {
                    vlSelf->tb_sha512__DOT__dut__DOT__work_factor_num_we = 1U;
                }
            }
            vlSelf->tb_sha512__DOT__dut__DOT__work_factor_we = 0U;
            if ((8U == (IData)(vlSelf->tb_sha512__DOT__tb_address))) {
                vlSelf->tb_sha512__DOT__dut__DOT__work_factor_we = 1U;
                vlSelf->tb_sha512__DOT__dut__DOT__mode_we = 0U;
                vlSelf->tb_sha512__DOT__dut__DOT__mode_we = 1U;
            } else {
                vlSelf->tb_sha512__DOT__dut__DOT__mode_we = 0U;
            }
        } else {
            vlSelf->tb_sha512__DOT__dut__DOT__work_factor_num_we = 0U;
            vlSelf->tb_sha512__DOT__dut__DOT__work_factor_we = 0U;
            vlSelf->tb_sha512__DOT__dut__DOT__mode_we = 0U;
        }
    } else {
        vlSelf->tb_sha512__DOT__dut__DOT__work_factor_num_we = 0U;
        vlSelf->tb_sha512__DOT__dut__DOT__work_factor_we = 0U;
        vlSelf->tb_sha512__DOT__dut__DOT__mode_we = 0U;
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_we = 0U;
    if ((0U == (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
        if (vlSelf->tb_sha512__DOT__dut__DOT__init_reg) {
            vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_we = 1U;
        }
        if (vlSelf->tb_sha512__DOT__dut__DOT__next_reg) {
            vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_we = 1U;
        }
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_new = 0U;
        if (vlSelf->tb_sha512__DOT__dut__DOT__init_reg) {
            vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_new = 1U;
        }
        if (vlSelf->tb_sha512__DOT__dut__DOT__next_reg) {
            vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_new = 1U;
        }
    } else if ((1U == (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
        if ((0x4fU == (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_reg))) {
            vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_we = 1U;
            vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_new = 0U;
            vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_new = 2U;
        } else {
            vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_new = 0U;
        }
    } else if ((2U == (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_we = 1U;
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_new = 0U;
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_new 
            = ((IData)(vlSelf->tb_sha512__DOT__dut__DOT__work_factor_reg)
                ? ((vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_reg 
                    < vlSelf->tb_sha512__DOT__dut__DOT__work_factor_num_reg)
                    ? 1U : 0U) : 0U);
    } else {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_new = 0U;
    }
    tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_inc = 0U;
    if ((0U != (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
        if ((1U == (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
            tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_inc = 1U;
            tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_inc = 0U;
            if ((0x4fU == (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_reg))) {
                tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_inc = 1U;
            }
        } else {
            tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_inc = 0U;
        }
    } else {
        tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_inc = 0U;
    }
    tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_rst = 0U;
    if ((0U == (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
        if (vlSelf->tb_sha512__DOT__dut__DOT__init_reg) {
            tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_rst = 1U;
        }
        if (vlSelf->tb_sha512__DOT__dut__DOT__next_reg) {
            tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_rst = 1U;
        }
        tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_rst = 0U;
        if (vlSelf->tb_sha512__DOT__dut__DOT__init_reg) {
            tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_rst = 1U;
        }
        if (vlSelf->tb_sha512__DOT__dut__DOT__next_reg) {
            tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_rst = 1U;
        }
    } else {
        tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_rst = 0U;
        if ((1U != (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
            if ((2U == (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
                if (vlSelf->tb_sha512__DOT__dut__DOT__work_factor_reg) {
                    if ((vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_reg 
                         < vlSelf->tb_sha512__DOT__dut__DOT__work_factor_num_reg)) {
                        tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_rst = 1U;
                    }
                }
            }
        }
    }
    tb_sha512__DOT__dut__DOT__core__DOT__t2_logic__DOT__sum0 
        = (((((QData)((IData)((0xfffffffU & (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__a_reg)))) 
              << 0x24U) | (vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__a_reg 
                           >> 0x1cU)) ^ ((vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__a_reg 
                                          << 0x1eU) 
                                         | (QData)((IData)(
                                                           (0x3fffffffU 
                                                            & (IData)(
                                                                      (vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__a_reg 
                                                                       >> 0x22U))))))) 
           ^ ((vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__a_reg 
               << 0x19U) | (QData)((IData)((0x1ffffffU 
                                            & (IData)(
                                                      (vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__a_reg 
                                                       >> 0x27U)))))));
    tb_sha512__DOT__dut__DOT__core__DOT__t2_logic__DOT__maj 
        = (((vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__a_reg 
             & vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__b_reg) 
            ^ (vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__a_reg 
               & vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__c_reg)) 
           ^ (vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__b_reg 
              & vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__c_reg));
    tb_sha512__DOT__dut__DOT__core__DOT__t2 = (tb_sha512__DOT__dut__DOT__core__DOT__t2_logic__DOT__sum0 
                                               + tb_sha512__DOT__dut__DOT__core__DOT__t2_logic__DOT__maj);
    __Vtableidx1 = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_reg;
    tb_sha512__DOT__dut__DOT__core__DOT__k_constants_inst__DOT__tmp_K 
        = Vtb_sha512__ConstPool__TABLE_h2e411c54_0[__Vtableidx1];
    vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data = 0U;
    if (vlSelf->tb_sha512__DOT__tb_cs) {
        if ((1U & (~ (IData)(vlSelf->tb_sha512__DOT__tb_we)))) {
            if (((0x40U <= (IData)(vlSelf->tb_sha512__DOT__tb_address)) 
                 & (0x4fU >= (IData)(vlSelf->tb_sha512__DOT__tb_address)))) {
                vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data 
                    = (((0U == (0x1fU & (((IData)(0xfU) 
                                          - ((IData)(vlSelf->tb_sha512__DOT__tb_address) 
                                             - (IData)(0x40U))) 
                                         << 5U))) ? 0U
                         : (vlSelf->tb_sha512__DOT__dut__DOT__digest_reg[
                            (((IData)(0x1fU) + (0x1ffU 
                                                & (((IData)(0xfU) 
                                                    - 
                                                    ((IData)(vlSelf->tb_sha512__DOT__tb_address) 
                                                     - (IData)(0x40U))) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            (((IData)(0xfU) 
                                              - ((IData)(vlSelf->tb_sha512__DOT__tb_address) 
                                                 - (IData)(0x40U))) 
                                             << 5U))))) 
                       | (vlSelf->tb_sha512__DOT__dut__DOT__digest_reg[
                          (0xfU & ((IData)(0xfU) - 
                                   ((IData)(vlSelf->tb_sha512__DOT__tb_address) 
                                    - (IData)(0x40U))))] 
                          >> (0x1fU & (((IData)(0xfU) 
                                        - ((IData)(vlSelf->tb_sha512__DOT__tb_address) 
                                           - (IData)(0x40U))) 
                                       << 5U))));
            }
            if (((0x10U <= (IData)(vlSelf->tb_sha512__DOT__tb_address)) 
                 & (0x2fU >= (IData)(vlSelf->tb_sha512__DOT__tb_address)))) {
                vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data 
                    = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
                    [(0x1fU & (IData)(vlSelf->tb_sha512__DOT__tb_address))];
            }
            if ((0U == (IData)(vlSelf->tb_sha512__DOT__tb_address))) {
                vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data = 0x73686132U;
            } else if ((1U == (IData)(vlSelf->tb_sha512__DOT__tb_address))) {
                vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data = 0x2d353132U;
            } else if ((2U == (IData)(vlSelf->tb_sha512__DOT__tb_address))) {
                vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data = 0x302e3830U;
            } else if ((8U == (IData)(vlSelf->tb_sha512__DOT__tb_address))) {
                vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data 
                    = (((IData)(vlSelf->tb_sha512__DOT__dut__DOT__work_factor_reg) 
                        << 7U) | (((IData)(vlSelf->tb_sha512__DOT__dut__DOT__mode_reg) 
                                   << 2U) | (((IData)(vlSelf->tb_sha512__DOT__dut__DOT__next_reg) 
                                              << 1U) 
                                             | (IData)(vlSelf->tb_sha512__DOT__dut__DOT__init_reg))));
            } else if ((9U == (IData)(vlSelf->tb_sha512__DOT__tb_address))) {
                vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data 
                    = (((IData)(vlSelf->tb_sha512__DOT__dut__DOT__digest_valid_reg) 
                        << 1U) | (IData)(vlSelf->tb_sha512__DOT__dut__DOT__ready_reg));
            } else if ((0xaU == (IData)(vlSelf->tb_sha512__DOT__tb_address))) {
                vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data 
                    = vlSelf->tb_sha512__DOT__dut__DOT__work_factor_num_reg;
            }
        }
    }
    tb_sha512__DOT__dut__DOT__core__DOT__digest_init = 0U;
    if ((0U == (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
        if (vlSelf->tb_sha512__DOT__dut__DOT__init_reg) {
            tb_sha512__DOT__dut__DOT__core__DOT__digest_init = 1U;
        }
    }
    tb_sha512__DOT__dut__DOT__core__DOT__digest_update = 0U;
    if ((0U != (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
        if ((1U != (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
            if ((2U == (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
                if (vlSelf->tb_sha512__DOT__dut__DOT__work_factor_reg) {
                    if ((vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_reg 
                         >= vlSelf->tb_sha512__DOT__dut__DOT__work_factor_num_reg)) {
                        tb_sha512__DOT__dut__DOT__core__DOT__digest_update = 1U;
                    }
                } else {
                    tb_sha512__DOT__dut__DOT__core__DOT__digest_update = 1U;
                }
            }
        }
    }
    tb_sha512__DOT__dut__DOT__core__DOT__first_block = 0U;
    if ((0U == (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
        if (vlSelf->tb_sha512__DOT__dut__DOT__init_reg) {
            tb_sha512__DOT__dut__DOT__core__DOT__first_block = 1U;
        }
    }
    tb_sha512__DOT__dut__DOT__core__DOT__state_update = 0U;
    if ((0U != (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
        if ((1U == (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
            tb_sha512__DOT__dut__DOT__core__DOT__state_update = 1U;
        }
    }
    tb_sha512__DOT__dut__DOT__core__DOT__state_init = 0U;
    if ((0U == (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
        if (vlSelf->tb_sha512__DOT__dut__DOT__init_reg) {
            tb_sha512__DOT__dut__DOT__core__DOT__state_init = 1U;
        }
        if (vlSelf->tb_sha512__DOT__dut__DOT__next_reg) {
            tb_sha512__DOT__dut__DOT__core__DOT__state_init = 1U;
        }
    } else if ((1U != (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
        if ((2U == (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
            if (vlSelf->tb_sha512__DOT__dut__DOT__work_factor_reg) {
                if ((vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_reg 
                     < vlSelf->tb_sha512__DOT__dut__DOT__work_factor_num_reg)) {
                    tb_sha512__DOT__dut__DOT__core__DOT__state_init = 1U;
                }
            }
        }
    }
    __Vtableidx2 = vlSelf->tb_sha512__DOT__dut__DOT__mode_reg;
    tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H0 
        = Vtb_sha512__ConstPool__TABLE_ha7fe4fed_0[__Vtableidx2];
    tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H1 
        = Vtb_sha512__ConstPool__TABLE_hbdc486c2_0[__Vtableidx2];
    tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H2 
        = Vtb_sha512__ConstPool__TABLE_hb9dc2dd5_0[__Vtableidx2];
    tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H3 
        = Vtb_sha512__ConstPool__TABLE_he4c2f1ed_0[__Vtableidx2];
    tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H4 
        = Vtb_sha512__ConstPool__TABLE_h6018ba5a_0[__Vtableidx2];
    tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H5 
        = Vtb_sha512__ConstPool__TABLE_hc158f037_0[__Vtableidx2];
    tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H6 
        = Vtb_sha512__ConstPool__TABLE_h519155ac_0[__Vtableidx2];
    tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H7 
        = Vtb_sha512__ConstPool__TABLE_h2f92bb12_0[__Vtableidx2];
    tb_sha512__DOT__dut__DOT__core_block[0U] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [0x1fU];
    tb_sha512__DOT__dut__DOT__core_block[1U] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [0x1eU];
    tb_sha512__DOT__dut__DOT__core_block[2U] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [0x1dU];
    tb_sha512__DOT__dut__DOT__core_block[3U] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [0x1cU];
    tb_sha512__DOT__dut__DOT__core_block[4U] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [0x1bU];
    tb_sha512__DOT__dut__DOT__core_block[5U] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [0x1aU];
    tb_sha512__DOT__dut__DOT__core_block[6U] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [0x19U];
    tb_sha512__DOT__dut__DOT__core_block[7U] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [0x18U];
    tb_sha512__DOT__dut__DOT__core_block[8U] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [0x17U];
    tb_sha512__DOT__dut__DOT__core_block[9U] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [0x16U];
    tb_sha512__DOT__dut__DOT__core_block[0xaU] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [0x15U];
    tb_sha512__DOT__dut__DOT__core_block[0xbU] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [0x14U];
    tb_sha512__DOT__dut__DOT__core_block[0xcU] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [0x13U];
    tb_sha512__DOT__dut__DOT__core_block[0xdU] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [0x12U];
    tb_sha512__DOT__dut__DOT__core_block[0xeU] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [0x11U];
    tb_sha512__DOT__dut__DOT__core_block[0xfU] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [0x10U];
    tb_sha512__DOT__dut__DOT__core_block[0x10U] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [0xfU];
    tb_sha512__DOT__dut__DOT__core_block[0x11U] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [0xeU];
    tb_sha512__DOT__dut__DOT__core_block[0x12U] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [0xdU];
    tb_sha512__DOT__dut__DOT__core_block[0x13U] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [0xcU];
    tb_sha512__DOT__dut__DOT__core_block[0x14U] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [0xbU];
    tb_sha512__DOT__dut__DOT__core_block[0x15U] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [0xaU];
    tb_sha512__DOT__dut__DOT__core_block[0x16U] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [9U];
    tb_sha512__DOT__dut__DOT__core_block[0x17U] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [8U];
    tb_sha512__DOT__dut__DOT__core_block[0x18U] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [7U];
    tb_sha512__DOT__dut__DOT__core_block[0x19U] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [6U];
    tb_sha512__DOT__dut__DOT__core_block[0x1aU] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [5U];
    tb_sha512__DOT__dut__DOT__core_block[0x1bU] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [4U];
    tb_sha512__DOT__dut__DOT__core_block[0x1cU] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [3U];
    tb_sha512__DOT__dut__DOT__core_block[0x1dU] = vlSelf->tb_sha512__DOT__dut__DOT__block_reg
        [2U];
    tb_sha512__DOT__dut__DOT__core_block[0x1eU] = (IData)(
                                                          (((QData)((IData)(
                                                                            vlSelf->tb_sha512__DOT__dut__DOT__block_reg
                                                                            [0U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->tb_sha512__DOT__dut__DOT__block_reg
                                                                             [1U]))));
    tb_sha512__DOT__dut__DOT__core_block[0x1fU] = (IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->tb_sha512__DOT__dut__DOT__block_reg
                                                                             [0U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->tb_sha512__DOT__dut__DOT__block_reg
                                                                              [1U]))) 
                                                           >> 0x20U));
    tb_sha512__DOT__dut__DOT__core__DOT__w_next = 0U;
    if ((0U != (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
        if ((1U == (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
            tb_sha512__DOT__dut__DOT__core__DOT__w_next = 1U;
        }
    }
    tb_sha512__DOT__dut__DOT__core__DOT__w_init = 0U;
    if ((0U == (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
        if (vlSelf->tb_sha512__DOT__dut__DOT__init_reg) {
            tb_sha512__DOT__dut__DOT__core__DOT__w_init = 1U;
        }
        if (vlSelf->tb_sha512__DOT__dut__DOT__next_reg) {
            tb_sha512__DOT__dut__DOT__core__DOT__w_init = 1U;
        }
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_we = 0U;
        if (vlSelf->tb_sha512__DOT__dut__DOT__init_reg) {
            vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_we = 1U;
        }
        if (vlSelf->tb_sha512__DOT__dut__DOT__next_reg) {
            vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_we = 1U;
        }
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_new = 0U;
        if (vlSelf->tb_sha512__DOT__dut__DOT__init_reg) {
            vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_new = 0U;
        }
        if (vlSelf->tb_sha512__DOT__dut__DOT__next_reg) {
            vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_new = 0U;
        }
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_new = 0U;
        if (vlSelf->tb_sha512__DOT__dut__DOT__init_reg) {
            vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_new = 0U;
        }
        if (vlSelf->tb_sha512__DOT__dut__DOT__next_reg) {
            vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_new = 0U;
        }
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_we = 0U;
        if (vlSelf->tb_sha512__DOT__dut__DOT__init_reg) {
            vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_we = 1U;
        }
        if (vlSelf->tb_sha512__DOT__dut__DOT__next_reg) {
            vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_we = 1U;
        }
    } else if ((1U != (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
        if ((2U == (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg))) {
            if (vlSelf->tb_sha512__DOT__dut__DOT__work_factor_reg) {
                if ((vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_reg 
                     < vlSelf->tb_sha512__DOT__dut__DOT__work_factor_num_reg)) {
                    tb_sha512__DOT__dut__DOT__core__DOT__w_init = 1U;
                }
                vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_we = 0U;
                if ((vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_reg 
                     >= vlSelf->tb_sha512__DOT__dut__DOT__work_factor_num_reg)) {
                    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_we = 1U;
                    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_new = 0U;
                    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_new = 1U;
                    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_new = 0U;
                    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_new = 1U;
                    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_we = 0U;
                    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_we = 1U;
                } else {
                    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_new = 0U;
                    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_new = 0U;
                    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_we = 0U;
                }
            } else {
                vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_we = 0U;
                vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_we = 1U;
                vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_new = 0U;
                vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_new = 1U;
                vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_new = 0U;
                vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_new = 1U;
                vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_we = 0U;
                vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_we = 1U;
            }
        } else {
            vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_we = 0U;
            vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_new = 0U;
            vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_new = 0U;
            vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_we = 0U;
        }
    } else {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_we = 0U;
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_new = 0U;
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_new = 0U;
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_we = 0U;
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_we = 0U;
    if (tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_rst) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_we = 1U;
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_inc) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_we = 1U;
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_new = 0U;
    if (tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_rst) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_new = 0U;
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_inc) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_new 
            = ((IData)(1U) + vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_reg);
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_we = 0U;
    if (tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_rst) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_we = 1U;
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_inc) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_we = 1U;
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_new = 0U;
    if (tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_rst) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_new = 0U;
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_inc) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_new 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_reg)));
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H_we = 0U;
    if (tb_sha512__DOT__dut__DOT__core__DOT__digest_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H_we = 1U;
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__digest_update) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H_we = 1U;
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__a_h_we = 0U;
    if (tb_sha512__DOT__dut__DOT__core__DOT__state_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__a_h_we = 1U;
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__state_update) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__a_h_we = 1U;
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H1_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__digest_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H1_new 
            = tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H1;
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__digest_update) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H1_new 
            = (vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H1_reg 
               + vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__b_reg);
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__b_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__state_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__b_new 
            = ((IData)(tb_sha512__DOT__dut__DOT__core__DOT__first_block)
                ? tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H1
                : vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H1_reg);
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__state_update) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__b_new 
            = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__a_reg;
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H2_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__digest_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H2_new 
            = tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H2;
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__digest_update) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H2_new 
            = (vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H2_reg 
               + vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__c_reg);
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__c_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__state_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__c_new 
            = ((IData)(tb_sha512__DOT__dut__DOT__core__DOT__first_block)
                ? tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H2
                : vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H2_reg);
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__state_update) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__c_new 
            = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__b_reg;
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H3_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__digest_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H3_new 
            = tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H3;
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__digest_update) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H3_new 
            = (vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H3_reg 
               + vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__d_reg);
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__d_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__state_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__d_new 
            = ((IData)(tb_sha512__DOT__dut__DOT__core__DOT__first_block)
                ? tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H3
                : vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H3_reg);
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__state_update) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__d_new 
            = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__c_reg;
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H5_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__digest_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H5_new 
            = tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H5;
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__digest_update) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H5_new 
            = (vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H5_reg 
               + vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__f_reg);
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__f_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__state_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__f_new 
            = ((IData)(tb_sha512__DOT__dut__DOT__core__DOT__first_block)
                ? tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H5
                : vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H5_reg);
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__state_update) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__f_new 
            = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__e_reg;
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H6_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__digest_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H6_new 
            = tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H6;
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__digest_update) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H6_new 
            = (vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H6_reg 
               + vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__g_reg);
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__g_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__state_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__g_new 
            = ((IData)(tb_sha512__DOT__dut__DOT__core__DOT__first_block)
                ? tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H6
                : vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H6_reg);
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__state_update) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__g_new 
            = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__f_reg;
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H7_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__digest_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H7_new 
            = tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H7;
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__digest_update) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H7_new 
            = (vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H7_reg 
               + vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__h_reg);
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__h_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__state_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__h_new 
            = ((IData)(tb_sha512__DOT__dut__DOT__core__DOT__first_block)
                ? tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H7
                : vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H7_reg);
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__state_update) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__h_new 
            = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__g_reg;
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H0_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__digest_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H0_new 
            = tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H0;
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__digest_update) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H0_new 
            = (vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H0_reg 
               + vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__a_reg);
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H4_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__digest_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H4_new 
            = tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H4;
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__digest_update) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H4_new 
            = (vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H4_reg 
               + vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__e_reg);
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_we = 0U;
    if (tb_sha512__DOT__dut__DOT__core__DOT__w_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_we = 1U;
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__w_next) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_we = 1U;
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_we = 0U;
    if (tb_sha512__DOT__dut__DOT__core__DOT__w_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_we = 1U;
    }
    if (((IData)(tb_sha512__DOT__dut__DOT__core__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_we = 1U;
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_new = 0U;
    if (tb_sha512__DOT__dut__DOT__core__DOT__w_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_new = 0U;
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__w_next) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_new 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_reg)));
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem12_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__w_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem12_new 
            = (((QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[7U])) 
                << 0x20U) | (QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[6U])));
    }
    if (((IData)(tb_sha512__DOT__dut__DOT__core__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem12_new 
            = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem
            [0xdU];
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem11_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__w_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem11_new 
            = (((QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[9U])) 
                << 0x20U) | (QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[8U])));
    }
    if (((IData)(tb_sha512__DOT__dut__DOT__core__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem11_new 
            = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem
            [0xcU];
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem10_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__w_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem10_new 
            = (((QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0xbU])) 
                << 0x20U) | (QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0xaU])));
    }
    if (((IData)(tb_sha512__DOT__dut__DOT__core__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem10_new 
            = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem
            [0xbU];
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem09_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__w_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem09_new 
            = (((QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0xdU])) 
                << 0x20U) | (QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0xcU])));
    }
    if (((IData)(tb_sha512__DOT__dut__DOT__core__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem09_new 
            = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem
            [0xaU];
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem08_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__w_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem08_new 
            = (((QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0xfU])) 
                << 0x20U) | (QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0xeU])));
    }
    if (((IData)(tb_sha512__DOT__dut__DOT__core__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem08_new 
            = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem
            [9U];
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem07_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__w_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem07_new 
            = (((QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0x11U])) 
                << 0x20U) | (QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0x10U])));
    }
    if (((IData)(tb_sha512__DOT__dut__DOT__core__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem07_new 
            = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem
            [8U];
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem06_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__w_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem06_new 
            = (((QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0x13U])) 
                << 0x20U) | (QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0x12U])));
    }
    if (((IData)(tb_sha512__DOT__dut__DOT__core__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem06_new 
            = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem
            [7U];
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem05_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__w_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem05_new 
            = (((QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0x15U])) 
                << 0x20U) | (QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0x14U])));
    }
    if (((IData)(tb_sha512__DOT__dut__DOT__core__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem05_new 
            = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem
            [6U];
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem04_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__w_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem04_new 
            = (((QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0x17U])) 
                << 0x20U) | (QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0x16U])));
    }
    if (((IData)(tb_sha512__DOT__dut__DOT__core__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem04_new 
            = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem
            [5U];
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem03_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__w_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem03_new 
            = (((QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0x19U])) 
                << 0x20U) | (QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0x18U])));
    }
    if (((IData)(tb_sha512__DOT__dut__DOT__core__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem03_new 
            = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem
            [4U];
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem02_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__w_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem02_new 
            = (((QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0x1bU])) 
                << 0x20U) | (QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0x1aU])));
    }
    if (((IData)(tb_sha512__DOT__dut__DOT__core__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem02_new 
            = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem
            [3U];
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem01_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__w_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem01_new 
            = (((QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0x1dU])) 
                << 0x20U) | (QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0x1cU])));
    }
    if (((IData)(tb_sha512__DOT__dut__DOT__core__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem01_new 
            = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem
            [2U];
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem00_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__w_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem00_new 
            = (((QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0x1fU])) 
                << 0x20U) | (QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0x1eU])));
    }
    if (((IData)(tb_sha512__DOT__dut__DOT__core__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem00_new 
            = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem
            [1U];
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem13_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__w_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem13_new 
            = (((QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[5U])) 
                << 0x20U) | (QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[4U])));
    }
    if (((IData)(tb_sha512__DOT__dut__DOT__core__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem13_new 
            = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem
            [0xeU];
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem14_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__w_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem14_new 
            = (((QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[3U])) 
                << 0x20U) | (QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[2U])));
    }
    if (((IData)(tb_sha512__DOT__dut__DOT__core__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem14_new 
            = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem
            [0xfU];
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem15_new = 0ULL;
    tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_0 
        = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem
        [0U];
    tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_1 
        = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem
        [1U];
    tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_9 
        = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem
        [9U];
    tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_14 
        = vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem
        [0xeU];
    tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__d0 
        = (((((QData)((IData)((1U & (IData)(tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_1)))) 
              << 0x3fU) | (tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_1 
                           >> 1U)) ^ (((QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_1)))) 
                                       << 0x38U) | 
                                      (tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_1 
                                       >> 8U))) ^ (tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_1 
                                                   >> 7U));
    tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__d1 
        = (((((QData)((IData)((0x7ffffU & (IData)(tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_14)))) 
              << 0x2dU) | (tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_14 
                           >> 0x13U)) ^ ((tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_14 
                                          << 3U) | (QData)((IData)(
                                                                   (7U 
                                                                    & (IData)(
                                                                              (tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_14 
                                                                               >> 0x3dU))))))) 
           ^ (tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_14 
              >> 6U));
    tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_new 
        = (((tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_0 
             + tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__d0) 
            + tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__w_9) 
           + tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_update_logic__DOT__d1);
    if (tb_sha512__DOT__dut__DOT__core__DOT__w_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem15_new 
            = (((QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[1U])) 
                << 0x20U) | (QData)((IData)(tb_sha512__DOT__dut__DOT__core_block[0U])));
    }
    if (((IData)(tb_sha512__DOT__dut__DOT__core__DOT__w_next) 
         & (0xfU < (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_reg)))) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem15_new 
            = tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_new;
    }
    tb_sha512__DOT__dut__DOT__core__DOT__t1_logic__DOT__sum1 
        = (((((QData)((IData)((0x3fffU & (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__e_reg)))) 
              << 0x32U) | (vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__e_reg 
                           >> 0xeU)) ^ (((QData)((IData)(
                                                         (0x3ffffU 
                                                          & (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__e_reg)))) 
                                         << 0x2eU) 
                                        | (vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__e_reg 
                                           >> 0x12U))) 
           ^ ((vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__e_reg 
               << 0x17U) | (QData)((IData)((0x7fffffU 
                                            & (IData)(
                                                      (vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__e_reg 
                                                       >> 0x29U)))))));
    tb_sha512__DOT__dut__DOT__core__DOT__t1_logic__DOT__ch 
        = ((vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__e_reg 
            & vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__f_reg) 
           ^ ((~ vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__e_reg) 
              & vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__g_reg));
    tb_sha512__DOT__dut__DOT__core__DOT__t1 = ((((vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__h_reg 
                                                  + tb_sha512__DOT__dut__DOT__core__DOT__t1_logic__DOT__sum1) 
                                                 + tb_sha512__DOT__dut__DOT__core__DOT__t1_logic__DOT__ch) 
                                                + tb_sha512__DOT__dut__DOT__core__DOT__k_constants_inst__DOT__tmp_K) 
                                               + ((0x10U 
                                                   > (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_reg))
                                                   ? 
                                                  vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem
                                                  [
                                                  (0xfU 
                                                   & (IData)(vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_reg))]
                                                   : tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_new));
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__a_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__state_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__a_new 
            = ((IData)(tb_sha512__DOT__dut__DOT__core__DOT__first_block)
                ? tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H0
                : vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H0_reg);
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__state_update) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__a_new 
            = (tb_sha512__DOT__dut__DOT__core__DOT__t1 
               + tb_sha512__DOT__dut__DOT__core__DOT__t2);
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__e_new = 0ULL;
    if (tb_sha512__DOT__dut__DOT__core__DOT__state_init) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__e_new 
            = ((IData)(tb_sha512__DOT__dut__DOT__core__DOT__first_block)
                ? tb_sha512__DOT__dut__DOT__core__DOT__h_constants_inst__DOT__tmp_H4
                : vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H4_reg);
    }
    if (tb_sha512__DOT__dut__DOT__core__DOT__state_update) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__e_new 
            = (vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__d_reg 
               + tb_sha512__DOT__dut__DOT__core__DOT__t1);
    }
}

extern const VlWide<16>/*511:0*/ Vtb_sha512__ConstPool__CONST_h7f43c14c_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512__ConstPool__CONST_hc527def4_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512__ConstPool__CONST_h04c7e96b_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512__ConstPool__CONST_h3f7031e1_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512__ConstPool__CONST_h4f7c38dc_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512__ConstPool__CONST_h46896a18_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512__ConstPool__CONST_h74741065_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512__ConstPool__CONST_hbedbd283_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512__ConstPool__CONST_h066943bf_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512__ConstPool__CONST_hae569943_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512__ConstPool__CONST_h6100fab5_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512__ConstPool__CONST_h2fd963c6_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512__ConstPool__CONST_h85b866ec_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512__ConstPool__CONST_hb18fb88b_0;
extern const VlWide<16>/*511:0*/ Vtb_sha512__ConstPool__CONST_ha7c7af92_0;

VL_ATTR_COLD void Vtb_sha512___024root___initial__TOP__4(Vtb_sha512___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sha512__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sha512___024root___initial__TOP__4\n"); );
    // Init
    IData/*31:0*/ tb_sha512__DOT__error_ctr;
    IData/*31:0*/ tb_sha512__DOT__tc_ctr;
    IData/*31:0*/ tb_sha512__DOT__read_data;
    IData/*31:0*/ __Vtask_tb_sha512__DOT__check_name_version__2__name0;
    IData/*31:0*/ __Vtask_tb_sha512__DOT__check_name_version__2__name1;
    IData/*31:0*/ __Vtask_tb_sha512__DOT__check_name_version__2__version;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512__DOT__single_block_test__7__expected;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512__DOT__single_block_test__7__masked_data;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512__DOT__single_block_test__62__expected;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512__DOT__single_block_test__62__masked_data;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512__DOT__single_block_test__117__expected;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512__DOT__single_block_test__117__masked_data;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512__DOT__single_block_test__172__expected;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512__DOT__single_block_test__172__masked_data;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512__DOT__double_block_test__227__expected0;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512__DOT__double_block_test__227__expected1;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512__DOT__double_block_test__335__expected0;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512__DOT__double_block_test__335__expected1;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512__DOT__double_block_test__443__expected0;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512__DOT__double_block_test__443__expected1;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512__DOT__double_block_test__551__expected0;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512__DOT__double_block_test__551__expected1;
    VlWide<16>/*511:0*/ __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1;
    // Body
    VL_WRITEF("   -- Testbench for sha512 started --\n");
    tb_sha512__DOT__error_ctr = 0U;
    tb_sha512__DOT__tc_ctr = 0U;
    vlSelf->tb_sha512__DOT__tb_clk = 0U;
    VL_WRITEF("*** Toggle reset.\n");
    vlSelf->tb_sha512__DOT__tb_reset_n = 1U;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    __Vtask_tb_sha512__DOT__check_name_version__2__name0 
        = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    __Vtask_tb_sha512__DOT__check_name_version__2__name1 
        = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    __Vtask_tb_sha512__DOT__check_name_version__2__version 
        = tb_sha512__DOT__read_data;
    VL_WRITEF("DUT name: %c%c%c%c%c%c%c%c\nDUT version: %c%c%c%c\n",
              8,(__Vtask_tb_sha512__DOT__check_name_version__2__name0 
                 >> 0x18U),8,(0xffU & (__Vtask_tb_sha512__DOT__check_name_version__2__name0 
                                       >> 0x10U)),8,
              (0xffU & (__Vtask_tb_sha512__DOT__check_name_version__2__name0 
                        >> 8U)),8,(0xffU & __Vtask_tb_sha512__DOT__check_name_version__2__name0),
              8,(__Vtask_tb_sha512__DOT__check_name_version__2__name1 
                 >> 0x18U),8,(0xffU & (__Vtask_tb_sha512__DOT__check_name_version__2__name1 
                                       >> 0x10U)),8,
              (0xffU & (__Vtask_tb_sha512__DOT__check_name_version__2__name1 
                        >> 8U)),8,(0xffU & __Vtask_tb_sha512__DOT__check_name_version__2__name1),
              8,(__Vtask_tb_sha512__DOT__check_name_version__2__version 
                 >> 0x18U),8,(0xffU & (__Vtask_tb_sha512__DOT__check_name_version__2__version 
                                       >> 0x10U)),8,
              (0xffU & (__Vtask_tb_sha512__DOT__check_name_version__2__version 
                        >> 8U)),8,(0xffU & __Vtask_tb_sha512__DOT__check_name_version__2__version));
    VL_WRITEF("State of DUT\n------------\nInputs and outputs:\ncs = 0x0, we = 0x0\naddress = 0x02\nwrite_data = 0x00000000, read_data = 0x%08x\ntmp_read_data = 0x%08x\n\nControl and status:\nctrl = 0x%02x, status = 0x%02x\n\nMessage block:\nblock0  = 0x%08x, block1  = 0x%08x, block2  = 0x%08x,  block3  = 0x%08x\nblock4  = 0x%08x, block5  = 0x%08x, block6  = 0x%08x,  block7  = 0x%08x\nblock8  = 0x%08x, block9  = 0x%08x, block10 = 0x%08x,  block11 = 0x%08x\n",
              32,vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data,
              32,vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data,
              2,(((IData)(vlSelf->tb_sha512__DOT__dut__DOT__next_reg) 
                  << 1U) | (IData)(vlSelf->tb_sha512__DOT__dut__DOT__init_reg)),
              2,(((IData)(vlSelf->tb_sha512__DOT__dut__DOT__digest_valid_reg) 
                  << 1U) | (IData)(vlSelf->tb_sha512__DOT__dut__DOT__ready_reg)),
              32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [1U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [2U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [3U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [4U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [5U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [6U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [7U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [8U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [9U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0xaU],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0xbU]);
    VL_WRITEF("block12 = 0x%08x, block13 = 0x%08x, block14 = 0x%08x,  block15 = 0x%08x\nblock16 = 0x%08x, block17 = 0x%08x, block18 = 0x%08x,  block19 = 0x%08x\nblock20 = 0x%08x, block21 = 0x%08x, block22 = 0x%08x,  block23 = 0x%08x\nblock24 = 0x%08x, block25 = 0x%08x, block26 = 0x%08x,  block27 = 0x%08x\nblock28 = 0x%08x, block29 = 0x%08x, block30 = 0x%08x,  block31 = 0x%08x\n\nDigest:\ndigest = 0x%0128x\n\n",
              32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0xcU],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0xdU],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0xeU],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0xfU],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x10U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x11U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x12U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x13U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x14U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x15U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x16U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x17U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x18U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x19U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x1aU],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x1bU],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x1cU],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x1dU],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x1eU],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x1fU],512,vlSelf->tb_sha512__DOT__dut__DOT__digest_reg.data());
    __Vtask_tb_sha512__DOT__single_block_test__7__expected[0U] = 0xa54ca49fU;
    __Vtask_tb_sha512__DOT__single_block_test__7__expected[1U] = 0x2a9ac94fU;
    __Vtask_tb_sha512__DOT__single_block_test__7__expected[2U] = 0x643ce80eU;
    __Vtask_tb_sha512__DOT__single_block_test__7__expected[3U] = 0x454d4423U;
    __Vtask_tb_sha512__DOT__single_block_test__7__expected[4U] = 0xa3feebbdU;
    __Vtask_tb_sha512__DOT__single_block_test__7__expected[5U] = 0x36ba3c23U;
    __Vtask_tb_sha512__DOT__single_block_test__7__expected[6U] = 0x274fc1a8U;
    __Vtask_tb_sha512__DOT__single_block_test__7__expected[7U] = 0x2192992aU;
    __Vtask_tb_sha512__DOT__single_block_test__7__expected[8U] = 0x4b55d39aU;
    __Vtask_tb_sha512__DOT__single_block_test__7__expected[9U] = 0xa9eeee6U;
    __Vtask_tb_sha512__DOT__single_block_test__7__expected[0xaU] = 0x89a97ea2U;
    __Vtask_tb_sha512__DOT__single_block_test__7__expected[0xbU] = 0x12e6fa4eU;
    __Vtask_tb_sha512__DOT__single_block_test__7__expected[0xcU] = 0xae204131U;
    __Vtask_tb_sha512__DOT__single_block_test__7__expected[0xdU] = 0xcc417349U;
    __Vtask_tb_sha512__DOT__single_block_test__7__expected[0xeU] = 0x93617abaU;
    __Vtask_tb_sha512__DOT__single_block_test__7__expected[0xfU] = 0xddaf35a1U;
    VL_WRITEF("*** TC0 - Single block test started.\n");
    vlSelf->tb_sha512__DOT__tb_address = 8U;
    vlSelf->tb_sha512__DOT__tb_cs = 0U;
    vlSelf->tb_sha512__DOT__tb_we = 0U;
    tb_sha512__DOT__read_data = 0U;
    while ((0U == tb_sha512__DOT__read_data)) {
        vlSelf->tb_sha512__DOT__tb_address = 9U;
        vlSelf->tb_sha512__DOT__tb_we = 0U;
        tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
        vlSelf->tb_sha512__DOT__tb_cs = 0U;
    }
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xfU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xeU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xdU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xcU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xbU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xaU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[9U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[8U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[7U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[6U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[5U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[4U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[3U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[2U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[1U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0U] = tb_sha512__DOT__read_data;
    __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[0U] 
        = vlSelf->tb_sha512__DOT__digest_data[0U];
    __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[1U] 
        = vlSelf->tb_sha512__DOT__digest_data[1U];
    __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[2U] 
        = vlSelf->tb_sha512__DOT__digest_data[2U];
    __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[3U] 
        = vlSelf->tb_sha512__DOT__digest_data[3U];
    __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[4U] 
        = vlSelf->tb_sha512__DOT__digest_data[4U];
    __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[5U] 
        = vlSelf->tb_sha512__DOT__digest_data[5U];
    __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[6U] 
        = vlSelf->tb_sha512__DOT__digest_data[6U];
    __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[7U] 
        = vlSelf->tb_sha512__DOT__digest_data[7U];
    __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[8U] 
        = vlSelf->tb_sha512__DOT__digest_data[8U];
    __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[9U] 
        = vlSelf->tb_sha512__DOT__digest_data[9U];
    __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[0xaU] 
        = vlSelf->tb_sha512__DOT__digest_data[0xaU];
    __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[0xbU] 
        = vlSelf->tb_sha512__DOT__digest_data[0xbU];
    __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[0xcU] 
        = vlSelf->tb_sha512__DOT__digest_data[0xcU];
    __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[0xdU] 
        = vlSelf->tb_sha512__DOT__digest_data[0xdU];
    __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[0xeU] 
        = vlSelf->tb_sha512__DOT__digest_data[0xeU];
    __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[0xfU] 
        = vlSelf->tb_sha512__DOT__digest_data[0xfU];
    if (VL_LIKELY((0U == ((((((((((((((((Vtb_sha512__ConstPool__CONST_h7f43c14c_0[0U] 
                                         ^ __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[0U]) 
                                        | (Vtb_sha512__ConstPool__CONST_h7f43c14c_0[1U] 
                                           ^ __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[1U])) 
                                       | (Vtb_sha512__ConstPool__CONST_h7f43c14c_0[2U] 
                                          ^ __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[2U])) 
                                      | (Vtb_sha512__ConstPool__CONST_h7f43c14c_0[3U] 
                                         ^ __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[3U])) 
                                     | (Vtb_sha512__ConstPool__CONST_h7f43c14c_0[4U] 
                                        ^ __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[4U])) 
                                    | (Vtb_sha512__ConstPool__CONST_h7f43c14c_0[5U] 
                                       ^ __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[5U])) 
                                   | (Vtb_sha512__ConstPool__CONST_h7f43c14c_0[6U] 
                                      ^ __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[6U])) 
                                  | (Vtb_sha512__ConstPool__CONST_h7f43c14c_0[7U] 
                                     ^ __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[7U])) 
                                 | (Vtb_sha512__ConstPool__CONST_h7f43c14c_0[8U] 
                                    ^ __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[8U])) 
                                | (Vtb_sha512__ConstPool__CONST_h7f43c14c_0[9U] 
                                   ^ __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[9U])) 
                               | (Vtb_sha512__ConstPool__CONST_h7f43c14c_0[0xaU] 
                                  ^ __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[0xaU])) 
                              | (Vtb_sha512__ConstPool__CONST_h7f43c14c_0[0xbU] 
                                 ^ __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[0xbU])) 
                             | (Vtb_sha512__ConstPool__CONST_h7f43c14c_0[0xcU] 
                                ^ __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[0xcU])) 
                            | (Vtb_sha512__ConstPool__CONST_h7f43c14c_0[0xdU] 
                               ^ __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[0xdU])) 
                           | (Vtb_sha512__ConstPool__CONST_h7f43c14c_0[0xeU] 
                              ^ __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[0xeU])) 
                          | (Vtb_sha512__ConstPool__CONST_h7f43c14c_0[0xfU] 
                             ^ __Vtask_tb_sha512__DOT__single_block_test__7__masked_data[0xfU]))))) {
        VL_WRITEF("TC%01#: OK.\n",32,tb_sha512__DOT__tc_ctr);
    } else {
        VL_WRITEF("TC%01#: ERROR.\n",32,tb_sha512__DOT__tc_ctr);
        tb_sha512__DOT__error_ctr = ((IData)(1U) + tb_sha512__DOT__error_ctr);
        VL_WRITEF("TC%01#: Expected: 0x%0128x\nTC%01#: Got:      0x%0128x\n",
                  32,tb_sha512__DOT__tc_ctr,512,__Vtask_tb_sha512__DOT__single_block_test__7__expected.data(),
                  32,tb_sha512__DOT__tc_ctr,512,__Vtask_tb_sha512__DOT__single_block_test__7__masked_data.data());
    }
    VL_WRITEF("*** TC%01# - Single block test done.\n",
              32,tb_sha512__DOT__tc_ctr);
    tb_sha512__DOT__tc_ctr = ((IData)(1U) + tb_sha512__DOT__tc_ctr);
    __Vtask_tb_sha512__DOT__single_block_test__62__expected[0U] = 0U;
    __Vtask_tb_sha512__DOT__single_block_test__62__expected[1U] = 0U;
    __Vtask_tb_sha512__DOT__single_block_test__62__expected[2U] = 0U;
    __Vtask_tb_sha512__DOT__single_block_test__62__expected[3U] = 0U;
    __Vtask_tb_sha512__DOT__single_block_test__62__expected[4U] = 0U;
    __Vtask_tb_sha512__DOT__single_block_test__62__expected[5U] = 0U;
    __Vtask_tb_sha512__DOT__single_block_test__62__expected[6U] = 0U;
    __Vtask_tb_sha512__DOT__single_block_test__62__expected[7U] = 0U;
    __Vtask_tb_sha512__DOT__single_block_test__62__expected[8U] = 0U;
    __Vtask_tb_sha512__DOT__single_block_test__62__expected[9U] = 0x3e8924aaU;
    __Vtask_tb_sha512__DOT__single_block_test__62__expected[0xaU] = 0x5ceee9a4U;
    __Vtask_tb_sha512__DOT__single_block_test__62__expected[0xbU] = 0xe37ed26U;
    __Vtask_tb_sha512__DOT__single_block_test__62__expected[0xcU] = 0x460842e2U;
    __Vtask_tb_sha512__DOT__single_block_test__62__expected[0xdU] = 0xdaae7530U;
    __Vtask_tb_sha512__DOT__single_block_test__62__expected[0xeU] = 0x707b6a54U;
    __Vtask_tb_sha512__DOT__single_block_test__62__expected[0xfU] = 0x4634270fU;
    VL_WRITEF("*** TC%01# - Single block test started.\n",
              32,tb_sha512__DOT__tc_ctr);
    vlSelf->tb_sha512__DOT__tb_address = 8U;
    vlSelf->tb_sha512__DOT__tb_cs = 0U;
    vlSelf->tb_sha512__DOT__tb_we = 0U;
    tb_sha512__DOT__read_data = 0U;
    while ((0U == tb_sha512__DOT__read_data)) {
        vlSelf->tb_sha512__DOT__tb_address = 9U;
        vlSelf->tb_sha512__DOT__tb_we = 0U;
        tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
        vlSelf->tb_sha512__DOT__tb_cs = 0U;
    }
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xfU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xeU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xdU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xcU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xbU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xaU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[9U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[8U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[7U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[6U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[5U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[4U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[3U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[2U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[1U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0U] = tb_sha512__DOT__read_data;
    __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[0U] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[0U] 
           & vlSelf->tb_sha512__DOT__digest_data[0U]);
    __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[1U] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[1U] 
           & vlSelf->tb_sha512__DOT__digest_data[1U]);
    __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[2U] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[2U] 
           & vlSelf->tb_sha512__DOT__digest_data[2U]);
    __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[3U] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[3U] 
           & vlSelf->tb_sha512__DOT__digest_data[3U]);
    __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[4U] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[4U] 
           & vlSelf->tb_sha512__DOT__digest_data[4U]);
    __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[5U] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[5U] 
           & vlSelf->tb_sha512__DOT__digest_data[5U]);
    __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[6U] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[6U] 
           & vlSelf->tb_sha512__DOT__digest_data[6U]);
    __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[7U] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[7U] 
           & vlSelf->tb_sha512__DOT__digest_data[7U]);
    __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[8U] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[8U] 
           & vlSelf->tb_sha512__DOT__digest_data[8U]);
    __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[9U] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[9U] 
           & vlSelf->tb_sha512__DOT__digest_data[9U]);
    __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[0xaU] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[0xaU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xaU]);
    __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[0xbU] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[0xbU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xbU]);
    __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[0xcU] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[0xcU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xcU]);
    __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[0xdU] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[0xdU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xdU]);
    __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[0xeU] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[0xeU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xeU]);
    __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[0xfU] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[0xfU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xfU]);
    if ((0U == ((((((((((((((((Vtb_sha512__ConstPool__CONST_h04c7e96b_0[0U] 
                               ^ __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[0U]) 
                              | (Vtb_sha512__ConstPool__CONST_h04c7e96b_0[1U] 
                                 ^ __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[1U])) 
                             | (Vtb_sha512__ConstPool__CONST_h04c7e96b_0[2U] 
                                ^ __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[2U])) 
                            | (Vtb_sha512__ConstPool__CONST_h04c7e96b_0[3U] 
                               ^ __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[3U])) 
                           | (Vtb_sha512__ConstPool__CONST_h04c7e96b_0[4U] 
                              ^ __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[4U])) 
                          | (Vtb_sha512__ConstPool__CONST_h04c7e96b_0[5U] 
                             ^ __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[5U])) 
                         | (Vtb_sha512__ConstPool__CONST_h04c7e96b_0[6U] 
                            ^ __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[6U])) 
                        | (Vtb_sha512__ConstPool__CONST_h04c7e96b_0[7U] 
                           ^ __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[7U])) 
                       | (Vtb_sha512__ConstPool__CONST_h04c7e96b_0[8U] 
                          ^ __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[8U])) 
                      | (Vtb_sha512__ConstPool__CONST_h04c7e96b_0[9U] 
                         ^ __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[9U])) 
                     | (Vtb_sha512__ConstPool__CONST_h04c7e96b_0[0xaU] 
                        ^ __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[0xaU])) 
                    | (Vtb_sha512__ConstPool__CONST_h04c7e96b_0[0xbU] 
                       ^ __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[0xbU])) 
                   | (Vtb_sha512__ConstPool__CONST_h04c7e96b_0[0xcU] 
                      ^ __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[0xcU])) 
                  | (Vtb_sha512__ConstPool__CONST_h04c7e96b_0[0xdU] 
                     ^ __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[0xdU])) 
                 | (Vtb_sha512__ConstPool__CONST_h04c7e96b_0[0xeU] 
                    ^ __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[0xeU])) 
                | (Vtb_sha512__ConstPool__CONST_h04c7e96b_0[0xfU] 
                   ^ __Vtask_tb_sha512__DOT__single_block_test__62__masked_data[0xfU])))) {
        VL_WRITEF("TC%01#: OK.\n",32,tb_sha512__DOT__tc_ctr);
    } else {
        tb_sha512__DOT__error_ctr = ((IData)(1U) + tb_sha512__DOT__error_ctr);
        VL_WRITEF("TC%01#: ERROR.\nTC%01#: Expected: 0x%0128x\nTC%01#: Got:      0x%0128x\n",
                  32,tb_sha512__DOT__tc_ctr,32,tb_sha512__DOT__tc_ctr,
                  512,__Vtask_tb_sha512__DOT__single_block_test__62__expected.data(),
                  32,tb_sha512__DOT__tc_ctr,512,__Vtask_tb_sha512__DOT__single_block_test__62__masked_data.data());
    }
    VL_WRITEF("*** TC%01# - Single block test done.\n",
              32,tb_sha512__DOT__tc_ctr);
    tb_sha512__DOT__tc_ctr = ((IData)(1U) + tb_sha512__DOT__tc_ctr);
    __Vtask_tb_sha512__DOT__single_block_test__117__expected[0U] = 0U;
    __Vtask_tb_sha512__DOT__single_block_test__117__expected[1U] = 0U;
    __Vtask_tb_sha512__DOT__single_block_test__117__expected[2U] = 0U;
    __Vtask_tb_sha512__DOT__single_block_test__117__expected[3U] = 0U;
    __Vtask_tb_sha512__DOT__single_block_test__117__expected[4U] = 0U;
    __Vtask_tb_sha512__DOT__single_block_test__117__expected[5U] = 0U;
    __Vtask_tb_sha512__DOT__single_block_test__117__expected[6U] = 0U;
    __Vtask_tb_sha512__DOT__single_block_test__117__expected[7U] = 0U;
    __Vtask_tb_sha512__DOT__single_block_test__117__expected[8U] = 0x7e7af23U;
    __Vtask_tb_sha512__DOT__single_block_test__117__expected[9U] = 0xe0e2f131U;
    __Vtask_tb_sha512__DOT__single_block_test__117__expected[0xaU] = 0x34fc6d46U;
    __Vtask_tb_sha512__DOT__single_block_test__117__expected[0xbU] = 0xe4c2d0c6U;
    __Vtask_tb_sha512__DOT__single_block_test__117__expected[0xcU] = 0x6b4c7dabU;
    __Vtask_tb_sha512__DOT__single_block_test__117__expected[0xdU] = 0x9b2e29b7U;
    __Vtask_tb_sha512__DOT__single_block_test__117__expected[0xeU] = 0x81941ef9U;
    __Vtask_tb_sha512__DOT__single_block_test__117__expected[0xfU] = 0x53048e26U;
    VL_WRITEF("*** TC%01# - Single block test started.\n",
              32,tb_sha512__DOT__tc_ctr);
    vlSelf->tb_sha512__DOT__tb_address = 8U;
    vlSelf->tb_sha512__DOT__tb_cs = 0U;
    vlSelf->tb_sha512__DOT__tb_we = 0U;
    tb_sha512__DOT__read_data = 0U;
    while ((0U == tb_sha512__DOT__read_data)) {
        vlSelf->tb_sha512__DOT__tb_address = 9U;
        vlSelf->tb_sha512__DOT__tb_we = 0U;
        tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
        vlSelf->tb_sha512__DOT__tb_cs = 0U;
    }
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xfU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xeU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xdU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xcU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xbU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xaU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[9U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[8U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[7U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[6U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[5U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[4U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[3U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[2U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[1U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0U] = tb_sha512__DOT__read_data;
    __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[0U] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[0U] 
           & vlSelf->tb_sha512__DOT__digest_data[0U]);
    __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[1U] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[1U] 
           & vlSelf->tb_sha512__DOT__digest_data[1U]);
    __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[2U] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[2U] 
           & vlSelf->tb_sha512__DOT__digest_data[2U]);
    __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[3U] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[3U] 
           & vlSelf->tb_sha512__DOT__digest_data[3U]);
    __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[4U] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[4U] 
           & vlSelf->tb_sha512__DOT__digest_data[4U]);
    __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[5U] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[5U] 
           & vlSelf->tb_sha512__DOT__digest_data[5U]);
    __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[6U] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[6U] 
           & vlSelf->tb_sha512__DOT__digest_data[6U]);
    __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[7U] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[7U] 
           & vlSelf->tb_sha512__DOT__digest_data[7U]);
    __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[8U] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[8U] 
           & vlSelf->tb_sha512__DOT__digest_data[8U]);
    __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[9U] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[9U] 
           & vlSelf->tb_sha512__DOT__digest_data[9U]);
    __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[0xaU] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[0xaU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xaU]);
    __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[0xbU] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[0xbU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xbU]);
    __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[0xcU] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[0xcU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xcU]);
    __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[0xdU] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[0xdU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xdU]);
    __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[0xeU] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[0xeU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xeU]);
    __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[0xfU] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[0xfU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xfU]);
    if ((0U == ((((((((((((((((Vtb_sha512__ConstPool__CONST_h4f7c38dc_0[0U] 
                               ^ __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[0U]) 
                              | (Vtb_sha512__ConstPool__CONST_h4f7c38dc_0[1U] 
                                 ^ __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[1U])) 
                             | (Vtb_sha512__ConstPool__CONST_h4f7c38dc_0[2U] 
                                ^ __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[2U])) 
                            | (Vtb_sha512__ConstPool__CONST_h4f7c38dc_0[3U] 
                               ^ __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[3U])) 
                           | (Vtb_sha512__ConstPool__CONST_h4f7c38dc_0[4U] 
                              ^ __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[4U])) 
                          | (Vtb_sha512__ConstPool__CONST_h4f7c38dc_0[5U] 
                             ^ __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[5U])) 
                         | (Vtb_sha512__ConstPool__CONST_h4f7c38dc_0[6U] 
                            ^ __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[6U])) 
                        | (Vtb_sha512__ConstPool__CONST_h4f7c38dc_0[7U] 
                           ^ __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[7U])) 
                       | (Vtb_sha512__ConstPool__CONST_h4f7c38dc_0[8U] 
                          ^ __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[8U])) 
                      | (Vtb_sha512__ConstPool__CONST_h4f7c38dc_0[9U] 
                         ^ __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[9U])) 
                     | (Vtb_sha512__ConstPool__CONST_h4f7c38dc_0[0xaU] 
                        ^ __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[0xaU])) 
                    | (Vtb_sha512__ConstPool__CONST_h4f7c38dc_0[0xbU] 
                       ^ __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[0xbU])) 
                   | (Vtb_sha512__ConstPool__CONST_h4f7c38dc_0[0xcU] 
                      ^ __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[0xcU])) 
                  | (Vtb_sha512__ConstPool__CONST_h4f7c38dc_0[0xdU] 
                     ^ __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[0xdU])) 
                 | (Vtb_sha512__ConstPool__CONST_h4f7c38dc_0[0xeU] 
                    ^ __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[0xeU])) 
                | (Vtb_sha512__ConstPool__CONST_h4f7c38dc_0[0xfU] 
                   ^ __Vtask_tb_sha512__DOT__single_block_test__117__masked_data[0xfU])))) {
        VL_WRITEF("TC%01#: OK.\n",32,tb_sha512__DOT__tc_ctr);
    } else {
        tb_sha512__DOT__error_ctr = ((IData)(1U) + tb_sha512__DOT__error_ctr);
        VL_WRITEF("TC%01#: ERROR.\nTC%01#: Expected: 0x%0128x\nTC%01#: Got:      0x%0128x\n",
                  32,tb_sha512__DOT__tc_ctr,32,tb_sha512__DOT__tc_ctr,
                  512,__Vtask_tb_sha512__DOT__single_block_test__117__expected.data(),
                  32,tb_sha512__DOT__tc_ctr,512,__Vtask_tb_sha512__DOT__single_block_test__117__masked_data.data());
    }
    VL_WRITEF("*** TC%01# - Single block test done.\n",
              32,tb_sha512__DOT__tc_ctr);
    tb_sha512__DOT__tc_ctr = ((IData)(1U) + tb_sha512__DOT__tc_ctr);
    __Vtask_tb_sha512__DOT__single_block_test__172__expected[0U] = 0U;
    __Vtask_tb_sha512__DOT__single_block_test__172__expected[1U] = 0U;
    __Vtask_tb_sha512__DOT__single_block_test__172__expected[2U] = 0U;
    __Vtask_tb_sha512__DOT__single_block_test__172__expected[3U] = 0U;
    __Vtask_tb_sha512__DOT__single_block_test__172__expected[4U] = 0x34c825a7U;
    __Vtask_tb_sha512__DOT__single_block_test__172__expected[5U] = 0x58baeca1U;
    __Vtask_tb_sha512__DOT__single_block_test__172__expected[6U] = 0xa1e7cc23U;
    __Vtask_tb_sha512__DOT__single_block_test__172__expected[7U] = 0x8086072bU;
    __Vtask_tb_sha512__DOT__single_block_test__172__expected[8U] = 0x43ff5bedU;
    __Vtask_tb_sha512__DOT__single_block_test__172__expected[9U] = 0x1a8b605aU;
    __Vtask_tb_sha512__DOT__single_block_test__172__expected[0xaU] = 0xeded163U;
    __Vtask_tb_sha512__DOT__single_block_test__172__expected[0xbU] = 0x272c32abU;
    __Vtask_tb_sha512__DOT__single_block_test__172__expected[0xcU] = 0x9ac65007U;
    __Vtask_tb_sha512__DOT__single_block_test__172__expected[0xdU] = 0xb5a03d69U;
    __Vtask_tb_sha512__DOT__single_block_test__172__expected[0xeU] = 0x45a35e8bU;
    __Vtask_tb_sha512__DOT__single_block_test__172__expected[0xfU] = 0xcb00753fU;
    VL_WRITEF("*** TC%01# - Single block test started.\n",
              32,tb_sha512__DOT__tc_ctr);
    vlSelf->tb_sha512__DOT__tb_address = 8U;
    vlSelf->tb_sha512__DOT__tb_cs = 0U;
    vlSelf->tb_sha512__DOT__tb_we = 0U;
    tb_sha512__DOT__read_data = 0U;
    while ((0U == tb_sha512__DOT__read_data)) {
        vlSelf->tb_sha512__DOT__tb_address = 9U;
        vlSelf->tb_sha512__DOT__tb_we = 0U;
        tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
        vlSelf->tb_sha512__DOT__tb_cs = 0U;
    }
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xfU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xeU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xdU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xcU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xbU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xaU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[9U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[8U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[7U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[6U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[5U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[4U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[3U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[2U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[1U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0U] = tb_sha512__DOT__read_data;
    __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[0U] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[0U] 
           & vlSelf->tb_sha512__DOT__digest_data[0U]);
    __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[1U] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[1U] 
           & vlSelf->tb_sha512__DOT__digest_data[1U]);
    __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[2U] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[2U] 
           & vlSelf->tb_sha512__DOT__digest_data[2U]);
    __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[3U] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[3U] 
           & vlSelf->tb_sha512__DOT__digest_data[3U]);
    __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[4U] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[4U] 
           & vlSelf->tb_sha512__DOT__digest_data[4U]);
    __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[5U] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[5U] 
           & vlSelf->tb_sha512__DOT__digest_data[5U]);
    __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[6U] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[6U] 
           & vlSelf->tb_sha512__DOT__digest_data[6U]);
    __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[7U] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[7U] 
           & vlSelf->tb_sha512__DOT__digest_data[7U]);
    __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[8U] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[8U] 
           & vlSelf->tb_sha512__DOT__digest_data[8U]);
    __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[9U] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[9U] 
           & vlSelf->tb_sha512__DOT__digest_data[9U]);
    __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[0xaU] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[0xaU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xaU]);
    __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[0xbU] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[0xbU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xbU]);
    __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[0xcU] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[0xcU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xcU]);
    __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[0xdU] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[0xdU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xdU]);
    __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[0xeU] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[0xeU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xeU]);
    __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[0xfU] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[0xfU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xfU]);
    if ((0U == ((((((((((((((((Vtb_sha512__ConstPool__CONST_h74741065_0[0U] 
                               ^ __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[0U]) 
                              | (Vtb_sha512__ConstPool__CONST_h74741065_0[1U] 
                                 ^ __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[1U])) 
                             | (Vtb_sha512__ConstPool__CONST_h74741065_0[2U] 
                                ^ __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[2U])) 
                            | (Vtb_sha512__ConstPool__CONST_h74741065_0[3U] 
                               ^ __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[3U])) 
                           | (Vtb_sha512__ConstPool__CONST_h74741065_0[4U] 
                              ^ __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[4U])) 
                          | (Vtb_sha512__ConstPool__CONST_h74741065_0[5U] 
                             ^ __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[5U])) 
                         | (Vtb_sha512__ConstPool__CONST_h74741065_0[6U] 
                            ^ __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[6U])) 
                        | (Vtb_sha512__ConstPool__CONST_h74741065_0[7U] 
                           ^ __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[7U])) 
                       | (Vtb_sha512__ConstPool__CONST_h74741065_0[8U] 
                          ^ __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[8U])) 
                      | (Vtb_sha512__ConstPool__CONST_h74741065_0[9U] 
                         ^ __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[9U])) 
                     | (Vtb_sha512__ConstPool__CONST_h74741065_0[0xaU] 
                        ^ __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[0xaU])) 
                    | (Vtb_sha512__ConstPool__CONST_h74741065_0[0xbU] 
                       ^ __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[0xbU])) 
                   | (Vtb_sha512__ConstPool__CONST_h74741065_0[0xcU] 
                      ^ __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[0xcU])) 
                  | (Vtb_sha512__ConstPool__CONST_h74741065_0[0xdU] 
                     ^ __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[0xdU])) 
                 | (Vtb_sha512__ConstPool__CONST_h74741065_0[0xeU] 
                    ^ __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[0xeU])) 
                | (Vtb_sha512__ConstPool__CONST_h74741065_0[0xfU] 
                   ^ __Vtask_tb_sha512__DOT__single_block_test__172__masked_data[0xfU])))) {
        VL_WRITEF("TC%01#: OK.\n",32,tb_sha512__DOT__tc_ctr);
    } else {
        tb_sha512__DOT__error_ctr = ((IData)(1U) + tb_sha512__DOT__error_ctr);
        VL_WRITEF("TC%01#: ERROR.\nTC%01#: Expected: 0x%0128x\nTC%01#: Got:      0x%0128x\n",
                  32,tb_sha512__DOT__tc_ctr,32,tb_sha512__DOT__tc_ctr,
                  512,__Vtask_tb_sha512__DOT__single_block_test__172__expected.data(),
                  32,tb_sha512__DOT__tc_ctr,512,__Vtask_tb_sha512__DOT__single_block_test__172__masked_data.data());
    }
    VL_WRITEF("*** TC%01# - Single block test done.\n",
              32,tb_sha512__DOT__tc_ctr);
    tb_sha512__DOT__tc_ctr = ((IData)(1U) + tb_sha512__DOT__tc_ctr);
    __Vtask_tb_sha512__DOT__double_block_test__227__expected1[0U] = 0x874be909U;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected1[1U] = 0x5e96e55bU;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected1[2U] = 0xb6dd2654U;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected1[3U] = 0xc7d329eeU;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected1[4U] = 0xc4b5433aU;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected1[5U] = 0x331b99deU;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected1[6U] = 0x4900f7e4U;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected1[7U] = 0x501d289eU;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected1[8U] = 0xb6889018U;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected1[9U] = 0x7299aeadU;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected1[0xaU] = 0xeb9f7fa1U;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected1[0xbU] = 0x8f7779c6U;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected1[0xcU] = 0x14fc143fU;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected1[0xdU] = 0x8cf4f728U;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected1[0xeU] = 0xdae313daU;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected1[0xfU] = 0x8e959b75U;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected0[0U] = 0xe671c72U;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected0[1U] = 0x6add5b5U;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected0[2U] = 0x37d14b8eU;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected0[3U] = 0xec057fU;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected0[4U] = 0x9736920U;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected0[5U] = 0xa2601447U;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected0[6U] = 0x4b20bda2U;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected0[7U] = 0xd787d676U;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected0[8U] = 0x2f810585U;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected0[9U] = 0x6ef8b71dU;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected0[0xaU] = 0x9f30aa95U;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected0[0xbU] = 0x186bf19U;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected0[0xcU] = 0x8bae5e89U;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected0[0xdU] = 0xcd4b0593U;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected0[0xeU] = 0x2b706e69U;
    __Vtask_tb_sha512__DOT__double_block_test__227__expected0[0xfU] = 0x4319017aU;
    VL_WRITEF("*** TC%01# - Double block test started.\n",
              32,tb_sha512__DOT__tc_ctr);
    vlSelf->tb_sha512__DOT__tb_address = 8U;
    vlSelf->tb_sha512__DOT__tb_cs = 0U;
    vlSelf->tb_sha512__DOT__tb_we = 0U;
    tb_sha512__DOT__read_data = 0U;
    while ((0U == tb_sha512__DOT__read_data)) {
        vlSelf->tb_sha512__DOT__tb_address = 9U;
        vlSelf->tb_sha512__DOT__tb_we = 0U;
        tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
        vlSelf->tb_sha512__DOT__tb_cs = 0U;
    }
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xfU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xeU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xdU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xcU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xbU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xaU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[9U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[8U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[7U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[6U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[5U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[4U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[3U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[2U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[1U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0U] = tb_sha512__DOT__read_data;
    if ((0U == ((((((((((((((((Vtb_sha512__ConstPool__CONST_hbedbd283_0[0U] 
                               ^ vlSelf->tb_sha512__DOT__digest_data[0U]) 
                              | (Vtb_sha512__ConstPool__CONST_hbedbd283_0[1U] 
                                 ^ vlSelf->tb_sha512__DOT__digest_data[1U])) 
                             | (Vtb_sha512__ConstPool__CONST_hbedbd283_0[2U] 
                                ^ vlSelf->tb_sha512__DOT__digest_data[2U])) 
                            | (Vtb_sha512__ConstPool__CONST_hbedbd283_0[3U] 
                               ^ vlSelf->tb_sha512__DOT__digest_data[3U])) 
                           | (Vtb_sha512__ConstPool__CONST_hbedbd283_0[4U] 
                              ^ vlSelf->tb_sha512__DOT__digest_data[4U])) 
                          | (Vtb_sha512__ConstPool__CONST_hbedbd283_0[5U] 
                             ^ vlSelf->tb_sha512__DOT__digest_data[5U])) 
                         | (Vtb_sha512__ConstPool__CONST_hbedbd283_0[6U] 
                            ^ vlSelf->tb_sha512__DOT__digest_data[6U])) 
                        | (Vtb_sha512__ConstPool__CONST_hbedbd283_0[7U] 
                           ^ vlSelf->tb_sha512__DOT__digest_data[7U])) 
                       | (Vtb_sha512__ConstPool__CONST_hbedbd283_0[8U] 
                          ^ vlSelf->tb_sha512__DOT__digest_data[8U])) 
                      | (Vtb_sha512__ConstPool__CONST_hbedbd283_0[9U] 
                         ^ vlSelf->tb_sha512__DOT__digest_data[9U])) 
                     | (Vtb_sha512__ConstPool__CONST_hbedbd283_0[0xaU] 
                        ^ vlSelf->tb_sha512__DOT__digest_data[0xaU])) 
                    | (Vtb_sha512__ConstPool__CONST_hbedbd283_0[0xbU] 
                       ^ vlSelf->tb_sha512__DOT__digest_data[0xbU])) 
                   | (Vtb_sha512__ConstPool__CONST_hbedbd283_0[0xcU] 
                      ^ vlSelf->tb_sha512__DOT__digest_data[0xcU])) 
                  | (Vtb_sha512__ConstPool__CONST_hbedbd283_0[0xdU] 
                     ^ vlSelf->tb_sha512__DOT__digest_data[0xdU])) 
                 | (Vtb_sha512__ConstPool__CONST_hbedbd283_0[0xeU] 
                    ^ vlSelf->tb_sha512__DOT__digest_data[0xeU])) 
                | (Vtb_sha512__ConstPool__CONST_hbedbd283_0[0xfU] 
                   ^ vlSelf->tb_sha512__DOT__digest_data[0xfU])))) {
        VL_WRITEF("TC%01# first block: OK.\n",32,tb_sha512__DOT__tc_ctr);
    } else {
        tb_sha512__DOT__error_ctr = ((IData)(1U) + tb_sha512__DOT__error_ctr);
        VL_WRITEF("TC%01#: ERROR in first digest\nTC%01#: Expected: 0x%064x\nTC%01#: Got:      0x%064x\n",
                  32,tb_sha512__DOT__tc_ctr,32,tb_sha512__DOT__tc_ctr,
                  512,__Vtask_tb_sha512__DOT__double_block_test__227__expected0.data(),
                  32,tb_sha512__DOT__tc_ctr,512,vlSelf->tb_sha512__DOT__digest_data.data());
    }
    vlSelf->tb_sha512__DOT__tb_address = 8U;
    vlSelf->tb_sha512__DOT__tb_cs = 0U;
    vlSelf->tb_sha512__DOT__tb_we = 0U;
    tb_sha512__DOT__read_data = 0U;
    while ((0U == tb_sha512__DOT__read_data)) {
        vlSelf->tb_sha512__DOT__tb_address = 9U;
        vlSelf->tb_sha512__DOT__tb_we = 0U;
        tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
        vlSelf->tb_sha512__DOT__tb_cs = 0U;
    }
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xfU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xeU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xdU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xcU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xbU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xaU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[9U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[8U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[7U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[6U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[5U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[4U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[3U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[2U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[1U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0U] = tb_sha512__DOT__read_data;
    __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[0U] 
        = vlSelf->tb_sha512__DOT__digest_data[0U];
    __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[1U] 
        = vlSelf->tb_sha512__DOT__digest_data[1U];
    __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[2U] 
        = vlSelf->tb_sha512__DOT__digest_data[2U];
    __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[3U] 
        = vlSelf->tb_sha512__DOT__digest_data[3U];
    __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[4U] 
        = vlSelf->tb_sha512__DOT__digest_data[4U];
    __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[5U] 
        = vlSelf->tb_sha512__DOT__digest_data[5U];
    __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[6U] 
        = vlSelf->tb_sha512__DOT__digest_data[6U];
    __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[7U] 
        = vlSelf->tb_sha512__DOT__digest_data[7U];
    __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[8U] 
        = vlSelf->tb_sha512__DOT__digest_data[8U];
    __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[9U] 
        = vlSelf->tb_sha512__DOT__digest_data[9U];
    __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[0xaU] 
        = vlSelf->tb_sha512__DOT__digest_data[0xaU];
    __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[0xbU] 
        = vlSelf->tb_sha512__DOT__digest_data[0xbU];
    __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[0xcU] 
        = vlSelf->tb_sha512__DOT__digest_data[0xcU];
    __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[0xdU] 
        = vlSelf->tb_sha512__DOT__digest_data[0xdU];
    __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[0xeU] 
        = vlSelf->tb_sha512__DOT__digest_data[0xeU];
    __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[0xfU] 
        = vlSelf->tb_sha512__DOT__digest_data[0xfU];
    if ((0U == ((((((((((((((((Vtb_sha512__ConstPool__CONST_h066943bf_0[0U] 
                               ^ __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[0U]) 
                              | (Vtb_sha512__ConstPool__CONST_h066943bf_0[1U] 
                                 ^ __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[1U])) 
                             | (Vtb_sha512__ConstPool__CONST_h066943bf_0[2U] 
                                ^ __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[2U])) 
                            | (Vtb_sha512__ConstPool__CONST_h066943bf_0[3U] 
                               ^ __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[3U])) 
                           | (Vtb_sha512__ConstPool__CONST_h066943bf_0[4U] 
                              ^ __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[4U])) 
                          | (Vtb_sha512__ConstPool__CONST_h066943bf_0[5U] 
                             ^ __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[5U])) 
                         | (Vtb_sha512__ConstPool__CONST_h066943bf_0[6U] 
                            ^ __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[6U])) 
                        | (Vtb_sha512__ConstPool__CONST_h066943bf_0[7U] 
                           ^ __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[7U])) 
                       | (Vtb_sha512__ConstPool__CONST_h066943bf_0[8U] 
                          ^ __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[8U])) 
                      | (Vtb_sha512__ConstPool__CONST_h066943bf_0[9U] 
                         ^ __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[9U])) 
                     | (Vtb_sha512__ConstPool__CONST_h066943bf_0[0xaU] 
                        ^ __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[0xaU])) 
                    | (Vtb_sha512__ConstPool__CONST_h066943bf_0[0xbU] 
                       ^ __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[0xbU])) 
                   | (Vtb_sha512__ConstPool__CONST_h066943bf_0[0xcU] 
                      ^ __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[0xcU])) 
                  | (Vtb_sha512__ConstPool__CONST_h066943bf_0[0xdU] 
                     ^ __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[0xdU])) 
                 | (Vtb_sha512__ConstPool__CONST_h066943bf_0[0xeU] 
                    ^ __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[0xeU])) 
                | (Vtb_sha512__ConstPool__CONST_h066943bf_0[0xfU] 
                   ^ __Vtask_tb_sha512__DOT__double_block_test__227__masked_data1[0xfU])))) {
        VL_WRITEF("TC%01# final block: OK.\n",32,tb_sha512__DOT__tc_ctr);
    } else {
        tb_sha512__DOT__error_ctr = ((IData)(1U) + tb_sha512__DOT__error_ctr);
        VL_WRITEF("TC%01#: ERROR in final digest\nTC%01#: Expected: 0x%0128x\nTC%01#: Got:      0x%0128x\n",
                  32,tb_sha512__DOT__tc_ctr,32,tb_sha512__DOT__tc_ctr,
                  512,__Vtask_tb_sha512__DOT__double_block_test__227__expected1.data(),
                  32,tb_sha512__DOT__tc_ctr,512,__Vtask_tb_sha512__DOT__double_block_test__227__masked_data1.data());
    }
    VL_WRITEF("*** TC%01# - Double block test done.\n",
              32,tb_sha512__DOT__tc_ctr);
    tb_sha512__DOT__tc_ctr = ((IData)(1U) + tb_sha512__DOT__tc_ctr);
    __Vtask_tb_sha512__DOT__double_block_test__335__expected1[0U] = 0U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected1[1U] = 0U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected1[2U] = 0U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected1[3U] = 0U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected1[4U] = 0U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected1[5U] = 0U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected1[6U] = 0U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected1[7U] = 0U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected1[8U] = 0U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected1[9U] = 0x68674af9U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected1[0xaU] = 0x4fe40e72U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected1[0xbU] = 0x35d66473U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected1[0xcU] = 0xb0c4533U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected1[0xdU] = 0x30819264U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected1[0xeU] = 0x94d60b23U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected1[0xfU] = 0x23fec5bbU;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected0[0U] = 0x700c35b3U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected0[1U] = 0xe6c0f55eU;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected0[2U] = 0x135486f8U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected0[3U] = 0x5319224bU;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected0[4U] = 0xf4737fd7U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected0[5U] = 0x6debaae2U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected0[6U] = 0xeed49509U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected0[7U] = 0x25852563U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected0[8U] = 0x45861086U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected0[9U] = 0x54ea2966U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected0[0xaU] = 0x89c412bbU;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected0[0xbU] = 0x1417ed9eU;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected0[0xcU] = 0x74a8f9efU;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected0[0xdU] = 0x5fe35e26U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected0[0xeU] = 0xb7823ce7U;
    __Vtask_tb_sha512__DOT__double_block_test__335__expected0[0xfU] = 0x9606cb2dU;
    VL_WRITEF("*** TC%01# - Double block test started.\n",
              32,tb_sha512__DOT__tc_ctr);
    vlSelf->tb_sha512__DOT__tb_address = 8U;
    vlSelf->tb_sha512__DOT__tb_cs = 0U;
    vlSelf->tb_sha512__DOT__tb_we = 0U;
    tb_sha512__DOT__read_data = 0U;
    while ((0U == tb_sha512__DOT__read_data)) {
        vlSelf->tb_sha512__DOT__tb_address = 9U;
        vlSelf->tb_sha512__DOT__tb_we = 0U;
        tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
        vlSelf->tb_sha512__DOT__tb_cs = 0U;
    }
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xfU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xeU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xdU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xcU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xbU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xaU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[9U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[8U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[7U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[6U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[5U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[4U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[3U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[2U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[1U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0U] = tb_sha512__DOT__read_data;
    if ((0U == ((((((((((((((((Vtb_sha512__ConstPool__CONST_hae569943_0[0U] 
                               ^ vlSelf->tb_sha512__DOT__digest_data[0U]) 
                              | (Vtb_sha512__ConstPool__CONST_hae569943_0[1U] 
                                 ^ vlSelf->tb_sha512__DOT__digest_data[1U])) 
                             | (Vtb_sha512__ConstPool__CONST_hae569943_0[2U] 
                                ^ vlSelf->tb_sha512__DOT__digest_data[2U])) 
                            | (Vtb_sha512__ConstPool__CONST_hae569943_0[3U] 
                               ^ vlSelf->tb_sha512__DOT__digest_data[3U])) 
                           | (Vtb_sha512__ConstPool__CONST_hae569943_0[4U] 
                              ^ vlSelf->tb_sha512__DOT__digest_data[4U])) 
                          | (Vtb_sha512__ConstPool__CONST_hae569943_0[5U] 
                             ^ vlSelf->tb_sha512__DOT__digest_data[5U])) 
                         | (Vtb_sha512__ConstPool__CONST_hae569943_0[6U] 
                            ^ vlSelf->tb_sha512__DOT__digest_data[6U])) 
                        | (Vtb_sha512__ConstPool__CONST_hae569943_0[7U] 
                           ^ vlSelf->tb_sha512__DOT__digest_data[7U])) 
                       | (Vtb_sha512__ConstPool__CONST_hae569943_0[8U] 
                          ^ vlSelf->tb_sha512__DOT__digest_data[8U])) 
                      | (Vtb_sha512__ConstPool__CONST_hae569943_0[9U] 
                         ^ vlSelf->tb_sha512__DOT__digest_data[9U])) 
                     | (Vtb_sha512__ConstPool__CONST_hae569943_0[0xaU] 
                        ^ vlSelf->tb_sha512__DOT__digest_data[0xaU])) 
                    | (Vtb_sha512__ConstPool__CONST_hae569943_0[0xbU] 
                       ^ vlSelf->tb_sha512__DOT__digest_data[0xbU])) 
                   | (Vtb_sha512__ConstPool__CONST_hae569943_0[0xcU] 
                      ^ vlSelf->tb_sha512__DOT__digest_data[0xcU])) 
                  | (Vtb_sha512__ConstPool__CONST_hae569943_0[0xdU] 
                     ^ vlSelf->tb_sha512__DOT__digest_data[0xdU])) 
                 | (Vtb_sha512__ConstPool__CONST_hae569943_0[0xeU] 
                    ^ vlSelf->tb_sha512__DOT__digest_data[0xeU])) 
                | (Vtb_sha512__ConstPool__CONST_hae569943_0[0xfU] 
                   ^ vlSelf->tb_sha512__DOT__digest_data[0xfU])))) {
        VL_WRITEF("TC%01# first block: OK.\n",32,tb_sha512__DOT__tc_ctr);
    } else {
        tb_sha512__DOT__error_ctr = ((IData)(1U) + tb_sha512__DOT__error_ctr);
        VL_WRITEF("TC%01#: ERROR in first digest\nTC%01#: Expected: 0x%064x\nTC%01#: Got:      0x%064x\n",
                  32,tb_sha512__DOT__tc_ctr,32,tb_sha512__DOT__tc_ctr,
                  512,__Vtask_tb_sha512__DOT__double_block_test__335__expected0.data(),
                  32,tb_sha512__DOT__tc_ctr,512,vlSelf->tb_sha512__DOT__digest_data.data());
    }
    vlSelf->tb_sha512__DOT__tb_address = 8U;
    vlSelf->tb_sha512__DOT__tb_cs = 0U;
    vlSelf->tb_sha512__DOT__tb_we = 0U;
    tb_sha512__DOT__read_data = 0U;
    while ((0U == tb_sha512__DOT__read_data)) {
        vlSelf->tb_sha512__DOT__tb_address = 9U;
        vlSelf->tb_sha512__DOT__tb_we = 0U;
        tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
        vlSelf->tb_sha512__DOT__tb_cs = 0U;
    }
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xfU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xeU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xdU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xcU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xbU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xaU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[9U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[8U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[7U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[6U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[5U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[4U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[3U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[2U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[1U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0U] = tb_sha512__DOT__read_data;
    __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[0U] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[0U] 
           & vlSelf->tb_sha512__DOT__digest_data[0U]);
    __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[1U] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[1U] 
           & vlSelf->tb_sha512__DOT__digest_data[1U]);
    __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[2U] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[2U] 
           & vlSelf->tb_sha512__DOT__digest_data[2U]);
    __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[3U] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[3U] 
           & vlSelf->tb_sha512__DOT__digest_data[3U]);
    __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[4U] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[4U] 
           & vlSelf->tb_sha512__DOT__digest_data[4U]);
    __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[5U] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[5U] 
           & vlSelf->tb_sha512__DOT__digest_data[5U]);
    __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[6U] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[6U] 
           & vlSelf->tb_sha512__DOT__digest_data[6U]);
    __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[7U] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[7U] 
           & vlSelf->tb_sha512__DOT__digest_data[7U]);
    __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[8U] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[8U] 
           & vlSelf->tb_sha512__DOT__digest_data[8U]);
    __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[9U] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[9U] 
           & vlSelf->tb_sha512__DOT__digest_data[9U]);
    __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[0xaU] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[0xaU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xaU]);
    __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[0xbU] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[0xbU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xbU]);
    __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[0xcU] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[0xcU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xcU]);
    __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[0xdU] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[0xdU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xdU]);
    __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[0xeU] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[0xeU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xeU]);
    __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[0xfU] 
        = (Vtb_sha512__ConstPool__CONST_hc527def4_0[0xfU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xfU]);
    if ((0U == ((((((((((((((((Vtb_sha512__ConstPool__CONST_h6100fab5_0[0U] 
                               ^ __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[0U]) 
                              | (Vtb_sha512__ConstPool__CONST_h6100fab5_0[1U] 
                                 ^ __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[1U])) 
                             | (Vtb_sha512__ConstPool__CONST_h6100fab5_0[2U] 
                                ^ __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[2U])) 
                            | (Vtb_sha512__ConstPool__CONST_h6100fab5_0[3U] 
                               ^ __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[3U])) 
                           | (Vtb_sha512__ConstPool__CONST_h6100fab5_0[4U] 
                              ^ __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[4U])) 
                          | (Vtb_sha512__ConstPool__CONST_h6100fab5_0[5U] 
                             ^ __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[5U])) 
                         | (Vtb_sha512__ConstPool__CONST_h6100fab5_0[6U] 
                            ^ __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[6U])) 
                        | (Vtb_sha512__ConstPool__CONST_h6100fab5_0[7U] 
                           ^ __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[7U])) 
                       | (Vtb_sha512__ConstPool__CONST_h6100fab5_0[8U] 
                          ^ __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[8U])) 
                      | (Vtb_sha512__ConstPool__CONST_h6100fab5_0[9U] 
                         ^ __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[9U])) 
                     | (Vtb_sha512__ConstPool__CONST_h6100fab5_0[0xaU] 
                        ^ __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[0xaU])) 
                    | (Vtb_sha512__ConstPool__CONST_h6100fab5_0[0xbU] 
                       ^ __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[0xbU])) 
                   | (Vtb_sha512__ConstPool__CONST_h6100fab5_0[0xcU] 
                      ^ __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[0xcU])) 
                  | (Vtb_sha512__ConstPool__CONST_h6100fab5_0[0xdU] 
                     ^ __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[0xdU])) 
                 | (Vtb_sha512__ConstPool__CONST_h6100fab5_0[0xeU] 
                    ^ __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[0xeU])) 
                | (Vtb_sha512__ConstPool__CONST_h6100fab5_0[0xfU] 
                   ^ __Vtask_tb_sha512__DOT__double_block_test__335__masked_data1[0xfU])))) {
        VL_WRITEF("TC%01# final block: OK.\n",32,tb_sha512__DOT__tc_ctr);
    } else {
        tb_sha512__DOT__error_ctr = ((IData)(1U) + tb_sha512__DOT__error_ctr);
        VL_WRITEF("TC%01#: ERROR in final digest\nTC%01#: Expected: 0x%0128x\nTC%01#: Got:      0x%0128x\n",
                  32,tb_sha512__DOT__tc_ctr,32,tb_sha512__DOT__tc_ctr,
                  512,__Vtask_tb_sha512__DOT__double_block_test__335__expected1.data(),
                  32,tb_sha512__DOT__tc_ctr,512,__Vtask_tb_sha512__DOT__double_block_test__335__masked_data1.data());
    }
    VL_WRITEF("*** TC%01# - Double block test done.\n",
              32,tb_sha512__DOT__tc_ctr);
    tb_sha512__DOT__tc_ctr = ((IData)(1U) + tb_sha512__DOT__tc_ctr);
    __Vtask_tb_sha512__DOT__double_block_test__443__expected1[0U] = 0U;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected1[1U] = 0U;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected1[2U] = 0U;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected1[3U] = 0U;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected1[4U] = 0U;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected1[5U] = 0U;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected1[6U] = 0U;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected1[7U] = 0U;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected1[8U] = 0xe19b563aU;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected1[9U] = 0x6feac861U;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected1[0xaU] = 0xf83ee614U;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected1[0xbU] = 0x65cb9d3eU;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected1[0xcU] = 0x121d31beU;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected1[0xdU] = 0x40da3988U;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected1[0xeU] = 0xfb8690f8U;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected1[0xfU] = 0x3928e184U;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected0[0U] = 0xf11867e1U;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected0[1U] = 0x51807937U;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected0[2U] = 0xceed9c5bU;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected0[3U] = 0xbf2ea614U;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected0[4U] = 0x8e88e3ecU;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected0[5U] = 0x809b348eU;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected0[6U] = 0x83c44c7cU;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected0[7U] = 0xae241754U;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected0[8U] = 0xb194048dU;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected0[9U] = 0x953ff7a2U;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected0[0xaU] = 0x30419d1eU;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected0[0xbU] = 0xe8e94087U;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected0[0xcU] = 0xc7afb288U;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected0[0xdU] = 0xcbbbc42cU;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected0[0xeU] = 0x81311f8bU;
    __Vtask_tb_sha512__DOT__double_block_test__443__expected0[0xfU] = 0x8dd99eb0U;
    VL_WRITEF("*** TC%01# - Double block test started.\n",
              32,tb_sha512__DOT__tc_ctr);
    vlSelf->tb_sha512__DOT__tb_address = 8U;
    vlSelf->tb_sha512__DOT__tb_cs = 0U;
    vlSelf->tb_sha512__DOT__tb_we = 0U;
    tb_sha512__DOT__read_data = 0U;
    while ((0U == tb_sha512__DOT__read_data)) {
        vlSelf->tb_sha512__DOT__tb_address = 9U;
        vlSelf->tb_sha512__DOT__tb_we = 0U;
        tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
        vlSelf->tb_sha512__DOT__tb_cs = 0U;
    }
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xfU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xeU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xdU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xcU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xbU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xaU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[9U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[8U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[7U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[6U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[5U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[4U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[3U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[2U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[1U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0U] = tb_sha512__DOT__read_data;
    if ((0U == ((((((((((((((((Vtb_sha512__ConstPool__CONST_h2fd963c6_0[0U] 
                               ^ vlSelf->tb_sha512__DOT__digest_data[0U]) 
                              | (Vtb_sha512__ConstPool__CONST_h2fd963c6_0[1U] 
                                 ^ vlSelf->tb_sha512__DOT__digest_data[1U])) 
                             | (Vtb_sha512__ConstPool__CONST_h2fd963c6_0[2U] 
                                ^ vlSelf->tb_sha512__DOT__digest_data[2U])) 
                            | (Vtb_sha512__ConstPool__CONST_h2fd963c6_0[3U] 
                               ^ vlSelf->tb_sha512__DOT__digest_data[3U])) 
                           | (Vtb_sha512__ConstPool__CONST_h2fd963c6_0[4U] 
                              ^ vlSelf->tb_sha512__DOT__digest_data[4U])) 
                          | (Vtb_sha512__ConstPool__CONST_h2fd963c6_0[5U] 
                             ^ vlSelf->tb_sha512__DOT__digest_data[5U])) 
                         | (Vtb_sha512__ConstPool__CONST_h2fd963c6_0[6U] 
                            ^ vlSelf->tb_sha512__DOT__digest_data[6U])) 
                        | (Vtb_sha512__ConstPool__CONST_h2fd963c6_0[7U] 
                           ^ vlSelf->tb_sha512__DOT__digest_data[7U])) 
                       | (Vtb_sha512__ConstPool__CONST_h2fd963c6_0[8U] 
                          ^ vlSelf->tb_sha512__DOT__digest_data[8U])) 
                      | (Vtb_sha512__ConstPool__CONST_h2fd963c6_0[9U] 
                         ^ vlSelf->tb_sha512__DOT__digest_data[9U])) 
                     | (Vtb_sha512__ConstPool__CONST_h2fd963c6_0[0xaU] 
                        ^ vlSelf->tb_sha512__DOT__digest_data[0xaU])) 
                    | (Vtb_sha512__ConstPool__CONST_h2fd963c6_0[0xbU] 
                       ^ vlSelf->tb_sha512__DOT__digest_data[0xbU])) 
                   | (Vtb_sha512__ConstPool__CONST_h2fd963c6_0[0xcU] 
                      ^ vlSelf->tb_sha512__DOT__digest_data[0xcU])) 
                  | (Vtb_sha512__ConstPool__CONST_h2fd963c6_0[0xdU] 
                     ^ vlSelf->tb_sha512__DOT__digest_data[0xdU])) 
                 | (Vtb_sha512__ConstPool__CONST_h2fd963c6_0[0xeU] 
                    ^ vlSelf->tb_sha512__DOT__digest_data[0xeU])) 
                | (Vtb_sha512__ConstPool__CONST_h2fd963c6_0[0xfU] 
                   ^ vlSelf->tb_sha512__DOT__digest_data[0xfU])))) {
        VL_WRITEF("TC%01# first block: OK.\n",32,tb_sha512__DOT__tc_ctr);
    } else {
        tb_sha512__DOT__error_ctr = ((IData)(1U) + tb_sha512__DOT__error_ctr);
        VL_WRITEF("TC%01#: ERROR in first digest\nTC%01#: Expected: 0x%064x\nTC%01#: Got:      0x%064x\n",
                  32,tb_sha512__DOT__tc_ctr,32,tb_sha512__DOT__tc_ctr,
                  512,__Vtask_tb_sha512__DOT__double_block_test__443__expected0.data(),
                  32,tb_sha512__DOT__tc_ctr,512,vlSelf->tb_sha512__DOT__digest_data.data());
    }
    vlSelf->tb_sha512__DOT__tb_address = 8U;
    vlSelf->tb_sha512__DOT__tb_cs = 0U;
    vlSelf->tb_sha512__DOT__tb_we = 0U;
    tb_sha512__DOT__read_data = 0U;
    while ((0U == tb_sha512__DOT__read_data)) {
        vlSelf->tb_sha512__DOT__tb_address = 9U;
        vlSelf->tb_sha512__DOT__tb_we = 0U;
        tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
        vlSelf->tb_sha512__DOT__tb_cs = 0U;
    }
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xfU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xeU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xdU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xcU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xbU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xaU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[9U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[8U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[7U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[6U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[5U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[4U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[3U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[2U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[1U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0U] = tb_sha512__DOT__read_data;
    __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[0U] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[0U] 
           & vlSelf->tb_sha512__DOT__digest_data[0U]);
    __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[1U] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[1U] 
           & vlSelf->tb_sha512__DOT__digest_data[1U]);
    __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[2U] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[2U] 
           & vlSelf->tb_sha512__DOT__digest_data[2U]);
    __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[3U] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[3U] 
           & vlSelf->tb_sha512__DOT__digest_data[3U]);
    __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[4U] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[4U] 
           & vlSelf->tb_sha512__DOT__digest_data[4U]);
    __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[5U] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[5U] 
           & vlSelf->tb_sha512__DOT__digest_data[5U]);
    __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[6U] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[6U] 
           & vlSelf->tb_sha512__DOT__digest_data[6U]);
    __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[7U] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[7U] 
           & vlSelf->tb_sha512__DOT__digest_data[7U]);
    __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[8U] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[8U] 
           & vlSelf->tb_sha512__DOT__digest_data[8U]);
    __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[9U] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[9U] 
           & vlSelf->tb_sha512__DOT__digest_data[9U]);
    __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[0xaU] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[0xaU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xaU]);
    __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[0xbU] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[0xbU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xbU]);
    __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[0xcU] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[0xcU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xcU]);
    __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[0xdU] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[0xdU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xdU]);
    __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[0xeU] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[0xeU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xeU]);
    __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[0xfU] 
        = (Vtb_sha512__ConstPool__CONST_h3f7031e1_0[0xfU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xfU]);
    if ((0U == ((((((((((((((((Vtb_sha512__ConstPool__CONST_h85b866ec_0[0U] 
                               ^ __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[0U]) 
                              | (Vtb_sha512__ConstPool__CONST_h85b866ec_0[1U] 
                                 ^ __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[1U])) 
                             | (Vtb_sha512__ConstPool__CONST_h85b866ec_0[2U] 
                                ^ __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[2U])) 
                            | (Vtb_sha512__ConstPool__CONST_h85b866ec_0[3U] 
                               ^ __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[3U])) 
                           | (Vtb_sha512__ConstPool__CONST_h85b866ec_0[4U] 
                              ^ __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[4U])) 
                          | (Vtb_sha512__ConstPool__CONST_h85b866ec_0[5U] 
                             ^ __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[5U])) 
                         | (Vtb_sha512__ConstPool__CONST_h85b866ec_0[6U] 
                            ^ __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[6U])) 
                        | (Vtb_sha512__ConstPool__CONST_h85b866ec_0[7U] 
                           ^ __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[7U])) 
                       | (Vtb_sha512__ConstPool__CONST_h85b866ec_0[8U] 
                          ^ __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[8U])) 
                      | (Vtb_sha512__ConstPool__CONST_h85b866ec_0[9U] 
                         ^ __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[9U])) 
                     | (Vtb_sha512__ConstPool__CONST_h85b866ec_0[0xaU] 
                        ^ __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[0xaU])) 
                    | (Vtb_sha512__ConstPool__CONST_h85b866ec_0[0xbU] 
                       ^ __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[0xbU])) 
                   | (Vtb_sha512__ConstPool__CONST_h85b866ec_0[0xcU] 
                      ^ __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[0xcU])) 
                  | (Vtb_sha512__ConstPool__CONST_h85b866ec_0[0xdU] 
                     ^ __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[0xdU])) 
                 | (Vtb_sha512__ConstPool__CONST_h85b866ec_0[0xeU] 
                    ^ __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[0xeU])) 
                | (Vtb_sha512__ConstPool__CONST_h85b866ec_0[0xfU] 
                   ^ __Vtask_tb_sha512__DOT__double_block_test__443__masked_data1[0xfU])))) {
        VL_WRITEF("TC%01# final block: OK.\n",32,tb_sha512__DOT__tc_ctr);
    } else {
        tb_sha512__DOT__error_ctr = ((IData)(1U) + tb_sha512__DOT__error_ctr);
        VL_WRITEF("TC%01#: ERROR in final digest\nTC%01#: Expected: 0x%0128x\nTC%01#: Got:      0x%0128x\n",
                  32,tb_sha512__DOT__tc_ctr,32,tb_sha512__DOT__tc_ctr,
                  512,__Vtask_tb_sha512__DOT__double_block_test__443__expected1.data(),
                  32,tb_sha512__DOT__tc_ctr,512,__Vtask_tb_sha512__DOT__double_block_test__443__masked_data1.data());
    }
    VL_WRITEF("*** TC%01# - Double block test done.\n",
              32,tb_sha512__DOT__tc_ctr);
    tb_sha512__DOT__tc_ctr = ((IData)(1U) + tb_sha512__DOT__tc_ctr);
    __Vtask_tb_sha512__DOT__double_block_test__551__expected1[0U] = 0U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected1[1U] = 0U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected1[2U] = 0U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected1[3U] = 0U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected1[4U] = 0x91746039U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected1[5U] = 0x66c3e9faU;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected1[6U] = 0x557e2db9U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected1[7U] = 0xfcc7c71aU;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected1[8U] = 0xe3b0f712U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected1[9U] = 0x2fa08086U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected1[0xaU] = 0x3b3b05d2U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected1[0xbU] = 0x53111b17U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected1[0xcU] = 0x82cd1b47U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected1[0xdU] = 0x3d192fc7U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected1[0xeU] = 0xf71147e8U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected1[0xfU] = 0x9330c33U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected0[0U] = 0x81e6a2c5U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected0[1U] = 0x8f2ebe9aU;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected0[2U] = 0x60feb519U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected0[3U] = 0x37eb9a66U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected0[4U] = 0xe2ccf0a9U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected0[5U] = 0x17b61a85U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected0[6U] = 0x9ebb4d64U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected0[7U] = 0xc662113eU;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected0[8U] = 0x56acaff7U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected0[9U] = 0xf6352ca1U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected0[0xaU] = 0x796c1a88U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected0[0xbU] = 0x15a2173U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected0[0xcU] = 0xa673c741U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected0[0xdU] = 0xeaae96d1U;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected0[0xeU] = 0x5fd58e0bU;
    __Vtask_tb_sha512__DOT__double_block_test__551__expected0[0xfU] = 0x2a7f1d89U;
    VL_WRITEF("*** TC%01# - Double block test started.\n",
              32,tb_sha512__DOT__tc_ctr);
    vlSelf->tb_sha512__DOT__tb_address = 8U;
    vlSelf->tb_sha512__DOT__tb_cs = 0U;
    vlSelf->tb_sha512__DOT__tb_we = 0U;
    tb_sha512__DOT__read_data = 0U;
    while ((0U == tb_sha512__DOT__read_data)) {
        vlSelf->tb_sha512__DOT__tb_address = 9U;
        vlSelf->tb_sha512__DOT__tb_we = 0U;
        tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
        vlSelf->tb_sha512__DOT__tb_cs = 0U;
    }
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xfU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xeU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xdU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xcU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xbU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xaU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[9U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[8U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[7U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[6U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[5U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[4U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[3U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[2U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[1U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0U] = tb_sha512__DOT__read_data;
    if ((0U == ((((((((((((((((Vtb_sha512__ConstPool__CONST_hb18fb88b_0[0U] 
                               ^ vlSelf->tb_sha512__DOT__digest_data[0U]) 
                              | (Vtb_sha512__ConstPool__CONST_hb18fb88b_0[1U] 
                                 ^ vlSelf->tb_sha512__DOT__digest_data[1U])) 
                             | (Vtb_sha512__ConstPool__CONST_hb18fb88b_0[2U] 
                                ^ vlSelf->tb_sha512__DOT__digest_data[2U])) 
                            | (Vtb_sha512__ConstPool__CONST_hb18fb88b_0[3U] 
                               ^ vlSelf->tb_sha512__DOT__digest_data[3U])) 
                           | (Vtb_sha512__ConstPool__CONST_hb18fb88b_0[4U] 
                              ^ vlSelf->tb_sha512__DOT__digest_data[4U])) 
                          | (Vtb_sha512__ConstPool__CONST_hb18fb88b_0[5U] 
                             ^ vlSelf->tb_sha512__DOT__digest_data[5U])) 
                         | (Vtb_sha512__ConstPool__CONST_hb18fb88b_0[6U] 
                            ^ vlSelf->tb_sha512__DOT__digest_data[6U])) 
                        | (Vtb_sha512__ConstPool__CONST_hb18fb88b_0[7U] 
                           ^ vlSelf->tb_sha512__DOT__digest_data[7U])) 
                       | (Vtb_sha512__ConstPool__CONST_hb18fb88b_0[8U] 
                          ^ vlSelf->tb_sha512__DOT__digest_data[8U])) 
                      | (Vtb_sha512__ConstPool__CONST_hb18fb88b_0[9U] 
                         ^ vlSelf->tb_sha512__DOT__digest_data[9U])) 
                     | (Vtb_sha512__ConstPool__CONST_hb18fb88b_0[0xaU] 
                        ^ vlSelf->tb_sha512__DOT__digest_data[0xaU])) 
                    | (Vtb_sha512__ConstPool__CONST_hb18fb88b_0[0xbU] 
                       ^ vlSelf->tb_sha512__DOT__digest_data[0xbU])) 
                   | (Vtb_sha512__ConstPool__CONST_hb18fb88b_0[0xcU] 
                      ^ vlSelf->tb_sha512__DOT__digest_data[0xcU])) 
                  | (Vtb_sha512__ConstPool__CONST_hb18fb88b_0[0xdU] 
                     ^ vlSelf->tb_sha512__DOT__digest_data[0xdU])) 
                 | (Vtb_sha512__ConstPool__CONST_hb18fb88b_0[0xeU] 
                    ^ vlSelf->tb_sha512__DOT__digest_data[0xeU])) 
                | (Vtb_sha512__ConstPool__CONST_hb18fb88b_0[0xfU] 
                   ^ vlSelf->tb_sha512__DOT__digest_data[0xfU])))) {
        VL_WRITEF("TC%01# first block: OK.\n",32,tb_sha512__DOT__tc_ctr);
    } else {
        tb_sha512__DOT__error_ctr = ((IData)(1U) + tb_sha512__DOT__error_ctr);
        VL_WRITEF("TC%01#: ERROR in first digest\nTC%01#: Expected: 0x%064x\nTC%01#: Got:      0x%064x\n",
                  32,tb_sha512__DOT__tc_ctr,32,tb_sha512__DOT__tc_ctr,
                  512,__Vtask_tb_sha512__DOT__double_block_test__551__expected0.data(),
                  32,tb_sha512__DOT__tc_ctr,512,vlSelf->tb_sha512__DOT__digest_data.data());
    }
    vlSelf->tb_sha512__DOT__tb_address = 8U;
    vlSelf->tb_sha512__DOT__tb_cs = 0U;
    vlSelf->tb_sha512__DOT__tb_we = 0U;
    tb_sha512__DOT__read_data = 0U;
    while ((0U == tb_sha512__DOT__read_data)) {
        vlSelf->tb_sha512__DOT__tb_address = 9U;
        vlSelf->tb_sha512__DOT__tb_we = 0U;
        tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
        vlSelf->tb_sha512__DOT__tb_cs = 0U;
    }
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xfU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xeU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xdU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xcU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xbU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xaU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[9U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[8U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[7U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[6U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[5U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[4U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[3U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[2U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[1U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0U] = tb_sha512__DOT__read_data;
    __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[0U] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[0U] 
           & vlSelf->tb_sha512__DOT__digest_data[0U]);
    __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[1U] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[1U] 
           & vlSelf->tb_sha512__DOT__digest_data[1U]);
    __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[2U] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[2U] 
           & vlSelf->tb_sha512__DOT__digest_data[2U]);
    __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[3U] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[3U] 
           & vlSelf->tb_sha512__DOT__digest_data[3U]);
    __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[4U] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[4U] 
           & vlSelf->tb_sha512__DOT__digest_data[4U]);
    __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[5U] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[5U] 
           & vlSelf->tb_sha512__DOT__digest_data[5U]);
    __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[6U] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[6U] 
           & vlSelf->tb_sha512__DOT__digest_data[6U]);
    __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[7U] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[7U] 
           & vlSelf->tb_sha512__DOT__digest_data[7U]);
    __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[8U] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[8U] 
           & vlSelf->tb_sha512__DOT__digest_data[8U]);
    __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[9U] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[9U] 
           & vlSelf->tb_sha512__DOT__digest_data[9U]);
    __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[0xaU] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[0xaU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xaU]);
    __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[0xbU] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[0xbU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xbU]);
    __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[0xcU] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[0xcU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xcU]);
    __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[0xdU] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[0xdU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xdU]);
    __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[0xeU] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[0xeU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xeU]);
    __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[0xfU] 
        = (Vtb_sha512__ConstPool__CONST_h46896a18_0[0xfU] 
           & vlSelf->tb_sha512__DOT__digest_data[0xfU]);
    if ((0U == ((((((((((((((((Vtb_sha512__ConstPool__CONST_ha7c7af92_0[0U] 
                               ^ __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[0U]) 
                              | (Vtb_sha512__ConstPool__CONST_ha7c7af92_0[1U] 
                                 ^ __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[1U])) 
                             | (Vtb_sha512__ConstPool__CONST_ha7c7af92_0[2U] 
                                ^ __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[2U])) 
                            | (Vtb_sha512__ConstPool__CONST_ha7c7af92_0[3U] 
                               ^ __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[3U])) 
                           | (Vtb_sha512__ConstPool__CONST_ha7c7af92_0[4U] 
                              ^ __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[4U])) 
                          | (Vtb_sha512__ConstPool__CONST_ha7c7af92_0[5U] 
                             ^ __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[5U])) 
                         | (Vtb_sha512__ConstPool__CONST_ha7c7af92_0[6U] 
                            ^ __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[6U])) 
                        | (Vtb_sha512__ConstPool__CONST_ha7c7af92_0[7U] 
                           ^ __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[7U])) 
                       | (Vtb_sha512__ConstPool__CONST_ha7c7af92_0[8U] 
                          ^ __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[8U])) 
                      | (Vtb_sha512__ConstPool__CONST_ha7c7af92_0[9U] 
                         ^ __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[9U])) 
                     | (Vtb_sha512__ConstPool__CONST_ha7c7af92_0[0xaU] 
                        ^ __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[0xaU])) 
                    | (Vtb_sha512__ConstPool__CONST_ha7c7af92_0[0xbU] 
                       ^ __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[0xbU])) 
                   | (Vtb_sha512__ConstPool__CONST_ha7c7af92_0[0xcU] 
                      ^ __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[0xcU])) 
                  | (Vtb_sha512__ConstPool__CONST_ha7c7af92_0[0xdU] 
                     ^ __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[0xdU])) 
                 | (Vtb_sha512__ConstPool__CONST_ha7c7af92_0[0xeU] 
                    ^ __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[0xeU])) 
                | (Vtb_sha512__ConstPool__CONST_ha7c7af92_0[0xfU] 
                   ^ __Vtask_tb_sha512__DOT__double_block_test__551__masked_data1[0xfU])))) {
        VL_WRITEF("TC%01# final block: OK.\n",32,tb_sha512__DOT__tc_ctr);
    } else {
        tb_sha512__DOT__error_ctr = ((IData)(1U) + tb_sha512__DOT__error_ctr);
        VL_WRITEF("TC%01#: ERROR in final digest\nTC%01#: Expected: 0x%0128x\nTC%01#: Got:      0x%0128x\n",
                  32,tb_sha512__DOT__tc_ctr,32,tb_sha512__DOT__tc_ctr,
                  512,__Vtask_tb_sha512__DOT__double_block_test__551__expected1.data(),
                  32,tb_sha512__DOT__tc_ctr,512,__Vtask_tb_sha512__DOT__double_block_test__551__masked_data1.data());
    }
    VL_WRITEF("*** TC%01# - Double block test done.\n",
              32,tb_sha512__DOT__tc_ctr);
    tb_sha512__DOT__tc_ctr = ((IData)(1U) + tb_sha512__DOT__tc_ctr);
    VL_WRITEF("*** TC%01# - Work factor test started.\n",
              32,tb_sha512__DOT__tc_ctr);
    vlSelf->tb_sha512__DOT__tb_address = 8U;
    vlSelf->tb_sha512__DOT__tb_write_data = 0x8dU;
    vlSelf->tb_sha512__DOT__tb_cs = 0U;
    vlSelf->tb_sha512__DOT__tb_we = 0U;
    tb_sha512__DOT__read_data = 0U;
    while ((0U == tb_sha512__DOT__read_data)) {
        vlSelf->tb_sha512__DOT__tb_address = 9U;
        vlSelf->tb_sha512__DOT__tb_we = 0U;
        tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
        vlSelf->tb_sha512__DOT__tb_cs = 0U;
    }
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xfU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xeU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xdU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xcU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xbU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[0xaU] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[9U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[8U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[7U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[6U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[5U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[4U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[3U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[2U] = tb_sha512__DOT__read_data;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__digest_data[1U] = tb_sha512__DOT__read_data;
    vlSelf->tb_sha512__DOT__tb_address = 0x4fU;
    vlSelf->tb_sha512__DOT__tb_we = 0U;
    tb_sha512__DOT__read_data = vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data;
    vlSelf->tb_sha512__DOT__tb_cs = 0U;
    vlSelf->tb_sha512__DOT__digest_data[0U] = tb_sha512__DOT__read_data;
    VL_WRITEF("*** TC%01# - Work factor test done.\n",
              32,tb_sha512__DOT__tc_ctr);
    tb_sha512__DOT__tc_ctr = ((IData)(1U) + tb_sha512__DOT__tc_ctr);
    VL_WRITEF("State of DUT\n------------\nInputs and outputs:\ncs = 0x0, we = 0x0\naddress = 0x4f\nwrite_data = 0x0000008d, read_data = 0x%08x\ntmp_read_data = 0x%08x\n\nControl and status:\nctrl = 0x%02x, status = 0x%02x\n\nMessage block:\nblock0  = 0x%08x, block1  = 0x%08x, block2  = 0x%08x,  block3  = 0x%08x\nblock4  = 0x%08x, block5  = 0x%08x, block6  = 0x%08x,  block7  = 0x%08x\nblock8  = 0x%08x, block9  = 0x%08x, block10 = 0x%08x,  block11 = 0x%08x\n",
              32,vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data,
              32,vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data,
              2,(((IData)(vlSelf->tb_sha512__DOT__dut__DOT__next_reg) 
                  << 1U) | (IData)(vlSelf->tb_sha512__DOT__dut__DOT__init_reg)),
              2,(((IData)(vlSelf->tb_sha512__DOT__dut__DOT__digest_valid_reg) 
                  << 1U) | (IData)(vlSelf->tb_sha512__DOT__dut__DOT__ready_reg)),
              32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [1U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [2U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [3U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [4U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [5U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [6U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [7U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [8U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [9U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0xaU],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0xbU]);
    VL_WRITEF("block12 = 0x%08x, block13 = 0x%08x, block14 = 0x%08x,  block15 = 0x%08x\nblock16 = 0x%08x, block17 = 0x%08x, block18 = 0x%08x,  block19 = 0x%08x\nblock20 = 0x%08x, block21 = 0x%08x, block22 = 0x%08x,  block23 = 0x%08x\nblock24 = 0x%08x, block25 = 0x%08x, block26 = 0x%08x,  block27 = 0x%08x\nblock28 = 0x%08x, block29 = 0x%08x, block30 = 0x%08x,  block31 = 0x%08x\n\nDigest:\ndigest = 0x%0128x\n\n",
              32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0xcU],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0xdU],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0xeU],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0xfU],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x10U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x11U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x12U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x13U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x14U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x15U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x16U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x17U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x18U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x19U],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x1aU],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x1bU],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x1cU],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x1dU],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x1eU],32,vlSelf->tb_sha512__DOT__dut__DOT__block_reg
              [0x1fU],512,vlSelf->tb_sha512__DOT__dut__DOT__digest_reg.data());
    if ((0U == tb_sha512__DOT__error_ctr)) {
        VL_WRITEF("*** All %02# test cases completed successfully.\n",
                  32,tb_sha512__DOT__tc_ctr);
    } else {
        VL_WRITEF("*** %02# test cases completed.\n*** %02# errors detected during testing.\n",
                  32,tb_sha512__DOT__tc_ctr,32,tb_sha512__DOT__error_ctr);
    }
    VL_WRITEF("   -- Testbench for sha512 done. --\n");
    VL_FINISH_MT("src/tb/tb_sha512.v", 782, "");
    vlSelf->tb_sha512__DOT__dut__DOT__work_factor_new = 0U;
    vlSelf->tb_sha512__DOT__dut__DOT__mode_new = 3U;
    vlSelf->tb_sha512__DOT__dut__DOT__next_new = 0U;
    vlSelf->tb_sha512__DOT__dut__DOT__init_new = 0U;
}

VL_ATTR_COLD void Vtb_sha512___024root___settle__TOP__5(Vtb_sha512___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sha512__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sha512___024root___settle__TOP__5\n"); );
    // Body
    vlSelf->tb_sha512__DOT__dut__DOT__work_factor_new = 0U;
    if (vlSelf->tb_sha512__DOT__tb_cs) {
        if (vlSelf->tb_sha512__DOT__tb_we) {
            if ((8U == (IData)(vlSelf->tb_sha512__DOT__tb_address))) {
                vlSelf->tb_sha512__DOT__dut__DOT__work_factor_new 
                    = (1U & (vlSelf->tb_sha512__DOT__tb_write_data 
                             >> 7U));
                vlSelf->tb_sha512__DOT__dut__DOT__mode_new = 3U;
                vlSelf->tb_sha512__DOT__dut__DOT__mode_new 
                    = (3U & (vlSelf->tb_sha512__DOT__tb_write_data 
                             >> 2U));
                vlSelf->tb_sha512__DOT__dut__DOT__next_new = 0U;
                vlSelf->tb_sha512__DOT__dut__DOT__next_new 
                    = (1U & (vlSelf->tb_sha512__DOT__tb_write_data 
                             >> 1U));
                vlSelf->tb_sha512__DOT__dut__DOT__init_new = 0U;
                vlSelf->tb_sha512__DOT__dut__DOT__init_new 
                    = (1U & vlSelf->tb_sha512__DOT__tb_write_data);
            } else {
                vlSelf->tb_sha512__DOT__dut__DOT__mode_new = 3U;
                vlSelf->tb_sha512__DOT__dut__DOT__next_new = 0U;
                vlSelf->tb_sha512__DOT__dut__DOT__init_new = 0U;
            }
        } else {
            vlSelf->tb_sha512__DOT__dut__DOT__mode_new = 3U;
            vlSelf->tb_sha512__DOT__dut__DOT__next_new = 0U;
            vlSelf->tb_sha512__DOT__dut__DOT__init_new = 0U;
        }
    } else {
        vlSelf->tb_sha512__DOT__dut__DOT__mode_new = 3U;
        vlSelf->tb_sha512__DOT__dut__DOT__next_new = 0U;
        vlSelf->tb_sha512__DOT__dut__DOT__init_new = 0U;
    }
}

VL_ATTR_COLD void Vtb_sha512___024root___eval_initial(Vtb_sha512___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sha512__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sha512___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP____VinpClk__TOP__tb_sha512__DOT__tb_clk 
        = vlSelf->__VinpClk__TOP__tb_sha512__DOT__tb_clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__tb_sha512__DOT__tb_reset_n 
        = vlSelf->__VinpClk__TOP__tb_sha512__DOT__tb_reset_n;
    Vtb_sha512___024root___initial__TOP__4(vlSelf);
}

VL_ATTR_COLD void Vtb_sha512___024root___eval_settle(Vtb_sha512___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sha512__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sha512___024root___eval_settle\n"); );
    // Body
    Vtb_sha512___024root___settle__TOP__2(vlSelf);
    Vtb_sha512___024root___settle__TOP__5(vlSelf);
}

VL_ATTR_COLD void Vtb_sha512___024root___final(Vtb_sha512___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sha512__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sha512___024root___final\n"); );
}

VL_ATTR_COLD void Vtb_sha512___024root___ctor_var_reset(Vtb_sha512___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sha512__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sha512___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_sha512__DOT__tb_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__tb_reset_n = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__tb_cs = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__tb_we = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__tb_address = VL_RAND_RESET_I(8);
    vlSelf->tb_sha512__DOT__tb_write_data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->tb_sha512__DOT__digest_data);
    vlSelf->tb_sha512__DOT__dut__DOT__init_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__dut__DOT__init_new = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__dut__DOT__next_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__dut__DOT__next_new = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__dut__DOT__ready_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__dut__DOT__work_factor_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__dut__DOT__work_factor_new = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__dut__DOT__work_factor_we = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__dut__DOT__mode_reg = VL_RAND_RESET_I(2);
    vlSelf->tb_sha512__DOT__dut__DOT__mode_new = VL_RAND_RESET_I(2);
    vlSelf->tb_sha512__DOT__dut__DOT__mode_we = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__dut__DOT__work_factor_num_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_sha512__DOT__dut__DOT__work_factor_num_we = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->tb_sha512__DOT__dut__DOT__block_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_sha512__DOT__dut__DOT__block_we = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->tb_sha512__DOT__dut__DOT__digest_reg);
    vlSelf->tb_sha512__DOT__dut__DOT__digest_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__dut__DOT__tmp_read_data = VL_RAND_RESET_I(32);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__a_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__a_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__b_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__b_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__c_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__c_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__d_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__d_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__e_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__e_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__f_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__f_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__g_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__g_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__h_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__h_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__a_h_we = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H0_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H0_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H1_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H1_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H2_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H2_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H3_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H3_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H4_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H4_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H5_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H5_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H6_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H6_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H7_reg = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H7_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__H_we = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_reg = VL_RAND_RESET_I(7);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_new = VL_RAND_RESET_I(7);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__round_ctr_we = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_new = VL_RAND_RESET_I(32);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__work_factor_ctr_we = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_new = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__ready_we = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_new = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__digest_valid_we = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_reg = VL_RAND_RESET_I(2);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_new = VL_RAND_RESET_I(2);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__sha512_ctrl_we = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem00_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem01_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem02_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem03_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem04_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem05_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem06_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem07_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem08_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem09_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem10_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem11_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem12_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem13_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem14_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem15_new = VL_RAND_RESET_Q(64);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_mem_we = VL_RAND_RESET_I(1);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_reg = VL_RAND_RESET_I(7);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_new = VL_RAND_RESET_I(7);
    vlSelf->tb_sha512__DOT__dut__DOT__core__DOT__w_mem_inst__DOT__w_ctr_we = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__tb_sha512__DOT__tb_clk = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__tb_sha512__DOT__tb_reset_n = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__tb_sha512__DOT__tb_clk = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__tb_sha512__DOT__tb_reset_n = VL_RAND_RESET_I(1);
}
