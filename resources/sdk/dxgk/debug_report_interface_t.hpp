#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/debug_report_interface_t.start.hpp"
namespace dxgk
{
    struct debug_report_handle_t;

    // [struct _DXGK_DEBUG_REPORT_INTERFACE]
    // => WDK 10 (NV)
    //
    struct debug_report_interface_t                                 
    {                                                               
        using dbg_report_create_t =         sdk::function<struct dxgk::debug_report_handle_t*(void*, uint32_t, uint64_t, uint64_t, uint64_t, uint64_t)>*;                          
        using dbg_report_secondary_data_t = sdk::function<uint8_t(struct dxgk::debug_report_handle_t*, void*, uint32_t)>*;                          
        using dbg_report_complete_t =       sdk::function<void(struct dxgk::debug_report_handle_t*)>*;                          
                                                                    
        // WDK 10                                                   
        //                                                          
        _m00 uint16_t                     size;                       //{ +0x0000    } | .Size
        _m01 uint16_t                     version;                    //{ +0x0002    } | .Version
        _m02 void*                        context;                    //{ +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*  interface_reference;        //{ +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*  interface_dereference;      //{ +0x0018    } | .InterfaceDereference
        _m05 dbg_report_create_t          dbg_report_create;          //{ +0x0020    } | .DbgReportCreate
        _m06 dbg_report_secondary_data_t  dbg_report_secondary_data;  //{ +0x0028    } | .DbgReportSecondaryData
        _m07 dbg_report_complete_t        dbg_report_complete;        //{ +0x0030    } | .DbgReportComplete
                                                                    
        SDK_NONVOL_PROPERTIES( "_DXGK_DEBUG_REPORT_INTERFACE.$", 0x0, false, 0x721fe1ddc4915c9a );                          
        SDK_FIXED_SIZE( debug_report_interface_t, 0x38 );                          
    };                                                              
};
#include "magic/debug_report_interface_t.end.hpp"
SDK_VERIFY( struct dxgk::debug_report_interface_t, 0x38 );
