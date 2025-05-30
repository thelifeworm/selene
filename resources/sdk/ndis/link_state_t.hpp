#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "net_if_media_duplex_state_t.hpp"
#include "supported_pause_functions_t.hpp"
#include "net_if_media_connect_state_t.hpp"

#include "magic/link_state_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_LINK_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct link_state_t                                                     
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                  
        _m00 struct ndis::object_header_t            header;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 enum ndis::net_if_media_connect_state_t media_connect_state;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MediaConnectState
        _m02 enum ndis::net_if_media_duplex_state_t  media_duplex_state;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MediaDuplexState
        _m03 uint64_t                                xmit_link_speed;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .XmitLinkSpeed
        _m04 uint64_t                                rcv_link_speed;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RcvLinkSpeed
        _m05 enum ndis::supported_pause_functions_t  pause_functions;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PauseFunctions
        _m06 uint32_t                                auto_negotiation_flags;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .AutoNegotiationFlags
                                                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_LINK_STATE.$", 0x28, true, 0x3933b7f34e27e36b );                       
        SDK_FIXED_SIZE( link_state_t, 0x28 );                               
    };                                                                      
};
#include "magic/link_state_t.end.hpp"
SDK_VERIFY( struct ndis::link_state_t, 0x28 );
