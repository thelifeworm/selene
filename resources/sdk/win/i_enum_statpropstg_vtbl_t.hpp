#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;        }
namespace tag { struct statpropstg_t; }

#include "magic/i_enum_statpropstg_vtbl_t.start.hpp"
namespace win
{
    struct i_enum_statpropstg_t;

    // [struct IEnumSTATPROPSTGVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_enum_statpropstg_vtbl_t            
    {                                           
        using query_interface_t = sdk::function<sdk::hresult(struct win::i_enum_statpropstg_t*, const struct nt::guid_t*, void**)>*;                
        using add_ref_t =         sdk::function<uint32_t(struct win::i_enum_statpropstg_t*)>*;                
        using release_t =         sdk::function<uint32_t(struct win::i_enum_statpropstg_t*)>*;                
        using next_t =            sdk::function<sdk::hresult(struct win::i_enum_statpropstg_t*, uint32_t, struct tag::statpropstg_t*, uint32_t*)>*;                
        using skip_t =            sdk::function<sdk::hresult(struct win::i_enum_statpropstg_t*, uint32_t)>*;                
        using reset_t =           sdk::function<sdk::hresult(struct win::i_enum_statpropstg_t*)>*;                
        using clone_t =           sdk::function<sdk::hresult(struct win::i_enum_statpropstg_t*, struct win::i_enum_statpropstg_t**)>*;                
                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                      
        _m00 query_interface_t  query_interface;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t          add_ref;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t          release;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 next_t             next;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Next
        _m04 skip_t             skip;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Skip
        _m05 reset_t            reset;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Reset
        _m06 clone_t            clone;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Clone
                                                
        SDK_MAGIC_PROPERTIES( "IEnumSTATPROPSTGVtbl.$", 0x38, true, 0x48e3552d39b23a5c );                
        SDK_FIXED_SIZE( i_enum_statpropstg_vtbl_t, 0x38 );                
    };                                          
};
#include "magic/i_enum_statpropstg_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_enum_statpropstg_vtbl_t, 0x38 );
