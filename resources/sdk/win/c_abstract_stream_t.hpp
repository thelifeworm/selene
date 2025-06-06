#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_abstract_stream_t.start.hpp"
namespace win
{
    // [class CAbstractStream]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_abstract_stream_t         
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                            
        _m00 volatile uint32_t c_refs;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._cRefs
                                      
        SDK_MAGIC_PROPERTIES( "CAbstractStream.$", 0x10, true, 0x243fbdb3987f5b99 );       
        SDK_FIXED_SIZE( c_abstract_stream_t, 0x10 );       
    };                                
};
#include "magic/c_abstract_stream_t.end.hpp"
SDK_VERIFY( class win::c_abstract_stream_t, 0x10 );
