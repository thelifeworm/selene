#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum SendDeviceRequestAction]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class send_device_request_action_t : int32_t
    {                                                
        no_retry = 0x0,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        retry =    0x1,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
