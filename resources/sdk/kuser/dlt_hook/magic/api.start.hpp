#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$getDLT@DLT_HOOK$win32kbase.sys", 0x0, 0x0, false, 0xe66aaffb22ca01d6)
#else
#define _m0(...) __VA_ARGS__
#endif