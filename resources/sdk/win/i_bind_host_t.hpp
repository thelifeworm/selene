#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IBindHost]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_bind_host_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "IBindHost.$", 0x8, true, 0x6a2a134d71dfd232 );
        SDK_FIXED_SIZE( i_bind_host_t, 0x8 );
    };                  
};
SDK_VERIFY( struct win::i_bind_host_t, 0x8 );
