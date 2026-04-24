// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VPRIM_ASCON_DUPLEX_TB_H_
#define VERILATED_VPRIM_ASCON_DUPLEX_TB_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vprim_ascon_duplex_tb__Syms;
class Vprim_ascon_duplex_tb___024root;
class VerilatedFstC;
class Vprim_ascon_duplex_tb_lc_ctrl_reg_pkg;
class Vprim_ascon_duplex_tb_ascon_model_dpi_pkg;
class Vprim_ascon_duplex_tb_prim_sha2_pkg;


// This class is the main interface to the Verilated model
class Vprim_ascon_duplex_tb VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vprim_ascon_duplex_tb__Syms* const vlSymsp;

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
    Vprim_ascon_duplex_tb_lc_ctrl_reg_pkg* const __PVT__lc_ctrl_reg_pkg;
    Vprim_ascon_duplex_tb_ascon_model_dpi_pkg* const __PVT__ascon_model_dpi_pkg;
    Vprim_ascon_duplex_tb_prim_sha2_pkg* const __PVT__prim_sha2_pkg;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vprim_ascon_duplex_tb___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vprim_ascon_duplex_tb(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vprim_ascon_duplex_tb(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vprim_ascon_duplex_tb();
  private:
    VL_UNCOPYABLE(Vprim_ascon_duplex_tb);  ///< Copying not allowed

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
