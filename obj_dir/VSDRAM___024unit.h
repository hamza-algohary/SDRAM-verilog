// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSDRAM.h for the primary calling header

#ifndef VERILATED_VSDRAM___024UNIT_H_
#define VERILATED_VSDRAM___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VSDRAM__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSDRAM___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ get_row__Vstatic__i;
    IData/*31:0*/ put_row__Vstatic__i;

    // INTERNAL VARIABLES
    VSDRAM__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSDRAM___024unit(VSDRAM__Syms* symsp, const char* v__name);
    ~VSDRAM___024unit();
    VL_UNCOPYABLE(VSDRAM___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
