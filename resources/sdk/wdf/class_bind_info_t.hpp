#pragma once
#include <sdkgen/support_library.hpp>
#include "class_version_t.hpp"

#include "magic/class_bind_info_t.start.hpp"
namespace wdf
{
    struct bind_info_t;
    struct class_bind_info_t;

    // [struct _WDF_CLASS_BIND_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct class_bind_info_t                                     
    {                                                            
        using pfn_wdf_client_bind_class_t =   sdk::function<int32_t(sdk::function<int32_t(struct wdf::bind_info_t*, void**, struct wdf::class_bind_info_t*)>*, struct wdf::bind_info_t*, void**, struct wdf::class_bind_info_t*)>*;                     
        using pfn_wdf_client_unbind_class_t = sdk::function<void(sdk::function<void(struct wdf::bind_info_t*, void**, struct wdf::class_bind_info_t*)>*, struct wdf::bind_info_t*, void**, struct wdf::class_bind_info_t*)>*;                     
                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 uint32_t                       size;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 wchar_t*                       class_name;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ClassName
        _m02 struct wdf::class_version_t    version;               //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Version
        _m03 sdk::function<void()>**        function_table;        //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .FunctionTable
        _m04 uint32_t                       function_table_count;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .FunctionTableCount
        _m05 void*                          class_bind_info;       //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .ClassBindInfo
        _m06 pfn_wdf_client_bind_class_t    client_bind_class;     //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .ClientBindClass
        _m07 pfn_wdf_client_unbind_class_t  client_unbind_class;   //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .ClientUnbindClass
        _m08 void*                          class_module;          //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .ClassModule
                                                                 
        SDK_NONVOL_PROPERTIES( "_WDF_CLASS_BIND_INFO.$", 0x50, true, 0xa405bdcea60101e5 );                     
        SDK_FIXED_SIZE( class_bind_info_t, 0x50 );                     
    };                                                           
};
#include "magic/class_bind_info_t.end.hpp"
SDK_VERIFY( struct wdf::class_bind_info_t, 0x50 );
