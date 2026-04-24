// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19.h"
#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rws_128x18.h"

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_128x18___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__9(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__9\n"); );
    // Init
    CData/*7:0*/ __PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__ADR;
    CData/*0:0*/ __PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0 
        = (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0_S)
                     ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0_S)
                         ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
                             ? (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__testInst_Wa_reg_w0->Q)
                             : 0U) : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_waddr)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0 
        = (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0_S)
                     ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0_S)
                         ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
                             ? (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__testInst_Ra_reg_r0->Q)
                             : 0U) : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__sub_lbuf_dout_cnt)));
    if ((1U & (~ ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core))))) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RADR 
            = (0x7fU & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0));
    }
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
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Data_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Data_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Data_S)
                ? vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ramDataOut
                : 0U) : vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0);
}
