#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct pohandle_t; }

#include "magic/work_complete_perf_state_t.start.hpp"
namespace pep
{
    // [struct _PEP_WORK_COMPLETE_PERF_STATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct work_complete_perf_state_t             
    {                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                        
        _m00 struct nt::pohandle_t* device_handle;  //{ +0x0000    +0x0000    +0x0000    } | .DeviceHandle
        _m01 uint32_t               component;      //{ +0x0008    +0x0008    +0x0008    } | .Component
        _m02 uint8_t                succeeded;      //{ +0x000c    +0x000c    +0x000c    } | .Succeeded
                                                  
        SDK_MAGIC_PROPERTIES( "_PEP_WORK_COMPLETE_PERF_STATE.$", 0x10, true, 0x7a0c80e5cecb1057 );              
        SDK_FIXED_SIZE( work_complete_perf_state_t, 0x10 );              
    };                                            
};
#include "magic/work_complete_perf_state_t.end.hpp"
SDK_VERIFY( struct pep::work_complete_perf_state_t, 0x10 );
