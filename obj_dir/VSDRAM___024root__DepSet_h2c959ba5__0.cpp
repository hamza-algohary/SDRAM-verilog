// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSDRAM.h for the primary calling header

#include "VSDRAM__pch.h"
#include "VSDRAM__Syms.h"
#include "VSDRAM___024root.h"

VL_INLINE_OPT VlCoroutine VSDRAM___024root___eval_initial__TOP__Vtiming__0(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*3:0*/ __Vtask_tb_sdram__DOT__select_row__0__row;
    __Vtask_tb_sdram__DOT__select_row__0__row = 0;
    CData/*3:0*/ __Vtask_tb_sdram__DOT__select_column__1__col;
    __Vtask_tb_sdram__DOT__select_column__1__col = 0;
    CData/*0:0*/ __Vtask_tb_sdram__DOT__select_column__1__is_read;
    __Vtask_tb_sdram__DOT__select_column__1__is_read = 0;
    CData/*7:0*/ __Vtask_tb_sdram__DOT__write_byte__2__value;
    __Vtask_tb_sdram__DOT__write_byte__2__value = 0;
    CData/*7:0*/ __Vtask_tb_sdram__DOT__write_byte__3__value;
    __Vtask_tb_sdram__DOT__write_byte__3__value = 0;
    CData/*7:0*/ __Vtask_tb_sdram__DOT__write_byte__4__value;
    __Vtask_tb_sdram__DOT__write_byte__4__value = 0;
    CData/*7:0*/ __Vtask_tb_sdram__DOT__write_byte__5__value;
    __Vtask_tb_sdram__DOT__write_byte__5__value = 0;
    CData/*3:0*/ __Vtask_tb_sdram__DOT__select_row__6__row;
    __Vtask_tb_sdram__DOT__select_row__6__row = 0;
    CData/*3:0*/ __Vtask_tb_sdram__DOT__select_column__7__col;
    __Vtask_tb_sdram__DOT__select_column__7__col = 0;
    CData/*0:0*/ __Vtask_tb_sdram__DOT__select_column__7__is_read;
    __Vtask_tb_sdram__DOT__select_column__7__is_read = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    VL_WRITEF("=== SDRAM TEST START ===\n");
    vlSelf->tb_sdram__DOT__chip_enable_not = 1U;
    vlSelf->tb_sdram__DOT__write_not = 1U;
    vlSelf->tb_sdram__DOT__ras_not = 1U;
    vlSelf->tb_sdram__DOT__cas_not = 1U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\nWriting 4 bytes to row 3, col 2...\n");
    __Vtask_tb_sdram__DOT__select_row__0__row = 3U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       38);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_sdram__DOT__partial_address_bus = __Vtask_tb_sdram__DOT__select_row__0__row;
    vlSelf->tb_sdram__DOT__chip_enable_not = 0U;
    vlSelf->tb_sdram__DOT__write_not = 1U;
    vlSelf->tb_sdram__DOT__ras_not = 0U;
    vlSelf->tb_sdram__DOT__cas_not = 1U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_sdram__DOT__ras_not = 1U;
    vlSelf->tb_sdram__DOT__partial_address_bus = 0U;
    __Vtask_tb_sdram__DOT__select_column__1__is_read = 0U;
    __Vtask_tb_sdram__DOT__select_column__1__col = 2U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       50);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_sdram__DOT__partial_address_bus = __Vtask_tb_sdram__DOT__select_column__1__col;
    vlSelf->tb_sdram__DOT__chip_enable_not = 0U;
    vlSelf->tb_sdram__DOT__write_not = __Vtask_tb_sdram__DOT__select_column__1__is_read;
    vlSelf->tb_sdram__DOT__ras_not = 1U;
    vlSelf->tb_sdram__DOT__cas_not = 0U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       56);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_sdram__DOT__cas_not = 1U;
    vlSelf->tb_sdram__DOT__partial_address_bus = 0U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_sdram__DOT__write_byte__2__value = 0xaaU;
    vlSelf->tb_sdram__DOT__drive_data = 1U;
    vlSelf->tb_sdram__DOT__data_out = __Vtask_tb_sdram__DOT__write_byte__2__value;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_sdram__DOT__write_byte__3__value = 0xbbU;
    vlSelf->tb_sdram__DOT__drive_data = 1U;
    vlSelf->tb_sdram__DOT__data_out = __Vtask_tb_sdram__DOT__write_byte__3__value;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_sdram__DOT__write_byte__4__value = 0xccU;
    vlSelf->tb_sdram__DOT__drive_data = 1U;
    vlSelf->tb_sdram__DOT__data_out = __Vtask_tb_sdram__DOT__write_byte__4__value;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_sdram__DOT__write_byte__5__value = 0xddU;
    vlSelf->tb_sdram__DOT__drive_data = 1U;
    vlSelf->tb_sdram__DOT__data_out = __Vtask_tb_sdram__DOT__write_byte__5__value;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\nReading 4 bytes from row 3, col 2...\n");
    __Vtask_tb_sdram__DOT__select_row__6__row = 3U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       38);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_sdram__DOT__partial_address_bus = __Vtask_tb_sdram__DOT__select_row__6__row;
    vlSelf->tb_sdram__DOT__chip_enable_not = 0U;
    vlSelf->tb_sdram__DOT__write_not = 1U;
    vlSelf->tb_sdram__DOT__ras_not = 0U;
    vlSelf->tb_sdram__DOT__cas_not = 1U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_sdram__DOT__ras_not = 1U;
    vlSelf->tb_sdram__DOT__partial_address_bus = 0U;
    __Vtask_tb_sdram__DOT__select_column__7__is_read = 1U;
    __Vtask_tb_sdram__DOT__select_column__7__col = 2U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       50);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_sdram__DOT__partial_address_bus = __Vtask_tb_sdram__DOT__select_column__7__col;
    vlSelf->tb_sdram__DOT__chip_enable_not = 0U;
    vlSelf->tb_sdram__DOT__write_not = __Vtask_tb_sdram__DOT__select_column__7__is_read;
    vlSelf->tb_sdram__DOT__ras_not = 1U;
    vlSelf->tb_sdram__DOT__cas_not = 0U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       56);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_sdram__DOT__cas_not = 1U;
    vlSelf->tb_sdram__DOT__partial_address_bus = 0U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_sdram__DOT__drive_data = 0U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       76);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("Read byte: %02x\n",8,vlSelf->tb_sdram__DOT__data);
    vlSelf->tb_sdram__DOT__drive_data = 0U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       76);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("Read byte: %02x\n",8,vlSelf->tb_sdram__DOT__data);
    vlSelf->tb_sdram__DOT__drive_data = 0U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       76);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("Read byte: %02x\n",8,vlSelf->tb_sdram__DOT__data);
    vlSelf->tb_sdram__DOT__drive_data = 0U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       76);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("Read byte: %02x\n",8,vlSelf->tb_sdram__DOT__data);
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc3102cc0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_sdram.clock)", 
                                                       "src/testbench.v", 
                                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("=== SDRAM TEST END ===\n");
    VL_FINISH_MT("src/testbench.v", 121, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSDRAM___024root___dump_triggers__act(VSDRAM___024root* vlSelf);
#endif  // VL_DEBUG

void VSDRAM___024root___eval_triggers__act(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_sdram__DOT__clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_sdram__DOT__clock__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_sdram__DOT__clock__0 
        = vlSelf->tb_sdram__DOT__clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSDRAM___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VSDRAM___024root___nba_sequent__TOP__0(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___nba_sequent__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vfunc_get_row__12__Vfuncout;
    VL_ZERO_W(128, __Vfunc_get_row__12__Vfuncout);
    VlUnpacked<CData/*7:0*/, 16> __Vfunc_get_row__12__mem;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vfunc_get_row__12__mem[__Vi0] = 0;
    }
    VlWide<4>/*127:0*/ __Vfunc_get_row__13__Vfuncout;
    VL_ZERO_W(128, __Vfunc_get_row__13__Vfuncout);
    VlUnpacked<CData/*7:0*/, 16> __Vfunc_get_row__13__mem;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vfunc_get_row__13__mem[__Vi0] = 0;
    }
    VlWide<4>/*127:0*/ __Vtask_put_row__14__row_data;
    VL_ZERO_W(128, __Vtask_put_row__14__row_data);
    VlUnpacked<CData/*7:0*/, 16> __Vtask_put_row__14__mem;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_put_row__14__mem[__Vi0] = 0;
    }
    VlWide<4>/*127:0*/ __Vtask_put_row__15__row_data;
    VL_ZERO_W(128, __Vtask_put_row__15__row_data);
    VlUnpacked<CData/*7:0*/, 16> __Vtask_put_row__15__mem;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_put_row__15__mem[__Vi0] = 0;
    }
    // Body
    if ((0U == (IData)(vlSelf->tb_sdram__DOT__dut__DOT__state))) {
        if ((0U == (IData)(vlSelf->tb_sdram__DOT__dut__DOT__command))) {
            vlSelf->tb_sdram__DOT__dut__DOT__state = 1U;
        } else if ((2U == (IData)(vlSelf->tb_sdram__DOT__dut__DOT__command))) {
            vlSelf->tb_sdram__DOT__dut__DOT__row_address 
                = vlSelf->tb_sdram__DOT__partial_address_bus;
            vlSymsp->TOP____024unit.get_row__Vstatic__i = 0x10U;
            vlSelf->tb_sdram__DOT__dut__DOT__state = 2U;
            __Vfunc_get_row__12__mem[0xfU] = vlSelf->tb_sdram__DOT__dut__DOT__memory
                [vlSelf->tb_sdram__DOT__dut__DOT__row_address]
                [0xfU];
            __Vfunc_get_row__12__mem[0xeU] = vlSelf->tb_sdram__DOT__dut__DOT__memory
                [vlSelf->tb_sdram__DOT__dut__DOT__row_address]
                [0xeU];
            __Vfunc_get_row__12__mem[0xdU] = vlSelf->tb_sdram__DOT__dut__DOT__memory
                [vlSelf->tb_sdram__DOT__dut__DOT__row_address]
                [0xdU];
            __Vfunc_get_row__12__mem[0xcU] = vlSelf->tb_sdram__DOT__dut__DOT__memory
                [vlSelf->tb_sdram__DOT__dut__DOT__row_address]
                [0xcU];
            __Vfunc_get_row__12__mem[0xbU] = vlSelf->tb_sdram__DOT__dut__DOT__memory
                [vlSelf->tb_sdram__DOT__dut__DOT__row_address]
                [0xbU];
            __Vfunc_get_row__12__mem[0xaU] = vlSelf->tb_sdram__DOT__dut__DOT__memory
                [vlSelf->tb_sdram__DOT__dut__DOT__row_address]
                [0xaU];
            __Vfunc_get_row__12__mem[9U] = vlSelf->tb_sdram__DOT__dut__DOT__memory
                [vlSelf->tb_sdram__DOT__dut__DOT__row_address]
                [9U];
            __Vfunc_get_row__12__mem[8U] = vlSelf->tb_sdram__DOT__dut__DOT__memory
                [vlSelf->tb_sdram__DOT__dut__DOT__row_address]
                [8U];
            __Vfunc_get_row__12__mem[7U] = vlSelf->tb_sdram__DOT__dut__DOT__memory
                [vlSelf->tb_sdram__DOT__dut__DOT__row_address]
                [7U];
            __Vfunc_get_row__12__mem[6U] = vlSelf->tb_sdram__DOT__dut__DOT__memory
                [vlSelf->tb_sdram__DOT__dut__DOT__row_address]
                [6U];
            __Vfunc_get_row__12__mem[5U] = vlSelf->tb_sdram__DOT__dut__DOT__memory
                [vlSelf->tb_sdram__DOT__dut__DOT__row_address]
                [5U];
            __Vfunc_get_row__12__mem[4U] = vlSelf->tb_sdram__DOT__dut__DOT__memory
                [vlSelf->tb_sdram__DOT__dut__DOT__row_address]
                [4U];
            __Vfunc_get_row__12__mem[3U] = vlSelf->tb_sdram__DOT__dut__DOT__memory
                [vlSelf->tb_sdram__DOT__dut__DOT__row_address]
                [3U];
            __Vfunc_get_row__12__mem[2U] = vlSelf->tb_sdram__DOT__dut__DOT__memory
                [vlSelf->tb_sdram__DOT__dut__DOT__row_address]
                [2U];
            __Vfunc_get_row__12__mem[1U] = vlSelf->tb_sdram__DOT__dut__DOT__memory
                [vlSelf->tb_sdram__DOT__dut__DOT__row_address]
                [1U];
            __Vfunc_get_row__12__mem[0U] = vlSelf->tb_sdram__DOT__dut__DOT__memory
                [vlSelf->tb_sdram__DOT__dut__DOT__row_address]
                [0U];
            __Vfunc_get_row__12__Vfuncout[0U] = ((0xff000000U 
                                                  & __Vfunc_get_row__12__Vfuncout[0U]) 
                                                 | ((__Vfunc_get_row__12__mem
                                                     [2U] 
                                                     << 0x10U) 
                                                    | ((__Vfunc_get_row__12__mem
                                                        [1U] 
                                                        << 8U) 
                                                       | __Vfunc_get_row__12__mem
                                                       [0U])));
            __Vfunc_get_row__12__Vfuncout[0U] = ((0xffffffU 
                                                  & __Vfunc_get_row__12__Vfuncout[0U]) 
                                                 | (__Vfunc_get_row__12__mem
                                                    [3U] 
                                                    << 0x18U));
            __Vfunc_get_row__12__Vfuncout[1U] = ((0xffff0000U 
                                                  & __Vfunc_get_row__12__Vfuncout[1U]) 
                                                 | (0xffffffU 
                                                    & ((0xffff00U 
                                                        & (__Vfunc_get_row__12__mem
                                                           [5U] 
                                                           << 8U)) 
                                                       | ((0xffffffU 
                                                           & __Vfunc_get_row__12__mem
                                                           [4U]) 
                                                          | (__Vfunc_get_row__12__mem
                                                             [3U] 
                                                             >> 8U)))));
            __Vfunc_get_row__12__Vfuncout[1U] = ((0xffffU 
                                                  & __Vfunc_get_row__12__Vfuncout[1U]) 
                                                 | (0xffff0000U 
                                                    & ((__Vfunc_get_row__12__mem
                                                        [7U] 
                                                        << 0x18U) 
                                                       | (__Vfunc_get_row__12__mem
                                                          [6U] 
                                                          << 0x10U))));
            __Vfunc_get_row__12__Vfuncout[2U] = ((0xffffff00U 
                                                  & __Vfunc_get_row__12__Vfuncout[2U]) 
                                                 | (0xffffU 
                                                    & ((0xffffU 
                                                        & __Vfunc_get_row__12__mem
                                                        [8U]) 
                                                       | ((0xffffU 
                                                           & (__Vfunc_get_row__12__mem
                                                              [7U] 
                                                              >> 8U)) 
                                                          | (__Vfunc_get_row__12__mem
                                                             [6U] 
                                                             >> 0x10U)))));
            __Vfunc_get_row__12__Vfuncout[2U] = ((0xffU 
                                                  & __Vfunc_get_row__12__Vfuncout[2U]) 
                                                 | (0xffffff00U 
                                                    & ((__Vfunc_get_row__12__mem
                                                        [0xbU] 
                                                        << 0x18U) 
                                                       | ((__Vfunc_get_row__12__mem
                                                           [0xaU] 
                                                           << 0x10U) 
                                                          | (__Vfunc_get_row__12__mem
                                                             [9U] 
                                                             << 8U)))));
            __Vfunc_get_row__12__Vfuncout[3U] = ((0xff000000U 
                                                  & __Vfunc_get_row__12__Vfuncout[3U]) 
                                                 | ((__Vfunc_get_row__12__mem
                                                     [0xeU] 
                                                     << 0x10U) 
                                                    | ((__Vfunc_get_row__12__mem
                                                        [0xdU] 
                                                        << 8U) 
                                                       | __Vfunc_get_row__12__mem
                                                       [0xcU])));
            __Vfunc_get_row__12__Vfuncout[3U] = ((0xffffffU 
                                                  & __Vfunc_get_row__12__Vfuncout[3U]) 
                                                 | (__Vfunc_get_row__12__mem
                                                    [0xfU] 
                                                    << 0x18U));
            vlSelf->tb_sdram__DOT__dut__DOT__selected_row[0U] 
                = __Vfunc_get_row__12__Vfuncout[0U];
            vlSelf->tb_sdram__DOT__dut__DOT__selected_row[1U] 
                = __Vfunc_get_row__12__Vfuncout[1U];
            vlSelf->tb_sdram__DOT__dut__DOT__selected_row[2U] 
                = __Vfunc_get_row__12__Vfuncout[2U];
            vlSelf->tb_sdram__DOT__dut__DOT__selected_row[3U] 
                = __Vfunc_get_row__12__Vfuncout[3U];
        }
    } else if ((1U == (IData)(vlSelf->tb_sdram__DOT__dut__DOT__state))) {
        vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row)));
        __Vfunc_get_row__13__mem[0xfU] = vlSelf->tb_sdram__DOT__dut__DOT__memory
            [vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row]
            [0xfU];
        vlSymsp->TOP____024unit.get_row__Vstatic__i = 0x10U;
        vlSymsp->TOP____024unit.put_row__Vstatic__i = 0x10U;
        vlSelf->tb_sdram__DOT__dut__DOT__state = 0U;
        __Vfunc_get_row__13__mem[0xeU] = vlSelf->tb_sdram__DOT__dut__DOT__memory
            [vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row]
            [0xeU];
        __Vfunc_get_row__13__mem[0xdU] = vlSelf->tb_sdram__DOT__dut__DOT__memory
            [vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row]
            [0xdU];
        __Vfunc_get_row__13__mem[0xcU] = vlSelf->tb_sdram__DOT__dut__DOT__memory
            [vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row]
            [0xcU];
        __Vfunc_get_row__13__mem[0xbU] = vlSelf->tb_sdram__DOT__dut__DOT__memory
            [vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row]
            [0xbU];
        __Vfunc_get_row__13__mem[0xaU] = vlSelf->tb_sdram__DOT__dut__DOT__memory
            [vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row]
            [0xaU];
        __Vfunc_get_row__13__mem[9U] = vlSelf->tb_sdram__DOT__dut__DOT__memory
            [vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row]
            [9U];
        __Vfunc_get_row__13__mem[8U] = vlSelf->tb_sdram__DOT__dut__DOT__memory
            [vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row]
            [8U];
        __Vfunc_get_row__13__mem[7U] = vlSelf->tb_sdram__DOT__dut__DOT__memory
            [vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row]
            [7U];
        __Vfunc_get_row__13__mem[6U] = vlSelf->tb_sdram__DOT__dut__DOT__memory
            [vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row]
            [6U];
        __Vfunc_get_row__13__mem[5U] = vlSelf->tb_sdram__DOT__dut__DOT__memory
            [vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row]
            [5U];
        __Vfunc_get_row__13__mem[4U] = vlSelf->tb_sdram__DOT__dut__DOT__memory
            [vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row]
            [4U];
        __Vfunc_get_row__13__mem[3U] = vlSelf->tb_sdram__DOT__dut__DOT__memory
            [vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row]
            [3U];
        __Vfunc_get_row__13__mem[2U] = vlSelf->tb_sdram__DOT__dut__DOT__memory
            [vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row]
            [2U];
        __Vfunc_get_row__13__mem[1U] = vlSelf->tb_sdram__DOT__dut__DOT__memory
            [vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row]
            [1U];
        __Vfunc_get_row__13__mem[0U] = vlSelf->tb_sdram__DOT__dut__DOT__memory
            [vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row]
            [0U];
        __Vfunc_get_row__13__Vfuncout[0U] = ((0xff000000U 
                                              & __Vfunc_get_row__13__Vfuncout[0U]) 
                                             | ((__Vfunc_get_row__13__mem
                                                 [2U] 
                                                 << 0x10U) 
                                                | ((__Vfunc_get_row__13__mem
                                                    [1U] 
                                                    << 8U) 
                                                   | __Vfunc_get_row__13__mem
                                                   [0U])));
        __Vfunc_get_row__13__Vfuncout[0U] = ((0xffffffU 
                                              & __Vfunc_get_row__13__Vfuncout[0U]) 
                                             | (__Vfunc_get_row__13__mem
                                                [3U] 
                                                << 0x18U));
        __Vfunc_get_row__13__Vfuncout[1U] = ((0xffff0000U 
                                              & __Vfunc_get_row__13__Vfuncout[1U]) 
                                             | (0xffffffU 
                                                & ((0xffff00U 
                                                    & (__Vfunc_get_row__13__mem
                                                       [5U] 
                                                       << 8U)) 
                                                   | ((0xffffffU 
                                                       & __Vfunc_get_row__13__mem
                                                       [4U]) 
                                                      | (__Vfunc_get_row__13__mem
                                                         [3U] 
                                                         >> 8U)))));
        __Vfunc_get_row__13__Vfuncout[1U] = ((0xffffU 
                                              & __Vfunc_get_row__13__Vfuncout[1U]) 
                                             | (0xffff0000U 
                                                & ((__Vfunc_get_row__13__mem
                                                    [7U] 
                                                    << 0x18U) 
                                                   | (__Vfunc_get_row__13__mem
                                                      [6U] 
                                                      << 0x10U))));
        __Vfunc_get_row__13__Vfuncout[2U] = ((0xffffff00U 
                                              & __Vfunc_get_row__13__Vfuncout[2U]) 
                                             | (0xffffU 
                                                & ((0xffffU 
                                                    & __Vfunc_get_row__13__mem
                                                    [8U]) 
                                                   | ((0xffffU 
                                                       & (__Vfunc_get_row__13__mem
                                                          [7U] 
                                                          >> 8U)) 
                                                      | (__Vfunc_get_row__13__mem
                                                         [6U] 
                                                         >> 0x10U)))));
        __Vfunc_get_row__13__Vfuncout[2U] = ((0xffU 
                                              & __Vfunc_get_row__13__Vfuncout[2U]) 
                                             | (0xffffff00U 
                                                & ((__Vfunc_get_row__13__mem
                                                    [0xbU] 
                                                    << 0x18U) 
                                                   | ((__Vfunc_get_row__13__mem
                                                       [0xaU] 
                                                       << 0x10U) 
                                                      | (__Vfunc_get_row__13__mem
                                                         [9U] 
                                                         << 8U)))));
        __Vfunc_get_row__13__Vfuncout[3U] = ((0xff000000U 
                                              & __Vfunc_get_row__13__Vfuncout[3U]) 
                                             | ((__Vfunc_get_row__13__mem
                                                 [0xeU] 
                                                 << 0x10U) 
                                                | ((__Vfunc_get_row__13__mem
                                                    [0xdU] 
                                                    << 8U) 
                                                   | __Vfunc_get_row__13__mem
                                                   [0xcU])));
        __Vfunc_get_row__13__Vfuncout[3U] = ((0xffffffU 
                                              & __Vfunc_get_row__13__Vfuncout[3U]) 
                                             | (__Vfunc_get_row__13__mem
                                                [0xfU] 
                                                << 0x18U));
        vlSelf->tb_sdram__DOT__dut__DOT__selected_row[0U] 
            = __Vfunc_get_row__13__Vfuncout[0U];
        vlSelf->tb_sdram__DOT__dut__DOT__selected_row[1U] 
            = __Vfunc_get_row__13__Vfuncout[1U];
        vlSelf->tb_sdram__DOT__dut__DOT__selected_row[2U] 
            = __Vfunc_get_row__13__Vfuncout[2U];
        vlSelf->tb_sdram__DOT__dut__DOT__selected_row[3U] 
            = __Vfunc_get_row__13__Vfuncout[3U];
        __Vtask_put_row__14__row_data[0U] = vlSelf->tb_sdram__DOT__dut__DOT__selected_row[0U];
        __Vtask_put_row__14__row_data[1U] = vlSelf->tb_sdram__DOT__dut__DOT__selected_row[1U];
        __Vtask_put_row__14__row_data[2U] = vlSelf->tb_sdram__DOT__dut__DOT__selected_row[2U];
        __Vtask_put_row__14__row_data[3U] = vlSelf->tb_sdram__DOT__dut__DOT__selected_row[3U];
        __Vtask_put_row__14__mem[0U] = (0xffU & __Vtask_put_row__14__row_data[0U]);
        __Vtask_put_row__14__mem[1U] = (0xffU & (__Vtask_put_row__14__row_data[0U] 
                                                 >> 8U));
        __Vtask_put_row__14__mem[2U] = (0xffU & (__Vtask_put_row__14__row_data[0U] 
                                                 >> 0x10U));
        __Vtask_put_row__14__mem[3U] = (__Vtask_put_row__14__row_data[0U] 
                                        >> 0x18U);
        __Vtask_put_row__14__mem[4U] = (0xffU & __Vtask_put_row__14__row_data[1U]);
        __Vtask_put_row__14__mem[5U] = (0xffU & (__Vtask_put_row__14__row_data[1U] 
                                                 >> 8U));
        __Vtask_put_row__14__mem[6U] = (0xffU & (__Vtask_put_row__14__row_data[1U] 
                                                 >> 0x10U));
        __Vtask_put_row__14__mem[7U] = (__Vtask_put_row__14__row_data[1U] 
                                        >> 0x18U);
        __Vtask_put_row__14__mem[8U] = (0xffU & __Vtask_put_row__14__row_data[2U]);
        __Vtask_put_row__14__mem[9U] = (0xffU & (__Vtask_put_row__14__row_data[2U] 
                                                 >> 8U));
        __Vtask_put_row__14__mem[0xaU] = (0xffU & (
                                                   __Vtask_put_row__14__row_data[2U] 
                                                   >> 0x10U));
        __Vtask_put_row__14__mem[0xbU] = (__Vtask_put_row__14__row_data[2U] 
                                          >> 0x18U);
        __Vtask_put_row__14__mem[0xcU] = (0xffU & __Vtask_put_row__14__row_data[3U]);
        __Vtask_put_row__14__mem[0xdU] = (0xffU & (
                                                   __Vtask_put_row__14__row_data[3U] 
                                                   >> 8U));
        __Vtask_put_row__14__mem[0xeU] = (0xffU & (
                                                   __Vtask_put_row__14__row_data[3U] 
                                                   >> 0x10U));
        __Vtask_put_row__14__mem[0xfU] = (__Vtask_put_row__14__row_data[3U] 
                                          >> 0x18U);
        vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row][0xfU] 
            = __Vtask_put_row__14__mem[0xfU];
        vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row][0xeU] 
            = __Vtask_put_row__14__mem[0xeU];
        vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row][0xdU] 
            = __Vtask_put_row__14__mem[0xdU];
        vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row][0xcU] 
            = __Vtask_put_row__14__mem[0xcU];
        vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row][0xbU] 
            = __Vtask_put_row__14__mem[0xbU];
        vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row][0xaU] 
            = __Vtask_put_row__14__mem[0xaU];
        vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row][9U] 
            = __Vtask_put_row__14__mem[9U];
        vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row][8U] 
            = __Vtask_put_row__14__mem[8U];
        vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row][7U] 
            = __Vtask_put_row__14__mem[7U];
        vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row][6U] 
            = __Vtask_put_row__14__mem[6U];
        vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row][5U] 
            = __Vtask_put_row__14__mem[5U];
        vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row][4U] 
            = __Vtask_put_row__14__mem[4U];
        vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row][3U] 
            = __Vtask_put_row__14__mem[3U];
        vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row][2U] 
            = __Vtask_put_row__14__mem[2U];
        vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row][1U] 
            = __Vtask_put_row__14__mem[1U];
        vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row][0U] 
            = __Vtask_put_row__14__mem[0U];
    } else if ((2U == (IData)(vlSelf->tb_sdram__DOT__dut__DOT__state))) {
        if ((4U == (IData)(vlSelf->tb_sdram__DOT__dut__DOT__command))) {
            vlSelf->tb_sdram__DOT__dut__DOT__remaining_bytes = 4U;
            vlSelf->tb_sdram__DOT__dut__DOT__col_address 
                = vlSelf->tb_sdram__DOT__partial_address_bus;
            vlSelf->tb_sdram__DOT__dut__DOT__state = 3U;
        }
    } else if ((3U == (IData)(vlSelf->tb_sdram__DOT__dut__DOT__state))) {
        vlSelf->tb_sdram__DOT__dut__DOT__state = ((IData)(vlSelf->tb_sdram__DOT__write_not)
                                                   ? 4U
                                                   : 5U);
    } else if ((4U == (IData)(vlSelf->tb_sdram__DOT__dut__DOT__state))) {
        vlSelf->tb_sdram__DOT__dut__DOT__remaining_bytes 
            = (0xffU & ((IData)(vlSelf->tb_sdram__DOT__dut__DOT__remaining_bytes) 
                        - (IData)(1U)));
        vlSelf->tb_sdram__DOT__dut__DOT__output_data_register 
            = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_sdram__DOT__dut__DOT__col_address), 3U)))
                          ? 0U : (vlSelf->tb_sdram__DOT__dut__DOT__selected_row[
                                  (((IData)(7U) + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_sdram__DOT__dut__DOT__col_address), 3U))) 
                                   >> 5U)] << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_sdram__DOT__dut__DOT__col_address), 3U))))) 
                        | (vlSelf->tb_sdram__DOT__dut__DOT__selected_row[
                           (3U & (VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_sdram__DOT__dut__DOT__col_address), 3U) 
                                  >> 5U))] >> (0x1fU 
                                               & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_sdram__DOT__dut__DOT__col_address), 3U)))));
        if ((0U == (IData)(vlSelf->tb_sdram__DOT__dut__DOT__remaining_bytes))) {
            vlSelf->tb_sdram__DOT__dut__DOT__state = 0U;
        }
        vlSelf->tb_sdram__DOT__dut__DOT__col_address 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_sdram__DOT__dut__DOT__col_address)));
    } else if ((5U == (IData)(vlSelf->tb_sdram__DOT__dut__DOT__state))) {
        vlSelf->tb_sdram__DOT__dut__DOT__input_data_register 
            = ((((IData)(vlSelf->tb_sdram__DOT__dut__DOT____VdfgTmp_hccf8a427__0)
                  ? 0xffU : 0U) & (IData)(vlSelf->tb_sdram__DOT__data__strong__out1)) 
               | (((IData)(vlSelf->tb_sdram__DOT__drive_data)
                    ? (IData)(vlSelf->tb_sdram__DOT__data_out)
                    : 0U) & ((IData)(vlSelf->tb_sdram__DOT__drive_data)
                              ? 0xffU : 0U)));
        VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_sdram__DOT__dut__DOT__col_address), 3U)), vlSelf->tb_sdram__DOT__dut__DOT__selected_row, vlSelf->tb_sdram__DOT__dut__DOT__input_data_register);
        vlSelf->tb_sdram__DOT__dut__DOT__col_address 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_sdram__DOT__dut__DOT__col_address)));
        vlSelf->tb_sdram__DOT__dut__DOT__remaining_bytes 
            = (0xffU & ((IData)(vlSelf->tb_sdram__DOT__dut__DOT__remaining_bytes) 
                        - (IData)(1U)));
        if ((0U == (IData)(vlSelf->tb_sdram__DOT__dut__DOT__remaining_bytes))) {
            __Vtask_put_row__15__row_data[0U] = vlSelf->tb_sdram__DOT__dut__DOT__selected_row[0U];
            __Vtask_put_row__15__row_data[1U] = vlSelf->tb_sdram__DOT__dut__DOT__selected_row[1U];
            __Vtask_put_row__15__row_data[2U] = vlSelf->tb_sdram__DOT__dut__DOT__selected_row[2U];
            __Vtask_put_row__15__row_data[3U] = vlSelf->tb_sdram__DOT__dut__DOT__selected_row[3U];
            vlSymsp->TOP____024unit.put_row__Vstatic__i = 0x10U;
            vlSelf->tb_sdram__DOT__dut__DOT__state = 0U;
            __Vtask_put_row__15__mem[0U] = (0xffU & 
                                            __Vtask_put_row__15__row_data[0U]);
            __Vtask_put_row__15__mem[1U] = (0xffU & 
                                            (__Vtask_put_row__15__row_data[0U] 
                                             >> 8U));
            __Vtask_put_row__15__mem[2U] = (0xffU & 
                                            (__Vtask_put_row__15__row_data[0U] 
                                             >> 0x10U));
            __Vtask_put_row__15__mem[3U] = (__Vtask_put_row__15__row_data[0U] 
                                            >> 0x18U);
            __Vtask_put_row__15__mem[4U] = (0xffU & 
                                            __Vtask_put_row__15__row_data[1U]);
            __Vtask_put_row__15__mem[5U] = (0xffU & 
                                            (__Vtask_put_row__15__row_data[1U] 
                                             >> 8U));
            __Vtask_put_row__15__mem[6U] = (0xffU & 
                                            (__Vtask_put_row__15__row_data[1U] 
                                             >> 0x10U));
            __Vtask_put_row__15__mem[7U] = (__Vtask_put_row__15__row_data[1U] 
                                            >> 0x18U);
            __Vtask_put_row__15__mem[8U] = (0xffU & 
                                            __Vtask_put_row__15__row_data[2U]);
            __Vtask_put_row__15__mem[9U] = (0xffU & 
                                            (__Vtask_put_row__15__row_data[2U] 
                                             >> 8U));
            __Vtask_put_row__15__mem[0xaU] = (0xffU 
                                              & (__Vtask_put_row__15__row_data[2U] 
                                                 >> 0x10U));
            __Vtask_put_row__15__mem[0xbU] = (__Vtask_put_row__15__row_data[2U] 
                                              >> 0x18U);
            __Vtask_put_row__15__mem[0xcU] = (0xffU 
                                              & __Vtask_put_row__15__row_data[3U]);
            __Vtask_put_row__15__mem[0xdU] = (0xffU 
                                              & (__Vtask_put_row__15__row_data[3U] 
                                                 >> 8U));
            __Vtask_put_row__15__mem[0xeU] = (0xffU 
                                              & (__Vtask_put_row__15__row_data[3U] 
                                                 >> 0x10U));
            __Vtask_put_row__15__mem[0xfU] = (__Vtask_put_row__15__row_data[3U] 
                                              >> 0x18U);
            vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__row_address][0xfU] 
                = __Vtask_put_row__15__mem[0xfU];
            vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__row_address][0xeU] 
                = __Vtask_put_row__15__mem[0xeU];
            vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__row_address][0xdU] 
                = __Vtask_put_row__15__mem[0xdU];
            vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__row_address][0xcU] 
                = __Vtask_put_row__15__mem[0xcU];
            vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__row_address][0xbU] 
                = __Vtask_put_row__15__mem[0xbU];
            vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__row_address][0xaU] 
                = __Vtask_put_row__15__mem[0xaU];
            vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__row_address][9U] 
                = __Vtask_put_row__15__mem[9U];
            vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__row_address][8U] 
                = __Vtask_put_row__15__mem[8U];
            vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__row_address][7U] 
                = __Vtask_put_row__15__mem[7U];
            vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__row_address][6U] 
                = __Vtask_put_row__15__mem[6U];
            vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__row_address][5U] 
                = __Vtask_put_row__15__mem[5U];
            vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__row_address][4U] 
                = __Vtask_put_row__15__mem[4U];
            vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__row_address][3U] 
                = __Vtask_put_row__15__mem[3U];
            vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__row_address][2U] 
                = __Vtask_put_row__15__mem[2U];
            vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__row_address][1U] 
                = __Vtask_put_row__15__mem[1U];
            vlSelf->tb_sdram__DOT__dut__DOT__memory[vlSelf->tb_sdram__DOT__dut__DOT__row_address][0U] 
                = __Vtask_put_row__15__mem[0U];
        }
    }
    vlSelf->tb_sdram__DOT__dut__DOT__command = (((IData)(vlSelf->tb_sdram__DOT__ras_not) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->tb_sdram__DOT__cas_not) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->tb_sdram__DOT__chip_enable_not)));
    vlSelf->tb_sdram__DOT__dut__DOT____VdfgTmp_hccf8a427__0 
        = ((~ (IData)(vlSelf->tb_sdram__DOT__chip_enable_not)) 
           & (IData)(vlSelf->tb_sdram__DOT__write_not));
    vlSelf->tb_sdram__DOT__data__strong__out1 = (((IData)(vlSelf->tb_sdram__DOT__dut__DOT____VdfgTmp_hccf8a427__0)
                                                   ? (IData)(vlSelf->tb_sdram__DOT__dut__DOT__output_data_register)
                                                   : 0U) 
                                                 & ((IData)(vlSelf->tb_sdram__DOT__dut__DOT____VdfgTmp_hccf8a427__0)
                                                     ? 0xffU
                                                     : 0U));
    vlSelf->tb_sdram__DOT__data = ((((IData)(vlSelf->tb_sdram__DOT__dut__DOT____VdfgTmp_hccf8a427__0)
                                      ? 0xffU : 0U) 
                                    & (IData)(vlSelf->tb_sdram__DOT__data__strong__out1)) 
                                   | (((IData)(vlSelf->tb_sdram__DOT__drive_data)
                                        ? (IData)(vlSelf->tb_sdram__DOT__data_out)
                                        : 0U) & ((IData)(vlSelf->tb_sdram__DOT__drive_data)
                                                  ? 0xffU
                                                  : 0U)));
}
