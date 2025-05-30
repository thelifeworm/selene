#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::material_property
{
    // [Store@MaterialProperty]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7db14, 0x243e0 bytes
    // win32kbase.sys .text:0x9b5d4, 0x27ef0 bytes
    // win32kbase.sys .text:0xa8b14, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) store;
};
#include "magic/api.end.hpp"
