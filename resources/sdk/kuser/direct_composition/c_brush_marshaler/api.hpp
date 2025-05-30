#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_brush_marshaler
{
    // [CheckForCycle@CBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa3cb4, 0x243e0 bytes
    // win32kbase.sys .text:0xb11a4, 0x27ef0 bytes
    // win32kbase.sys .text:0x92e44, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) check_for_cycle;
};
#include "magic/api.end.hpp"
