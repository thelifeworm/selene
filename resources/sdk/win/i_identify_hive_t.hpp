#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IIdentifyHive]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_identify_hive_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "IIdentifyHive.$", 0x8, true, 0x4b99944ff136cae6 );
        SDK_FIXED_SIZE( i_identify_hive_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::i_identify_hive_t, 0x8 );
