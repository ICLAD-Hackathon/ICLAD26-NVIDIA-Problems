// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VKMAC_REDUCED_TB__SYMS_H_
#define VERILATED_VKMAC_REDUCED_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vkmac_reduced_tb.h"

// INCLUDE MODULE CLASSES
#include "Vkmac_reduced_tb___024root.h"
#include "Vkmac_reduced_tb_digestpp_dpi_pkg.h"
#include "Vkmac_reduced_tb_lc_ctrl_reg_pkg.h"
#include "Vkmac_reduced_tb_csrng_reg_pkg.h"
#include "Vkmac_reduced_tb_edn_reg_pkg.h"
#include "Vkmac_reduced_tb_keymgr_reg_pkg.h"
#include "Vkmac_reduced_tb_kmac_reg_pkg.h"
#include "Vkmac_reduced_tb_prim_sha2_pkg.h"
#include "Vkmac_reduced_tb_sha3_pkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vkmac_reduced_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vkmac_reduced_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vkmac_reduced_tb___024root     TOP;
    Vkmac_reduced_tb_csrng_reg_pkg TOP__csrng_reg_pkg;
    Vkmac_reduced_tb_digestpp_dpi_pkg TOP__digestpp_dpi_pkg;
    Vkmac_reduced_tb_edn_reg_pkg   TOP__edn_reg_pkg;
    Vkmac_reduced_tb_keymgr_reg_pkg TOP__keymgr_reg_pkg;
    Vkmac_reduced_tb_kmac_reg_pkg  TOP__kmac_reg_pkg;
    Vkmac_reduced_tb_lc_ctrl_reg_pkg TOP__lc_ctrl_reg_pkg;
    Vkmac_reduced_tb_prim_sha2_pkg TOP__prim_sha2_pkg;
    Vkmac_reduced_tb_sha3_pkg      TOP__sha3_pkg;

    // SCOPE NAMES
    VerilatedScope __Vscope_kmac_reduced_tb;

    // CONSTRUCTORS
    Vkmac_reduced_tb__Syms(VerilatedContext* contextp, const char* namep, Vkmac_reduced_tb* modelp);
    ~Vkmac_reduced_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
