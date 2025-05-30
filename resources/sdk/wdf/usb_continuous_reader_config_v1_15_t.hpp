#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_continuous_reader_config_v1_15_t.start.hpp"
namespace wdf
{
    struct wdfmemory_t;
    struct wdfusbpipe_t;
    struct object_attributes_v1_15_t;

    // [struct _WDF_USB_CONTINUOUS_READER_CONFIG_V1_15]
    // => Windows 10 v1607
    //
    struct usb_continuous_reader_config_v1_15_t                                                 
    {                                                                                           
        using pfn_wdf_usb_reader_completion_routine_t = sdk::function<void(struct wdf::wdfusbpipe_t*, struct wdf::wdfmemory_t*, uint64_t, void*)>*;                                          
        using pfn_wdf_usb_readers_failed_t =            sdk::function<uint8_t(struct wdf::wdfusbpipe_t*, int32_t, int32_t)>*;                                          
                                                                                                
        // Windows 10 v1607                                                                     
        //                                                                                      
        _m00 uint32_t                                 size;                                       //{ +0x0000    } | .Size
        _m01 uint64_t                                 transfer_length;                            //{ +0x0008    } | .TransferLength
        _m02 uint64_t                                 header_length;                              //{ +0x0010    } | .HeaderLength
        _m03 uint64_t                                 trailer_length;                             //{ +0x0018    } | .TrailerLength
        _m04 uint8_t                                  num_pending_reads;                          //{ +0x0020    } | .NumPendingReads
        _m05 struct wdf::object_attributes_v1_15_t*   buffer_attributes;                          //{ +0x0028    } | .BufferAttributes
        _m06 pfn_wdf_usb_reader_completion_routine_t  evt_usb_target_pipe_read_complete;          //{ +0x0030    } | .EvtUsbTargetPipeReadComplete
        _m07 void*                                    evt_usb_target_pipe_read_complete_context;  //{ +0x0038    } | .EvtUsbTargetPipeReadCompleteContext
        _m08 pfn_wdf_usb_readers_failed_t             evt_usb_target_pipe_readers_failed;         //{ +0x0040    } | .EvtUsbTargetPipeReadersFailed
                                                                                                
        SDK_MAGIC_PROPERTIES( "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_15.$", 0x0, false, 0x7f05a36718f67a32 );                                          
        SDK_FIXED_SIZE( usb_continuous_reader_config_v1_15_t, 0x48 );                                          
    };                                                                                          
};
#include "magic/usb_continuous_reader_config_v1_15_t.end.hpp"
SDK_VERIFY( struct wdf::usb_continuous_reader_config_v1_15_t, 0x48 );
