#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagDVASPECT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dvaspect_t : int32_t
    {                              
        content =   0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thumbnail = 0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        icon =      0x4,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        docprint =  0x8,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
