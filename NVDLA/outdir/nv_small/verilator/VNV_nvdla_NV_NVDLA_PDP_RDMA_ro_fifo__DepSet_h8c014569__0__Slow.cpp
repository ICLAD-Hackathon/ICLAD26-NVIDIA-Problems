// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___ctor_var_reset(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___ctor_var_reset\n"); );
    // Body
    vlSelf->nvdla_core_clk = VL_RAND_RESET_I(1);
    vlSelf->nvdla_core_rstn = VL_RAND_RESET_I(1);
    vlSelf->ro_wr_prdy = VL_RAND_RESET_I(1);
    vlSelf->ro_wr_pvld = VL_RAND_RESET_I(1);
    vlSelf->ro_wr_pd = VL_RAND_RESET_I(8);
    vlSelf->ro_rd_prdy = VL_RAND_RESET_I(1);
    vlSelf->ro_rd_pvld = VL_RAND_RESET_I(1);
    vlSelf->ro_rd_pd = VL_RAND_RESET_I(8);
    vlSelf->pwrbus_ram_pd = VL_RAND_RESET_I(32);
    vlSelf->__PVT__nvdla_core_clk_mgated = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wr_reserving = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ro_wr_busy_int = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ro_wr_count = VL_RAND_RESET_I(3);
    vlSelf->__PVT__wr_count_next_no_wr_popping = VL_RAND_RESET_I(3);
    vlSelf->__PVT__wr_count_next = VL_RAND_RESET_I(3);
    vlSelf->__PVT__wr_count_next_is_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ro_wr_adr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rd_popping = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ro_rd_adr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__ram_we = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__ram__ra = VL_RAND_RESET_I(3);
    vlSelf->__PVT__rd_adr_next_popping = VL_RAND_RESET_I(2);
    vlSelf->__PVT__ro_rd_pvld_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ro_rd_pvld_int = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ro_rd_count_p = VL_RAND_RESET_I(3);
    vlSelf->__PVT__rd_count_p_next = VL_RAND_RESET_I(3);
    vlSelf->__PVT__rd_req_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram__DOT__ram_ff0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__ram__DOT__ram_ff1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__ram__DOT__ram_ff2 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__ram__DOT__ram_ff3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__ro_wr_adr = VL_RAND_RESET_I(2);
}
