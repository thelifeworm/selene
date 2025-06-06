#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"
#include "cert_public_key_info_t.hpp"

#include "magic/cert_request_info_t.start.hpp"
namespace win
{
    struct crypt_attribute_t;

    // [struct _CERT_REQUEST_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_request_info_t                                          
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                              
        _m00 uint32_t                           dw_version;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 struct win::cryptoapi_blob_t       subject;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Subject
        _m02 struct win::cert_public_key_info_t subject_public_key_info;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SubjectPublicKeyInfo
        _m03 uint32_t                           c_attribute;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .cAttribute
        _m04 struct win::crypt_attribute_t*     rg_attribute;             //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .rgAttribute
                                                                        
        SDK_MAGIC_PROPERTIES( "_CERT_REQUEST_INFO.$", 0x58, true, 0x1bd9e84c6880d4c9 );                        
        SDK_FIXED_SIZE( cert_request_info_t, 0x58 );                        
    };                                                                  
};
#include "magic/cert_request_info_t.end.hpp"
SDK_VERIFY( struct win::cert_request_info_t, 0x58 );
