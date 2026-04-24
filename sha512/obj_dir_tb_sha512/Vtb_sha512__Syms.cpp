// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_sha512__Syms.h"
#include "Vtb_sha512.h"
#include "Vtb_sha512___024root.h"

// FUNCTIONS
Vtb_sha512__Syms::~Vtb_sha512__Syms()
{
}

Vtb_sha512__Syms::Vtb_sha512__Syms(VerilatedContext* contextp, const char* namep,Vtb_sha512* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
