// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPRIM_ASCON_DUPLEX_TB__SYMS_H_
#define VERILATED_VPRIM_ASCON_DUPLEX_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vprim_ascon_duplex_tb.h"

// INCLUDE MODULE CLASSES
#include "Vprim_ascon_duplex_tb___024root.h"
#include "Vprim_ascon_duplex_tb_lc_ctrl_reg_pkg.h"
#include "Vprim_ascon_duplex_tb_ascon_model_dpi_pkg.h"
#include "Vprim_ascon_duplex_tb_prim_sha2_pkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vprim_ascon_duplex_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vprim_ascon_duplex_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vprim_ascon_duplex_tb___024root TOP;
    Vprim_ascon_duplex_tb_ascon_model_dpi_pkg TOP__ascon_model_dpi_pkg;
    Vprim_ascon_duplex_tb_lc_ctrl_reg_pkg TOP__lc_ctrl_reg_pkg;
    Vprim_ascon_duplex_tb_prim_sha2_pkg TOP__prim_sha2_pkg;

    // SCOPE NAMES
    VerilatedScope __Vscope_prim_ascon_duplex_tb;
    VerilatedScope __Vscope_prim_ascon_duplex_tb__C_DPI;

    // CONSTRUCTORS
    Vprim_ascon_duplex_tb__Syms(VerilatedContext* contextp, const char* namep, Vprim_ascon_duplex_tb* modelp);
    ~Vprim_ascon_duplex_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
