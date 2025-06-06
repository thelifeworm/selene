#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ActionType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class action_type_t : int32_t  
    {                                   
        file_deletion =          0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        directory_deletion =     0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reparse_point_deletion = 0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        directory_enumeration =  0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
