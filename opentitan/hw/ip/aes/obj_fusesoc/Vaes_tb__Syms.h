// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAES_TB__SYMS_H_
#define VERILATED_VAES_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vaes_tb.h"

// INCLUDE MODULE CLASSES
#include "Vaes_tb___024root.h"
#include "Vaes_tb_lc_ctrl_reg_pkg.h"
#include "Vaes_tb_csrng_reg_pkg.h"
#include "Vaes_tb_edn_reg_pkg.h"
#include "Vaes_tb_keymgr_reg_pkg.h"
#include "Vaes_tb___024unit.h"
#include "Vaes_tb_aes_model_dpi_pkg.h"
#include "Vaes_tb_aes_tb_pkg.h"
#include "Vaes_tb_prim_sha2_pkg.h"
#include "Vaes_tb_prim_onehot_mux__W80_I3.h"
#include "Vaes_tb_prim_onehot_check__O3_ABz3_Sz3.h"
#include "Vaes_tb_aes_sbox__S4.h"
#include "Vaes_tb_aes_reg_pkg.h"
#include "Vaes_tb_aes_sbox_canright_pkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vaes_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vaes_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vaes_tb___024root              TOP;
    Vaes_tb_aes_model_dpi_pkg      TOP__aes_model_dpi_pkg;
    Vaes_tb_aes_reg_pkg            TOP__aes_reg_pkg;
    Vaes_tb_aes_sbox_canright_pkg  TOP__aes_sbox_canright_pkg;
    Vaes_tb_prim_onehot_check__O3_ABz3_Sz3 TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__u_prim_onehot_check_gf_mult1_in_sel;
    Vaes_tb_prim_onehot_mux__W80_I3 TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__u_prim_onehot_mux_gf_mult1_op_b;
    Vaes_tb_prim_onehot_check__O3_ABz3_Sz3 TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_check_add_in_sel;
    Vaes_tb_prim_onehot_mux__W80_I3 TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in;
    Vaes_tb_prim_onehot_check__O3_ABz3_Sz3 TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_check_add_in_sel;
    Vaes_tb_prim_onehot_mux__W80_I3 TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in;
    Vaes_tb_aes_sbox__S4           TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__0__KET____DOT__u_aes_sbox_i;
    Vaes_tb_aes_sbox__S4           TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__1__KET____DOT__u_aes_sbox_i;
    Vaes_tb_aes_sbox__S4           TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i;
    Vaes_tb_aes_sbox__S4           TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i;
    Vaes_tb_aes_sbox__S4           TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4           TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4           TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4           TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4           TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4           TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4           TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4           TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4           TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4           TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4           TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4           TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4           TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4           TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4           TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4           TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_tb_pkg             TOP__aes_tb_pkg;
    Vaes_tb_csrng_reg_pkg          TOP__csrng_reg_pkg;
    Vaes_tb_edn_reg_pkg            TOP__edn_reg_pkg;
    Vaes_tb_keymgr_reg_pkg         TOP__keymgr_reg_pkg;
    Vaes_tb_lc_ctrl_reg_pkg        TOP__lc_ctrl_reg_pkg;
    Vaes_tb_prim_sha2_pkg          TOP__prim_sha2_pkg;

    // SCOPE NAMES
    VerilatedScope __Vscope_aes_tb__u_aes_tb_c_dpi;

    // CONSTRUCTORS
    Vaes_tb__Syms(VerilatedContext* contextp, const char* namep, Vaes_tb* modelp);
    ~Vaes_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
