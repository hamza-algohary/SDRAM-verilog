// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSDRAM.h for the primary calling header

#include "VSDRAM__pch.h"
#include "VSDRAM___024unit.h"

VL_ATTR_COLD void VSDRAM___024unit___ctor_var_reset(VSDRAM___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSDRAM___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->get_row__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->put_row__Vstatic__i = VL_RAND_RESET_I(32);
}
