#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorPropertyAttr]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_property_attr_t : int32_t
    {                                       
        special_name =    0x200,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rt_special_name = 0x400,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        has_default =     0x1000,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unused =          0xe9ff,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_mask =   0xf400,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
