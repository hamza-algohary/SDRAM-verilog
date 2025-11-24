// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSDRAM.h for the primary calling header

#include "VSDRAM__pch.h"
#include "VSDRAM__Syms.h"
#include "VSDRAM___024unit.h"

void VSDRAM___024unit___ctor_var_reset(VSDRAM___024unit* vlSelf);

VSDRAM___024unit::VSDRAM___024unit(VSDRAM__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSDRAM___024unit___ctor_var_reset(this);
}

void VSDRAM___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VSDRAM___024unit::~VSDRAM___024unit() {
}
