#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMonikerProp]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_moniker_prop_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IMonikerProp.$", 0x8, true, 0xac15a0a96b485d22 );
        SDK_FIXED_SIZE( i_moniker_prop_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_moniker_prop_t, 0x8 );
