#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wdfcontexttype_triage_info_v1_17_t.start.hpp"
namespace wdf
{
    // [struct _WDFCONTEXTTYPE_TRIAGE_INFO_V1_17]
    // => Windows 10 v1607
    //
    struct wdfcontexttype_triage_info_v1_17_t
    {                                        
        // Windows 10 v1607               
        //                           
        _m00 uint32_t type_info_size;          //{ +0x0000    } | .TypeInfoSize
        _m01 uint32_t context_size;            //{ +0x0004    } | .ContextSize
        _m02 uint32_t context_name;            //{ +0x0008    } | .ContextName
                                             
        SDK_MAGIC_PROPERTIES( "_WDFCONTEXTTYPE_TRIAGE_INFO_V1_17.$", 0x0, false, 0x5b31e634b6decb5a );               
        SDK_FIXED_SIZE( wdfcontexttype_triage_info_v1_17_t, 0xc );               
    };                                       
};
#include "magic/wdfcontexttype_triage_info_v1_17_t.end.hpp"
SDK_VERIFY( struct wdf::wdfcontexttype_triage_info_v1_17_t, 0xc );
