#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _GET_FILEEX_INFO_LEVELS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class get_fileex_info_levels_t : int32_t
    {                                            
        info_standard =  0x0,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_info_level = 0x1,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
