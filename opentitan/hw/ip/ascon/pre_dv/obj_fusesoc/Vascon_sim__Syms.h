// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VASCON_SIM__SYMS_H_
#define VERILATED_VASCON_SIM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vascon_sim.h"

// INCLUDE MODULE CLASSES
#include "Vascon_sim___024root.h"
#include "Vascon_sim_lc_ctrl_reg_pkg.h"
#include "Vascon_sim_csrng_reg_pkg.h"
#include "Vascon_sim_edn_reg_pkg.h"
#include "Vascon_sim_keymgr_reg_pkg.h"
#include "Vascon_sim_ascon_reg_pkg.h"
#include "Vascon_sim_prim_sha2_pkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vascon_sim__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vascon_sim* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vascon_sim___024root           TOP;
    Vascon_sim_ascon_reg_pkg       TOP__ascon_reg_pkg;
    Vascon_sim_csrng_reg_pkg       TOP__csrng_reg_pkg;
    Vascon_sim_edn_reg_pkg         TOP__edn_reg_pkg;
    Vascon_sim_keymgr_reg_pkg      TOP__keymgr_reg_pkg;
    Vascon_sim_lc_ctrl_reg_pkg     TOP__lc_ctrl_reg_pkg;
    Vascon_sim_prim_sha2_pkg       TOP__prim_sha2_pkg;

    // CONSTRUCTORS
    Vascon_sim__Syms(VerilatedContext* contextp, const char* namep, Vascon_sim* modelp);
    ~Vascon_sim__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
