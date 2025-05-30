#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t;      }
namespace nt { struct interface_t; }

#include "magic/query_interface_config_v1_7_t.start.hpp"
namespace wdf
{
    struct wdfdevice_t;

    // [struct _WDF_QUERY_INTERFACE_CONFIG_V1_7]
    // => Windows 10 v1607
    //
    struct query_interface_config_v1_7_t                                                              
    {                                                                                                 
        using pfn_wdf_device_process_query_interface_request_t = sdk::function<int32_t(struct wdf::wdfdevice_t*, struct nt::guid_t*, struct nt::interface_t*, void*)>*;                                           
        using evt_device_process_query_interface_request_t =     pfn_wdf_device_process_query_interface_request_t ;                                           
                                                                                                      
        // Windows 10 v1607                                                                           
        //                                                                                            
        _m00 uint32_t                                      size;                                        //{ +0x0000    } | .Size
        _m01 struct nt::interface_t*                       interface;                                   //{ +0x0008    } | .Interface
        _m02 const struct nt::guid_t*                      interface_type;                              //{ +0x0010    } | .InterfaceType
        _m03 uint8_t                                       send_query_to_parent_stack;                  //{ +0x0018    } | .SendQueryToParentStack
        _m04 evt_device_process_query_interface_request_t  evt_device_process_query_interface_request;  //{ +0x0020    } | .EvtDeviceProcessQueryInterfaceRequest
        _m05 uint8_t                                       import_interface;                            //{ +0x0028    } | .ImportInterface
                                                                                                      
        SDK_MAGIC_PROPERTIES( "_WDF_QUERY_INTERFACE_CONFIG_V1_7.$", 0x0, false, 0x4548b4a162b023c9 );                                           
        SDK_FIXED_SIZE( query_interface_config_v1_7_t, 0x30 );                                           
    };                                                                                                
};
#include "magic/query_interface_config_v1_7_t.end.hpp"
SDK_VERIFY( struct wdf::query_interface_config_v1_7_t, 0x30 );
