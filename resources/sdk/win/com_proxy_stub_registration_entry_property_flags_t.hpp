#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ComProxyStubRegistrationEntryPropertyFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class com_proxy_stub_registration_entry_property_flags_t : uint64_t
    {                                                                       
        none =              0x0,                                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        display_name =      0x1,                                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //dll_path =        0x1,                                              // Windows 10 v1607
        //display_name =    0x2,                                              // Windows 10 v1607
        dll_path =          0x2,                                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dll_path_x86 =      0x4,                                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dll_path_x64 =      0x8,                                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dll_path_arm =      0x10,                                             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dll_path_arm64 =    0x20,                                             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        has_machine_scope = 0x40,                                             // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                      
};
