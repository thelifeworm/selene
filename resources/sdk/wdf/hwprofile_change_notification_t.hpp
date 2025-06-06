#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/hwprofile_change_notification_t.start.hpp"
namespace wdf
{
    // [struct _HWPROFILE_CHANGE_NOTIFICATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hwprofile_change_notification_t
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                             
        _m00 uint16_t          version;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t          size;        //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 struct nt::guid_t event;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Event
                                          
        SDK_NONVOL_PROPERTIES( "_HWPROFILE_CHANGE_NOTIFICATION.$", 0x14, true, 0x7d5adaa8f28b51be );        
        SDK_FIXED_SIZE( hwprofile_change_notification_t, 0x14 );        
    };                                    
};
#include "magic/hwprofile_change_notification_t.end.hpp"
SDK_VERIFY( struct wdf::hwprofile_change_notification_t, 0x14 );
