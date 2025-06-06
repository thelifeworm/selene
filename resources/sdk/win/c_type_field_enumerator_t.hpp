#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_type_field_enumerator_t.start.hpp"
namespace win
{
    // [class CTypeFieldEnumerator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_type_field_enumerator_t
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t tk_type;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._tkType
                                   
        SDK_MAGIC_PROPERTIES( "CTypeFieldEnumerator.$", 0x20, true, 0xab78fcb387082d4a );        
        SDK_FIXED_SIZE( c_type_field_enumerator_t, 0x20 );        
    };                             
};
#include "magic/c_type_field_enumerator_t.end.hpp"
SDK_VERIFY( class win::c_type_field_enumerator_t, 0x20 );
