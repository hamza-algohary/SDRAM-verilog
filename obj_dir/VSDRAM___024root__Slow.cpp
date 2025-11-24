// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSDRAM.h for the primary calling header

#include "VSDRAM__pch.h"
#include "VSDRAM__Syms.h"
#include "VSDRAM___024root.h"

void VSDRAM___024root___ctor_var_reset(VSDRAM___024root* vlSelf);

VSDRAM___024root::VSDRAM___024root(VSDRAM__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSDRAM___024root___ctor_var_reset(this);
}

void VSDRAM___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VSDRAM___024root::~VSDRAM___024root() {
}
