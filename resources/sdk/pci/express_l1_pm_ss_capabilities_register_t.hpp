#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_l1_pm_ss_capabilities_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_l1_pm_ss_capabilities_register_t  
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint1_t  pci_pm_l12_supported;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PciPmL12Supported
        _m01 uint1_t  pci_pm_l11_supported;           //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .PciPmL11Supported
        _m02 uint1_t  aspm_l12_supported;             //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .AspmL12Supported
        _m03 uint1_t  aspm_l11_supported;             //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .AspmL11Supported
        _m04 uint1_t  l1_pm_ss_supported;             //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .L1PmSsSupported
        _m05 uint3_t  rsvd;                           //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .Rsvd
        _m06 uint8_t  port_common_mode_restore_time;  //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .PortCommonModeRestoreTime
        _m07 uint2_t  port_t_power_on_scale;          //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .PortTPowerOnScale
        _m08 uint1_t  rsvd2;                          //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .Rsvd2
        _m09 uint5_t  port_t_power_on_value;          //{ +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 } | .PortTPowerOnValue
        _m10 uint8_t  rsvd3;                          //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .Rsvd3
        _m11 uint32_t as_ulong;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                    
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER.$", 0x4, true, 0xff2ccfd13658474b );                              
        SDK_FIXED_SIZE( express_l1_pm_ss_capabilities_register_t, 0x4 );                              
    };                                              
};
#include "magic/express_l1_pm_ss_capabilities_register_t.end.hpp"
SDK_VERIFY( union pci::express_l1_pm_ss_capabilities_register_t, 0x4 );
