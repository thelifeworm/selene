#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_firmware_download_t.start.hpp"
namespace stor::port
{
    // [struct NVME_CDW11_FIRMWARE_DOWNLOAD]
    // => Windows 11
    //
    struct nvme_cdw11_firmware_download_t
    {                                    
        // Windows 11      
        //                 
        _m00 uint32_t ofst;                //{ +0x0000    } | .OFST
                                         
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_FIRMWARE_DOWNLOAD.$", 0x0, false, 0xc6f7df59c8e2986d );     
        SDK_FIXED_SIZE( nvme_cdw11_firmware_download_t, 0x4 );     
    };                                   
};
#include "magic/nvme_cdw11_firmware_download_t.end.hpp"
SDK_VERIFY( struct stor::port::nvme_cdw11_firmware_download_t, 0x4 );
