// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkmac_reduced_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vkmac_reduced_tb___024root.h"

VL_ATTR_COLD void Vkmac_reduced_tb___024root___settle__TOP__7(Vkmac_reduced_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkmac_reduced_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkmac_reduced_tb___024root___settle__TOP__7\n"); );
    // Body
    if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT____Vcellinp__u_prim_trivium__en_i) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[0U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[0U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[1U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[1U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[2U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[2U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[3U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[3U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[4U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[4U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[5U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[5U];
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[0U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[0U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[1U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[1U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[2U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[2U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[3U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[3U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[4U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[4U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[5U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[5U];
    }
    if ((5U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_q))) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[5U] 
            = (0x1ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed);
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT____Vlvbound_h06762e8a__0 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed;
        if ((0xb0U >= (0xffU & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_q) 
                                << 5U)))) {
            VL_ASSIGNSEL_WI(177,32,(0xffU & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_q) 
                                             << 5U)), vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT____Vlvbound_h06762e8a__0);
        }
    }
    if ((0U != (((((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[0U] 
                    | vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[1U]) 
                   | vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[2U]) 
                  | vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[3U]) 
                 | vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[4U]) 
                | vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[5U]))) {
        if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__wr_en_seed) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[0U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[0U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[1U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[1U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[2U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[2U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[3U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[3U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[4U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[4U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[5U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[5U];
        } else if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT____Vcellinp__u_prim_trivium__en_i) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[0U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[0U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[1U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[1U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[2U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[2U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[3U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[3U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[4U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[4U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[5U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[5U];
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[0U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[0U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[1U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[1U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[2U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[2U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[3U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[3U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[4U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[4U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[5U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[5U];
        }
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[0U] = 0x74f1713aU;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[1U] = 0xc32d580fU;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[2U] = 0x4743b3c7U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[3U] = 0x23c5a4cfU;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[4U] = 0xc132b57U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[5U] = 0x82a3U;
    }
}

VL_ATTR_COLD void Vkmac_reduced_tb___024root___initial__TOP__1(Vkmac_reduced_tb___024root* vlSelf);

VL_ATTR_COLD void Vkmac_reduced_tb___024root___eval_initial(Vkmac_reduced_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkmac_reduced_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkmac_reduced_tb___024root___eval_initial\n"); );
    // Body
    Vkmac_reduced_tb___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vkmac_reduced_tb___024root___settle__TOP__2(Vkmac_reduced_tb___024root* vlSelf);
VL_ATTR_COLD void Vkmac_reduced_tb___024root___settle__TOP__3(Vkmac_reduced_tb___024root* vlSelf);
VL_ATTR_COLD void Vkmac_reduced_tb___024root___settle__TOP__4(Vkmac_reduced_tb___024root* vlSelf);
VL_ATTR_COLD void Vkmac_reduced_tb___024root___settle__TOP__5(Vkmac_reduced_tb___024root* vlSelf);
VL_ATTR_COLD void Vkmac_reduced_tb___024root___settle__TOP__6(Vkmac_reduced_tb___024root* vlSelf);

VL_ATTR_COLD void Vkmac_reduced_tb___024root___eval_settle(Vkmac_reduced_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkmac_reduced_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkmac_reduced_tb___024root___eval_settle\n"); );
    // Body
    Vkmac_reduced_tb___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vkmac_reduced_tb___024root___settle__TOP__3(vlSelf);
    Vkmac_reduced_tb___024root___settle__TOP__4(vlSelf);
    Vkmac_reduced_tb___024root___settle__TOP__5(vlSelf);
    Vkmac_reduced_tb___024root___settle__TOP__6(vlSelf);
    Vkmac_reduced_tb___024root___settle__TOP__7(vlSelf);
}

VL_ATTR_COLD void Vkmac_reduced_tb___024root___final(Vkmac_reduced_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkmac_reduced_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkmac_reduced_tb___024root___final\n"); );
}

VL_ATTR_COLD void Vkmac_reduced_tb___024root___ctor_var_reset(Vkmac_reduced_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkmac_reduced_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkmac_reduced_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->test_done_o = VL_RAND_RESET_I(1);
    vlSelf->test_passed_o = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->kmac_reduced_tb__DOT__msg[__Vi0]);
    }
    vlSelf->kmac_reduced_tb__DOT__msg_valid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__state[__Vi0]);
    }
    vlSelf->kmac_reduced_tb__DOT__sha3_start = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__sha3_process = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__done = VL_RAND_RESET_I(4);
    vlSelf->kmac_reduced_tb__DOT__absorbed = VL_RAND_RESET_I(4);
    vlSelf->kmac_reduced_tb__DOT__sha3_fsm = VL_RAND_RESET_I(3);
    vlSelf->kmac_reduced_tb__DOT__entropy_ready = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__entropy_refresh_req = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__entropy = VL_RAND_RESET_I(32);
    vlSelf->kmac_reduced_tb__DOT__entropy_req = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT____Vcellout__u_kmac_reduced__state_o[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->kmac_reduced_tb__DOT____Vcellinp__u_kmac_reduced__msg_i[__Vi0]);
    }
    vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_d = VL_RAND_RESET_I(3);
    vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q = VL_RAND_RESET_I(3);
    vlSelf->kmac_reduced_tb__DOT__entropy_req_q = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__reseed_count_d = VL_RAND_RESET_I(8);
    vlSelf->kmac_reduced_tb__DOT__reseed_count_q = VL_RAND_RESET_I(8);
    vlSelf->kmac_reduced_tb__DOT__reseed_count_increment = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__msg_handshake = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__test_done = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__count_d = VL_RAND_RESET_I(10);
    vlSelf->kmac_reduced_tb__DOT__count_q = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(128, vlSelf->kmac_reduced_tb__DOT__input_msg);
    VL_RAND_RESET_W(256, vlSelf->kmac_reduced_tb__DOT__output_digest);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->kmac_reduced_tb__DOT__input_msg_bytes[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(128, vlSelf->kmac_reduced_tb__DOT__input_msg_bytes_packed);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(256, vlSelf->kmac_reduced_tb__DOT__output_digest_bytes_packed);
    VL_RAND_RESET_W(256, vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_packed);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_valid_shares = VL_RAND_RESET_I(2);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_ready_shares = VL_RAND_RESET_I(2);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_ready = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_msg_unpacker_share0__rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_msg_unpacker_share0__wready_o = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_msg_unpacker_share1__rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_msg_unpacker_share1__wready_o = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_en = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_masked[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__sha3_rand_valid = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_prim_lc_sync__lc_en_o = VL_RAND_RESET_I(8);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__sha3_err = VL_RAND_RESET_Q(33);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__entropy_state_error = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_sha3__state_o[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellinp__u_sha3__msg_data_i[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_entropy__err_o = VL_RAND_RESET_Q(33);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__load_data = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__clear_status = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__depth_q = VL_RAND_RESET_I(2);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__depth_d = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_q);
    VL_RAND_RESET_W(128, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_d);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__clr_q = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__gen_unpack_mode__DOT__pull_data = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__gen_unpack_mode__DOT__ptr_q = VL_RAND_RESET_I(2);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__gen_unpack_mode__DOT__ptr_d = VL_RAND_RESET_I(2);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__load_data = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__clear_status = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__depth_q = VL_RAND_RESET_I(2);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__depth_d = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_q);
    VL_RAND_RESET_W(128, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_d);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__clr_q = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__gen_unpack_mode__DOT__pull_data = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__gen_unpack_mode__DOT__ptr_q = VL_RAND_RESET_I(2);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__gen_unpack_mode__DOT__ptr_d = VL_RAND_RESET_I(2);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_prim_lc_sync__DOT__lc_en = VL_RAND_RESET_I(4);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_prim_lc_sync__DOT__gen_buffs__BRA__0__KET____DOT__lc_en_out = VL_RAND_RESET_I(4);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_prim_lc_sync__DOT__gen_buffs__BRA__1__KET____DOT__lc_en_out = VL_RAND_RESET_I(4);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_prim_lc_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__intq = VL_RAND_RESET_I(4);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__state_valid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__state[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__state_guarded[__Vi0]);
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__mux_sel = VL_RAND_RESET_I(3);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__absorbed = VL_RAND_RESET_I(4);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__squeezing = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__processing = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d = VL_RAND_RESET_I(6);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_start = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_process = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_done = VL_RAND_RESET_I(4);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3_state_error = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_valid = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_addr = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_run = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_keccak_run = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_run_req_d = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_run_req_q = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_triggered_d = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_triggered_q = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_complete = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellout__u_pad__keccak_data_o[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellinp__u_pad__msg_data_i[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellout__u_keccak__state_o[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellinp__u_keccak__data_i[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw = VL_RAND_RESET_I(6);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux = VL_RAND_RESET_I(3);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__inc_sentmsg = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__clr_sentmsg = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__fsm_keccak_valid = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__hold_msg = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__clr_msgbuf = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__keccak_ack = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__process_latched = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__st_d = VL_RAND_RESET_I(7);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__absorbed_d = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__prefix_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__zero_with_endbit[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf[__Vi0] = VL_RAND_RESET_Q(56);
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb = VL_RAND_RESET_I(7);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__start_valid = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__process_valid = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__absorb_valid = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__done_valid = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_d = VL_RAND_RESET_I(10);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_d_committed = VL_RAND_RESET_I(10);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q = VL_RAND_RESET_I(10);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__err_q = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt = VL_RAND_RESET_I(6);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = VL_RAND_RESET_I(5);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt = VL_RAND_RESET_I(6);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = VL_RAND_RESET_I(5);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw = VL_RAND_RESET_I(7);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__update_storage = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_storage = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__xor_message = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__phase_sel = VL_RAND_RESET_I(4);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__low_then_high_d = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__low_then_high_q = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_out_low_q = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_in_low_d = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_in_low_q = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_in_rand_ext_d = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_in_rand_ext_q = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_update = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__inc_rnd_num = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_rnd_num = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__complete_d = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_out[__Vi0]);
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_update = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_consumed = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_st_d = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__storage[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__storage_d[__Vi0]);
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_storage_error = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT____Vcellout__u_keccak_p__s_o[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT____Vcellinp__u_keccak_p__s_i[__Vi0]);
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT____Vlvbound_hd648d4d1__0 = VL_RAND_RESET_Q(64);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT____Vlvbound_hd648d4d1__1 = VL_RAND_RESET_Q(64);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__state_in[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__state_out[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__rho_data[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__pi_data[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__chi_data[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__iota_data[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__phase1_in[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__phase1_out[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__phase2_in[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__phase2_out[__Vi0]);
    }
    VL_RAND_RESET_W(800, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd);
    VL_RAND_RESET_W(800, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet0[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet1[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet2[__Vi0]);
    }
    VL_RAND_RESET_W(160, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a0);
    VL_RAND_RESET_W(160, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a1);
    VL_RAND_RESET_W(160, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b0);
    VL_RAND_RESET_W(160, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet0[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet1[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet2[__Vi0]);
    }
    VL_RAND_RESET_W(160, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a0);
    VL_RAND_RESET_W(160, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a1);
    VL_RAND_RESET_W(160, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b0);
    VL_RAND_RESET_W(160, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet0[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet1[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet2[__Vi0]);
    }
    VL_RAND_RESET_W(160, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a0);
    VL_RAND_RESET_W(160, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a1);
    VL_RAND_RESET_W(160, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b0);
    VL_RAND_RESET_W(160, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet0[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet1[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet2[__Vi0]);
    }
    VL_RAND_RESET_W(160, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a0);
    VL_RAND_RESET_W(160, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a1);
    VL_RAND_RESET_W(160, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b0);
    VL_RAND_RESET_W(160, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet0[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet1[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet2[__Vi0]);
    }
    VL_RAND_RESET_W(160, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a0);
    VL_RAND_RESET_W(160, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a1);
    VL_RAND_RESET_W(160, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b0);
    VL_RAND_RESET_W(160, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b1);
    VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_rho__BRA__0__KET____DOT__rho_out);
    VL_RAND_RESET_W(1600, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_rho__BRA__1__KET____DOT__rho_out);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h92efc21d__0 = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_haf3c3dc7__0 = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h9db66a18__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o);
    VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o);
    VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o);
    VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o);
    VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o);
    VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o);
    VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o);
    VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o);
    VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o);
    VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o);
    VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o);
    VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o);
    VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o);
    VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o);
    VL_RAND_RESET_W(320, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_d = VL_RAND_RESET_I(10);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_d_committed = VL_RAND_RESET_I(10);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_q = VL_RAND_RESET_I(10);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__err_q = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt = VL_RAND_RESET_I(6);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = VL_RAND_RESET_I(5);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt = VL_RAND_RESET_I(6);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = VL_RAND_RESET_I(5);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_enable = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_update = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_expired = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_value = VL_RAND_RESET_I(16);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prescaler_cnt = VL_RAND_RESET_I(10);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_en = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_done = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_req = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_ack = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed = VL_RAND_RESET_I(32);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(800, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data);
    VL_RAND_RESET_W(800, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted);
    VL_RAND_RESET_W(800, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__data_update = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__aux_rand_d = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__aux_rand_q = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__aux_update = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en_rand_d = VL_RAND_RESET_I(4);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en_rand_q = VL_RAND_RESET_I(4);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_valid_set = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_valid_clear = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__mode_latch = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__mode_q = VL_RAND_RESET_I(2);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__entropy_req = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__entropy_req_hold_q = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__non_zero_wait_timer_limit = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__wait_timer_prescaler_d = VL_RAND_RESET_I(10);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__threshold_hit_q = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__threshold_hit_clr = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__hash_progress_q = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__hash_cnt_clr = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT____Vcellinp__u_prim_trivium__en_i = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__st_d = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(800, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__perm_test);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__p_perm_check__DOT__unnamedblk1__DOT__k = 0;
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT____Vlvbound_h9c2afe66__0 = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__cnt_d = VL_RAND_RESET_I(20);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__cnt_d_committed = VL_RAND_RESET_I(20);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__cnt_q = VL_RAND_RESET_I(20);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__err_q = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = VL_RAND_RESET_I(10);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(177, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d);
    VL_RAND_RESET_W(177, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q);
    VL_RAND_RESET_W(177, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update);
    VL_RAND_RESET_W(177, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__seed_req_d = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__seed_req_q = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__wr_en_seed = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_d = VL_RAND_RESET_I(3);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_q = VL_RAND_RESET_I(3);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__gen_update_and_output_bivium__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT____Vlvbound_h8135fa8c__0 = VL_RAND_RESET_I(1);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT____Vlvbound_h06762e8a__0 = VL_RAND_RESET_I(32);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw = VL_RAND_RESET_I(10);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_entropy_configured__DOT__gen_no_flops__DOT__unused_logic = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bytes);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(256, vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(256, vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed);
    vlSelf->__Vfunc_sparse2logic__7__Vfuncout = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_mubi4_test_true_strict__8__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mubi4_test_true_strict__8__val = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_mubi4_test_true_strict__9__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mubi4_test_true_strict__9__val = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_mubi4_test_true_loose__11__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mubi4_test_true_loose__11__val = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_mubi4_test_true_loose__12__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mubi4_test_true_loose__12__val = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_mubi4_test_true_loose__13__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mubi4_test_true_loose__13__val = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_mubi4_test_true_loose__14__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mubi4_test_true_loose__14__val = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_mubi4_test_true_strict__21__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mubi4_test_true_strict__21__val = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_mubi4_test_false_loose__23__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mubi4_test_false_loose__23__val = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(1600, vlSelf->__Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__bitarray_to_box__24__box);
    VL_RAND_RESET_W(1600, vlSelf->__Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__box_to_bitarray__25__bitarray);
    VL_RAND_RESET_W(1600, vlSelf->__Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__bitarray_to_box__26__box);
    VL_RAND_RESET_W(1600, vlSelf->__Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__box_to_bitarray__27__bitarray);
    VL_RAND_RESET_W(320, vlSelf->__Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__28__c);
    VL_RAND_RESET_W(320, vlSelf->__Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__28__d);
    VL_RAND_RESET_W(1600, vlSelf->__Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__28__result);
    VL_RAND_RESET_W(1600, vlSelf->__Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__pi__29__result);
    VL_RAND_RESET_W(320, vlSelf->__Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__30__c);
    VL_RAND_RESET_W(320, vlSelf->__Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__30__d);
    VL_RAND_RESET_W(1600, vlSelf->__Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__30__result);
    VL_RAND_RESET_W(1600, vlSelf->__Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__pi__31__result);
    vlSelf->__Vfunc_bivium_generate_key_stream__44__Vfuncout = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(177, vlSelf->__Vfunc_bivium_generate_key_stream__44__state);
    vlSelf->__Vfunc_bivium_generate_key_stream__44__key = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_bivium_generate_key_stream__44__add_65_92 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_bivium_generate_key_stream__44__add_161_176 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(177, vlSelf->__Vfunc_bivium_update_state__45__Vfuncout);
    VL_RAND_RESET_W(177, vlSelf->__Vfunc_bivium_update_state__45__in);
    VL_RAND_RESET_W(177, vlSelf->__Vfunc_bivium_update_state__45__out);
    vlSelf->__Vfunc_bivium_update_state__45__mul_90_91 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_bivium_update_state__45__mul_174_175 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_bivium_update_state__45__add_65_92 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_bivium_update_state__45__add_161_176 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
