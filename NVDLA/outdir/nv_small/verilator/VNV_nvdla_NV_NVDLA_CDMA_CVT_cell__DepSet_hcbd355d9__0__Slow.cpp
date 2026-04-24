// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_CDMA_CVT_cell.h"
#include "VNV_nvdla__Syms.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_0__1(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_0__1\n"); );
    // Init
    IData/*17:0*/ __PVT__chn_alu_ext;
    IData/*17:0*/ __PVT__chn_data_ext;
    CData/*7:0*/ __PVT__dout_int8_sat;
    IData/*16:0*/ __PVT__tru_dout;
    QData/*33:0*/ __PVT__u_shiftright_su__DOT__data_shift;
    CData/*0:0*/ __PVT__u_shiftright_su__DOT__point5;
    VlWide<4>/*127:0*/ __Vtemp_h16ad1a3c__0;
    VlWide<4>/*127:0*/ __Vtemp_h8a267ddc__0;
    VlWide<4>/*127:0*/ __Vtemp_hf9a63bb0__0;
    VlWide<4>/*127:0*/ __Vtemp_hd22bbe69__0;
    VlWide<4>/*127:0*/ __Vtemp_h4a50595f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd00dc369__0;
    // Body
    vlSelf->__PVT__mul_dout = (0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,18, vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data)), 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,16, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale)))));
    __PVT__chn_data_ext = ((0x20000U & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_0_d0 
                                        << 1U)) | vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_0_d0);
    __PVT__chn_alu_ext = ((0x30000U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_0_d0) 
                                                      >> 0xfU)))) 
                                       << 0x10U)) | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_0_d0));
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__sub_out_prdy) 
               | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__tru_out_prdy) 
               | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelf->__PVT__chn_sync_pvld = (1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0));
    __Vtemp_h16ad1a3c__0[0U] = 0U;
    __Vtemp_h16ad1a3c__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_h16ad1a3c__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_h16ad1a3c__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_h8a267ddc__0, __Vtemp_h16ad1a3c__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __PVT__u_shiftright_su__DOT__data_shift = (0x3ffffffffULL 
                                               & (((QData)((IData)(
                                                                   __Vtemp_h8a267ddc__0[2U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp_h8a267ddc__0[1U])) 
                                                     >> 2U)));
    __Vtemp_hf9a63bb0__0[0U] = 0U;
    __Vtemp_hf9a63bb0__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_hf9a63bb0__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_hf9a63bb0__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_hd22bbe69__0, __Vtemp_hf9a63bb0__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __Vtemp_h4a50595f__0[0U] = 0U;
    __Vtemp_h4a50595f__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_h4a50595f__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_h4a50595f__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_hd00dc369__0, __Vtemp_h4a50595f__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __PVT__u_shiftright_su__DOT__point5 = (1U & ((__Vtemp_hd22bbe69__0[1U] 
                                                  >> 1U) 
                                                 & ((~ (IData)(
                                                               (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                >> 0x21U))) 
                                                    | (0U 
                                                       != 
                                                       (0x1ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            __Vtemp_hd00dc369__0[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             __Vtemp_hd00dc369__0[0U]))))))));
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_catch = 0U;
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_ready = 1U;
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid)
            : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p3__DOT__p3_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid)
            : (IData)(vlSelf->__PVT__pipe_p3__DOT__p3_skid_valid));
    vlSelf->__PVT__sub_dout = (0x3ffffU & ((0x7ffffU 
                                            & VL_EXTENDS_II(19,18, __PVT__chn_data_ext)) 
                                           - (0x7ffffU 
                                              & VL_EXTENDS_II(19,18, __PVT__chn_alu_ext))));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch))));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__chn_sync_pvld)
            : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = (((IData)(vlSelf->__PVT__chn_sync_pvld) 
                                                   & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch))));
    __PVT__tru_dout = ((0x22U <= (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate))
                        ? 0U : (0x1ffffU & ((1U & (
                                                   (((IData)(
                                                             (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                              >> 0x21U)) 
                                                     & (~ (IData)(
                                                                  (0x1ffffU 
                                                                   == 
                                                                   (0x1ffffU 
                                                                    & (IData)(
                                                                              (__PVT__u_shiftright_su__DOT__data_shift 
                                                                               >> 0x10U))))))) 
                                                    | ((~ (IData)(
                                                                  (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                   >> 0x21U))) 
                                                       & (0U 
                                                          != 
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (__PVT__u_shiftright_su__DOT__data_shift 
                                                                      >> 0x10U)))))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                  >> 0x21U))) 
                                                      & ((0xffffU 
                                                          == 
                                                          (0xffffU 
                                                           & (IData)(__PVT__u_shiftright_su__DOT__data_shift))) 
                                                         & (IData)(__PVT__u_shiftright_su__DOT__point5)))))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                            >> 0x21U)))
                                                 ? 0x10000U
                                                 : 0xffffU)
                                             : ((IData)(__PVT__u_shiftright_su__DOT__data_shift) 
                                                + (IData)(__PVT__u_shiftright_su__DOT__point5)))));
    __PVT__dout_int8_sat = (0xffU & ((1U & (((__PVT__tru_dout 
                                              >> 0x10U) 
                                             & (~ (IData)(
                                                          (0x1ffU 
                                                           == 
                                                           (0x1ffU 
                                                            & (__PVT__tru_dout 
                                                               >> 7U)))))) 
                                            | ((~ (__PVT__tru_dout 
                                                   >> 0x10U)) 
                                               & (0U 
                                                  != 
                                                  (0x1ffU 
                                                   & (__PVT__tru_dout 
                                                      >> 7U))))))
                                      ? ((0x10000U 
                                          & __PVT__tru_dout)
                                          ? 0x80U : 0x7fU)
                                      : __PVT__tru_dout));
    vlSelf->__PVT__chn_dout = (0xffffU & ((1U == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))
                                           ? ((1U & 
                                               ((IData)(
                                                        (0x10000U 
                                                         == 
                                                         (0x18000U 
                                                          & __PVT__tru_dout))) 
                                                | (IData)(
                                                          (0x8000U 
                                                           == 
                                                           (0x18000U 
                                                            & __PVT__tru_dout)))))
                                               ? ((0x10000U 
                                                   & __PVT__tru_dout)
                                                   ? 0x8000U
                                                   : 0x7fffU)
                                               : __PVT__tru_dout)
                                           : ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(__PVT__dout_int8_sat) 
                                                                 >> 7U)))) 
                                                  << 8U)) 
                                              | (IData)(__PVT__dout_int8_sat))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_1__2(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_1__2\n"); );
    // Init
    IData/*17:0*/ __PVT__chn_alu_ext;
    IData/*17:0*/ __PVT__chn_data_ext;
    CData/*7:0*/ __PVT__dout_int8_sat;
    IData/*16:0*/ __PVT__tru_dout;
    QData/*33:0*/ __PVT__u_shiftright_su__DOT__data_shift;
    CData/*0:0*/ __PVT__u_shiftright_su__DOT__point5;
    VlWide<4>/*127:0*/ __Vtemp_h16ad1a3c__0;
    VlWide<4>/*127:0*/ __Vtemp_h8a267ddc__0;
    VlWide<4>/*127:0*/ __Vtemp_hf9a63bb0__0;
    VlWide<4>/*127:0*/ __Vtemp_hd22bbe69__0;
    VlWide<4>/*127:0*/ __Vtemp_h4a50595f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd00dc369__0;
    // Body
    vlSelf->__PVT__mul_dout = (0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,18, vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data)), 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,16, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale)))));
    __PVT__chn_data_ext = ((0x20000U & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_1_d0 
                                        << 1U)) | vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_1_d0);
    __PVT__chn_alu_ext = ((0x30000U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_1_d0) 
                                                      >> 0xfU)))) 
                                       << 0x10U)) | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_1_d0));
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__sub_out_prdy) 
               | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__tru_out_prdy) 
               | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelf->__PVT__chn_sync_pvld = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0) 
                                          >> 1U));
    __Vtemp_h16ad1a3c__0[0U] = 0U;
    __Vtemp_h16ad1a3c__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_h16ad1a3c__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_h16ad1a3c__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_h8a267ddc__0, __Vtemp_h16ad1a3c__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __PVT__u_shiftright_su__DOT__data_shift = (0x3ffffffffULL 
                                               & (((QData)((IData)(
                                                                   __Vtemp_h8a267ddc__0[2U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp_h8a267ddc__0[1U])) 
                                                     >> 2U)));
    __Vtemp_hf9a63bb0__0[0U] = 0U;
    __Vtemp_hf9a63bb0__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_hf9a63bb0__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_hf9a63bb0__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_hd22bbe69__0, __Vtemp_hf9a63bb0__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __Vtemp_h4a50595f__0[0U] = 0U;
    __Vtemp_h4a50595f__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_h4a50595f__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_h4a50595f__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_hd00dc369__0, __Vtemp_h4a50595f__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __PVT__u_shiftright_su__DOT__point5 = (1U & ((__Vtemp_hd22bbe69__0[1U] 
                                                  >> 1U) 
                                                 & ((~ (IData)(
                                                               (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                >> 0x21U))) 
                                                    | (0U 
                                                       != 
                                                       (0x1ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            __Vtemp_hd00dc369__0[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             __Vtemp_hd00dc369__0[0U]))))))));
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_catch = 0U;
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_ready = 1U;
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid)
            : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p3__DOT__p3_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid)
            : (IData)(vlSelf->__PVT__pipe_p3__DOT__p3_skid_valid));
    vlSelf->__PVT__sub_dout = (0x3ffffU & ((0x7ffffU 
                                            & VL_EXTENDS_II(19,18, __PVT__chn_data_ext)) 
                                           - (0x7ffffU 
                                              & VL_EXTENDS_II(19,18, __PVT__chn_alu_ext))));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch))));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__chn_sync_pvld)
            : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = (((IData)(vlSelf->__PVT__chn_sync_pvld) 
                                                   & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch))));
    __PVT__tru_dout = ((0x22U <= (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate))
                        ? 0U : (0x1ffffU & ((1U & (
                                                   (((IData)(
                                                             (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                              >> 0x21U)) 
                                                     & (~ (IData)(
                                                                  (0x1ffffU 
                                                                   == 
                                                                   (0x1ffffU 
                                                                    & (IData)(
                                                                              (__PVT__u_shiftright_su__DOT__data_shift 
                                                                               >> 0x10U))))))) 
                                                    | ((~ (IData)(
                                                                  (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                   >> 0x21U))) 
                                                       & (0U 
                                                          != 
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (__PVT__u_shiftright_su__DOT__data_shift 
                                                                      >> 0x10U)))))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                  >> 0x21U))) 
                                                      & ((0xffffU 
                                                          == 
                                                          (0xffffU 
                                                           & (IData)(__PVT__u_shiftright_su__DOT__data_shift))) 
                                                         & (IData)(__PVT__u_shiftright_su__DOT__point5)))))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                            >> 0x21U)))
                                                 ? 0x10000U
                                                 : 0xffffU)
                                             : ((IData)(__PVT__u_shiftright_su__DOT__data_shift) 
                                                + (IData)(__PVT__u_shiftright_su__DOT__point5)))));
    __PVT__dout_int8_sat = (0xffU & ((1U & (((__PVT__tru_dout 
                                              >> 0x10U) 
                                             & (~ (IData)(
                                                          (0x1ffU 
                                                           == 
                                                           (0x1ffU 
                                                            & (__PVT__tru_dout 
                                                               >> 7U)))))) 
                                            | ((~ (__PVT__tru_dout 
                                                   >> 0x10U)) 
                                               & (0U 
                                                  != 
                                                  (0x1ffU 
                                                   & (__PVT__tru_dout 
                                                      >> 7U))))))
                                      ? ((0x10000U 
                                          & __PVT__tru_dout)
                                          ? 0x80U : 0x7fU)
                                      : __PVT__tru_dout));
    vlSelf->__PVT__chn_dout = (0xffffU & ((1U == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))
                                           ? ((1U & 
                                               ((IData)(
                                                        (0x10000U 
                                                         == 
                                                         (0x18000U 
                                                          & __PVT__tru_dout))) 
                                                | (IData)(
                                                          (0x8000U 
                                                           == 
                                                           (0x18000U 
                                                            & __PVT__tru_dout)))))
                                               ? ((0x10000U 
                                                   & __PVT__tru_dout)
                                                   ? 0x8000U
                                                   : 0x7fffU)
                                               : __PVT__tru_dout)
                                           : ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(__PVT__dout_int8_sat) 
                                                                 >> 7U)))) 
                                                  << 8U)) 
                                              | (IData)(__PVT__dout_int8_sat))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_2__3(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_2__3\n"); );
    // Init
    IData/*17:0*/ __PVT__chn_alu_ext;
    IData/*17:0*/ __PVT__chn_data_ext;
    CData/*7:0*/ __PVT__dout_int8_sat;
    IData/*16:0*/ __PVT__tru_dout;
    QData/*33:0*/ __PVT__u_shiftright_su__DOT__data_shift;
    CData/*0:0*/ __PVT__u_shiftright_su__DOT__point5;
    VlWide<4>/*127:0*/ __Vtemp_h16ad1a3c__0;
    VlWide<4>/*127:0*/ __Vtemp_h8a267ddc__0;
    VlWide<4>/*127:0*/ __Vtemp_hf9a63bb0__0;
    VlWide<4>/*127:0*/ __Vtemp_hd22bbe69__0;
    VlWide<4>/*127:0*/ __Vtemp_h4a50595f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd00dc369__0;
    // Body
    vlSelf->__PVT__mul_dout = (0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,18, vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data)), 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,16, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale)))));
    __PVT__chn_data_ext = ((0x20000U & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_2_d0 
                                        << 1U)) | vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_2_d0);
    __PVT__chn_alu_ext = ((0x30000U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_2_d0) 
                                                      >> 0xfU)))) 
                                       << 0x10U)) | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_2_d0));
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__sub_out_prdy) 
               | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__tru_out_prdy) 
               | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelf->__PVT__chn_sync_pvld = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0) 
                                          >> 2U));
    __Vtemp_h16ad1a3c__0[0U] = 0U;
    __Vtemp_h16ad1a3c__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_h16ad1a3c__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_h16ad1a3c__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_h8a267ddc__0, __Vtemp_h16ad1a3c__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __PVT__u_shiftright_su__DOT__data_shift = (0x3ffffffffULL 
                                               & (((QData)((IData)(
                                                                   __Vtemp_h8a267ddc__0[2U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp_h8a267ddc__0[1U])) 
                                                     >> 2U)));
    __Vtemp_hf9a63bb0__0[0U] = 0U;
    __Vtemp_hf9a63bb0__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_hf9a63bb0__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_hf9a63bb0__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_hd22bbe69__0, __Vtemp_hf9a63bb0__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __Vtemp_h4a50595f__0[0U] = 0U;
    __Vtemp_h4a50595f__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_h4a50595f__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_h4a50595f__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_hd00dc369__0, __Vtemp_h4a50595f__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __PVT__u_shiftright_su__DOT__point5 = (1U & ((__Vtemp_hd22bbe69__0[1U] 
                                                  >> 1U) 
                                                 & ((~ (IData)(
                                                               (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                >> 0x21U))) 
                                                    | (0U 
                                                       != 
                                                       (0x1ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            __Vtemp_hd00dc369__0[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             __Vtemp_hd00dc369__0[0U]))))))));
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_catch = 0U;
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_ready = 1U;
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid)
            : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p3__DOT__p3_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid)
            : (IData)(vlSelf->__PVT__pipe_p3__DOT__p3_skid_valid));
    vlSelf->__PVT__sub_dout = (0x3ffffU & ((0x7ffffU 
                                            & VL_EXTENDS_II(19,18, __PVT__chn_data_ext)) 
                                           - (0x7ffffU 
                                              & VL_EXTENDS_II(19,18, __PVT__chn_alu_ext))));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch))));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__chn_sync_pvld)
            : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = (((IData)(vlSelf->__PVT__chn_sync_pvld) 
                                                   & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch))));
    __PVT__tru_dout = ((0x22U <= (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate))
                        ? 0U : (0x1ffffU & ((1U & (
                                                   (((IData)(
                                                             (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                              >> 0x21U)) 
                                                     & (~ (IData)(
                                                                  (0x1ffffU 
                                                                   == 
                                                                   (0x1ffffU 
                                                                    & (IData)(
                                                                              (__PVT__u_shiftright_su__DOT__data_shift 
                                                                               >> 0x10U))))))) 
                                                    | ((~ (IData)(
                                                                  (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                   >> 0x21U))) 
                                                       & (0U 
                                                          != 
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (__PVT__u_shiftright_su__DOT__data_shift 
                                                                      >> 0x10U)))))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                  >> 0x21U))) 
                                                      & ((0xffffU 
                                                          == 
                                                          (0xffffU 
                                                           & (IData)(__PVT__u_shiftright_su__DOT__data_shift))) 
                                                         & (IData)(__PVT__u_shiftright_su__DOT__point5)))))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                            >> 0x21U)))
                                                 ? 0x10000U
                                                 : 0xffffU)
                                             : ((IData)(__PVT__u_shiftright_su__DOT__data_shift) 
                                                + (IData)(__PVT__u_shiftright_su__DOT__point5)))));
    __PVT__dout_int8_sat = (0xffU & ((1U & (((__PVT__tru_dout 
                                              >> 0x10U) 
                                             & (~ (IData)(
                                                          (0x1ffU 
                                                           == 
                                                           (0x1ffU 
                                                            & (__PVT__tru_dout 
                                                               >> 7U)))))) 
                                            | ((~ (__PVT__tru_dout 
                                                   >> 0x10U)) 
                                               & (0U 
                                                  != 
                                                  (0x1ffU 
                                                   & (__PVT__tru_dout 
                                                      >> 7U))))))
                                      ? ((0x10000U 
                                          & __PVT__tru_dout)
                                          ? 0x80U : 0x7fU)
                                      : __PVT__tru_dout));
    vlSelf->__PVT__chn_dout = (0xffffU & ((1U == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))
                                           ? ((1U & 
                                               ((IData)(
                                                        (0x10000U 
                                                         == 
                                                         (0x18000U 
                                                          & __PVT__tru_dout))) 
                                                | (IData)(
                                                          (0x8000U 
                                                           == 
                                                           (0x18000U 
                                                            & __PVT__tru_dout)))))
                                               ? ((0x10000U 
                                                   & __PVT__tru_dout)
                                                   ? 0x8000U
                                                   : 0x7fffU)
                                               : __PVT__tru_dout)
                                           : ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(__PVT__dout_int8_sat) 
                                                                 >> 7U)))) 
                                                  << 8U)) 
                                              | (IData)(__PVT__dout_int8_sat))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_3__4(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_3__4\n"); );
    // Init
    IData/*17:0*/ __PVT__chn_alu_ext;
    IData/*17:0*/ __PVT__chn_data_ext;
    CData/*7:0*/ __PVT__dout_int8_sat;
    IData/*16:0*/ __PVT__tru_dout;
    QData/*33:0*/ __PVT__u_shiftright_su__DOT__data_shift;
    CData/*0:0*/ __PVT__u_shiftright_su__DOT__point5;
    VlWide<4>/*127:0*/ __Vtemp_h16ad1a3c__0;
    VlWide<4>/*127:0*/ __Vtemp_h8a267ddc__0;
    VlWide<4>/*127:0*/ __Vtemp_hf9a63bb0__0;
    VlWide<4>/*127:0*/ __Vtemp_hd22bbe69__0;
    VlWide<4>/*127:0*/ __Vtemp_h4a50595f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd00dc369__0;
    // Body
    vlSelf->__PVT__mul_dout = (0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,18, vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data)), 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,16, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale)))));
    __PVT__chn_data_ext = ((0x20000U & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_3_d0 
                                        << 1U)) | vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_3_d0);
    __PVT__chn_alu_ext = ((0x30000U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_3_d0) 
                                                      >> 0xfU)))) 
                                       << 0x10U)) | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_3_d0));
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__sub_out_prdy) 
               | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__tru_out_prdy) 
               | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelf->__PVT__chn_sync_pvld = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0) 
                                          >> 3U));
    __Vtemp_h16ad1a3c__0[0U] = 0U;
    __Vtemp_h16ad1a3c__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_h16ad1a3c__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_h16ad1a3c__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_h8a267ddc__0, __Vtemp_h16ad1a3c__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __PVT__u_shiftright_su__DOT__data_shift = (0x3ffffffffULL 
                                               & (((QData)((IData)(
                                                                   __Vtemp_h8a267ddc__0[2U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp_h8a267ddc__0[1U])) 
                                                     >> 2U)));
    __Vtemp_hf9a63bb0__0[0U] = 0U;
    __Vtemp_hf9a63bb0__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_hf9a63bb0__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_hf9a63bb0__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_hd22bbe69__0, __Vtemp_hf9a63bb0__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __Vtemp_h4a50595f__0[0U] = 0U;
    __Vtemp_h4a50595f__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_h4a50595f__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_h4a50595f__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_hd00dc369__0, __Vtemp_h4a50595f__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __PVT__u_shiftright_su__DOT__point5 = (1U & ((__Vtemp_hd22bbe69__0[1U] 
                                                  >> 1U) 
                                                 & ((~ (IData)(
                                                               (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                >> 0x21U))) 
                                                    | (0U 
                                                       != 
                                                       (0x1ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            __Vtemp_hd00dc369__0[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             __Vtemp_hd00dc369__0[0U]))))))));
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_catch = 0U;
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_ready = 1U;
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid)
            : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p3__DOT__p3_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid)
            : (IData)(vlSelf->__PVT__pipe_p3__DOT__p3_skid_valid));
    vlSelf->__PVT__sub_dout = (0x3ffffU & ((0x7ffffU 
                                            & VL_EXTENDS_II(19,18, __PVT__chn_data_ext)) 
                                           - (0x7ffffU 
                                              & VL_EXTENDS_II(19,18, __PVT__chn_alu_ext))));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch))));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__chn_sync_pvld)
            : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = (((IData)(vlSelf->__PVT__chn_sync_pvld) 
                                                   & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch))));
    __PVT__tru_dout = ((0x22U <= (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate))
                        ? 0U : (0x1ffffU & ((1U & (
                                                   (((IData)(
                                                             (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                              >> 0x21U)) 
                                                     & (~ (IData)(
                                                                  (0x1ffffU 
                                                                   == 
                                                                   (0x1ffffU 
                                                                    & (IData)(
                                                                              (__PVT__u_shiftright_su__DOT__data_shift 
                                                                               >> 0x10U))))))) 
                                                    | ((~ (IData)(
                                                                  (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                   >> 0x21U))) 
                                                       & (0U 
                                                          != 
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (__PVT__u_shiftright_su__DOT__data_shift 
                                                                      >> 0x10U)))))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                  >> 0x21U))) 
                                                      & ((0xffffU 
                                                          == 
                                                          (0xffffU 
                                                           & (IData)(__PVT__u_shiftright_su__DOT__data_shift))) 
                                                         & (IData)(__PVT__u_shiftright_su__DOT__point5)))))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                            >> 0x21U)))
                                                 ? 0x10000U
                                                 : 0xffffU)
                                             : ((IData)(__PVT__u_shiftright_su__DOT__data_shift) 
                                                + (IData)(__PVT__u_shiftright_su__DOT__point5)))));
    __PVT__dout_int8_sat = (0xffU & ((1U & (((__PVT__tru_dout 
                                              >> 0x10U) 
                                             & (~ (IData)(
                                                          (0x1ffU 
                                                           == 
                                                           (0x1ffU 
                                                            & (__PVT__tru_dout 
                                                               >> 7U)))))) 
                                            | ((~ (__PVT__tru_dout 
                                                   >> 0x10U)) 
                                               & (0U 
                                                  != 
                                                  (0x1ffU 
                                                   & (__PVT__tru_dout 
                                                      >> 7U))))))
                                      ? ((0x10000U 
                                          & __PVT__tru_dout)
                                          ? 0x80U : 0x7fU)
                                      : __PVT__tru_dout));
    vlSelf->__PVT__chn_dout = (0xffffU & ((1U == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))
                                           ? ((1U & 
                                               ((IData)(
                                                        (0x10000U 
                                                         == 
                                                         (0x18000U 
                                                          & __PVT__tru_dout))) 
                                                | (IData)(
                                                          (0x8000U 
                                                           == 
                                                           (0x18000U 
                                                            & __PVT__tru_dout)))))
                                               ? ((0x10000U 
                                                   & __PVT__tru_dout)
                                                   ? 0x8000U
                                                   : 0x7fffU)
                                               : __PVT__tru_dout)
                                           : ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(__PVT__dout_int8_sat) 
                                                                 >> 7U)))) 
                                                  << 8U)) 
                                              | (IData)(__PVT__dout_int8_sat))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_4__5(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_4__5\n"); );
    // Init
    IData/*17:0*/ __PVT__chn_alu_ext;
    IData/*17:0*/ __PVT__chn_data_ext;
    CData/*7:0*/ __PVT__dout_int8_sat;
    IData/*16:0*/ __PVT__tru_dout;
    QData/*33:0*/ __PVT__u_shiftright_su__DOT__data_shift;
    CData/*0:0*/ __PVT__u_shiftright_su__DOT__point5;
    VlWide<4>/*127:0*/ __Vtemp_h16ad1a3c__0;
    VlWide<4>/*127:0*/ __Vtemp_h8a267ddc__0;
    VlWide<4>/*127:0*/ __Vtemp_hf9a63bb0__0;
    VlWide<4>/*127:0*/ __Vtemp_hd22bbe69__0;
    VlWide<4>/*127:0*/ __Vtemp_h4a50595f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd00dc369__0;
    // Body
    vlSelf->__PVT__mul_dout = (0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,18, vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data)), 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,16, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale)))));
    __PVT__chn_data_ext = ((0x20000U & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_4_d0 
                                        << 1U)) | vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_4_d0);
    __PVT__chn_alu_ext = ((0x30000U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_4_d0) 
                                                      >> 0xfU)))) 
                                       << 0x10U)) | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_4_d0));
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__sub_out_prdy) 
               | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__tru_out_prdy) 
               | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelf->__PVT__chn_sync_pvld = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0) 
                                          >> 4U));
    __Vtemp_h16ad1a3c__0[0U] = 0U;
    __Vtemp_h16ad1a3c__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_h16ad1a3c__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_h16ad1a3c__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_h8a267ddc__0, __Vtemp_h16ad1a3c__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __PVT__u_shiftright_su__DOT__data_shift = (0x3ffffffffULL 
                                               & (((QData)((IData)(
                                                                   __Vtemp_h8a267ddc__0[2U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp_h8a267ddc__0[1U])) 
                                                     >> 2U)));
    __Vtemp_hf9a63bb0__0[0U] = 0U;
    __Vtemp_hf9a63bb0__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_hf9a63bb0__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_hf9a63bb0__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_hd22bbe69__0, __Vtemp_hf9a63bb0__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __Vtemp_h4a50595f__0[0U] = 0U;
    __Vtemp_h4a50595f__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_h4a50595f__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_h4a50595f__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_hd00dc369__0, __Vtemp_h4a50595f__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __PVT__u_shiftright_su__DOT__point5 = (1U & ((__Vtemp_hd22bbe69__0[1U] 
                                                  >> 1U) 
                                                 & ((~ (IData)(
                                                               (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                >> 0x21U))) 
                                                    | (0U 
                                                       != 
                                                       (0x1ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            __Vtemp_hd00dc369__0[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             __Vtemp_hd00dc369__0[0U]))))))));
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_catch = 0U;
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_ready = 1U;
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid)
            : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p3__DOT__p3_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid)
            : (IData)(vlSelf->__PVT__pipe_p3__DOT__p3_skid_valid));
    vlSelf->__PVT__sub_dout = (0x3ffffU & ((0x7ffffU 
                                            & VL_EXTENDS_II(19,18, __PVT__chn_data_ext)) 
                                           - (0x7ffffU 
                                              & VL_EXTENDS_II(19,18, __PVT__chn_alu_ext))));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch))));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__chn_sync_pvld)
            : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = (((IData)(vlSelf->__PVT__chn_sync_pvld) 
                                                   & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch))));
    __PVT__tru_dout = ((0x22U <= (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate))
                        ? 0U : (0x1ffffU & ((1U & (
                                                   (((IData)(
                                                             (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                              >> 0x21U)) 
                                                     & (~ (IData)(
                                                                  (0x1ffffU 
                                                                   == 
                                                                   (0x1ffffU 
                                                                    & (IData)(
                                                                              (__PVT__u_shiftright_su__DOT__data_shift 
                                                                               >> 0x10U))))))) 
                                                    | ((~ (IData)(
                                                                  (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                   >> 0x21U))) 
                                                       & (0U 
                                                          != 
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (__PVT__u_shiftright_su__DOT__data_shift 
                                                                      >> 0x10U)))))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                  >> 0x21U))) 
                                                      & ((0xffffU 
                                                          == 
                                                          (0xffffU 
                                                           & (IData)(__PVT__u_shiftright_su__DOT__data_shift))) 
                                                         & (IData)(__PVT__u_shiftright_su__DOT__point5)))))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                            >> 0x21U)))
                                                 ? 0x10000U
                                                 : 0xffffU)
                                             : ((IData)(__PVT__u_shiftright_su__DOT__data_shift) 
                                                + (IData)(__PVT__u_shiftright_su__DOT__point5)))));
    __PVT__dout_int8_sat = (0xffU & ((1U & (((__PVT__tru_dout 
                                              >> 0x10U) 
                                             & (~ (IData)(
                                                          (0x1ffU 
                                                           == 
                                                           (0x1ffU 
                                                            & (__PVT__tru_dout 
                                                               >> 7U)))))) 
                                            | ((~ (__PVT__tru_dout 
                                                   >> 0x10U)) 
                                               & (0U 
                                                  != 
                                                  (0x1ffU 
                                                   & (__PVT__tru_dout 
                                                      >> 7U))))))
                                      ? ((0x10000U 
                                          & __PVT__tru_dout)
                                          ? 0x80U : 0x7fU)
                                      : __PVT__tru_dout));
    vlSelf->__PVT__chn_dout = (0xffffU & ((1U == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))
                                           ? ((1U & 
                                               ((IData)(
                                                        (0x10000U 
                                                         == 
                                                         (0x18000U 
                                                          & __PVT__tru_dout))) 
                                                | (IData)(
                                                          (0x8000U 
                                                           == 
                                                           (0x18000U 
                                                            & __PVT__tru_dout)))))
                                               ? ((0x10000U 
                                                   & __PVT__tru_dout)
                                                   ? 0x8000U
                                                   : 0x7fffU)
                                               : __PVT__tru_dout)
                                           : ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(__PVT__dout_int8_sat) 
                                                                 >> 7U)))) 
                                                  << 8U)) 
                                              | (IData)(__PVT__dout_int8_sat))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_5__6(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_5__6\n"); );
    // Init
    IData/*17:0*/ __PVT__chn_alu_ext;
    IData/*17:0*/ __PVT__chn_data_ext;
    CData/*7:0*/ __PVT__dout_int8_sat;
    IData/*16:0*/ __PVT__tru_dout;
    QData/*33:0*/ __PVT__u_shiftright_su__DOT__data_shift;
    CData/*0:0*/ __PVT__u_shiftright_su__DOT__point5;
    VlWide<4>/*127:0*/ __Vtemp_h16ad1a3c__0;
    VlWide<4>/*127:0*/ __Vtemp_h8a267ddc__0;
    VlWide<4>/*127:0*/ __Vtemp_hf9a63bb0__0;
    VlWide<4>/*127:0*/ __Vtemp_hd22bbe69__0;
    VlWide<4>/*127:0*/ __Vtemp_h4a50595f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd00dc369__0;
    // Body
    vlSelf->__PVT__mul_dout = (0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,18, vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data)), 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,16, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale)))));
    __PVT__chn_data_ext = ((0x20000U & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_5_d0 
                                        << 1U)) | vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_5_d0);
    __PVT__chn_alu_ext = ((0x30000U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_5_d0) 
                                                      >> 0xfU)))) 
                                       << 0x10U)) | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_5_d0));
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__sub_out_prdy) 
               | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__tru_out_prdy) 
               | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelf->__PVT__chn_sync_pvld = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0) 
                                          >> 5U));
    __Vtemp_h16ad1a3c__0[0U] = 0U;
    __Vtemp_h16ad1a3c__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_h16ad1a3c__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_h16ad1a3c__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_h8a267ddc__0, __Vtemp_h16ad1a3c__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __PVT__u_shiftright_su__DOT__data_shift = (0x3ffffffffULL 
                                               & (((QData)((IData)(
                                                                   __Vtemp_h8a267ddc__0[2U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp_h8a267ddc__0[1U])) 
                                                     >> 2U)));
    __Vtemp_hf9a63bb0__0[0U] = 0U;
    __Vtemp_hf9a63bb0__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_hf9a63bb0__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_hf9a63bb0__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_hd22bbe69__0, __Vtemp_hf9a63bb0__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __Vtemp_h4a50595f__0[0U] = 0U;
    __Vtemp_h4a50595f__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_h4a50595f__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_h4a50595f__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_hd00dc369__0, __Vtemp_h4a50595f__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __PVT__u_shiftright_su__DOT__point5 = (1U & ((__Vtemp_hd22bbe69__0[1U] 
                                                  >> 1U) 
                                                 & ((~ (IData)(
                                                               (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                >> 0x21U))) 
                                                    | (0U 
                                                       != 
                                                       (0x1ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            __Vtemp_hd00dc369__0[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             __Vtemp_hd00dc369__0[0U]))))))));
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_catch = 0U;
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_ready = 1U;
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid)
            : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p3__DOT__p3_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid)
            : (IData)(vlSelf->__PVT__pipe_p3__DOT__p3_skid_valid));
    vlSelf->__PVT__sub_dout = (0x3ffffU & ((0x7ffffU 
                                            & VL_EXTENDS_II(19,18, __PVT__chn_data_ext)) 
                                           - (0x7ffffU 
                                              & VL_EXTENDS_II(19,18, __PVT__chn_alu_ext))));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch))));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__chn_sync_pvld)
            : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = (((IData)(vlSelf->__PVT__chn_sync_pvld) 
                                                   & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch))));
    __PVT__tru_dout = ((0x22U <= (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate))
                        ? 0U : (0x1ffffU & ((1U & (
                                                   (((IData)(
                                                             (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                              >> 0x21U)) 
                                                     & (~ (IData)(
                                                                  (0x1ffffU 
                                                                   == 
                                                                   (0x1ffffU 
                                                                    & (IData)(
                                                                              (__PVT__u_shiftright_su__DOT__data_shift 
                                                                               >> 0x10U))))))) 
                                                    | ((~ (IData)(
                                                                  (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                   >> 0x21U))) 
                                                       & (0U 
                                                          != 
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (__PVT__u_shiftright_su__DOT__data_shift 
                                                                      >> 0x10U)))))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                  >> 0x21U))) 
                                                      & ((0xffffU 
                                                          == 
                                                          (0xffffU 
                                                           & (IData)(__PVT__u_shiftright_su__DOT__data_shift))) 
                                                         & (IData)(__PVT__u_shiftright_su__DOT__point5)))))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                            >> 0x21U)))
                                                 ? 0x10000U
                                                 : 0xffffU)
                                             : ((IData)(__PVT__u_shiftright_su__DOT__data_shift) 
                                                + (IData)(__PVT__u_shiftright_su__DOT__point5)))));
    __PVT__dout_int8_sat = (0xffU & ((1U & (((__PVT__tru_dout 
                                              >> 0x10U) 
                                             & (~ (IData)(
                                                          (0x1ffU 
                                                           == 
                                                           (0x1ffU 
                                                            & (__PVT__tru_dout 
                                                               >> 7U)))))) 
                                            | ((~ (__PVT__tru_dout 
                                                   >> 0x10U)) 
                                               & (0U 
                                                  != 
                                                  (0x1ffU 
                                                   & (__PVT__tru_dout 
                                                      >> 7U))))))
                                      ? ((0x10000U 
                                          & __PVT__tru_dout)
                                          ? 0x80U : 0x7fU)
                                      : __PVT__tru_dout));
    vlSelf->__PVT__chn_dout = (0xffffU & ((1U == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))
                                           ? ((1U & 
                                               ((IData)(
                                                        (0x10000U 
                                                         == 
                                                         (0x18000U 
                                                          & __PVT__tru_dout))) 
                                                | (IData)(
                                                          (0x8000U 
                                                           == 
                                                           (0x18000U 
                                                            & __PVT__tru_dout)))))
                                               ? ((0x10000U 
                                                   & __PVT__tru_dout)
                                                   ? 0x8000U
                                                   : 0x7fffU)
                                               : __PVT__tru_dout)
                                           : ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(__PVT__dout_int8_sat) 
                                                                 >> 7U)))) 
                                                  << 8U)) 
                                              | (IData)(__PVT__dout_int8_sat))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_6__7(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_6__7\n"); );
    // Init
    IData/*17:0*/ __PVT__chn_alu_ext;
    IData/*17:0*/ __PVT__chn_data_ext;
    CData/*7:0*/ __PVT__dout_int8_sat;
    IData/*16:0*/ __PVT__tru_dout;
    QData/*33:0*/ __PVT__u_shiftright_su__DOT__data_shift;
    CData/*0:0*/ __PVT__u_shiftright_su__DOT__point5;
    VlWide<4>/*127:0*/ __Vtemp_h16ad1a3c__0;
    VlWide<4>/*127:0*/ __Vtemp_h8a267ddc__0;
    VlWide<4>/*127:0*/ __Vtemp_hf9a63bb0__0;
    VlWide<4>/*127:0*/ __Vtemp_hd22bbe69__0;
    VlWide<4>/*127:0*/ __Vtemp_h4a50595f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd00dc369__0;
    // Body
    vlSelf->__PVT__mul_dout = (0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,18, vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data)), 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,16, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale)))));
    __PVT__chn_data_ext = ((0x20000U & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_6_d0 
                                        << 1U)) | vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_6_d0);
    __PVT__chn_alu_ext = ((0x30000U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_6_d0) 
                                                      >> 0xfU)))) 
                                       << 0x10U)) | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_6_d0));
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__sub_out_prdy) 
               | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__tru_out_prdy) 
               | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelf->__PVT__chn_sync_pvld = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0) 
                                          >> 6U));
    __Vtemp_h16ad1a3c__0[0U] = 0U;
    __Vtemp_h16ad1a3c__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_h16ad1a3c__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_h16ad1a3c__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_h8a267ddc__0, __Vtemp_h16ad1a3c__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __PVT__u_shiftright_su__DOT__data_shift = (0x3ffffffffULL 
                                               & (((QData)((IData)(
                                                                   __Vtemp_h8a267ddc__0[2U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp_h8a267ddc__0[1U])) 
                                                     >> 2U)));
    __Vtemp_hf9a63bb0__0[0U] = 0U;
    __Vtemp_hf9a63bb0__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_hf9a63bb0__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_hf9a63bb0__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_hd22bbe69__0, __Vtemp_hf9a63bb0__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __Vtemp_h4a50595f__0[0U] = 0U;
    __Vtemp_h4a50595f__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_h4a50595f__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_h4a50595f__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_hd00dc369__0, __Vtemp_h4a50595f__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __PVT__u_shiftright_su__DOT__point5 = (1U & ((__Vtemp_hd22bbe69__0[1U] 
                                                  >> 1U) 
                                                 & ((~ (IData)(
                                                               (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                >> 0x21U))) 
                                                    | (0U 
                                                       != 
                                                       (0x1ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            __Vtemp_hd00dc369__0[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             __Vtemp_hd00dc369__0[0U]))))))));
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_catch = 0U;
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_ready = 1U;
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid)
            : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p3__DOT__p3_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid)
            : (IData)(vlSelf->__PVT__pipe_p3__DOT__p3_skid_valid));
    vlSelf->__PVT__sub_dout = (0x3ffffU & ((0x7ffffU 
                                            & VL_EXTENDS_II(19,18, __PVT__chn_data_ext)) 
                                           - (0x7ffffU 
                                              & VL_EXTENDS_II(19,18, __PVT__chn_alu_ext))));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch))));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__chn_sync_pvld)
            : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = (((IData)(vlSelf->__PVT__chn_sync_pvld) 
                                                   & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch))));
    __PVT__tru_dout = ((0x22U <= (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate))
                        ? 0U : (0x1ffffU & ((1U & (
                                                   (((IData)(
                                                             (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                              >> 0x21U)) 
                                                     & (~ (IData)(
                                                                  (0x1ffffU 
                                                                   == 
                                                                   (0x1ffffU 
                                                                    & (IData)(
                                                                              (__PVT__u_shiftright_su__DOT__data_shift 
                                                                               >> 0x10U))))))) 
                                                    | ((~ (IData)(
                                                                  (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                   >> 0x21U))) 
                                                       & (0U 
                                                          != 
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (__PVT__u_shiftright_su__DOT__data_shift 
                                                                      >> 0x10U)))))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                  >> 0x21U))) 
                                                      & ((0xffffU 
                                                          == 
                                                          (0xffffU 
                                                           & (IData)(__PVT__u_shiftright_su__DOT__data_shift))) 
                                                         & (IData)(__PVT__u_shiftright_su__DOT__point5)))))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                            >> 0x21U)))
                                                 ? 0x10000U
                                                 : 0xffffU)
                                             : ((IData)(__PVT__u_shiftright_su__DOT__data_shift) 
                                                + (IData)(__PVT__u_shiftright_su__DOT__point5)))));
    __PVT__dout_int8_sat = (0xffU & ((1U & (((__PVT__tru_dout 
                                              >> 0x10U) 
                                             & (~ (IData)(
                                                          (0x1ffU 
                                                           == 
                                                           (0x1ffU 
                                                            & (__PVT__tru_dout 
                                                               >> 7U)))))) 
                                            | ((~ (__PVT__tru_dout 
                                                   >> 0x10U)) 
                                               & (0U 
                                                  != 
                                                  (0x1ffU 
                                                   & (__PVT__tru_dout 
                                                      >> 7U))))))
                                      ? ((0x10000U 
                                          & __PVT__tru_dout)
                                          ? 0x80U : 0x7fU)
                                      : __PVT__tru_dout));
    vlSelf->__PVT__chn_dout = (0xffffU & ((1U == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))
                                           ? ((1U & 
                                               ((IData)(
                                                        (0x10000U 
                                                         == 
                                                         (0x18000U 
                                                          & __PVT__tru_dout))) 
                                                | (IData)(
                                                          (0x8000U 
                                                           == 
                                                           (0x18000U 
                                                            & __PVT__tru_dout)))))
                                               ? ((0x10000U 
                                                   & __PVT__tru_dout)
                                                   ? 0x8000U
                                                   : 0x7fffU)
                                               : __PVT__tru_dout)
                                           : ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(__PVT__dout_int8_sat) 
                                                                 >> 7U)))) 
                                                  << 8U)) 
                                              | (IData)(__PVT__dout_int8_sat))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_7__8(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_7__8\n"); );
    // Init
    IData/*17:0*/ __PVT__chn_alu_ext;
    IData/*17:0*/ __PVT__chn_data_ext;
    CData/*7:0*/ __PVT__dout_int8_sat;
    IData/*16:0*/ __PVT__tru_dout;
    QData/*33:0*/ __PVT__u_shiftright_su__DOT__data_shift;
    CData/*0:0*/ __PVT__u_shiftright_su__DOT__point5;
    VlWide<4>/*127:0*/ __Vtemp_h16ad1a3c__0;
    VlWide<4>/*127:0*/ __Vtemp_h8a267ddc__0;
    VlWide<4>/*127:0*/ __Vtemp_hf9a63bb0__0;
    VlWide<4>/*127:0*/ __Vtemp_hd22bbe69__0;
    VlWide<4>/*127:0*/ __Vtemp_h4a50595f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd00dc369__0;
    // Body
    vlSelf->__PVT__mul_dout = (0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,18, vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data)), 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,16, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale)))));
    __PVT__chn_data_ext = ((0x20000U & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_7_d0 
                                        << 1U)) | vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_7_d0);
    __PVT__chn_alu_ext = ((0x30000U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_7_d0) 
                                                      >> 0xfU)))) 
                                       << 0x10U)) | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_7_d0));
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__sub_out_prdy) 
               | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__tru_out_prdy) 
               | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelf->__PVT__chn_sync_pvld = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0) 
                                          >> 7U));
    __Vtemp_h16ad1a3c__0[0U] = 0U;
    __Vtemp_h16ad1a3c__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_h16ad1a3c__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_h16ad1a3c__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_h8a267ddc__0, __Vtemp_h16ad1a3c__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __PVT__u_shiftright_su__DOT__data_shift = (0x3ffffffffULL 
                                               & (((QData)((IData)(
                                                                   __Vtemp_h8a267ddc__0[2U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp_h8a267ddc__0[1U])) 
                                                     >> 2U)));
    __Vtemp_hf9a63bb0__0[0U] = 0U;
    __Vtemp_hf9a63bb0__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_hf9a63bb0__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_hf9a63bb0__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_hd22bbe69__0, __Vtemp_hf9a63bb0__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __Vtemp_h4a50595f__0[0U] = 0U;
    __Vtemp_h4a50595f__0[1U] = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                << 2U);
    __Vtemp_h4a50595f__0[2U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 << 4U) | (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_h4a50595f__0[3U] = (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                           >> 0x21U)))))))) 
                                 >> 0x1cU) | ((IData)(
                                                      ((0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                                >> 0x21U))))))) 
                                                       >> 0x20U)) 
                                              << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_hd00dc369__0, __Vtemp_h4a50595f__0, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    __PVT__u_shiftright_su__DOT__point5 = (1U & ((__Vtemp_hd22bbe69__0[1U] 
                                                  >> 1U) 
                                                 & ((~ (IData)(
                                                               (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                >> 0x21U))) 
                                                    | (0U 
                                                       != 
                                                       (0x1ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            __Vtemp_hd00dc369__0[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             __Vtemp_hd00dc369__0[0U]))))))));
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_catch = 0U;
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_ready = 1U;
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid)
            : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p3__DOT__p3_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid)
            : (IData)(vlSelf->__PVT__pipe_p3__DOT__p3_skid_valid));
    vlSelf->__PVT__sub_dout = (0x3ffffU & ((0x7ffffU 
                                            & VL_EXTENDS_II(19,18, __PVT__chn_data_ext)) 
                                           - (0x7ffffU 
                                              & VL_EXTENDS_II(19,18, __PVT__chn_alu_ext))));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch))));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelf->__PVT__chn_sync_pvld)
            : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = (((IData)(vlSelf->__PVT__chn_sync_pvld) 
                                                   & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch))));
    __PVT__tru_dout = ((0x22U <= (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate))
                        ? 0U : (0x1ffffU & ((1U & (
                                                   (((IData)(
                                                             (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                              >> 0x21U)) 
                                                     & (~ (IData)(
                                                                  (0x1ffffU 
                                                                   == 
                                                                   (0x1ffffU 
                                                                    & (IData)(
                                                                              (__PVT__u_shiftright_su__DOT__data_shift 
                                                                               >> 0x10U))))))) 
                                                    | ((~ (IData)(
                                                                  (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                   >> 0x21U))) 
                                                       & (0U 
                                                          != 
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (__PVT__u_shiftright_su__DOT__data_shift 
                                                                      >> 0x10U)))))) 
                                                   | ((~ (IData)(
                                                                 (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                  >> 0x21U))) 
                                                      & ((0xffffU 
                                                          == 
                                                          (0xffffU 
                                                           & (IData)(__PVT__u_shiftright_su__DOT__data_shift))) 
                                                         & (IData)(__PVT__u_shiftright_su__DOT__point5)))))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data 
                                                            >> 0x21U)))
                                                 ? 0x10000U
                                                 : 0xffffU)
                                             : ((IData)(__PVT__u_shiftright_su__DOT__data_shift) 
                                                + (IData)(__PVT__u_shiftright_su__DOT__point5)))));
    __PVT__dout_int8_sat = (0xffU & ((1U & (((__PVT__tru_dout 
                                              >> 0x10U) 
                                             & (~ (IData)(
                                                          (0x1ffU 
                                                           == 
                                                           (0x1ffU 
                                                            & (__PVT__tru_dout 
                                                               >> 7U)))))) 
                                            | ((~ (__PVT__tru_dout 
                                                   >> 0x10U)) 
                                               & (0U 
                                                  != 
                                                  (0x1ffU 
                                                   & (__PVT__tru_dout 
                                                      >> 7U))))))
                                      ? ((0x10000U 
                                          & __PVT__tru_dout)
                                          ? 0x80U : 0x7fU)
                                      : __PVT__tru_dout));
    vlSelf->__PVT__chn_dout = (0xffffU & ((1U == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))
                                           ? ((1U & 
                                               ((IData)(
                                                        (0x10000U 
                                                         == 
                                                         (0x18000U 
                                                          & __PVT__tru_dout))) 
                                                | (IData)(
                                                          (0x8000U 
                                                           == 
                                                           (0x18000U 
                                                            & __PVT__tru_dout)))))
                                               ? ((0x10000U 
                                                   & __PVT__tru_dout)
                                                   ? 0x8000U
                                                   : 0x7fffU)
                                               : __PVT__tru_dout)
                                           : ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(__PVT__dout_int8_sat) 
                                                                 >> 7U)))) 
                                                  << 8U)) 
                                              | (IData)(__PVT__dout_int8_sat))));
}
