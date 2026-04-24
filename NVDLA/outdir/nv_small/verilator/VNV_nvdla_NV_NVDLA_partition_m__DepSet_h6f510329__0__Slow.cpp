// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_partition_m.h"
#include "VNV_nvdla__Syms.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_partition_m___settle__TOP__NV_nvdla__DOT__u_partition_ma__1(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___settle__TOP__NV_nvdla__DOT__u_partition_ma__1\n"); );
    // Body
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__nvdla_op_gated_clk_0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_0__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__nvdla_op_gated_clk_1 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_1__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__nvdla_op_gated_clk_2 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_2__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__nvdla_op_gated_clk_3 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_3__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__nvdla_op_gated_clk_6 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_6__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__nvdla_op_gated_clk_4 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_4__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__nvdla_op_gated_clk_5 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_5__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__inreset_tm_ 
        = ((IData)(vlSymsp->TOP.test_mode) ? (IData)(vlSymsp->TOP.direct_reset_)
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld 
        = ((0xfeU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld)) 
           | (1U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld 
        = ((0xfdU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld)) 
           | (2U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld 
        = ((0xfbU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld)) 
           | (4U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld 
        = ((0xf7U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld)) 
           | (8U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld 
        = ((0xefU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld)) 
           | (0x10U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld 
        = ((0xdfU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld)) 
           | (0x20U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld 
        = ((0xbfU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld)) 
           | (0x40U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld 
        = ((0x7fU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld)) 
           | (0x80U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld 
        = ((0xfeU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld)) 
           | (1U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld 
        = ((0xfdU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld)) 
           | (2U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld 
        = ((0xfbU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld)) 
           | (4U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld 
        = ((0xf7U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld)) 
           | (8U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld 
        = ((0xefU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld)) 
           | (0x10U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld 
        = ((0xdfU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld)) 
           | (0x20U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld 
        = ((0xbfU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld)) 
           | (0x40U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld 
        = ((0x7fU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld)) 
           | (0x80U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld 
        = ((0xfeU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld)) 
           | (1U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld 
        = ((0xfdU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld)) 
           | (2U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld 
        = ((0xfbU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld)) 
           | (4U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld 
        = ((0xf7U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld)) 
           | (8U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld 
        = ((0xefU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld)) 
           | (0x10U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld 
        = ((0xdfU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld)) 
           | (0x20U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld 
        = ((0xbfU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld)) 
           | (0x40U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld 
        = ((0x7fU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld)) 
           | (0x80U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld 
        = ((0xfeU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld)) 
           | (1U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld 
        = ((0xfdU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld)) 
           | (2U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld 
        = ((0xfbU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld)) 
           | (4U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld 
        = ((0xf7U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld)) 
           | (8U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld 
        = ((0xefU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld)) 
           | (0x10U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld 
        = ((0xdfU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld)) 
           | (0x20U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld 
        = ((0xbfU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld)) 
           | (0x40U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld 
        = ((0x7fU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld)) 
           | (0x80U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data_w 
        = (((QData)((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data7_d2) 
                              << 0x18U) | (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data6_d2) 
                                            << 0x10U) 
                                           | (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data5_d2) 
                                               << 8U) 
                                              | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data4_d2)))))) 
            << 0x20U) | (QData)((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data3_d2) 
                                          << 0x18U) 
                                         | (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data2_d2) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data1_d2) 
                                                << 8U) 
                                               | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data0_d2)))))));
    if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_sd_pvld;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_sd_pvld;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_sd_pvld;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_sd_pvld;
    } else {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w 
            = ((~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end)) 
               & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_vld));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w 
            = ((~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end)) 
               & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_vld));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w 
            = ((~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end)) 
               & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_vld));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w 
            = ((~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end)) 
               & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_vld));
    }
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data_w 
        = (((QData)((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data7_d2) 
                              << 0x18U) | (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data6_d2) 
                                            << 0x10U) 
                                           | (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data5_d2) 
                                               << 8U) 
                                              | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data4_d2)))))) 
            << 0x20U) | (QData)((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data3_d2) 
                                          << 0x18U) 
                                         | (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data2_d2) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data1_d2) 
                                                << 8U) 
                                               | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data0_d2)))))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_pvld_w 
        = (1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                 | ((~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_sd_pvld))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_pvld_w 
        = (1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 1U) | ((~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st)) 
                            & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_sd_pvld))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_pvld_w 
        = (1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 2U) | ((~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st)) 
                            & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_sd_pvld))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_pvld_w 
        = (1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 3U) | ((~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st)) 
                            & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_sd_pvld))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__out_mask 
        = (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0_d3) 
            << 3U) | (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0_d3) 
                       << 2U) | (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0_d3) 
                                  << 1U) | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0_d3))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer_w 
        = (1U & (~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer)));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_ori 
        = ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer)
            ? (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en)
            : (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0 
        = (1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0) 
                 & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld)));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0 
        = (1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1) 
                 & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld)));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0 
        = (1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2) 
                 & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld)));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0 
        = (1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3) 
                 & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld)));
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
    vlSelf->__PVT__nvdla_core_rstn = ((IData)(vlSymsp->TOP.test_mode)
                                       ? (IData)(vlSymsp->TOP.direct_reset_)
                                       : (IData)(vlSelf->__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__sum_out 
        = (0x7ffffU & (((((((VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (VL_MULS_III(18, 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data)))), 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld))))))) 
                             + VL_EXTENDS_II(19,18, 
                                             (0x3ffffU 
                                              & (VL_MULS_III(18, 
                                                             (0x3ffffU 
                                                              & VL_EXTENDS_II(18,8, 
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
                                                                                >> 8U))))), 
                                                             (0x3ffffU 
                                                              & VL_EXTENDS_II(18,8, 
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
                                                                                >> 8U)))))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld) 
                                                                  >> 1U)))))))) 
                            + VL_EXTENDS_II(19,18, 
                                            (0x3ffffU 
                                             & (VL_MULS_III(18, 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
                                                                                >> 0x10U))))), 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
                                                                                >> 0x10U)))))) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld) 
                                                                 >> 2U)))))))) 
                           + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (VL_MULS_III(18, 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
                                                                                >> 0x18U))))), 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
                                                                                >> 0x18U)))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld) 
                                                                       >> 3U)))))))) 
                          + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                  & (VL_MULS_III(18, 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
                                                                                >> 0x20U))))), 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
                                                                                >> 0x20U)))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld) 
                                                                      >> 4U)))))))) 
                         + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (VL_MULS_III(18, 
                                                                (0x3ffffU 
                                                                 & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
                                                                                >> 0x28U))))), 
                                                                (0x3ffffU 
                                                                 & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
                                                                                >> 0x28U)))))) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld) 
                                                                     >> 5U)))))))) 
                        + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                & (VL_MULS_III(18, 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
                                                                                >> 0x30U))))), 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
                                                                                >> 0x30U)))))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld) 
                                                                    >> 6U)))))))) 
                       + VL_EXTENDS_II(19,18, (0x3ffffU 
                                               & (VL_MULS_III(18, 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
                                                                                >> 0x38U))))), 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
                                                                                >> 0x38U)))))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld) 
                                                                   >> 7U)))))))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__sum_out 
        = (0x7ffffU & (((((((VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (VL_MULS_III(18, 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data)))), 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld))))))) 
                             + VL_EXTENDS_II(19,18, 
                                             (0x3ffffU 
                                              & (VL_MULS_III(18, 
                                                             (0x3ffffU 
                                                              & VL_EXTENDS_II(18,8, 
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
                                                                                >> 8U))))), 
                                                             (0x3ffffU 
                                                              & VL_EXTENDS_II(18,8, 
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
                                                                                >> 8U)))))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld) 
                                                                  >> 1U)))))))) 
                            + VL_EXTENDS_II(19,18, 
                                            (0x3ffffU 
                                             & (VL_MULS_III(18, 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
                                                                                >> 0x10U))))), 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
                                                                                >> 0x10U)))))) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld) 
                                                                 >> 2U)))))))) 
                           + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (VL_MULS_III(18, 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
                                                                                >> 0x18U))))), 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
                                                                                >> 0x18U)))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld) 
                                                                       >> 3U)))))))) 
                          + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                  & (VL_MULS_III(18, 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
                                                                                >> 0x20U))))), 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
                                                                                >> 0x20U)))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld) 
                                                                      >> 4U)))))))) 
                         + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (VL_MULS_III(18, 
                                                                (0x3ffffU 
                                                                 & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
                                                                                >> 0x28U))))), 
                                                                (0x3ffffU 
                                                                 & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
                                                                                >> 0x28U)))))) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld) 
                                                                     >> 5U)))))))) 
                        + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                & (VL_MULS_III(18, 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
                                                                                >> 0x30U))))), 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
                                                                                >> 0x30U)))))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld) 
                                                                    >> 6U)))))))) 
                       + VL_EXTENDS_II(19,18, (0x3ffffU 
                                               & (VL_MULS_III(18, 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
                                                                                >> 0x38U))))), 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
                                                                                >> 0x38U)))))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld) 
                                                                   >> 7U)))))))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__sum_out 
        = (0x7ffffU & (((((((VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (VL_MULS_III(18, 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data)))), 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld))))))) 
                             + VL_EXTENDS_II(19,18, 
                                             (0x3ffffU 
                                              & (VL_MULS_III(18, 
                                                             (0x3ffffU 
                                                              & VL_EXTENDS_II(18,8, 
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
                                                                                >> 8U))))), 
                                                             (0x3ffffU 
                                                              & VL_EXTENDS_II(18,8, 
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
                                                                                >> 8U)))))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld) 
                                                                  >> 1U)))))))) 
                            + VL_EXTENDS_II(19,18, 
                                            (0x3ffffU 
                                             & (VL_MULS_III(18, 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
                                                                                >> 0x10U))))), 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
                                                                                >> 0x10U)))))) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld) 
                                                                 >> 2U)))))))) 
                           + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (VL_MULS_III(18, 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
                                                                                >> 0x18U))))), 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
                                                                                >> 0x18U)))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld) 
                                                                       >> 3U)))))))) 
                          + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                  & (VL_MULS_III(18, 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
                                                                                >> 0x20U))))), 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
                                                                                >> 0x20U)))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld) 
                                                                      >> 4U)))))))) 
                         + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (VL_MULS_III(18, 
                                                                (0x3ffffU 
                                                                 & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
                                                                                >> 0x28U))))), 
                                                                (0x3ffffU 
                                                                 & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
                                                                                >> 0x28U)))))) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld) 
                                                                     >> 5U)))))))) 
                        + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                & (VL_MULS_III(18, 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
                                                                                >> 0x30U))))), 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
                                                                                >> 0x30U)))))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld) 
                                                                    >> 6U)))))))) 
                       + VL_EXTENDS_II(19,18, (0x3ffffU 
                                               & (VL_MULS_III(18, 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
                                                                                >> 0x38U))))), 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
                                                                                >> 0x38U)))))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld) 
                                                                   >> 7U)))))))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__sum_out 
        = (0x7ffffU & (((((((VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (VL_MULS_III(18, 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data)))), 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld))))))) 
                             + VL_EXTENDS_II(19,18, 
                                             (0x3ffffU 
                                              & (VL_MULS_III(18, 
                                                             (0x3ffffU 
                                                              & VL_EXTENDS_II(18,8, 
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
                                                                                >> 8U))))), 
                                                             (0x3ffffU 
                                                              & VL_EXTENDS_II(18,8, 
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
                                                                                >> 8U)))))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld) 
                                                                  >> 1U)))))))) 
                            + VL_EXTENDS_II(19,18, 
                                            (0x3ffffU 
                                             & (VL_MULS_III(18, 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
                                                                                >> 0x10U))))), 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
                                                                                >> 0x10U)))))) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld) 
                                                                 >> 2U)))))))) 
                           + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (VL_MULS_III(18, 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
                                                                                >> 0x18U))))), 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
                                                                                >> 0x18U)))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld) 
                                                                       >> 3U)))))))) 
                          + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                  & (VL_MULS_III(18, 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
                                                                                >> 0x20U))))), 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
                                                                                >> 0x20U)))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld) 
                                                                      >> 4U)))))))) 
                         + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (VL_MULS_III(18, 
                                                                (0x3ffffU 
                                                                 & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
                                                                                >> 0x28U))))), 
                                                                (0x3ffffU 
                                                                 & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
                                                                                >> 0x28U)))))) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld) 
                                                                     >> 5U)))))))) 
                        + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                & (VL_MULS_III(18, 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
                                                                                >> 0x30U))))), 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
                                                                                >> 0x30U)))))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld) 
                                                                    >> 6U)))))))) 
                       + VL_EXTENDS_II(19,18, (0x3ffffU 
                                               & (VL_MULS_III(18, 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
                                                                                >> 0x38U))))), 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
                                                                                >> 0x38U)))))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld) 
                                                                   >> 7U)))))))));
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
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en_w 
        = (1U & (((~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en)) 
                  & ((8U == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d0_reg_wr_en)))
                  ? (IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                             >> 0x16U)) : ((~ ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d3) 
                                               & (~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer)))) 
                                           & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__nvdla_cmac_a_d_misc_cfg_0_wren 
        = ((0xcU == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                               << 2U))) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en_w 
        = (1U & (((~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en)) 
                  & ((8U == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d1_reg_wr_en)))
                  ? (IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                             >> 0x16U)) : ((~ ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d3) 
                                               & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer))) 
                                           & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en))));
}
