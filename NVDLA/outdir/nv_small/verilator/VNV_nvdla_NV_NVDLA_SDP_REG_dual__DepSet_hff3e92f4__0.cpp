// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_SDP_REG_dual.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_REG_dual___settle__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__1(VNV_nvdla_NV_NVDLA_SDP_REG_dual* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_SDP_REG_dual___settle__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__1\n"); );
    // Body
    vlSelf->reg_rd_data = (((((((((0xc0U == (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U))) 
                                  | (0xc4U == (0xffcU 
                                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U)))) 
                                 | (0xc8U == (0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                                | (0x44U == (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                               | (0x40U == (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                              | (0x3cU == (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                             | (0xbcU == (0xffcU & 
                                          ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) 
                            | (0x70U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U))))
                            ? ((0xc0U == (0xffcU & 
                                          ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))
                                ? vlSelf->cvt_offset
                                : ((0xc4U == (0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))
                                    ? (IData)(vlSelf->cvt_scale)
                                    : ((0xc8U == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                        ? (IData)(vlSelf->cvt_shift)
                                        : ((0x44U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))
                                            ? (IData)(vlSelf->channel)
                                            : ((0x40U 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))
                                                ? (IData)(vlSelf->height)
                                                : (
                                                   (0x3cU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelf->width)
                                                    : 
                                                   ((0xbcU 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? 
                                                    (((IData)(vlSelf->out_precision) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->proc_precision))
                                                     : 
                                                    (((IData)(vlSelf->bn_alu_shift_value) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->bn_alu_src)))))))))
                            : (((((((((0x74U == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U))) 
                                      | (0x6cU == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))) 
                                     | (0x78U == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))) 
                                    | (0x7cU == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))) 
                                   | (0x5cU == (0xffcU 
                                                & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) 
                                  | (0x60U == (0xffcU 
                                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U)))) 
                                 | (0x58U == (0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                                | (0x64U == (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U))))
                                ? ((0x74U == (0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))
                                    ? (IData)(vlSelf->bn_alu_operand)
                                    : ((0x6cU == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                        ? (((IData)(vlSelf->bn_relu_bypass) 
                                            << 6U) 
                                           | (((IData)(vlSelf->bn_mul_prelu) 
                                               << 5U) 
                                              | (((IData)(vlSelf->bn_mul_bypass) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->bn_alu_algo) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->bn_alu_bypass) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->bn_bypass))))))
                                        : ((0x78U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))
                                            ? (((IData)(vlSelf->bn_mul_shift_value) 
                                                << 8U) 
                                               | (IData)(vlSelf->bn_mul_src))
                                            : ((0x7cU 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))
                                                ? (IData)(vlSelf->bn_mul_operand)
                                                : (
                                                   (0x5cU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? 
                                                   (((IData)(vlSelf->bs_alu_shift_value) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->bs_alu_src))
                                                    : 
                                                   ((0x60U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? (IData)(vlSelf->bs_alu_operand)
                                                     : 
                                                    ((0x58U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? 
                                                     (((IData)(vlSelf->bs_relu_bypass) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->bs_mul_prelu) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->bs_mul_bypass) 
                                                             << 4U) 
                                                            | (((IData)(vlSelf->bs_alu_algo) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->bs_alu_bypass) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->bs_bypass))))))
                                                      : 
                                                     (((IData)(vlSelf->bs_mul_shift_value) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->bs_mul_src)))))))))
                                : (((((((((0x68U == 
                                           (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                                          | (0x84U 
                                             == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))) 
                                         | (0x8cU == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                                        | (0x90U == 
                                           (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                                       | (0x94U == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                                      | (0x88U == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))) 
                                     | (0x80U == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))) 
                                    | (0x98U == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U))))
                                    ? ((0x68U == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                        ? (IData)(vlSelf->bs_mul_operand)
                                        : ((0x84U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))
                                            ? (((IData)(vlSelf->ew_alu_cvt_bypass) 
                                                << 1U) 
                                               | (IData)(vlSelf->ew_alu_src))
                                            : ((0x8cU 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))
                                                ? vlSelf->ew_alu_cvt_offset
                                                : (
                                                   (0x90U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelf->ew_alu_cvt_scale)
                                                    : 
                                                   ((0x94U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? (IData)(vlSelf->ew_alu_cvt_truncate)
                                                     : 
                                                    ((0x88U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSelf->ew_alu_operand
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))
                                                       ? 
                                                      (((IData)(vlSelf->ew_lut_bypass) 
                                                        << 6U) 
                                                       | (((IData)(vlSelf->ew_mul_prelu) 
                                                           << 5U) 
                                                          | (((IData)(vlSelf->ew_mul_bypass) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->ew_alu_algo) 
                                                                 << 2U) 
                                                                | (((IData)(vlSelf->ew_alu_bypass) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelf->ew_bypass))))))
                                                       : 
                                                      (((IData)(vlSelf->ew_mul_cvt_bypass) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ew_mul_src)))))))))
                                    : (((((((((0xa0U 
                                               == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U))) 
                                              | (0xa4U 
                                                 == 
                                                 (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))) 
                                             | (0xa8U 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))) 
                                            | (0x9cU 
                                               == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))) 
                                           | (0xacU 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))) 
                                          | (0x4cU 
                                             == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))) 
                                         | (0x48U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                                        | (0xb8U == 
                                           (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))))
                                        ? ((0xa0U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))
                                            ? vlSelf->ew_mul_cvt_offset
                                            : ((0xa4U 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))
                                                ? (IData)(vlSelf->ew_mul_cvt_scale)
                                                : (
                                                   (0xa8U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelf->ew_mul_cvt_truncate)
                                                    : 
                                                   ((0x9cU 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSelf->ew_mul_operand
                                                     : 
                                                    ((0xacU 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? (IData)(vlSelf->ew_truncate)
                                                      : 
                                                     ((0x4cU 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSelf->dst_base_addr_high
                                                       : 
                                                      ((0x48U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U)))
                                                        ? vlSelf->dst_base_addr_low
                                                        : vlSelf->dst_batch_stride)))))))
                                        : (((((((((0xb4U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U))) 
                                                  | (0x50U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))) 
                                                 | (0x54U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))) 
                                                | (0xb0U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))) 
                                               | (0x38U 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))) 
                                              | (0xdcU 
                                                 == 
                                                 (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))) 
                                             | (0xf0U 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))) 
                                            | (0xf4U 
                                               == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U))))
                                            ? ((0xb4U 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))
                                                ? (IData)(vlSelf->dst_ram_type)
                                                : (
                                                   (0x50U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSelf->dst_line_stride
                                                    : 
                                                   ((0x54U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSelf->dst_surface_stride
                                                     : 
                                                    ((0xb0U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? 
                                                     (((IData)(vlSelf->batch_number) 
                                                       << 8U) 
                                                      | (((IData)(vlSelf->nan_to_zero) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->winograd) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->output_dst) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->flying_mode)))))
                                                      : 
                                                     ((0x38U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))
                                                       ? (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d0_op_en)
                                                       : 
                                                      ((0xdcU 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U)))
                                                        ? 
                                                       (((IData)(vlSelf->perf_nan_inf_count_en) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->perf_sat_en) 
                                                            << 2U) 
                                                           | (((IData)(vlSelf->perf_lut_en) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->perf_dma_en))))
                                                        : 
                                                       ((0xf0U 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                             << 2U)))
                                                         ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_lut_hybrid
                                                         : vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_lut_le_hit)))))))
                                            : (((((
                                                   ((((0xf8U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U))) 
                                                      | (0xe8U 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                             << 2U)))) 
                                                     | (0xe4U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U)))) 
                                                    | (0xecU 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (0xe0U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))) 
                                                  | (0xccU 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))) 
                                                 | (0xd4U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))) 
                                                | (0xd0U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U))))
                                                ? (
                                                   (0xf8U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_lut_lo_hit
                                                    : 
                                                   ((0xe8U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_lut_oflow
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_lut_uflow
                                                      : 
                                                     ((0xecU 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_out_saturation
                                                       : 
                                                      ((0xe0U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U)))
                                                        ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_wdma_stall
                                                        : 
                                                       ((0xccU 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                             << 2U)))
                                                         ? (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_unequal)
                                                         : 
                                                        ((0xd4U 
                                                          == 
                                                          (0xffcU 
                                                           & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                              << 2U)))
                                                          ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_inf_input_num
                                                          : vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_nan_input_num)))))))
                                                : (
                                                   (0xd8U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_nan_output_num
                                                    : 0U)))))));
    vlSelf->__PVT__nvdla_sdp_d_data_format_0_wren = 
        ((0xbcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                              << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_sdp_d_dp_bn_alu_cfg_0_wren 
        = ((0x70U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_sdp_d_dp_bn_cfg_0_wren = (
                                                   (0x6cU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U))) 
                                                   & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_sdp_d_dp_bn_mul_cfg_0_wren 
        = ((0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_sdp_d_dp_bs_alu_cfg_0_wren 
        = ((0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_sdp_d_dp_bs_cfg_0_wren = (
                                                   (0x58U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U))) 
                                                   & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_sdp_d_dp_bs_mul_cfg_0_wren 
        = ((0x64U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_sdp_d_dp_ew_alu_cfg_0_wren 
        = ((0x84U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_sdp_d_dp_ew_cfg_0_wren = (
                                                   (0x80U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U))) 
                                                   & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_sdp_d_dp_ew_mul_cfg_0_wren 
        = ((0x98U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_sdp_d_feature_mode_cfg_0_wren 
        = ((0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelf->__PVT__nvdla_sdp_d_perf_enable_0_wren = 
        ((0xdcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                              << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_REG_dual___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__3(VNV_nvdla_NV_NVDLA_SDP_REG_dual* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_SDP_REG_dual___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__3\n"); );
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en) {
        if (((((((((0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                        << 2U))) | 
                   (0xc4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                        << 2U)))) | 
                  (0xc8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U)))) | 
                 (0x44U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                      << 2U)))) | (0x40U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))) 
               | (0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                      << 2U)))) | (0xbcU 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))) 
             | (0x70U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                    << 2U))))) {
            if ((0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_CVT_OFFSET_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->cvt_offset,32,
                              vlSelf->cvt_offset);
                }
            } else if ((0xc4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_CVT_SCALE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->cvt_scale,32,
                              (IData)(vlSelf->cvt_scale));
                }
            } else if ((0xc8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_CVT_SHIFT_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->cvt_shift,32,
                              (IData)(vlSelf->cvt_shift));
                }
            } else if ((0x44U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DATA_CUBE_CHANNEL_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->channel,32,(IData)(vlSelf->channel));
                }
            } else if ((0x40U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DATA_CUBE_HEIGHT_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->height,32,(IData)(vlSelf->height));
                }
            } else if ((0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DATA_CUBE_WIDTH_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->width,32,(IData)(vlSelf->width));
                }
            } else if ((0xbcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DATA_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->out_precision) 
                                << 2U) | (IData)(vlSelf->proc_precision)),
                              32,(((IData)(vlSelf->out_precision) 
                                   << 2U) | (IData)(vlSelf->proc_precision)));
                }
            } else if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BN_ALU_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)),
                          32,(((IData)(vlSelf->bn_alu_shift_value) 
                               << 8U) | (IData)(vlSelf->bn_alu_src)),
                          32,(((IData)(vlSelf->bn_alu_shift_value) 
                               << 8U) | (IData)(vlSelf->bn_alu_src)));
            }
        } else if (((((((((0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                          | (0x6cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                       | (0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x58U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x64U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BN_ALU_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->bn_alu_operand,
                              32,(IData)(vlSelf->bn_alu_operand));
                }
            } else if ((0x6cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BN_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->bn_relu_bypass) 
                                << 6U) | (((IData)(vlSelf->bn_mul_prelu) 
                                           << 5U) | 
                                          (((IData)(vlSelf->bn_mul_bypass) 
                                            << 4U) 
                                           | (((IData)(vlSelf->bn_alu_algo) 
                                               << 2U) 
                                              | (((IData)(vlSelf->bn_alu_bypass) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->bn_bypass)))))),
                              32,(((IData)(vlSelf->bn_relu_bypass) 
                                   << 6U) | (((IData)(vlSelf->bn_mul_prelu) 
                                              << 5U) 
                                             | (((IData)(vlSelf->bn_mul_bypass) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->bn_alu_algo) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->bn_alu_bypass) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->bn_bypass)))))));
                }
            } else if ((0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BN_MUL_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->bn_mul_shift_value) 
                                << 8U) | (IData)(vlSelf->bn_mul_src)),
                              32,(((IData)(vlSelf->bn_mul_shift_value) 
                                   << 8U) | (IData)(vlSelf->bn_mul_src)));
                }
            } else if ((0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BN_MUL_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->bn_mul_operand,
                              32,(IData)(vlSelf->bn_mul_operand));
                }
            } else if ((0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BS_ALU_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->bs_alu_shift_value) 
                                << 8U) | (IData)(vlSelf->bs_alu_src)),
                              32,(((IData)(vlSelf->bs_alu_shift_value) 
                                   << 8U) | (IData)(vlSelf->bs_alu_src)));
                }
            } else if ((0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BS_ALU_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->bs_alu_operand,
                              32,(IData)(vlSelf->bs_alu_operand));
                }
            } else if ((0x58U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BS_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->bs_relu_bypass) 
                                << 6U) | (((IData)(vlSelf->bs_mul_prelu) 
                                           << 5U) | 
                                          (((IData)(vlSelf->bs_mul_bypass) 
                                            << 4U) 
                                           | (((IData)(vlSelf->bs_alu_algo) 
                                               << 2U) 
                                              | (((IData)(vlSelf->bs_alu_bypass) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->bs_bypass)))))),
                              32,(((IData)(vlSelf->bs_relu_bypass) 
                                   << 6U) | (((IData)(vlSelf->bs_mul_prelu) 
                                              << 5U) 
                                             | (((IData)(vlSelf->bs_mul_bypass) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->bs_alu_algo) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->bs_alu_bypass) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->bs_bypass)))))));
                }
            } else if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BS_MUL_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)),
                          32,(((IData)(vlSelf->bs_mul_shift_value) 
                               << 8U) | (IData)(vlSelf->bs_mul_src)),
                          32,(((IData)(vlSelf->bs_mul_shift_value) 
                               << 8U) | (IData)(vlSelf->bs_mul_src)));
            }
        } else if (((((((((0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                          | (0x84U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x8cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x90U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                       | (0x94U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x88U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x80U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x98U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BS_MUL_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->bs_mul_operand,
                              32,(IData)(vlSelf->bs_mul_operand));
                }
            } else if ((0x84U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_ALU_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->ew_alu_cvt_bypass) 
                                << 1U) | (IData)(vlSelf->ew_alu_src)),
                              32,(((IData)(vlSelf->ew_alu_cvt_bypass) 
                                   << 1U) | (IData)(vlSelf->ew_alu_src)));
                }
            } else if ((0x8cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->ew_alu_cvt_offset,
                              32,vlSelf->ew_alu_cvt_offset);
                }
            } else if ((0x90U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->ew_alu_cvt_scale,
                              32,(IData)(vlSelf->ew_alu_cvt_scale));
                }
            } else if ((0x94U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->ew_alu_cvt_truncate,
                              32,(IData)(vlSelf->ew_alu_cvt_truncate));
                }
            } else if ((0x88U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_ALU_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->ew_alu_operand,
                              32,vlSelf->ew_alu_operand);
                }
            } else if ((0x80U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->ew_lut_bypass) 
                                << 6U) | (((IData)(vlSelf->ew_mul_prelu) 
                                           << 5U) | 
                                          (((IData)(vlSelf->ew_mul_bypass) 
                                            << 4U) 
                                           | (((IData)(vlSelf->ew_alu_algo) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ew_alu_bypass) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ew_bypass)))))),
                              32,(((IData)(vlSelf->ew_lut_bypass) 
                                   << 6U) | (((IData)(vlSelf->ew_mul_prelu) 
                                              << 5U) 
                                             | (((IData)(vlSelf->ew_mul_bypass) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->ew_alu_algo) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->ew_alu_bypass) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->ew_bypass)))))));
                }
            } else if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_MUL_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)),
                          32,(((IData)(vlSelf->ew_mul_cvt_bypass) 
                               << 1U) | (IData)(vlSelf->ew_mul_src)),
                          32,(((IData)(vlSelf->ew_mul_cvt_bypass) 
                               << 1U) | (IData)(vlSelf->ew_mul_src)));
            }
        } else if (((((((((0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                          | (0xa4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                       | (0xacU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x4cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                    | (0xb8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U))))) {
            if ((0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->ew_mul_cvt_offset,
                              32,vlSelf->ew_mul_cvt_offset);
                }
            } else if ((0xa4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->ew_mul_cvt_scale,
                              32,(IData)(vlSelf->ew_mul_cvt_scale));
                }
            } else if ((0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->ew_mul_cvt_truncate,
                              32,(IData)(vlSelf->ew_mul_cvt_truncate));
                }
            } else if ((0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_MUL_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->ew_mul_operand,
                              32,vlSelf->ew_mul_operand);
                }
            } else if ((0xacU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_TRUNCATE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->ew_truncate,32,
                              (IData)(vlSelf->ew_truncate));
                }
            } else if ((0x4cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DST_BASE_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->dst_base_addr_high,
                              32,vlSelf->dst_base_addr_high);
                }
            } else if ((0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DST_BASE_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->dst_base_addr_low,
                              32,vlSelf->dst_base_addr_low);
                }
            } else if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DST_BATCH_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->dst_batch_stride,
                          32,vlSelf->dst_batch_stride);
            }
        } else if (((((((((0xb4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                          | (0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x54U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                        | (0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                       | (0x38U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
                      | (0xdcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)))) 
                     | (0xf0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                    | (0xf4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U))))) {
            if ((0xb4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DST_DMA_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->dst_ram_type,
                              32,(IData)(vlSelf->dst_ram_type));
                }
            } else if ((0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DST_LINE_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->dst_line_stride,
                              32,vlSelf->dst_line_stride);
                }
            } else if ((0x54U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DST_SURFACE_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->dst_surface_stride,
                              32,vlSelf->dst_surface_stride);
                }
            } else if ((0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_FEATURE_MODE_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->batch_number) 
                                << 8U) | (((IData)(vlSelf->nan_to_zero) 
                                           << 3U) | 
                                          (((IData)(vlSelf->winograd) 
                                            << 2U) 
                                           | (((IData)(vlSelf->output_dst) 
                                               << 1U) 
                                              | (IData)(vlSelf->flying_mode))))),
                              32,(((IData)(vlSelf->batch_number) 
                                   << 8U) | (((IData)(vlSelf->nan_to_zero) 
                                              << 3U) 
                                             | (((IData)(vlSelf->winograd) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->output_dst) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->flying_mode))))));
                }
            } else if ((0x38U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_OP_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d0_op_en,
                              32,(IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d0_op_en));
                }
            } else if ((0xdcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_PERF_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->perf_nan_inf_count_en) 
                                << 3U) | (((IData)(vlSelf->perf_sat_en) 
                                           << 2U) | 
                                          (((IData)(vlSelf->perf_lut_en) 
                                            << 1U) 
                                           | (IData)(vlSelf->perf_dma_en)))),
                              32,(((IData)(vlSelf->perf_nan_inf_count_en) 
                                   << 3U) | (((IData)(vlSelf->perf_sat_en) 
                                              << 2U) 
                                             | (((IData)(vlSelf->perf_lut_en) 
                                                 << 1U) 
                                                | (IData)(vlSelf->perf_dma_en)))));
                }
            } else if ((0xf0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_PERF_LUT_HYBRID_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1034, "");
                }
            } else {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_PERF_LUT_LE_HIT_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1038, "");
                }
            }
        } else if (((((((((0xf8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                          | (0xe8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0xe4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                        | (0xecU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                       | (0xe0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
                      | (0xccU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)))) 
                     | (0xd4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                    | (0xd0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U))))) {
            if ((0xf8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_PERF_LUT_LO_HIT_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1042, "");
                }
            } else if ((0xe8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_PERF_LUT_OFLOW_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1046, "");
                }
            } else if ((0xe4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_PERF_LUT_UFLOW_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1050, "");
                }
            } else if ((0xecU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_PERF_OUT_SATURATION_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1054, "");
                }
            } else if ((0xe0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_PERF_WDMA_WRITE_STALL_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1058, "");
                }
            } else if ((0xccU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_STATUS_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1062, "");
                }
            } else if ((0xd4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_STATUS_INF_INPUT_NUM_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1066, "");
                }
            } else {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_STATUS_NAN_INPUT_NUM_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1070, "");
                }
            }
        } else if ((0xd8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_STATUS_NAN_OUTPUT_NUM_0 = 0x%x\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)));
            }
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                VL_WRITEF("ERROR: write to read-only register!\n");
                VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1074, "");
            }
        } else {
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: Unknown register (0x%x) = 0x%x\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),12,(0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)),
                          32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x16U)));
            }
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_invalid_wr)) {
                VL_WRITEF("ERROR: write to undefined register!\n");
                VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1078, "");
            }
        }
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_REG_dual___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__5(VNV_nvdla_NV_NVDLA_SDP_REG_dual* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_SDP_REG_dual___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__5\n"); );
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bn_mul_cfg_0_wren) {
            vlSelf->bn_mul_shift_value = (0xffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                           >> 0x1eU)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_ew_mul_cfg_0_wren) {
            vlSelf->ew_mul_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x16U)));
            vlSelf->ew_mul_cvt_bypass = (1U & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                       >> 0x17U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_ew_alu_cfg_0_wren) {
            vlSelf->ew_alu_cvt_bypass = (1U & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                       >> 0x17U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bn_alu_cfg_0_wren) {
            vlSelf->bn_alu_shift_value = (0x3fU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                           >> 0x1eU)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bs_alu_cfg_0_wren) {
            vlSelf->bs_alu_shift_value = (0x3fU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                           >> 0x1eU)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bs_mul_cfg_0_wren) {
            vlSelf->bs_mul_shift_value = (0xffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                           >> 0x1eU)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_ew_alu_cfg_0_wren) {
            vlSelf->ew_alu_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_perf_enable_0_wren) {
            vlSelf->perf_nan_inf_count_en = (1U & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                           >> 0x19U)));
            vlSelf->perf_lut_en = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x17U)));
            vlSelf->perf_sat_en = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x18U)));
            vlSelf->perf_dma_en = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_feature_mode_cfg_0_wren) {
            vlSelf->winograd = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x18U)));
            vlSelf->flying_mode = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x16U)));
            vlSelf->batch_number = (0x1fU & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x1eU)));
            vlSelf->nan_to_zero = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x19U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bs_cfg_0_wren) {
            vlSelf->bs_mul_prelu = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x1bU)));
            vlSelf->bs_alu_algo = (3U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x18U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bn_cfg_0_wren) {
            vlSelf->bn_relu_bypass = (1U & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x1cU)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bs_cfg_0_wren) {
            vlSelf->bs_relu_bypass = (1U & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x1cU)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bn_cfg_0_wren) {
            vlSelf->bn_mul_prelu = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x1bU)));
            vlSelf->bn_alu_algo = (3U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x18U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_ew_cfg_0_wren) {
            vlSelf->ew_alu_bypass = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x17U)));
            vlSelf->ew_alu_algo = (3U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x18U)));
            vlSelf->ew_bypass = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                               >> 0x16U)));
            vlSelf->ew_lut_bypass = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x1cU)));
            vlSelf->ew_mul_bypass = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x1aU)));
            vlSelf->ew_mul_prelu = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x1bU)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bn_mul_cfg_0_wren) {
            vlSelf->bn_mul_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bs_mul_cfg_0_wren) {
            vlSelf->bs_mul_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bs_alu_cfg_0_wren) {
            vlSelf->bs_alu_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bn_alu_cfg_0_wren) {
            vlSelf->bn_alu_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bs_cfg_0_wren) {
            vlSelf->bs_mul_bypass = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x1aU)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bn_cfg_0_wren) {
            vlSelf->bn_mul_bypass = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x1aU)));
            vlSelf->bn_alu_bypass = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x17U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bs_cfg_0_wren) {
            vlSelf->bs_alu_bypass = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x17U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_data_format_0_wren) {
            vlSelf->out_precision = (3U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x18U)));
        }
        if (((0x4cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->dst_base_addr_high = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U));
        }
        if (((0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->ew_mul_cvt_offset = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x16U));
        }
        if (((0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->bs_mul_operand = (0xffffU & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                         >> 0x16U)));
        }
        if (((0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->bs_alu_operand = (0xffffU & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                         >> 0x16U)));
        }
        if (((0xacU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->ew_truncate = (0x3ffU & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x16U)));
        }
        if (((0x88U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->ew_alu_operand = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x16U));
        }
        if (((0xc4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->cvt_scale = (0xffffU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x16U)));
        }
        if (((0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->bn_mul_operand = (0xffffU & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                         >> 0x16U)));
        }
        if (((0xc8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->cvt_shift = (0x3fU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (((0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->ew_mul_operand = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x16U));
        }
        if (((0x94U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->ew_alu_cvt_truncate = (0x3fU & (IData)(
                                                           (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                            >> 0x16U)));
        }
        if (((0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->bn_alu_operand = (0xffffU & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                         >> 0x16U)));
        }
        if (((0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->cvt_offset = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x16U));
        }
        if (((0x8cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->ew_alu_cvt_offset = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x16U));
        }
        if (((0x90U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->ew_alu_cvt_scale = (0xffffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                           >> 0x16U)));
        }
        if (((0xa4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->ew_mul_cvt_scale = (0xffffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                           >> 0x16U)));
        }
        if (((0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->ew_mul_cvt_truncate = (0x3fU & (IData)(
                                                           (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                            >> 0x16U)));
        }
        if (((0xb8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->dst_batch_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x16U));
        }
        if (((0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->dst_line_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                               >> 0x16U));
        }
        if (((0x54U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->dst_surface_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U));
        }
        if (((0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->dst_base_addr_low = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x16U));
        }
        if (((0x44U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->channel = (0x1fffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (((0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->width = (0x1fffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x16U)));
        }
        if (((0x40U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->height = (0x1fffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_data_format_0_wren) {
            vlSelf->proc_precision = (3U & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_feature_mode_cfg_0_wren) {
            vlSelf->output_dst = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x17U)));
        }
        if (((0xb4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelf->dst_ram_type = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U)));
        }
    } else {
        vlSelf->bn_mul_shift_value = 0U;
        vlSelf->ew_mul_src = 0U;
        vlSelf->ew_mul_cvt_bypass = 1U;
        vlSelf->ew_alu_cvt_bypass = 1U;
        vlSelf->bn_alu_shift_value = 0U;
        vlSelf->bs_alu_shift_value = 0U;
        vlSelf->bs_mul_shift_value = 0U;
        vlSelf->ew_alu_src = 0U;
        vlSelf->perf_nan_inf_count_en = 0U;
        vlSelf->perf_lut_en = 0U;
        vlSelf->perf_sat_en = 0U;
        vlSelf->perf_dma_en = 0U;
        vlSelf->winograd = 0U;
        vlSelf->flying_mode = 0U;
        vlSelf->batch_number = 0U;
        vlSelf->nan_to_zero = 0U;
        vlSelf->bs_mul_prelu = 1U;
        vlSelf->bs_alu_algo = 0U;
        vlSelf->bn_relu_bypass = 1U;
        vlSelf->bs_relu_bypass = 1U;
        vlSelf->bn_mul_prelu = 0U;
        vlSelf->bn_alu_algo = 0U;
        vlSelf->ew_alu_bypass = 1U;
        vlSelf->ew_alu_algo = 0U;
        vlSelf->ew_bypass = 1U;
        vlSelf->ew_lut_bypass = 1U;
        vlSelf->ew_mul_bypass = 1U;
        vlSelf->ew_mul_prelu = 0U;
        vlSelf->bn_mul_src = 0U;
        vlSelf->bs_mul_src = 0U;
        vlSelf->bs_alu_src = 0U;
        vlSelf->bn_alu_src = 0U;
        vlSelf->bs_mul_bypass = 1U;
        vlSelf->bn_mul_bypass = 1U;
        vlSelf->bn_alu_bypass = 1U;
        vlSelf->bs_alu_bypass = 1U;
        vlSelf->out_precision = 0U;
        vlSelf->dst_base_addr_high = 0U;
        vlSelf->ew_mul_cvt_offset = 0U;
        vlSelf->bs_mul_operand = 0U;
        vlSelf->bs_alu_operand = 0U;
        vlSelf->ew_truncate = 0U;
        vlSelf->ew_alu_operand = 0U;
        vlSelf->cvt_scale = 0U;
        vlSelf->bn_mul_operand = 0U;
        vlSelf->cvt_shift = 0U;
        vlSelf->ew_mul_operand = 0U;
        vlSelf->ew_alu_cvt_truncate = 0U;
        vlSelf->bn_alu_operand = 0U;
        vlSelf->cvt_offset = 0U;
        vlSelf->ew_alu_cvt_offset = 0U;
        vlSelf->ew_alu_cvt_scale = 0U;
        vlSelf->ew_mul_cvt_scale = 0U;
        vlSelf->ew_mul_cvt_truncate = 0U;
        vlSelf->dst_batch_stride = 0U;
        vlSelf->dst_line_stride = 0U;
        vlSelf->dst_surface_stride = 0U;
        vlSelf->dst_base_addr_low = 0U;
        vlSelf->channel = 0U;
        vlSelf->width = 0U;
        vlSelf->height = 0U;
        vlSelf->proc_precision = 0U;
        vlSelf->output_dst = 0U;
        vlSelf->dst_ram_type = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_REG_dual___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__10(VNV_nvdla_NV_NVDLA_SDP_REG_dual* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_SDP_REG_dual___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__10\n"); );
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bs_cfg_0_wren) {
            vlSelf->bs_bypass = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                               >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bn_cfg_0_wren) {
            vlSelf->bn_bypass = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                               >> 0x16U)));
        }
    } else {
        vlSelf->bs_bypass = 1U;
        vlSelf->bn_bypass = 1U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_REG_dual___settle__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d1__2(VNV_nvdla_NV_NVDLA_SDP_REG_dual* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_SDP_REG_dual___settle__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d1__2\n"); );
    // Body
    vlSelf->reg_rd_data = (((((((((0xc0U == (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U))) 
                                  | (0xc4U == (0xffcU 
                                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U)))) 
                                 | (0xc8U == (0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                                | (0x44U == (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                               | (0x40U == (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                              | (0x3cU == (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                             | (0xbcU == (0xffcU & 
                                          ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) 
                            | (0x70U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U))))
                            ? ((0xc0U == (0xffcU & 
                                          ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))
                                ? vlSelf->cvt_offset
                                : ((0xc4U == (0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))
                                    ? (IData)(vlSelf->cvt_scale)
                                    : ((0xc8U == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                        ? (IData)(vlSelf->cvt_shift)
                                        : ((0x44U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))
                                            ? (IData)(vlSelf->channel)
                                            : ((0x40U 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))
                                                ? (IData)(vlSelf->height)
                                                : (
                                                   (0x3cU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelf->width)
                                                    : 
                                                   ((0xbcU 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? 
                                                    (((IData)(vlSelf->out_precision) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->proc_precision))
                                                     : 
                                                    (((IData)(vlSelf->bn_alu_shift_value) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->bn_alu_src)))))))))
                            : (((((((((0x74U == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U))) 
                                      | (0x6cU == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))) 
                                     | (0x78U == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))) 
                                    | (0x7cU == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))) 
                                   | (0x5cU == (0xffcU 
                                                & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) 
                                  | (0x60U == (0xffcU 
                                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U)))) 
                                 | (0x58U == (0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                                | (0x64U == (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U))))
                                ? ((0x74U == (0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))
                                    ? (IData)(vlSelf->bn_alu_operand)
                                    : ((0x6cU == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                        ? (((IData)(vlSelf->bn_relu_bypass) 
                                            << 6U) 
                                           | (((IData)(vlSelf->bn_mul_prelu) 
                                               << 5U) 
                                              | (((IData)(vlSelf->bn_mul_bypass) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->bn_alu_algo) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->bn_alu_bypass) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->bn_bypass))))))
                                        : ((0x78U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))
                                            ? (((IData)(vlSelf->bn_mul_shift_value) 
                                                << 8U) 
                                               | (IData)(vlSelf->bn_mul_src))
                                            : ((0x7cU 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))
                                                ? (IData)(vlSelf->bn_mul_operand)
                                                : (
                                                   (0x5cU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? 
                                                   (((IData)(vlSelf->bs_alu_shift_value) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->bs_alu_src))
                                                    : 
                                                   ((0x60U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? (IData)(vlSelf->bs_alu_operand)
                                                     : 
                                                    ((0x58U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? 
                                                     (((IData)(vlSelf->bs_relu_bypass) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->bs_mul_prelu) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->bs_mul_bypass) 
                                                             << 4U) 
                                                            | (((IData)(vlSelf->bs_alu_algo) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->bs_alu_bypass) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->bs_bypass))))))
                                                      : 
                                                     (((IData)(vlSelf->bs_mul_shift_value) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->bs_mul_src)))))))))
                                : (((((((((0x68U == 
                                           (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                                          | (0x84U 
                                             == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))) 
                                         | (0x8cU == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                                        | (0x90U == 
                                           (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                                       | (0x94U == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                                      | (0x88U == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))) 
                                     | (0x80U == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))) 
                                    | (0x98U == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U))))
                                    ? ((0x68U == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                        ? (IData)(vlSelf->bs_mul_operand)
                                        : ((0x84U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))
                                            ? (((IData)(vlSelf->ew_alu_cvt_bypass) 
                                                << 1U) 
                                               | (IData)(vlSelf->ew_alu_src))
                                            : ((0x8cU 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))
                                                ? vlSelf->ew_alu_cvt_offset
                                                : (
                                                   (0x90U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelf->ew_alu_cvt_scale)
                                                    : 
                                                   ((0x94U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? (IData)(vlSelf->ew_alu_cvt_truncate)
                                                     : 
                                                    ((0x88U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSelf->ew_alu_operand
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))
                                                       ? 
                                                      (((IData)(vlSelf->ew_lut_bypass) 
                                                        << 6U) 
                                                       | (((IData)(vlSelf->ew_mul_prelu) 
                                                           << 5U) 
                                                          | (((IData)(vlSelf->ew_mul_bypass) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->ew_alu_algo) 
                                                                 << 2U) 
                                                                | (((IData)(vlSelf->ew_alu_bypass) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelf->ew_bypass))))))
                                                       : 
                                                      (((IData)(vlSelf->ew_mul_cvt_bypass) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ew_mul_src)))))))))
                                    : (((((((((0xa0U 
                                               == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U))) 
                                              | (0xa4U 
                                                 == 
                                                 (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))) 
                                             | (0xa8U 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))) 
                                            | (0x9cU 
                                               == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))) 
                                           | (0xacU 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))) 
                                          | (0x4cU 
                                             == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))) 
                                         | (0x48U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                                        | (0xb8U == 
                                           (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))))
                                        ? ((0xa0U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))
                                            ? vlSelf->ew_mul_cvt_offset
                                            : ((0xa4U 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))
                                                ? (IData)(vlSelf->ew_mul_cvt_scale)
                                                : (
                                                   (0xa8U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelf->ew_mul_cvt_truncate)
                                                    : 
                                                   ((0x9cU 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSelf->ew_mul_operand
                                                     : 
                                                    ((0xacU 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? (IData)(vlSelf->ew_truncate)
                                                      : 
                                                     ((0x4cU 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSelf->dst_base_addr_high
                                                       : 
                                                      ((0x48U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U)))
                                                        ? vlSelf->dst_base_addr_low
                                                        : vlSelf->dst_batch_stride)))))))
                                        : (((((((((0xb4U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U))) 
                                                  | (0x50U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))) 
                                                 | (0x54U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))) 
                                                | (0xb0U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))) 
                                               | (0x38U 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))) 
                                              | (0xdcU 
                                                 == 
                                                 (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))) 
                                             | (0xf0U 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))) 
                                            | (0xf4U 
                                               == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U))))
                                            ? ((0xb4U 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))
                                                ? (IData)(vlSelf->dst_ram_type)
                                                : (
                                                   (0x50U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSelf->dst_line_stride
                                                    : 
                                                   ((0x54U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSelf->dst_surface_stride
                                                     : 
                                                    ((0xb0U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? 
                                                     (((IData)(vlSelf->batch_number) 
                                                       << 8U) 
                                                      | (((IData)(vlSelf->nan_to_zero) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->winograd) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->output_dst) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->flying_mode)))))
                                                      : 
                                                     ((0x38U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))
                                                       ? (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d1_op_en)
                                                       : 
                                                      ((0xdcU 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U)))
                                                        ? 
                                                       (((IData)(vlSelf->perf_nan_inf_count_en) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->perf_sat_en) 
                                                            << 2U) 
                                                           | (((IData)(vlSelf->perf_lut_en) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->perf_dma_en))))
                                                        : 
                                                       ((0xf0U 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                             << 2U)))
                                                         ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_lut_hybrid
                                                         : vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_lut_le_hit)))))))
                                            : (((((
                                                   ((((0xf8U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U))) 
                                                      | (0xe8U 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                             << 2U)))) 
                                                     | (0xe4U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U)))) 
                                                    | (0xecU 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (0xe0U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))) 
                                                  | (0xccU 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))) 
                                                 | (0xd4U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))) 
                                                | (0xd0U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U))))
                                                ? (
                                                   (0xf8U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_lut_lo_hit
                                                    : 
                                                   ((0xe8U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_lut_oflow
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_lut_uflow
                                                      : 
                                                     ((0xecU 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_out_saturation
                                                       : 
                                                      ((0xe0U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U)))
                                                        ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_wdma_stall
                                                        : 
                                                       ((0xccU 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                             << 2U)))
                                                         ? (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_unequal)
                                                         : 
                                                        ((0xd4U 
                                                          == 
                                                          (0xffcU 
                                                           & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                              << 2U)))
                                                          ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_inf_input_num
                                                          : vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_nan_input_num)))))))
                                                : (
                                                   (0xd8U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_nan_output_num
                                                    : 0U)))))));
    vlSelf->__PVT__nvdla_sdp_d_data_format_0_wren = 
        ((0xbcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                              << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_sdp_d_dp_bn_alu_cfg_0_wren 
        = ((0x70U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_sdp_d_dp_bn_cfg_0_wren = (
                                                   (0x6cU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U))) 
                                                   & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_sdp_d_dp_bn_mul_cfg_0_wren 
        = ((0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_sdp_d_dp_bs_alu_cfg_0_wren 
        = ((0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_sdp_d_dp_bs_cfg_0_wren = (
                                                   (0x58U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U))) 
                                                   & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_sdp_d_dp_bs_mul_cfg_0_wren 
        = ((0x64U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_sdp_d_dp_ew_alu_cfg_0_wren 
        = ((0x84U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_sdp_d_dp_ew_cfg_0_wren = (
                                                   (0x80U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U))) 
                                                   & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_sdp_d_dp_ew_mul_cfg_0_wren 
        = ((0x98U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_sdp_d_feature_mode_cfg_0_wren 
        = ((0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelf->__PVT__nvdla_sdp_d_perf_enable_0_wren = 
        ((0xdcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                              << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_REG_dual___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d1__4(VNV_nvdla_NV_NVDLA_SDP_REG_dual* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_SDP_REG_dual___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d1__4\n"); );
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en) {
        if (((((((((0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                        << 2U))) | 
                   (0xc4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                        << 2U)))) | 
                  (0xc8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U)))) | 
                 (0x44U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                      << 2U)))) | (0x40U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))) 
               | (0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                      << 2U)))) | (0xbcU 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))) 
             | (0x70U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                    << 2U))))) {
            if ((0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_CVT_OFFSET_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->cvt_offset,32,
                              vlSelf->cvt_offset);
                }
            } else if ((0xc4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_CVT_SCALE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->cvt_scale,32,
                              (IData)(vlSelf->cvt_scale));
                }
            } else if ((0xc8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_CVT_SHIFT_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->cvt_shift,32,
                              (IData)(vlSelf->cvt_shift));
                }
            } else if ((0x44U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DATA_CUBE_CHANNEL_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->channel,32,(IData)(vlSelf->channel));
                }
            } else if ((0x40U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DATA_CUBE_HEIGHT_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->height,32,(IData)(vlSelf->height));
                }
            } else if ((0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DATA_CUBE_WIDTH_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->width,32,(IData)(vlSelf->width));
                }
            } else if ((0xbcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DATA_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->out_precision) 
                                << 2U) | (IData)(vlSelf->proc_precision)),
                              32,(((IData)(vlSelf->out_precision) 
                                   << 2U) | (IData)(vlSelf->proc_precision)));
                }
            } else if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BN_ALU_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)),
                          32,(((IData)(vlSelf->bn_alu_shift_value) 
                               << 8U) | (IData)(vlSelf->bn_alu_src)),
                          32,(((IData)(vlSelf->bn_alu_shift_value) 
                               << 8U) | (IData)(vlSelf->bn_alu_src)));
            }
        } else if (((((((((0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                          | (0x6cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                       | (0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x58U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x64U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BN_ALU_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->bn_alu_operand,
                              32,(IData)(vlSelf->bn_alu_operand));
                }
            } else if ((0x6cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BN_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->bn_relu_bypass) 
                                << 6U) | (((IData)(vlSelf->bn_mul_prelu) 
                                           << 5U) | 
                                          (((IData)(vlSelf->bn_mul_bypass) 
                                            << 4U) 
                                           | (((IData)(vlSelf->bn_alu_algo) 
                                               << 2U) 
                                              | (((IData)(vlSelf->bn_alu_bypass) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->bn_bypass)))))),
                              32,(((IData)(vlSelf->bn_relu_bypass) 
                                   << 6U) | (((IData)(vlSelf->bn_mul_prelu) 
                                              << 5U) 
                                             | (((IData)(vlSelf->bn_mul_bypass) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->bn_alu_algo) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->bn_alu_bypass) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->bn_bypass)))))));
                }
            } else if ((0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BN_MUL_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->bn_mul_shift_value) 
                                << 8U) | (IData)(vlSelf->bn_mul_src)),
                              32,(((IData)(vlSelf->bn_mul_shift_value) 
                                   << 8U) | (IData)(vlSelf->bn_mul_src)));
                }
            } else if ((0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BN_MUL_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->bn_mul_operand,
                              32,(IData)(vlSelf->bn_mul_operand));
                }
            } else if ((0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BS_ALU_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->bs_alu_shift_value) 
                                << 8U) | (IData)(vlSelf->bs_alu_src)),
                              32,(((IData)(vlSelf->bs_alu_shift_value) 
                                   << 8U) | (IData)(vlSelf->bs_alu_src)));
                }
            } else if ((0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BS_ALU_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->bs_alu_operand,
                              32,(IData)(vlSelf->bs_alu_operand));
                }
            } else if ((0x58U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BS_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->bs_relu_bypass) 
                                << 6U) | (((IData)(vlSelf->bs_mul_prelu) 
                                           << 5U) | 
                                          (((IData)(vlSelf->bs_mul_bypass) 
                                            << 4U) 
                                           | (((IData)(vlSelf->bs_alu_algo) 
                                               << 2U) 
                                              | (((IData)(vlSelf->bs_alu_bypass) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->bs_bypass)))))),
                              32,(((IData)(vlSelf->bs_relu_bypass) 
                                   << 6U) | (((IData)(vlSelf->bs_mul_prelu) 
                                              << 5U) 
                                             | (((IData)(vlSelf->bs_mul_bypass) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->bs_alu_algo) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->bs_alu_bypass) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->bs_bypass)))))));
                }
            } else if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BS_MUL_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)),
                          32,(((IData)(vlSelf->bs_mul_shift_value) 
                               << 8U) | (IData)(vlSelf->bs_mul_src)),
                          32,(((IData)(vlSelf->bs_mul_shift_value) 
                               << 8U) | (IData)(vlSelf->bs_mul_src)));
            }
        } else if (((((((((0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                          | (0x84U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x8cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x90U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                       | (0x94U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x88U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x80U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x98U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BS_MUL_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->bs_mul_operand,
                              32,(IData)(vlSelf->bs_mul_operand));
                }
            } else if ((0x84U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_ALU_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->ew_alu_cvt_bypass) 
                                << 1U) | (IData)(vlSelf->ew_alu_src)),
                              32,(((IData)(vlSelf->ew_alu_cvt_bypass) 
                                   << 1U) | (IData)(vlSelf->ew_alu_src)));
                }
            } else if ((0x8cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->ew_alu_cvt_offset,
                              32,vlSelf->ew_alu_cvt_offset);
                }
            } else if ((0x90U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->ew_alu_cvt_scale,
                              32,(IData)(vlSelf->ew_alu_cvt_scale));
                }
            } else if ((0x94U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->ew_alu_cvt_truncate,
                              32,(IData)(vlSelf->ew_alu_cvt_truncate));
                }
            } else if ((0x88U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_ALU_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->ew_alu_operand,
                              32,vlSelf->ew_alu_operand);
                }
            } else if ((0x80U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->ew_lut_bypass) 
                                << 6U) | (((IData)(vlSelf->ew_mul_prelu) 
                                           << 5U) | 
                                          (((IData)(vlSelf->ew_mul_bypass) 
                                            << 4U) 
                                           | (((IData)(vlSelf->ew_alu_algo) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ew_alu_bypass) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ew_bypass)))))),
                              32,(((IData)(vlSelf->ew_lut_bypass) 
                                   << 6U) | (((IData)(vlSelf->ew_mul_prelu) 
                                              << 5U) 
                                             | (((IData)(vlSelf->ew_mul_bypass) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->ew_alu_algo) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->ew_alu_bypass) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->ew_bypass)))))));
                }
            } else if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_MUL_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)),
                          32,(((IData)(vlSelf->ew_mul_cvt_bypass) 
                               << 1U) | (IData)(vlSelf->ew_mul_src)),
                          32,(((IData)(vlSelf->ew_mul_cvt_bypass) 
                               << 1U) | (IData)(vlSelf->ew_mul_src)));
            }
        } else if (((((((((0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                          | (0xa4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                       | (0xacU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x4cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                    | (0xb8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U))))) {
            if ((0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->ew_mul_cvt_offset,
                              32,vlSelf->ew_mul_cvt_offset);
                }
            } else if ((0xa4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->ew_mul_cvt_scale,
                              32,(IData)(vlSelf->ew_mul_cvt_scale));
                }
            } else if ((0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->ew_mul_cvt_truncate,
                              32,(IData)(vlSelf->ew_mul_cvt_truncate));
                }
            } else if ((0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_MUL_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->ew_mul_operand,
                              32,vlSelf->ew_mul_operand);
                }
            } else if ((0xacU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_TRUNCATE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->ew_truncate,32,
                              (IData)(vlSelf->ew_truncate));
                }
            } else if ((0x4cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DST_BASE_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->dst_base_addr_high,
                              32,vlSelf->dst_base_addr_high);
                }
            } else if ((0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DST_BASE_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->dst_base_addr_low,
                              32,vlSelf->dst_base_addr_low);
                }
            } else if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DST_BATCH_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->dst_batch_stride,
                          32,vlSelf->dst_batch_stride);
            }
        } else if (((((((((0xb4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                          | (0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x54U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                        | (0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                       | (0x38U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
                      | (0xdcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)))) 
                     | (0xf0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                    | (0xf4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U))))) {
            if ((0xb4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DST_DMA_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->dst_ram_type,
                              32,(IData)(vlSelf->dst_ram_type));
                }
            } else if ((0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DST_LINE_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->dst_line_stride,
                              32,vlSelf->dst_line_stride);
                }
            } else if ((0x54U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DST_SURFACE_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSelf->dst_surface_stride,
                              32,vlSelf->dst_surface_stride);
                }
            } else if ((0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_FEATURE_MODE_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->batch_number) 
                                << 8U) | (((IData)(vlSelf->nan_to_zero) 
                                           << 3U) | 
                                          (((IData)(vlSelf->winograd) 
                                            << 2U) 
                                           | (((IData)(vlSelf->output_dst) 
                                               << 1U) 
                                              | (IData)(vlSelf->flying_mode))))),
                              32,(((IData)(vlSelf->batch_number) 
                                   << 8U) | (((IData)(vlSelf->nan_to_zero) 
                                              << 3U) 
                                             | (((IData)(vlSelf->winograd) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->output_dst) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->flying_mode))))));
                }
            } else if ((0x38U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_OP_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d1_op_en,
                              32,(IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d1_op_en));
                }
            } else if ((0xdcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_PERF_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)),32,
                              (((IData)(vlSelf->perf_nan_inf_count_en) 
                                << 3U) | (((IData)(vlSelf->perf_sat_en) 
                                           << 2U) | 
                                          (((IData)(vlSelf->perf_lut_en) 
                                            << 1U) 
                                           | (IData)(vlSelf->perf_dma_en)))),
                              32,(((IData)(vlSelf->perf_nan_inf_count_en) 
                                   << 3U) | (((IData)(vlSelf->perf_sat_en) 
                                              << 2U) 
                                             | (((IData)(vlSelf->perf_lut_en) 
                                                 << 1U) 
                                                | (IData)(vlSelf->perf_dma_en)))));
                }
            } else if ((0xf0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_PERF_LUT_HYBRID_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1034, "");
                }
            } else {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_PERF_LUT_LE_HIT_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1038, "");
                }
            }
        } else if (((((((((0xf8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                          | (0xe8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0xe4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                        | (0xecU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                       | (0xe0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
                      | (0xccU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)))) 
                     | (0xd4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                    | (0xd0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U))))) {
            if ((0xf8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_PERF_LUT_LO_HIT_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1042, "");
                }
            } else if ((0xe8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_PERF_LUT_OFLOW_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1046, "");
                }
            } else if ((0xe4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_PERF_LUT_UFLOW_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1050, "");
                }
            } else if ((0xecU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_PERF_OUT_SATURATION_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1054, "");
                }
            } else if ((0xe0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_PERF_WDMA_WRITE_STALL_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1058, "");
                }
            } else if ((0xccU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_STATUS_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1062, "");
                }
            } else if ((0xd4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_STATUS_INF_INPUT_NUM_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1066, "");
                }
            } else {
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                    VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_STATUS_NAN_INPUT_NUM_0 = 0x%x\n",
                              64,VL_TIME_UNITED_Q(10),
                              -11,vlSymsp->name(),32,
                              (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                       >> 0x16U)));
                }
                if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                    VL_WRITEF("ERROR: write to read-only register!\n");
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1070, "");
                }
            }
        } else if ((0xd8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_STATUS_NAN_OUTPUT_NUM_0 = 0x%x\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)));
            }
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_rowr)) {
                VL_WRITEF("ERROR: write to read-only register!\n");
                VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1074, "");
            }
        } else {
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: Unknown register (0x%x) = 0x%x\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),12,(0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)),
                          32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x16U)));
            }
            if (VL_UNLIKELY(vlSelf->__PVT__arreggen_abort_on_invalid_wr)) {
                VL_WRITEF("ERROR: write to undefined register!\n");
                VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1078, "");
            }
        }
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_REG_dual___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d1__6(VNV_nvdla_NV_NVDLA_SDP_REG_dual* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_SDP_REG_dual___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d1__6\n"); );
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bn_mul_cfg_0_wren) {
            vlSelf->bn_mul_shift_value = (0xffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                           >> 0x1eU)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_ew_mul_cfg_0_wren) {
            vlSelf->ew_mul_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x16U)));
            vlSelf->ew_mul_cvt_bypass = (1U & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                       >> 0x17U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_ew_alu_cfg_0_wren) {
            vlSelf->ew_alu_cvt_bypass = (1U & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                       >> 0x17U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bn_alu_cfg_0_wren) {
            vlSelf->bn_alu_shift_value = (0x3fU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                           >> 0x1eU)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bs_alu_cfg_0_wren) {
            vlSelf->bs_alu_shift_value = (0x3fU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                           >> 0x1eU)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bs_mul_cfg_0_wren) {
            vlSelf->bs_mul_shift_value = (0xffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                           >> 0x1eU)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_ew_alu_cfg_0_wren) {
            vlSelf->ew_alu_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_perf_enable_0_wren) {
            vlSelf->perf_nan_inf_count_en = (1U & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                           >> 0x19U)));
            vlSelf->perf_lut_en = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x17U)));
            vlSelf->perf_sat_en = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x18U)));
            vlSelf->perf_dma_en = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_feature_mode_cfg_0_wren) {
            vlSelf->winograd = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x18U)));
            vlSelf->flying_mode = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x16U)));
            vlSelf->batch_number = (0x1fU & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x1eU)));
            vlSelf->nan_to_zero = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x19U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bs_cfg_0_wren) {
            vlSelf->bs_mul_prelu = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x1bU)));
            vlSelf->bs_alu_algo = (3U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x18U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bn_cfg_0_wren) {
            vlSelf->bn_relu_bypass = (1U & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x1cU)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bs_cfg_0_wren) {
            vlSelf->bs_relu_bypass = (1U & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x1cU)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bn_cfg_0_wren) {
            vlSelf->bn_mul_prelu = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x1bU)));
            vlSelf->bn_alu_algo = (3U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x18U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_ew_cfg_0_wren) {
            vlSelf->ew_alu_bypass = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x17U)));
            vlSelf->ew_alu_algo = (3U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x18U)));
            vlSelf->ew_bypass = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                               >> 0x16U)));
            vlSelf->ew_lut_bypass = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x1cU)));
            vlSelf->ew_mul_bypass = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x1aU)));
            vlSelf->ew_mul_prelu = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x1bU)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bn_mul_cfg_0_wren) {
            vlSelf->bn_mul_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bs_mul_cfg_0_wren) {
            vlSelf->bs_mul_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bs_alu_cfg_0_wren) {
            vlSelf->bs_alu_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bn_alu_cfg_0_wren) {
            vlSelf->bn_alu_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bs_cfg_0_wren) {
            vlSelf->bs_mul_bypass = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x1aU)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bn_cfg_0_wren) {
            vlSelf->bn_mul_bypass = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x1aU)));
            vlSelf->bn_alu_bypass = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x17U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_dp_bs_cfg_0_wren) {
            vlSelf->bs_alu_bypass = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x17U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_data_format_0_wren) {
            vlSelf->out_precision = (3U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x18U)));
        }
        if (((0x4cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->dst_base_addr_high = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U));
        }
        if (((0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->ew_mul_cvt_offset = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x16U));
        }
        if (((0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->bs_mul_operand = (0xffffU & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                         >> 0x16U)));
        }
        if (((0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->bs_alu_operand = (0xffffU & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                         >> 0x16U)));
        }
        if (((0xacU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->ew_truncate = (0x3ffU & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x16U)));
        }
        if (((0x88U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->ew_alu_operand = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x16U));
        }
        if (((0xc4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->cvt_scale = (0xffffU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x16U)));
        }
        if (((0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->bn_mul_operand = (0xffffU & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                         >> 0x16U)));
        }
        if (((0xc8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->cvt_shift = (0x3fU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (((0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->ew_mul_operand = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                              >> 0x16U));
        }
        if (((0x94U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->ew_alu_cvt_truncate = (0x3fU & (IData)(
                                                           (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                            >> 0x16U)));
        }
        if (((0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->bn_alu_operand = (0xffffU & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                         >> 0x16U)));
        }
        if (((0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->cvt_offset = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                          >> 0x16U));
        }
        if (((0x8cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->ew_alu_cvt_offset = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x16U));
        }
        if (((0x90U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->ew_alu_cvt_scale = (0xffffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                           >> 0x16U)));
        }
        if (((0xa4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->ew_mul_cvt_scale = (0xffffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                           >> 0x16U)));
        }
        if (((0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->ew_mul_cvt_truncate = (0x3fU & (IData)(
                                                           (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                            >> 0x16U)));
        }
        if (((0xb8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->dst_batch_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x16U));
        }
        if (((0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->dst_line_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                               >> 0x16U));
        }
        if (((0x54U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->dst_surface_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U));
        }
        if (((0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->dst_base_addr_low = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x16U));
        }
        if (((0x44U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->channel = (0x1fffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (((0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->width = (0x1fffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x16U)));
        }
        if (((0x40U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->height = (0x1fffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_data_format_0_wren) {
            vlSelf->proc_precision = (3U & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x16U)));
        }
        if (vlSelf->__PVT__nvdla_sdp_d_feature_mode_cfg_0_wren) {
            vlSelf->output_dst = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x17U)));
        }
        if (((0xb4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelf->dst_ram_type = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U)));
        }
    } else {
        vlSelf->bn_mul_shift_value = 0U;
        vlSelf->ew_mul_src = 0U;
        vlSelf->ew_mul_cvt_bypass = 1U;
        vlSelf->ew_alu_cvt_bypass = 1U;
        vlSelf->bn_alu_shift_value = 0U;
        vlSelf->bs_alu_shift_value = 0U;
        vlSelf->bs_mul_shift_value = 0U;
        vlSelf->ew_alu_src = 0U;
        vlSelf->perf_nan_inf_count_en = 0U;
        vlSelf->perf_lut_en = 0U;
        vlSelf->perf_sat_en = 0U;
        vlSelf->perf_dma_en = 0U;
        vlSelf->winograd = 0U;
        vlSelf->flying_mode = 0U;
        vlSelf->batch_number = 0U;
        vlSelf->nan_to_zero = 0U;
        vlSelf->bs_mul_prelu = 1U;
        vlSelf->bs_alu_algo = 0U;
        vlSelf->bn_relu_bypass = 1U;
        vlSelf->bs_relu_bypass = 1U;
        vlSelf->bn_mul_prelu = 0U;
        vlSelf->bn_alu_algo = 0U;
        vlSelf->ew_alu_bypass = 1U;
        vlSelf->ew_alu_algo = 0U;
        vlSelf->ew_bypass = 1U;
        vlSelf->ew_lut_bypass = 1U;
        vlSelf->ew_mul_bypass = 1U;
        vlSelf->ew_mul_prelu = 0U;
        vlSelf->bn_mul_src = 0U;
        vlSelf->bs_mul_src = 0U;
        vlSelf->bs_alu_src = 0U;
        vlSelf->bn_alu_src = 0U;
        vlSelf->bs_mul_bypass = 1U;
        vlSelf->bn_mul_bypass = 1U;
        vlSelf->bn_alu_bypass = 1U;
        vlSelf->bs_alu_bypass = 1U;
        vlSelf->out_precision = 0U;
        vlSelf->dst_base_addr_high = 0U;
        vlSelf->ew_mul_cvt_offset = 0U;
        vlSelf->bs_mul_operand = 0U;
        vlSelf->bs_alu_operand = 0U;
        vlSelf->ew_truncate = 0U;
        vlSelf->ew_alu_operand = 0U;
        vlSelf->cvt_scale = 0U;
        vlSelf->bn_mul_operand = 0U;
        vlSelf->cvt_shift = 0U;
        vlSelf->ew_mul_operand = 0U;
        vlSelf->ew_alu_cvt_truncate = 0U;
        vlSelf->bn_alu_operand = 0U;
        vlSelf->cvt_offset = 0U;
        vlSelf->ew_alu_cvt_offset = 0U;
        vlSelf->ew_alu_cvt_scale = 0U;
        vlSelf->ew_mul_cvt_scale = 0U;
        vlSelf->ew_mul_cvt_truncate = 0U;
        vlSelf->dst_batch_stride = 0U;
        vlSelf->dst_line_stride = 0U;
        vlSelf->dst_surface_stride = 0U;
        vlSelf->dst_base_addr_low = 0U;
        vlSelf->channel = 0U;
        vlSelf->width = 0U;
        vlSelf->height = 0U;
        vlSelf->proc_precision = 0U;
        vlSelf->output_dst = 0U;
        vlSelf->dst_ram_type = 0U;
    }
}
