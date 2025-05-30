#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_AllowFullTrustUWP]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_traits_feature_allow_full_trust_uwp_t
    {                                                   
                                                        
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_AllowFullTrustUWP.$", 0x1, true, 0x43c3a34444144aea );
        SDK_FIXED_SIZE( feature_traits_feature_allow_full_trust_uwp_t, 0x1 );
    };                                                  
};
SDK_VERIFY( struct wil::feature_traits_feature_allow_full_trust_uwp_t, 0x1 );
