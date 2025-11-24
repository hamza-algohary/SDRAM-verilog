// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSDRAM.h for the primary calling header

#ifndef VERILATED_VSDRAM___024ROOT_H_
#define VERILATED_VSDRAM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class VSDRAM___024unit;


class VSDRAM__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSDRAM___024root final : public VerilatedModule {
  public:
    // CELLS
    VSDRAM___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_sdram__DOT__clock;
    CData/*3:0*/ tb_sdram__DOT__partial_address_bus;
    CData/*0:0*/ tb_sdram__DOT__chip_enable_not;
    CData/*0:0*/ tb_sdram__DOT__write_not;
    CData/*0:0*/ tb_sdram__DOT__ras_not;
    CData/*0:0*/ tb_sdram__DOT__cas_not;
    CData/*7:0*/ tb_sdram__DOT__data_out;
    CData/*7:0*/ tb_sdram__DOT__data;
    CData/*0:0*/ tb_sdram__DOT__drive_data;
    CData/*7:0*/ tb_sdram__DOT__data__strong__out1;
    CData/*7:0*/ tb_sdram__DOT__dut__DOT__remaining_bytes;
    CData/*2:0*/ tb_sdram__DOT__dut__DOT__state;
    CData/*3:0*/ tb_sdram__DOT__dut__DOT__last_refreshed_row;
    CData/*3:0*/ tb_sdram__DOT__dut__DOT__row_address;
    CData/*3:0*/ tb_sdram__DOT__dut__DOT__col_address;
    CData/*7:0*/ tb_sdram__DOT__dut__DOT__output_data_register;
    CData/*7:0*/ tb_sdram__DOT__dut__DOT__input_data_register;
    CData/*2:0*/ tb_sdram__DOT__dut__DOT__command;
    CData/*0:0*/ tb_sdram__DOT__dut__DOT____VdfgTmp_hccf8a427__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sdram__DOT__clock__0;
    CData/*0:0*/ __VactContinue;
    VlWide<4>/*127:0*/ tb_sdram__DOT__dut__DOT__selected_row;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 16>, 16> tb_sdram__DOT__dut__DOT__memory;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc3102cc0__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSDRAM__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSDRAM___024root(VSDRAM__Syms* symsp, const char* v__name);
    ~VSDRAM___024root();
    VL_UNCOPYABLE(VSDRAM___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
