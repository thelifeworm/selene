#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDisposeList.m_Type", m_type, 0x40, 0x10, true, 0xca7fe16e9c111412)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDisposeList.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x9ad489a15d2b14a6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxDisposeList.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xa41e87ce02be7a3c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxDisposeList.m_Globals", m_globals, 0x80, 0x40, true, 0x5fe2b2100cf440e1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDisposeList.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x7613830b2f597785)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDisposeList.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xdccbb792c9edf367, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDisposeList.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x31da397ebd0af7e1, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDisposeList.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x7b2fdf6fe958f4c1, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDisposeList.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x10ec2957105e19fa, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDisposeList.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x8e679fd53265850e, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDisposeList.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x8e9ce29227c49f12, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDisposeList.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xd19a7c7f34c17e9a, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDisposeList.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xa7c74b71b5aece6c, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDisposeList.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x847064503939e3f4, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxDisposeList.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xd8ceed3ef07b653b)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDisposeList.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x4611b2e4dd0322b4)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDisposeList.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x2f40985bf551f931)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDisposeList.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x454676ca35b14489)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxDisposeList.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x8bac54e6c562fb6e)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDisposeList.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x1fc589d963017414)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxDisposeList.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x1cd1597d832df743)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxDisposeList.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x7c6e711b3067d077)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxDisposeList.m_Device", m_device, 0x300, 0x40, true, 0x2910a8778344c6f)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDisposeList.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x3164b2646dabe9a8)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxDisposeList.m_List", m_list, 0x3c0, 0x40, true, 0x565ed0033143f48f)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t**), "FxDisposeList.m_ListEnd", m_list_end, 0x400, 0x40, true, 0x62248ab391695b1c)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "FxDisposeList.m_WorkItemThread", m_work_item_thread, 0x440, 0x40, true, 0x5c9f05970fd2997b)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::system_work_item_t*), "FxDisposeList.m_SystemWorkItem", m_system_work_item, 0x480, 0x40, true, 0x888c41ae48c3d8fd)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxDisposeList.m_WdmObject", m_wdm_object, 0x4c0, 0x40, true, 0xae284161d76442dc)
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
#define _m24
#define _m25
#define _m26
#define _m27
#define _m28
#endif