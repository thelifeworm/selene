#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_service_configa_t.start.hpp"
namespace win
{
    // [struct _QUERY_SERVICE_CONFIGA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct query_service_configa_t          
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint32_t dw_service_type;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwServiceType
        _m01 uint32_t dw_start_type;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwStartType
        _m02 uint32_t dw_error_control;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwErrorControl
        _m03 char*    lp_binary_path_name;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpBinaryPathName
        _m04 char*    lp_load_order_group;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .lpLoadOrderGroup
        _m05 uint32_t dw_tag_id;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwTagId
        _m06 char*    lp_dependencies;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .lpDependencies
        _m07 char*    lp_service_start_name;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .lpServiceStartName
        _m08 char*    lp_display_name;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .lpDisplayName
                                            
        SDK_MAGIC_PROPERTIES( "_QUERY_SERVICE_CONFIGA.$", 0x40, true, 0x75e68d33b36e75a5 );                      
        SDK_FIXED_SIZE( query_service_configa_t, 0x40 );                      
    };                                      
};
#include "magic/query_service_configa_t.end.hpp"
SDK_VERIFY( struct win::query_service_configa_t, 0x40 );
