#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.IntPtr[]
struct IntPtrU5BU5D_t271461801;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t1279208843;
// System.Collections.ArrayList
struct ArrayList_t1090370772;
// System.ComponentModel.LicenseContext
struct LicenseContext_t3718458268;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t3397409428;
// System.Attribute[]
struct AttributeU5BU5D_t983122643;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1804308463;
// System.Collections.IComparer
struct IComparer_t820638711;
// System.Delegate
struct Delegate_t346420667;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1040753827;
// System.ComponentModel.ListEntry
struct ListEntry_t4294807321;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t421778690;
// System.ComponentModel.ISite
struct ISite_t2505511219;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t192055412;
// System.Collections.Hashtable
struct Hashtable_t188184851;
// System.Char[]
struct CharU5BU5D_t3282355116;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t2125959807;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_t3135707549;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t3383610232;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef EXCEPTION_T76254738_H
#define EXCEPTION_T76254738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t76254738  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t271461801* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t76254738 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t76254738, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t271461801* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t271461801** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t271461801* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t76254738, ___inner_exception_1)); }
	inline Exception_t76254738 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t76254738 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t76254738 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t76254738, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t76254738, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t76254738, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t76254738, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t76254738, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t76254738, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t76254738, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t76254738, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t76254738, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T76254738_H
#ifndef MEMBERDESCRIPTORCOMPARER_T4257205960_H
#define MEMBERDESCRIPTORCOMPARER_T4257205960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor/MemberDescriptorComparer
struct  MemberDescriptorComparer_t4257205960  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTORCOMPARER_T4257205960_H
#ifndef LISTSORTDESCRIPTIONCOLLECTION_T90866227_H
#define LISTSORTDESCRIPTIONCOLLECTION_T90866227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDescriptionCollection
struct  ListSortDescriptionCollection_t90866227  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.ListSortDescriptionCollection::list
	ArrayList_t1090370772 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ListSortDescriptionCollection_t90866227, ___list_0)); }
	inline ArrayList_t1090370772 * get_list_0() const { return ___list_0; }
	inline ArrayList_t1090370772 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t1090370772 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTSORTDESCRIPTIONCOLLECTION_T90866227_H
#ifndef VALUETYPE_T4091819281_H
#define VALUETYPE_T4091819281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4091819281  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4091819281_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4091819281_marshaled_com
{
};
#endif // VALUETYPE_T4091819281_H
#ifndef LICENSEPROVIDER_T480757215_H
#define LICENSEPROVIDER_T480757215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseProvider
struct  LicenseProvider_t480757215  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEPROVIDER_T480757215_H
#ifndef LICENSEMANAGER_T1818735674_H
#define LICENSEMANAGER_T1818735674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseManager
struct  LicenseManager_t1818735674  : public RuntimeObject
{
public:

public:
};

struct LicenseManager_t1818735674_StaticFields
{
public:
	// System.ComponentModel.LicenseContext System.ComponentModel.LicenseManager::mycontext
	LicenseContext_t3718458268 * ___mycontext_0;
	// System.Object System.ComponentModel.LicenseManager::contextLockUser
	RuntimeObject * ___contextLockUser_1;
	// System.Object System.ComponentModel.LicenseManager::lockObject
	RuntimeObject * ___lockObject_2;

public:
	inline static int32_t get_offset_of_mycontext_0() { return static_cast<int32_t>(offsetof(LicenseManager_t1818735674_StaticFields, ___mycontext_0)); }
	inline LicenseContext_t3718458268 * get_mycontext_0() const { return ___mycontext_0; }
	inline LicenseContext_t3718458268 ** get_address_of_mycontext_0() { return &___mycontext_0; }
	inline void set_mycontext_0(LicenseContext_t3718458268 * value)
	{
		___mycontext_0 = value;
		Il2CppCodeGenWriteBarrier((&___mycontext_0), value);
	}

	inline static int32_t get_offset_of_contextLockUser_1() { return static_cast<int32_t>(offsetof(LicenseManager_t1818735674_StaticFields, ___contextLockUser_1)); }
	inline RuntimeObject * get_contextLockUser_1() const { return ___contextLockUser_1; }
	inline RuntimeObject ** get_address_of_contextLockUser_1() { return &___contextLockUser_1; }
	inline void set_contextLockUser_1(RuntimeObject * value)
	{
		___contextLockUser_1 = value;
		Il2CppCodeGenWriteBarrier((&___contextLockUser_1), value);
	}

	inline static int32_t get_offset_of_lockObject_2() { return static_cast<int32_t>(offsetof(LicenseManager_t1818735674_StaticFields, ___lockObject_2)); }
	inline RuntimeObject * get_lockObject_2() const { return ___lockObject_2; }
	inline RuntimeObject ** get_address_of_lockObject_2() { return &___lockObject_2; }
	inline void set_lockObject_2(RuntimeObject * value)
	{
		___lockObject_2 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEMANAGER_T1818735674_H
#ifndef LICENSECONTEXT_T3718458268_H
#define LICENSECONTEXT_T3718458268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseContext
struct  LicenseContext_t3718458268  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSECONTEXT_T3718458268_H
#ifndef CUSTOMTYPEDESCRIPTOR_T4164745589_H
#define CUSTOMTYPEDESCRIPTOR_T4164745589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CustomTypeDescriptor
struct  CustomTypeDescriptor_t4164745589  : public RuntimeObject
{
public:
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.CustomTypeDescriptor::_parent
	RuntimeObject* ____parent_0;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(CustomTypeDescriptor_t4164745589, ____parent_0)); }
	inline RuntimeObject* get__parent_0() const { return ____parent_0; }
	inline RuntimeObject** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(RuntimeObject* value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMTYPEDESCRIPTOR_T4164745589_H
#ifndef CULTUREINFOCOMPARER_T1977175130_H
#define CULTUREINFOCOMPARER_T1977175130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureInfoComparer
struct  CultureInfoComparer_t1977175130  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCOMPARER_T1977175130_H
#ifndef LICENSE_T1646999994_H
#define LICENSE_T1646999994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.License
struct  License_t1646999994  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSE_T1646999994_H
#ifndef MEMBERDESCRIPTOR_T1395163271_H
#define MEMBERDESCRIPTOR_T1395163271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t1395163271  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attrs
	AttributeU5BU5D_t983122643* ___attrs_1;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attrCollection
	AttributeCollection_t1804308463 * ___attrCollection_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t1395163271, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t1395163271, ___attrs_1)); }
	inline AttributeU5BU5D_t983122643* get_attrs_1() const { return ___attrs_1; }
	inline AttributeU5BU5D_t983122643** get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(AttributeU5BU5D_t983122643* value)
	{
		___attrs_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrs_1), value);
	}

	inline static int32_t get_offset_of_attrCollection_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t1395163271, ___attrCollection_2)); }
	inline AttributeCollection_t1804308463 * get_attrCollection_2() const { return ___attrCollection_2; }
	inline AttributeCollection_t1804308463 ** get_address_of_attrCollection_2() { return &___attrCollection_2; }
	inline void set_attrCollection_2(AttributeCollection_t1804308463 * value)
	{
		___attrCollection_2 = value;
		Il2CppCodeGenWriteBarrier((&___attrCollection_2), value);
	}
};

struct MemberDescriptor_t1395163271_StaticFields
{
public:
	// System.Collections.IComparer System.ComponentModel.MemberDescriptor::default_comparer
	RuntimeObject* ___default_comparer_3;

public:
	inline static int32_t get_offset_of_default_comparer_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t1395163271_StaticFields, ___default_comparer_3)); }
	inline RuntimeObject* get_default_comparer_3() const { return ___default_comparer_3; }
	inline RuntimeObject** get_address_of_default_comparer_3() { return &___default_comparer_3; }
	inline void set_default_comparer_3(RuntimeObject* value)
	{
		___default_comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___default_comparer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTOR_T1395163271_H
#ifndef PROPERTYDESCRIPTORCOLLECTION_T1853078063_H
#define PROPERTYDESCRIPTORCOLLECTION_T1853078063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptorCollection
struct  PropertyDescriptorCollection_t1853078063  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.PropertyDescriptorCollection::properties
	ArrayList_t1090370772 * ___properties_1;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::readOnly
	bool ___readOnly_2;

public:
	inline static int32_t get_offset_of_properties_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t1853078063, ___properties_1)); }
	inline ArrayList_t1090370772 * get_properties_1() const { return ___properties_1; }
	inline ArrayList_t1090370772 ** get_address_of_properties_1() { return &___properties_1; }
	inline void set_properties_1(ArrayList_t1090370772 * value)
	{
		___properties_1 = value;
		Il2CppCodeGenWriteBarrier((&___properties_1), value);
	}

	inline static int32_t get_offset_of_readOnly_2() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t1853078063, ___readOnly_2)); }
	inline bool get_readOnly_2() const { return ___readOnly_2; }
	inline bool* get_address_of_readOnly_2() { return &___readOnly_2; }
	inline void set_readOnly_2(bool value)
	{
		___readOnly_2 = value;
	}
};

struct PropertyDescriptorCollection_t1853078063_StaticFields
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Empty
	PropertyDescriptorCollection_t1853078063 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t1853078063_StaticFields, ___Empty_0)); }
	inline PropertyDescriptorCollection_t1853078063 * get_Empty_0() const { return ___Empty_0; }
	inline PropertyDescriptorCollection_t1853078063 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(PropertyDescriptorCollection_t1853078063 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTORCOLLECTION_T1853078063_H
#ifndef ENUMCOMPARER_T2134029618_H
#define ENUMCOMPARER_T2134029618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter/EnumComparer
struct  EnumComparer_t2134029618  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCOMPARER_T2134029618_H
#ifndef EVENTDESCRIPTORCOLLECTION_T2740790729_H
#define EVENTDESCRIPTORCOLLECTION_T2740790729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptorCollection
struct  EventDescriptorCollection_t2740790729  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.EventDescriptorCollection::eventList
	ArrayList_t1090370772 * ___eventList_0;
	// System.Boolean System.ComponentModel.EventDescriptorCollection::isReadOnly
	bool ___isReadOnly_1;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2740790729, ___eventList_0)); }
	inline ArrayList_t1090370772 * get_eventList_0() const { return ___eventList_0; }
	inline ArrayList_t1090370772 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(ArrayList_t1090370772 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_isReadOnly_1() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2740790729, ___isReadOnly_1)); }
	inline bool get_isReadOnly_1() const { return ___isReadOnly_1; }
	inline bool* get_address_of_isReadOnly_1() { return &___isReadOnly_1; }
	inline void set_isReadOnly_1(bool value)
	{
		___isReadOnly_1 = value;
	}
};

struct EventDescriptorCollection_t2740790729_StaticFields
{
public:
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.EventDescriptorCollection::Empty
	EventDescriptorCollection_t2740790729 * ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t2740790729_StaticFields, ___Empty_2)); }
	inline EventDescriptorCollection_t2740790729 * get_Empty_2() const { return ___Empty_2; }
	inline EventDescriptorCollection_t2740790729 ** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(EventDescriptorCollection_t2740790729 * value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTORCOLLECTION_T2740790729_H
#ifndef TYPECONVERTER_T192055412_H
#define TYPECONVERTER_T192055412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t192055412  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T192055412_H
#ifndef LISTENTRY_T4294807321_H
#define LISTENTRY_T4294807321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListEntry
struct  ListEntry_t4294807321  : public RuntimeObject
{
public:
	// System.Object System.ComponentModel.ListEntry::key
	RuntimeObject * ___key_0;
	// System.Delegate System.ComponentModel.ListEntry::value
	Delegate_t346420667 * ___value_1;
	// System.ComponentModel.ListEntry System.ComponentModel.ListEntry::next
	ListEntry_t4294807321 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(ListEntry_t4294807321, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ListEntry_t4294807321, ___value_1)); }
	inline Delegate_t346420667 * get_value_1() const { return ___value_1; }
	inline Delegate_t346420667 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Delegate_t346420667 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(ListEntry_t4294807321, ___next_2)); }
	inline ListEntry_t4294807321 * get_next_2() const { return ___next_2; }
	inline ListEntry_t4294807321 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(ListEntry_t4294807321 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENTRY_T4294807321_H
#ifndef ATTRIBUTE_T2136411158_H
#define ATTRIBUTE_T2136411158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2136411158  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2136411158_H
#ifndef EVENTARGS_T3141815178_H
#define EVENTARGS_T3141815178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3141815178  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3141815178_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3141815178 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3141815178_StaticFields, ___Empty_0)); }
	inline EventArgs_t3141815178 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3141815178 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3141815178 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3141815178_H
#ifndef MARSHALBYREFOBJECT_T2387283355_H
#define MARSHALBYREFOBJECT_T2387283355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2387283355  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t1040753827 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2387283355, ____identity_0)); }
	inline ServerIdentity_t1040753827 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t1040753827 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t1040753827 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2387283355_H
#ifndef READONLYCOLLECTIONBASE_T594653574_H
#define READONLYCOLLECTIONBASE_T594653574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t594653574  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t1090370772 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t594653574, ___list_0)); }
	inline ArrayList_t1090370772 * get_list_0() const { return ___list_0; }
	inline ArrayList_t1090370772 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t1090370772 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T594653574_H
#ifndef EVENTHANDLERLIST_T421778690_H
#define EVENTHANDLERLIST_T421778690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList
struct  EventHandlerList_t421778690  : public RuntimeObject
{
public:
	// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::entries
	ListEntry_t4294807321 * ___entries_0;
	// System.Delegate System.ComponentModel.EventHandlerList::null_entry
	Delegate_t346420667 * ___null_entry_1;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(EventHandlerList_t421778690, ___entries_0)); }
	inline ListEntry_t4294807321 * get_entries_0() const { return ___entries_0; }
	inline ListEntry_t4294807321 ** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(ListEntry_t4294807321 * value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier((&___entries_0), value);
	}

	inline static int32_t get_offset_of_null_entry_1() { return static_cast<int32_t>(offsetof(EventHandlerList_t421778690, ___null_entry_1)); }
	inline Delegate_t346420667 * get_null_entry_1() const { return ___null_entry_1; }
	inline Delegate_t346420667 ** get_address_of_null_entry_1() { return &___null_entry_1; }
	inline void set_null_entry_1(Delegate_t346420667 * value)
	{
		___null_entry_1 = value;
		Il2CppCodeGenWriteBarrier((&___null_entry_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLERLIST_T421778690_H
#ifndef MARSHALBYVALUECOMPONENT_T3672154591_H
#define MARSHALBYVALUECOMPONENT_T3672154591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t3672154591  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::eventList
	EventHandlerList_t421778690 * ___eventList_0;
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	RuntimeObject* ___mySite_1;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	RuntimeObject * ___disposedEvent_2;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t3672154591, ___eventList_0)); }
	inline EventHandlerList_t421778690 * get_eventList_0() const { return ___eventList_0; }
	inline EventHandlerList_t421778690 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(EventHandlerList_t421778690 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_mySite_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t3672154591, ___mySite_1)); }
	inline RuntimeObject* get_mySite_1() const { return ___mySite_1; }
	inline RuntimeObject** get_address_of_mySite_1() { return &___mySite_1; }
	inline void set_mySite_1(RuntimeObject* value)
	{
		___mySite_1 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_1), value);
	}

	inline static int32_t get_offset_of_disposedEvent_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t3672154591, ___disposedEvent_2)); }
	inline RuntimeObject * get_disposedEvent_2() const { return ___disposedEvent_2; }
	inline RuntimeObject ** get_address_of_disposedEvent_2() { return &___disposedEvent_2; }
	inline void set_disposedEvent_2(RuntimeObject * value)
	{
		___disposedEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___disposedEvent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYVALUECOMPONENT_T3672154591_H
#ifndef LICFILELICENSEPROVIDER_T3855366030_H
#define LICFILELICENSEPROVIDER_T3855366030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicFileLicenseProvider
struct  LicFileLicenseProvider_t3855366030  : public LicenseProvider_t480757215
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICFILELICENSEPROVIDER_T3855366030_H
#ifndef LICENSEPROVIDERATTRIBUTE_T4227492568_H
#define LICENSEPROVIDERATTRIBUTE_T4227492568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseProviderAttribute
struct  LicenseProviderAttribute_t4227492568  : public Attribute_t2136411158
{
public:
	// System.Type System.ComponentModel.LicenseProviderAttribute::Provider
	Type_t * ___Provider_0;

public:
	inline static int32_t get_offset_of_Provider_0() { return static_cast<int32_t>(offsetof(LicenseProviderAttribute_t4227492568, ___Provider_0)); }
	inline Type_t * get_Provider_0() const { return ___Provider_0; }
	inline Type_t ** get_address_of_Provider_0() { return &___Provider_0; }
	inline void set_Provider_0(Type_t * value)
	{
		___Provider_0 = value;
		Il2CppCodeGenWriteBarrier((&___Provider_0), value);
	}
};

struct LicenseProviderAttribute_t4227492568_StaticFields
{
public:
	// System.ComponentModel.LicenseProviderAttribute System.ComponentModel.LicenseProviderAttribute::Default
	LicenseProviderAttribute_t4227492568 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(LicenseProviderAttribute_t4227492568_StaticFields, ___Default_1)); }
	inline LicenseProviderAttribute_t4227492568 * get_Default_1() const { return ___Default_1; }
	inline LicenseProviderAttribute_t4227492568 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(LicenseProviderAttribute_t4227492568 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEPROVIDERATTRIBUTE_T4227492568_H
#ifndef LISTBINDABLEATTRIBUTE_T757012783_H
#define LISTBINDABLEATTRIBUTE_T757012783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListBindableAttribute
struct  ListBindableAttribute_t757012783  : public Attribute_t2136411158
{
public:
	// System.Boolean System.ComponentModel.ListBindableAttribute::bindable
	bool ___bindable_3;

public:
	inline static int32_t get_offset_of_bindable_3() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t757012783, ___bindable_3)); }
	inline bool get_bindable_3() const { return ___bindable_3; }
	inline bool* get_address_of_bindable_3() { return &___bindable_3; }
	inline void set_bindable_3(bool value)
	{
		___bindable_3 = value;
	}
};

struct ListBindableAttribute_t757012783_StaticFields
{
public:
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Default
	ListBindableAttribute_t757012783 * ___Default_0;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::No
	ListBindableAttribute_t757012783 * ___No_1;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Yes
	ListBindableAttribute_t757012783 * ___Yes_2;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t757012783_StaticFields, ___Default_0)); }
	inline ListBindableAttribute_t757012783 * get_Default_0() const { return ___Default_0; }
	inline ListBindableAttribute_t757012783 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ListBindableAttribute_t757012783 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t757012783_StaticFields, ___No_1)); }
	inline ListBindableAttribute_t757012783 * get_No_1() const { return ___No_1; }
	inline ListBindableAttribute_t757012783 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ListBindableAttribute_t757012783 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t757012783_StaticFields, ___Yes_2)); }
	inline ListBindableAttribute_t757012783 * get_Yes_2() const { return ___Yes_2; }
	inline ListBindableAttribute_t757012783 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ListBindableAttribute_t757012783 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTBINDABLEATTRIBUTE_T757012783_H
#ifndef LICFILELICENSE_T1199352266_H
#define LICFILELICENSE_T1199352266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicFileLicense
struct  LicFileLicense_t1199352266  : public License_t1646999994
{
public:
	// System.String System.ComponentModel.LicFileLicense::_key
	String_t* ____key_0;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(LicFileLicense_t1199352266, ____key_0)); }
	inline String_t* get__key_0() const { return ____key_0; }
	inline String_t** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(String_t* value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICFILELICENSE_T1199352266_H
#ifndef NOTIFYPARENTPROPERTYATTRIBUTE_T3666634230_H
#define NOTIFYPARENTPROPERTYATTRIBUTE_T3666634230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NotifyParentPropertyAttribute
struct  NotifyParentPropertyAttribute_t3666634230  : public Attribute_t2136411158
{
public:
	// System.Boolean System.ComponentModel.NotifyParentPropertyAttribute::notifyParent
	bool ___notifyParent_0;

public:
	inline static int32_t get_offset_of_notifyParent_0() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t3666634230, ___notifyParent_0)); }
	inline bool get_notifyParent_0() const { return ___notifyParent_0; }
	inline bool* get_address_of_notifyParent_0() { return &___notifyParent_0; }
	inline void set_notifyParent_0(bool value)
	{
		___notifyParent_0 = value;
	}
};

struct NotifyParentPropertyAttribute_t3666634230_StaticFields
{
public:
	// System.ComponentModel.NotifyParentPropertyAttribute System.ComponentModel.NotifyParentPropertyAttribute::Default
	NotifyParentPropertyAttribute_t3666634230 * ___Default_1;
	// System.ComponentModel.NotifyParentPropertyAttribute System.ComponentModel.NotifyParentPropertyAttribute::No
	NotifyParentPropertyAttribute_t3666634230 * ___No_2;
	// System.ComponentModel.NotifyParentPropertyAttribute System.ComponentModel.NotifyParentPropertyAttribute::Yes
	NotifyParentPropertyAttribute_t3666634230 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t3666634230_StaticFields, ___Default_1)); }
	inline NotifyParentPropertyAttribute_t3666634230 * get_Default_1() const { return ___Default_1; }
	inline NotifyParentPropertyAttribute_t3666634230 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(NotifyParentPropertyAttribute_t3666634230 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t3666634230_StaticFields, ___No_2)); }
	inline NotifyParentPropertyAttribute_t3666634230 * get_No_2() const { return ___No_2; }
	inline NotifyParentPropertyAttribute_t3666634230 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(NotifyParentPropertyAttribute_t3666634230 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t3666634230_StaticFields, ___Yes_3)); }
	inline NotifyParentPropertyAttribute_t3666634230 * get_Yes_3() const { return ___Yes_3; }
	inline NotifyParentPropertyAttribute_t3666634230 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(NotifyParentPropertyAttribute_t3666634230 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYPARENTPROPERTYATTRIBUTE_T3666634230_H
#ifndef MERGABLEPROPERTYATTRIBUTE_T1973371765_H
#define MERGABLEPROPERTYATTRIBUTE_T1973371765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MergablePropertyAttribute
struct  MergablePropertyAttribute_t1973371765  : public Attribute_t2136411158
{
public:
	// System.Boolean System.ComponentModel.MergablePropertyAttribute::mergable
	bool ___mergable_0;

public:
	inline static int32_t get_offset_of_mergable_0() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1973371765, ___mergable_0)); }
	inline bool get_mergable_0() const { return ___mergable_0; }
	inline bool* get_address_of_mergable_0() { return &___mergable_0; }
	inline void set_mergable_0(bool value)
	{
		___mergable_0 = value;
	}
};

struct MergablePropertyAttribute_t1973371765_StaticFields
{
public:
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Default
	MergablePropertyAttribute_t1973371765 * ___Default_1;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::No
	MergablePropertyAttribute_t1973371765 * ___No_2;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Yes
	MergablePropertyAttribute_t1973371765 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1973371765_StaticFields, ___Default_1)); }
	inline MergablePropertyAttribute_t1973371765 * get_Default_1() const { return ___Default_1; }
	inline MergablePropertyAttribute_t1973371765 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(MergablePropertyAttribute_t1973371765 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1973371765_StaticFields, ___No_2)); }
	inline MergablePropertyAttribute_t1973371765 * get_No_2() const { return ___No_2; }
	inline MergablePropertyAttribute_t1973371765 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(MergablePropertyAttribute_t1973371765 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1973371765_StaticFields, ___Yes_3)); }
	inline MergablePropertyAttribute_t1973371765 * get_Yes_3() const { return ___Yes_3; }
	inline MergablePropertyAttribute_t1973371765 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(MergablePropertyAttribute_t1973371765 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGABLEPROPERTYATTRIBUTE_T1973371765_H
#ifndef MULTILINESTRINGCONVERTER_T333079652_H
#define MULTILINESTRINGCONVERTER_T333079652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MultilineStringConverter
struct  MultilineStringConverter_t333079652  : public TypeConverter_t192055412
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTILINESTRINGCONVERTER_T333079652_H
#ifndef NULLABLECONVERTER_T2535156676_H
#define NULLABLECONVERTER_T2535156676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NullableConverter
struct  NullableConverter_t2535156676  : public TypeConverter_t192055412
{
public:
	// System.Type System.ComponentModel.NullableConverter::nullableType
	Type_t * ___nullableType_0;
	// System.Type System.ComponentModel.NullableConverter::underlyingType
	Type_t * ___underlyingType_1;
	// System.ComponentModel.TypeConverter System.ComponentModel.NullableConverter::underlyingTypeConverter
	TypeConverter_t192055412 * ___underlyingTypeConverter_2;

public:
	inline static int32_t get_offset_of_nullableType_0() { return static_cast<int32_t>(offsetof(NullableConverter_t2535156676, ___nullableType_0)); }
	inline Type_t * get_nullableType_0() const { return ___nullableType_0; }
	inline Type_t ** get_address_of_nullableType_0() { return &___nullableType_0; }
	inline void set_nullableType_0(Type_t * value)
	{
		___nullableType_0 = value;
		Il2CppCodeGenWriteBarrier((&___nullableType_0), value);
	}

	inline static int32_t get_offset_of_underlyingType_1() { return static_cast<int32_t>(offsetof(NullableConverter_t2535156676, ___underlyingType_1)); }
	inline Type_t * get_underlyingType_1() const { return ___underlyingType_1; }
	inline Type_t ** get_address_of_underlyingType_1() { return &___underlyingType_1; }
	inline void set_underlyingType_1(Type_t * value)
	{
		___underlyingType_1 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingType_1), value);
	}

	inline static int32_t get_offset_of_underlyingTypeConverter_2() { return static_cast<int32_t>(offsetof(NullableConverter_t2535156676, ___underlyingTypeConverter_2)); }
	inline TypeConverter_t192055412 * get_underlyingTypeConverter_2() const { return ___underlyingTypeConverter_2; }
	inline TypeConverter_t192055412 ** get_address_of_underlyingTypeConverter_2() { return &___underlyingTypeConverter_2; }
	inline void set_underlyingTypeConverter_2(TypeConverter_t192055412 * value)
	{
		___underlyingTypeConverter_2 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingTypeConverter_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLECONVERTER_T2535156676_H
#ifndef PASSWORDPROPERTYTEXTATTRIBUTE_T1626749289_H
#define PASSWORDPROPERTYTEXTATTRIBUTE_T1626749289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PasswordPropertyTextAttribute
struct  PasswordPropertyTextAttribute_t1626749289  : public Attribute_t2136411158
{
public:
	// System.Boolean System.ComponentModel.PasswordPropertyTextAttribute::_password
	bool ____password_3;

public:
	inline static int32_t get_offset_of__password_3() { return static_cast<int32_t>(offsetof(PasswordPropertyTextAttribute_t1626749289, ____password_3)); }
	inline bool get__password_3() const { return ____password_3; }
	inline bool* get_address_of__password_3() { return &____password_3; }
	inline void set__password_3(bool value)
	{
		____password_3 = value;
	}
};

struct PasswordPropertyTextAttribute_t1626749289_StaticFields
{
public:
	// System.ComponentModel.PasswordPropertyTextAttribute System.ComponentModel.PasswordPropertyTextAttribute::Default
	PasswordPropertyTextAttribute_t1626749289 * ___Default_0;
	// System.ComponentModel.PasswordPropertyTextAttribute System.ComponentModel.PasswordPropertyTextAttribute::No
	PasswordPropertyTextAttribute_t1626749289 * ___No_1;
	// System.ComponentModel.PasswordPropertyTextAttribute System.ComponentModel.PasswordPropertyTextAttribute::Yes
	PasswordPropertyTextAttribute_t1626749289 * ___Yes_2;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(PasswordPropertyTextAttribute_t1626749289_StaticFields, ___Default_0)); }
	inline PasswordPropertyTextAttribute_t1626749289 * get_Default_0() const { return ___Default_0; }
	inline PasswordPropertyTextAttribute_t1626749289 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(PasswordPropertyTextAttribute_t1626749289 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(PasswordPropertyTextAttribute_t1626749289_StaticFields, ___No_1)); }
	inline PasswordPropertyTextAttribute_t1626749289 * get_No_1() const { return ___No_1; }
	inline PasswordPropertyTextAttribute_t1626749289 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(PasswordPropertyTextAttribute_t1626749289 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(PasswordPropertyTextAttribute_t1626749289_StaticFields, ___Yes_2)); }
	inline PasswordPropertyTextAttribute_t1626749289 * get_Yes_2() const { return ___Yes_2; }
	inline PasswordPropertyTextAttribute_t1626749289 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(PasswordPropertyTextAttribute_t1626749289 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PASSWORDPROPERTYTEXTATTRIBUTE_T1626749289_H
#ifndef PROGRESSCHANGEDEVENTARGS_T2010522142_H
#define PROGRESSCHANGEDEVENTARGS_T2010522142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ProgressChangedEventArgs
struct  ProgressChangedEventArgs_t2010522142  : public EventArgs_t3141815178
{
public:
	// System.Int32 System.ComponentModel.ProgressChangedEventArgs::progress
	int32_t ___progress_1;
	// System.Object System.ComponentModel.ProgressChangedEventArgs::state
	RuntimeObject * ___state_2;

public:
	inline static int32_t get_offset_of_progress_1() { return static_cast<int32_t>(offsetof(ProgressChangedEventArgs_t2010522142, ___progress_1)); }
	inline int32_t get_progress_1() const { return ___progress_1; }
	inline int32_t* get_address_of_progress_1() { return &___progress_1; }
	inline void set_progress_1(int32_t value)
	{
		___progress_1 = value;
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(ProgressChangedEventArgs_t2010522142, ___state_2)); }
	inline RuntimeObject * get_state_2() const { return ___state_2; }
	inline RuntimeObject ** get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(RuntimeObject * value)
	{
		___state_2 = value;
		Il2CppCodeGenWriteBarrier((&___state_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROGRESSCHANGEDEVENTARGS_T2010522142_H
#ifndef PROPERTYCHANGEDEVENTARGS_T263240575_H
#define PROPERTYCHANGEDEVENTARGS_T263240575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangedEventArgs
struct  PropertyChangedEventArgs_t263240575  : public EventArgs_t3141815178
{
public:
	// System.String System.ComponentModel.PropertyChangedEventArgs::propertyName
	String_t* ___propertyName_1;

public:
	inline static int32_t get_offset_of_propertyName_1() { return static_cast<int32_t>(offsetof(PropertyChangedEventArgs_t263240575, ___propertyName_1)); }
	inline String_t* get_propertyName_1() const { return ___propertyName_1; }
	inline String_t** get_address_of_propertyName_1() { return &___propertyName_1; }
	inline void set_propertyName_1(String_t* value)
	{
		___propertyName_1 = value;
		Il2CppCodeGenWriteBarrier((&___propertyName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGEDEVENTARGS_T263240575_H
#ifndef PROPERTYDESCRIPTOR_T3383610232_H
#define PROPERTYDESCRIPTOR_T3383610232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t3383610232  : public MemberDescriptor_t1395163271
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t192055412 * ___converter_4;
	// System.Collections.Hashtable System.ComponentModel.PropertyDescriptor::notifiers
	Hashtable_t188184851 * ___notifiers_5;

public:
	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3383610232, ___converter_4)); }
	inline TypeConverter_t192055412 * get_converter_4() const { return ___converter_4; }
	inline TypeConverter_t192055412 ** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(TypeConverter_t192055412 * value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}

	inline static int32_t get_offset_of_notifiers_5() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3383610232, ___notifiers_5)); }
	inline Hashtable_t188184851 * get_notifiers_5() const { return ___notifiers_5; }
	inline Hashtable_t188184851 ** get_address_of_notifiers_5() { return &___notifiers_5; }
	inline void set_notifiers_5(Hashtable_t188184851 * value)
	{
		___notifiers_5 = value;
		Il2CppCodeGenWriteBarrier((&___notifiers_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T3383610232_H
#ifndef READONLYATTRIBUTE_T1798401129_H
#define READONLYATTRIBUTE_T1798401129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReadOnlyAttribute
struct  ReadOnlyAttribute_t1798401129  : public Attribute_t2136411158
{
public:
	// System.Boolean System.ComponentModel.ReadOnlyAttribute::read_only
	bool ___read_only_0;

public:
	inline static int32_t get_offset_of_read_only_0() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1798401129, ___read_only_0)); }
	inline bool get_read_only_0() const { return ___read_only_0; }
	inline bool* get_address_of_read_only_0() { return &___read_only_0; }
	inline void set_read_only_0(bool value)
	{
		___read_only_0 = value;
	}
};

struct ReadOnlyAttribute_t1798401129_StaticFields
{
public:
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::No
	ReadOnlyAttribute_t1798401129 * ___No_1;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Yes
	ReadOnlyAttribute_t1798401129 * ___Yes_2;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Default
	ReadOnlyAttribute_t1798401129 * ___Default_3;

public:
	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1798401129_StaticFields, ___No_1)); }
	inline ReadOnlyAttribute_t1798401129 * get_No_1() const { return ___No_1; }
	inline ReadOnlyAttribute_t1798401129 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ReadOnlyAttribute_t1798401129 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1798401129_StaticFields, ___Yes_2)); }
	inline ReadOnlyAttribute_t1798401129 * get_Yes_2() const { return ___Yes_2; }
	inline ReadOnlyAttribute_t1798401129 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ReadOnlyAttribute_t1798401129 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1798401129_StaticFields, ___Default_3)); }
	inline ReadOnlyAttribute_t1798401129 * get_Default_3() const { return ___Default_3; }
	inline ReadOnlyAttribute_t1798401129 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(ReadOnlyAttribute_t1798401129 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T1798401129_H
#ifndef RECOMMENDEDASCONFIGURABLEATTRIBUTE_T3039128509_H
#define RECOMMENDEDASCONFIGURABLEATTRIBUTE_T3039128509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RecommendedAsConfigurableAttribute
struct  RecommendedAsConfigurableAttribute_t3039128509  : public Attribute_t2136411158
{
public:
	// System.Boolean System.ComponentModel.RecommendedAsConfigurableAttribute::recommendedAsConfigurable
	bool ___recommendedAsConfigurable_0;

public:
	inline static int32_t get_offset_of_recommendedAsConfigurable_0() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t3039128509, ___recommendedAsConfigurable_0)); }
	inline bool get_recommendedAsConfigurable_0() const { return ___recommendedAsConfigurable_0; }
	inline bool* get_address_of_recommendedAsConfigurable_0() { return &___recommendedAsConfigurable_0; }
	inline void set_recommendedAsConfigurable_0(bool value)
	{
		___recommendedAsConfigurable_0 = value;
	}
};

struct RecommendedAsConfigurableAttribute_t3039128509_StaticFields
{
public:
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::Default
	RecommendedAsConfigurableAttribute_t3039128509 * ___Default_1;
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::No
	RecommendedAsConfigurableAttribute_t3039128509 * ___No_2;
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::Yes
	RecommendedAsConfigurableAttribute_t3039128509 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t3039128509_StaticFields, ___Default_1)); }
	inline RecommendedAsConfigurableAttribute_t3039128509 * get_Default_1() const { return ___Default_1; }
	inline RecommendedAsConfigurableAttribute_t3039128509 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(RecommendedAsConfigurableAttribute_t3039128509 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t3039128509_StaticFields, ___No_2)); }
	inline RecommendedAsConfigurableAttribute_t3039128509 * get_No_2() const { return ___No_2; }
	inline RecommendedAsConfigurableAttribute_t3039128509 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(RecommendedAsConfigurableAttribute_t3039128509 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t3039128509_StaticFields, ___Yes_3)); }
	inline RecommendedAsConfigurableAttribute_t3039128509 * get_Yes_3() const { return ___Yes_3; }
	inline RecommendedAsConfigurableAttribute_t3039128509 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(RecommendedAsConfigurableAttribute_t3039128509 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOMMENDEDASCONFIGURABLEATTRIBUTE_T3039128509_H
#ifndef REFERENCECONVERTER_T2290575937_H
#define REFERENCECONVERTER_T2290575937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t2290575937  : public TypeConverter_t192055412
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::reference_type
	Type_t * ___reference_type_0;

public:
	inline static int32_t get_offset_of_reference_type_0() { return static_cast<int32_t>(offsetof(ReferenceConverter_t2290575937, ___reference_type_0)); }
	inline Type_t * get_reference_type_0() const { return ___reference_type_0; }
	inline Type_t ** get_address_of_reference_type_0() { return &___reference_type_0; }
	inline void set_reference_type_0(Type_t * value)
	{
		___reference_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___reference_type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECONVERTER_T2290575937_H
#ifndef REFRESHEVENTARGS_T4146012826_H
#define REFRESHEVENTARGS_T4146012826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshEventArgs
struct  RefreshEventArgs_t4146012826  : public EventArgs_t3141815178
{
public:
	// System.Object System.ComponentModel.RefreshEventArgs::component
	RuntimeObject * ___component_1;
	// System.Type System.ComponentModel.RefreshEventArgs::type
	Type_t * ___type_2;

public:
	inline static int32_t get_offset_of_component_1() { return static_cast<int32_t>(offsetof(RefreshEventArgs_t4146012826, ___component_1)); }
	inline RuntimeObject * get_component_1() const { return ___component_1; }
	inline RuntimeObject ** get_address_of_component_1() { return &___component_1; }
	inline void set_component_1(RuntimeObject * value)
	{
		___component_1 = value;
		Il2CppCodeGenWriteBarrier((&___component_1), value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(RefreshEventArgs_t4146012826, ___type_2)); }
	inline Type_t * get_type_2() const { return ___type_2; }
	inline Type_t ** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(Type_t * value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier((&___type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHEVENTARGS_T4146012826_H
#ifndef ENUM_T3186616643_H
#define ENUM_T3186616643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3186616643  : public ValueType_t4091819281
{
public:

public:
};

struct Enum_t3186616643_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3282355116* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t3186616643_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3282355116* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3282355116** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3282355116* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3186616643_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3186616643_marshaled_com
{
};
#endif // ENUM_T3186616643_H
#ifndef SYSTEMEXCEPTION_T1160535744_H
#define SYSTEMEXCEPTION_T1160535744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t1160535744  : public Exception_t76254738
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T1160535744_H
#ifndef LOCALIZABLEATTRIBUTE_T2134938666_H
#define LOCALIZABLEATTRIBUTE_T2134938666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LocalizableAttribute
struct  LocalizableAttribute_t2134938666  : public Attribute_t2136411158
{
public:
	// System.Boolean System.ComponentModel.LocalizableAttribute::localizable
	bool ___localizable_0;

public:
	inline static int32_t get_offset_of_localizable_0() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t2134938666, ___localizable_0)); }
	inline bool get_localizable_0() const { return ___localizable_0; }
	inline bool* get_address_of_localizable_0() { return &___localizable_0; }
	inline void set_localizable_0(bool value)
	{
		___localizable_0 = value;
	}
};

struct LocalizableAttribute_t2134938666_StaticFields
{
public:
	// System.ComponentModel.LocalizableAttribute System.ComponentModel.LocalizableAttribute::Default
	LocalizableAttribute_t2134938666 * ___Default_1;
	// System.ComponentModel.LocalizableAttribute System.ComponentModel.LocalizableAttribute::No
	LocalizableAttribute_t2134938666 * ___No_2;
	// System.ComponentModel.LocalizableAttribute System.ComponentModel.LocalizableAttribute::Yes
	LocalizableAttribute_t2134938666 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t2134938666_StaticFields, ___Default_1)); }
	inline LocalizableAttribute_t2134938666 * get_Default_1() const { return ___Default_1; }
	inline LocalizableAttribute_t2134938666 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(LocalizableAttribute_t2134938666 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t2134938666_StaticFields, ___No_2)); }
	inline LocalizableAttribute_t2134938666 * get_No_2() const { return ___No_2; }
	inline LocalizableAttribute_t2134938666 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(LocalizableAttribute_t2134938666 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t2134938666_StaticFields, ___Yes_3)); }
	inline LocalizableAttribute_t2134938666 * get_Yes_3() const { return ___Yes_3; }
	inline LocalizableAttribute_t2134938666 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(LocalizableAttribute_t2134938666 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALIZABLEATTRIBUTE_T2134938666_H
#ifndef IMMUTABLEOBJECTATTRIBUTE_T587176164_H
#define IMMUTABLEOBJECTATTRIBUTE_T587176164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ImmutableObjectAttribute
struct  ImmutableObjectAttribute_t587176164  : public Attribute_t2136411158
{
public:
	// System.Boolean System.ComponentModel.ImmutableObjectAttribute::immutable
	bool ___immutable_0;

public:
	inline static int32_t get_offset_of_immutable_0() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t587176164, ___immutable_0)); }
	inline bool get_immutable_0() const { return ___immutable_0; }
	inline bool* get_address_of_immutable_0() { return &___immutable_0; }
	inline void set_immutable_0(bool value)
	{
		___immutable_0 = value;
	}
};

struct ImmutableObjectAttribute_t587176164_StaticFields
{
public:
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::Default
	ImmutableObjectAttribute_t587176164 * ___Default_1;
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::No
	ImmutableObjectAttribute_t587176164 * ___No_2;
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::Yes
	ImmutableObjectAttribute_t587176164 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t587176164_StaticFields, ___Default_1)); }
	inline ImmutableObjectAttribute_t587176164 * get_Default_1() const { return ___Default_1; }
	inline ImmutableObjectAttribute_t587176164 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(ImmutableObjectAttribute_t587176164 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t587176164_StaticFields, ___No_2)); }
	inline ImmutableObjectAttribute_t587176164 * get_No_2() const { return ___No_2; }
	inline ImmutableObjectAttribute_t587176164 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(ImmutableObjectAttribute_t587176164 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t587176164_StaticFields, ___Yes_3)); }
	inline ImmutableObjectAttribute_t587176164 * get_Yes_3() const { return ___Yes_3; }
	inline ImmutableObjectAttribute_t587176164 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(ImmutableObjectAttribute_t587176164 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMMUTABLEOBJECTATTRIBUTE_T587176164_H
#ifndef BASENUMBERCONVERTER_T609700447_H
#define BASENUMBERCONVERTER_T609700447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t609700447  : public TypeConverter_t192055412
{
public:
	// System.Type System.ComponentModel.BaseNumberConverter::InnerType
	Type_t * ___InnerType_0;

public:
	inline static int32_t get_offset_of_InnerType_0() { return static_cast<int32_t>(offsetof(BaseNumberConverter_t609700447, ___InnerType_0)); }
	inline Type_t * get_InnerType_0() const { return ___InnerType_0; }
	inline Type_t ** get_address_of_InnerType_0() { return &___InnerType_0; }
	inline void set_InnerType_0(Type_t * value)
	{
		___InnerType_0 = value;
		Il2CppCodeGenWriteBarrier((&___InnerType_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASENUMBERCONVERTER_T609700447_H
#ifndef DESCRIPTIONATTRIBUTE_T3072823597_H
#define DESCRIPTIONATTRIBUTE_T3072823597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t3072823597  : public Attribute_t2136411158
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::desc
	String_t* ___desc_0;

public:
	inline static int32_t get_offset_of_desc_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t3072823597, ___desc_0)); }
	inline String_t* get_desc_0() const { return ___desc_0; }
	inline String_t** get_address_of_desc_0() { return &___desc_0; }
	inline void set_desc_0(String_t* value)
	{
		___desc_0 = value;
		Il2CppCodeGenWriteBarrier((&___desc_0), value);
	}
};

struct DescriptionAttribute_t3072823597_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t3072823597 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t3072823597_StaticFields, ___Default_1)); }
	inline DescriptionAttribute_t3072823597 * get_Default_1() const { return ___Default_1; }
	inline DescriptionAttribute_t3072823597 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DescriptionAttribute_t3072823597 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T3072823597_H
#ifndef COMPONENTCOLLECTION_T2192651222_H
#define COMPONENTCOLLECTION_T2192651222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentCollection
struct  ComponentCollection_t2192651222  : public ReadOnlyCollectionBase_t594653574
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCOLLECTION_T2192651222_H
#ifndef DEFAULTEVENTATTRIBUTE_T209718012_H
#define DEFAULTEVENTATTRIBUTE_T209718012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultEventAttribute
struct  DefaultEventAttribute_t209718012  : public Attribute_t2136411158
{
public:
	// System.String System.ComponentModel.DefaultEventAttribute::eventName
	String_t* ___eventName_0;

public:
	inline static int32_t get_offset_of_eventName_0() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t209718012, ___eventName_0)); }
	inline String_t* get_eventName_0() const { return ___eventName_0; }
	inline String_t** get_address_of_eventName_0() { return &___eventName_0; }
	inline void set_eventName_0(String_t* value)
	{
		___eventName_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventName_0), value);
	}
};

struct DefaultEventAttribute_t209718012_StaticFields
{
public:
	// System.ComponentModel.DefaultEventAttribute System.ComponentModel.DefaultEventAttribute::Default
	DefaultEventAttribute_t209718012 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t209718012_StaticFields, ___Default_1)); }
	inline DefaultEventAttribute_t209718012 * get_Default_1() const { return ___Default_1; }
	inline DefaultEventAttribute_t209718012 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultEventAttribute_t209718012 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEVENTATTRIBUTE_T209718012_H
#ifndef DEFAULTPROPERTYATTRIBUTE_T1726625396_H
#define DEFAULTPROPERTYATTRIBUTE_T1726625396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultPropertyAttribute
struct  DefaultPropertyAttribute_t1726625396  : public Attribute_t2136411158
{
public:
	// System.String System.ComponentModel.DefaultPropertyAttribute::property_name
	String_t* ___property_name_0;

public:
	inline static int32_t get_offset_of_property_name_0() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t1726625396, ___property_name_0)); }
	inline String_t* get_property_name_0() const { return ___property_name_0; }
	inline String_t** get_address_of_property_name_0() { return &___property_name_0; }
	inline void set_property_name_0(String_t* value)
	{
		___property_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___property_name_0), value);
	}
};

struct DefaultPropertyAttribute_t1726625396_StaticFields
{
public:
	// System.ComponentModel.DefaultPropertyAttribute System.ComponentModel.DefaultPropertyAttribute::Default
	DefaultPropertyAttribute_t1726625396 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t1726625396_StaticFields, ___Default_1)); }
	inline DefaultPropertyAttribute_t1726625396 * get_Default_1() const { return ___Default_1; }
	inline DefaultPropertyAttribute_t1726625396 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultPropertyAttribute_t1726625396 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROPERTYATTRIBUTE_T1726625396_H
#ifndef DEFAULTVALUEATTRIBUTE_T1291420878_H
#define DEFAULTVALUEATTRIBUTE_T1291420878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t1291420878  : public Attribute_t2136411158
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t1291420878, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T1291420878_H
#ifndef GUIDCONVERTER_T1376596706_H
#define GUIDCONVERTER_T1376596706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.GuidConverter
struct  GuidConverter_t1376596706  : public TypeConverter_t192055412
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDCONVERTER_T1376596706_H
#ifndef DESIGNONLYATTRIBUTE_T784241330_H
#define DESIGNONLYATTRIBUTE_T784241330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignOnlyAttribute
struct  DesignOnlyAttribute_t784241330  : public Attribute_t2136411158
{
public:
	// System.Boolean System.ComponentModel.DesignOnlyAttribute::design_only
	bool ___design_only_0;

public:
	inline static int32_t get_offset_of_design_only_0() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t784241330, ___design_only_0)); }
	inline bool get_design_only_0() const { return ___design_only_0; }
	inline bool* get_address_of_design_only_0() { return &___design_only_0; }
	inline void set_design_only_0(bool value)
	{
		___design_only_0 = value;
	}
};

struct DesignOnlyAttribute_t784241330_StaticFields
{
public:
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Default
	DesignOnlyAttribute_t784241330 * ___Default_1;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::No
	DesignOnlyAttribute_t784241330 * ___No_2;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Yes
	DesignOnlyAttribute_t784241330 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t784241330_StaticFields, ___Default_1)); }
	inline DesignOnlyAttribute_t784241330 * get_Default_1() const { return ___Default_1; }
	inline DesignOnlyAttribute_t784241330 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignOnlyAttribute_t784241330 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t784241330_StaticFields, ___No_2)); }
	inline DesignOnlyAttribute_t784241330 * get_No_2() const { return ___No_2; }
	inline DesignOnlyAttribute_t784241330 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignOnlyAttribute_t784241330 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t784241330_StaticFields, ___Yes_3)); }
	inline DesignOnlyAttribute_t784241330 * get_Yes_3() const { return ___Yes_3; }
	inline DesignOnlyAttribute_t784241330 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignOnlyAttribute_t784241330 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNONLYATTRIBUTE_T784241330_H
#ifndef DESIGNTIMEVISIBLEATTRIBUTE_T1673578136_H
#define DESIGNTIMEVISIBLEATTRIBUTE_T1673578136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignTimeVisibleAttribute
struct  DesignTimeVisibleAttribute_t1673578136  : public Attribute_t2136411158
{
public:
	// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::visible
	bool ___visible_0;

public:
	inline static int32_t get_offset_of_visible_0() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1673578136, ___visible_0)); }
	inline bool get_visible_0() const { return ___visible_0; }
	inline bool* get_address_of_visible_0() { return &___visible_0; }
	inline void set_visible_0(bool value)
	{
		___visible_0 = value;
	}
};

struct DesignTimeVisibleAttribute_t1673578136_StaticFields
{
public:
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Default
	DesignTimeVisibleAttribute_t1673578136 * ___Default_1;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::No
	DesignTimeVisibleAttribute_t1673578136 * ___No_2;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Yes
	DesignTimeVisibleAttribute_t1673578136 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1673578136_StaticFields, ___Default_1)); }
	inline DesignTimeVisibleAttribute_t1673578136 * get_Default_1() const { return ___Default_1; }
	inline DesignTimeVisibleAttribute_t1673578136 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignTimeVisibleAttribute_t1673578136 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1673578136_StaticFields, ___No_2)); }
	inline DesignTimeVisibleAttribute_t1673578136 * get_No_2() const { return ___No_2; }
	inline DesignTimeVisibleAttribute_t1673578136 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignTimeVisibleAttribute_t1673578136 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1673578136_StaticFields, ___Yes_3)); }
	inline DesignTimeVisibleAttribute_t1673578136 * get_Yes_3() const { return ___Yes_3; }
	inline DesignTimeVisibleAttribute_t1673578136 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignTimeVisibleAttribute_t1673578136 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNTIMEVISIBLEATTRIBUTE_T1673578136_H
#ifndef DESIGNERATTRIBUTE_T1825174991_H
#define DESIGNERATTRIBUTE_T1825174991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerAttribute
struct  DesignerAttribute_t1825174991  : public Attribute_t2136411158
{
public:
	// System.String System.ComponentModel.DesignerAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.DesignerAttribute::basetypename
	String_t* ___basetypename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DesignerAttribute_t1825174991, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basetypename_1() { return static_cast<int32_t>(offsetof(DesignerAttribute_t1825174991, ___basetypename_1)); }
	inline String_t* get_basetypename_1() const { return ___basetypename_1; }
	inline String_t** get_address_of_basetypename_1() { return &___basetypename_1; }
	inline void set_basetypename_1(String_t* value)
	{
		___basetypename_1 = value;
		Il2CppCodeGenWriteBarrier((&___basetypename_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERATTRIBUTE_T1825174991_H
#ifndef DESIGNERCATEGORYATTRIBUTE_T4258820745_H
#define DESIGNERCATEGORYATTRIBUTE_T4258820745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerCategoryAttribute
struct  DesignerCategoryAttribute_t4258820745  : public Attribute_t2136411158
{
public:
	// System.String System.ComponentModel.DesignerCategoryAttribute::category
	String_t* ___category_0;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t4258820745, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}
};

struct DesignerCategoryAttribute_t4258820745_StaticFields
{
public:
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Component
	DesignerCategoryAttribute_t4258820745 * ___Component_1;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Form
	DesignerCategoryAttribute_t4258820745 * ___Form_2;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Generic
	DesignerCategoryAttribute_t4258820745 * ___Generic_3;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Default
	DesignerCategoryAttribute_t4258820745 * ___Default_4;

public:
	inline static int32_t get_offset_of_Component_1() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t4258820745_StaticFields, ___Component_1)); }
	inline DesignerCategoryAttribute_t4258820745 * get_Component_1() const { return ___Component_1; }
	inline DesignerCategoryAttribute_t4258820745 ** get_address_of_Component_1() { return &___Component_1; }
	inline void set_Component_1(DesignerCategoryAttribute_t4258820745 * value)
	{
		___Component_1 = value;
		Il2CppCodeGenWriteBarrier((&___Component_1), value);
	}

	inline static int32_t get_offset_of_Form_2() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t4258820745_StaticFields, ___Form_2)); }
	inline DesignerCategoryAttribute_t4258820745 * get_Form_2() const { return ___Form_2; }
	inline DesignerCategoryAttribute_t4258820745 ** get_address_of_Form_2() { return &___Form_2; }
	inline void set_Form_2(DesignerCategoryAttribute_t4258820745 * value)
	{
		___Form_2 = value;
		Il2CppCodeGenWriteBarrier((&___Form_2), value);
	}

	inline static int32_t get_offset_of_Generic_3() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t4258820745_StaticFields, ___Generic_3)); }
	inline DesignerCategoryAttribute_t4258820745 * get_Generic_3() const { return ___Generic_3; }
	inline DesignerCategoryAttribute_t4258820745 ** get_address_of_Generic_3() { return &___Generic_3; }
	inline void set_Generic_3(DesignerCategoryAttribute_t4258820745 * value)
	{
		___Generic_3 = value;
		Il2CppCodeGenWriteBarrier((&___Generic_3), value);
	}

	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t4258820745_StaticFields, ___Default_4)); }
	inline DesignerCategoryAttribute_t4258820745 * get_Default_4() const { return ___Default_4; }
	inline DesignerCategoryAttribute_t4258820745 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(DesignerCategoryAttribute_t4258820745 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier((&___Default_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERCATEGORYATTRIBUTE_T4258820745_H
#ifndef COMPONENT_T1938025610_H
#define COMPONENT_T1938025610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t1938025610  : public MarshalByRefObject_t2387283355
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t421778690 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t1938025610, ___event_handlers_1)); }
	inline EventHandlerList_t421778690 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t421778690 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t421778690 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t1938025610, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t1938025610, ___disposedEvent_3)); }
	inline RuntimeObject * get_disposedEvent_3() const { return ___disposedEvent_3; }
	inline RuntimeObject ** get_address_of_disposedEvent_3() { return &___disposedEvent_3; }
	inline void set_disposedEvent_3(RuntimeObject * value)
	{
		___disposedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___disposedEvent_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1938025610_H
#ifndef COLLECTIONCONVERTER_T2213234724_H
#define COLLECTIONCONVERTER_T2213234724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionConverter
struct  CollectionConverter_t2213234724  : public TypeConverter_t192055412
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCONVERTER_T2213234724_H
#ifndef DATETIMECONVERTER_T3603151160_H
#define DATETIMECONVERTER_T3603151160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeConverter
struct  DateTimeConverter_t3603151160  : public TypeConverter_t192055412
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONVERTER_T3603151160_H
#ifndef CHARCONVERTER_T251572683_H
#define CHARCONVERTER_T251572683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CharConverter
struct  CharConverter_t251572683  : public TypeConverter_t192055412
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARCONVERTER_T251572683_H
#ifndef CULTUREINFOCONVERTER_T440640967_H
#define CULTUREINFOCONVERTER_T440640967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter
struct  CultureInfoConverter_t440640967  : public TypeConverter_t192055412
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::_standardValues
	StandardValuesCollection_t2125959807 * ____standardValues_0;

public:
	inline static int32_t get_offset_of__standardValues_0() { return static_cast<int32_t>(offsetof(CultureInfoConverter_t440640967, ____standardValues_0)); }
	inline StandardValuesCollection_t2125959807 * get__standardValues_0() const { return ____standardValues_0; }
	inline StandardValuesCollection_t2125959807 ** get_address_of__standardValues_0() { return &____standardValues_0; }
	inline void set__standardValues_0(StandardValuesCollection_t2125959807 * value)
	{
		____standardValues_0 = value;
		Il2CppCodeGenWriteBarrier((&____standardValues_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCONVERTER_T440640967_H
#ifndef CATEGORYATTRIBUTE_T3135707549_H
#define CATEGORYATTRIBUTE_T3135707549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CategoryAttribute
struct  CategoryAttribute_t3135707549  : public Attribute_t2136411158
{
public:
	// System.String System.ComponentModel.CategoryAttribute::category
	String_t* ___category_0;
	// System.Boolean System.ComponentModel.CategoryAttribute::IsLocalized
	bool ___IsLocalized_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_IsLocalized_1() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549, ___IsLocalized_1)); }
	inline bool get_IsLocalized_1() const { return ___IsLocalized_1; }
	inline bool* get_address_of_IsLocalized_1() { return &___IsLocalized_1; }
	inline void set_IsLocalized_1(bool value)
	{
		___IsLocalized_1 = value;
	}
};

struct CategoryAttribute_t3135707549_StaticFields
{
public:
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::action
	CategoryAttribute_t3135707549 * ___action_2;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::appearance
	CategoryAttribute_t3135707549 * ___appearance_3;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::behaviour
	CategoryAttribute_t3135707549 * ___behaviour_4;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::data
	CategoryAttribute_t3135707549 * ___data_5;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::def
	CategoryAttribute_t3135707549 * ___def_6;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::design
	CategoryAttribute_t3135707549 * ___design_7;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::drag_drop
	CategoryAttribute_t3135707549 * ___drag_drop_8;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::focus
	CategoryAttribute_t3135707549 * ___focus_9;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::format
	CategoryAttribute_t3135707549 * ___format_10;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::key
	CategoryAttribute_t3135707549 * ___key_11;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::layout
	CategoryAttribute_t3135707549 * ___layout_12;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::mouse
	CategoryAttribute_t3135707549 * ___mouse_13;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::window_style
	CategoryAttribute_t3135707549 * ___window_style_14;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::async
	CategoryAttribute_t3135707549 * ___async_15;
	// System.Object System.ComponentModel.CategoryAttribute::lockobj
	RuntimeObject * ___lockobj_16;

public:
	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___action_2)); }
	inline CategoryAttribute_t3135707549 * get_action_2() const { return ___action_2; }
	inline CategoryAttribute_t3135707549 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(CategoryAttribute_t3135707549 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_appearance_3() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___appearance_3)); }
	inline CategoryAttribute_t3135707549 * get_appearance_3() const { return ___appearance_3; }
	inline CategoryAttribute_t3135707549 ** get_address_of_appearance_3() { return &___appearance_3; }
	inline void set_appearance_3(CategoryAttribute_t3135707549 * value)
	{
		___appearance_3 = value;
		Il2CppCodeGenWriteBarrier((&___appearance_3), value);
	}

	inline static int32_t get_offset_of_behaviour_4() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___behaviour_4)); }
	inline CategoryAttribute_t3135707549 * get_behaviour_4() const { return ___behaviour_4; }
	inline CategoryAttribute_t3135707549 ** get_address_of_behaviour_4() { return &___behaviour_4; }
	inline void set_behaviour_4(CategoryAttribute_t3135707549 * value)
	{
		___behaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&___behaviour_4), value);
	}

	inline static int32_t get_offset_of_data_5() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___data_5)); }
	inline CategoryAttribute_t3135707549 * get_data_5() const { return ___data_5; }
	inline CategoryAttribute_t3135707549 ** get_address_of_data_5() { return &___data_5; }
	inline void set_data_5(CategoryAttribute_t3135707549 * value)
	{
		___data_5 = value;
		Il2CppCodeGenWriteBarrier((&___data_5), value);
	}

	inline static int32_t get_offset_of_def_6() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___def_6)); }
	inline CategoryAttribute_t3135707549 * get_def_6() const { return ___def_6; }
	inline CategoryAttribute_t3135707549 ** get_address_of_def_6() { return &___def_6; }
	inline void set_def_6(CategoryAttribute_t3135707549 * value)
	{
		___def_6 = value;
		Il2CppCodeGenWriteBarrier((&___def_6), value);
	}

	inline static int32_t get_offset_of_design_7() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___design_7)); }
	inline CategoryAttribute_t3135707549 * get_design_7() const { return ___design_7; }
	inline CategoryAttribute_t3135707549 ** get_address_of_design_7() { return &___design_7; }
	inline void set_design_7(CategoryAttribute_t3135707549 * value)
	{
		___design_7 = value;
		Il2CppCodeGenWriteBarrier((&___design_7), value);
	}

	inline static int32_t get_offset_of_drag_drop_8() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___drag_drop_8)); }
	inline CategoryAttribute_t3135707549 * get_drag_drop_8() const { return ___drag_drop_8; }
	inline CategoryAttribute_t3135707549 ** get_address_of_drag_drop_8() { return &___drag_drop_8; }
	inline void set_drag_drop_8(CategoryAttribute_t3135707549 * value)
	{
		___drag_drop_8 = value;
		Il2CppCodeGenWriteBarrier((&___drag_drop_8), value);
	}

	inline static int32_t get_offset_of_focus_9() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___focus_9)); }
	inline CategoryAttribute_t3135707549 * get_focus_9() const { return ___focus_9; }
	inline CategoryAttribute_t3135707549 ** get_address_of_focus_9() { return &___focus_9; }
	inline void set_focus_9(CategoryAttribute_t3135707549 * value)
	{
		___focus_9 = value;
		Il2CppCodeGenWriteBarrier((&___focus_9), value);
	}

	inline static int32_t get_offset_of_format_10() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___format_10)); }
	inline CategoryAttribute_t3135707549 * get_format_10() const { return ___format_10; }
	inline CategoryAttribute_t3135707549 ** get_address_of_format_10() { return &___format_10; }
	inline void set_format_10(CategoryAttribute_t3135707549 * value)
	{
		___format_10 = value;
		Il2CppCodeGenWriteBarrier((&___format_10), value);
	}

	inline static int32_t get_offset_of_key_11() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___key_11)); }
	inline CategoryAttribute_t3135707549 * get_key_11() const { return ___key_11; }
	inline CategoryAttribute_t3135707549 ** get_address_of_key_11() { return &___key_11; }
	inline void set_key_11(CategoryAttribute_t3135707549 * value)
	{
		___key_11 = value;
		Il2CppCodeGenWriteBarrier((&___key_11), value);
	}

	inline static int32_t get_offset_of_layout_12() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___layout_12)); }
	inline CategoryAttribute_t3135707549 * get_layout_12() const { return ___layout_12; }
	inline CategoryAttribute_t3135707549 ** get_address_of_layout_12() { return &___layout_12; }
	inline void set_layout_12(CategoryAttribute_t3135707549 * value)
	{
		___layout_12 = value;
		Il2CppCodeGenWriteBarrier((&___layout_12), value);
	}

	inline static int32_t get_offset_of_mouse_13() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___mouse_13)); }
	inline CategoryAttribute_t3135707549 * get_mouse_13() const { return ___mouse_13; }
	inline CategoryAttribute_t3135707549 ** get_address_of_mouse_13() { return &___mouse_13; }
	inline void set_mouse_13(CategoryAttribute_t3135707549 * value)
	{
		___mouse_13 = value;
		Il2CppCodeGenWriteBarrier((&___mouse_13), value);
	}

	inline static int32_t get_offset_of_window_style_14() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___window_style_14)); }
	inline CategoryAttribute_t3135707549 * get_window_style_14() const { return ___window_style_14; }
	inline CategoryAttribute_t3135707549 ** get_address_of_window_style_14() { return &___window_style_14; }
	inline void set_window_style_14(CategoryAttribute_t3135707549 * value)
	{
		___window_style_14 = value;
		Il2CppCodeGenWriteBarrier((&___window_style_14), value);
	}

	inline static int32_t get_offset_of_async_15() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___async_15)); }
	inline CategoryAttribute_t3135707549 * get_async_15() const { return ___async_15; }
	inline CategoryAttribute_t3135707549 ** get_address_of_async_15() { return &___async_15; }
	inline void set_async_15(CategoryAttribute_t3135707549 * value)
	{
		___async_15 = value;
		Il2CppCodeGenWriteBarrier((&___async_15), value);
	}

	inline static int32_t get_offset_of_lockobj_16() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___lockobj_16)); }
	inline RuntimeObject * get_lockobj_16() const { return ___lockobj_16; }
	inline RuntimeObject ** get_address_of_lockobj_16() { return &___lockobj_16; }
	inline void set_lockobj_16(RuntimeObject * value)
	{
		___lockobj_16 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATEGORYATTRIBUTE_T3135707549_H
#ifndef DOWORKEVENTARGS_T4214817447_H
#define DOWORKEVENTARGS_T4214817447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoWorkEventArgs
struct  DoWorkEventArgs_t4214817447  : public EventArgs_t3141815178
{
public:
	// System.Object System.ComponentModel.DoWorkEventArgs::arg
	RuntimeObject * ___arg_1;
	// System.Object System.ComponentModel.DoWorkEventArgs::result
	RuntimeObject * ___result_2;
	// System.Boolean System.ComponentModel.DoWorkEventArgs::cancel
	bool ___cancel_3;

public:
	inline static int32_t get_offset_of_arg_1() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t4214817447, ___arg_1)); }
	inline RuntimeObject * get_arg_1() const { return ___arg_1; }
	inline RuntimeObject ** get_address_of_arg_1() { return &___arg_1; }
	inline void set_arg_1(RuntimeObject * value)
	{
		___arg_1 = value;
		Il2CppCodeGenWriteBarrier((&___arg_1), value);
	}

	inline static int32_t get_offset_of_result_2() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t4214817447, ___result_2)); }
	inline RuntimeObject * get_result_2() const { return ___result_2; }
	inline RuntimeObject ** get_address_of_result_2() { return &___result_2; }
	inline void set_result_2(RuntimeObject * value)
	{
		___result_2 = value;
		Il2CppCodeGenWriteBarrier((&___result_2), value);
	}

	inline static int32_t get_offset_of_cancel_3() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t4214817447, ___cancel_3)); }
	inline bool get_cancel_3() const { return ___cancel_3; }
	inline bool* get_address_of_cancel_3() { return &___cancel_3; }
	inline void set_cancel_3(bool value)
	{
		___cancel_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOWORKEVENTARGS_T4214817447_H
#ifndef CANCELEVENTARGS_T1437530969_H
#define CANCELEVENTARGS_T1437530969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CancelEventArgs
struct  CancelEventArgs_t1437530969  : public EventArgs_t3141815178
{
public:
	// System.Boolean System.ComponentModel.CancelEventArgs::cancel
	bool ___cancel_1;

public:
	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(CancelEventArgs_t1437530969, ___cancel_1)); }
	inline bool get_cancel_1() const { return ___cancel_1; }
	inline bool* get_address_of_cancel_1() { return &___cancel_1; }
	inline void set_cancel_1(bool value)
	{
		___cancel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANCELEVENTARGS_T1437530969_H
#ifndef EDITORATTRIBUTE_T2251207032_H
#define EDITORATTRIBUTE_T2251207032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorAttribute
struct  EditorAttribute_t2251207032  : public Attribute_t2136411158
{
public:
	// System.String System.ComponentModel.EditorAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.EditorAttribute::basename
	String_t* ___basename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(EditorAttribute_t2251207032, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basename_1() { return static_cast<int32_t>(offsetof(EditorAttribute_t2251207032, ___basename_1)); }
	inline String_t* get_basename_1() const { return ___basename_1; }
	inline String_t** get_address_of_basename_1() { return &___basename_1; }
	inline void set_basename_1(String_t* value)
	{
		___basename_1 = value;
		Il2CppCodeGenWriteBarrier((&___basename_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORATTRIBUTE_T2251207032_H
#ifndef BROWSABLEATTRIBUTE_T1903705142_H
#define BROWSABLEATTRIBUTE_T1903705142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BrowsableAttribute
struct  BrowsableAttribute_t1903705142  : public Attribute_t2136411158
{
public:
	// System.Boolean System.ComponentModel.BrowsableAttribute::browsable
	bool ___browsable_0;

public:
	inline static int32_t get_offset_of_browsable_0() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t1903705142, ___browsable_0)); }
	inline bool get_browsable_0() const { return ___browsable_0; }
	inline bool* get_address_of_browsable_0() { return &___browsable_0; }
	inline void set_browsable_0(bool value)
	{
		___browsable_0 = value;
	}
};

struct BrowsableAttribute_t1903705142_StaticFields
{
public:
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Default
	BrowsableAttribute_t1903705142 * ___Default_1;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::No
	BrowsableAttribute_t1903705142 * ___No_2;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Yes
	BrowsableAttribute_t1903705142 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t1903705142_StaticFields, ___Default_1)); }
	inline BrowsableAttribute_t1903705142 * get_Default_1() const { return ___Default_1; }
	inline BrowsableAttribute_t1903705142 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(BrowsableAttribute_t1903705142 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t1903705142_StaticFields, ___No_2)); }
	inline BrowsableAttribute_t1903705142 * get_No_2() const { return ___No_2; }
	inline BrowsableAttribute_t1903705142 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(BrowsableAttribute_t1903705142 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t1903705142_StaticFields, ___Yes_3)); }
	inline BrowsableAttribute_t1903705142 * get_Yes_3() const { return ___Yes_3; }
	inline BrowsableAttribute_t1903705142 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(BrowsableAttribute_t1903705142 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BROWSABLEATTRIBUTE_T1903705142_H
#ifndef BOOLEANCONVERTER_T3811050433_H
#define BOOLEANCONVERTER_T3811050433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BooleanConverter
struct  BooleanConverter_t3811050433  : public TypeConverter_t192055412
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANCONVERTER_T3811050433_H
#ifndef ENUMCONVERTER_T409969221_H
#define ENUMCONVERTER_T409969221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter
struct  EnumConverter_t409969221  : public TypeConverter_t192055412
{
public:
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t * ___type_0;
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::stdValues
	StandardValuesCollection_t2125959807 * ___stdValues_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EnumConverter_t409969221, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_stdValues_1() { return static_cast<int32_t>(offsetof(EnumConverter_t409969221, ___stdValues_1)); }
	inline StandardValuesCollection_t2125959807 * get_stdValues_1() const { return ___stdValues_1; }
	inline StandardValuesCollection_t2125959807 ** get_address_of_stdValues_1() { return &___stdValues_1; }
	inline void set_stdValues_1(StandardValuesCollection_t2125959807 * value)
	{
		___stdValues_1 = value;
		Il2CppCodeGenWriteBarrier((&___stdValues_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCONVERTER_T409969221_H
#ifndef EVENTDESCRIPTOR_T1980666708_H
#define EVENTDESCRIPTOR_T1980666708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptor
struct  EventDescriptor_t1980666708  : public MemberDescriptor_t1395163271
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTOR_T1980666708_H
#ifndef EXPANDABLEOBJECTCONVERTER_T189315617_H
#define EXPANDABLEOBJECTCONVERTER_T189315617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t189315617  : public TypeConverter_t192055412
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T189315617_H
#ifndef DISPLAYNAMEATTRIBUTE_T4101407153_H
#define DISPLAYNAMEATTRIBUTE_T4101407153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DisplayNameAttribute
struct  DisplayNameAttribute_t4101407153  : public Attribute_t2136411158
{
public:
	// System.String System.ComponentModel.DisplayNameAttribute::attributeDisplayName
	String_t* ___attributeDisplayName_1;

public:
	inline static int32_t get_offset_of_attributeDisplayName_1() { return static_cast<int32_t>(offsetof(DisplayNameAttribute_t4101407153, ___attributeDisplayName_1)); }
	inline String_t* get_attributeDisplayName_1() const { return ___attributeDisplayName_1; }
	inline String_t** get_address_of_attributeDisplayName_1() { return &___attributeDisplayName_1; }
	inline void set_attributeDisplayName_1(String_t* value)
	{
		___attributeDisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___attributeDisplayName_1), value);
	}
};

struct DisplayNameAttribute_t4101407153_StaticFields
{
public:
	// System.ComponentModel.DisplayNameAttribute System.ComponentModel.DisplayNameAttribute::Default
	DisplayNameAttribute_t4101407153 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(DisplayNameAttribute_t4101407153_StaticFields, ___Default_0)); }
	inline DisplayNameAttribute_t4101407153 * get_Default_0() const { return ___Default_0; }
	inline DisplayNameAttribute_t4101407153 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(DisplayNameAttribute_t4101407153 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYNAMEATTRIBUTE_T4101407153_H
#ifndef REFLECTIONPROPERTYDESCRIPTOR_T1303070047_H
#define REFLECTIONPROPERTYDESCRIPTOR_T1303070047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectionPropertyDescriptor
struct  ReflectionPropertyDescriptor_t1303070047  : public PropertyDescriptor_t3383610232
{
public:
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::_member
	PropertyInfo_t * ____member_6;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_componentType
	Type_t * ____componentType_7;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_propertyType
	Type_t * ____propertyType_8;
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::getter
	PropertyInfo_t * ___getter_9;
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::setter
	PropertyInfo_t * ___setter_10;
	// System.Boolean System.ComponentModel.ReflectionPropertyDescriptor::accessors_inited
	bool ___accessors_inited_11;

public:
	inline static int32_t get_offset_of__member_6() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t1303070047, ____member_6)); }
	inline PropertyInfo_t * get__member_6() const { return ____member_6; }
	inline PropertyInfo_t ** get_address_of__member_6() { return &____member_6; }
	inline void set__member_6(PropertyInfo_t * value)
	{
		____member_6 = value;
		Il2CppCodeGenWriteBarrier((&____member_6), value);
	}

	inline static int32_t get_offset_of__componentType_7() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t1303070047, ____componentType_7)); }
	inline Type_t * get__componentType_7() const { return ____componentType_7; }
	inline Type_t ** get_address_of__componentType_7() { return &____componentType_7; }
	inline void set__componentType_7(Type_t * value)
	{
		____componentType_7 = value;
		Il2CppCodeGenWriteBarrier((&____componentType_7), value);
	}

	inline static int32_t get_offset_of__propertyType_8() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t1303070047, ____propertyType_8)); }
	inline Type_t * get__propertyType_8() const { return ____propertyType_8; }
	inline Type_t ** get_address_of__propertyType_8() { return &____propertyType_8; }
	inline void set__propertyType_8(Type_t * value)
	{
		____propertyType_8 = value;
		Il2CppCodeGenWriteBarrier((&____propertyType_8), value);
	}

	inline static int32_t get_offset_of_getter_9() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t1303070047, ___getter_9)); }
	inline PropertyInfo_t * get_getter_9() const { return ___getter_9; }
	inline PropertyInfo_t ** get_address_of_getter_9() { return &___getter_9; }
	inline void set_getter_9(PropertyInfo_t * value)
	{
		___getter_9 = value;
		Il2CppCodeGenWriteBarrier((&___getter_9), value);
	}

	inline static int32_t get_offset_of_setter_10() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t1303070047, ___setter_10)); }
	inline PropertyInfo_t * get_setter_10() const { return ___setter_10; }
	inline PropertyInfo_t ** get_address_of_setter_10() { return &___setter_10; }
	inline void set_setter_10(PropertyInfo_t * value)
	{
		___setter_10 = value;
		Il2CppCodeGenWriteBarrier((&___setter_10), value);
	}

	inline static int32_t get_offset_of_accessors_inited_11() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t1303070047, ___accessors_inited_11)); }
	inline bool get_accessors_inited_11() const { return ___accessors_inited_11; }
	inline bool* get_address_of_accessors_inited_11() { return &___accessors_inited_11; }
	inline void set_accessors_inited_11(bool value)
	{
		___accessors_inited_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONPROPERTYDESCRIPTOR_T1303070047_H
#ifndef REFLECTIONEVENTDESCRIPTOR_T375800870_H
#define REFLECTIONEVENTDESCRIPTOR_T375800870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectionEventDescriptor
struct  ReflectionEventDescriptor_t375800870  : public EventDescriptor_t1980666708
{
public:
	// System.Type System.ComponentModel.ReflectionEventDescriptor::_eventType
	Type_t * ____eventType_4;
	// System.Type System.ComponentModel.ReflectionEventDescriptor::_componentType
	Type_t * ____componentType_5;
	// System.Reflection.EventInfo System.ComponentModel.ReflectionEventDescriptor::_eventInfo
	EventInfo_t * ____eventInfo_6;
	// System.Reflection.MethodInfo System.ComponentModel.ReflectionEventDescriptor::add_method
	MethodInfo_t * ___add_method_7;
	// System.Reflection.MethodInfo System.ComponentModel.ReflectionEventDescriptor::remove_method
	MethodInfo_t * ___remove_method_8;

public:
	inline static int32_t get_offset_of__eventType_4() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t375800870, ____eventType_4)); }
	inline Type_t * get__eventType_4() const { return ____eventType_4; }
	inline Type_t ** get_address_of__eventType_4() { return &____eventType_4; }
	inline void set__eventType_4(Type_t * value)
	{
		____eventType_4 = value;
		Il2CppCodeGenWriteBarrier((&____eventType_4), value);
	}

	inline static int32_t get_offset_of__componentType_5() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t375800870, ____componentType_5)); }
	inline Type_t * get__componentType_5() const { return ____componentType_5; }
	inline Type_t ** get_address_of__componentType_5() { return &____componentType_5; }
	inline void set__componentType_5(Type_t * value)
	{
		____componentType_5 = value;
		Il2CppCodeGenWriteBarrier((&____componentType_5), value);
	}

	inline static int32_t get_offset_of__eventInfo_6() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t375800870, ____eventInfo_6)); }
	inline EventInfo_t * get__eventInfo_6() const { return ____eventInfo_6; }
	inline EventInfo_t ** get_address_of__eventInfo_6() { return &____eventInfo_6; }
	inline void set__eventInfo_6(EventInfo_t * value)
	{
		____eventInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&____eventInfo_6), value);
	}

	inline static int32_t get_offset_of_add_method_7() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t375800870, ___add_method_7)); }
	inline MethodInfo_t * get_add_method_7() const { return ___add_method_7; }
	inline MethodInfo_t ** get_address_of_add_method_7() { return &___add_method_7; }
	inline void set_add_method_7(MethodInfo_t * value)
	{
		___add_method_7 = value;
		Il2CppCodeGenWriteBarrier((&___add_method_7), value);
	}

	inline static int32_t get_offset_of_remove_method_8() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t375800870, ___remove_method_8)); }
	inline MethodInfo_t * get_remove_method_8() const { return ___remove_method_8; }
	inline MethodInfo_t ** get_address_of_remove_method_8() { return &___remove_method_8; }
	inline void set_remove_method_8(MethodInfo_t * value)
	{
		___remove_method_8 = value;
		Il2CppCodeGenWriteBarrier((&___remove_method_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONEVENTDESCRIPTOR_T375800870_H
#ifndef BYTECONVERTER_T977679179_H
#define BYTECONVERTER_T977679179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ByteConverter
struct  ByteConverter_t977679179  : public BaseNumberConverter_t609700447
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTECONVERTER_T977679179_H
#ifndef ARGUMENTEXCEPTION_T2563036156_H
#define ARGUMENTEXCEPTION_T2563036156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t2563036156  : public SystemException_t1160535744
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t2563036156, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T2563036156_H
#ifndef BINDABLESUPPORT_T3005598300_H
#define BINDABLESUPPORT_T3005598300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BindableSupport
struct  BindableSupport_t3005598300 
{
public:
	// System.Int32 System.ComponentModel.BindableSupport::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindableSupport_t3005598300, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDABLESUPPORT_T3005598300_H
#ifndef COLLECTIONCHANGEACTION_T3443053913_H
#define COLLECTIONCHANGEACTION_T3443053913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeAction
struct  CollectionChangeAction_t3443053913 
{
public:
	// System.Int32 System.ComponentModel.CollectionChangeAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollectionChangeAction_t3443053913, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCHANGEACTION_T3443053913_H
#ifndef INT16CONVERTER_T195698064_H
#define INT16CONVERTER_T195698064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int16Converter
struct  Int16Converter_t195698064  : public BaseNumberConverter_t609700447
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16CONVERTER_T195698064_H
#ifndef DECIMALCONVERTER_T3773816697_H
#define DECIMALCONVERTER_T3773816697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DecimalConverter
struct  DecimalConverter_t3773816697  : public BaseNumberConverter_t609700447
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONVERTER_T3773816697_H
#ifndef INT32CONVERTER_T1694245051_H
#define INT32CONVERTER_T1694245051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int32Converter
struct  Int32Converter_t1694245051  : public BaseNumberConverter_t609700447
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32CONVERTER_T1694245051_H
#ifndef EDITORBROWSABLESTATE_T2192825251_H
#define EDITORBROWSABLESTATE_T2192825251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t2192825251 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t2192825251, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLESTATE_T2192825251_H
#ifndef LICENSEEXCEPTION_T3131267149_H
#define LICENSEEXCEPTION_T3131267149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseException
struct  LicenseException_t3131267149  : public SystemException_t1160535744
{
public:
	// System.Type System.ComponentModel.LicenseException::type
	Type_t * ___type_11;

public:
	inline static int32_t get_offset_of_type_11() { return static_cast<int32_t>(offsetof(LicenseException_t3131267149, ___type_11)); }
	inline Type_t * get_type_11() const { return ___type_11; }
	inline Type_t ** get_address_of_type_11() { return &___type_11; }
	inline void set_type_11(Type_t * value)
	{
		___type_11 = value;
		Il2CppCodeGenWriteBarrier((&___type_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEEXCEPTION_T3131267149_H
#ifndef DOUBLECONVERTER_T1820434333_H
#define DOUBLECONVERTER_T1820434333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoubleConverter
struct  DoubleConverter_t1820434333  : public BaseNumberConverter_t609700447
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLECONVERTER_T1820434333_H
#ifndef COMPONENTCONVERTER_T836488164_H
#define COMPONENTCONVERTER_T836488164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentConverter
struct  ComponentConverter_t836488164  : public ReferenceConverter_t2290575937
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCONVERTER_T836488164_H
#ifndef LICENSEUSAGEMODE_T2774854770_H
#define LICENSEUSAGEMODE_T2774854770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseUsageMode
struct  LicenseUsageMode_t2774854770 
{
public:
	// System.Int32 System.ComponentModel.LicenseUsageMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LicenseUsageMode_t2774854770, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEUSAGEMODE_T2774854770_H
#ifndef LISTSORTDIRECTION_T666044431_H
#define LISTSORTDIRECTION_T666044431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDirection
struct  ListSortDirection_t666044431 
{
public:
	// System.Int32 System.ComponentModel.ListSortDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ListSortDirection_t666044431, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTSORTDIRECTION_T666044431_H
#ifndef DESIGNERSERIALIZATIONVISIBILITY_T599541547_H
#define DESIGNERSERIALIZATIONVISIBILITY_T599541547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibility
struct  DesignerSerializationVisibility_t599541547 
{
public:
	// System.Int32 System.ComponentModel.DesignerSerializationVisibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibility_t599541547, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITY_T599541547_H
#ifndef LISTCHANGEDTYPE_T722840504_H
#define LISTCHANGEDTYPE_T722840504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListChangedType
struct  ListChangedType_t722840504 
{
public:
	// System.Int32 System.ComponentModel.ListChangedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ListChangedType_t722840504, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTCHANGEDTYPE_T722840504_H
#ifndef INT64CONVERTER_T3988148080_H
#define INT64CONVERTER_T3988148080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int64Converter
struct  Int64Converter_t3988148080  : public BaseNumberConverter_t609700447
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64CONVERTER_T3988148080_H
#ifndef LISTCHANGEDEVENTARGS_T550766041_H
#define LISTCHANGEDEVENTARGS_T550766041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListChangedEventArgs
struct  ListChangedEventArgs_t550766041  : public EventArgs_t3141815178
{
public:
	// System.ComponentModel.ListChangedType System.ComponentModel.ListChangedEventArgs::changedType
	int32_t ___changedType_1;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::oldIndex
	int32_t ___oldIndex_2;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::newIndex
	int32_t ___newIndex_3;
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ListChangedEventArgs::propDesc
	PropertyDescriptor_t3383610232 * ___propDesc_4;

public:
	inline static int32_t get_offset_of_changedType_1() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t550766041, ___changedType_1)); }
	inline int32_t get_changedType_1() const { return ___changedType_1; }
	inline int32_t* get_address_of_changedType_1() { return &___changedType_1; }
	inline void set_changedType_1(int32_t value)
	{
		___changedType_1 = value;
	}

	inline static int32_t get_offset_of_oldIndex_2() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t550766041, ___oldIndex_2)); }
	inline int32_t get_oldIndex_2() const { return ___oldIndex_2; }
	inline int32_t* get_address_of_oldIndex_2() { return &___oldIndex_2; }
	inline void set_oldIndex_2(int32_t value)
	{
		___oldIndex_2 = value;
	}

	inline static int32_t get_offset_of_newIndex_3() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t550766041, ___newIndex_3)); }
	inline int32_t get_newIndex_3() const { return ___newIndex_3; }
	inline int32_t* get_address_of_newIndex_3() { return &___newIndex_3; }
	inline void set_newIndex_3(int32_t value)
	{
		___newIndex_3 = value;
	}

	inline static int32_t get_offset_of_propDesc_4() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t550766041, ___propDesc_4)); }
	inline PropertyDescriptor_t3383610232 * get_propDesc_4() const { return ___propDesc_4; }
	inline PropertyDescriptor_t3383610232 ** get_address_of_propDesc_4() { return &___propDesc_4; }
	inline void set_propDesc_4(PropertyDescriptor_t3383610232 * value)
	{
		___propDesc_4 = value;
		Il2CppCodeGenWriteBarrier((&___propDesc_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTCHANGEDEVENTARGS_T550766041_H
#ifndef COLLECTIONCHANGEEVENTARGS_T1605023889_H
#define COLLECTIONCHANGEEVENTARGS_T1605023889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeEventArgs
struct  CollectionChangeEventArgs_t1605023889  : public EventArgs_t3141815178
{
public:
	// System.ComponentModel.CollectionChangeAction System.ComponentModel.CollectionChangeEventArgs::changeAction
	int32_t ___changeAction_1;
	// System.Object System.ComponentModel.CollectionChangeEventArgs::theElement
	RuntimeObject * ___theElement_2;

public:
	inline static int32_t get_offset_of_changeAction_1() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t1605023889, ___changeAction_1)); }
	inline int32_t get_changeAction_1() const { return ___changeAction_1; }
	inline int32_t* get_address_of_changeAction_1() { return &___changeAction_1; }
	inline void set_changeAction_1(int32_t value)
	{
		___changeAction_1 = value;
	}

	inline static int32_t get_offset_of_theElement_2() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t1605023889, ___theElement_2)); }
	inline RuntimeObject * get_theElement_2() const { return ___theElement_2; }
	inline RuntimeObject ** get_address_of_theElement_2() { return &___theElement_2; }
	inline void set_theElement_2(RuntimeObject * value)
	{
		___theElement_2 = value;
		Il2CppCodeGenWriteBarrier((&___theElement_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCHANGEEVENTARGS_T1605023889_H
#ifndef LISTSORTDESCRIPTION_T4230969500_H
#define LISTSORTDESCRIPTION_T4230969500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDescription
struct  ListSortDescription_t4230969500  : public RuntimeObject
{
public:
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ListSortDescription::propertyDescriptor
	PropertyDescriptor_t3383610232 * ___propertyDescriptor_0;
	// System.ComponentModel.ListSortDirection System.ComponentModel.ListSortDescription::sortDirection
	int32_t ___sortDirection_1;

public:
	inline static int32_t get_offset_of_propertyDescriptor_0() { return static_cast<int32_t>(offsetof(ListSortDescription_t4230969500, ___propertyDescriptor_0)); }
	inline PropertyDescriptor_t3383610232 * get_propertyDescriptor_0() const { return ___propertyDescriptor_0; }
	inline PropertyDescriptor_t3383610232 ** get_address_of_propertyDescriptor_0() { return &___propertyDescriptor_0; }
	inline void set_propertyDescriptor_0(PropertyDescriptor_t3383610232 * value)
	{
		___propertyDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((&___propertyDescriptor_0), value);
	}

	inline static int32_t get_offset_of_sortDirection_1() { return static_cast<int32_t>(offsetof(ListSortDescription_t4230969500, ___sortDirection_1)); }
	inline int32_t get_sortDirection_1() const { return ___sortDirection_1; }
	inline int32_t* get_address_of_sortDirection_1() { return &___sortDirection_1; }
	inline void set_sortDirection_1(int32_t value)
	{
		___sortDirection_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTSORTDESCRIPTION_T4230969500_H
#ifndef DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T57904584_H
#define DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T57904584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct  DesignerSerializationVisibilityAttribute_t57904584  : public Attribute_t2136411158
{
public:
	// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::visibility
	int32_t ___visibility_0;

public:
	inline static int32_t get_offset_of_visibility_0() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t57904584, ___visibility_0)); }
	inline int32_t get_visibility_0() const { return ___visibility_0; }
	inline int32_t* get_address_of_visibility_0() { return &___visibility_0; }
	inline void set_visibility_0(int32_t value)
	{
		___visibility_0 = value;
	}
};

struct DesignerSerializationVisibilityAttribute_t57904584_StaticFields
{
public:
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Default
	DesignerSerializationVisibilityAttribute_t57904584 * ___Default_1;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Content
	DesignerSerializationVisibilityAttribute_t57904584 * ___Content_2;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Hidden
	DesignerSerializationVisibilityAttribute_t57904584 * ___Hidden_3;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Visible
	DesignerSerializationVisibilityAttribute_t57904584 * ___Visible_4;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t57904584_StaticFields, ___Default_1)); }
	inline DesignerSerializationVisibilityAttribute_t57904584 * get_Default_1() const { return ___Default_1; }
	inline DesignerSerializationVisibilityAttribute_t57904584 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignerSerializationVisibilityAttribute_t57904584 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_Content_2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t57904584_StaticFields, ___Content_2)); }
	inline DesignerSerializationVisibilityAttribute_t57904584 * get_Content_2() const { return ___Content_2; }
	inline DesignerSerializationVisibilityAttribute_t57904584 ** get_address_of_Content_2() { return &___Content_2; }
	inline void set_Content_2(DesignerSerializationVisibilityAttribute_t57904584 * value)
	{
		___Content_2 = value;
		Il2CppCodeGenWriteBarrier((&___Content_2), value);
	}

	inline static int32_t get_offset_of_Hidden_3() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t57904584_StaticFields, ___Hidden_3)); }
	inline DesignerSerializationVisibilityAttribute_t57904584 * get_Hidden_3() const { return ___Hidden_3; }
	inline DesignerSerializationVisibilityAttribute_t57904584 ** get_address_of_Hidden_3() { return &___Hidden_3; }
	inline void set_Hidden_3(DesignerSerializationVisibilityAttribute_t57904584 * value)
	{
		___Hidden_3 = value;
		Il2CppCodeGenWriteBarrier((&___Hidden_3), value);
	}

	inline static int32_t get_offset_of_Visible_4() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t57904584_StaticFields, ___Visible_4)); }
	inline DesignerSerializationVisibilityAttribute_t57904584 * get_Visible_4() const { return ___Visible_4; }
	inline DesignerSerializationVisibilityAttribute_t57904584 ** get_address_of_Visible_4() { return &___Visible_4; }
	inline void set_Visible_4(DesignerSerializationVisibilityAttribute_t57904584 * value)
	{
		___Visible_4 = value;
		Il2CppCodeGenWriteBarrier((&___Visible_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T57904584_H
#ifndef EDITORBROWSABLEATTRIBUTE_T2639616526_H
#define EDITORBROWSABLEATTRIBUTE_T2639616526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t2639616526  : public Attribute_t2136411158
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t2639616526, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLEATTRIBUTE_T2639616526_H
#ifndef INVALIDENUMARGUMENTEXCEPTION_T3669683455_H
#define INVALIDENUMARGUMENTEXCEPTION_T3669683455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InvalidEnumArgumentException
struct  InvalidEnumArgumentException_t3669683455  : public ArgumentException_t2563036156
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDENUMARGUMENTEXCEPTION_T3669683455_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1200 = { sizeof (BaseNumberConverter_t609700447), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1200[1] = 
{
	BaseNumberConverter_t609700447::get_offset_of_InnerType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1201 = { sizeof (BindableSupport_t3005598300)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1201[4] = 
{
	BindableSupport_t3005598300::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1202 = { sizeof (BooleanConverter_t3811050433), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1203 = { sizeof (BrowsableAttribute_t1903705142), -1, sizeof(BrowsableAttribute_t1903705142_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1203[4] = 
{
	BrowsableAttribute_t1903705142::get_offset_of_browsable_0(),
	BrowsableAttribute_t1903705142_StaticFields::get_offset_of_Default_1(),
	BrowsableAttribute_t1903705142_StaticFields::get_offset_of_No_2(),
	BrowsableAttribute_t1903705142_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1204 = { sizeof (ByteConverter_t977679179), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1205 = { sizeof (CancelEventArgs_t1437530969), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1205[1] = 
{
	CancelEventArgs_t1437530969::get_offset_of_cancel_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1206 = { sizeof (CategoryAttribute_t3135707549), -1, sizeof(CategoryAttribute_t3135707549_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1206[17] = 
{
	CategoryAttribute_t3135707549::get_offset_of_category_0(),
	CategoryAttribute_t3135707549::get_offset_of_IsLocalized_1(),
	CategoryAttribute_t3135707549_StaticFields::get_offset_of_action_2(),
	CategoryAttribute_t3135707549_StaticFields::get_offset_of_appearance_3(),
	CategoryAttribute_t3135707549_StaticFields::get_offset_of_behaviour_4(),
	CategoryAttribute_t3135707549_StaticFields::get_offset_of_data_5(),
	CategoryAttribute_t3135707549_StaticFields::get_offset_of_def_6(),
	CategoryAttribute_t3135707549_StaticFields::get_offset_of_design_7(),
	CategoryAttribute_t3135707549_StaticFields::get_offset_of_drag_drop_8(),
	CategoryAttribute_t3135707549_StaticFields::get_offset_of_focus_9(),
	CategoryAttribute_t3135707549_StaticFields::get_offset_of_format_10(),
	CategoryAttribute_t3135707549_StaticFields::get_offset_of_key_11(),
	CategoryAttribute_t3135707549_StaticFields::get_offset_of_layout_12(),
	CategoryAttribute_t3135707549_StaticFields::get_offset_of_mouse_13(),
	CategoryAttribute_t3135707549_StaticFields::get_offset_of_window_style_14(),
	CategoryAttribute_t3135707549_StaticFields::get_offset_of_async_15(),
	CategoryAttribute_t3135707549_StaticFields::get_offset_of_lockobj_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1207 = { sizeof (CharConverter_t251572683), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1208 = { sizeof (CollectionChangeAction_t3443053913)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1208[4] = 
{
	CollectionChangeAction_t3443053913::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1209 = { sizeof (CollectionChangeEventArgs_t1605023889), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1209[2] = 
{
	CollectionChangeEventArgs_t1605023889::get_offset_of_changeAction_1(),
	CollectionChangeEventArgs_t1605023889::get_offset_of_theElement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1210 = { sizeof (CollectionConverter_t2213234724), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1211 = { sizeof (Component_t1938025610), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1211[3] = 
{
	Component_t1938025610::get_offset_of_event_handlers_1(),
	Component_t1938025610::get_offset_of_mySite_2(),
	Component_t1938025610::get_offset_of_disposedEvent_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1212 = { sizeof (ComponentCollection_t2192651222), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1213 = { sizeof (ComponentConverter_t836488164), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1214 = { sizeof (CultureInfoConverter_t440640967), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1214[1] = 
{
	CultureInfoConverter_t440640967::get_offset_of__standardValues_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1215 = { sizeof (CultureInfoComparer_t1977175130), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1216 = { sizeof (CustomTypeDescriptor_t4164745589), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1216[1] = 
{
	CustomTypeDescriptor_t4164745589::get_offset_of__parent_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1217 = { sizeof (DateTimeConverter_t3603151160), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1218 = { sizeof (DecimalConverter_t3773816697), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1219 = { sizeof (DefaultEventAttribute_t209718012), -1, sizeof(DefaultEventAttribute_t209718012_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1219[2] = 
{
	DefaultEventAttribute_t209718012::get_offset_of_eventName_0(),
	DefaultEventAttribute_t209718012_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1220 = { sizeof (DefaultPropertyAttribute_t1726625396), -1, sizeof(DefaultPropertyAttribute_t1726625396_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1220[2] = 
{
	DefaultPropertyAttribute_t1726625396::get_offset_of_property_name_0(),
	DefaultPropertyAttribute_t1726625396_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1221 = { sizeof (DefaultValueAttribute_t1291420878), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1221[1] = 
{
	DefaultValueAttribute_t1291420878::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1222 = { sizeof (DescriptionAttribute_t3072823597), -1, sizeof(DescriptionAttribute_t3072823597_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1222[2] = 
{
	DescriptionAttribute_t3072823597::get_offset_of_desc_0(),
	DescriptionAttribute_t3072823597_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1223 = { sizeof (DesignOnlyAttribute_t784241330), -1, sizeof(DesignOnlyAttribute_t784241330_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1223[4] = 
{
	DesignOnlyAttribute_t784241330::get_offset_of_design_only_0(),
	DesignOnlyAttribute_t784241330_StaticFields::get_offset_of_Default_1(),
	DesignOnlyAttribute_t784241330_StaticFields::get_offset_of_No_2(),
	DesignOnlyAttribute_t784241330_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1224 = { sizeof (DesignTimeVisibleAttribute_t1673578136), -1, sizeof(DesignTimeVisibleAttribute_t1673578136_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1224[4] = 
{
	DesignTimeVisibleAttribute_t1673578136::get_offset_of_visible_0(),
	DesignTimeVisibleAttribute_t1673578136_StaticFields::get_offset_of_Default_1(),
	DesignTimeVisibleAttribute_t1673578136_StaticFields::get_offset_of_No_2(),
	DesignTimeVisibleAttribute_t1673578136_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1225 = { sizeof (DesignerAttribute_t1825174991), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1225[2] = 
{
	DesignerAttribute_t1825174991::get_offset_of_name_0(),
	DesignerAttribute_t1825174991::get_offset_of_basetypename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1226 = { sizeof (DesignerCategoryAttribute_t4258820745), -1, sizeof(DesignerCategoryAttribute_t4258820745_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1226[5] = 
{
	DesignerCategoryAttribute_t4258820745::get_offset_of_category_0(),
	DesignerCategoryAttribute_t4258820745_StaticFields::get_offset_of_Component_1(),
	DesignerCategoryAttribute_t4258820745_StaticFields::get_offset_of_Form_2(),
	DesignerCategoryAttribute_t4258820745_StaticFields::get_offset_of_Generic_3(),
	DesignerCategoryAttribute_t4258820745_StaticFields::get_offset_of_Default_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1227 = { sizeof (DesignerSerializationVisibility_t599541547)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1227[4] = 
{
	DesignerSerializationVisibility_t599541547::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1228 = { sizeof (DesignerSerializationVisibilityAttribute_t57904584), -1, sizeof(DesignerSerializationVisibilityAttribute_t57904584_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1228[5] = 
{
	DesignerSerializationVisibilityAttribute_t57904584::get_offset_of_visibility_0(),
	DesignerSerializationVisibilityAttribute_t57904584_StaticFields::get_offset_of_Default_1(),
	DesignerSerializationVisibilityAttribute_t57904584_StaticFields::get_offset_of_Content_2(),
	DesignerSerializationVisibilityAttribute_t57904584_StaticFields::get_offset_of_Hidden_3(),
	DesignerSerializationVisibilityAttribute_t57904584_StaticFields::get_offset_of_Visible_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1229 = { sizeof (DisplayNameAttribute_t4101407153), -1, sizeof(DisplayNameAttribute_t4101407153_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1229[2] = 
{
	DisplayNameAttribute_t4101407153_StaticFields::get_offset_of_Default_0(),
	DisplayNameAttribute_t4101407153::get_offset_of_attributeDisplayName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1230 = { sizeof (DoWorkEventArgs_t4214817447), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1230[3] = 
{
	DoWorkEventArgs_t4214817447::get_offset_of_arg_1(),
	DoWorkEventArgs_t4214817447::get_offset_of_result_2(),
	DoWorkEventArgs_t4214817447::get_offset_of_cancel_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1231 = { sizeof (DoubleConverter_t1820434333), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1232 = { sizeof (EditorAttribute_t2251207032), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1232[2] = 
{
	EditorAttribute_t2251207032::get_offset_of_name_0(),
	EditorAttribute_t2251207032::get_offset_of_basename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1233 = { sizeof (EditorBrowsableAttribute_t2639616526), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1233[1] = 
{
	EditorBrowsableAttribute_t2639616526::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1234 = { sizeof (EditorBrowsableState_t2192825251)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1234[4] = 
{
	EditorBrowsableState_t2192825251::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1235 = { sizeof (EnumConverter_t409969221), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1235[2] = 
{
	EnumConverter_t409969221::get_offset_of_type_0(),
	EnumConverter_t409969221::get_offset_of_stdValues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1236 = { sizeof (EnumComparer_t2134029618), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1237 = { sizeof (EventDescriptor_t1980666708), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1238 = { sizeof (EventDescriptorCollection_t2740790729), -1, sizeof(EventDescriptorCollection_t2740790729_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1238[3] = 
{
	EventDescriptorCollection_t2740790729::get_offset_of_eventList_0(),
	EventDescriptorCollection_t2740790729::get_offset_of_isReadOnly_1(),
	EventDescriptorCollection_t2740790729_StaticFields::get_offset_of_Empty_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1239 = { sizeof (ListEntry_t4294807321), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1239[3] = 
{
	ListEntry_t4294807321::get_offset_of_key_0(),
	ListEntry_t4294807321::get_offset_of_value_1(),
	ListEntry_t4294807321::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1240 = { sizeof (EventHandlerList_t421778690), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1240[2] = 
{
	EventHandlerList_t421778690::get_offset_of_entries_0(),
	EventHandlerList_t421778690::get_offset_of_null_entry_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1241 = { sizeof (ExpandableObjectConverter_t189315617), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1242 = { sizeof (GuidConverter_t1376596706), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1243 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1244 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1245 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1246 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1247 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1248 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1249 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1250 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1251 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1252 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1253 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1254 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1255 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1256 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1257 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1258 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1259 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1260 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1261 = { sizeof (ImmutableObjectAttribute_t587176164), -1, sizeof(ImmutableObjectAttribute_t587176164_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1261[4] = 
{
	ImmutableObjectAttribute_t587176164::get_offset_of_immutable_0(),
	ImmutableObjectAttribute_t587176164_StaticFields::get_offset_of_Default_1(),
	ImmutableObjectAttribute_t587176164_StaticFields::get_offset_of_No_2(),
	ImmutableObjectAttribute_t587176164_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1262 = { sizeof (Int16Converter_t195698064), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1263 = { sizeof (Int32Converter_t1694245051), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1264 = { sizeof (Int64Converter_t3988148080), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1265 = { sizeof (InvalidEnumArgumentException_t3669683455), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1266 = { sizeof (LicFileLicenseProvider_t3855366030), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1267 = { sizeof (LicFileLicense_t1199352266), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1267[1] = 
{
	LicFileLicense_t1199352266::get_offset_of__key_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1268 = { sizeof (License_t1646999994), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1269 = { sizeof (LicenseContext_t3718458268), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1270 = { sizeof (LicenseException_t3131267149), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1270[1] = 
{
	LicenseException_t3131267149::get_offset_of_type_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1271 = { sizeof (LicenseManager_t1818735674), -1, sizeof(LicenseManager_t1818735674_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1271[3] = 
{
	LicenseManager_t1818735674_StaticFields::get_offset_of_mycontext_0(),
	LicenseManager_t1818735674_StaticFields::get_offset_of_contextLockUser_1(),
	LicenseManager_t1818735674_StaticFields::get_offset_of_lockObject_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1272 = { sizeof (LicenseProvider_t480757215), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1273 = { sizeof (LicenseProviderAttribute_t4227492568), -1, sizeof(LicenseProviderAttribute_t4227492568_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1273[2] = 
{
	LicenseProviderAttribute_t4227492568::get_offset_of_Provider_0(),
	LicenseProviderAttribute_t4227492568_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1274 = { sizeof (LicenseUsageMode_t2774854770)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1274[3] = 
{
	LicenseUsageMode_t2774854770::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1275 = { sizeof (ListBindableAttribute_t757012783), -1, sizeof(ListBindableAttribute_t757012783_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1275[4] = 
{
	ListBindableAttribute_t757012783_StaticFields::get_offset_of_Default_0(),
	ListBindableAttribute_t757012783_StaticFields::get_offset_of_No_1(),
	ListBindableAttribute_t757012783_StaticFields::get_offset_of_Yes_2(),
	ListBindableAttribute_t757012783::get_offset_of_bindable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1276 = { sizeof (ListChangedEventArgs_t550766041), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1276[4] = 
{
	ListChangedEventArgs_t550766041::get_offset_of_changedType_1(),
	ListChangedEventArgs_t550766041::get_offset_of_oldIndex_2(),
	ListChangedEventArgs_t550766041::get_offset_of_newIndex_3(),
	ListChangedEventArgs_t550766041::get_offset_of_propDesc_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1277 = { sizeof (ListChangedType_t722840504)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1277[9] = 
{
	ListChangedType_t722840504::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1278 = { sizeof (ListSortDescription_t4230969500), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1278[2] = 
{
	ListSortDescription_t4230969500::get_offset_of_propertyDescriptor_0(),
	ListSortDescription_t4230969500::get_offset_of_sortDirection_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1279 = { sizeof (ListSortDescriptionCollection_t90866227), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1279[1] = 
{
	ListSortDescriptionCollection_t90866227::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1280 = { sizeof (ListSortDirection_t666044431)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1280[3] = 
{
	ListSortDirection_t666044431::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1281 = { sizeof (LocalizableAttribute_t2134938666), -1, sizeof(LocalizableAttribute_t2134938666_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1281[4] = 
{
	LocalizableAttribute_t2134938666::get_offset_of_localizable_0(),
	LocalizableAttribute_t2134938666_StaticFields::get_offset_of_Default_1(),
	LocalizableAttribute_t2134938666_StaticFields::get_offset_of_No_2(),
	LocalizableAttribute_t2134938666_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1282 = { sizeof (MarshalByValueComponent_t3672154591), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1282[3] = 
{
	MarshalByValueComponent_t3672154591::get_offset_of_eventList_0(),
	MarshalByValueComponent_t3672154591::get_offset_of_mySite_1(),
	MarshalByValueComponent_t3672154591::get_offset_of_disposedEvent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1283 = { sizeof (MemberDescriptor_t1395163271), -1, sizeof(MemberDescriptor_t1395163271_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1283[4] = 
{
	MemberDescriptor_t1395163271::get_offset_of_name_0(),
	MemberDescriptor_t1395163271::get_offset_of_attrs_1(),
	MemberDescriptor_t1395163271::get_offset_of_attrCollection_2(),
	MemberDescriptor_t1395163271_StaticFields::get_offset_of_default_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1284 = { sizeof (MemberDescriptorComparer_t4257205960), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1285 = { sizeof (MergablePropertyAttribute_t1973371765), -1, sizeof(MergablePropertyAttribute_t1973371765_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1285[4] = 
{
	MergablePropertyAttribute_t1973371765::get_offset_of_mergable_0(),
	MergablePropertyAttribute_t1973371765_StaticFields::get_offset_of_Default_1(),
	MergablePropertyAttribute_t1973371765_StaticFields::get_offset_of_No_2(),
	MergablePropertyAttribute_t1973371765_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1286 = { sizeof (MultilineStringConverter_t333079652), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1287 = { sizeof (NotifyParentPropertyAttribute_t3666634230), -1, sizeof(NotifyParentPropertyAttribute_t3666634230_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1287[4] = 
{
	NotifyParentPropertyAttribute_t3666634230::get_offset_of_notifyParent_0(),
	NotifyParentPropertyAttribute_t3666634230_StaticFields::get_offset_of_Default_1(),
	NotifyParentPropertyAttribute_t3666634230_StaticFields::get_offset_of_No_2(),
	NotifyParentPropertyAttribute_t3666634230_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1288 = { sizeof (NullableConverter_t2535156676), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1288[3] = 
{
	NullableConverter_t2535156676::get_offset_of_nullableType_0(),
	NullableConverter_t2535156676::get_offset_of_underlyingType_1(),
	NullableConverter_t2535156676::get_offset_of_underlyingTypeConverter_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1289 = { sizeof (PasswordPropertyTextAttribute_t1626749289), -1, sizeof(PasswordPropertyTextAttribute_t1626749289_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1289[4] = 
{
	PasswordPropertyTextAttribute_t1626749289_StaticFields::get_offset_of_Default_0(),
	PasswordPropertyTextAttribute_t1626749289_StaticFields::get_offset_of_No_1(),
	PasswordPropertyTextAttribute_t1626749289_StaticFields::get_offset_of_Yes_2(),
	PasswordPropertyTextAttribute_t1626749289::get_offset_of__password_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1290 = { sizeof (ProgressChangedEventArgs_t2010522142), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1290[2] = 
{
	ProgressChangedEventArgs_t2010522142::get_offset_of_progress_1(),
	ProgressChangedEventArgs_t2010522142::get_offset_of_state_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1291 = { sizeof (PropertyChangedEventArgs_t263240575), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1291[1] = 
{
	PropertyChangedEventArgs_t263240575::get_offset_of_propertyName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1292 = { sizeof (PropertyDescriptor_t3383610232), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1292[2] = 
{
	PropertyDescriptor_t3383610232::get_offset_of_converter_4(),
	PropertyDescriptor_t3383610232::get_offset_of_notifiers_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1293 = { sizeof (PropertyDescriptorCollection_t1853078063), -1, sizeof(PropertyDescriptorCollection_t1853078063_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1293[3] = 
{
	PropertyDescriptorCollection_t1853078063_StaticFields::get_offset_of_Empty_0(),
	PropertyDescriptorCollection_t1853078063::get_offset_of_properties_1(),
	PropertyDescriptorCollection_t1853078063::get_offset_of_readOnly_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1294 = { sizeof (ReadOnlyAttribute_t1798401129), -1, sizeof(ReadOnlyAttribute_t1798401129_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1294[4] = 
{
	ReadOnlyAttribute_t1798401129::get_offset_of_read_only_0(),
	ReadOnlyAttribute_t1798401129_StaticFields::get_offset_of_No_1(),
	ReadOnlyAttribute_t1798401129_StaticFields::get_offset_of_Yes_2(),
	ReadOnlyAttribute_t1798401129_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1295 = { sizeof (RecommendedAsConfigurableAttribute_t3039128509), -1, sizeof(RecommendedAsConfigurableAttribute_t3039128509_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1295[4] = 
{
	RecommendedAsConfigurableAttribute_t3039128509::get_offset_of_recommendedAsConfigurable_0(),
	RecommendedAsConfigurableAttribute_t3039128509_StaticFields::get_offset_of_Default_1(),
	RecommendedAsConfigurableAttribute_t3039128509_StaticFields::get_offset_of_No_2(),
	RecommendedAsConfigurableAttribute_t3039128509_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1296 = { sizeof (ReferenceConverter_t2290575937), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1296[1] = 
{
	ReferenceConverter_t2290575937::get_offset_of_reference_type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1297 = { sizeof (ReflectionEventDescriptor_t375800870), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1297[5] = 
{
	ReflectionEventDescriptor_t375800870::get_offset_of__eventType_4(),
	ReflectionEventDescriptor_t375800870::get_offset_of__componentType_5(),
	ReflectionEventDescriptor_t375800870::get_offset_of__eventInfo_6(),
	ReflectionEventDescriptor_t375800870::get_offset_of_add_method_7(),
	ReflectionEventDescriptor_t375800870::get_offset_of_remove_method_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1298 = { sizeof (ReflectionPropertyDescriptor_t1303070047), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1298[6] = 
{
	ReflectionPropertyDescriptor_t1303070047::get_offset_of__member_6(),
	ReflectionPropertyDescriptor_t1303070047::get_offset_of__componentType_7(),
	ReflectionPropertyDescriptor_t1303070047::get_offset_of__propertyType_8(),
	ReflectionPropertyDescriptor_t1303070047::get_offset_of_getter_9(),
	ReflectionPropertyDescriptor_t1303070047::get_offset_of_setter_10(),
	ReflectionPropertyDescriptor_t1303070047::get_offset_of_accessors_inited_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1299 = { sizeof (RefreshEventArgs_t4146012826), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1299[2] = 
{
	RefreshEventArgs_t4146012826::get_offset_of_component_1(),
	RefreshEventArgs_t4146012826::get_offset_of_type_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
