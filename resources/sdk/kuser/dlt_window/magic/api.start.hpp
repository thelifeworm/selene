#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$getDLT@DLT_WINDOW$win32kbase.sys", 0x127860, 0x0, true, 0x45b71828d1232ead)
#else
#define _m0(...) __VA_ARGS__
#endif