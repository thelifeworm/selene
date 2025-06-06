#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_AppDefaultsAreRestricted]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_app_defaults_are_restricted_t
    {                                                          
                                                               
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_AppDefaultsAreRestricted.$", 0x1, true, 0xfa0c4aa0cc8dfade );
        SDK_FIXED_SIZE( feature_traits_feature_app_defaults_are_restricted_t, 0x1 );
    };                                                         
};
SDK_VERIFY( struct wil::feature_traits_feature_app_defaults_are_restricted_t, 0x1 );
