#pragma once
#include <sdkgen/support_library.hpp>
#include "express_ari_control_register_t.hpp"
#include "express_ari_capability_register_t.hpp"
#include "express_enhanced_capability_header_t.hpp"

#include "magic/express_ari_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_ARI_CAPABILITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_ari_capability_t                                      
    {                                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                               
        _m00 struct pci::express_enhanced_capability_header_t header;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct pci::express_ari_capability_register_t    capability;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Capability
        _m02 struct pci::express_ari_control_register_t       control;     //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .Control
                                                                         
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_ARI_CAPABILITY.$", 0x8, true, 0x6694012ff08c0ddd );           
        SDK_FIXED_SIZE( express_ari_capability_t, 0x8 );                 
    };                                                                   
};
#include "magic/express_ari_capability_t.end.hpp"
SDK_VERIFY( struct pci::express_ari_capability_t, 0x8 );
