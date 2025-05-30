#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/slice_h264_short_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_Slice_H264_Short]
    // => WDK 10 (NV)
    //
    struct slice_h264_short_t                  
    {                                          
        // WDK 10                              
        //                                     
        _m00 uint32_t bsna_lunit_data_location;  //{ +0x0000    } | .BSNALunitDataLocation
        _m01 uint32_t slice_bytes_in_buffer;     //{ +0x0004    } | .SliceBytesInBuffer
        _m02 uint16_t w_bad_slice_chopping;      //{ +0x0008    } | .wBadSliceChopping
                                               
        SDK_NONVOL_PROPERTIES( "_DXVA_Slice_H264_Short.$", 0x0, false, 0x86f095798eb3a5ee );                         
        SDK_FIXED_SIZE( slice_h264_short_t, 0xa );                         
    };                                         
};
#include "magic/slice_h264_short_t.end.hpp"
SDK_VERIFY( struct dxva::slice_h264_short_t, 0xa );
