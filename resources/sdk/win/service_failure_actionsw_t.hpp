#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_failure_actionsw_t.start.hpp"
namespace win
{
    struct sc_action_t;

    // [struct _SERVICE_FAILURE_ACTIONSW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_failure_actionsw_t                 
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                            
        _m00 uint32_t                 dw_reset_period;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwResetPeriod
        _m01 wchar_t*                 lp_reboot_msg;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpRebootMsg
        _m02 wchar_t*                 lp_command;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpCommand
        _m03 uint32_t                 c_actions;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cActions
        _m04 struct win::sc_action_t* lpsa_actions;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .lpsaActions
                                                      
        SDK_MAGIC_PROPERTIES( "_SERVICE_FAILURE_ACTIONSW.$", 0x28, true, 0x9713520f5f9d3666 );                
        SDK_FIXED_SIZE( service_failure_actionsw_t, 0x28 );                
    };                                                
};
#include "magic/service_failure_actionsw_t.end.hpp"
SDK_VERIFY( struct win::service_failure_actionsw_t, 0x28 );
