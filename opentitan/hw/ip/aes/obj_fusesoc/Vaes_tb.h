// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VAES_TB_H_
#define VERILATED_VAES_TB_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vaes_tb__Syms;
class Vaes_tb___024root;
class VerilatedFstC;
class Vaes_tb_lc_ctrl_reg_pkg;
class Vaes_tb_csrng_reg_pkg;
class Vaes_tb_edn_reg_pkg;
class Vaes_tb_keymgr_reg_pkg;
class Vaes_tb_aes_model_dpi_pkg;
class Vaes_tb_aes_tb_pkg;
class Vaes_tb_prim_sha2_pkg;
class Vaes_tb_aes_reg_pkg;
class Vaes_tb_aes_sbox_canright_pkg;
class Vaes_tb_aes_sbox__S4;
class Vaes_tb_prim_onehot_check__O3_ABz3_Sz3;
class Vaes_tb_prim_onehot_mux__W80_I3;


// This class is the main interface to the Verilated model
class Vaes_tb VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vaes_tb__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_ni,0,0);
    VL_OUT8(&test_done_o,0,0);
    VL_OUT8(&test_passed_o,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vaes_tb_lc_ctrl_reg_pkg* const __PVT__lc_ctrl_reg_pkg;
    Vaes_tb_csrng_reg_pkg* const __PVT__csrng_reg_pkg;
    Vaes_tb_edn_reg_pkg* const __PVT__edn_reg_pkg;
    Vaes_tb_keymgr_reg_pkg* const __PVT__keymgr_reg_pkg;
    Vaes_tb_aes_model_dpi_pkg* const __PVT__aes_model_dpi_pkg;
    Vaes_tb_aes_tb_pkg* const __PVT__aes_tb_pkg;
    Vaes_tb_prim_sha2_pkg* const __PVT__prim_sha2_pkg;
    Vaes_tb_aes_reg_pkg* const __PVT__aes_reg_pkg;
    Vaes_tb_aes_sbox_canright_pkg* const __PVT__aes_sbox_canright_pkg;
    Vaes_tb_aes_sbox__S4* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__0__KET____DOT__u_aes_sbox_i;
    Vaes_tb_aes_sbox__S4* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__1__KET____DOT__u_aes_sbox_i;
    Vaes_tb_aes_sbox__S4* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i;
    Vaes_tb_aes_sbox__S4* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i;
    Vaes_tb_prim_onehot_check__O3_ABz3_Sz3* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_check_add_in_sel;
    Vaes_tb_prim_onehot_mux__W80_I3* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in;
    Vaes_tb_prim_onehot_check__O3_ABz3_Sz3* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_check_add_in_sel;
    Vaes_tb_prim_onehot_mux__W80_I3* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in;
    Vaes_tb_prim_onehot_check__O3_ABz3_Sz3* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__u_prim_onehot_check_gf_mult1_in_sel;
    Vaes_tb_prim_onehot_mux__W80_I3* const __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__u_prim_onehot_mux_gf_mult1_op_b;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vaes_tb___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vaes_tb(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vaes_tb(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vaes_tb();
  private:
    VL_UNCOPYABLE(Vaes_tb);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedFstC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
