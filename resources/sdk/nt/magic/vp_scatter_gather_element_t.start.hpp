#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_VP_SCATTER_GATHER_ELEMENT.Address", address, 0x0, 0x40, true, 0x86d218a8033be37a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VP_SCATTER_GATHER_ELEMENT.Length", length, 0x40, 0x20, true, 0x974bec02ae366d05)
#else
#define _m00
#define _m01
#endif