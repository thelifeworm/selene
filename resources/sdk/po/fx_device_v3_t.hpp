#pragma once
#include <sdkgen/support_library.hpp>
#include "fx_component_v2_t.hpp"

namespace nt { struct guid_t; }

#include "magic/fx_device_v3_t.start.hpp"
namespace po
{
    // [struct _PO_FX_DEVICE_V3]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fx_device_v3_t                                                                        
    {                                                                                            
        using ppo_fx_power_control_callback_t = sdk::function<int32_t(void*, const struct nt::guid_t*, void*, uint64_t, void*, uint64_t, uint64_t*)>*;                                    
                                                                                                 
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                                       
        _m00 uint32_t                                        version;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint64_t                                        flags;                                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m02 sdk::function<void(void*, uint32_t)>*           component_active_condition_callback;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ComponentActiveConditionCallback
        _m03 sdk::function<void(void*, uint32_t)>*           component_idle_condition_callback;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ComponentIdleConditionCallback
        _m04 sdk::function<void(void*, uint32_t, uint32_t)>* component_idle_state_callback;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ComponentIdleStateCallback
        _m05 sdk::function<void(void*)>*                     device_power_required_callback;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DevicePowerRequiredCallback
        _m06 sdk::function<void(void*)>*                     device_power_not_required_callback;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DevicePowerNotRequiredCallback
        _m07 ppo_fx_power_control_callback_t                 power_control_callback;               //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .PowerControlCallback
        _m08 sdk::function<void(void*, uint32_t)>*           directed_power_up_callback;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .DirectedPowerUpCallback
        _m09 sdk::function<void(void*, uint32_t)>*           directed_power_down_callback;         //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .DirectedPowerDownCallback
        _m10 uint32_t                                        directed_fx_timeout_in_seconds;       //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .DirectedFxTimeoutInSeconds
        _m11 void*                                           device_context;                       //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .DeviceContext
        _m12 uint32_t                                        component_count;                      //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ComponentCount
        _m13 sdk::array<struct po::fx_component_v2_t, 1>     components;                           //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .Components
                                                                                                 
        SDK_NONVOL_PROPERTIES( "_PO_FX_DEVICE_V3.$", 0xa0, true, 0x1f2c113823704349 );                                    
        SDK_FIXED_SIZE( fx_device_v3_t, 0xa0 );                                                  
    };                                                                                           
};
#include "magic/fx_device_v3_t.end.hpp"
SDK_VERIFY( struct po::fx_device_v3_t, 0xa0 );
