// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rws_128x18.h"

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__17(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__17\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_gate_core__DOT__qd 
        = (1U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)) 
                 | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank0_uram_0__re) 
                    | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__25(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__25\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__97(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__97\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
                     & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                        & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__we_q)))));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank0_uram_0__re;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__113(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__113\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                           >> 8U))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WRDCLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RECLK = 0U;
    }
    if ((1U & (~ ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core))))) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RADR 
            = (0x7fU & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0));
    }
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RWSEL 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__129(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__129\n"); );
    // Init
    CData/*7:0*/ __PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__ADR;
    CData/*0:0*/ __PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WrClk1;
    // Body
    __PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__ADR 
        = (((- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RWSEL))) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WAFF)) 
           | ((~ (- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RWSEL)))) 
              & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RADR)));
    __PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WrClk0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WECLK) 
            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WAFF))) 
           & (~ ((IData)(__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__ADR) 
                 >> 7U)));
    __PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WrClk1 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WECLK) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WAFF)) 
           & (~ ((IData)(__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__ADR) 
                 >> 7U)));
    if (__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__iow0__DOT__arr[(0x3fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__iow1__DOT__arr[(0x3fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WDQ_pr;
    }
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RECLK) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__dout 
            = (((- (IData)(((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RECLK) 
                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RADR))))) 
                & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__iow0__DOT__arr
                [(0x3fU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RADR) 
                           >> 1U))]) | ((- (IData)(
                                                   ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RECLK) 
                                                    & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RADR)))) 
                                        & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__iow1__DOT__arr
                                        [(0x3fU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RADR) 
                                                   >> 1U))]));
    }
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ramDataOut 
        = ((0x3fff0U & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ramDataOut) 
           | ((8U & (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__dout 
                     & (~ (0x3ffffU & (- (IData)((1U 
                                                  & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                     >> 7U)))))))) 
              | ((4U & (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__dout 
                        & (~ (0x3ffffU & (- (IData)(
                                                    (1U 
                                                     & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                        >> 7U)))))))) 
                 | ((2U & (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__dout 
                           & (~ (0x3ffffU & (- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                           >> 7U)))))))) 
                    | (1U & (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__dout 
                             & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                   >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ramDataOut 
        = ((0x3ff0fU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ramDataOut) 
           | ((0x80U & (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__dout 
                        & (~ (0x3ffffU & (- (IData)(
                                                    (1U 
                                                     & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                        >> 7U)))))))) 
              | ((0x40U & (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__dout 
                           & (~ (0x3ffffU & (- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                           >> 7U)))))))) 
                 | ((0x20U & (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__dout 
                              & (~ (0x3ffffU & (- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                              >> 7U)))))))) 
                    | (0x10U & (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__dout 
                                & (~ (0x3ffffU & (- (IData)(
                                                            (1U 
                                                             & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                                >> 7U))))))))))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ramDataOut 
        = ((0x3f0ffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ramDataOut) 
           | ((0x800U & (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__dout 
                         & (~ (0x3ffffU & (- (IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                         >> 7U)))))))) 
              | ((0x400U & (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__dout 
                            & (~ (0x3ffffU & (- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                            >> 7U)))))))) 
                 | ((0x200U & (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__dout 
                               & (~ (0x3ffffU & (- (IData)(
                                                           (1U 
                                                            & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                               >> 7U)))))))) 
                    | (0x100U & (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__dout 
                                 & (~ (0x3ffffU & (- (IData)(
                                                             (1U 
                                                              & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                                 >> 7U))))))))))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ramDataOut 
        = ((0x30fffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ramDataOut) 
           | ((0x8000U & (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__dout 
                          & (~ (0x3ffffU & (- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                          >> 7U)))))))) 
              | ((0x4000U & (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__dout 
                             & (~ (0x3ffffU & (- (IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                             >> 7U)))))))) 
                 | ((0x2000U & (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__dout 
                                & (~ (0x3ffffU & (- (IData)(
                                                            (1U 
                                                             & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                                >> 7U)))))))) 
                    | (0x1000U & (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__dout 
                                  & (~ (0x3ffffU & 
                                        (- (IData)(
                                                   (1U 
                                                    & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                       >> 7U))))))))))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ramDataOut 
        = ((0xffffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ramDataOut) 
           | ((0x20000U & (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__dout 
                           & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                  >> 7U))))))) 
              | (0x10000U & (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__dout 
                             & (~ (0x3ffffU & (- (IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                             >> 7U))))))))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__137(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__137\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq
                    : 0U) : 0U) : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_0);
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__18(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__18\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_gate_core__DOT__qd 
        = (1U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)) 
                 | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank1_uram_0__re) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                       >> 1U))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__98(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__98\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
                     & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                        & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__we_q)))));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 1U));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank1_uram_0__re;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__139(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__139\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq
                    : 0U) : 0U) : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_1);
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__19(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__19\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_gate_core__DOT__qd 
        = (1U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)) 
                 | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank2_uram_0__re) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                       >> 2U))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__99(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__99\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
                     & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                        & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__we_q)))));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 2U));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank2_uram_0__re;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__141(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__141\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq
                    : 0U) : 0U) : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_2);
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__20(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__20\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_gate_core__DOT__qd 
        = (1U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)) 
                 | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank3_uram_0__re) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                       >> 3U))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__100(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__100\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
                     & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                        & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__we_q)))));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 3U));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank3_uram_0__re;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__143(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__143\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq
                    : 0U) : 0U) : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_3);
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__21(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__21\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_gate_core__DOT__qd 
        = (1U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)) 
                 | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank4_uram_0__re) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                       >> 4U))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__101(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__101\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
                     & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                        & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__we_q)))));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 4U));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank4_uram_0__re;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__145(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__145\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq
                    : 0U) : 0U) : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_4);
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__22(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__22\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_gate_core__DOT__qd 
        = (1U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)) 
                 | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank5_uram_0__re) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                       >> 5U))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__102(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__102\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
                     & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                        & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__we_q)))));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 5U));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank5_uram_0__re;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__147(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__147\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq
                    : 0U) : 0U) : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_5);
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__23(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__23\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_gate_core__DOT__qd 
        = (1U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)) 
                 | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank6_uram_0__re) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                       >> 6U))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__103(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__103\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
                     & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                        & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__we_q)))));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 6U));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank6_uram_0__re;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__149(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__149\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq
                    : 0U) : 0U) : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_6);
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__24(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__24\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_gate_core__DOT__qd 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
             | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)) 
            | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank7_uram_0__re)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
              >> 7U));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__104(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__104\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
                     & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                        & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__we_q)))));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 7U));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank7_uram_0__re;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__151(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__151\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq
                    : 0U) : 0U) : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_7);
}
