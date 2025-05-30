#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/request_forward_options_t.start.hpp"
namespace wdf
{
    // [struct _WDF_REQUEST_FORWARD_OPTIONS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct request_forward_options_t
    {                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t size;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t flags;          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
                                    
        SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_FORWARD_OPTIONS.$", 0x8, true, 0x63ecddcd30c06576 );      
        SDK_FIXED_SIZE( request_forward_options_t, 0x8 );      
    };                              
};
#include "magic/request_forward_options_t.end.hpp"
SDK_VERIFY( struct wdf::request_forward_options_t, 0x8 );
