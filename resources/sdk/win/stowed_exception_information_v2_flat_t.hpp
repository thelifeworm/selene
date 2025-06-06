#pragma once
#include <sdkgen/support_library.hpp>
#include "stowed_exception_information_header_t.hpp"

#include "magic/stowed_exception_information_v2_flat_t.start.hpp"
namespace win
{
    // [struct _STOWED_EXCEPTION_INFORMATION_V2_FLAT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stowed_exception_information_v2_flat_t                         
    {                                                                     
        using stowed_exception_information_header_t = struct win::stowed_exception_information_header_t;                      
                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                
        _m00 stowed_exception_information_header_t  header;                 //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 sdk::hresult                           result_code;            //{ +0x0008    +0x0008    +0x0008    } | .ResultCode
        _m02 uint2_t                                exception_form;         //{ +0x000c@0  +0x000c@0  +0x000c@0  } | .ExceptionForm
        _m03 uint30_t                               thread_id;              //{ +0x000c@2  +0x000c@2  +0x000c@2  } | .ThreadId
        _m04 void*                                  exception_address;      //{ +0x0010    +0x0010    +0x0010    } | .ExceptionAddress
        _m05 uint32_t                               stack_trace_word_size;  //{ +0x0018    +0x0018    +0x0018    } | .StackTraceWordSize
        _m06 uint32_t                               stack_trace_words;      //{ +0x001c    +0x001c    +0x001c    } | .StackTraceWords
        _m07 sdk::array<void*, 512>                 stack_trace;            //{ +0x0020    +0x0020    +0x0020    } | .StackTrace
        _m08 wchar_t*                               error_text;             //{ +0x0010    +0x0010    +0x0010    } | .ErrorText
        _m09 uint32_t                               nested_exception_type;  //{ +0x1020    +0x1020    +0x1020    } | .NestedExceptionType
        _m10 void*                                  nested_exception;       //{ +0x1028    +0x1028    +0x1028    } | .NestedException
                                                                          
        SDK_MAGIC_PROPERTIES( "_STOWED_EXCEPTION_INFORMATION_V2_FLAT.$", 0x1030, true, 0xf5d20af3fe7bab2d );                      
        SDK_FIXED_SIZE( stowed_exception_information_v2_flat_t, 0x1030 );                      
    };                                                                    
};
#include "magic/stowed_exception_information_v2_flat_t.end.hpp"
SDK_VERIFY( struct win::stowed_exception_information_v2_flat_t, 0x1030 );
