// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_partition_m.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__3(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__3\n"); );
    // Body
    if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d0_reg_wr_en) {
        if ((0xcU == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_ma.u_NV_NVDLA_cmac.u_reg.u_dual_reg_d0: reg wr: NVDLA_CMAC_A_D_MISC_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)),
                          32,(((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_proc_precision) 
                               << 0xcU) | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_conv_mode)),
                          32,(((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_proc_precision) 
                               << 0xcU) | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_conv_mode)));
            }
        } else if ((8U == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_ma.u_NV_NVDLA_cmac.u_reg.u_dual_reg_d0: reg wr: NVDLA_CMAC_A_D_OP_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en,
                          32,(IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en));
            }
        } else {
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_ma.u_NV_NVDLA_cmac.u_reg.u_dual_reg_d0: reg wr: Unknown register (0x%x) = 0x%x\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),12,(0xffcU 
                                              & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)),
                          32,(IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                      >> 0x16U)));
            }
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__arreggen_abort_on_invalid_wr)) {
                VL_WRITEF("ERROR: write to undefined register!\n");
                VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cmac/NV_NVDLA_CMAC_REG_dual.v", 116, "");
            }
        }
    }
    if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d1_reg_wr_en) {
        if ((0xcU == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_ma.u_NV_NVDLA_cmac.u_reg.u_dual_reg_d1: reg wr: NVDLA_CMAC_A_D_MISC_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)),
                          32,(((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_proc_precision) 
                               << 0xcU) | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_conv_mode)),
                          32,(((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_proc_precision) 
                               << 0xcU) | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_conv_mode)));
            }
        } else if ((8U == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_ma.u_NV_NVDLA_cmac.u_reg.u_dual_reg_d1: reg wr: NVDLA_CMAC_A_D_OP_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en,
                          32,(IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en));
            }
        } else {
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_ma.u_NV_NVDLA_cmac.u_reg.u_dual_reg_d1: reg wr: Unknown register (0x%x) = 0x%x\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),12,(0xffcU 
                                              & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)),
                          32,(IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                      >> 0x16U)));
            }
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__arreggen_abort_on_invalid_wr)) {
                VL_WRITEF("ERROR: write to undefined register!\n");
                VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cmac/NV_NVDLA_CMAC_REG_dual.v", 116, "");
            }
        }
    }
    if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__s_reg_wr_en) {
        if ((4U == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                              << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_single_reg__DOT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_ma.u_NV_NVDLA_cmac.u_reg.u_single_reg: reg wr: NVDLA_CMAC_A_S_POINTER_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)),
                          32,(((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer) 
                               << 0x10U) | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer)),
                          32,(((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer) 
                               << 0x10U) | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer)));
            }
        } else if ((0U == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_single_reg__DOT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_ma.u_NV_NVDLA_cmac.u_reg.u_single_reg: read-only reg wr: NVDLA_CMAC_A_S_STATUS_0 = 0x%x\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)));
            }
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_single_reg__DOT__arreggen_abort_on_rowr)) {
                VL_WRITEF("ERROR: write to read-only register!\n");
                VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cmac/NV_NVDLA_CMAC_REG_single.v", 110, "");
            }
        } else {
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_single_reg__DOT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_ma.u_NV_NVDLA_cmac.u_reg.u_single_reg: reg wr: Unknown register (0x%x) = 0x%x\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),12,(0xffcU 
                                              & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)),
                          32,(IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                      >> 0x16U)));
            }
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_single_reg__DOT__arreggen_abort_on_invalid_wr)) {
                VL_WRITEF("ERROR: write to undefined register!\n");
                VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cmac/NV_NVDLA_CMAC_REG_single.v", 114, "");
            }
        }
    }
    vlSelf->__PVT__u_dla_clk_ovr_on_sync__DOT__sync_sbus 
        = vlSelf->__PVT__u_dla_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d1;
    vlSelf->__PVT__u_dla_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d1 
        = vlSelf->__PVT__u_dla_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelf->__PVT__u_dla_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__6(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__6\n"); );
    // Body
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pvld 
        = ((IData)(vlSelf->__PVT__nvdla_core_rstn) 
           & (IData)(vlSymsp->TOP.NV_nvdla__DOT__csb2cmac_a_req_pvld));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__7(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__7\n"); );
    // Body
    vlSelf->__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_ 
        = ((IData)(vlSelf->__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__inreset_tm_) 
           & (IData)(vlSelf->__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelf->__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__NV_GENERIC_CELL__DOT__d0 
        = ((IData)(vlSelf->__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__inreset_tm_) 
           & (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__10(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__10\n"); );
    // Body
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_3__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd 
        = (1U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__slcg_op_en_d3) 
                   >> 3U) | (IData)(vlSelf->__PVT__u_dla_clk_ovr_on_sync__DOT__sync_sbus)) 
                 | ((IData)(vlSymsp->TOP.tmc2slcg_disable_clock_gating) 
                    | (IData)(vlSelf->__PVT__u_global_clk_ovr_on_sync__DOT__sync_sbus))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_2__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd 
        = (1U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__slcg_op_en_d3) 
                   >> 2U) | (IData)(vlSelf->__PVT__u_dla_clk_ovr_on_sync__DOT__sync_sbus)) 
                 | ((IData)(vlSymsp->TOP.tmc2slcg_disable_clock_gating) 
                    | (IData)(vlSelf->__PVT__u_global_clk_ovr_on_sync__DOT__sync_sbus))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_1__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd 
        = (1U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__slcg_op_en_d3) 
                   >> 1U) | (IData)(vlSelf->__PVT__u_dla_clk_ovr_on_sync__DOT__sync_sbus)) 
                 | ((IData)(vlSymsp->TOP.tmc2slcg_disable_clock_gating) 
                    | (IData)(vlSelf->__PVT__u_global_clk_ovr_on_sync__DOT__sync_sbus))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_0__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__slcg_op_en_d3) 
                  | (IData)(vlSelf->__PVT__u_dla_clk_ovr_on_sync__DOT__sync_sbus)) 
                 | ((IData)(vlSymsp->TOP.tmc2slcg_disable_clock_gating) 
                    | (IData)(vlSelf->__PVT__u_global_clk_ovr_on_sync__DOT__sync_sbus))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_6__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd 
        = (IData)((((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__slcg_op_en_d3) 
                      >> 6U) | (IData)(vlSelf->__PVT__u_dla_clk_ovr_on_sync__DOT__sync_sbus)) 
                    | (IData)(vlSymsp->TOP.tmc2slcg_disable_clock_gating)) 
                   | (IData)(vlSelf->__PVT__u_global_clk_ovr_on_sync__DOT__sync_sbus)));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_4__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd 
        = (1U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__slcg_op_en_d3) 
                   >> 4U) | (IData)(vlSelf->__PVT__u_dla_clk_ovr_on_sync__DOT__sync_sbus)) 
                 | ((IData)(vlSymsp->TOP.tmc2slcg_disable_clock_gating) 
                    | (IData)(vlSelf->__PVT__u_global_clk_ovr_on_sync__DOT__sync_sbus))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_5__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd 
        = (1U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__slcg_op_en_d3) 
                   >> 5U) | (IData)(vlSelf->__PVT__u_dla_clk_ovr_on_sync__DOT__sync_sbus)) 
                 | ((IData)(vlSymsp->TOP.tmc2slcg_disable_clock_gating) 
                    | (IData)(vlSelf->__PVT__u_global_clk_ovr_on_sync__DOT__sync_sbus))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___combo__TOP__NV_nvdla__DOT__u_partition_ma__13(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___combo__TOP__NV_nvdla__DOT__u_partition_ma__13\n"); );
    // Body
    vlSelf->__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__inreset_tm_ 
        = ((IData)(vlSymsp->TOP.test_mode) ? (IData)(vlSymsp->TOP.direct_reset_)
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__nvdla_op_gated_clk_3 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_3__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__nvdla_op_gated_clk_2 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_2__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__nvdla_op_gated_clk_1 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_1__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__nvdla_op_gated_clk_0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_0__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__nvdla_op_gated_clk_6 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_6__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__nvdla_op_gated_clk_4 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_4__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__nvdla_op_gated_clk_5 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_5__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__16(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__16\n"); );
    // Body
    vlSelf->__PVT__u_global_clk_ovr_on_sync__DOT__sync_sbus 
        = (1U & ((~ (IData)(vlSelf->__PVT__nvdla_core_rstn)) 
                 | (IData)(vlSelf->__PVT__u_global_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d1)));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__slcg_op_en_d3 
        = ((IData)(vlSelf->__PVT__nvdla_core_rstn) ? (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__slcg_op_en_d2)
            : 0U);
    vlSelf->__PVT__u_global_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d1 
        = (1U & ((~ (IData)(vlSelf->__PVT__nvdla_core_rstn)) 
                 | (IData)(vlSelf->__PVT__u_global_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d0)));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__slcg_op_en_d2 
        = ((IData)(vlSelf->__PVT__nvdla_core_rstn) ? (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__slcg_op_en_d1)
            : 0U);
    vlSelf->__PVT__u_global_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d0 
        = (1U & ((~ (IData)(vlSelf->__PVT__nvdla_core_rstn)) 
                 | (IData)(vlSymsp->TOP.global_clk_ovr_on)));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__slcg_op_en_d1 
        = ((IData)(vlSelf->__PVT__nvdla_core_rstn) ? 
           (0x7fU & (- (IData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_ori))))
            : 0U);
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__24(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__24\n"); );
    // Body
    if ((0x80U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data7_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data7_d1;
    } else if ((0x80U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data7_d2 = 0U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data6_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data6_d1;
    } else if ((0x40U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data6_d2 = 0U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data5_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data5_d1;
    } else if ((0x20U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data5_d2 = 0U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data4_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data4_d1;
    } else if ((0x10U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data4_d2 = 0U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data3_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data3_d1;
    } else if ((8U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data3_d2 = 0U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data2_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data2_d1;
    } else if ((4U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data2_d2 = 0U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data1_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data1_d1;
    } else if ((2U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data1_d2 = 0U;
    }
    if ((1U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data0_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data0_d1;
    } else if ((1U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data0_d2 = 0U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data7_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data7_d1;
    } else if ((0x80U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data7_d2 = 0U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data6_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data6_d1;
    } else if ((0x40U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data6_d2 = 0U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data5_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data5_d1;
    } else if ((0x20U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data5_d2 = 0U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data4_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data4_d1;
    } else if ((0x10U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data4_d2 = 0U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data3_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data3_d1;
    } else if ((8U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data3_d2 = 0U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data2_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data2_d1;
    } else if ((4U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data2_d2 = 0U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data1_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data1_d1;
    } else if ((2U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data1_d2 = 0U;
    }
    if ((1U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data0_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data0_d1;
    } else if ((1U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data0_d2 = 0U;
    }
    if ((0x80U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data7_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_data7;
    } else if ((0x80U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data7_d1 = 0U;
    }
    if ((0x40U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data6_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_data6;
    } else if ((0x40U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data6_d1 = 0U;
    }
    if ((0x20U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data5_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_data5;
    } else if ((0x20U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data5_d1 = 0U;
    }
    if ((0x10U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data4_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_data4;
    } else if ((0x10U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data4_d1 = 0U;
    }
    if ((8U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data3_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_data3;
    } else if ((8U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data3_d1 = 0U;
    }
    if ((4U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data2_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_data2;
    } else if ((4U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data2_d1 = 0U;
    }
    if ((2U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data1_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_data1;
    } else if ((2U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data1_d1 = 0U;
    }
    if ((1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data0_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_data0;
    } else if ((1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data0_d1 = 0U;
    }
    if ((0x80U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data7_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_data7;
    } else if ((0x80U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data7_d1 = 0U;
    }
    if ((0x40U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data6_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_data6;
    } else if ((0x40U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data6_d1 = 0U;
    }
    if ((0x20U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data5_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_data5;
    } else if ((0x20U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data5_d1 = 0U;
    }
    if ((0x10U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data4_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_data4;
    } else if ((0x10U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data4_d1 = 0U;
    }
    if ((8U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data3_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_data3;
    } else if ((8U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data3_d1 = 0U;
    }
    if ((4U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data2_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_data2;
    } else if ((4U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data2_d1 = 0U;
    }
    if ((2U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data1_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_data1;
    } else if ((2U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data1_d1 = 0U;
    }
    if ((1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data0_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_data0;
    } else if ((1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data0_d1 = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__52(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__52\n"); );
    // Body
    if (vlSelf->__PVT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1) 
             | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1;
        } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1) 
                    | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2 = 0U;
        }
        if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1) 
             | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1;
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_sel_d2 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_sel_d1;
        } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1) 
                    | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2 = 0U;
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_sel_d2 = 0U;
        }
        if (((IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_pvld) 
             | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1 
                = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_mask;
        } else if (((IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_pvld) 
                    | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1 = 0U;
        }
        if (((IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_pvld) 
             | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1 
                = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_mask;
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1;
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_sel_d1 
                = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_sel;
        } else if (((IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_pvld) 
                    | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1 = 0U;
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1;
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_sel_d1 = 0U;
        } else {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1;
        }
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_a_pvld;
    } else {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_sel_d2 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_sel_d1 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1 = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__56(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__56\n"); );
    // Body
    if (vlSelf->__PVT__nvdla_core_rstn) {
        vlSelf->cmac_a2csb_resp_valid = (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_wr_en) 
                                          & (IData)(
                                                    (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                                     >> 0x37U))) 
                                         | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_rd_en));
        if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_rd_en) {
            vlSelf->cmac_a2csb_resp_pd = (QData)((IData)(
                                                         ((((- (IData)(
                                                                       (8U 
                                                                        > 
                                                                        (0xffcU 
                                                                         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                                            << 2U))))) 
                                                            & ((4U 
                                                                == 
                                                                (0xffcU 
                                                                 & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                                    << 2U)))
                                                                ? 
                                                               (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer) 
                                                                 << 0x10U) 
                                                                | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer))
                                                                : 
                                                               ((0U 
                                                                 == 
                                                                 (0xffcU 
                                                                  & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                                     << 2U)))
                                                                 ? 
                                                                ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en)
                                                                    ? 
                                                                   ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer)
                                                                     ? 1U
                                                                     : 2U)
                                                                    : 0U) 
                                                                  << 0x10U) 
                                                                 | ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en)
                                                                     ? 
                                                                    ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer)
                                                                      ? 2U
                                                                      : 1U)
                                                                     : 0U))
                                                                 : 0U))) 
                                                           | ((- (IData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__select_d0))) 
                                                              & ((0xcU 
                                                                  == 
                                                                  (0xffcU 
                                                                   & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                                      << 2U)))
                                                                  ? 
                                                                 (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_proc_precision) 
                                                                   << 0xcU) 
                                                                  | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_conv_mode))
                                                                  : 
                                                                 ((8U 
                                                                   == 
                                                                   (0xffcU 
                                                                    & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                                       << 2U)))
                                                                   ? (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en)
                                                                   : 0U)))) 
                                                          | ((- (IData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__select_d1))) 
                                                             & ((0xcU 
                                                                 == 
                                                                 (0xffcU 
                                                                  & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                                     << 2U)))
                                                                 ? 
                                                                (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_proc_precision) 
                                                                  << 0xcU) 
                                                                 | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_conv_mode))
                                                                 : 
                                                                ((8U 
                                                                  == 
                                                                  (0xffcU 
                                                                   & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                                      << 2U)))
                                                                  ? (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en)
                                                                  : 0U))))));
        } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_wr_en) 
                    & (IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                               >> 0x37U)))) {
            vlSelf->cmac_a2csb_resp_pd = 0x200000000ULL;
        }
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en_w;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en_w;
        if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__nvdla_cmac_a_d_misc_cfg_0_wren) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_proc_precision 
                = (3U & (IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                 >> 0x22U)));
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_conv_mode 
                = (1U & (IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                 >> 0x16U)));
        }
        if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__nvdla_cmac_a_d_misc_cfg_0_wren) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_proc_precision 
                = (3U & (IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                 >> 0x22U)));
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_conv_mode 
                = (1U & (IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                 >> 0x16U)));
        }
        if (((4U == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                               << 2U))) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__s_reg_wr_en))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer 
                = (1U & (IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                 >> 0x16U)));
        }
        if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d3) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer_w;
        } else if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d3) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer = 0U;
        }
        if (vlSymsp->TOP.NV_nvdla__DOT__csb2cmac_a_req_pvld) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                = ((0xffffffffc00000ULL & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__csb2cmac_a_req_pd_tmp 
                                           << 6U)) 
                   | (QData)((IData)((0xffffU & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__csb2cmac_a_req_pd_tmp)))));
        } else if (vlSymsp->TOP.NV_nvdla__DOT__csb2cmac_a_req_pvld) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd = 0ULL;
        }
    } else {
        vlSelf->cmac_a2csb_resp_valid = 0U;
        vlSelf->cmac_a2csb_resp_pd = 0ULL;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_proc_precision = 1U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_conv_mode = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_proc_precision = 1U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_conv_mode = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd = 0ULL;
    }
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer_w 
        = (1U & (~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer)));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_ori 
        = ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer)
            ? (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en)
            : (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_rd_en 
        = ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pvld) 
           & (~ (IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                         >> 0x36U))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__select_d0 
        = ((8U <= (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                             << 2U))) & (~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer)));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__select_d1 
        = ((8U <= (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                             << 2U))) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_wr_en 
        = ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pvld) 
           & (IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                      >> 0x36U)));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__s_reg_wr_en 
        = ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_wr_en) 
           & (8U > (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                              << 2U))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d0_reg_wr_en 
        = (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_wr_en) 
            & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__select_d0)) 
           & (~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en)));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d1_reg_wr_en 
        = (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_wr_en) 
            & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__select_d1)) 
           & (~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en)));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__nvdla_cmac_a_d_misc_cfg_0_wren 
        = ((0xcU == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                               << 2U))) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__nvdla_cmac_a_d_misc_cfg_0_wren 
        = ((0xcU == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                               << 2U))) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d1_reg_wr_en));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__64(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__64\n"); );
    // Body
    if (vlSelf->__PVT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1) 
             | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d2 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d1;
        } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1) 
                    | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d2 = 0U;
        }
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1;
        if (((IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_pvld) 
             | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d1 
                = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_pd;
        } else if (((IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_pvld) 
                    | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d1 = 0U;
        }
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_pvld;
    } else {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d2 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d1 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1 = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___combo__TOP__NV_nvdla__DOT__u_partition_ma__66(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___combo__TOP__NV_nvdla__DOT__u_partition_ma__66\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_rstn = ((IData)(vlSymsp->TOP.test_mode)
                                       ? (IData)(vlSymsp->TOP.direct_reset_)
                                       : (IData)(vlSelf->__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_mb__4(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_mb__4\n"); );
    // Body
    if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d0_reg_wr_en) {
        if ((0xcU == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_mb.u_NV_NVDLA_cmac.u_reg.u_dual_reg_d0: reg wr: NVDLA_CMAC_A_D_MISC_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)),
                          32,(((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_proc_precision) 
                               << 0xcU) | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_conv_mode)),
                          32,(((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_proc_precision) 
                               << 0xcU) | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_conv_mode)));
            }
        } else if ((8U == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_mb.u_NV_NVDLA_cmac.u_reg.u_dual_reg_d0: reg wr: NVDLA_CMAC_A_D_OP_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en,
                          32,(IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en));
            }
        } else {
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_mb.u_NV_NVDLA_cmac.u_reg.u_dual_reg_d0: reg wr: Unknown register (0x%x) = 0x%x\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),12,(0xffcU 
                                              & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)),
                          32,(IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                      >> 0x16U)));
            }
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__arreggen_abort_on_invalid_wr)) {
                VL_WRITEF("ERROR: write to undefined register!\n");
                VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cmac/NV_NVDLA_CMAC_REG_dual.v", 116, "");
            }
        }
    }
    if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d1_reg_wr_en) {
        if ((0xcU == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_mb.u_NV_NVDLA_cmac.u_reg.u_dual_reg_d1: reg wr: NVDLA_CMAC_A_D_MISC_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)),
                          32,(((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_proc_precision) 
                               << 0xcU) | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_conv_mode)),
                          32,(((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_proc_precision) 
                               << 0xcU) | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_conv_mode)));
            }
        } else if ((8U == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_mb.u_NV_NVDLA_cmac.u_reg.u_dual_reg_d1: reg wr: NVDLA_CMAC_A_D_OP_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)),
                          32,vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en,
                          32,(IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en));
            }
        } else {
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_mb.u_NV_NVDLA_cmac.u_reg.u_dual_reg_d1: reg wr: Unknown register (0x%x) = 0x%x\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),12,(0xffcU 
                                              & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)),
                          32,(IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                      >> 0x16U)));
            }
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__arreggen_abort_on_invalid_wr)) {
                VL_WRITEF("ERROR: write to undefined register!\n");
                VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cmac/NV_NVDLA_CMAC_REG_dual.v", 116, "");
            }
        }
    }
    if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__s_reg_wr_en) {
        if ((4U == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                              << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_single_reg__DOT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_mb.u_NV_NVDLA_cmac.u_reg.u_single_reg: reg wr: NVDLA_CMAC_A_S_POINTER_0 = 0x%x (old value: 0x%x, 0x%b))\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)),
                          32,(((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer) 
                               << 0x10U) | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer)),
                          32,(((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer) 
                               << 0x10U) | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer)));
            }
        } else if ((0U == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_single_reg__DOT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_mb.u_NV_NVDLA_cmac.u_reg.u_single_reg: read-only reg wr: NVDLA_CMAC_A_S_STATUS_0 = 0x%x\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),32,(IData)(
                                                     (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)));
            }
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_single_reg__DOT__arreggen_abort_on_rowr)) {
                VL_WRITEF("ERROR: write to read-only register!\n");
                VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cmac/NV_NVDLA_CMAC_REG_single.v", 110, "");
            }
        } else {
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_single_reg__DOT__arreggen_dump)) {
                VL_WRITEF("%t:%NNV_nvdla.u_partition_mb.u_NV_NVDLA_cmac.u_reg.u_single_reg: reg wr: Unknown register (0x%x) = 0x%x\n",
                          64,VL_TIME_UNITED_Q(10),-11,
                          vlSymsp->name(),12,(0xffcU 
                                              & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)),
                          32,(IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                      >> 0x16U)));
            }
            if (VL_UNLIKELY(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_single_reg__DOT__arreggen_abort_on_invalid_wr)) {
                VL_WRITEF("ERROR: write to undefined register!\n");
                VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cmac/NV_NVDLA_CMAC_REG_single.v", 114, "");
            }
        }
    }
    vlSelf->__PVT__u_dla_clk_ovr_on_sync__DOT__sync_sbus 
        = vlSelf->__PVT__u_dla_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d1;
    vlSelf->__PVT__u_dla_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d1 
        = vlSelf->__PVT__u_dla_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelf->__PVT__u_dla_clk_ovr_on_sync__DOT__sync_0__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_mb__5(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_mb__5\n"); );
    // Body
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pvld 
        = ((IData)(vlSelf->__PVT__nvdla_core_rstn) 
           & (IData)(vlSymsp->TOP.NV_nvdla__DOT__csb2cmac_b_req_pvld));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_mb__34(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_mb__34\n"); );
    // Body
    if ((0x80U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data7_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data7_d1;
    } else if ((0x80U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data7_d2 = 0U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data6_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data6_d1;
    } else if ((0x40U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data6_d2 = 0U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data5_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data5_d1;
    } else if ((0x20U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data5_d2 = 0U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data4_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data4_d1;
    } else if ((0x10U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data4_d2 = 0U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data3_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data3_d1;
    } else if ((8U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data3_d2 = 0U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data2_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data2_d1;
    } else if ((4U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data2_d2 = 0U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data1_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data1_d1;
    } else if ((2U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data1_d2 = 0U;
    }
    if ((1U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data0_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data0_d1;
    } else if ((1U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data0_d2 = 0U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data7_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data7_d1;
    } else if ((0x80U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data7_d2 = 0U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data6_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data6_d1;
    } else if ((0x40U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data6_d2 = 0U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data5_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data5_d1;
    } else if ((0x20U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data5_d2 = 0U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data4_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data4_d1;
    } else if ((0x10U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data4_d2 = 0U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data3_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data3_d1;
    } else if ((8U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data3_d2 = 0U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data2_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data2_d1;
    } else if ((4U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data2_d2 = 0U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data1_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data1_d1;
    } else if ((2U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data1_d2 = 0U;
    }
    if ((1U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data0_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data0_d1;
    } else if ((1U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data0_d2 = 0U;
    }
    if ((0x80U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data7_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_data7;
    } else if ((0x80U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data7_d1 = 0U;
    }
    if ((0x40U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data6_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_data6;
    } else if ((0x40U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data6_d1 = 0U;
    }
    if ((0x20U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data5_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_data5;
    } else if ((0x20U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data5_d1 = 0U;
    }
    if ((0x10U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data4_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_data4;
    } else if ((0x10U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data4_d1 = 0U;
    }
    if ((8U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data3_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_data3;
    } else if ((8U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data3_d1 = 0U;
    }
    if ((4U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data2_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_data2;
    } else if ((4U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data2_d1 = 0U;
    }
    if ((2U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data1_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_data1;
    } else if ((2U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data1_d1 = 0U;
    }
    if ((1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data0_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_data0;
    } else if ((1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data0_d1 = 0U;
    }
    if ((0x80U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data7_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_data7;
    } else if ((0x80U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data7_d1 = 0U;
    }
    if ((0x40U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data6_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_data6;
    } else if ((0x40U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data6_d1 = 0U;
    }
    if ((0x20U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data5_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_data5;
    } else if ((0x20U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data5_d1 = 0U;
    }
    if ((0x10U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data4_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_data4;
    } else if ((0x10U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data4_d1 = 0U;
    }
    if ((8U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data3_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_data3;
    } else if ((8U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data3_d1 = 0U;
    }
    if ((4U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data2_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_data2;
    } else if ((4U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data2_d1 = 0U;
    }
    if ((2U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data1_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_data1;
    } else if ((2U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data1_d1 = 0U;
    }
    if ((1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data0_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_data0;
    } else if ((1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data0_d1 = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_mb__54(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_mb__54\n"); );
    // Body
    if (vlSelf->__PVT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1) 
             | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1;
        } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1) 
                    | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2 = 0U;
        }
        if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1) 
             | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1;
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_sel_d2 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_sel_d1;
        } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1) 
                    | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2 = 0U;
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_sel_d2 = 0U;
        }
        if (((IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_pvld) 
             | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1 
                = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_mask;
        } else if (((IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_pvld) 
                    | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1 = 0U;
        }
        if (((IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_pvld) 
             | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1 
                = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_mask;
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1;
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_sel_d1 
                = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_sel;
        } else if (((IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_pvld) 
                    | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1 = 0U;
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1;
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_sel_d1 = 0U;
        } else {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1;
        }
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_wt_b_pvld;
    } else {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_sel_d2 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d1 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d1 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_sel_d1 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d1 = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_mb__55(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_mb__55\n"); );
    // Body
    if (vlSelf->__PVT__nvdla_core_rstn) {
        vlSelf->cmac_a2csb_resp_valid = (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_wr_en) 
                                          & (IData)(
                                                    (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                                     >> 0x37U))) 
                                         | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_rd_en));
        if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_rd_en) {
            vlSelf->cmac_a2csb_resp_pd = (QData)((IData)(
                                                         ((((- (IData)(
                                                                       (8U 
                                                                        > 
                                                                        (0xffcU 
                                                                         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                                            << 2U))))) 
                                                            & ((4U 
                                                                == 
                                                                (0xffcU 
                                                                 & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                                    << 2U)))
                                                                ? 
                                                               (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer) 
                                                                 << 0x10U) 
                                                                | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer))
                                                                : 
                                                               ((0U 
                                                                 == 
                                                                 (0xffcU 
                                                                  & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                                     << 2U)))
                                                                 ? 
                                                                ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en)
                                                                    ? 
                                                                   ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer)
                                                                     ? 1U
                                                                     : 2U)
                                                                    : 0U) 
                                                                  << 0x10U) 
                                                                 | ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en)
                                                                     ? 
                                                                    ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer)
                                                                      ? 2U
                                                                      : 1U)
                                                                     : 0U))
                                                                 : 0U))) 
                                                           | ((- (IData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__select_d0))) 
                                                              & ((0xcU 
                                                                  == 
                                                                  (0xffcU 
                                                                   & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                                      << 2U)))
                                                                  ? 
                                                                 (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_proc_precision) 
                                                                   << 0xcU) 
                                                                  | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_conv_mode))
                                                                  : 
                                                                 ((8U 
                                                                   == 
                                                                   (0xffcU 
                                                                    & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                                       << 2U)))
                                                                   ? (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en)
                                                                   : 0U)))) 
                                                          | ((- (IData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__select_d1))) 
                                                             & ((0xcU 
                                                                 == 
                                                                 (0xffcU 
                                                                  & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                                     << 2U)))
                                                                 ? 
                                                                (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_proc_precision) 
                                                                  << 0xcU) 
                                                                 | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_conv_mode))
                                                                 : 
                                                                ((8U 
                                                                  == 
                                                                  (0xffcU 
                                                                   & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                                                      << 2U)))
                                                                  ? (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en)
                                                                  : 0U))))));
        } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_wr_en) 
                    & (IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                               >> 0x37U)))) {
            vlSelf->cmac_a2csb_resp_pd = 0x200000000ULL;
        }
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en_w;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en_w;
        if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__nvdla_cmac_a_d_misc_cfg_0_wren) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_proc_precision 
                = (3U & (IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                 >> 0x22U)));
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_conv_mode 
                = (1U & (IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                 >> 0x16U)));
        }
        if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__nvdla_cmac_a_d_misc_cfg_0_wren) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_proc_precision 
                = (3U & (IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                 >> 0x22U)));
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_conv_mode 
                = (1U & (IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                 >> 0x16U)));
        }
        if (((4U == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                               << 2U))) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__s_reg_wr_en))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer 
                = (1U & (IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                                 >> 0x16U)));
        }
        if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d3) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer_w;
        } else if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d3) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer = 0U;
        }
        if (vlSymsp->TOP.NV_nvdla__DOT__csb2cmac_b_req_pvld) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                = ((0xffffffffc00000ULL & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__csb2cmac_b_req_pd_tmp 
                                           << 6U)) 
                   | (QData)((IData)((0xffffU & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__csb2cmac_b_req_pd_tmp)))));
        } else if (vlSymsp->TOP.NV_nvdla__DOT__csb2cmac_b_req_pvld) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd = 0ULL;
        }
    } else {
        vlSelf->cmac_a2csb_resp_valid = 0U;
        vlSelf->cmac_a2csb_resp_pd = 0ULL;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_proc_precision = 1U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_conv_mode = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_proc_precision = 1U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_conv_mode = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd = 0ULL;
    }
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer_w 
        = (1U & (~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer)));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_ori 
        = ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer)
            ? (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en)
            : (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_rd_en 
        = ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pvld) 
           & (~ (IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                         >> 0x36U))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__select_d0 
        = ((8U <= (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                             << 2U))) & (~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer)));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__select_d1 
        = ((8U <= (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                             << 2U))) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_wr_en 
        = ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pvld) 
           & (IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                      >> 0x36U)));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__s_reg_wr_en 
        = ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_wr_en) 
           & (8U > (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                              << 2U))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d0_reg_wr_en 
        = (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_wr_en) 
            & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__select_d0)) 
           & (~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en)));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d1_reg_wr_en 
        = (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_wr_en) 
            & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__select_d1)) 
           & (~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en)));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__nvdla_cmac_a_d_misc_cfg_0_wren 
        = ((0xcU == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                               << 2U))) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__nvdla_cmac_a_d_misc_cfg_0_wren 
        = ((0xcU == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                               << 2U))) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d1_reg_wr_en));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_mb__63(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_mb__63\n"); );
    // Body
    if (vlSelf->__PVT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1) 
             | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d2 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d1;
        } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1) 
                    | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d2 = 0U;
        }
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1;
        if (((IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_pvld) 
             | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d1 
                = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_b_pd;
        } else if (((IData)(vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_pvld) 
                    | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d1 = 0U;
        }
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1 
            = vlSymsp->TOP.NV_nvdla__DOT__sc2mac_dat_a_pvld;
    } else {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d2 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d1 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d1 = 0U;
    }
}
