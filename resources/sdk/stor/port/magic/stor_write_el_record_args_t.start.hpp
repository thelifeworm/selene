#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_WRITE_EL_RECORD_ARGS.TraceContext", trace_context, 0x0, 0x40, true, 0xd83498193e30836c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_WRITE_EL_RECORD_ARGS.ErrorLogPacket", error_log_packet, 0x40, 0x40, true, 0x55da449a874461e4)
#else
#define _m00
#define _m01
#endif