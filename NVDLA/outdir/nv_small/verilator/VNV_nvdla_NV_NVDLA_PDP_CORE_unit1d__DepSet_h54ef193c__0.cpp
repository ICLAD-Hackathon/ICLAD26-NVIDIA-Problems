// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__17(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__17\n"); );
    // Init
    CData/*2:0*/ __Vdly__pooling_size;
    SData/*10:0*/ __Vdly__latch_result6_d3;
    SData/*10:0*/ __Vdly__latch_result5_d3;
    SData/*10:0*/ __Vdly__latch_result4_d3;
    SData/*10:0*/ __Vdly__latch_result3_d3;
    SData/*10:0*/ __Vdly__latch_result1_d3;
    SData/*10:0*/ __Vdly__latch_result0_d3;
    SData/*10:0*/ __Vdly__latch_result7_d3;
    SData/*10:0*/ __Vdly__latch_result2_d3;
    SData/*14:0*/ __Vdly__flush_out6;
    SData/*14:0*/ __Vdly__flush_out5;
    SData/*14:0*/ __Vdly__flush_out4;
    SData/*14:0*/ __Vdly__flush_out3;
    SData/*14:0*/ __Vdly__flush_out1;
    SData/*14:0*/ __Vdly__flush_out0;
    SData/*14:0*/ __Vdly__flush_out7;
    SData/*14:0*/ __Vdly__flush_out2;
    // Body
    __Vdly__pooling_size = vlSelf->__PVT__pooling_size;
    __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
    __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
    __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
    __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
    __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
    __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
    __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
    __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
    __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
    __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
    __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
    __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
    __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
    __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
    __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
    __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__load_din) & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                 >> 0x17U))) {
            __Vdly__pooling_size = ((1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_last))
                                     ? 0U : (7U & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__pooling_size))));
        }
        if ((IData)((0x200000000ULL == (0x220000000ULL 
                                        & vlSelf->__PVT__pipe_dp_4)))) {
            if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
                __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
                __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
                __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
                __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
                __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
                __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
                __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
            } else if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
                __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
                __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
                __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
                __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
                __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
                __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
                __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
            } else {
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out2 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result2_d4)));
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out7 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result7_d4)));
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out0 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result0_d4)));
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out1 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result1_d4)));
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out3 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result3_d4)));
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out4 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result4_d4)));
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out5 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result5_d4)));
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out6 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result6_d4)));
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelf->__PVT__pipe_vld_4) & (IData)(vlSelf->__PVT__add_out_rdy))) {
            if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
                __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
                __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
                __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
                __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
                __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
                __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
                __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
            } else if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
                __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
                __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
                __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
                __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
                __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
                __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
                __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
            } else {
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result2_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result7_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result0_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result1_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result3_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result4_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result5_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result6_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
            }
        }
        if ((((IData)(vlSelf->__PVT__pipe_vld_4) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_prdy)) 
             & ((IData)((0x200000000ULL == (0x220000000ULL 
                                            & vlSelf->__PVT__pipe_dp_4))) 
                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_0__last_out_en)))) {
            vlSelf->__PVT__pooling_cnt = ((7U == (IData)(vlSelf->__PVT__pooling_cnt))
                                           ? 0U : (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__pooling_cnt))));
        }
        vlSelf->__PVT__flush_out2 = __Vdly__flush_out2;
        vlSelf->__PVT__flush_out7 = __Vdly__flush_out7;
        vlSelf->__PVT__flush_out0 = __Vdly__flush_out0;
        vlSelf->__PVT__flush_out1 = __Vdly__flush_out1;
        vlSelf->__PVT__flush_out3 = __Vdly__flush_out3;
        vlSelf->__PVT__flush_out4 = __Vdly__flush_out4;
        vlSelf->__PVT__flush_out5 = __Vdly__flush_out5;
        vlSelf->__PVT__flush_out6 = __Vdly__flush_out6;
        vlSelf->__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
        vlSelf->__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
        vlSelf->__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
        vlSelf->__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
        vlSelf->__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
        vlSelf->__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
        vlSelf->__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
        vlSelf->__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
        if (((IData)(vlSelf->__PVT__pipe_vld_3) & (IData)(vlSelf->__PVT__pipe_rdy_3))) {
            vlSelf->__PVT__pipe_dp_4 = vlSelf->__PVT__pipe_dp_3;
        }
        if (vlSelf->__PVT__pipe_vld_3) {
            vlSelf->__PVT__pipe_vld_4 = 1U;
        } else if (vlSelf->__PVT__add_out_rdy) {
            vlSelf->__PVT__pipe_vld_4 = 0U;
        }
    } else {
        __Vdly__pooling_size = 0U;
        __Vdly__flush_out2 = 0U;
        __Vdly__flush_out7 = 0U;
        __Vdly__flush_out0 = 0U;
        __Vdly__flush_out1 = 0U;
        __Vdly__flush_out3 = 0U;
        __Vdly__flush_out4 = 0U;
        __Vdly__flush_out5 = 0U;
        __Vdly__flush_out6 = 0U;
        __Vdly__latch_result2_d3 = 0U;
        __Vdly__latch_result7_d3 = 0U;
        __Vdly__latch_result0_d3 = 0U;
        __Vdly__latch_result1_d3 = 0U;
        __Vdly__latch_result3_d3 = 0U;
        __Vdly__latch_result4_d3 = 0U;
        __Vdly__latch_result5_d3 = 0U;
        __Vdly__latch_result6_d3 = 0U;
        vlSelf->__PVT__pooling_cnt = 0U;
        vlSelf->__PVT__flush_out2 = __Vdly__flush_out2;
        vlSelf->__PVT__flush_out7 = __Vdly__flush_out7;
        vlSelf->__PVT__flush_out0 = __Vdly__flush_out0;
        vlSelf->__PVT__flush_out1 = __Vdly__flush_out1;
        vlSelf->__PVT__flush_out3 = __Vdly__flush_out3;
        vlSelf->__PVT__flush_out4 = __Vdly__flush_out4;
        vlSelf->__PVT__flush_out5 = __Vdly__flush_out5;
        vlSelf->__PVT__flush_out6 = __Vdly__flush_out6;
        vlSelf->__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
        vlSelf->__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
        vlSelf->__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
        vlSelf->__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
        vlSelf->__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
        vlSelf->__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
        vlSelf->__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
        vlSelf->__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
        vlSelf->__PVT__pipe_dp_4 = 0ULL;
        vlSelf->__PVT__pipe_vld_4 = 0U;
    }
    vlSelf->__PVT__pooling_result = (0x7ffU & ((1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__pipe_dp_4 
                                                           >> 0x16U)))
                                                ? (IData)(
                                                          (vlSelf->__PVT__pipe_dp_4 
                                                           >> 0xbU))
                                                : (IData)(vlSelf->__PVT__pipe_dp_4)));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__pipe_vld_2) & (IData)(vlSelf->__PVT__pipe_rdy_2))) {
            vlSelf->__PVT__pipe_dp_3 = vlSelf->__PVT__pipe_dp_2;
        }
        if (vlSelf->__PVT__pipe_vld_2) {
            vlSelf->__PVT__pipe_vld_3 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_3) {
            vlSelf->__PVT__pipe_vld_3 = 0U;
        }
    } else {
        vlSelf->__PVT__pipe_dp_3 = 0ULL;
        vlSelf->__PVT__pipe_vld_3 = 0U;
    }
    vlSelf->__PVT__latch_result0_d4 = ((0U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result0_d3));
    vlSelf->__PVT__latch_result1_d4 = ((1U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result1_d3));
    vlSelf->__PVT__latch_result2_d4 = ((2U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result2_d3));
    vlSelf->__PVT__latch_result3_d4 = ((3U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result3_d3));
    vlSelf->__PVT__latch_result4_d4 = ((4U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result4_d3));
    vlSelf->__PVT__latch_result5_d4 = ((5U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result5_d3));
    vlSelf->__PVT__latch_result6_d4 = ((6U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result6_d3));
    vlSelf->__PVT__latch_result7_d4 = ((7U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result7_d3));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__pipe_vld_1) & (IData)(vlSelf->__PVT__pipe_rdy_1))) {
            vlSelf->__PVT__pipe_dp_2 = vlSelf->__PVT__pipe_dp_1;
        }
        if (vlSelf->__PVT__pipe_vld_1) {
            vlSelf->__PVT__pipe_vld_2 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_2) {
            vlSelf->__PVT__pipe_vld_2 = 0U;
        }
        if (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld) 
             & (IData)(vlSelf->__PVT__pipe_rdy_0))) {
            vlSelf->__PVT__pipe_dp_1 = (((QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_last)))) 
                                         << 0x21U) 
                                        | (((QData)((IData)(vlSelf->__PVT__pooling_size)) 
                                            << 0x1eU) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable) 
                                                               << 0x1dU) 
                                                              | ((0x7000000U 
                                                                  & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                     << 9U)) 
                                                                 | ((0x800000U 
                                                                     & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0) 
                                                                    | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_1st_0) 
                                                                        << 0x16U) 
                                                                       | ((0x3ff800U 
                                                                           & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                              << 0xbU)) 
                                                                          | (IData)(vlSelf->__PVT__int_pooling))))))))));
        }
        if ((1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld))) {
            vlSelf->__PVT__pipe_vld_1 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_1) {
            vlSelf->__PVT__pipe_vld_1 = 0U;
        }
    } else {
        vlSelf->__PVT__pipe_dp_2 = 0ULL;
        vlSelf->__PVT__pipe_vld_2 = 0U;
        vlSelf->__PVT__pipe_dp_1 = 0ULL;
        vlSelf->__PVT__pipe_vld_1 = 0U;
    }
    vlSelf->__PVT__pooling_size = __Vdly__pooling_size;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__25(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__25\n"); );
    // Body
    vlSelf->pooling_out = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_0__last_out_en)
                            ? ((0x10U & (IData)(vlSelf->__PVT__pooling_cnt))
                                ? 0U : ((8U & (IData)(vlSelf->__PVT__pooling_cnt))
                                         ? 0U : ((4U 
                                                  & (IData)(vlSelf->__PVT__pooling_cnt))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out7)
                                                    : (IData)(vlSelf->__PVT__flush_out6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out5)
                                                    : (IData)(vlSelf->__PVT__flush_out4)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out3)
                                                    : (IData)(vlSelf->__PVT__flush_out2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out1)
                                                    : (IData)(vlSelf->__PVT__flush_out0))))))
                            : ((0x10U & (IData)(vlSelf->__PVT__pooling_cnt))
                                ? 0U : ((8U & (IData)(vlSelf->__PVT__pooling_cnt))
                                         ? 0U : ((4U 
                                                  & (IData)(vlSelf->__PVT__pooling_cnt))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result7_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result6_d4))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result5_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result4_d4)))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result3_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result2_d4))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result1_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result0_d4)))))))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__33(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__33\n"); );
    // Body
    vlSelf->__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_4)) 
                                        | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_prdy)));
    vlSelf->__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_4)) 
                                       | (IData)(vlSelf->__PVT__add_out_rdy)));
    vlSelf->__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_3)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_3)));
    vlSelf->__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_2)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_2)));
    vlSelf->__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_1)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_1)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__41(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__41\n"); );
    // Body
    vlSelf->__PVT__load_din = ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld) 
                                 & (IData)(vlSelf->__PVT__pipe_rdy_0)) 
                                & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable))) 
                               & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__49(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__49\n"); );
    // Init
    SData/*10:0*/ __Vfunc_pooling_fun__0__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_fun__0__data0;
    SData/*10:0*/ __Vfunc_pooling_fun__0__data1;
    CData/*1:0*/ __Vfunc_pooling_fun__0__pooling_type;
    CData/*0:0*/ __Vfunc_pooling_fun__0__min_pooling;
    CData/*0:0*/ __Vfunc_pooling_fun__0__max_pooling;
    CData/*0:0*/ __Vfunc_pooling_fun__0__mean_pooling;
    SData/*10:0*/ __Vfunc_pooling_SUM__1__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_SUM__1__data0;
    SData/*10:0*/ __Vfunc_pooling_SUM__1__data1;
    SData/*10:0*/ __Vfunc_pooling_MIN__2__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_MIN__2__data0;
    SData/*10:0*/ __Vfunc_pooling_MIN__2__data1;
    CData/*0:0*/ __Vfunc_pooling_MIN__2__min_int_ff;
    SData/*10:0*/ __Vfunc_pooling_MAX__3__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_MAX__3__data0;
    SData/*10:0*/ __Vfunc_pooling_MAX__3__data1;
    CData/*0:0*/ __Vfunc_pooling_MAX__3__max_int_ff;
    // Body
    __Vfunc_pooling_fun__0__pooling_type = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d;
    if (vlSelf->__PVT__load_din) {
        __Vfunc_pooling_fun__0__data1 = (0x7ffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0);
        __Vfunc_pooling_fun__0__data0 = (0x7ffU & (
                                                   (0x20000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                      ? (IData)(vlSelf->__PVT__latch_result7_d4)
                                                      : (IData)(vlSelf->__PVT__latch_result6_d4))
                                                     : 
                                                    ((0x8000U 
                                                      & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                      ? (IData)(vlSelf->__PVT__latch_result5_d4)
                                                      : (IData)(vlSelf->__PVT__latch_result4_d4)))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                      ? (IData)(vlSelf->__PVT__latch_result3_d4)
                                                      : (IData)(vlSelf->__PVT__latch_result2_d4))
                                                     : 
                                                    ((0x8000U 
                                                      & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                      ? (IData)(vlSelf->__PVT__latch_result1_d4)
                                                      : (IData)(vlSelf->__PVT__latch_result0_d4)))));
    } else {
        __Vfunc_pooling_fun__0__data1 = 0U;
        __Vfunc_pooling_fun__0__data0 = 0U;
    }
    __Vfunc_pooling_fun__0__min_pooling = (2U == (IData)(__Vfunc_pooling_fun__0__pooling_type));
    __Vfunc_pooling_fun__0__max_pooling = (1U == (IData)(__Vfunc_pooling_fun__0__pooling_type));
    __Vfunc_pooling_fun__0__mean_pooling = (0U == (IData)(__Vfunc_pooling_fun__0__pooling_type));
    __Vfunc_pooling_MAX__3__data1 = __Vfunc_pooling_fun__0__data1;
    __Vfunc_pooling_MAX__3__data0 = __Vfunc_pooling_fun__0__data0;
    __Vfunc_pooling_MAX__3__max_int_ff = VL_GTS_III(11, (IData)(__Vfunc_pooling_MAX__3__data0), (IData)(__Vfunc_pooling_MAX__3__data1));
    __Vfunc_pooling_MAX__3__Vfuncout = ((IData)(__Vfunc_pooling_MAX__3__max_int_ff)
                                         ? (IData)(__Vfunc_pooling_MAX__3__data0)
                                         : (IData)(__Vfunc_pooling_MAX__3__data1));
    __Vfunc_pooling_MIN__2__data1 = __Vfunc_pooling_fun__0__data1;
    __Vfunc_pooling_MIN__2__data0 = __Vfunc_pooling_fun__0__data0;
    __Vfunc_pooling_MIN__2__min_int_ff = VL_GTS_III(11, (IData)(__Vfunc_pooling_MIN__2__data1), (IData)(__Vfunc_pooling_MIN__2__data0));
    __Vfunc_pooling_MIN__2__Vfuncout = ((IData)(__Vfunc_pooling_MIN__2__min_int_ff)
                                         ? (IData)(__Vfunc_pooling_MIN__2__data0)
                                         : (IData)(__Vfunc_pooling_MIN__2__data1));
    __Vfunc_pooling_SUM__1__data1 = __Vfunc_pooling_fun__0__data1;
    __Vfunc_pooling_SUM__1__data0 = __Vfunc_pooling_fun__0__data0;
    __Vfunc_pooling_SUM__1__Vfuncout = (0x7ffU & ((IData)(__Vfunc_pooling_SUM__1__data1) 
                                                  + (IData)(__Vfunc_pooling_SUM__1__data0)));
    __Vfunc_pooling_fun__0__Vfuncout = (0x7ffU & ((IData)(__Vfunc_pooling_fun__0__mean_pooling)
                                                   ? (IData)(__Vfunc_pooling_SUM__1__Vfuncout)
                                                   : 
                                                  ((IData)(__Vfunc_pooling_fun__0__min_pooling)
                                                    ? (IData)(__Vfunc_pooling_MIN__2__Vfuncout)
                                                    : 
                                                   ((IData)(__Vfunc_pooling_fun__0__max_pooling)
                                                     ? (IData)(__Vfunc_pooling_MAX__3__Vfuncout)
                                                     : 0U))));
    vlSelf->__PVT__int_pooling = __Vfunc_pooling_fun__0__Vfuncout;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__18(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__18\n"); );
    // Init
    CData/*2:0*/ __Vdly__pooling_size;
    SData/*10:0*/ __Vdly__latch_result6_d3;
    SData/*10:0*/ __Vdly__latch_result5_d3;
    SData/*10:0*/ __Vdly__latch_result4_d3;
    SData/*10:0*/ __Vdly__latch_result3_d3;
    SData/*10:0*/ __Vdly__latch_result1_d3;
    SData/*10:0*/ __Vdly__latch_result0_d3;
    SData/*10:0*/ __Vdly__latch_result7_d3;
    SData/*10:0*/ __Vdly__latch_result2_d3;
    SData/*14:0*/ __Vdly__flush_out6;
    SData/*14:0*/ __Vdly__flush_out5;
    SData/*14:0*/ __Vdly__flush_out4;
    SData/*14:0*/ __Vdly__flush_out3;
    SData/*14:0*/ __Vdly__flush_out1;
    SData/*14:0*/ __Vdly__flush_out0;
    SData/*14:0*/ __Vdly__flush_out7;
    SData/*14:0*/ __Vdly__flush_out2;
    // Body
    __Vdly__pooling_size = vlSelf->__PVT__pooling_size;
    __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
    __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
    __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
    __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
    __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
    __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
    __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
    __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
    __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
    __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
    __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
    __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
    __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
    __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
    __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
    __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__load_din) & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                 >> 0x17U))) {
            __Vdly__pooling_size = ((2U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_last))
                                     ? 0U : (7U & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__pooling_size))));
        }
        if ((IData)((0x200000000ULL == (0x220000000ULL 
                                        & vlSelf->__PVT__pipe_dp_4)))) {
            if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
                __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
                __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
                __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
                __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
                __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
                __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
                __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
            } else if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
                __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
                __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
                __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
                __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
                __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
                __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
                __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
            } else {
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out2 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result2_d4)));
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out7 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result7_d4)));
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out0 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result0_d4)));
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out1 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result1_d4)));
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out3 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result3_d4)));
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out4 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result4_d4)));
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out5 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result5_d4)));
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out6 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result6_d4)));
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelf->__PVT__pipe_vld_4) & (IData)(vlSelf->__PVT__add_out_rdy))) {
            if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
                __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
                __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
                __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
                __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
                __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
                __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
                __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
            } else if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
                __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
                __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
                __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
                __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
                __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
                __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
                __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
            } else {
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result2_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result7_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result0_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result1_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result3_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result4_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result5_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result6_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
            }
        }
        if ((((IData)(vlSelf->__PVT__pipe_vld_4) & 
              ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_prdy) 
               >> 1U)) & ((IData)((0x200000000ULL == 
                                   (0x220000000ULL 
                                    & vlSelf->__PVT__pipe_dp_4))) 
                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_1__last_out_en)))) {
            vlSelf->__PVT__pooling_cnt = ((7U == (IData)(vlSelf->__PVT__pooling_cnt))
                                           ? 0U : (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__pooling_cnt))));
        }
        vlSelf->__PVT__flush_out2 = __Vdly__flush_out2;
        vlSelf->__PVT__flush_out7 = __Vdly__flush_out7;
        vlSelf->__PVT__flush_out0 = __Vdly__flush_out0;
        vlSelf->__PVT__flush_out1 = __Vdly__flush_out1;
        vlSelf->__PVT__flush_out3 = __Vdly__flush_out3;
        vlSelf->__PVT__flush_out4 = __Vdly__flush_out4;
        vlSelf->__PVT__flush_out5 = __Vdly__flush_out5;
        vlSelf->__PVT__flush_out6 = __Vdly__flush_out6;
        vlSelf->__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
        vlSelf->__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
        vlSelf->__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
        vlSelf->__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
        vlSelf->__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
        vlSelf->__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
        vlSelf->__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
        vlSelf->__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
        if (((IData)(vlSelf->__PVT__pipe_vld_3) & (IData)(vlSelf->__PVT__pipe_rdy_3))) {
            vlSelf->__PVT__pipe_dp_4 = vlSelf->__PVT__pipe_dp_3;
        }
        if (vlSelf->__PVT__pipe_vld_3) {
            vlSelf->__PVT__pipe_vld_4 = 1U;
        } else if (vlSelf->__PVT__add_out_rdy) {
            vlSelf->__PVT__pipe_vld_4 = 0U;
        }
    } else {
        __Vdly__pooling_size = 0U;
        __Vdly__flush_out2 = 0U;
        __Vdly__flush_out7 = 0U;
        __Vdly__flush_out0 = 0U;
        __Vdly__flush_out1 = 0U;
        __Vdly__flush_out3 = 0U;
        __Vdly__flush_out4 = 0U;
        __Vdly__flush_out5 = 0U;
        __Vdly__flush_out6 = 0U;
        __Vdly__latch_result2_d3 = 0U;
        __Vdly__latch_result7_d3 = 0U;
        __Vdly__latch_result0_d3 = 0U;
        __Vdly__latch_result1_d3 = 0U;
        __Vdly__latch_result3_d3 = 0U;
        __Vdly__latch_result4_d3 = 0U;
        __Vdly__latch_result5_d3 = 0U;
        __Vdly__latch_result6_d3 = 0U;
        vlSelf->__PVT__pooling_cnt = 0U;
        vlSelf->__PVT__flush_out2 = __Vdly__flush_out2;
        vlSelf->__PVT__flush_out7 = __Vdly__flush_out7;
        vlSelf->__PVT__flush_out0 = __Vdly__flush_out0;
        vlSelf->__PVT__flush_out1 = __Vdly__flush_out1;
        vlSelf->__PVT__flush_out3 = __Vdly__flush_out3;
        vlSelf->__PVT__flush_out4 = __Vdly__flush_out4;
        vlSelf->__PVT__flush_out5 = __Vdly__flush_out5;
        vlSelf->__PVT__flush_out6 = __Vdly__flush_out6;
        vlSelf->__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
        vlSelf->__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
        vlSelf->__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
        vlSelf->__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
        vlSelf->__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
        vlSelf->__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
        vlSelf->__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
        vlSelf->__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
        vlSelf->__PVT__pipe_dp_4 = 0ULL;
        vlSelf->__PVT__pipe_vld_4 = 0U;
    }
    vlSelf->__PVT__pooling_result = (0x7ffU & ((1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__pipe_dp_4 
                                                           >> 0x16U)))
                                                ? (IData)(
                                                          (vlSelf->__PVT__pipe_dp_4 
                                                           >> 0xbU))
                                                : (IData)(vlSelf->__PVT__pipe_dp_4)));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__pipe_vld_2) & (IData)(vlSelf->__PVT__pipe_rdy_2))) {
            vlSelf->__PVT__pipe_dp_3 = vlSelf->__PVT__pipe_dp_2;
        }
        if (vlSelf->__PVT__pipe_vld_2) {
            vlSelf->__PVT__pipe_vld_3 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_3) {
            vlSelf->__PVT__pipe_vld_3 = 0U;
        }
    } else {
        vlSelf->__PVT__pipe_dp_3 = 0ULL;
        vlSelf->__PVT__pipe_vld_3 = 0U;
    }
    vlSelf->__PVT__latch_result0_d4 = ((0U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result0_d3));
    vlSelf->__PVT__latch_result1_d4 = ((1U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result1_d3));
    vlSelf->__PVT__latch_result2_d4 = ((2U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result2_d3));
    vlSelf->__PVT__latch_result3_d4 = ((3U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result3_d3));
    vlSelf->__PVT__latch_result4_d4 = ((4U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result4_d3));
    vlSelf->__PVT__latch_result5_d4 = ((5U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result5_d3));
    vlSelf->__PVT__latch_result6_d4 = ((6U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result6_d3));
    vlSelf->__PVT__latch_result7_d4 = ((7U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result7_d3));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__pipe_vld_1) & (IData)(vlSelf->__PVT__pipe_rdy_1))) {
            vlSelf->__PVT__pipe_dp_2 = vlSelf->__PVT__pipe_dp_1;
        }
        if (vlSelf->__PVT__pipe_vld_1) {
            vlSelf->__PVT__pipe_vld_2 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_2) {
            vlSelf->__PVT__pipe_vld_2 = 0U;
        }
        if ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld) 
              >> 1U) & (IData)(vlSelf->__PVT__pipe_rdy_0))) {
            vlSelf->__PVT__pipe_dp_1 = (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_last) 
                                                             >> 1U)))) 
                                         << 0x21U) 
                                        | (((QData)((IData)(vlSelf->__PVT__pooling_size)) 
                                            << 0x1eU) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable) 
                                                               << 0x1dU) 
                                                              | ((0x7000000U 
                                                                  & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                     << 9U)) 
                                                                 | ((0x800000U 
                                                                     & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0) 
                                                                    | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_1st_1) 
                                                                        << 0x16U) 
                                                                       | ((0x3ff800U 
                                                                           & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                              << 0xbU)) 
                                                                          | (IData)(vlSelf->__PVT__int_pooling))))))))));
        }
        if ((2U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld))) {
            vlSelf->__PVT__pipe_vld_1 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_1) {
            vlSelf->__PVT__pipe_vld_1 = 0U;
        }
    } else {
        vlSelf->__PVT__pipe_dp_2 = 0ULL;
        vlSelf->__PVT__pipe_vld_2 = 0U;
        vlSelf->__PVT__pipe_dp_1 = 0ULL;
        vlSelf->__PVT__pipe_vld_1 = 0U;
    }
    vlSelf->__PVT__pooling_size = __Vdly__pooling_size;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__26(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__26\n"); );
    // Body
    vlSelf->pooling_out = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_1__last_out_en)
                            ? ((0x10U & (IData)(vlSelf->__PVT__pooling_cnt))
                                ? 0U : ((8U & (IData)(vlSelf->__PVT__pooling_cnt))
                                         ? 0U : ((4U 
                                                  & (IData)(vlSelf->__PVT__pooling_cnt))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out7)
                                                    : (IData)(vlSelf->__PVT__flush_out6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out5)
                                                    : (IData)(vlSelf->__PVT__flush_out4)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out3)
                                                    : (IData)(vlSelf->__PVT__flush_out2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out1)
                                                    : (IData)(vlSelf->__PVT__flush_out0))))))
                            : ((0x10U & (IData)(vlSelf->__PVT__pooling_cnt))
                                ? 0U : ((8U & (IData)(vlSelf->__PVT__pooling_cnt))
                                         ? 0U : ((4U 
                                                  & (IData)(vlSelf->__PVT__pooling_cnt))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result7_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result6_d4))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result5_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result4_d4)))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result3_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result2_d4))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result1_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result0_d4)))))))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__34(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__34\n"); );
    // Body
    vlSelf->__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_4)) 
                                        | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_prdy) 
                                           >> 1U)));
    vlSelf->__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_4)) 
                                       | (IData)(vlSelf->__PVT__add_out_rdy)));
    vlSelf->__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_3)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_3)));
    vlSelf->__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_2)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_2)));
    vlSelf->__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_1)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_1)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__42(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__42\n"); );
    // Body
    vlSelf->__PVT__load_din = (((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld) 
                                  >> 1U) & (IData)(vlSelf->__PVT__pipe_rdy_0)) 
                                & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable))) 
                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en) 
                                  >> 1U));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__50(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__50\n"); );
    // Init
    SData/*10:0*/ __Vfunc_pooling_fun__4__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_fun__4__data0;
    SData/*10:0*/ __Vfunc_pooling_fun__4__data1;
    CData/*1:0*/ __Vfunc_pooling_fun__4__pooling_type;
    CData/*0:0*/ __Vfunc_pooling_fun__4__min_pooling;
    CData/*0:0*/ __Vfunc_pooling_fun__4__max_pooling;
    CData/*0:0*/ __Vfunc_pooling_fun__4__mean_pooling;
    SData/*10:0*/ __Vfunc_pooling_SUM__5__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_SUM__5__data0;
    SData/*10:0*/ __Vfunc_pooling_SUM__5__data1;
    SData/*10:0*/ __Vfunc_pooling_MIN__6__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_MIN__6__data0;
    SData/*10:0*/ __Vfunc_pooling_MIN__6__data1;
    CData/*0:0*/ __Vfunc_pooling_MIN__6__min_int_ff;
    SData/*10:0*/ __Vfunc_pooling_MAX__7__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_MAX__7__data0;
    SData/*10:0*/ __Vfunc_pooling_MAX__7__data1;
    CData/*0:0*/ __Vfunc_pooling_MAX__7__max_int_ff;
    // Body
    __Vfunc_pooling_fun__4__pooling_type = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d;
    if (vlSelf->__PVT__load_din) {
        __Vfunc_pooling_fun__4__data1 = (0x7ffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0);
        __Vfunc_pooling_fun__4__data0 = (0x7ffU & (
                                                   (0x20000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                      ? (IData)(vlSelf->__PVT__latch_result7_d4)
                                                      : (IData)(vlSelf->__PVT__latch_result6_d4))
                                                     : 
                                                    ((0x8000U 
                                                      & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                      ? (IData)(vlSelf->__PVT__latch_result5_d4)
                                                      : (IData)(vlSelf->__PVT__latch_result4_d4)))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                      ? (IData)(vlSelf->__PVT__latch_result3_d4)
                                                      : (IData)(vlSelf->__PVT__latch_result2_d4))
                                                     : 
                                                    ((0x8000U 
                                                      & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                      ? (IData)(vlSelf->__PVT__latch_result1_d4)
                                                      : (IData)(vlSelf->__PVT__latch_result0_d4)))));
    } else {
        __Vfunc_pooling_fun__4__data1 = 0U;
        __Vfunc_pooling_fun__4__data0 = 0U;
    }
    __Vfunc_pooling_fun__4__min_pooling = (2U == (IData)(__Vfunc_pooling_fun__4__pooling_type));
    __Vfunc_pooling_fun__4__max_pooling = (1U == (IData)(__Vfunc_pooling_fun__4__pooling_type));
    __Vfunc_pooling_fun__4__mean_pooling = (0U == (IData)(__Vfunc_pooling_fun__4__pooling_type));
    __Vfunc_pooling_MAX__7__data1 = __Vfunc_pooling_fun__4__data1;
    __Vfunc_pooling_MAX__7__data0 = __Vfunc_pooling_fun__4__data0;
    __Vfunc_pooling_MAX__7__max_int_ff = VL_GTS_III(11, (IData)(__Vfunc_pooling_MAX__7__data0), (IData)(__Vfunc_pooling_MAX__7__data1));
    __Vfunc_pooling_MAX__7__Vfuncout = ((IData)(__Vfunc_pooling_MAX__7__max_int_ff)
                                         ? (IData)(__Vfunc_pooling_MAX__7__data0)
                                         : (IData)(__Vfunc_pooling_MAX__7__data1));
    __Vfunc_pooling_MIN__6__data1 = __Vfunc_pooling_fun__4__data1;
    __Vfunc_pooling_MIN__6__data0 = __Vfunc_pooling_fun__4__data0;
    __Vfunc_pooling_MIN__6__min_int_ff = VL_GTS_III(11, (IData)(__Vfunc_pooling_MIN__6__data1), (IData)(__Vfunc_pooling_MIN__6__data0));
    __Vfunc_pooling_MIN__6__Vfuncout = ((IData)(__Vfunc_pooling_MIN__6__min_int_ff)
                                         ? (IData)(__Vfunc_pooling_MIN__6__data0)
                                         : (IData)(__Vfunc_pooling_MIN__6__data1));
    __Vfunc_pooling_SUM__5__data1 = __Vfunc_pooling_fun__4__data1;
    __Vfunc_pooling_SUM__5__data0 = __Vfunc_pooling_fun__4__data0;
    __Vfunc_pooling_SUM__5__Vfuncout = (0x7ffU & ((IData)(__Vfunc_pooling_SUM__5__data1) 
                                                  + (IData)(__Vfunc_pooling_SUM__5__data0)));
    __Vfunc_pooling_fun__4__Vfuncout = (0x7ffU & ((IData)(__Vfunc_pooling_fun__4__mean_pooling)
                                                   ? (IData)(__Vfunc_pooling_SUM__5__Vfuncout)
                                                   : 
                                                  ((IData)(__Vfunc_pooling_fun__4__min_pooling)
                                                    ? (IData)(__Vfunc_pooling_MIN__6__Vfuncout)
                                                    : 
                                                   ((IData)(__Vfunc_pooling_fun__4__max_pooling)
                                                     ? (IData)(__Vfunc_pooling_MAX__7__Vfuncout)
                                                     : 0U))));
    vlSelf->__PVT__int_pooling = __Vfunc_pooling_fun__4__Vfuncout;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__19(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__19\n"); );
    // Init
    CData/*2:0*/ __Vdly__pooling_size;
    SData/*10:0*/ __Vdly__latch_result6_d3;
    SData/*10:0*/ __Vdly__latch_result5_d3;
    SData/*10:0*/ __Vdly__latch_result4_d3;
    SData/*10:0*/ __Vdly__latch_result3_d3;
    SData/*10:0*/ __Vdly__latch_result1_d3;
    SData/*10:0*/ __Vdly__latch_result0_d3;
    SData/*10:0*/ __Vdly__latch_result7_d3;
    SData/*10:0*/ __Vdly__latch_result2_d3;
    SData/*14:0*/ __Vdly__flush_out6;
    SData/*14:0*/ __Vdly__flush_out5;
    SData/*14:0*/ __Vdly__flush_out4;
    SData/*14:0*/ __Vdly__flush_out3;
    SData/*14:0*/ __Vdly__flush_out1;
    SData/*14:0*/ __Vdly__flush_out0;
    SData/*14:0*/ __Vdly__flush_out7;
    SData/*14:0*/ __Vdly__flush_out2;
    // Body
    __Vdly__pooling_size = vlSelf->__PVT__pooling_size;
    __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
    __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
    __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
    __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
    __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
    __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
    __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
    __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
    __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
    __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
    __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
    __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
    __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
    __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
    __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
    __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__load_din) & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                 >> 0x17U))) {
            __Vdly__pooling_size = ((4U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_last))
                                     ? 0U : (7U & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__pooling_size))));
        }
        if ((IData)((0x200000000ULL == (0x220000000ULL 
                                        & vlSelf->__PVT__pipe_dp_4)))) {
            if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
                __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
                __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
                __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
                __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
                __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
                __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
                __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
            } else if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
                __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
                __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
                __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
                __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
                __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
                __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
                __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
            } else {
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out2 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result2_d4)));
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out7 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result7_d4)));
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out0 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result0_d4)));
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out1 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result1_d4)));
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out3 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result3_d4)));
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out4 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result4_d4)));
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out5 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result5_d4)));
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out6 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result6_d4)));
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelf->__PVT__pipe_vld_4) & (IData)(vlSelf->__PVT__add_out_rdy))) {
            if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
                __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
                __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
                __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
                __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
                __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
                __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
                __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
            } else if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
                __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
                __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
                __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
                __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
                __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
                __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
                __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
            } else {
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result2_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result7_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result0_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result1_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result3_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result4_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result5_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result6_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
            }
        }
        if ((((IData)(vlSelf->__PVT__pipe_vld_4) & 
              ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_prdy) 
               >> 2U)) & ((IData)((0x200000000ULL == 
                                   (0x220000000ULL 
                                    & vlSelf->__PVT__pipe_dp_4))) 
                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_2__last_out_en)))) {
            vlSelf->__PVT__pooling_cnt = ((7U == (IData)(vlSelf->__PVT__pooling_cnt))
                                           ? 0U : (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__pooling_cnt))));
        }
        vlSelf->__PVT__flush_out2 = __Vdly__flush_out2;
        vlSelf->__PVT__flush_out7 = __Vdly__flush_out7;
        vlSelf->__PVT__flush_out0 = __Vdly__flush_out0;
        vlSelf->__PVT__flush_out1 = __Vdly__flush_out1;
        vlSelf->__PVT__flush_out3 = __Vdly__flush_out3;
        vlSelf->__PVT__flush_out4 = __Vdly__flush_out4;
        vlSelf->__PVT__flush_out5 = __Vdly__flush_out5;
        vlSelf->__PVT__flush_out6 = __Vdly__flush_out6;
        vlSelf->__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
        vlSelf->__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
        vlSelf->__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
        vlSelf->__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
        vlSelf->__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
        vlSelf->__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
        vlSelf->__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
        vlSelf->__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
        if (((IData)(vlSelf->__PVT__pipe_vld_3) & (IData)(vlSelf->__PVT__pipe_rdy_3))) {
            vlSelf->__PVT__pipe_dp_4 = vlSelf->__PVT__pipe_dp_3;
        }
        if (vlSelf->__PVT__pipe_vld_3) {
            vlSelf->__PVT__pipe_vld_4 = 1U;
        } else if (vlSelf->__PVT__add_out_rdy) {
            vlSelf->__PVT__pipe_vld_4 = 0U;
        }
    } else {
        __Vdly__pooling_size = 0U;
        __Vdly__flush_out2 = 0U;
        __Vdly__flush_out7 = 0U;
        __Vdly__flush_out0 = 0U;
        __Vdly__flush_out1 = 0U;
        __Vdly__flush_out3 = 0U;
        __Vdly__flush_out4 = 0U;
        __Vdly__flush_out5 = 0U;
        __Vdly__flush_out6 = 0U;
        __Vdly__latch_result2_d3 = 0U;
        __Vdly__latch_result7_d3 = 0U;
        __Vdly__latch_result0_d3 = 0U;
        __Vdly__latch_result1_d3 = 0U;
        __Vdly__latch_result3_d3 = 0U;
        __Vdly__latch_result4_d3 = 0U;
        __Vdly__latch_result5_d3 = 0U;
        __Vdly__latch_result6_d3 = 0U;
        vlSelf->__PVT__pooling_cnt = 0U;
        vlSelf->__PVT__flush_out2 = __Vdly__flush_out2;
        vlSelf->__PVT__flush_out7 = __Vdly__flush_out7;
        vlSelf->__PVT__flush_out0 = __Vdly__flush_out0;
        vlSelf->__PVT__flush_out1 = __Vdly__flush_out1;
        vlSelf->__PVT__flush_out3 = __Vdly__flush_out3;
        vlSelf->__PVT__flush_out4 = __Vdly__flush_out4;
        vlSelf->__PVT__flush_out5 = __Vdly__flush_out5;
        vlSelf->__PVT__flush_out6 = __Vdly__flush_out6;
        vlSelf->__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
        vlSelf->__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
        vlSelf->__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
        vlSelf->__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
        vlSelf->__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
        vlSelf->__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
        vlSelf->__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
        vlSelf->__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
        vlSelf->__PVT__pipe_dp_4 = 0ULL;
        vlSelf->__PVT__pipe_vld_4 = 0U;
    }
    vlSelf->__PVT__pooling_result = (0x7ffU & ((1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__pipe_dp_4 
                                                           >> 0x16U)))
                                                ? (IData)(
                                                          (vlSelf->__PVT__pipe_dp_4 
                                                           >> 0xbU))
                                                : (IData)(vlSelf->__PVT__pipe_dp_4)));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__pipe_vld_2) & (IData)(vlSelf->__PVT__pipe_rdy_2))) {
            vlSelf->__PVT__pipe_dp_3 = vlSelf->__PVT__pipe_dp_2;
        }
        if (vlSelf->__PVT__pipe_vld_2) {
            vlSelf->__PVT__pipe_vld_3 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_3) {
            vlSelf->__PVT__pipe_vld_3 = 0U;
        }
    } else {
        vlSelf->__PVT__pipe_dp_3 = 0ULL;
        vlSelf->__PVT__pipe_vld_3 = 0U;
    }
    vlSelf->__PVT__latch_result0_d4 = ((0U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result0_d3));
    vlSelf->__PVT__latch_result1_d4 = ((1U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result1_d3));
    vlSelf->__PVT__latch_result2_d4 = ((2U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result2_d3));
    vlSelf->__PVT__latch_result3_d4 = ((3U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result3_d3));
    vlSelf->__PVT__latch_result4_d4 = ((4U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result4_d3));
    vlSelf->__PVT__latch_result5_d4 = ((5U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result5_d3));
    vlSelf->__PVT__latch_result6_d4 = ((6U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result6_d3));
    vlSelf->__PVT__latch_result7_d4 = ((7U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result7_d3));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__pipe_vld_1) & (IData)(vlSelf->__PVT__pipe_rdy_1))) {
            vlSelf->__PVT__pipe_dp_2 = vlSelf->__PVT__pipe_dp_1;
        }
        if (vlSelf->__PVT__pipe_vld_1) {
            vlSelf->__PVT__pipe_vld_2 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_2) {
            vlSelf->__PVT__pipe_vld_2 = 0U;
        }
        if ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld) 
              >> 2U) & (IData)(vlSelf->__PVT__pipe_rdy_0))) {
            vlSelf->__PVT__pipe_dp_1 = (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_last) 
                                                             >> 2U)))) 
                                         << 0x21U) 
                                        | (((QData)((IData)(vlSelf->__PVT__pooling_size)) 
                                            << 0x1eU) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable) 
                                                               << 0x1dU) 
                                                              | ((0x7000000U 
                                                                  & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                     << 9U)) 
                                                                 | ((0x800000U 
                                                                     & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0) 
                                                                    | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_1st_2) 
                                                                        << 0x16U) 
                                                                       | ((0x3ff800U 
                                                                           & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                              << 0xbU)) 
                                                                          | (IData)(vlSelf->__PVT__int_pooling))))))))));
        }
        if ((4U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld))) {
            vlSelf->__PVT__pipe_vld_1 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_1) {
            vlSelf->__PVT__pipe_vld_1 = 0U;
        }
    } else {
        vlSelf->__PVT__pipe_dp_2 = 0ULL;
        vlSelf->__PVT__pipe_vld_2 = 0U;
        vlSelf->__PVT__pipe_dp_1 = 0ULL;
        vlSelf->__PVT__pipe_vld_1 = 0U;
    }
    vlSelf->__PVT__pooling_size = __Vdly__pooling_size;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__27(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__27\n"); );
    // Body
    vlSelf->pooling_out = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_2__last_out_en)
                            ? ((0x10U & (IData)(vlSelf->__PVT__pooling_cnt))
                                ? 0U : ((8U & (IData)(vlSelf->__PVT__pooling_cnt))
                                         ? 0U : ((4U 
                                                  & (IData)(vlSelf->__PVT__pooling_cnt))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out7)
                                                    : (IData)(vlSelf->__PVT__flush_out6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out5)
                                                    : (IData)(vlSelf->__PVT__flush_out4)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out3)
                                                    : (IData)(vlSelf->__PVT__flush_out2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out1)
                                                    : (IData)(vlSelf->__PVT__flush_out0))))))
                            : ((0x10U & (IData)(vlSelf->__PVT__pooling_cnt))
                                ? 0U : ((8U & (IData)(vlSelf->__PVT__pooling_cnt))
                                         ? 0U : ((4U 
                                                  & (IData)(vlSelf->__PVT__pooling_cnt))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result7_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result6_d4))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result5_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result4_d4)))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result3_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result2_d4))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result1_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result0_d4)))))))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__35(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__35\n"); );
    // Body
    vlSelf->__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_4)) 
                                        | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_prdy) 
                                           >> 2U)));
    vlSelf->__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_4)) 
                                       | (IData)(vlSelf->__PVT__add_out_rdy)));
    vlSelf->__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_3)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_3)));
    vlSelf->__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_2)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_2)));
    vlSelf->__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_1)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_1)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__43(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__43\n"); );
    // Body
    vlSelf->__PVT__load_din = (((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld) 
                                  >> 2U) & (IData)(vlSelf->__PVT__pipe_rdy_0)) 
                                & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable))) 
                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en) 
                                  >> 2U));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__51(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__51\n"); );
    // Init
    SData/*10:0*/ __Vfunc_pooling_fun__8__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_fun__8__data0;
    SData/*10:0*/ __Vfunc_pooling_fun__8__data1;
    CData/*1:0*/ __Vfunc_pooling_fun__8__pooling_type;
    CData/*0:0*/ __Vfunc_pooling_fun__8__min_pooling;
    CData/*0:0*/ __Vfunc_pooling_fun__8__max_pooling;
    CData/*0:0*/ __Vfunc_pooling_fun__8__mean_pooling;
    SData/*10:0*/ __Vfunc_pooling_SUM__9__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_SUM__9__data0;
    SData/*10:0*/ __Vfunc_pooling_SUM__9__data1;
    SData/*10:0*/ __Vfunc_pooling_MIN__10__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_MIN__10__data0;
    SData/*10:0*/ __Vfunc_pooling_MIN__10__data1;
    CData/*0:0*/ __Vfunc_pooling_MIN__10__min_int_ff;
    SData/*10:0*/ __Vfunc_pooling_MAX__11__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_MAX__11__data0;
    SData/*10:0*/ __Vfunc_pooling_MAX__11__data1;
    CData/*0:0*/ __Vfunc_pooling_MAX__11__max_int_ff;
    // Body
    __Vfunc_pooling_fun__8__pooling_type = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d;
    if (vlSelf->__PVT__load_din) {
        __Vfunc_pooling_fun__8__data1 = (0x7ffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0);
        __Vfunc_pooling_fun__8__data0 = (0x7ffU & (
                                                   (0x20000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                      ? (IData)(vlSelf->__PVT__latch_result7_d4)
                                                      : (IData)(vlSelf->__PVT__latch_result6_d4))
                                                     : 
                                                    ((0x8000U 
                                                      & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                      ? (IData)(vlSelf->__PVT__latch_result5_d4)
                                                      : (IData)(vlSelf->__PVT__latch_result4_d4)))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                      ? (IData)(vlSelf->__PVT__latch_result3_d4)
                                                      : (IData)(vlSelf->__PVT__latch_result2_d4))
                                                     : 
                                                    ((0x8000U 
                                                      & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                      ? (IData)(vlSelf->__PVT__latch_result1_d4)
                                                      : (IData)(vlSelf->__PVT__latch_result0_d4)))));
    } else {
        __Vfunc_pooling_fun__8__data1 = 0U;
        __Vfunc_pooling_fun__8__data0 = 0U;
    }
    __Vfunc_pooling_fun__8__min_pooling = (2U == (IData)(__Vfunc_pooling_fun__8__pooling_type));
    __Vfunc_pooling_fun__8__max_pooling = (1U == (IData)(__Vfunc_pooling_fun__8__pooling_type));
    __Vfunc_pooling_fun__8__mean_pooling = (0U == (IData)(__Vfunc_pooling_fun__8__pooling_type));
    __Vfunc_pooling_MAX__11__data1 = __Vfunc_pooling_fun__8__data1;
    __Vfunc_pooling_MAX__11__data0 = __Vfunc_pooling_fun__8__data0;
    __Vfunc_pooling_MAX__11__max_int_ff = VL_GTS_III(11, (IData)(__Vfunc_pooling_MAX__11__data0), (IData)(__Vfunc_pooling_MAX__11__data1));
    __Vfunc_pooling_MAX__11__Vfuncout = ((IData)(__Vfunc_pooling_MAX__11__max_int_ff)
                                          ? (IData)(__Vfunc_pooling_MAX__11__data0)
                                          : (IData)(__Vfunc_pooling_MAX__11__data1));
    __Vfunc_pooling_MIN__10__data1 = __Vfunc_pooling_fun__8__data1;
    __Vfunc_pooling_MIN__10__data0 = __Vfunc_pooling_fun__8__data0;
    __Vfunc_pooling_MIN__10__min_int_ff = VL_GTS_III(11, (IData)(__Vfunc_pooling_MIN__10__data1), (IData)(__Vfunc_pooling_MIN__10__data0));
    __Vfunc_pooling_MIN__10__Vfuncout = ((IData)(__Vfunc_pooling_MIN__10__min_int_ff)
                                          ? (IData)(__Vfunc_pooling_MIN__10__data0)
                                          : (IData)(__Vfunc_pooling_MIN__10__data1));
    __Vfunc_pooling_SUM__9__data1 = __Vfunc_pooling_fun__8__data1;
    __Vfunc_pooling_SUM__9__data0 = __Vfunc_pooling_fun__8__data0;
    __Vfunc_pooling_SUM__9__Vfuncout = (0x7ffU & ((IData)(__Vfunc_pooling_SUM__9__data1) 
                                                  + (IData)(__Vfunc_pooling_SUM__9__data0)));
    __Vfunc_pooling_fun__8__Vfuncout = (0x7ffU & ((IData)(__Vfunc_pooling_fun__8__mean_pooling)
                                                   ? (IData)(__Vfunc_pooling_SUM__9__Vfuncout)
                                                   : 
                                                  ((IData)(__Vfunc_pooling_fun__8__min_pooling)
                                                    ? (IData)(__Vfunc_pooling_MIN__10__Vfuncout)
                                                    : 
                                                   ((IData)(__Vfunc_pooling_fun__8__max_pooling)
                                                     ? (IData)(__Vfunc_pooling_MAX__11__Vfuncout)
                                                     : 0U))));
    vlSelf->__PVT__int_pooling = __Vfunc_pooling_fun__8__Vfuncout;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__20(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__20\n"); );
    // Init
    CData/*2:0*/ __Vdly__pooling_size;
    SData/*10:0*/ __Vdly__latch_result6_d3;
    SData/*10:0*/ __Vdly__latch_result5_d3;
    SData/*10:0*/ __Vdly__latch_result4_d3;
    SData/*10:0*/ __Vdly__latch_result3_d3;
    SData/*10:0*/ __Vdly__latch_result1_d3;
    SData/*10:0*/ __Vdly__latch_result0_d3;
    SData/*10:0*/ __Vdly__latch_result7_d3;
    SData/*10:0*/ __Vdly__latch_result2_d3;
    SData/*14:0*/ __Vdly__flush_out6;
    SData/*14:0*/ __Vdly__flush_out5;
    SData/*14:0*/ __Vdly__flush_out4;
    SData/*14:0*/ __Vdly__flush_out3;
    SData/*14:0*/ __Vdly__flush_out1;
    SData/*14:0*/ __Vdly__flush_out0;
    SData/*14:0*/ __Vdly__flush_out7;
    SData/*14:0*/ __Vdly__flush_out2;
    // Body
    __Vdly__pooling_size = vlSelf->__PVT__pooling_size;
    __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
    __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
    __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
    __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
    __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
    __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
    __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
    __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
    __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
    __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
    __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
    __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
    __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
    __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
    __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
    __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__load_din) & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                 >> 0x17U))) {
            __Vdly__pooling_size = ((8U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_last))
                                     ? 0U : (7U & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__pooling_size))));
        }
        if ((IData)((0x200000000ULL == (0x220000000ULL 
                                        & vlSelf->__PVT__pipe_dp_4)))) {
            if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
                __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
                __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
                __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
                __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
                __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
                __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
                __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
            } else if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
                __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
                __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
                __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
                __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
                __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
                __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
                __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
            } else {
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out2 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result2_d4)));
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out7 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result7_d4)));
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out0 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result0_d4)));
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out1 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result1_d4)));
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out3 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result3_d4)));
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out4 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result4_d4)));
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out5 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result5_d4)));
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out6 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result6_d4)));
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelf->__PVT__pipe_vld_4) & (IData)(vlSelf->__PVT__add_out_rdy))) {
            if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
                __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
                __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
                __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
                __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
                __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
                __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
                __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
            } else if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
                __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
                __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
                __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
                __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
                __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
                __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
                __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
            } else {
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result2_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result7_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result0_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result1_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result3_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result4_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result5_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result6_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
            }
        }
        if ((((IData)(vlSelf->__PVT__pipe_vld_4) & 
              ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_prdy) 
               >> 3U)) & ((IData)((0x200000000ULL == 
                                   (0x220000000ULL 
                                    & vlSelf->__PVT__pipe_dp_4))) 
                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_3__last_out_en)))) {
            vlSelf->__PVT__pooling_cnt = ((7U == (IData)(vlSelf->__PVT__pooling_cnt))
                                           ? 0U : (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__pooling_cnt))));
        }
        vlSelf->__PVT__flush_out2 = __Vdly__flush_out2;
        vlSelf->__PVT__flush_out7 = __Vdly__flush_out7;
        vlSelf->__PVT__flush_out0 = __Vdly__flush_out0;
        vlSelf->__PVT__flush_out1 = __Vdly__flush_out1;
        vlSelf->__PVT__flush_out3 = __Vdly__flush_out3;
        vlSelf->__PVT__flush_out4 = __Vdly__flush_out4;
        vlSelf->__PVT__flush_out5 = __Vdly__flush_out5;
        vlSelf->__PVT__flush_out6 = __Vdly__flush_out6;
        vlSelf->__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
        vlSelf->__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
        vlSelf->__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
        vlSelf->__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
        vlSelf->__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
        vlSelf->__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
        vlSelf->__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
        vlSelf->__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
        if (((IData)(vlSelf->__PVT__pipe_vld_3) & (IData)(vlSelf->__PVT__pipe_rdy_3))) {
            vlSelf->__PVT__pipe_dp_4 = vlSelf->__PVT__pipe_dp_3;
        }
        if (vlSelf->__PVT__pipe_vld_3) {
            vlSelf->__PVT__pipe_vld_4 = 1U;
        } else if (vlSelf->__PVT__add_out_rdy) {
            vlSelf->__PVT__pipe_vld_4 = 0U;
        }
    } else {
        __Vdly__pooling_size = 0U;
        __Vdly__flush_out2 = 0U;
        __Vdly__flush_out7 = 0U;
        __Vdly__flush_out0 = 0U;
        __Vdly__flush_out1 = 0U;
        __Vdly__flush_out3 = 0U;
        __Vdly__flush_out4 = 0U;
        __Vdly__flush_out5 = 0U;
        __Vdly__flush_out6 = 0U;
        __Vdly__latch_result2_d3 = 0U;
        __Vdly__latch_result7_d3 = 0U;
        __Vdly__latch_result0_d3 = 0U;
        __Vdly__latch_result1_d3 = 0U;
        __Vdly__latch_result3_d3 = 0U;
        __Vdly__latch_result4_d3 = 0U;
        __Vdly__latch_result5_d3 = 0U;
        __Vdly__latch_result6_d3 = 0U;
        vlSelf->__PVT__pooling_cnt = 0U;
        vlSelf->__PVT__flush_out2 = __Vdly__flush_out2;
        vlSelf->__PVT__flush_out7 = __Vdly__flush_out7;
        vlSelf->__PVT__flush_out0 = __Vdly__flush_out0;
        vlSelf->__PVT__flush_out1 = __Vdly__flush_out1;
        vlSelf->__PVT__flush_out3 = __Vdly__flush_out3;
        vlSelf->__PVT__flush_out4 = __Vdly__flush_out4;
        vlSelf->__PVT__flush_out5 = __Vdly__flush_out5;
        vlSelf->__PVT__flush_out6 = __Vdly__flush_out6;
        vlSelf->__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
        vlSelf->__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
        vlSelf->__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
        vlSelf->__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
        vlSelf->__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
        vlSelf->__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
        vlSelf->__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
        vlSelf->__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
        vlSelf->__PVT__pipe_dp_4 = 0ULL;
        vlSelf->__PVT__pipe_vld_4 = 0U;
    }
    vlSelf->__PVT__pooling_result = (0x7ffU & ((1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__pipe_dp_4 
                                                           >> 0x16U)))
                                                ? (IData)(
                                                          (vlSelf->__PVT__pipe_dp_4 
                                                           >> 0xbU))
                                                : (IData)(vlSelf->__PVT__pipe_dp_4)));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__pipe_vld_2) & (IData)(vlSelf->__PVT__pipe_rdy_2))) {
            vlSelf->__PVT__pipe_dp_3 = vlSelf->__PVT__pipe_dp_2;
        }
        if (vlSelf->__PVT__pipe_vld_2) {
            vlSelf->__PVT__pipe_vld_3 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_3) {
            vlSelf->__PVT__pipe_vld_3 = 0U;
        }
    } else {
        vlSelf->__PVT__pipe_dp_3 = 0ULL;
        vlSelf->__PVT__pipe_vld_3 = 0U;
    }
    vlSelf->__PVT__latch_result0_d4 = ((0U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result0_d3));
    vlSelf->__PVT__latch_result1_d4 = ((1U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result1_d3));
    vlSelf->__PVT__latch_result2_d4 = ((2U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result2_d3));
    vlSelf->__PVT__latch_result3_d4 = ((3U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result3_d3));
    vlSelf->__PVT__latch_result4_d4 = ((4U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result4_d3));
    vlSelf->__PVT__latch_result5_d4 = ((5U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result5_d3));
    vlSelf->__PVT__latch_result6_d4 = ((6U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result6_d3));
    vlSelf->__PVT__latch_result7_d4 = ((7U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result7_d3));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__pipe_vld_1) & (IData)(vlSelf->__PVT__pipe_rdy_1))) {
            vlSelf->__PVT__pipe_dp_2 = vlSelf->__PVT__pipe_dp_1;
        }
        if (vlSelf->__PVT__pipe_vld_1) {
            vlSelf->__PVT__pipe_vld_2 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_2) {
            vlSelf->__PVT__pipe_vld_2 = 0U;
        }
        if ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld) 
              >> 3U) & (IData)(vlSelf->__PVT__pipe_rdy_0))) {
            vlSelf->__PVT__pipe_dp_1 = (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_last) 
                                                             >> 3U)))) 
                                         << 0x21U) 
                                        | (((QData)((IData)(vlSelf->__PVT__pooling_size)) 
                                            << 0x1eU) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable) 
                                                               << 0x1dU) 
                                                              | ((0x7000000U 
                                                                  & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                     << 9U)) 
                                                                 | ((0x800000U 
                                                                     & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0) 
                                                                    | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_1st_3) 
                                                                        << 0x16U) 
                                                                       | ((0x3ff800U 
                                                                           & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                              << 0xbU)) 
                                                                          | (IData)(vlSelf->__PVT__int_pooling))))))))));
        }
        if ((8U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld))) {
            vlSelf->__PVT__pipe_vld_1 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_1) {
            vlSelf->__PVT__pipe_vld_1 = 0U;
        }
    } else {
        vlSelf->__PVT__pipe_dp_2 = 0ULL;
        vlSelf->__PVT__pipe_vld_2 = 0U;
        vlSelf->__PVT__pipe_dp_1 = 0ULL;
        vlSelf->__PVT__pipe_vld_1 = 0U;
    }
    vlSelf->__PVT__pooling_size = __Vdly__pooling_size;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__28(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__28\n"); );
    // Body
    vlSelf->pooling_out = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_3__last_out_en)
                            ? ((0x10U & (IData)(vlSelf->__PVT__pooling_cnt))
                                ? 0U : ((8U & (IData)(vlSelf->__PVT__pooling_cnt))
                                         ? 0U : ((4U 
                                                  & (IData)(vlSelf->__PVT__pooling_cnt))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out7)
                                                    : (IData)(vlSelf->__PVT__flush_out6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out5)
                                                    : (IData)(vlSelf->__PVT__flush_out4)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out3)
                                                    : (IData)(vlSelf->__PVT__flush_out2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out1)
                                                    : (IData)(vlSelf->__PVT__flush_out0))))))
                            : ((0x10U & (IData)(vlSelf->__PVT__pooling_cnt))
                                ? 0U : ((8U & (IData)(vlSelf->__PVT__pooling_cnt))
                                         ? 0U : ((4U 
                                                  & (IData)(vlSelf->__PVT__pooling_cnt))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result7_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result6_d4))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result5_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result4_d4)))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result3_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result2_d4))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result1_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result0_d4)))))))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__36(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__36\n"); );
    // Body
    vlSelf->__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_4)) 
                                        | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_prdy) 
                                           >> 3U)));
    vlSelf->__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_4)) 
                                       | (IData)(vlSelf->__PVT__add_out_rdy)));
    vlSelf->__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_3)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_3)));
    vlSelf->__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_2)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_2)));
    vlSelf->__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_1)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_1)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__44(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__44\n"); );
    // Body
    vlSelf->__PVT__load_din = (((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld) 
                                  >> 3U) & (IData)(vlSelf->__PVT__pipe_rdy_0)) 
                                & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable))) 
                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en) 
                                  >> 3U));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__52(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__52\n"); );
    // Init
    SData/*10:0*/ __Vfunc_pooling_fun__12__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_fun__12__data0;
    SData/*10:0*/ __Vfunc_pooling_fun__12__data1;
    CData/*1:0*/ __Vfunc_pooling_fun__12__pooling_type;
    CData/*0:0*/ __Vfunc_pooling_fun__12__min_pooling;
    CData/*0:0*/ __Vfunc_pooling_fun__12__max_pooling;
    CData/*0:0*/ __Vfunc_pooling_fun__12__mean_pooling;
    SData/*10:0*/ __Vfunc_pooling_SUM__13__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_SUM__13__data0;
    SData/*10:0*/ __Vfunc_pooling_SUM__13__data1;
    SData/*10:0*/ __Vfunc_pooling_MIN__14__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_MIN__14__data0;
    SData/*10:0*/ __Vfunc_pooling_MIN__14__data1;
    CData/*0:0*/ __Vfunc_pooling_MIN__14__min_int_ff;
    SData/*10:0*/ __Vfunc_pooling_MAX__15__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_MAX__15__data0;
    SData/*10:0*/ __Vfunc_pooling_MAX__15__data1;
    CData/*0:0*/ __Vfunc_pooling_MAX__15__max_int_ff;
    // Body
    __Vfunc_pooling_fun__12__pooling_type = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d;
    if (vlSelf->__PVT__load_din) {
        __Vfunc_pooling_fun__12__data1 = (0x7ffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0);
        __Vfunc_pooling_fun__12__data0 = (0x7ffU & 
                                          ((0x20000U 
                                            & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                            ? ((0x10000U 
                                                & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                ? (
                                                   (0x8000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? (IData)(vlSelf->__PVT__latch_result7_d4)
                                                    : (IData)(vlSelf->__PVT__latch_result6_d4))
                                                : (
                                                   (0x8000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? (IData)(vlSelf->__PVT__latch_result5_d4)
                                                    : (IData)(vlSelf->__PVT__latch_result4_d4)))
                                            : ((0x10000U 
                                                & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                ? (
                                                   (0x8000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? (IData)(vlSelf->__PVT__latch_result3_d4)
                                                    : (IData)(vlSelf->__PVT__latch_result2_d4))
                                                : (
                                                   (0x8000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? (IData)(vlSelf->__PVT__latch_result1_d4)
                                                    : (IData)(vlSelf->__PVT__latch_result0_d4)))));
    } else {
        __Vfunc_pooling_fun__12__data1 = 0U;
        __Vfunc_pooling_fun__12__data0 = 0U;
    }
    __Vfunc_pooling_fun__12__min_pooling = (2U == (IData)(__Vfunc_pooling_fun__12__pooling_type));
    __Vfunc_pooling_fun__12__max_pooling = (1U == (IData)(__Vfunc_pooling_fun__12__pooling_type));
    __Vfunc_pooling_fun__12__mean_pooling = (0U == (IData)(__Vfunc_pooling_fun__12__pooling_type));
    __Vfunc_pooling_MAX__15__data1 = __Vfunc_pooling_fun__12__data1;
    __Vfunc_pooling_MAX__15__data0 = __Vfunc_pooling_fun__12__data0;
    __Vfunc_pooling_MAX__15__max_int_ff = VL_GTS_III(11, (IData)(__Vfunc_pooling_MAX__15__data0), (IData)(__Vfunc_pooling_MAX__15__data1));
    __Vfunc_pooling_MAX__15__Vfuncout = ((IData)(__Vfunc_pooling_MAX__15__max_int_ff)
                                          ? (IData)(__Vfunc_pooling_MAX__15__data0)
                                          : (IData)(__Vfunc_pooling_MAX__15__data1));
    __Vfunc_pooling_MIN__14__data1 = __Vfunc_pooling_fun__12__data1;
    __Vfunc_pooling_MIN__14__data0 = __Vfunc_pooling_fun__12__data0;
    __Vfunc_pooling_MIN__14__min_int_ff = VL_GTS_III(11, (IData)(__Vfunc_pooling_MIN__14__data1), (IData)(__Vfunc_pooling_MIN__14__data0));
    __Vfunc_pooling_MIN__14__Vfuncout = ((IData)(__Vfunc_pooling_MIN__14__min_int_ff)
                                          ? (IData)(__Vfunc_pooling_MIN__14__data0)
                                          : (IData)(__Vfunc_pooling_MIN__14__data1));
    __Vfunc_pooling_SUM__13__data1 = __Vfunc_pooling_fun__12__data1;
    __Vfunc_pooling_SUM__13__data0 = __Vfunc_pooling_fun__12__data0;
    __Vfunc_pooling_SUM__13__Vfuncout = (0x7ffU & ((IData)(__Vfunc_pooling_SUM__13__data1) 
                                                   + (IData)(__Vfunc_pooling_SUM__13__data0)));
    __Vfunc_pooling_fun__12__Vfuncout = (0x7ffU & ((IData)(__Vfunc_pooling_fun__12__mean_pooling)
                                                    ? (IData)(__Vfunc_pooling_SUM__13__Vfuncout)
                                                    : 
                                                   ((IData)(__Vfunc_pooling_fun__12__min_pooling)
                                                     ? (IData)(__Vfunc_pooling_MIN__14__Vfuncout)
                                                     : 
                                                    ((IData)(__Vfunc_pooling_fun__12__max_pooling)
                                                      ? (IData)(__Vfunc_pooling_MAX__15__Vfuncout)
                                                      : 0U))));
    vlSelf->__PVT__int_pooling = __Vfunc_pooling_fun__12__Vfuncout;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4__21(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4__21\n"); );
    // Init
    CData/*2:0*/ __Vdly__pooling_size;
    SData/*10:0*/ __Vdly__latch_result6_d3;
    SData/*10:0*/ __Vdly__latch_result5_d3;
    SData/*10:0*/ __Vdly__latch_result4_d3;
    SData/*10:0*/ __Vdly__latch_result3_d3;
    SData/*10:0*/ __Vdly__latch_result1_d3;
    SData/*10:0*/ __Vdly__latch_result0_d3;
    SData/*10:0*/ __Vdly__latch_result7_d3;
    SData/*10:0*/ __Vdly__latch_result2_d3;
    SData/*14:0*/ __Vdly__flush_out6;
    SData/*14:0*/ __Vdly__flush_out5;
    SData/*14:0*/ __Vdly__flush_out4;
    SData/*14:0*/ __Vdly__flush_out3;
    SData/*14:0*/ __Vdly__flush_out1;
    SData/*14:0*/ __Vdly__flush_out0;
    SData/*14:0*/ __Vdly__flush_out7;
    SData/*14:0*/ __Vdly__flush_out2;
    // Body
    __Vdly__pooling_size = vlSelf->__PVT__pooling_size;
    __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
    __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
    __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
    __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
    __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
    __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
    __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
    __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
    __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
    __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
    __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
    __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
    __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
    __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
    __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
    __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__load_din) & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                 >> 0x17U))) {
            __Vdly__pooling_size = ((0x10U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_last))
                                     ? 0U : (7U & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__pooling_size))));
        }
        if ((IData)((0x200000000ULL == (0x220000000ULL 
                                        & vlSelf->__PVT__pipe_dp_4)))) {
            if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
                __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
                __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
                __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
                __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
                __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
                __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
                __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
            } else if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
                __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
                __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
                __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
                __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
                __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
                __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
                __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
            } else {
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out2 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result2_d4)));
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out7 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result7_d4)));
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out0 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result0_d4)));
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out1 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result1_d4)));
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out3 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result3_d4)));
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out4 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result4_d4)));
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out5 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result5_d4)));
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out6 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result6_d4)));
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelf->__PVT__pipe_vld_4) & (IData)(vlSelf->__PVT__add_out_rdy))) {
            if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
                __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
                __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
                __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
                __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
                __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
                __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
                __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
            } else if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
                __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
                __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
                __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
                __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
                __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
                __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
                __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
            } else {
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result2_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result7_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result0_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result1_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result3_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result4_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result5_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result6_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
            }
        }
        if ((((IData)(vlSelf->__PVT__pipe_vld_4) & 
              ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_prdy) 
               >> 4U)) & ((IData)((0x200000000ULL == 
                                   (0x220000000ULL 
                                    & vlSelf->__PVT__pipe_dp_4))) 
                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_4__last_out_en)))) {
            vlSelf->__PVT__pooling_cnt = ((7U == (IData)(vlSelf->__PVT__pooling_cnt))
                                           ? 0U : (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__pooling_cnt))));
        }
        vlSelf->__PVT__flush_out2 = __Vdly__flush_out2;
        vlSelf->__PVT__flush_out7 = __Vdly__flush_out7;
        vlSelf->__PVT__flush_out0 = __Vdly__flush_out0;
        vlSelf->__PVT__flush_out1 = __Vdly__flush_out1;
        vlSelf->__PVT__flush_out3 = __Vdly__flush_out3;
        vlSelf->__PVT__flush_out4 = __Vdly__flush_out4;
        vlSelf->__PVT__flush_out5 = __Vdly__flush_out5;
        vlSelf->__PVT__flush_out6 = __Vdly__flush_out6;
        vlSelf->__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
        vlSelf->__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
        vlSelf->__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
        vlSelf->__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
        vlSelf->__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
        vlSelf->__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
        vlSelf->__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
        vlSelf->__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
        if (((IData)(vlSelf->__PVT__pipe_vld_3) & (IData)(vlSelf->__PVT__pipe_rdy_3))) {
            vlSelf->__PVT__pipe_dp_4 = vlSelf->__PVT__pipe_dp_3;
        }
        if (vlSelf->__PVT__pipe_vld_3) {
            vlSelf->__PVT__pipe_vld_4 = 1U;
        } else if (vlSelf->__PVT__add_out_rdy) {
            vlSelf->__PVT__pipe_vld_4 = 0U;
        }
    } else {
        __Vdly__pooling_size = 0U;
        __Vdly__flush_out2 = 0U;
        __Vdly__flush_out7 = 0U;
        __Vdly__flush_out0 = 0U;
        __Vdly__flush_out1 = 0U;
        __Vdly__flush_out3 = 0U;
        __Vdly__flush_out4 = 0U;
        __Vdly__flush_out5 = 0U;
        __Vdly__flush_out6 = 0U;
        __Vdly__latch_result2_d3 = 0U;
        __Vdly__latch_result7_d3 = 0U;
        __Vdly__latch_result0_d3 = 0U;
        __Vdly__latch_result1_d3 = 0U;
        __Vdly__latch_result3_d3 = 0U;
        __Vdly__latch_result4_d3 = 0U;
        __Vdly__latch_result5_d3 = 0U;
        __Vdly__latch_result6_d3 = 0U;
        vlSelf->__PVT__pooling_cnt = 0U;
        vlSelf->__PVT__flush_out2 = __Vdly__flush_out2;
        vlSelf->__PVT__flush_out7 = __Vdly__flush_out7;
        vlSelf->__PVT__flush_out0 = __Vdly__flush_out0;
        vlSelf->__PVT__flush_out1 = __Vdly__flush_out1;
        vlSelf->__PVT__flush_out3 = __Vdly__flush_out3;
        vlSelf->__PVT__flush_out4 = __Vdly__flush_out4;
        vlSelf->__PVT__flush_out5 = __Vdly__flush_out5;
        vlSelf->__PVT__flush_out6 = __Vdly__flush_out6;
        vlSelf->__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
        vlSelf->__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
        vlSelf->__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
        vlSelf->__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
        vlSelf->__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
        vlSelf->__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
        vlSelf->__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
        vlSelf->__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
        vlSelf->__PVT__pipe_dp_4 = 0ULL;
        vlSelf->__PVT__pipe_vld_4 = 0U;
    }
    vlSelf->__PVT__pooling_result = (0x7ffU & ((1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__pipe_dp_4 
                                                           >> 0x16U)))
                                                ? (IData)(
                                                          (vlSelf->__PVT__pipe_dp_4 
                                                           >> 0xbU))
                                                : (IData)(vlSelf->__PVT__pipe_dp_4)));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__pipe_vld_2) & (IData)(vlSelf->__PVT__pipe_rdy_2))) {
            vlSelf->__PVT__pipe_dp_3 = vlSelf->__PVT__pipe_dp_2;
        }
        if (vlSelf->__PVT__pipe_vld_2) {
            vlSelf->__PVT__pipe_vld_3 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_3) {
            vlSelf->__PVT__pipe_vld_3 = 0U;
        }
    } else {
        vlSelf->__PVT__pipe_dp_3 = 0ULL;
        vlSelf->__PVT__pipe_vld_3 = 0U;
    }
    vlSelf->__PVT__latch_result0_d4 = ((0U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result0_d3));
    vlSelf->__PVT__latch_result1_d4 = ((1U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result1_d3));
    vlSelf->__PVT__latch_result2_d4 = ((2U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result2_d3));
    vlSelf->__PVT__latch_result3_d4 = ((3U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result3_d3));
    vlSelf->__PVT__latch_result4_d4 = ((4U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result4_d3));
    vlSelf->__PVT__latch_result5_d4 = ((5U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result5_d3));
    vlSelf->__PVT__latch_result6_d4 = ((6U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result6_d3));
    vlSelf->__PVT__latch_result7_d4 = ((7U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result7_d3));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__pipe_vld_1) & (IData)(vlSelf->__PVT__pipe_rdy_1))) {
            vlSelf->__PVT__pipe_dp_2 = vlSelf->__PVT__pipe_dp_1;
        }
        if (vlSelf->__PVT__pipe_vld_1) {
            vlSelf->__PVT__pipe_vld_2 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_2) {
            vlSelf->__PVT__pipe_vld_2 = 0U;
        }
        if ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld) 
              >> 4U) & (IData)(vlSelf->__PVT__pipe_rdy_0))) {
            vlSelf->__PVT__pipe_dp_1 = (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_last) 
                                                             >> 4U)))) 
                                         << 0x21U) 
                                        | (((QData)((IData)(vlSelf->__PVT__pooling_size)) 
                                            << 0x1eU) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable) 
                                                               << 0x1dU) 
                                                              | ((0x7000000U 
                                                                  & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                     << 9U)) 
                                                                 | ((0x800000U 
                                                                     & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0) 
                                                                    | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_1st_4) 
                                                                        << 0x16U) 
                                                                       | ((0x3ff800U 
                                                                           & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                              << 0xbU)) 
                                                                          | (IData)(vlSelf->__PVT__int_pooling))))))))));
        }
        if ((0x10U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld))) {
            vlSelf->__PVT__pipe_vld_1 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_1) {
            vlSelf->__PVT__pipe_vld_1 = 0U;
        }
    } else {
        vlSelf->__PVT__pipe_dp_2 = 0ULL;
        vlSelf->__PVT__pipe_vld_2 = 0U;
        vlSelf->__PVT__pipe_dp_1 = 0ULL;
        vlSelf->__PVT__pipe_vld_1 = 0U;
    }
    vlSelf->__PVT__pooling_size = __Vdly__pooling_size;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4__29(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4__29\n"); );
    // Body
    vlSelf->pooling_out = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_4__last_out_en)
                            ? ((0x10U & (IData)(vlSelf->__PVT__pooling_cnt))
                                ? 0U : ((8U & (IData)(vlSelf->__PVT__pooling_cnt))
                                         ? 0U : ((4U 
                                                  & (IData)(vlSelf->__PVT__pooling_cnt))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out7)
                                                    : (IData)(vlSelf->__PVT__flush_out6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out5)
                                                    : (IData)(vlSelf->__PVT__flush_out4)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out3)
                                                    : (IData)(vlSelf->__PVT__flush_out2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out1)
                                                    : (IData)(vlSelf->__PVT__flush_out0))))))
                            : ((0x10U & (IData)(vlSelf->__PVT__pooling_cnt))
                                ? 0U : ((8U & (IData)(vlSelf->__PVT__pooling_cnt))
                                         ? 0U : ((4U 
                                                  & (IData)(vlSelf->__PVT__pooling_cnt))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result7_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result6_d4))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result5_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result4_d4)))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result3_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result2_d4))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result1_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result0_d4)))))))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4__37(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4__37\n"); );
    // Body
    vlSelf->__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_4)) 
                                        | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_prdy) 
                                           >> 4U)));
    vlSelf->__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_4)) 
                                       | (IData)(vlSelf->__PVT__add_out_rdy)));
    vlSelf->__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_3)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_3)));
    vlSelf->__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_2)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_2)));
    vlSelf->__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_1)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_1)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4__45(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4__45\n"); );
    // Body
    vlSelf->__PVT__load_din = (((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld) 
                                  >> 4U) & (IData)(vlSelf->__PVT__pipe_rdy_0)) 
                                & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable))) 
                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en) 
                                  >> 4U));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4__53(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4__53\n"); );
    // Init
    SData/*10:0*/ __Vfunc_pooling_fun__16__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_fun__16__data0;
    SData/*10:0*/ __Vfunc_pooling_fun__16__data1;
    CData/*1:0*/ __Vfunc_pooling_fun__16__pooling_type;
    CData/*0:0*/ __Vfunc_pooling_fun__16__min_pooling;
    CData/*0:0*/ __Vfunc_pooling_fun__16__max_pooling;
    CData/*0:0*/ __Vfunc_pooling_fun__16__mean_pooling;
    SData/*10:0*/ __Vfunc_pooling_SUM__17__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_SUM__17__data0;
    SData/*10:0*/ __Vfunc_pooling_SUM__17__data1;
    SData/*10:0*/ __Vfunc_pooling_MIN__18__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_MIN__18__data0;
    SData/*10:0*/ __Vfunc_pooling_MIN__18__data1;
    CData/*0:0*/ __Vfunc_pooling_MIN__18__min_int_ff;
    SData/*10:0*/ __Vfunc_pooling_MAX__19__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_MAX__19__data0;
    SData/*10:0*/ __Vfunc_pooling_MAX__19__data1;
    CData/*0:0*/ __Vfunc_pooling_MAX__19__max_int_ff;
    // Body
    __Vfunc_pooling_fun__16__pooling_type = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d;
    if (vlSelf->__PVT__load_din) {
        __Vfunc_pooling_fun__16__data1 = (0x7ffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0);
        __Vfunc_pooling_fun__16__data0 = (0x7ffU & 
                                          ((0x20000U 
                                            & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                            ? ((0x10000U 
                                                & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                ? (
                                                   (0x8000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? (IData)(vlSelf->__PVT__latch_result7_d4)
                                                    : (IData)(vlSelf->__PVT__latch_result6_d4))
                                                : (
                                                   (0x8000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? (IData)(vlSelf->__PVT__latch_result5_d4)
                                                    : (IData)(vlSelf->__PVT__latch_result4_d4)))
                                            : ((0x10000U 
                                                & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                ? (
                                                   (0x8000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? (IData)(vlSelf->__PVT__latch_result3_d4)
                                                    : (IData)(vlSelf->__PVT__latch_result2_d4))
                                                : (
                                                   (0x8000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? (IData)(vlSelf->__PVT__latch_result1_d4)
                                                    : (IData)(vlSelf->__PVT__latch_result0_d4)))));
    } else {
        __Vfunc_pooling_fun__16__data1 = 0U;
        __Vfunc_pooling_fun__16__data0 = 0U;
    }
    __Vfunc_pooling_fun__16__min_pooling = (2U == (IData)(__Vfunc_pooling_fun__16__pooling_type));
    __Vfunc_pooling_fun__16__max_pooling = (1U == (IData)(__Vfunc_pooling_fun__16__pooling_type));
    __Vfunc_pooling_fun__16__mean_pooling = (0U == (IData)(__Vfunc_pooling_fun__16__pooling_type));
    __Vfunc_pooling_MAX__19__data1 = __Vfunc_pooling_fun__16__data1;
    __Vfunc_pooling_MAX__19__data0 = __Vfunc_pooling_fun__16__data0;
    __Vfunc_pooling_MAX__19__max_int_ff = VL_GTS_III(11, (IData)(__Vfunc_pooling_MAX__19__data0), (IData)(__Vfunc_pooling_MAX__19__data1));
    __Vfunc_pooling_MAX__19__Vfuncout = ((IData)(__Vfunc_pooling_MAX__19__max_int_ff)
                                          ? (IData)(__Vfunc_pooling_MAX__19__data0)
                                          : (IData)(__Vfunc_pooling_MAX__19__data1));
    __Vfunc_pooling_MIN__18__data1 = __Vfunc_pooling_fun__16__data1;
    __Vfunc_pooling_MIN__18__data0 = __Vfunc_pooling_fun__16__data0;
    __Vfunc_pooling_MIN__18__min_int_ff = VL_GTS_III(11, (IData)(__Vfunc_pooling_MIN__18__data1), (IData)(__Vfunc_pooling_MIN__18__data0));
    __Vfunc_pooling_MIN__18__Vfuncout = ((IData)(__Vfunc_pooling_MIN__18__min_int_ff)
                                          ? (IData)(__Vfunc_pooling_MIN__18__data0)
                                          : (IData)(__Vfunc_pooling_MIN__18__data1));
    __Vfunc_pooling_SUM__17__data1 = __Vfunc_pooling_fun__16__data1;
    __Vfunc_pooling_SUM__17__data0 = __Vfunc_pooling_fun__16__data0;
    __Vfunc_pooling_SUM__17__Vfuncout = (0x7ffU & ((IData)(__Vfunc_pooling_SUM__17__data1) 
                                                   + (IData)(__Vfunc_pooling_SUM__17__data0)));
    __Vfunc_pooling_fun__16__Vfuncout = (0x7ffU & ((IData)(__Vfunc_pooling_fun__16__mean_pooling)
                                                    ? (IData)(__Vfunc_pooling_SUM__17__Vfuncout)
                                                    : 
                                                   ((IData)(__Vfunc_pooling_fun__16__min_pooling)
                                                     ? (IData)(__Vfunc_pooling_MIN__18__Vfuncout)
                                                     : 
                                                    ((IData)(__Vfunc_pooling_fun__16__max_pooling)
                                                      ? (IData)(__Vfunc_pooling_MAX__19__Vfuncout)
                                                      : 0U))));
    vlSelf->__PVT__int_pooling = __Vfunc_pooling_fun__16__Vfuncout;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5__22(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5__22\n"); );
    // Init
    CData/*2:0*/ __Vdly__pooling_size;
    SData/*10:0*/ __Vdly__latch_result6_d3;
    SData/*10:0*/ __Vdly__latch_result5_d3;
    SData/*10:0*/ __Vdly__latch_result4_d3;
    SData/*10:0*/ __Vdly__latch_result3_d3;
    SData/*10:0*/ __Vdly__latch_result1_d3;
    SData/*10:0*/ __Vdly__latch_result0_d3;
    SData/*10:0*/ __Vdly__latch_result7_d3;
    SData/*10:0*/ __Vdly__latch_result2_d3;
    SData/*14:0*/ __Vdly__flush_out6;
    SData/*14:0*/ __Vdly__flush_out5;
    SData/*14:0*/ __Vdly__flush_out4;
    SData/*14:0*/ __Vdly__flush_out3;
    SData/*14:0*/ __Vdly__flush_out1;
    SData/*14:0*/ __Vdly__flush_out0;
    SData/*14:0*/ __Vdly__flush_out7;
    SData/*14:0*/ __Vdly__flush_out2;
    // Body
    __Vdly__pooling_size = vlSelf->__PVT__pooling_size;
    __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
    __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
    __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
    __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
    __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
    __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
    __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
    __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
    __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
    __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
    __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
    __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
    __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
    __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
    __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
    __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__load_din) & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                 >> 0x17U))) {
            __Vdly__pooling_size = ((0x20U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_last))
                                     ? 0U : (7U & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__pooling_size))));
        }
        if ((IData)((0x200000000ULL == (0x220000000ULL 
                                        & vlSelf->__PVT__pipe_dp_4)))) {
            if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
                __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
                __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
                __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
                __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
                __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
                __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
                __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
            } else if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
                __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
                __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
                __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
                __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
                __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
                __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
                __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
            } else {
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out2 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result2_d4)));
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out7 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result7_d4)));
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out0 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result0_d4)));
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out1 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result1_d4)));
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out3 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result3_d4)));
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out4 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result4_d4)));
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out5 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result5_d4)));
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out6 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result6_d4)));
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelf->__PVT__pipe_vld_4) & (IData)(vlSelf->__PVT__add_out_rdy))) {
            if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
                __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
                __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
                __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
                __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
                __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
                __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
                __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
            } else if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
                __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
                __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
                __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
                __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
                __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
                __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
                __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
            } else {
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result2_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result7_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result0_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result1_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result3_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result4_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result5_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result6_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
            }
        }
        if ((((IData)(vlSelf->__PVT__pipe_vld_4) & 
              ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_prdy) 
               >> 5U)) & ((IData)((0x200000000ULL == 
                                   (0x220000000ULL 
                                    & vlSelf->__PVT__pipe_dp_4))) 
                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_5__last_out_en)))) {
            vlSelf->__PVT__pooling_cnt = ((7U == (IData)(vlSelf->__PVT__pooling_cnt))
                                           ? 0U : (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__pooling_cnt))));
        }
        vlSelf->__PVT__flush_out2 = __Vdly__flush_out2;
        vlSelf->__PVT__flush_out7 = __Vdly__flush_out7;
        vlSelf->__PVT__flush_out0 = __Vdly__flush_out0;
        vlSelf->__PVT__flush_out1 = __Vdly__flush_out1;
        vlSelf->__PVT__flush_out3 = __Vdly__flush_out3;
        vlSelf->__PVT__flush_out4 = __Vdly__flush_out4;
        vlSelf->__PVT__flush_out5 = __Vdly__flush_out5;
        vlSelf->__PVT__flush_out6 = __Vdly__flush_out6;
        vlSelf->__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
        vlSelf->__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
        vlSelf->__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
        vlSelf->__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
        vlSelf->__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
        vlSelf->__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
        vlSelf->__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
        vlSelf->__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
        if (((IData)(vlSelf->__PVT__pipe_vld_3) & (IData)(vlSelf->__PVT__pipe_rdy_3))) {
            vlSelf->__PVT__pipe_dp_4 = vlSelf->__PVT__pipe_dp_3;
        }
        if (vlSelf->__PVT__pipe_vld_3) {
            vlSelf->__PVT__pipe_vld_4 = 1U;
        } else if (vlSelf->__PVT__add_out_rdy) {
            vlSelf->__PVT__pipe_vld_4 = 0U;
        }
    } else {
        __Vdly__pooling_size = 0U;
        __Vdly__flush_out2 = 0U;
        __Vdly__flush_out7 = 0U;
        __Vdly__flush_out0 = 0U;
        __Vdly__flush_out1 = 0U;
        __Vdly__flush_out3 = 0U;
        __Vdly__flush_out4 = 0U;
        __Vdly__flush_out5 = 0U;
        __Vdly__flush_out6 = 0U;
        __Vdly__latch_result2_d3 = 0U;
        __Vdly__latch_result7_d3 = 0U;
        __Vdly__latch_result0_d3 = 0U;
        __Vdly__latch_result1_d3 = 0U;
        __Vdly__latch_result3_d3 = 0U;
        __Vdly__latch_result4_d3 = 0U;
        __Vdly__latch_result5_d3 = 0U;
        __Vdly__latch_result6_d3 = 0U;
        vlSelf->__PVT__pooling_cnt = 0U;
        vlSelf->__PVT__flush_out2 = __Vdly__flush_out2;
        vlSelf->__PVT__flush_out7 = __Vdly__flush_out7;
        vlSelf->__PVT__flush_out0 = __Vdly__flush_out0;
        vlSelf->__PVT__flush_out1 = __Vdly__flush_out1;
        vlSelf->__PVT__flush_out3 = __Vdly__flush_out3;
        vlSelf->__PVT__flush_out4 = __Vdly__flush_out4;
        vlSelf->__PVT__flush_out5 = __Vdly__flush_out5;
        vlSelf->__PVT__flush_out6 = __Vdly__flush_out6;
        vlSelf->__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
        vlSelf->__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
        vlSelf->__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
        vlSelf->__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
        vlSelf->__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
        vlSelf->__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
        vlSelf->__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
        vlSelf->__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
        vlSelf->__PVT__pipe_dp_4 = 0ULL;
        vlSelf->__PVT__pipe_vld_4 = 0U;
    }
    vlSelf->__PVT__pooling_result = (0x7ffU & ((1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__pipe_dp_4 
                                                           >> 0x16U)))
                                                ? (IData)(
                                                          (vlSelf->__PVT__pipe_dp_4 
                                                           >> 0xbU))
                                                : (IData)(vlSelf->__PVT__pipe_dp_4)));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__pipe_vld_2) & (IData)(vlSelf->__PVT__pipe_rdy_2))) {
            vlSelf->__PVT__pipe_dp_3 = vlSelf->__PVT__pipe_dp_2;
        }
        if (vlSelf->__PVT__pipe_vld_2) {
            vlSelf->__PVT__pipe_vld_3 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_3) {
            vlSelf->__PVT__pipe_vld_3 = 0U;
        }
    } else {
        vlSelf->__PVT__pipe_dp_3 = 0ULL;
        vlSelf->__PVT__pipe_vld_3 = 0U;
    }
    vlSelf->__PVT__latch_result0_d4 = ((0U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result0_d3));
    vlSelf->__PVT__latch_result1_d4 = ((1U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result1_d3));
    vlSelf->__PVT__latch_result2_d4 = ((2U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result2_d3));
    vlSelf->__PVT__latch_result3_d4 = ((3U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result3_d3));
    vlSelf->__PVT__latch_result4_d4 = ((4U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result4_d3));
    vlSelf->__PVT__latch_result5_d4 = ((5U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result5_d3));
    vlSelf->__PVT__latch_result6_d4 = ((6U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result6_d3));
    vlSelf->__PVT__latch_result7_d4 = ((7U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result7_d3));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__pipe_vld_1) & (IData)(vlSelf->__PVT__pipe_rdy_1))) {
            vlSelf->__PVT__pipe_dp_2 = vlSelf->__PVT__pipe_dp_1;
        }
        if (vlSelf->__PVT__pipe_vld_1) {
            vlSelf->__PVT__pipe_vld_2 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_2) {
            vlSelf->__PVT__pipe_vld_2 = 0U;
        }
        if ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld) 
              >> 5U) & (IData)(vlSelf->__PVT__pipe_rdy_0))) {
            vlSelf->__PVT__pipe_dp_1 = (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_last) 
                                                             >> 5U)))) 
                                         << 0x21U) 
                                        | (((QData)((IData)(vlSelf->__PVT__pooling_size)) 
                                            << 0x1eU) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable) 
                                                               << 0x1dU) 
                                                              | ((0x7000000U 
                                                                  & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                     << 9U)) 
                                                                 | ((0x800000U 
                                                                     & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0) 
                                                                    | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_1st_5) 
                                                                        << 0x16U) 
                                                                       | ((0x3ff800U 
                                                                           & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                              << 0xbU)) 
                                                                          | (IData)(vlSelf->__PVT__int_pooling))))))))));
        }
        if ((0x20U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld))) {
            vlSelf->__PVT__pipe_vld_1 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_1) {
            vlSelf->__PVT__pipe_vld_1 = 0U;
        }
    } else {
        vlSelf->__PVT__pipe_dp_2 = 0ULL;
        vlSelf->__PVT__pipe_vld_2 = 0U;
        vlSelf->__PVT__pipe_dp_1 = 0ULL;
        vlSelf->__PVT__pipe_vld_1 = 0U;
    }
    vlSelf->__PVT__pooling_size = __Vdly__pooling_size;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5__30(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5__30\n"); );
    // Body
    vlSelf->pooling_out = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_5__last_out_en)
                            ? ((0x10U & (IData)(vlSelf->__PVT__pooling_cnt))
                                ? 0U : ((8U & (IData)(vlSelf->__PVT__pooling_cnt))
                                         ? 0U : ((4U 
                                                  & (IData)(vlSelf->__PVT__pooling_cnt))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out7)
                                                    : (IData)(vlSelf->__PVT__flush_out6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out5)
                                                    : (IData)(vlSelf->__PVT__flush_out4)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out3)
                                                    : (IData)(vlSelf->__PVT__flush_out2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out1)
                                                    : (IData)(vlSelf->__PVT__flush_out0))))))
                            : ((0x10U & (IData)(vlSelf->__PVT__pooling_cnt))
                                ? 0U : ((8U & (IData)(vlSelf->__PVT__pooling_cnt))
                                         ? 0U : ((4U 
                                                  & (IData)(vlSelf->__PVT__pooling_cnt))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result7_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result6_d4))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result5_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result4_d4)))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result3_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result2_d4))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result1_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result0_d4)))))))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5__38(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5__38\n"); );
    // Body
    vlSelf->__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_4)) 
                                        | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_prdy) 
                                           >> 5U)));
    vlSelf->__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_4)) 
                                       | (IData)(vlSelf->__PVT__add_out_rdy)));
    vlSelf->__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_3)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_3)));
    vlSelf->__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_2)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_2)));
    vlSelf->__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_1)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_1)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5__46(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5__46\n"); );
    // Body
    vlSelf->__PVT__load_din = (((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld) 
                                  >> 5U) & (IData)(vlSelf->__PVT__pipe_rdy_0)) 
                                & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable))) 
                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en) 
                                  >> 5U));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5__54(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5__54\n"); );
    // Init
    SData/*10:0*/ __Vfunc_pooling_fun__20__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_fun__20__data0;
    SData/*10:0*/ __Vfunc_pooling_fun__20__data1;
    CData/*1:0*/ __Vfunc_pooling_fun__20__pooling_type;
    CData/*0:0*/ __Vfunc_pooling_fun__20__min_pooling;
    CData/*0:0*/ __Vfunc_pooling_fun__20__max_pooling;
    CData/*0:0*/ __Vfunc_pooling_fun__20__mean_pooling;
    SData/*10:0*/ __Vfunc_pooling_SUM__21__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_SUM__21__data0;
    SData/*10:0*/ __Vfunc_pooling_SUM__21__data1;
    SData/*10:0*/ __Vfunc_pooling_MIN__22__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_MIN__22__data0;
    SData/*10:0*/ __Vfunc_pooling_MIN__22__data1;
    CData/*0:0*/ __Vfunc_pooling_MIN__22__min_int_ff;
    SData/*10:0*/ __Vfunc_pooling_MAX__23__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_MAX__23__data0;
    SData/*10:0*/ __Vfunc_pooling_MAX__23__data1;
    CData/*0:0*/ __Vfunc_pooling_MAX__23__max_int_ff;
    // Body
    __Vfunc_pooling_fun__20__pooling_type = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d;
    if (vlSelf->__PVT__load_din) {
        __Vfunc_pooling_fun__20__data1 = (0x7ffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0);
        __Vfunc_pooling_fun__20__data0 = (0x7ffU & 
                                          ((0x20000U 
                                            & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                            ? ((0x10000U 
                                                & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                ? (
                                                   (0x8000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? (IData)(vlSelf->__PVT__latch_result7_d4)
                                                    : (IData)(vlSelf->__PVT__latch_result6_d4))
                                                : (
                                                   (0x8000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? (IData)(vlSelf->__PVT__latch_result5_d4)
                                                    : (IData)(vlSelf->__PVT__latch_result4_d4)))
                                            : ((0x10000U 
                                                & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                ? (
                                                   (0x8000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? (IData)(vlSelf->__PVT__latch_result3_d4)
                                                    : (IData)(vlSelf->__PVT__latch_result2_d4))
                                                : (
                                                   (0x8000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? (IData)(vlSelf->__PVT__latch_result1_d4)
                                                    : (IData)(vlSelf->__PVT__latch_result0_d4)))));
    } else {
        __Vfunc_pooling_fun__20__data1 = 0U;
        __Vfunc_pooling_fun__20__data0 = 0U;
    }
    __Vfunc_pooling_fun__20__min_pooling = (2U == (IData)(__Vfunc_pooling_fun__20__pooling_type));
    __Vfunc_pooling_fun__20__max_pooling = (1U == (IData)(__Vfunc_pooling_fun__20__pooling_type));
    __Vfunc_pooling_fun__20__mean_pooling = (0U == (IData)(__Vfunc_pooling_fun__20__pooling_type));
    __Vfunc_pooling_MAX__23__data1 = __Vfunc_pooling_fun__20__data1;
    __Vfunc_pooling_MAX__23__data0 = __Vfunc_pooling_fun__20__data0;
    __Vfunc_pooling_MAX__23__max_int_ff = VL_GTS_III(11, (IData)(__Vfunc_pooling_MAX__23__data0), (IData)(__Vfunc_pooling_MAX__23__data1));
    __Vfunc_pooling_MAX__23__Vfuncout = ((IData)(__Vfunc_pooling_MAX__23__max_int_ff)
                                          ? (IData)(__Vfunc_pooling_MAX__23__data0)
                                          : (IData)(__Vfunc_pooling_MAX__23__data1));
    __Vfunc_pooling_MIN__22__data1 = __Vfunc_pooling_fun__20__data1;
    __Vfunc_pooling_MIN__22__data0 = __Vfunc_pooling_fun__20__data0;
    __Vfunc_pooling_MIN__22__min_int_ff = VL_GTS_III(11, (IData)(__Vfunc_pooling_MIN__22__data1), (IData)(__Vfunc_pooling_MIN__22__data0));
    __Vfunc_pooling_MIN__22__Vfuncout = ((IData)(__Vfunc_pooling_MIN__22__min_int_ff)
                                          ? (IData)(__Vfunc_pooling_MIN__22__data0)
                                          : (IData)(__Vfunc_pooling_MIN__22__data1));
    __Vfunc_pooling_SUM__21__data1 = __Vfunc_pooling_fun__20__data1;
    __Vfunc_pooling_SUM__21__data0 = __Vfunc_pooling_fun__20__data0;
    __Vfunc_pooling_SUM__21__Vfuncout = (0x7ffU & ((IData)(__Vfunc_pooling_SUM__21__data1) 
                                                   + (IData)(__Vfunc_pooling_SUM__21__data0)));
    __Vfunc_pooling_fun__20__Vfuncout = (0x7ffU & ((IData)(__Vfunc_pooling_fun__20__mean_pooling)
                                                    ? (IData)(__Vfunc_pooling_SUM__21__Vfuncout)
                                                    : 
                                                   ((IData)(__Vfunc_pooling_fun__20__min_pooling)
                                                     ? (IData)(__Vfunc_pooling_MIN__22__Vfuncout)
                                                     : 
                                                    ((IData)(__Vfunc_pooling_fun__20__max_pooling)
                                                      ? (IData)(__Vfunc_pooling_MAX__23__Vfuncout)
                                                      : 0U))));
    vlSelf->__PVT__int_pooling = __Vfunc_pooling_fun__20__Vfuncout;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6__23(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6__23\n"); );
    // Init
    CData/*2:0*/ __Vdly__pooling_size;
    SData/*10:0*/ __Vdly__latch_result6_d3;
    SData/*10:0*/ __Vdly__latch_result5_d3;
    SData/*10:0*/ __Vdly__latch_result4_d3;
    SData/*10:0*/ __Vdly__latch_result3_d3;
    SData/*10:0*/ __Vdly__latch_result1_d3;
    SData/*10:0*/ __Vdly__latch_result0_d3;
    SData/*10:0*/ __Vdly__latch_result7_d3;
    SData/*10:0*/ __Vdly__latch_result2_d3;
    SData/*14:0*/ __Vdly__flush_out6;
    SData/*14:0*/ __Vdly__flush_out5;
    SData/*14:0*/ __Vdly__flush_out4;
    SData/*14:0*/ __Vdly__flush_out3;
    SData/*14:0*/ __Vdly__flush_out1;
    SData/*14:0*/ __Vdly__flush_out0;
    SData/*14:0*/ __Vdly__flush_out7;
    SData/*14:0*/ __Vdly__flush_out2;
    // Body
    __Vdly__pooling_size = vlSelf->__PVT__pooling_size;
    __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
    __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
    __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
    __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
    __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
    __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
    __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
    __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
    __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
    __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
    __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
    __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
    __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
    __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
    __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
    __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__load_din) & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                 >> 0x17U))) {
            __Vdly__pooling_size = ((0x40U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_last))
                                     ? 0U : (7U & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__pooling_size))));
        }
        if ((IData)((0x200000000ULL == (0x220000000ULL 
                                        & vlSelf->__PVT__pipe_dp_4)))) {
            if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
                __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
                __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
                __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
                __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
                __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
                __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
                __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
            } else if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
                __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
                __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
                __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
                __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
                __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
                __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
                __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
            } else {
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out2 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result2_d4)));
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out7 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result7_d4)));
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out0 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result0_d4)));
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out1 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result1_d4)));
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out3 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result3_d4)));
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out4 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result4_d4)));
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out5 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result5_d4)));
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out6 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result6_d4)));
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelf->__PVT__pipe_vld_4) & (IData)(vlSelf->__PVT__add_out_rdy))) {
            if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
                __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
                __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
                __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
                __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
                __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
                __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
                __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
            } else if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
                __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
                __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
                __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
                __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
                __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
                __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
                __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
            } else {
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result2_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result7_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result0_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result1_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result3_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result4_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result5_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result6_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
            }
        }
        if ((((IData)(vlSelf->__PVT__pipe_vld_4) & 
              ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_prdy) 
               >> 6U)) & ((IData)((0x200000000ULL == 
                                   (0x220000000ULL 
                                    & vlSelf->__PVT__pipe_dp_4))) 
                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_6__last_out_en)))) {
            vlSelf->__PVT__pooling_cnt = ((7U == (IData)(vlSelf->__PVT__pooling_cnt))
                                           ? 0U : (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__pooling_cnt))));
        }
        vlSelf->__PVT__flush_out2 = __Vdly__flush_out2;
        vlSelf->__PVT__flush_out7 = __Vdly__flush_out7;
        vlSelf->__PVT__flush_out0 = __Vdly__flush_out0;
        vlSelf->__PVT__flush_out1 = __Vdly__flush_out1;
        vlSelf->__PVT__flush_out3 = __Vdly__flush_out3;
        vlSelf->__PVT__flush_out4 = __Vdly__flush_out4;
        vlSelf->__PVT__flush_out5 = __Vdly__flush_out5;
        vlSelf->__PVT__flush_out6 = __Vdly__flush_out6;
        vlSelf->__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
        vlSelf->__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
        vlSelf->__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
        vlSelf->__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
        vlSelf->__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
        vlSelf->__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
        vlSelf->__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
        vlSelf->__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
        if (((IData)(vlSelf->__PVT__pipe_vld_3) & (IData)(vlSelf->__PVT__pipe_rdy_3))) {
            vlSelf->__PVT__pipe_dp_4 = vlSelf->__PVT__pipe_dp_3;
        }
        if (vlSelf->__PVT__pipe_vld_3) {
            vlSelf->__PVT__pipe_vld_4 = 1U;
        } else if (vlSelf->__PVT__add_out_rdy) {
            vlSelf->__PVT__pipe_vld_4 = 0U;
        }
    } else {
        __Vdly__pooling_size = 0U;
        __Vdly__flush_out2 = 0U;
        __Vdly__flush_out7 = 0U;
        __Vdly__flush_out0 = 0U;
        __Vdly__flush_out1 = 0U;
        __Vdly__flush_out3 = 0U;
        __Vdly__flush_out4 = 0U;
        __Vdly__flush_out5 = 0U;
        __Vdly__flush_out6 = 0U;
        __Vdly__latch_result2_d3 = 0U;
        __Vdly__latch_result7_d3 = 0U;
        __Vdly__latch_result0_d3 = 0U;
        __Vdly__latch_result1_d3 = 0U;
        __Vdly__latch_result3_d3 = 0U;
        __Vdly__latch_result4_d3 = 0U;
        __Vdly__latch_result5_d3 = 0U;
        __Vdly__latch_result6_d3 = 0U;
        vlSelf->__PVT__pooling_cnt = 0U;
        vlSelf->__PVT__flush_out2 = __Vdly__flush_out2;
        vlSelf->__PVT__flush_out7 = __Vdly__flush_out7;
        vlSelf->__PVT__flush_out0 = __Vdly__flush_out0;
        vlSelf->__PVT__flush_out1 = __Vdly__flush_out1;
        vlSelf->__PVT__flush_out3 = __Vdly__flush_out3;
        vlSelf->__PVT__flush_out4 = __Vdly__flush_out4;
        vlSelf->__PVT__flush_out5 = __Vdly__flush_out5;
        vlSelf->__PVT__flush_out6 = __Vdly__flush_out6;
        vlSelf->__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
        vlSelf->__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
        vlSelf->__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
        vlSelf->__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
        vlSelf->__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
        vlSelf->__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
        vlSelf->__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
        vlSelf->__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
        vlSelf->__PVT__pipe_dp_4 = 0ULL;
        vlSelf->__PVT__pipe_vld_4 = 0U;
    }
    vlSelf->__PVT__pooling_result = (0x7ffU & ((1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__pipe_dp_4 
                                                           >> 0x16U)))
                                                ? (IData)(
                                                          (vlSelf->__PVT__pipe_dp_4 
                                                           >> 0xbU))
                                                : (IData)(vlSelf->__PVT__pipe_dp_4)));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__pipe_vld_2) & (IData)(vlSelf->__PVT__pipe_rdy_2))) {
            vlSelf->__PVT__pipe_dp_3 = vlSelf->__PVT__pipe_dp_2;
        }
        if (vlSelf->__PVT__pipe_vld_2) {
            vlSelf->__PVT__pipe_vld_3 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_3) {
            vlSelf->__PVT__pipe_vld_3 = 0U;
        }
    } else {
        vlSelf->__PVT__pipe_dp_3 = 0ULL;
        vlSelf->__PVT__pipe_vld_3 = 0U;
    }
    vlSelf->__PVT__latch_result0_d4 = ((0U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result0_d3));
    vlSelf->__PVT__latch_result1_d4 = ((1U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result1_d3));
    vlSelf->__PVT__latch_result2_d4 = ((2U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result2_d3));
    vlSelf->__PVT__latch_result3_d4 = ((3U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result3_d3));
    vlSelf->__PVT__latch_result4_d4 = ((4U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result4_d3));
    vlSelf->__PVT__latch_result5_d4 = ((5U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result5_d3));
    vlSelf->__PVT__latch_result6_d4 = ((6U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result6_d3));
    vlSelf->__PVT__latch_result7_d4 = ((7U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result7_d3));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__pipe_vld_1) & (IData)(vlSelf->__PVT__pipe_rdy_1))) {
            vlSelf->__PVT__pipe_dp_2 = vlSelf->__PVT__pipe_dp_1;
        }
        if (vlSelf->__PVT__pipe_vld_1) {
            vlSelf->__PVT__pipe_vld_2 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_2) {
            vlSelf->__PVT__pipe_vld_2 = 0U;
        }
        if ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld) 
              >> 6U) & (IData)(vlSelf->__PVT__pipe_rdy_0))) {
            vlSelf->__PVT__pipe_dp_1 = (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_last) 
                                                             >> 6U)))) 
                                         << 0x21U) 
                                        | (((QData)((IData)(vlSelf->__PVT__pooling_size)) 
                                            << 0x1eU) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable) 
                                                               << 0x1dU) 
                                                              | ((0x7000000U 
                                                                  & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                     << 9U)) 
                                                                 | ((0x800000U 
                                                                     & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0) 
                                                                    | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_1st_6) 
                                                                        << 0x16U) 
                                                                       | ((0x3ff800U 
                                                                           & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                              << 0xbU)) 
                                                                          | (IData)(vlSelf->__PVT__int_pooling))))))))));
        }
        if ((0x40U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld))) {
            vlSelf->__PVT__pipe_vld_1 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_1) {
            vlSelf->__PVT__pipe_vld_1 = 0U;
        }
    } else {
        vlSelf->__PVT__pipe_dp_2 = 0ULL;
        vlSelf->__PVT__pipe_vld_2 = 0U;
        vlSelf->__PVT__pipe_dp_1 = 0ULL;
        vlSelf->__PVT__pipe_vld_1 = 0U;
    }
    vlSelf->__PVT__pooling_size = __Vdly__pooling_size;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6__31(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6__31\n"); );
    // Body
    vlSelf->pooling_out = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_6__last_out_en)
                            ? ((0x10U & (IData)(vlSelf->__PVT__pooling_cnt))
                                ? 0U : ((8U & (IData)(vlSelf->__PVT__pooling_cnt))
                                         ? 0U : ((4U 
                                                  & (IData)(vlSelf->__PVT__pooling_cnt))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out7)
                                                    : (IData)(vlSelf->__PVT__flush_out6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out5)
                                                    : (IData)(vlSelf->__PVT__flush_out4)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out3)
                                                    : (IData)(vlSelf->__PVT__flush_out2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out1)
                                                    : (IData)(vlSelf->__PVT__flush_out0))))))
                            : ((0x10U & (IData)(vlSelf->__PVT__pooling_cnt))
                                ? 0U : ((8U & (IData)(vlSelf->__PVT__pooling_cnt))
                                         ? 0U : ((4U 
                                                  & (IData)(vlSelf->__PVT__pooling_cnt))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result7_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result6_d4))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result5_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result4_d4)))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result3_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result2_d4))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result1_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result0_d4)))))))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6__39(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6__39\n"); );
    // Body
    vlSelf->__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_4)) 
                                        | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_prdy) 
                                           >> 6U)));
    vlSelf->__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_4)) 
                                       | (IData)(vlSelf->__PVT__add_out_rdy)));
    vlSelf->__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_3)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_3)));
    vlSelf->__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_2)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_2)));
    vlSelf->__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_1)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_1)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6__47(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6__47\n"); );
    // Body
    vlSelf->__PVT__load_din = (((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld) 
                                  >> 6U) & (IData)(vlSelf->__PVT__pipe_rdy_0)) 
                                & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable))) 
                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en) 
                                  >> 6U));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6__55(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6__55\n"); );
    // Init
    SData/*10:0*/ __Vfunc_pooling_fun__24__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_fun__24__data0;
    SData/*10:0*/ __Vfunc_pooling_fun__24__data1;
    CData/*1:0*/ __Vfunc_pooling_fun__24__pooling_type;
    CData/*0:0*/ __Vfunc_pooling_fun__24__min_pooling;
    CData/*0:0*/ __Vfunc_pooling_fun__24__max_pooling;
    CData/*0:0*/ __Vfunc_pooling_fun__24__mean_pooling;
    SData/*10:0*/ __Vfunc_pooling_SUM__25__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_SUM__25__data0;
    SData/*10:0*/ __Vfunc_pooling_SUM__25__data1;
    SData/*10:0*/ __Vfunc_pooling_MIN__26__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_MIN__26__data0;
    SData/*10:0*/ __Vfunc_pooling_MIN__26__data1;
    CData/*0:0*/ __Vfunc_pooling_MIN__26__min_int_ff;
    SData/*10:0*/ __Vfunc_pooling_MAX__27__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_MAX__27__data0;
    SData/*10:0*/ __Vfunc_pooling_MAX__27__data1;
    CData/*0:0*/ __Vfunc_pooling_MAX__27__max_int_ff;
    // Body
    __Vfunc_pooling_fun__24__pooling_type = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d;
    if (vlSelf->__PVT__load_din) {
        __Vfunc_pooling_fun__24__data1 = (0x7ffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0);
        __Vfunc_pooling_fun__24__data0 = (0x7ffU & 
                                          ((0x20000U 
                                            & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                            ? ((0x10000U 
                                                & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                ? (
                                                   (0x8000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? (IData)(vlSelf->__PVT__latch_result7_d4)
                                                    : (IData)(vlSelf->__PVT__latch_result6_d4))
                                                : (
                                                   (0x8000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? (IData)(vlSelf->__PVT__latch_result5_d4)
                                                    : (IData)(vlSelf->__PVT__latch_result4_d4)))
                                            : ((0x10000U 
                                                & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                ? (
                                                   (0x8000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? (IData)(vlSelf->__PVT__latch_result3_d4)
                                                    : (IData)(vlSelf->__PVT__latch_result2_d4))
                                                : (
                                                   (0x8000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? (IData)(vlSelf->__PVT__latch_result1_d4)
                                                    : (IData)(vlSelf->__PVT__latch_result0_d4)))));
    } else {
        __Vfunc_pooling_fun__24__data1 = 0U;
        __Vfunc_pooling_fun__24__data0 = 0U;
    }
    __Vfunc_pooling_fun__24__min_pooling = (2U == (IData)(__Vfunc_pooling_fun__24__pooling_type));
    __Vfunc_pooling_fun__24__max_pooling = (1U == (IData)(__Vfunc_pooling_fun__24__pooling_type));
    __Vfunc_pooling_fun__24__mean_pooling = (0U == (IData)(__Vfunc_pooling_fun__24__pooling_type));
    __Vfunc_pooling_MAX__27__data1 = __Vfunc_pooling_fun__24__data1;
    __Vfunc_pooling_MAX__27__data0 = __Vfunc_pooling_fun__24__data0;
    __Vfunc_pooling_MAX__27__max_int_ff = VL_GTS_III(11, (IData)(__Vfunc_pooling_MAX__27__data0), (IData)(__Vfunc_pooling_MAX__27__data1));
    __Vfunc_pooling_MAX__27__Vfuncout = ((IData)(__Vfunc_pooling_MAX__27__max_int_ff)
                                          ? (IData)(__Vfunc_pooling_MAX__27__data0)
                                          : (IData)(__Vfunc_pooling_MAX__27__data1));
    __Vfunc_pooling_MIN__26__data1 = __Vfunc_pooling_fun__24__data1;
    __Vfunc_pooling_MIN__26__data0 = __Vfunc_pooling_fun__24__data0;
    __Vfunc_pooling_MIN__26__min_int_ff = VL_GTS_III(11, (IData)(__Vfunc_pooling_MIN__26__data1), (IData)(__Vfunc_pooling_MIN__26__data0));
    __Vfunc_pooling_MIN__26__Vfuncout = ((IData)(__Vfunc_pooling_MIN__26__min_int_ff)
                                          ? (IData)(__Vfunc_pooling_MIN__26__data0)
                                          : (IData)(__Vfunc_pooling_MIN__26__data1));
    __Vfunc_pooling_SUM__25__data1 = __Vfunc_pooling_fun__24__data1;
    __Vfunc_pooling_SUM__25__data0 = __Vfunc_pooling_fun__24__data0;
    __Vfunc_pooling_SUM__25__Vfuncout = (0x7ffU & ((IData)(__Vfunc_pooling_SUM__25__data1) 
                                                   + (IData)(__Vfunc_pooling_SUM__25__data0)));
    __Vfunc_pooling_fun__24__Vfuncout = (0x7ffU & ((IData)(__Vfunc_pooling_fun__24__mean_pooling)
                                                    ? (IData)(__Vfunc_pooling_SUM__25__Vfuncout)
                                                    : 
                                                   ((IData)(__Vfunc_pooling_fun__24__min_pooling)
                                                     ? (IData)(__Vfunc_pooling_MIN__26__Vfuncout)
                                                     : 
                                                    ((IData)(__Vfunc_pooling_fun__24__max_pooling)
                                                      ? (IData)(__Vfunc_pooling_MAX__27__Vfuncout)
                                                      : 0U))));
    vlSelf->__PVT__int_pooling = __Vfunc_pooling_fun__24__Vfuncout;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__24(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__24\n"); );
    // Init
    CData/*2:0*/ __Vdly__pooling_size;
    SData/*10:0*/ __Vdly__latch_result6_d3;
    SData/*10:0*/ __Vdly__latch_result5_d3;
    SData/*10:0*/ __Vdly__latch_result4_d3;
    SData/*10:0*/ __Vdly__latch_result3_d3;
    SData/*10:0*/ __Vdly__latch_result1_d3;
    SData/*10:0*/ __Vdly__latch_result0_d3;
    SData/*10:0*/ __Vdly__latch_result7_d3;
    SData/*10:0*/ __Vdly__latch_result2_d3;
    SData/*14:0*/ __Vdly__flush_out6;
    SData/*14:0*/ __Vdly__flush_out5;
    SData/*14:0*/ __Vdly__flush_out4;
    SData/*14:0*/ __Vdly__flush_out3;
    SData/*14:0*/ __Vdly__flush_out1;
    SData/*14:0*/ __Vdly__flush_out0;
    SData/*14:0*/ __Vdly__flush_out7;
    SData/*14:0*/ __Vdly__flush_out2;
    // Body
    __Vdly__pooling_size = vlSelf->__PVT__pooling_size;
    __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
    __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
    __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
    __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
    __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
    __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
    __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
    __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
    __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
    __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
    __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
    __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
    __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
    __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
    __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
    __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__load_din) & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                 >> 0x17U))) {
            __Vdly__pooling_size = ((0x80U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_last))
                                     ? 0U : (7U & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__pooling_size))));
        }
        if ((IData)((0x200000000ULL == (0x220000000ULL 
                                        & vlSelf->__PVT__pipe_dp_4)))) {
            if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
                __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
                __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
                __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
                __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
                __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
                __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
                __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
            } else if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__flush_out2 = vlSelf->__PVT__flush_out2;
                __Vdly__flush_out7 = vlSelf->__PVT__flush_out7;
                __Vdly__flush_out0 = vlSelf->__PVT__flush_out0;
                __Vdly__flush_out1 = vlSelf->__PVT__flush_out1;
                __Vdly__flush_out3 = vlSelf->__PVT__flush_out3;
                __Vdly__flush_out4 = vlSelf->__PVT__flush_out4;
                __Vdly__flush_out5 = vlSelf->__PVT__flush_out5;
                __Vdly__flush_out6 = vlSelf->__PVT__flush_out6;
            } else {
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out2 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result2_d4)));
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out7 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result7_d4)));
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out0 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result0_d4)));
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out1 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result1_d4)));
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out3 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result3_d4)));
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out4 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result4_d4)));
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out5 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result5_d4)));
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out6 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelf->__PVT__latch_result6_d4)));
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelf->__PVT__pipe_vld_4) & (IData)(vlSelf->__PVT__add_out_rdy))) {
            if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
                __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
                __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
                __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
                __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
                __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
                __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
                __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
            } else if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__latch_result2_d3 = vlSelf->__PVT__latch_result2_d3;
                __Vdly__latch_result7_d3 = vlSelf->__PVT__latch_result7_d3;
                __Vdly__latch_result0_d3 = vlSelf->__PVT__latch_result0_d3;
                __Vdly__latch_result1_d3 = vlSelf->__PVT__latch_result1_d3;
                __Vdly__latch_result3_d3 = vlSelf->__PVT__latch_result3_d3;
                __Vdly__latch_result4_d3 = vlSelf->__PVT__latch_result4_d3;
                __Vdly__latch_result5_d3 = vlSelf->__PVT__latch_result5_d3;
                __Vdly__latch_result6_d3 = vlSelf->__PVT__latch_result6_d3;
            } else {
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result2_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result7_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result0_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result1_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result3_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result4_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result5_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                    if ((1U & (IData)((vlSelf->__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelf->__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result6_d3 
                                = vlSelf->__PVT__pooling_result;
                        }
                    }
                }
            }
        }
        if ((((IData)(vlSelf->__PVT__pipe_vld_4) & 
              ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_prdy) 
               >> 7U)) & ((IData)((0x200000000ULL == 
                                   (0x220000000ULL 
                                    & vlSelf->__PVT__pipe_dp_4))) 
                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_7__last_out_en)))) {
            vlSelf->__PVT__pooling_cnt = ((7U == (IData)(vlSelf->__PVT__pooling_cnt))
                                           ? 0U : (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__pooling_cnt))));
        }
        vlSelf->__PVT__flush_out2 = __Vdly__flush_out2;
        vlSelf->__PVT__flush_out7 = __Vdly__flush_out7;
        vlSelf->__PVT__flush_out0 = __Vdly__flush_out0;
        vlSelf->__PVT__flush_out1 = __Vdly__flush_out1;
        vlSelf->__PVT__flush_out3 = __Vdly__flush_out3;
        vlSelf->__PVT__flush_out4 = __Vdly__flush_out4;
        vlSelf->__PVT__flush_out5 = __Vdly__flush_out5;
        vlSelf->__PVT__flush_out6 = __Vdly__flush_out6;
        vlSelf->__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
        vlSelf->__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
        vlSelf->__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
        vlSelf->__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
        vlSelf->__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
        vlSelf->__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
        vlSelf->__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
        vlSelf->__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
        if (((IData)(vlSelf->__PVT__pipe_vld_3) & (IData)(vlSelf->__PVT__pipe_rdy_3))) {
            vlSelf->__PVT__pipe_dp_4 = vlSelf->__PVT__pipe_dp_3;
        }
        if (vlSelf->__PVT__pipe_vld_3) {
            vlSelf->__PVT__pipe_vld_4 = 1U;
        } else if (vlSelf->__PVT__add_out_rdy) {
            vlSelf->__PVT__pipe_vld_4 = 0U;
        }
    } else {
        __Vdly__pooling_size = 0U;
        __Vdly__flush_out2 = 0U;
        __Vdly__flush_out7 = 0U;
        __Vdly__flush_out0 = 0U;
        __Vdly__flush_out1 = 0U;
        __Vdly__flush_out3 = 0U;
        __Vdly__flush_out4 = 0U;
        __Vdly__flush_out5 = 0U;
        __Vdly__flush_out6 = 0U;
        __Vdly__latch_result2_d3 = 0U;
        __Vdly__latch_result7_d3 = 0U;
        __Vdly__latch_result0_d3 = 0U;
        __Vdly__latch_result1_d3 = 0U;
        __Vdly__latch_result3_d3 = 0U;
        __Vdly__latch_result4_d3 = 0U;
        __Vdly__latch_result5_d3 = 0U;
        __Vdly__latch_result6_d3 = 0U;
        vlSelf->__PVT__pooling_cnt = 0U;
        vlSelf->__PVT__flush_out2 = __Vdly__flush_out2;
        vlSelf->__PVT__flush_out7 = __Vdly__flush_out7;
        vlSelf->__PVT__flush_out0 = __Vdly__flush_out0;
        vlSelf->__PVT__flush_out1 = __Vdly__flush_out1;
        vlSelf->__PVT__flush_out3 = __Vdly__flush_out3;
        vlSelf->__PVT__flush_out4 = __Vdly__flush_out4;
        vlSelf->__PVT__flush_out5 = __Vdly__flush_out5;
        vlSelf->__PVT__flush_out6 = __Vdly__flush_out6;
        vlSelf->__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
        vlSelf->__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
        vlSelf->__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
        vlSelf->__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
        vlSelf->__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
        vlSelf->__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
        vlSelf->__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
        vlSelf->__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
        vlSelf->__PVT__pipe_dp_4 = 0ULL;
        vlSelf->__PVT__pipe_vld_4 = 0U;
    }
    vlSelf->__PVT__pooling_result = (0x7ffU & ((1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__pipe_dp_4 
                                                           >> 0x16U)))
                                                ? (IData)(
                                                          (vlSelf->__PVT__pipe_dp_4 
                                                           >> 0xbU))
                                                : (IData)(vlSelf->__PVT__pipe_dp_4)));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__pipe_vld_2) & (IData)(vlSelf->__PVT__pipe_rdy_2))) {
            vlSelf->__PVT__pipe_dp_3 = vlSelf->__PVT__pipe_dp_2;
        }
        if (vlSelf->__PVT__pipe_vld_2) {
            vlSelf->__PVT__pipe_vld_3 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_3) {
            vlSelf->__PVT__pipe_vld_3 = 0U;
        }
    } else {
        vlSelf->__PVT__pipe_dp_3 = 0ULL;
        vlSelf->__PVT__pipe_vld_3 = 0U;
    }
    vlSelf->__PVT__latch_result0_d4 = ((0U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result0_d3));
    vlSelf->__PVT__latch_result1_d4 = ((1U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result1_d3));
    vlSelf->__PVT__latch_result2_d4 = ((2U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result2_d3));
    vlSelf->__PVT__latch_result3_d4 = ((3U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result3_d3));
    vlSelf->__PVT__latch_result4_d4 = ((4U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result4_d3));
    vlSelf->__PVT__latch_result5_d4 = ((5U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result5_d3));
    vlSelf->__PVT__latch_result6_d4 = ((6U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result6_d3));
    vlSelf->__PVT__latch_result7_d4 = ((7U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__pipe_dp_4 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->__PVT__pooling_result)
                                        : (IData)(vlSelf->__PVT__latch_result7_d3));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__pipe_vld_1) & (IData)(vlSelf->__PVT__pipe_rdy_1))) {
            vlSelf->__PVT__pipe_dp_2 = vlSelf->__PVT__pipe_dp_1;
        }
        if (vlSelf->__PVT__pipe_vld_1) {
            vlSelf->__PVT__pipe_vld_2 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_2) {
            vlSelf->__PVT__pipe_vld_2 = 0U;
        }
        if ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld) 
              >> 7U) & (IData)(vlSelf->__PVT__pipe_rdy_0))) {
            vlSelf->__PVT__pipe_dp_1 = (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_last) 
                                                             >> 7U)))) 
                                         << 0x21U) 
                                        | (((QData)((IData)(vlSelf->__PVT__pooling_size)) 
                                            << 0x1eU) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable) 
                                                               << 0x1dU) 
                                                              | ((0x7000000U 
                                                                  & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                     << 9U)) 
                                                                 | ((0x800000U 
                                                                     & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0) 
                                                                    | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_1st_7) 
                                                                        << 0x16U) 
                                                                       | ((0x3ff800U 
                                                                           & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                              << 0xbU)) 
                                                                          | (IData)(vlSelf->__PVT__int_pooling))))))))));
        }
        if ((0x80U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld))) {
            vlSelf->__PVT__pipe_vld_1 = 1U;
        } else if (vlSelf->__PVT__pipe_rdy_1) {
            vlSelf->__PVT__pipe_vld_1 = 0U;
        }
    } else {
        vlSelf->__PVT__pipe_dp_2 = 0ULL;
        vlSelf->__PVT__pipe_vld_2 = 0U;
        vlSelf->__PVT__pipe_dp_1 = 0ULL;
        vlSelf->__PVT__pipe_vld_1 = 0U;
    }
    vlSelf->__PVT__pooling_size = __Vdly__pooling_size;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__32(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__32\n"); );
    // Body
    vlSelf->pooling_out = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_7__last_out_en)
                            ? ((0x10U & (IData)(vlSelf->__PVT__pooling_cnt))
                                ? 0U : ((8U & (IData)(vlSelf->__PVT__pooling_cnt))
                                         ? 0U : ((4U 
                                                  & (IData)(vlSelf->__PVT__pooling_cnt))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out7)
                                                    : (IData)(vlSelf->__PVT__flush_out6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out5)
                                                    : (IData)(vlSelf->__PVT__flush_out4)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out3)
                                                    : (IData)(vlSelf->__PVT__flush_out2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? (IData)(vlSelf->__PVT__flush_out1)
                                                    : (IData)(vlSelf->__PVT__flush_out0))))))
                            : ((0x10U & (IData)(vlSelf->__PVT__pooling_cnt))
                                ? 0U : ((8U & (IData)(vlSelf->__PVT__pooling_cnt))
                                         ? 0U : ((4U 
                                                  & (IData)(vlSelf->__PVT__pooling_cnt))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result7_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result6_d4))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result5_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result4_d4)))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__pooling_cnt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result3_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result2_d4))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__pooling_cnt))
                                                    ? 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result1_d4)))
                                                    : 
                                                   ((0x4000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__pipe_dp_4 
                                                                 >> 0x17U)) 
                                                        << 0xeU)) 
                                                    | ((0x3800U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__pipe_dp_4 
                                                                    >> 0x1eU)) 
                                                           << 0xbU)) 
                                                       | (IData)(vlSelf->__PVT__latch_result0_d4)))))))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__40(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__40\n"); );
    // Body
    vlSelf->__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_4)) 
                                        | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_prdy) 
                                           >> 7U)));
    vlSelf->__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_4)) 
                                       | (IData)(vlSelf->__PVT__add_out_rdy)));
    vlSelf->__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_3)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_3)));
    vlSelf->__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_2)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_2)));
    vlSelf->__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelf->__PVT__pipe_vld_1)) 
                                       | (IData)(vlSelf->__PVT__pipe_rdy_1)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__48(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__48\n"); );
    // Body
    vlSelf->__PVT__load_din = (((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld) 
                                  >> 7U) & (IData)(vlSelf->__PVT__pipe_rdy_0)) 
                                & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable))) 
                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en) 
                                  >> 7U));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__56(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__56\n"); );
    // Init
    SData/*10:0*/ __Vfunc_pooling_fun__28__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_fun__28__data0;
    SData/*10:0*/ __Vfunc_pooling_fun__28__data1;
    CData/*1:0*/ __Vfunc_pooling_fun__28__pooling_type;
    CData/*0:0*/ __Vfunc_pooling_fun__28__min_pooling;
    CData/*0:0*/ __Vfunc_pooling_fun__28__max_pooling;
    CData/*0:0*/ __Vfunc_pooling_fun__28__mean_pooling;
    SData/*10:0*/ __Vfunc_pooling_SUM__29__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_SUM__29__data0;
    SData/*10:0*/ __Vfunc_pooling_SUM__29__data1;
    SData/*10:0*/ __Vfunc_pooling_MIN__30__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_MIN__30__data0;
    SData/*10:0*/ __Vfunc_pooling_MIN__30__data1;
    CData/*0:0*/ __Vfunc_pooling_MIN__30__min_int_ff;
    SData/*10:0*/ __Vfunc_pooling_MAX__31__Vfuncout;
    SData/*10:0*/ __Vfunc_pooling_MAX__31__data0;
    SData/*10:0*/ __Vfunc_pooling_MAX__31__data1;
    CData/*0:0*/ __Vfunc_pooling_MAX__31__max_int_ff;
    // Body
    __Vfunc_pooling_fun__28__pooling_type = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d;
    if (vlSelf->__PVT__load_din) {
        __Vfunc_pooling_fun__28__data1 = (0x7ffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0);
        __Vfunc_pooling_fun__28__data0 = (0x7ffU & 
                                          ((0x20000U 
                                            & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                            ? ((0x10000U 
                                                & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                ? (
                                                   (0x8000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? (IData)(vlSelf->__PVT__latch_result7_d4)
                                                    : (IData)(vlSelf->__PVT__latch_result6_d4))
                                                : (
                                                   (0x8000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? (IData)(vlSelf->__PVT__latch_result5_d4)
                                                    : (IData)(vlSelf->__PVT__latch_result4_d4)))
                                            : ((0x10000U 
                                                & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                ? (
                                                   (0x8000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? (IData)(vlSelf->__PVT__latch_result3_d4)
                                                    : (IData)(vlSelf->__PVT__latch_result2_d4))
                                                : (
                                                   (0x8000U 
                                                    & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                    ? (IData)(vlSelf->__PVT__latch_result1_d4)
                                                    : (IData)(vlSelf->__PVT__latch_result0_d4)))));
    } else {
        __Vfunc_pooling_fun__28__data1 = 0U;
        __Vfunc_pooling_fun__28__data0 = 0U;
    }
    __Vfunc_pooling_fun__28__min_pooling = (2U == (IData)(__Vfunc_pooling_fun__28__pooling_type));
    __Vfunc_pooling_fun__28__max_pooling = (1U == (IData)(__Vfunc_pooling_fun__28__pooling_type));
    __Vfunc_pooling_fun__28__mean_pooling = (0U == (IData)(__Vfunc_pooling_fun__28__pooling_type));
    __Vfunc_pooling_MAX__31__data1 = __Vfunc_pooling_fun__28__data1;
    __Vfunc_pooling_MAX__31__data0 = __Vfunc_pooling_fun__28__data0;
    __Vfunc_pooling_MAX__31__max_int_ff = VL_GTS_III(11, (IData)(__Vfunc_pooling_MAX__31__data0), (IData)(__Vfunc_pooling_MAX__31__data1));
    __Vfunc_pooling_MAX__31__Vfuncout = ((IData)(__Vfunc_pooling_MAX__31__max_int_ff)
                                          ? (IData)(__Vfunc_pooling_MAX__31__data0)
                                          : (IData)(__Vfunc_pooling_MAX__31__data1));
    __Vfunc_pooling_MIN__30__data1 = __Vfunc_pooling_fun__28__data1;
    __Vfunc_pooling_MIN__30__data0 = __Vfunc_pooling_fun__28__data0;
    __Vfunc_pooling_MIN__30__min_int_ff = VL_GTS_III(11, (IData)(__Vfunc_pooling_MIN__30__data1), (IData)(__Vfunc_pooling_MIN__30__data0));
    __Vfunc_pooling_MIN__30__Vfuncout = ((IData)(__Vfunc_pooling_MIN__30__min_int_ff)
                                          ? (IData)(__Vfunc_pooling_MIN__30__data0)
                                          : (IData)(__Vfunc_pooling_MIN__30__data1));
    __Vfunc_pooling_SUM__29__data1 = __Vfunc_pooling_fun__28__data1;
    __Vfunc_pooling_SUM__29__data0 = __Vfunc_pooling_fun__28__data0;
    __Vfunc_pooling_SUM__29__Vfuncout = (0x7ffU & ((IData)(__Vfunc_pooling_SUM__29__data1) 
                                                   + (IData)(__Vfunc_pooling_SUM__29__data0)));
    __Vfunc_pooling_fun__28__Vfuncout = (0x7ffU & ((IData)(__Vfunc_pooling_fun__28__mean_pooling)
                                                    ? (IData)(__Vfunc_pooling_SUM__29__Vfuncout)
                                                    : 
                                                   ((IData)(__Vfunc_pooling_fun__28__min_pooling)
                                                     ? (IData)(__Vfunc_pooling_MIN__30__Vfuncout)
                                                     : 
                                                    ((IData)(__Vfunc_pooling_fun__28__max_pooling)
                                                      ? (IData)(__Vfunc_pooling_MAX__31__Vfuncout)
                                                      : 0U))));
    vlSelf->__PVT__int_pooling = __Vfunc_pooling_fun__28__Vfuncout;
}
