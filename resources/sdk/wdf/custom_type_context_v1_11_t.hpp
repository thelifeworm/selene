#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/custom_type_context_v1_11_t.start.hpp"
namespace wdf
{
    // [struct _WDF_CUSTOM_TYPE_CONTEXT_V1_11]
    // => Windows 10 v1607
    //
    struct custom_type_context_v1_11_t
    {                                 
        // Windows 10 v1607     
        //                 
        _m00 uint32_t size;             //{ +0x0000    } | .Size
        _m01 uint64_t data;             //{ +0x0008    } | .Data
                                      
        SDK_MAGIC_PROPERTIES( "_WDF_CUSTOM_TYPE_CONTEXT_V1_11.$", 0x0, false, 0xdef0af2b05abbd69 );     
        SDK_FIXED_SIZE( custom_type_context_v1_11_t, 0x10 );     
    };                                
};
#include "magic/custom_type_context_v1_11_t.end.hpp"
SDK_VERIFY( struct wdf::custom_type_context_v1_11_t, 0x10 );
