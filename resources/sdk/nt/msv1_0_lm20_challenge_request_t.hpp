#pragma once
#include <sdkgen/support_library.hpp>
#include "msv1_0_protocol_message_type_t.hpp"

#include "magic/msv1_0_lm20_challenge_request_t.start.hpp"
namespace nt
{
    // [struct _MSV1_0_LM20_CHALLENGE_REQUEST]
    // => WDK 10 (NV)
    //
    struct msv1_0_lm20_challenge_request_t                        
    {                                                             
        // WDK 10                                                 
        //                                                        
        _m00 enum nt::msv1_0_protocol_message_type_t message_type;  //{ +0x0000    } | .MessageType
                                                                  
        SDK_NONVOL_PROPERTIES( "_MSV1_0_LM20_CHALLENGE_REQUEST.$", 0x0, false, 0xdf7f255b248f28bf );             
        SDK_FIXED_SIZE( msv1_0_lm20_challenge_request_t, 0x4 );             
    };                                                            
};
#include "magic/msv1_0_lm20_challenge_request_t.end.hpp"
SDK_VERIFY( struct nt::msv1_0_lm20_challenge_request_t, 0x4 );
