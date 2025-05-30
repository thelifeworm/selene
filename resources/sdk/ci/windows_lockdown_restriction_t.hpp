#pragma once
#include <sdkgen/support_library.hpp>

namespace ci
{
    // [enum CI_WINDOWS_LOCKDOWN_RESTRICTION]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class windows_lockdown_restriction_t : int32_t
    {                                                  
        none =               0x0,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        nounlock =           0x1,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        nounlock_permanent = 0x2,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                0x3,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
