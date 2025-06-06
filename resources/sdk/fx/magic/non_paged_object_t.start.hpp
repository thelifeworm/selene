#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxNonPagedObject.m_Type", m_type, 0x40, 0x10, true, 0xce9fdf4ecac5b04b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxNonPagedObject.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xe8477b80dee17b58)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxNonPagedObject.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xe3c64fc7ce3cd4d0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxNonPagedObject.m_Globals", m_globals, 0x80, 0x40, true, 0x73225ebe071261e5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxNonPagedObject.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xb0f986c4722f5a36)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNonPagedObject.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x613c3a530fcddff4, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNonPagedObject.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x545ffea6b794ddaa, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNonPagedObject.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xeccc1a22550d118a, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNonPagedObject.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xce1ec81cd8ad7e7, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNonPagedObject.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x6f930d9d1653a72b, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNonPagedObject.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x349c4419004f5937, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNonPagedObject.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xe2c11eceae205a01, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNonPagedObject.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xfe714d19f40c4a49, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNonPagedObject.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x24bfeefefaa492de, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxNonPagedObject.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xb865474d34f93bd7)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxNonPagedObject.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x8e88370e1c22ba39)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxNonPagedObject.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xb9562751abfdee78)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxNonPagedObject.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x30cf864c7fc21382)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxNonPagedObject.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xa96ffd69e93430de)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxNonPagedObject.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xdf747c1632a8a9d0)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxNonPagedObject.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x90f694696055b177)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxNonPagedObject.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x73b83a4c718ff23d)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxNonPagedObject.m_Device", m_device, 0x300, 0x40, true, 0xa1c63d8597325c85)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxNonPagedObject.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xa1770cfa350c5d0f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#endif