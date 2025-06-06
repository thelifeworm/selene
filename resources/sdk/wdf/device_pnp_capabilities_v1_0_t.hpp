#pragma once
#include <sdkgen/support_library.hpp>
#include "tri_state_t.hpp"

#include "magic/device_pnp_capabilities_v1_0_t.start.hpp"
namespace wdf
{
    // [struct _WDF_DEVICE_PNP_CAPABILITIES_V1_0]
    // => Windows 10 v1607
    //
    struct device_pnp_capabilities_v1_0_t              
    {                                                  
        // Windows 10 v1607                            
        //                                             
        _m00 uint32_t              size;                 //{ +0x0000    } | .Size
        _m01 enum wdf::tri_state_t lock_supported;       //{ +0x0004    } | .LockSupported
        _m02 enum wdf::tri_state_t eject_supported;      //{ +0x0008    } | .EjectSupported
        _m03 enum wdf::tri_state_t removable;            //{ +0x000c    } | .Removable
        _m04 enum wdf::tri_state_t dock_device;          //{ +0x0010    } | .DockDevice
        _m05 enum wdf::tri_state_t unique_id;            //{ +0x0014    } | .UniqueID
        _m06 enum wdf::tri_state_t silent_install;       //{ +0x0018    } | .SilentInstall
        _m07 enum wdf::tri_state_t surprise_removal_ok;  //{ +0x001c    } | .SurpriseRemovalOK
        _m08 enum wdf::tri_state_t hardware_disabled;    //{ +0x0020    } | .HardwareDisabled
        _m09 enum wdf::tri_state_t no_display_in_ui;     //{ +0x0024    } | .NoDisplayInUI
        _m10 uint32_t              address;              //{ +0x0028    } | .Address
        _m11 uint32_t              ui_number;            //{ +0x002c    } | .UINumber
                                                       
        SDK_MAGIC_PROPERTIES( "_WDF_DEVICE_PNP_CAPABILITIES_V1_0.$", 0x0, false, 0x989852e06bb2ecb0 );                    
        SDK_FIXED_SIZE( device_pnp_capabilities_v1_0_t, 0x30 );                    
    };                                                 
};
#include "magic/device_pnp_capabilities_v1_0_t.end.hpp"
SDK_VERIFY( struct wdf::device_pnp_capabilities_v1_0_t, 0x30 );
