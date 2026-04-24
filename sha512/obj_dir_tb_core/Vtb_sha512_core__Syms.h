// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_SHA512_CORE__SYMS_H_
#define VERILATED_VTB_SHA512_CORE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_sha512_core.h"

// INCLUDE MODULE CLASSES
#include "Vtb_sha512_core___024root.h"

// SYMS CLASS (contains all model state)
class Vtb_sha512_core__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_sha512_core* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_sha512_core___024root      TOP;

    // CONSTRUCTORS
    Vtb_sha512_core__Syms(VerilatedContext* contextp, const char* namep, Vtb_sha512_core* modelp);
    ~Vtb_sha512_core__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
