#pragma once
#include <sdkgen/support_library.hpp>
#include "multiplane_overlay_attributes2_t.hpp"

#include "magic/multiplane_overlay_plane2_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_MULTIPLANE_OVERLAY_PLANE2]
    // => WDK 10 (NV)
    //
    struct multiplane_overlay_plane2_t                                        
    {                                                                         
        // WDK 10                                                             
        //                                                                    
        _m00 uint32_t                                      layer_index;         //{ +0x0000    } | .LayerIndex
        _m01 int32_t                                       enabled;             //{ +0x0004    } | .Enabled
        _m02 uint32_t                                      allocation_segment;  //{ +0x0008    } | .AllocationSegment
        _m03 int64_t                                       allocation_address;  //{ +0x0010    } | .AllocationAddress
        _m04 void*                                         h_allocation;        //{ +0x0018    } | .hAllocation
        _m05 struct dxgk::multiplane_overlay_attributes2_t plane_attributes;    //{ +0x0020    } | .PlaneAttributes
                                                                              
        SDK_NONVOL_PROPERTIES( "_DXGK_MULTIPLANE_OVERLAY_PLANE2.$", 0x0, false, 0xfec3968283b0fa59 );                   
        SDK_FIXED_SIZE( multiplane_overlay_plane2_t, 0x80 );                   
    };                                                                        
};
#include "magic/multiplane_overlay_plane2_t.end.hpp"
SDK_VERIFY( struct dxgk::multiplane_overlay_plane2_t, 0x80 );
