// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_CDMA_dual_reg.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__1(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__1\n"); );
    // Body
    vlSelf->reg_rd_data = (((((((((0xbcU == (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U))) 
                                  | (0x58U == (0xffcU 
                                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U)))) 
                                 | (0x5cU == (0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                                | (0xb0U == (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                               | (0xa4U == (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                              | (0xa8U == (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                             | (0xacU == (0xffcU & 
                                          ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U)))) 
                            | (0xe8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U))))
                            ? ((0xbcU == (0xffcU & 
                                          ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U)))
                                ? (((IData)(vlSelf->weight_bank) 
                                    << 0x10U) | (IData)(vlSelf->data_bank))
                                : ((0x58U == (0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))
                                    ? (IData)(vlSelf->batches)
                                    : ((0x5cU == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                        ? vlSelf->batch_stride
                                        : ((0xb0U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))
                                            ? (((IData)(vlSelf->conv_y_stride) 
                                                << 0x10U) 
                                               | (IData)(vlSelf->conv_x_stride))
                                            : ((0xa4U 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))
                                                ? (
                                                   ((IData)(vlSelf->cvt_truncate) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->cvt_en))
                                                : (
                                                   (0xa8U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelf->cvt_offset)
                                                    : 
                                                   ((0xacU 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? (IData)(vlSelf->cvt_scale)
                                                     : vlSelf->cya)))))))
                            : (((((((((0x30U == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U))) 
                                      | (0x38U == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))) 
                                     | (0x34U == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))) 
                                    | (0x3cU == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))) 
                                   | (0x4cU == (0xffcU 
                                                & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) 
                                  | (0x2cU == (0xffcU 
                                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U)))) 
                                 | (0x18U == (0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                                | (0x1cU == (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U))))
                                ? ((0x30U == (0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))
                                    ? vlSelf->datain_addr_high_0
                                    : ((0x38U == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                        ? vlSelf->datain_addr_high_1
                                        : ((0x34U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))
                                            ? vlSelf->datain_addr_low_0
                                            : ((0x3cU 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))
                                                ? vlSelf->datain_addr_low_1
                                                : (
                                                   (0x4cU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? 
                                                   (((IData)(vlSelf->surf_packed) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelf->line_packed))
                                                    : 
                                                   ((0x2cU 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? (IData)(vlSelf->datain_ram_type)
                                                     : 
                                                    ((0x18U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? 
                                                     (((IData)(vlSelf->pixel_sign_override) 
                                                       << 0x14U) 
                                                      | (((IData)(vlSelf->pixel_mapping) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelf->pixel_format) 
                                                             << 8U) 
                                                            | (IData)(vlSelf->datain_format))))
                                                      : 
                                                     (((IData)(vlSelf->datain_height) 
                                                       << 0x10U) 
                                                      | (IData)(vlSelf->datain_width)))))))))
                                : (((((((((0x20U == 
                                           (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                                          | (0x24U 
                                             == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))) 
                                         | (0x60U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                                        | (0x64U == 
                                           (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                                       | (0xccU == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                                      | (0xd0U == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))) 
                                     | (0x40U == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))) 
                                    | (0x44U == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U))))
                                    ? ((0x20U == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                        ? (IData)(vlSelf->datain_channel)
                                        : ((0x24U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))
                                            ? (((IData)(vlSelf->datain_height_ext) 
                                                << 0x10U) 
                                               | (IData)(vlSelf->datain_width_ext))
                                            : ((0x60U 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))
                                                ? (IData)(vlSelf->entries)
                                                : (
                                                   (0x64U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelf->grains)
                                                    : 
                                                   ((0xccU 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_inf_data_num
                                                     : 
                                                    ((0xd0U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_inf_weight_num
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSelf->line_stride
                                                       : vlSelf->uv_line_stride)))))))
                                    : (((((((((0x98U 
                                               == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U))) 
                                              | (0x9cU 
                                                 == 
                                                 (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))) 
                                             | (0xa0U 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))) 
                                            | (0x14U 
                                               == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))) 
                                           | (0xc0U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))) 
                                          | (0xc4U 
                                             == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))) 
                                         | (0xc8U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                                        | (0x10U == 
                                           (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))))
                                        ? ((0x98U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))
                                            ? (IData)(vlSelf->mean_format)
                                            : ((0x9cU 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))
                                                ? (
                                                   ((IData)(vlSelf->mean_gu) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelf->mean_ry))
                                                : (
                                                   (0xa0U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? 
                                                   (((IData)(vlSelf->mean_ax) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelf->mean_bv))
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? 
                                                    (((IData)(vlSelf->skip_weight_rls) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->skip_data_rls) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->weight_reuse) 
                                                            << 0x14U) 
                                                           | (((IData)(vlSelf->data_reuse) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->proc_precision) 
                                                                  << 0xcU) 
                                                                 | (((IData)(vlSelf->in_precision) 
                                                                     << 8U) 
                                                                    | (IData)(vlSelf->conv_mode)))))))
                                                     : 
                                                    ((0xc0U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? (IData)(vlSelf->nan_to_zero)
                                                      : 
                                                     ((0xc4U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_nan_data_num
                                                       : 
                                                      ((0xc8U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))
                                                        ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_nan_weight_num
                                                        : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en))))))))
                                        : (((((((((0xe0U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U))) 
                                                  | (0xd8U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))) 
                                                 | (0xd4U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))) 
                                                | (0xe4U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))) 
                                               | (0xdcU 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))) 
                                              | (0x28U 
                                                 == 
                                                 (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))) 
                                             | (0x50U 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))) 
                                            | (0x54U 
                                               == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U))))
                                            ? ((0xe0U 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))
                                                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_dat_rd_latency
                                                : (
                                                   (0xd8U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_dat_rd_stall
                                                    : 
                                                   ((0xd4U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? (IData)(vlSelf->dma_en)
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_wt_rd_latency
                                                      : 
                                                     ((0xdcU 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_wt_rd_stall
                                                       : 
                                                      ((0x28U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))
                                                        ? 
                                                       (((IData)(vlSelf->pixel_y_offset) 
                                                         << 0x10U) 
                                                        | (IData)(vlSelf->pixel_x_offset))
                                                        : 
                                                       ((0x50U 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                             << 2U)))
                                                         ? 
                                                        (((IData)(vlSelf->rsv_per_uv_line) 
                                                          << 0x10U) 
                                                         | (IData)(vlSelf->rsv_per_line))
                                                         : 
                                                        (((IData)(vlSelf->rsv_y_index) 
                                                          << 0x10U) 
                                                         | (IData)(vlSelf->rsv_height)))))))))
                                            : (((((
                                                   ((((0x48U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U))) 
                                                      | (0x78U 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                             << 2U)))) 
                                                     | (0x7cU 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))) 
                                                    | (0x80U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (0x68U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))) 
                                                  | (0x74U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))) 
                                                 | (0x6cU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))) 
                                                | (0x70U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U))))
                                                ? (
                                                   (0x48U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSelf->surf_stride
                                                    : 
                                                   ((0x78U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSelf->weight_addr_high
                                                     : 
                                                    ((0x7cU 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSelf->weight_addr_low
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSelf->weight_bytes
                                                       : 
                                                      ((0x68U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))
                                                        ? (IData)(vlSelf->weight_format)
                                                        : 
                                                       ((0x74U 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                             << 2U)))
                                                         ? (IData)(vlSelf->weight_ram_type)
                                                         : 
                                                        ((0x6cU 
                                                          == 
                                                          (0xffcU 
                                                           & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U)))
                                                          ? vlSelf->byte_per_kernel
                                                          : (IData)(vlSelf->weight_kernel))))))))
                                                : (
                                                   (0x84U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSelf->wgs_addr_high
                                                    : 
                                                   ((0x88U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSelf->wgs_addr_low
                                                     : 
                                                    ((0x8cU 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSelf->wmb_addr_high
                                                      : 
                                                     ((0x90U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSelf->wmb_addr_low
                                                       : 
                                                      ((0x94U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))
                                                        ? vlSelf->wmb_bytes
                                                        : 
                                                       ((0xb4U 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                             << 2U)))
                                                         ? 
                                                        (((IData)(vlSelf->pad_bottom) 
                                                          << 0x18U) 
                                                         | (((IData)(vlSelf->pad_top) 
                                                             << 0x10U) 
                                                            | (((IData)(vlSelf->pad_right) 
                                                                << 8U) 
                                                               | (IData)(vlSelf->pad_left))))
                                                         : 
                                                        ((0xb8U 
                                                          == 
                                                          (0xffcU 
                                                           & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U)))
                                                          ? (IData)(vlSelf->pad_value)
                                                          : 0U)))))))))))));
    vlSelf->__PVT__nvdla_cdma_d_bank_0_wren = ((0xbcU 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U))) 
                                               & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_conv_stride_0_wren 
        = ((0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_cvt_cfg_0_wren = ((0xa4U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U))) 
                                                  & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_dain_map_0_wren = (
                                                   (0x4cU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U))) 
                                                   & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_datain_format_0_wren 
        = ((0x18U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_datain_size_0_0_wren 
        = ((0x1cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_datain_size_ext_0_0_wren 
        = ((0x24U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_mean_global_0_0_wren 
        = ((0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_mean_global_1_0_wren 
        = ((0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_misc_cfg_0_wren = (
                                                   (0x14U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U))) 
                                                   & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_pixel_offset_0_wren 
        = ((0x28U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_reserved_x_cfg_0_wren 
        = ((0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_reserved_y_cfg_0_wren 
        = ((0x54U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_zero_padding_0_wren 
        = ((0xb4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__3(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__3\n"); );
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en) {
        if (((((((((0xbcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U))) | 
                   (0x58U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) | 
                  (0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U)))) | 
                 (0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                      << 2U)))) | (0xa4U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))) 
               | (0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                      << 2U)))) | (0xacU 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))) 
             | (0xe8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                    << 2U))))) {
            if ((0xbcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_BANK_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->weight_bank) 
                                << 0x10U) | (IData)(vlSelf->data_bank)),
                              32,(((IData)(vlSelf->weight_bank) 
                                   << 0x10U) | (IData)(vlSelf->data_bank)));
                }
            } else if ((0x58U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_BATCH_NUMBER_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->batches,32,(IData)(vlSelf->batches));
                }
            } else if ((0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_BATCH_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->batch_stride,
                              32,vlSelf->batch_stride);
                }
            } else if ((0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_CONV_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->conv_y_stride) 
                                << 0x10U) | (IData)(vlSelf->conv_x_stride)),
                              32,(((IData)(vlSelf->conv_y_stride) 
                                   << 0x10U) | (IData)(vlSelf->conv_x_stride)));
                }
            } else if ((0xa4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_CVT_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->cvt_truncate) 
                                << 4U) | (IData)(vlSelf->cvt_en)),
                              32,(((IData)(vlSelf->cvt_truncate) 
                                   << 4U) | (IData)(vlSelf->cvt_en)));
                }
            } else if ((0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_CVT_OFFSET_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->cvt_offset,32,
                              (IData)(vlSelf->cvt_offset));
                }
            } else if ((0xacU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_CVT_SCALE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->cvt_scale,32,
                              (IData)(vlSelf->cvt_scale));
                }
            } else if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_CYA_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->cya,32,vlSelf->cya);
            }
        } else if (((((((((0x30U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                          | (0x38U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x34U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                       | (0x4cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x2cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x18U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x1cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x30U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DAIN_ADDR_HIGH_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->datain_addr_high_0,
                              32,vlSelf->datain_addr_high_0);
                }
            } else if ((0x38U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DAIN_ADDR_HIGH_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->datain_addr_high_1,
                              32,vlSelf->datain_addr_high_1);
                }
            } else if ((0x34U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DAIN_ADDR_LOW_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->datain_addr_low_0,
                              32,vlSelf->datain_addr_low_0);
                }
            } else if ((0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DAIN_ADDR_LOW_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->datain_addr_low_1,
                              32,vlSelf->datain_addr_low_1);
                }
            } else if ((0x4cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DAIN_MAP_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->surf_packed) 
                                << 0x10U) | (IData)(vlSelf->line_packed)),
                              32,(((IData)(vlSelf->surf_packed) 
                                   << 0x10U) | (IData)(vlSelf->line_packed)));
                }
            } else if ((0x2cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DAIN_RAM_TYPE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->datain_ram_type,
                              32,(IData)(vlSelf->datain_ram_type));
                }
            } else if ((0x18U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DATAIN_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->pixel_sign_override) 
                                << 0x14U) | (((IData)(vlSelf->pixel_mapping) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->pixel_format) 
                                                 << 8U) 
                                                | (IData)(vlSelf->datain_format)))),
                              32,(((IData)(vlSelf->pixel_sign_override) 
                                   << 0x14U) | (((IData)(vlSelf->pixel_mapping) 
                                                 << 0x10U) 
                                                | (((IData)(vlSelf->pixel_format) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->datain_format)))));
                }
            } else if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DATAIN_SIZE_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,(((IData)(vlSelf->datain_height) 
                               << 0x10U) | (IData)(vlSelf->datain_width)),
                          32,(((IData)(vlSelf->datain_height) 
                               << 0x10U) | (IData)(vlSelf->datain_width)));
            }
        } else if (((((((((0x20U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                          | (0x24U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x64U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                       | (0xccU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))) 
                      | (0xd0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x40U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x44U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x20U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DATAIN_SIZE_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->datain_channel,
                              32,(IData)(vlSelf->datain_channel));
                }
            } else if ((0x24U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DATAIN_SIZE_EXT_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->datain_height_ext) 
                                << 0x10U) | (IData)(vlSelf->datain_width_ext)),
                              32,(((IData)(vlSelf->datain_height_ext) 
                                   << 0x10U) | (IData)(vlSelf->datain_width_ext)));
                }
            } else if ((0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_ENTRY_PER_SLICE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->entries,32,(IData)(vlSelf->entries));
                }
            } else if ((0x64U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_FETCH_GRAIN_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->grains,32,(IData)(vlSelf->grains));
                }
            } else if ((0xccU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_INF_INPUT_DATA_NUM_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1065, "");
                }
            } else if ((0xd0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_INF_INPUT_WEIGHT_NUM_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1069, "");
                }
            } else if ((0x40U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_LINE_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->line_stride,32,
                              vlSelf->line_stride);
                }
            } else if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_LINE_UV_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->uv_line_stride,
                          32,vlSelf->uv_line_stride);
            }
        } else if (((((((((0x98U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                          | (0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x14U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                       | (0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))) 
                      | (0xc4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)))) 
                     | (0xc8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x10U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x98U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_MEAN_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->mean_format,32,
                              (IData)(vlSelf->mean_format));
                }
            } else if ((0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_MEAN_GLOBAL_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->mean_gu) 
                                << 0x10U) | (IData)(vlSelf->mean_ry)),
                              32,(((IData)(vlSelf->mean_gu) 
                                   << 0x10U) | (IData)(vlSelf->mean_ry)));
                }
            } else if ((0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_MEAN_GLOBAL_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->mean_ax) 
                                << 0x10U) | (IData)(vlSelf->mean_bv)),
                              32,(((IData)(vlSelf->mean_ax) 
                                   << 0x10U) | (IData)(vlSelf->mean_bv)));
                }
            } else if ((0x14U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_MISC_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->skip_weight_rls) 
                                << 0x1cU) | (((IData)(vlSelf->skip_data_rls) 
                                              << 0x18U) 
                                             | (((IData)(vlSelf->weight_reuse) 
                                                 << 0x14U) 
                                                | (((IData)(vlSelf->data_reuse) 
                                                    << 0x10U) 
                                                   | (((IData)(vlSelf->proc_precision) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->in_precision) 
                                                          << 8U) 
                                                         | (IData)(vlSelf->conv_mode))))))),
                              32,(((IData)(vlSelf->skip_weight_rls) 
                                   << 0x1cU) | (((IData)(vlSelf->skip_data_rls) 
                                                 << 0x18U) 
                                                | (((IData)(vlSelf->weight_reuse) 
                                                    << 0x14U) 
                                                   | (((IData)(vlSelf->data_reuse) 
                                                       << 0x10U) 
                                                      | (((IData)(vlSelf->proc_precision) 
                                                          << 0xcU) 
                                                         | (((IData)(vlSelf->in_precision) 
                                                             << 8U) 
                                                            | (IData)(vlSelf->conv_mode))))))));
                }
            } else if ((0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_NAN_FLUSH_TO_ZERO_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->nan_to_zero,32,
                              (IData)(vlSelf->nan_to_zero));
                }
            } else if ((0xc4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_NAN_INPUT_DATA_NUM_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1080, "");
                }
            } else if ((0xc8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_NAN_INPUT_WEIGHT_NUM_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1084, "");
                }
            } else if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_OP_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en,
                          32,(IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en));
            }
        } else if (((((((((0xe0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                          | (0xd8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0xd4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                        | (0xe4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                       | (0xdcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x28U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x54U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U))))) {
            if ((0xe0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_PERF_DAT_READ_LATENCY_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1089, "");
                }
            } else if ((0xd8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_PERF_DAT_READ_STALL_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1093, "");
                }
            } else if ((0xd4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_PERF_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->dma_en,32,(IData)(vlSelf->dma_en));
                }
            } else if ((0xe4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_PERF_WT_READ_LATENCY_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1098, "");
                }
            } else if ((0xdcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_PERF_WT_READ_STALL_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1102, "");
                }
            } else if ((0x28U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_PIXEL_OFFSET_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->pixel_y_offset) 
                                << 0x10U) | (IData)(vlSelf->pixel_x_offset)),
                              32,(((IData)(vlSelf->pixel_y_offset) 
                                   << 0x10U) | (IData)(vlSelf->pixel_x_offset)));
                }
            } else if ((0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_RESERVED_X_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->rsv_per_uv_line) 
                                << 0x10U) | (IData)(vlSelf->rsv_per_line)),
                              32,(((IData)(vlSelf->rsv_per_uv_line) 
                                   << 0x10U) | (IData)(vlSelf->rsv_per_line)));
                }
            } else if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_RESERVED_Y_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,(((IData)(vlSelf->rsv_y_index) 
                               << 0x10U) | (IData)(vlSelf->rsv_height)),
                          32,(((IData)(vlSelf->rsv_y_index) 
                               << 0x10U) | (IData)(vlSelf->rsv_height)));
            }
        } else if (((((((((0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                          | (0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x80U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                       | (0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x6cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x70U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_SURF_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->surf_stride,32,
                              vlSelf->surf_stride);
                }
            } else if ((0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WEIGHT_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->weight_addr_high,
                              32,vlSelf->weight_addr_high);
                }
            } else if ((0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WEIGHT_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->weight_addr_low,
                              32,vlSelf->weight_addr_low);
                }
            } else if ((0x80U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WEIGHT_BYTES_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->weight_bytes,
                              32,vlSelf->weight_bytes);
                }
            } else if ((0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WEIGHT_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->weight_format,
                              32,(IData)(vlSelf->weight_format));
                }
            } else if ((0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WEIGHT_RAM_TYPE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->weight_ram_type,
                              32,(IData)(vlSelf->weight_ram_type));
                }
            } else if ((0x6cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WEIGHT_SIZE_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->byte_per_kernel,
                              32,vlSelf->byte_per_kernel);
                }
            } else if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WEIGHT_SIZE_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->weight_kernel,
                          32,(IData)(vlSelf->weight_kernel));
            }
        } else if ((0x84U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WGS_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->wgs_addr_high,
                          32,vlSelf->wgs_addr_high);
            }
        } else if ((0x88U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WGS_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->wgs_addr_low,32,
                          vlSelf->wgs_addr_low);
            }
        } else if ((0x8cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WMB_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->wmb_addr_high,
                          32,vlSelf->wmb_addr_high);
            }
        } else if ((0x90U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WMB_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->wmb_addr_low,32,
                          vlSelf->wmb_addr_low);
            }
        } else if ((0x94U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WMB_BYTES_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->wmb_bytes,32,vlSelf->wmb_bytes);
            }
        } else if ((0xb4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_ZERO_PADDING_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,(((IData)(vlSelf->pad_bottom) 
                               << 0x18U) | (((IData)(vlSelf->pad_top) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->pad_right) 
                                                << 8U) 
                                               | (IData)(vlSelf->pad_left)))),
                          32,(((IData)(vlSelf->pad_bottom) 
                               << 0x18U) | (((IData)(vlSelf->pad_top) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->pad_right) 
                                                << 8U) 
                                               | (IData)(vlSelf->pad_left)))));
            }
        } else if ((0xb8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_ZERO_PADDING_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->pad_value,32,(IData)(vlSelf->pad_value));
            }
        } else {
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: Unknown register (0x%x) = 0x%x\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),12,(0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)),
                          32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)));
            }
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_invalid_wr)) {
                VL_WRITEF("ERROR: write to undefined register!\n");
                VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1124, "");
            }
        }
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__5(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__5\n"); );
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__nvdla_cdma_d_reserved_y_cfg_0_wren) {
            vlSelf->rsv_y_index = (0x1fU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_conv_stride_0_wren) {
            vlSelf->conv_x_stride = (7U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_datain_size_ext_0_0_wren) {
            vlSelf->datain_width_ext = (0x1fffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                           >> 0x16U)));
            vlSelf->datain_height_ext = (0x1fffU & (IData)(
                                                           (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                            >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_conv_stride_0_wren) {
            vlSelf->conv_y_stride = (7U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_reserved_x_cfg_0_wren) {
            vlSelf->rsv_per_line = (0x3ffU & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)));
            vlSelf->rsv_per_uv_line = (0x3ffU & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                         >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_pixel_offset_0_wren) {
            vlSelf->pixel_y_offset = (7U & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_reserved_y_cfg_0_wren) {
            vlSelf->rsv_height = (7U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_zero_padding_0_wren) {
            vlSelf->pad_bottom = (0x3fU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x2eU)));
            vlSelf->pad_top = (0x1fU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_datain_format_0_wren) {
            vlSelf->pixel_mapping = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_misc_cfg_0_wren) {
            vlSelf->in_precision = (3U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x1eU)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_cvt_cfg_0_wren) {
            vlSelf->cvt_en = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                            >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_misc_cfg_0_wren) {
            vlSelf->skip_data_rls = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x2eU)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_dain_map_0_wren) {
            vlSelf->line_packed = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                 >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_misc_cfg_0_wren) {
            vlSelf->weight_reuse = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x2aU)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_bank_0_wren) {
            vlSelf->weight_bank = (0x1fU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_dain_map_0_wren) {
            vlSelf->surf_packed = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                 >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_mean_global_1_0_wren) {
            vlSelf->mean_ax = (0xffffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_zero_padding_0_wren) {
            vlSelf->pad_right = (0x3fU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x1eU)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_datain_size_0_0_wren) {
            vlSelf->datain_height = (0x1fffU & (IData)(
                                                       (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                        >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_misc_cfg_0_wren) {
            vlSelf->data_reuse = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_pixel_offset_0_wren) {
            vlSelf->pixel_x_offset = (0x1fU & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                       >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_bank_0_wren) {
            vlSelf->data_bank = (0x1fU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (((0x94U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->wmb_bytes = (0xfffffffU & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                       >> 0x16U)));
        }
        if (((0x88U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->wgs_addr_low = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                            >> 0x16U));
        }
        if (((0x8cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->wmb_addr_high = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U));
        }
        if (((0xe8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->cya = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                   >> 0x16U));
        }
        if (((0x90U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->wmb_addr_low = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                            >> 0x16U));
        }
        if (((0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->nan_to_zero = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                 >> 0x16U)));
        }
        if (((0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->weight_format = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x16U)));
        }
        if (((0x84U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->wgs_addr_high = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U));
        }
        if (((0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->entries = (0x3fffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (((0xd4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->dma_en = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                            >> 0x16U)));
        }
        if (((0x70U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->weight_kernel = (0x1fffU & (IData)(
                                                       (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                        >> 0x16U)));
        }
        if (((0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->weight_addr_high = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                >> 0x16U));
        }
        if (((0x64U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->grains = (0xfffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                >> 0x16U)));
        }
        if (((0x44U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->uv_line_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                              >> 0x16U));
        }
        if (((0x40U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->line_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                           >> 0x16U));
        }
        if (((0x80U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->weight_bytes = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                            >> 0x16U));
        }
        if (((0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->weight_addr_low = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                               >> 0x16U));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_datain_size_0_0_wren) {
            vlSelf->datain_width = (0x1fffU & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                       >> 0x16U)));
        }
        if (((0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->batch_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                            >> 0x16U));
        }
        if (((0x34U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->datain_addr_low_0 = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                 >> 0x16U));
        }
        if (((0x30U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->datain_addr_high_0 = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x16U));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_zero_padding_0_wren) {
            vlSelf->pad_left = (0x1fU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                 >> 0x16U)));
        }
        if (((0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->surf_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                           >> 0x16U));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_datain_format_0_wren) {
            vlSelf->pixel_format = (0x3fU & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x1eU)));
        }
        if (((0x20U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->datain_channel = (0x1fffU & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                         >> 0x16U)));
        }
        if (((0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->weight_ram_type = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x16U)));
        }
        if (((0x58U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->batches = (0x1fU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_datain_format_0_wren) {
            vlSelf->datain_format = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_misc_cfg_0_wren) {
            vlSelf->conv_mode = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                               >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_mean_global_0_0_wren) {
            vlSelf->mean_ry = (0xffffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_mean_global_1_0_wren) {
            vlSelf->mean_bv = (0xffffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_mean_global_0_0_wren) {
            vlSelf->mean_gu = (0xffffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x26U)));
        }
        if (((0x2cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->datain_ram_type = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x16U)));
        }
    } else {
        vlSelf->rsv_y_index = 0U;
        vlSelf->conv_x_stride = 0U;
        vlSelf->datain_width_ext = 0U;
        vlSelf->datain_height_ext = 0U;
        vlSelf->conv_y_stride = 0U;
        vlSelf->rsv_per_line = 0U;
        vlSelf->rsv_per_uv_line = 0U;
        vlSelf->pixel_y_offset = 0U;
        vlSelf->rsv_height = 0U;
        vlSelf->pad_bottom = 0U;
        vlSelf->pad_top = 0U;
        vlSelf->pixel_mapping = 0U;
        vlSelf->in_precision = 1U;
        vlSelf->cvt_en = 0U;
        vlSelf->skip_data_rls = 0U;
        vlSelf->line_packed = 0U;
        vlSelf->weight_reuse = 0U;
        vlSelf->weight_bank = 0U;
        vlSelf->surf_packed = 0U;
        vlSelf->mean_ax = 0U;
        vlSelf->pad_right = 0U;
        vlSelf->datain_height = 0U;
        vlSelf->data_reuse = 0U;
        vlSelf->pixel_x_offset = 0U;
        vlSelf->data_bank = 0U;
        vlSelf->wmb_bytes = 0U;
        vlSelf->wgs_addr_low = 0U;
        vlSelf->wmb_addr_high = 0U;
        vlSelf->cya = 0U;
        vlSelf->wmb_addr_low = 0U;
        vlSelf->nan_to_zero = 0U;
        vlSelf->weight_format = 0U;
        vlSelf->wgs_addr_high = 0U;
        vlSelf->entries = 0U;
        vlSelf->dma_en = 0U;
        vlSelf->weight_kernel = 0U;
        vlSelf->weight_addr_high = 0U;
        vlSelf->grains = 0U;
        vlSelf->uv_line_stride = 0U;
        vlSelf->line_stride = 0U;
        vlSelf->weight_bytes = 0U;
        vlSelf->weight_addr_low = 0U;
        vlSelf->datain_width = 0U;
        vlSelf->batch_stride = 0U;
        vlSelf->datain_addr_low_0 = 0U;
        vlSelf->datain_addr_high_0 = 0U;
        vlSelf->pad_left = 0U;
        vlSelf->surf_stride = 0U;
        vlSelf->pixel_format = 0xcU;
        vlSelf->datain_channel = 0U;
        vlSelf->weight_ram_type = 0U;
        vlSelf->batches = 0U;
        vlSelf->datain_format = 0U;
        vlSelf->conv_mode = 0U;
        vlSelf->mean_ry = 0U;
        vlSelf->mean_bv = 0U;
        vlSelf->mean_gu = 0U;
        vlSelf->datain_ram_type = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__10(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__10\n"); );
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__nvdla_cdma_d_misc_cfg_0_wren) {
            vlSelf->skip_weight_rls = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x32U)));
        }
        if (((0x6cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->byte_per_kernel = (0x3ffffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                           >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_misc_cfg_0_wren) {
            vlSelf->proc_precision = (3U & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x22U)));
        }
        if (((0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->cvt_offset = (0xffffU & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x16U)));
        }
        if (((0xacU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->cvt_scale = (0xffffU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x16U)));
        }
        if (((0xb8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->pad_value = (0xffffU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_cvt_cfg_0_wren) {
            vlSelf->cvt_truncate = (0x3fU & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x1aU)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_datain_format_0_wren) {
            vlSelf->pixel_sign_override = (1U & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                         >> 0x2aU)));
        }
        if (((0x98U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->mean_format = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                 >> 0x16U)));
        }
    } else {
        vlSelf->skip_weight_rls = 0U;
        vlSelf->byte_per_kernel = 0U;
        vlSelf->proc_precision = 1U;
        vlSelf->cvt_offset = 0U;
        vlSelf->cvt_scale = 0U;
        vlSelf->pad_value = 0U;
        vlSelf->cvt_truncate = 0U;
        vlSelf->pixel_sign_override = 0U;
        vlSelf->mean_format = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__12(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__12\n"); );
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn) {
        if (((0x38U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->datain_addr_high_1 = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x16U));
        }
        if (((0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelf->datain_addr_low_1 = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                 >> 0x16U));
        }
    } else {
        vlSelf->datain_addr_high_1 = 0U;
        vlSelf->datain_addr_low_1 = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__2(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__2\n"); );
    // Body
    vlSelf->reg_rd_data = (((((((((0xbcU == (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U))) 
                                  | (0x58U == (0xffcU 
                                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U)))) 
                                 | (0x5cU == (0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                                | (0xb0U == (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                               | (0xa4U == (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                              | (0xa8U == (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                             | (0xacU == (0xffcU & 
                                          ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U)))) 
                            | (0xe8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U))))
                            ? ((0xbcU == (0xffcU & 
                                          ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U)))
                                ? (((IData)(vlSelf->weight_bank) 
                                    << 0x10U) | (IData)(vlSelf->data_bank))
                                : ((0x58U == (0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))
                                    ? (IData)(vlSelf->batches)
                                    : ((0x5cU == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                        ? vlSelf->batch_stride
                                        : ((0xb0U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))
                                            ? (((IData)(vlSelf->conv_y_stride) 
                                                << 0x10U) 
                                               | (IData)(vlSelf->conv_x_stride))
                                            : ((0xa4U 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))
                                                ? (
                                                   ((IData)(vlSelf->cvt_truncate) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->cvt_en))
                                                : (
                                                   (0xa8U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelf->cvt_offset)
                                                    : 
                                                   ((0xacU 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? (IData)(vlSelf->cvt_scale)
                                                     : vlSelf->cya)))))))
                            : (((((((((0x30U == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U))) 
                                      | (0x38U == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))) 
                                     | (0x34U == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))) 
                                    | (0x3cU == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))) 
                                   | (0x4cU == (0xffcU 
                                                & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) 
                                  | (0x2cU == (0xffcU 
                                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U)))) 
                                 | (0x18U == (0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                                | (0x1cU == (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U))))
                                ? ((0x30U == (0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))
                                    ? vlSelf->datain_addr_high_0
                                    : ((0x38U == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                        ? vlSelf->datain_addr_high_1
                                        : ((0x34U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))
                                            ? vlSelf->datain_addr_low_0
                                            : ((0x3cU 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))
                                                ? vlSelf->datain_addr_low_1
                                                : (
                                                   (0x4cU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? 
                                                   (((IData)(vlSelf->surf_packed) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelf->line_packed))
                                                    : 
                                                   ((0x2cU 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? (IData)(vlSelf->datain_ram_type)
                                                     : 
                                                    ((0x18U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? 
                                                     (((IData)(vlSelf->pixel_sign_override) 
                                                       << 0x14U) 
                                                      | (((IData)(vlSelf->pixel_mapping) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelf->pixel_format) 
                                                             << 8U) 
                                                            | (IData)(vlSelf->datain_format))))
                                                      : 
                                                     (((IData)(vlSelf->datain_height) 
                                                       << 0x10U) 
                                                      | (IData)(vlSelf->datain_width)))))))))
                                : (((((((((0x20U == 
                                           (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                                          | (0x24U 
                                             == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))) 
                                         | (0x60U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                                        | (0x64U == 
                                           (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                                       | (0xccU == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                                      | (0xd0U == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))) 
                                     | (0x40U == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))) 
                                    | (0x44U == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U))))
                                    ? ((0x20U == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                        ? (IData)(vlSelf->datain_channel)
                                        : ((0x24U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))
                                            ? (((IData)(vlSelf->datain_height_ext) 
                                                << 0x10U) 
                                               | (IData)(vlSelf->datain_width_ext))
                                            : ((0x60U 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))
                                                ? (IData)(vlSelf->entries)
                                                : (
                                                   (0x64U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelf->grains)
                                                    : 
                                                   ((0xccU 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_inf_data_num
                                                     : 
                                                    ((0xd0U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_inf_weight_num
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSelf->line_stride
                                                       : vlSelf->uv_line_stride)))))))
                                    : (((((((((0x98U 
                                               == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U))) 
                                              | (0x9cU 
                                                 == 
                                                 (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))) 
                                             | (0xa0U 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))) 
                                            | (0x14U 
                                               == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))) 
                                           | (0xc0U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))) 
                                          | (0xc4U 
                                             == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))) 
                                         | (0xc8U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                                        | (0x10U == 
                                           (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))))
                                        ? ((0x98U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))
                                            ? (IData)(vlSelf->mean_format)
                                            : ((0x9cU 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))
                                                ? (
                                                   ((IData)(vlSelf->mean_gu) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelf->mean_ry))
                                                : (
                                                   (0xa0U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? 
                                                   (((IData)(vlSelf->mean_ax) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelf->mean_bv))
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? 
                                                    (((IData)(vlSelf->skip_weight_rls) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->skip_data_rls) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->weight_reuse) 
                                                            << 0x14U) 
                                                           | (((IData)(vlSelf->data_reuse) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->proc_precision) 
                                                                  << 0xcU) 
                                                                 | (((IData)(vlSelf->in_precision) 
                                                                     << 8U) 
                                                                    | (IData)(vlSelf->conv_mode)))))))
                                                     : 
                                                    ((0xc0U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? (IData)(vlSelf->nan_to_zero)
                                                      : 
                                                     ((0xc4U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_nan_data_num
                                                       : 
                                                      ((0xc8U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))
                                                        ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_nan_weight_num
                                                        : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en))))))))
                                        : (((((((((0xe0U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U))) 
                                                  | (0xd8U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))) 
                                                 | (0xd4U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))) 
                                                | (0xe4U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))) 
                                               | (0xdcU 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))) 
                                              | (0x28U 
                                                 == 
                                                 (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))) 
                                             | (0x50U 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))) 
                                            | (0x54U 
                                               == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U))))
                                            ? ((0xe0U 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))
                                                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_dat_rd_latency
                                                : (
                                                   (0xd8U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_dat_rd_stall
                                                    : 
                                                   ((0xd4U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? (IData)(vlSelf->dma_en)
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_wt_rd_latency
                                                      : 
                                                     ((0xdcU 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_wt_rd_stall
                                                       : 
                                                      ((0x28U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))
                                                        ? 
                                                       (((IData)(vlSelf->pixel_y_offset) 
                                                         << 0x10U) 
                                                        | (IData)(vlSelf->pixel_x_offset))
                                                        : 
                                                       ((0x50U 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                             << 2U)))
                                                         ? 
                                                        (((IData)(vlSelf->rsv_per_uv_line) 
                                                          << 0x10U) 
                                                         | (IData)(vlSelf->rsv_per_line))
                                                         : 
                                                        (((IData)(vlSelf->rsv_y_index) 
                                                          << 0x10U) 
                                                         | (IData)(vlSelf->rsv_height)))))))))
                                            : (((((
                                                   ((((0x48U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U))) 
                                                      | (0x78U 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                             << 2U)))) 
                                                     | (0x7cU 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))) 
                                                    | (0x80U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (0x68U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))) 
                                                  | (0x74U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))) 
                                                 | (0x6cU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))) 
                                                | (0x70U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U))))
                                                ? (
                                                   (0x48U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSelf->surf_stride
                                                    : 
                                                   ((0x78U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSelf->weight_addr_high
                                                     : 
                                                    ((0x7cU 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSelf->weight_addr_low
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSelf->weight_bytes
                                                       : 
                                                      ((0x68U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))
                                                        ? (IData)(vlSelf->weight_format)
                                                        : 
                                                       ((0x74U 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                             << 2U)))
                                                         ? (IData)(vlSelf->weight_ram_type)
                                                         : 
                                                        ((0x6cU 
                                                          == 
                                                          (0xffcU 
                                                           & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U)))
                                                          ? vlSelf->byte_per_kernel
                                                          : (IData)(vlSelf->weight_kernel))))))))
                                                : (
                                                   (0x84U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSelf->wgs_addr_high
                                                    : 
                                                   ((0x88U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSelf->wgs_addr_low
                                                     : 
                                                    ((0x8cU 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSelf->wmb_addr_high
                                                      : 
                                                     ((0x90U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSelf->wmb_addr_low
                                                       : 
                                                      ((0x94U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))
                                                        ? vlSelf->wmb_bytes
                                                        : 
                                                       ((0xb4U 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                             << 2U)))
                                                         ? 
                                                        (((IData)(vlSelf->pad_bottom) 
                                                          << 0x18U) 
                                                         | (((IData)(vlSelf->pad_top) 
                                                             << 0x10U) 
                                                            | (((IData)(vlSelf->pad_right) 
                                                                << 8U) 
                                                               | (IData)(vlSelf->pad_left))))
                                                         : 
                                                        ((0xb8U 
                                                          == 
                                                          (0xffcU 
                                                           & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U)))
                                                          ? (IData)(vlSelf->pad_value)
                                                          : 0U)))))))))))));
    vlSelf->__PVT__nvdla_cdma_d_bank_0_wren = ((0xbcU 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U))) 
                                               & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_conv_stride_0_wren 
        = ((0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_cvt_cfg_0_wren = ((0xa4U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U))) 
                                                  & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_dain_map_0_wren = (
                                                   (0x4cU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U))) 
                                                   & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_datain_format_0_wren 
        = ((0x18U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_datain_size_0_0_wren 
        = ((0x1cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_datain_size_ext_0_0_wren 
        = ((0x24U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_mean_global_0_0_wren 
        = ((0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_mean_global_1_0_wren 
        = ((0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_misc_cfg_0_wren = (
                                                   (0x14U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U))) 
                                                   & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_pixel_offset_0_wren 
        = ((0x28U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_reserved_x_cfg_0_wren 
        = ((0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_reserved_y_cfg_0_wren 
        = ((0x54U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_cdma_d_zero_padding_0_wren 
        = ((0xb4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__4(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__4\n"); );
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en) {
        if (((((((((0xbcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U))) | 
                   (0x58U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) | 
                  (0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U)))) | 
                 (0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                      << 2U)))) | (0xa4U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))) 
               | (0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                      << 2U)))) | (0xacU 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))) 
             | (0xe8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                    << 2U))))) {
            if ((0xbcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_BANK_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->weight_bank) 
                                << 0x10U) | (IData)(vlSelf->data_bank)),
                              32,(((IData)(vlSelf->weight_bank) 
                                   << 0x10U) | (IData)(vlSelf->data_bank)));
                }
            } else if ((0x58U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_BATCH_NUMBER_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->batches,32,(IData)(vlSelf->batches));
                }
            } else if ((0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_BATCH_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->batch_stride,
                              32,vlSelf->batch_stride);
                }
            } else if ((0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_CONV_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->conv_y_stride) 
                                << 0x10U) | (IData)(vlSelf->conv_x_stride)),
                              32,(((IData)(vlSelf->conv_y_stride) 
                                   << 0x10U) | (IData)(vlSelf->conv_x_stride)));
                }
            } else if ((0xa4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_CVT_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->cvt_truncate) 
                                << 4U) | (IData)(vlSelf->cvt_en)),
                              32,(((IData)(vlSelf->cvt_truncate) 
                                   << 4U) | (IData)(vlSelf->cvt_en)));
                }
            } else if ((0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_CVT_OFFSET_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->cvt_offset,32,
                              (IData)(vlSelf->cvt_offset));
                }
            } else if ((0xacU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_CVT_SCALE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->cvt_scale,32,
                              (IData)(vlSelf->cvt_scale));
                }
            } else if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_CYA_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->cya,32,vlSelf->cya);
            }
        } else if (((((((((0x30U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                          | (0x38U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x34U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                       | (0x4cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x2cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x18U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x1cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x30U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DAIN_ADDR_HIGH_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->datain_addr_high_0,
                              32,vlSelf->datain_addr_high_0);
                }
            } else if ((0x38U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DAIN_ADDR_HIGH_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->datain_addr_high_1,
                              32,vlSelf->datain_addr_high_1);
                }
            } else if ((0x34U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DAIN_ADDR_LOW_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->datain_addr_low_0,
                              32,vlSelf->datain_addr_low_0);
                }
            } else if ((0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DAIN_ADDR_LOW_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->datain_addr_low_1,
                              32,vlSelf->datain_addr_low_1);
                }
            } else if ((0x4cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DAIN_MAP_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->surf_packed) 
                                << 0x10U) | (IData)(vlSelf->line_packed)),
                              32,(((IData)(vlSelf->surf_packed) 
                                   << 0x10U) | (IData)(vlSelf->line_packed)));
                }
            } else if ((0x2cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DAIN_RAM_TYPE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->datain_ram_type,
                              32,(IData)(vlSelf->datain_ram_type));
                }
            } else if ((0x18U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DATAIN_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->pixel_sign_override) 
                                << 0x14U) | (((IData)(vlSelf->pixel_mapping) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->pixel_format) 
                                                 << 8U) 
                                                | (IData)(vlSelf->datain_format)))),
                              32,(((IData)(vlSelf->pixel_sign_override) 
                                   << 0x14U) | (((IData)(vlSelf->pixel_mapping) 
                                                 << 0x10U) 
                                                | (((IData)(vlSelf->pixel_format) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->datain_format)))));
                }
            } else if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DATAIN_SIZE_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,(((IData)(vlSelf->datain_height) 
                               << 0x10U) | (IData)(vlSelf->datain_width)),
                          32,(((IData)(vlSelf->datain_height) 
                               << 0x10U) | (IData)(vlSelf->datain_width)));
            }
        } else if (((((((((0x20U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                          | (0x24U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x64U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                       | (0xccU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))) 
                      | (0xd0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x40U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x44U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x20U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DATAIN_SIZE_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->datain_channel,
                              32,(IData)(vlSelf->datain_channel));
                }
            } else if ((0x24U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DATAIN_SIZE_EXT_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->datain_height_ext) 
                                << 0x10U) | (IData)(vlSelf->datain_width_ext)),
                              32,(((IData)(vlSelf->datain_height_ext) 
                                   << 0x10U) | (IData)(vlSelf->datain_width_ext)));
                }
            } else if ((0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_ENTRY_PER_SLICE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->entries,32,(IData)(vlSelf->entries));
                }
            } else if ((0x64U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_FETCH_GRAIN_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->grains,32,(IData)(vlSelf->grains));
                }
            } else if ((0xccU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_INF_INPUT_DATA_NUM_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1065, "");
                }
            } else if ((0xd0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_INF_INPUT_WEIGHT_NUM_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1069, "");
                }
            } else if ((0x40U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_LINE_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->line_stride,32,
                              vlSelf->line_stride);
                }
            } else if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_LINE_UV_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->uv_line_stride,
                          32,vlSelf->uv_line_stride);
            }
        } else if (((((((((0x98U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                          | (0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x14U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                       | (0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))) 
                      | (0xc4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)))) 
                     | (0xc8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x10U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x98U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_MEAN_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->mean_format,32,
                              (IData)(vlSelf->mean_format));
                }
            } else if ((0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_MEAN_GLOBAL_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->mean_gu) 
                                << 0x10U) | (IData)(vlSelf->mean_ry)),
                              32,(((IData)(vlSelf->mean_gu) 
                                   << 0x10U) | (IData)(vlSelf->mean_ry)));
                }
            } else if ((0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_MEAN_GLOBAL_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->mean_ax) 
                                << 0x10U) | (IData)(vlSelf->mean_bv)),
                              32,(((IData)(vlSelf->mean_ax) 
                                   << 0x10U) | (IData)(vlSelf->mean_bv)));
                }
            } else if ((0x14U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_MISC_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->skip_weight_rls) 
                                << 0x1cU) | (((IData)(vlSelf->skip_data_rls) 
                                              << 0x18U) 
                                             | (((IData)(vlSelf->weight_reuse) 
                                                 << 0x14U) 
                                                | (((IData)(vlSelf->data_reuse) 
                                                    << 0x10U) 
                                                   | (((IData)(vlSelf->proc_precision) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->in_precision) 
                                                          << 8U) 
                                                         | (IData)(vlSelf->conv_mode))))))),
                              32,(((IData)(vlSelf->skip_weight_rls) 
                                   << 0x1cU) | (((IData)(vlSelf->skip_data_rls) 
                                                 << 0x18U) 
                                                | (((IData)(vlSelf->weight_reuse) 
                                                    << 0x14U) 
                                                   | (((IData)(vlSelf->data_reuse) 
                                                       << 0x10U) 
                                                      | (((IData)(vlSelf->proc_precision) 
                                                          << 0xcU) 
                                                         | (((IData)(vlSelf->in_precision) 
                                                             << 8U) 
                                                            | (IData)(vlSelf->conv_mode))))))));
                }
            } else if ((0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_NAN_FLUSH_TO_ZERO_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->nan_to_zero,32,
                              (IData)(vlSelf->nan_to_zero));
                }
            } else if ((0xc4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_NAN_INPUT_DATA_NUM_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1080, "");
                }
            } else if ((0xc8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_NAN_INPUT_WEIGHT_NUM_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1084, "");
                }
            } else if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_OP_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en,
                          32,(IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en));
            }
        } else if (((((((((0xe0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                          | (0xd8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0xd4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                        | (0xe4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                       | (0xdcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x28U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x54U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U))))) {
            if ((0xe0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_PERF_DAT_READ_LATENCY_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1089, "");
                }
            } else if ((0xd8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_PERF_DAT_READ_STALL_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1093, "");
                }
            } else if ((0xd4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_PERF_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->dma_en,32,(IData)(vlSelf->dma_en));
                }
            } else if ((0xe4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_PERF_WT_READ_LATENCY_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1098, "");
                }
            } else if ((0xdcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_PERF_WT_READ_STALL_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1102, "");
                }
            } else if ((0x28U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_PIXEL_OFFSET_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->pixel_y_offset) 
                                << 0x10U) | (IData)(vlSelf->pixel_x_offset)),
                              32,(((IData)(vlSelf->pixel_y_offset) 
                                   << 0x10U) | (IData)(vlSelf->pixel_x_offset)));
                }
            } else if ((0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_RESERVED_X_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->rsv_per_uv_line) 
                                << 0x10U) | (IData)(vlSelf->rsv_per_line)),
                              32,(((IData)(vlSelf->rsv_per_uv_line) 
                                   << 0x10U) | (IData)(vlSelf->rsv_per_line)));
                }
            } else if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_RESERVED_Y_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,(((IData)(vlSelf->rsv_y_index) 
                               << 0x10U) | (IData)(vlSelf->rsv_height)),
                          32,(((IData)(vlSelf->rsv_y_index) 
                               << 0x10U) | (IData)(vlSelf->rsv_height)));
            }
        } else if (((((((((0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                          | (0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x80U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                       | (0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x6cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x70U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_SURF_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->surf_stride,32,
                              vlSelf->surf_stride);
                }
            } else if ((0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WEIGHT_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->weight_addr_high,
                              32,vlSelf->weight_addr_high);
                }
            } else if ((0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WEIGHT_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->weight_addr_low,
                              32,vlSelf->weight_addr_low);
                }
            } else if ((0x80U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WEIGHT_BYTES_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->weight_bytes,
                              32,vlSelf->weight_bytes);
                }
            } else if ((0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WEIGHT_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->weight_format,
                              32,(IData)(vlSelf->weight_format));
                }
            } else if ((0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WEIGHT_RAM_TYPE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->weight_ram_type,
                              32,(IData)(vlSelf->weight_ram_type));
                }
            } else if ((0x6cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WEIGHT_SIZE_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->byte_per_kernel,
                              32,vlSelf->byte_per_kernel);
                }
            } else if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WEIGHT_SIZE_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->weight_kernel,
                          32,(IData)(vlSelf->weight_kernel));
            }
        } else if ((0x84U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WGS_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->wgs_addr_high,
                          32,vlSelf->wgs_addr_high);
            }
        } else if ((0x88U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WGS_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->wgs_addr_low,32,
                          vlSelf->wgs_addr_low);
            }
        } else if ((0x8cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WMB_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->wmb_addr_high,
                          32,vlSelf->wmb_addr_high);
            }
        } else if ((0x90U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WMB_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->wmb_addr_low,32,
                          vlSelf->wmb_addr_low);
            }
        } else if ((0x94U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WMB_BYTES_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->wmb_bytes,32,vlSelf->wmb_bytes);
            }
        } else if ((0xb4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_ZERO_PADDING_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,(((IData)(vlSelf->pad_bottom) 
                               << 0x18U) | (((IData)(vlSelf->pad_top) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->pad_right) 
                                                << 8U) 
                                               | (IData)(vlSelf->pad_left)))),
                          32,(((IData)(vlSelf->pad_bottom) 
                               << 0x18U) | (((IData)(vlSelf->pad_top) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->pad_right) 
                                                << 8U) 
                                               | (IData)(vlSelf->pad_left)))));
            }
        } else if ((0xb8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_ZERO_PADDING_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->pad_value,32,(IData)(vlSelf->pad_value));
            }
        } else {
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: Unknown register (0x%x) = 0x%x\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),12,(0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)),
                          32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)));
            }
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_invalid_wr)) {
                VL_WRITEF("ERROR: write to undefined register!\n");
                VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1124, "");
            }
        }
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__6(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__6\n"); );
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__nvdla_cdma_d_reserved_y_cfg_0_wren) {
            vlSelf->rsv_y_index = (0x1fU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_conv_stride_0_wren) {
            vlSelf->conv_x_stride = (7U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_datain_size_ext_0_0_wren) {
            vlSelf->datain_width_ext = (0x1fffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                           >> 0x16U)));
            vlSelf->datain_height_ext = (0x1fffU & (IData)(
                                                           (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                            >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_conv_stride_0_wren) {
            vlSelf->conv_y_stride = (7U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_reserved_x_cfg_0_wren) {
            vlSelf->rsv_per_line = (0x3ffU & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)));
            vlSelf->rsv_per_uv_line = (0x3ffU & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                         >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_pixel_offset_0_wren) {
            vlSelf->pixel_y_offset = (7U & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_reserved_y_cfg_0_wren) {
            vlSelf->rsv_height = (7U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_zero_padding_0_wren) {
            vlSelf->pad_bottom = (0x3fU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x2eU)));
            vlSelf->pad_top = (0x1fU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_datain_format_0_wren) {
            vlSelf->pixel_mapping = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_misc_cfg_0_wren) {
            vlSelf->in_precision = (3U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x1eU)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_cvt_cfg_0_wren) {
            vlSelf->cvt_en = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                            >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_misc_cfg_0_wren) {
            vlSelf->skip_data_rls = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x2eU)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_dain_map_0_wren) {
            vlSelf->line_packed = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                 >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_misc_cfg_0_wren) {
            vlSelf->weight_reuse = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x2aU)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_bank_0_wren) {
            vlSelf->weight_bank = (0x1fU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_dain_map_0_wren) {
            vlSelf->surf_packed = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                 >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_mean_global_1_0_wren) {
            vlSelf->mean_ax = (0xffffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_zero_padding_0_wren) {
            vlSelf->pad_right = (0x3fU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x1eU)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_datain_size_0_0_wren) {
            vlSelf->datain_height = (0x1fffU & (IData)(
                                                       (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                        >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_misc_cfg_0_wren) {
            vlSelf->data_reuse = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                >> 0x26U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_pixel_offset_0_wren) {
            vlSelf->pixel_x_offset = (0x1fU & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                       >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_bank_0_wren) {
            vlSelf->data_bank = (0x1fU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (((0x94U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->wmb_bytes = (0xfffffffU & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                       >> 0x16U)));
        }
        if (((0x88U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->wgs_addr_low = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                            >> 0x16U));
        }
        if (((0x8cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->wmb_addr_high = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U));
        }
        if (((0xe8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->cya = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                   >> 0x16U));
        }
        if (((0x90U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->wmb_addr_low = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                            >> 0x16U));
        }
        if (((0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->nan_to_zero = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                 >> 0x16U)));
        }
        if (((0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->weight_format = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x16U)));
        }
        if (((0x84U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->wgs_addr_high = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U));
        }
        if (((0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->entries = (0x3fffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (((0xd4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->dma_en = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                            >> 0x16U)));
        }
        if (((0x70U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->weight_kernel = (0x1fffU & (IData)(
                                                       (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                        >> 0x16U)));
        }
        if (((0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->weight_addr_high = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                >> 0x16U));
        }
        if (((0x64U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->grains = (0xfffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                >> 0x16U)));
        }
        if (((0x44U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->uv_line_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                              >> 0x16U));
        }
        if (((0x40U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->line_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                           >> 0x16U));
        }
        if (((0x80U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->weight_bytes = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                            >> 0x16U));
        }
        if (((0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->weight_addr_low = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                               >> 0x16U));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_datain_size_0_0_wren) {
            vlSelf->datain_width = (0x1fffU & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                       >> 0x16U)));
        }
        if (((0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->batch_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                            >> 0x16U));
        }
        if (((0x34U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->datain_addr_low_0 = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                 >> 0x16U));
        }
        if (((0x30U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->datain_addr_high_0 = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x16U));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_zero_padding_0_wren) {
            vlSelf->pad_left = (0x1fU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                 >> 0x16U)));
        }
        if (((0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->surf_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                           >> 0x16U));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_datain_format_0_wren) {
            vlSelf->pixel_format = (0x3fU & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x1eU)));
        }
        if (((0x20U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->datain_channel = (0x1fffU & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                         >> 0x16U)));
        }
        if (((0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->weight_ram_type = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x16U)));
        }
        if (((0x58U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->batches = (0x1fU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_datain_format_0_wren) {
            vlSelf->datain_format = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_misc_cfg_0_wren) {
            vlSelf->conv_mode = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                               >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_mean_global_0_0_wren) {
            vlSelf->mean_ry = (0xffffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_mean_global_1_0_wren) {
            vlSelf->mean_bv = (0xffffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_mean_global_0_0_wren) {
            vlSelf->mean_gu = (0xffffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x26U)));
        }
        if (((0x2cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->datain_ram_type = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x16U)));
        }
    } else {
        vlSelf->rsv_y_index = 0U;
        vlSelf->conv_x_stride = 0U;
        vlSelf->datain_width_ext = 0U;
        vlSelf->datain_height_ext = 0U;
        vlSelf->conv_y_stride = 0U;
        vlSelf->rsv_per_line = 0U;
        vlSelf->rsv_per_uv_line = 0U;
        vlSelf->pixel_y_offset = 0U;
        vlSelf->rsv_height = 0U;
        vlSelf->pad_bottom = 0U;
        vlSelf->pad_top = 0U;
        vlSelf->pixel_mapping = 0U;
        vlSelf->in_precision = 1U;
        vlSelf->cvt_en = 0U;
        vlSelf->skip_data_rls = 0U;
        vlSelf->line_packed = 0U;
        vlSelf->weight_reuse = 0U;
        vlSelf->weight_bank = 0U;
        vlSelf->surf_packed = 0U;
        vlSelf->mean_ax = 0U;
        vlSelf->pad_right = 0U;
        vlSelf->datain_height = 0U;
        vlSelf->data_reuse = 0U;
        vlSelf->pixel_x_offset = 0U;
        vlSelf->data_bank = 0U;
        vlSelf->wmb_bytes = 0U;
        vlSelf->wgs_addr_low = 0U;
        vlSelf->wmb_addr_high = 0U;
        vlSelf->cya = 0U;
        vlSelf->wmb_addr_low = 0U;
        vlSelf->nan_to_zero = 0U;
        vlSelf->weight_format = 0U;
        vlSelf->wgs_addr_high = 0U;
        vlSelf->entries = 0U;
        vlSelf->dma_en = 0U;
        vlSelf->weight_kernel = 0U;
        vlSelf->weight_addr_high = 0U;
        vlSelf->grains = 0U;
        vlSelf->uv_line_stride = 0U;
        vlSelf->line_stride = 0U;
        vlSelf->weight_bytes = 0U;
        vlSelf->weight_addr_low = 0U;
        vlSelf->datain_width = 0U;
        vlSelf->batch_stride = 0U;
        vlSelf->datain_addr_low_0 = 0U;
        vlSelf->datain_addr_high_0 = 0U;
        vlSelf->pad_left = 0U;
        vlSelf->surf_stride = 0U;
        vlSelf->pixel_format = 0xcU;
        vlSelf->datain_channel = 0U;
        vlSelf->weight_ram_type = 0U;
        vlSelf->batches = 0U;
        vlSelf->datain_format = 0U;
        vlSelf->conv_mode = 0U;
        vlSelf->mean_ry = 0U;
        vlSelf->mean_bv = 0U;
        vlSelf->mean_gu = 0U;
        vlSelf->datain_ram_type = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__9(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__9\n"); );
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__nvdla_cdma_d_misc_cfg_0_wren) {
            vlSelf->skip_weight_rls = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x32U)));
        }
        if (((0x6cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->byte_per_kernel = (0x3ffffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                           >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_misc_cfg_0_wren) {
            vlSelf->proc_precision = (3U & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x22U)));
        }
        if (((0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->cvt_offset = (0xffffU & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x16U)));
        }
        if (((0xacU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->cvt_scale = (0xffffU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x16U)));
        }
        if (((0xb8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->pad_value = (0xffffU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_cvt_cfg_0_wren) {
            vlSelf->cvt_truncate = (0x3fU & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x1aU)));
        }
        if (vlSelf->__PVT__nvdla_cdma_d_datain_format_0_wren) {
            vlSelf->pixel_sign_override = (1U & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                         >> 0x2aU)));
        }
        if (((0x98U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->mean_format = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                 >> 0x16U)));
        }
    } else {
        vlSelf->skip_weight_rls = 0U;
        vlSelf->byte_per_kernel = 0U;
        vlSelf->proc_precision = 1U;
        vlSelf->cvt_offset = 0U;
        vlSelf->cvt_scale = 0U;
        vlSelf->pad_value = 0U;
        vlSelf->cvt_truncate = 0U;
        vlSelf->pixel_sign_override = 0U;
        vlSelf->mean_format = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__11(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__11\n"); );
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn) {
        if (((0x38U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->datain_addr_high_1 = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x16U));
        }
        if (((0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelf->datain_addr_low_1 = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                 >> 0x16U));
        }
    } else {
        vlSelf->datain_addr_high_1 = 0U;
        vlSelf->datain_addr_low_1 = 0U;
    }
}
