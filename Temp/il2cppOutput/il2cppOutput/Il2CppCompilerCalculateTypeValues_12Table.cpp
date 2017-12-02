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
struct IntPtrU5BU5D_t3659589827;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t2958216421;
// System.Collections.ArrayList
struct ArrayList_t844188058;
// System.ComponentModel.LicenseContext
struct LicenseContext_t3946480566;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t3487491007;
// System.Attribute[]
struct AttributeU5BU5D_t2034662870;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t2011369259;
// System.Collections.IComparer
struct IComparer_t2834187276;
// System.Delegate
struct Delegate_t4108129447;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2872288717;
// System.ComponentModel.ListEntry
struct ListEntry_t3734272735;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1427346375;
// System.ComponentModel.ISite
struct ISite_t1384312042;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t2966684696;
// System.Collections.Hashtable
struct Hashtable_t2604207785;
// System.Char[]
struct CharU5BU5D_t1565992178;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t3784828983;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_t1826438136;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t4009622457;




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
#ifndef EXCEPTION_T3144957912_H
#define EXCEPTION_T3144957912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3144957912  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t3659589827* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t3144957912 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t3144957912, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t3659589827* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t3659589827** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t3659589827* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t3144957912, ___inner_exception_1)); }
	inline Exception_t3144957912 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t3144957912 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t3144957912 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t3144957912, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t3144957912, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t3144957912, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t3144957912, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t3144957912, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t3144957912, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t3144957912, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t3144957912, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t3144957912, ____data_10)); }
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
#endif // EXCEPTION_T3144957912_H
#ifndef MEMBERDESCRIPTORCOMPARER_T2685358907_H
#define MEMBERDESCRIPTORCOMPARER_T2685358907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor/MemberDescriptorComparer
struct  MemberDescriptorComparer_t2685358907  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTORCOMPARER_T2685358907_H
#ifndef LISTSORTDESCRIPTIONCOLLECTION_T3906840441_H
#define LISTSORTDESCRIPTIONCOLLECTION_T3906840441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDescriptionCollection
struct  ListSortDescriptionCollection_t3906840441  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.ListSortDescriptionCollection::list
	ArrayList_t844188058 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ListSortDescriptionCollection_t3906840441, ___list_0)); }
	inline ArrayList_t844188058 * get_list_0() const { return ___list_0; }
	inline ArrayList_t844188058 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t844188058 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTSORTDESCRIPTIONCOLLECTION_T3906840441_H
#ifndef VALUETYPE_T899977641_H
#define VALUETYPE_T899977641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t899977641  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t899977641_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t899977641_marshaled_com
{
};
#endif // VALUETYPE_T899977641_H
#ifndef LICENSEPROVIDER_T3084024763_H
#define LICENSEPROVIDER_T3084024763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseProvider
struct  LicenseProvider_t3084024763  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEPROVIDER_T3084024763_H
#ifndef LICENSEMANAGER_T4070037356_H
#define LICENSEMANAGER_T4070037356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseManager
struct  LicenseManager_t4070037356  : public RuntimeObject
{
public:

public:
};

struct LicenseManager_t4070037356_StaticFields
{
public:
	// System.ComponentModel.LicenseContext System.ComponentModel.LicenseManager::mycontext
	LicenseContext_t3946480566 * ___mycontext_0;
	// System.Object System.ComponentModel.LicenseManager::contextLockUser
	RuntimeObject * ___contextLockUser_1;
	// System.Object System.ComponentModel.LicenseManager::lockObject
	RuntimeObject * ___lockObject_2;

public:
	inline static int32_t get_offset_of_mycontext_0() { return static_cast<int32_t>(offsetof(LicenseManager_t4070037356_StaticFields, ___mycontext_0)); }
	inline LicenseContext_t3946480566 * get_mycontext_0() const { return ___mycontext_0; }
	inline LicenseContext_t3946480566 ** get_address_of_mycontext_0() { return &___mycontext_0; }
	inline void set_mycontext_0(LicenseContext_t3946480566 * value)
	{
		___mycontext_0 = value;
		Il2CppCodeGenWriteBarrier((&___mycontext_0), value);
	}

	inline static int32_t get_offset_of_contextLockUser_1() { return static_cast<int32_t>(offsetof(LicenseManager_t4070037356_StaticFields, ___contextLockUser_1)); }
	inline RuntimeObject * get_contextLockUser_1() const { return ___contextLockUser_1; }
	inline RuntimeObject ** get_address_of_contextLockUser_1() { return &___contextLockUser_1; }
	inline void set_contextLockUser_1(RuntimeObject * value)
	{
		___contextLockUser_1 = value;
		Il2CppCodeGenWriteBarrier((&___contextLockUser_1), value);
	}

	inline static int32_t get_offset_of_lockObject_2() { return static_cast<int32_t>(offsetof(LicenseManager_t4070037356_StaticFields, ___lockObject_2)); }
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
#endif // LICENSEMANAGER_T4070037356_H
#ifndef LICENSECONTEXT_T3946480566_H
#define LICENSECONTEXT_T3946480566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseContext
struct  LicenseContext_t3946480566  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSECONTEXT_T3946480566_H
#ifndef CUSTOMTYPEDESCRIPTOR_T2791691433_H
#define CUSTOMTYPEDESCRIPTOR_T2791691433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CustomTypeDescriptor
struct  CustomTypeDescriptor_t2791691433  : public RuntimeObject
{
public:
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.CustomTypeDescriptor::_parent
	RuntimeObject* ____parent_0;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(CustomTypeDescriptor_t2791691433, ____parent_0)); }
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
#endif // CUSTOMTYPEDESCRIPTOR_T2791691433_H
#ifndef CULTUREINFOCOMPARER_T2816788261_H
#define CULTUREINFOCOMPARER_T2816788261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureInfoComparer
struct  CultureInfoComparer_t2816788261  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCOMPARER_T2816788261_H
#ifndef LICENSE_T1289767319_H
#define LICENSE_T1289767319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.License
struct  License_t1289767319  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSE_T1289767319_H
#ifndef MEMBERDESCRIPTOR_T3689707769_H
#define MEMBERDESCRIPTOR_T3689707769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t3689707769  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attrs
	AttributeU5BU5D_t2034662870* ___attrs_1;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attrCollection
	AttributeCollection_t2011369259 * ___attrCollection_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3689707769, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3689707769, ___attrs_1)); }
	inline AttributeU5BU5D_t2034662870* get_attrs_1() const { return ___attrs_1; }
	inline AttributeU5BU5D_t2034662870** get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(AttributeU5BU5D_t2034662870* value)
	{
		___attrs_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrs_1), value);
	}

	inline static int32_t get_offset_of_attrCollection_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3689707769, ___attrCollection_2)); }
	inline AttributeCollection_t2011369259 * get_attrCollection_2() const { return ___attrCollection_2; }
	inline AttributeCollection_t2011369259 ** get_address_of_attrCollection_2() { return &___attrCollection_2; }
	inline void set_attrCollection_2(AttributeCollection_t2011369259 * value)
	{
		___attrCollection_2 = value;
		Il2CppCodeGenWriteBarrier((&___attrCollection_2), value);
	}
};

struct MemberDescriptor_t3689707769_StaticFields
{
public:
	// System.Collections.IComparer System.ComponentModel.MemberDescriptor::default_comparer
	RuntimeObject* ___default_comparer_3;

public:
	inline static int32_t get_offset_of_default_comparer_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3689707769_StaticFields, ___default_comparer_3)); }
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
#endif // MEMBERDESCRIPTOR_T3689707769_H
#ifndef PROPERTYDESCRIPTORCOLLECTION_T3803351598_H
#define PROPERTYDESCRIPTORCOLLECTION_T3803351598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptorCollection
struct  PropertyDescriptorCollection_t3803351598  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.PropertyDescriptorCollection::properties
	ArrayList_t844188058 * ___properties_1;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::readOnly
	bool ___readOnly_2;

public:
	inline static int32_t get_offset_of_properties_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3803351598, ___properties_1)); }
	inline ArrayList_t844188058 * get_properties_1() const { return ___properties_1; }
	inline ArrayList_t844188058 ** get_address_of_properties_1() { return &___properties_1; }
	inline void set_properties_1(ArrayList_t844188058 * value)
	{
		___properties_1 = value;
		Il2CppCodeGenWriteBarrier((&___properties_1), value);
	}

	inline static int32_t get_offset_of_readOnly_2() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3803351598, ___readOnly_2)); }
	inline bool get_readOnly_2() const { return ___readOnly_2; }
	inline bool* get_address_of_readOnly_2() { return &___readOnly_2; }
	inline void set_readOnly_2(bool value)
	{
		___readOnly_2 = value;
	}
};

struct PropertyDescriptorCollection_t3803351598_StaticFields
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Empty
	PropertyDescriptorCollection_t3803351598 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3803351598_StaticFields, ___Empty_0)); }
	inline PropertyDescriptorCollection_t3803351598 * get_Empty_0() const { return ___Empty_0; }
	inline PropertyDescriptorCollection_t3803351598 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(PropertyDescriptorCollection_t3803351598 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTORCOLLECTION_T3803351598_H
#ifndef ENUMCOMPARER_T2896971067_H
#define ENUMCOMPARER_T2896971067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter/EnumComparer
struct  EnumComparer_t2896971067  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCOMPARER_T2896971067_H
#ifndef EVENTDESCRIPTORCOLLECTION_T469371606_H
#define EVENTDESCRIPTORCOLLECTION_T469371606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptorCollection
struct  EventDescriptorCollection_t469371606  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.EventDescriptorCollection::eventList
	ArrayList_t844188058 * ___eventList_0;
	// System.Boolean System.ComponentModel.EventDescriptorCollection::isReadOnly
	bool ___isReadOnly_1;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t469371606, ___eventList_0)); }
	inline ArrayList_t844188058 * get_eventList_0() const { return ___eventList_0; }
	inline ArrayList_t844188058 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(ArrayList_t844188058 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_isReadOnly_1() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t469371606, ___isReadOnly_1)); }
	inline bool get_isReadOnly_1() const { return ___isReadOnly_1; }
	inline bool* get_address_of_isReadOnly_1() { return &___isReadOnly_1; }
	inline void set_isReadOnly_1(bool value)
	{
		___isReadOnly_1 = value;
	}
};

struct EventDescriptorCollection_t469371606_StaticFields
{
public:
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.EventDescriptorCollection::Empty
	EventDescriptorCollection_t469371606 * ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t469371606_StaticFields, ___Empty_2)); }
	inline EventDescriptorCollection_t469371606 * get_Empty_2() const { return ___Empty_2; }
	inline EventDescriptorCollection_t469371606 ** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(EventDescriptorCollection_t469371606 * value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTORCOLLECTION_T469371606_H
#ifndef TYPECONVERTER_T2966684696_H
#define TYPECONVERTER_T2966684696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2966684696  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T2966684696_H
#ifndef LISTENTRY_T3734272735_H
#define LISTENTRY_T3734272735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListEntry
struct  ListEntry_t3734272735  : public RuntimeObject
{
public:
	// System.Object System.ComponentModel.ListEntry::key
	RuntimeObject * ___key_0;
	// System.Delegate System.ComponentModel.ListEntry::value
	Delegate_t4108129447 * ___value_1;
	// System.ComponentModel.ListEntry System.ComponentModel.ListEntry::next
	ListEntry_t3734272735 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(ListEntry_t3734272735, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ListEntry_t3734272735, ___value_1)); }
	inline Delegate_t4108129447 * get_value_1() const { return ___value_1; }
	inline Delegate_t4108129447 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Delegate_t4108129447 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(ListEntry_t3734272735, ___next_2)); }
	inline ListEntry_t3734272735 * get_next_2() const { return ___next_2; }
	inline ListEntry_t3734272735 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(ListEntry_t3734272735 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENTRY_T3734272735_H
#ifndef ATTRIBUTE_T4043032847_H
#define ATTRIBUTE_T4043032847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t4043032847  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T4043032847_H
#ifndef EVENTARGS_T2070024930_H
#define EVENTARGS_T2070024930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t2070024930  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t2070024930_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t2070024930 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t2070024930_StaticFields, ___Empty_0)); }
	inline EventArgs_t2070024930 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t2070024930 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t2070024930 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T2070024930_H
#ifndef MARSHALBYREFOBJECT_T1236449280_H
#define MARSHALBYREFOBJECT_T1236449280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t1236449280  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2872288717 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t1236449280, ____identity_0)); }
	inline ServerIdentity_t2872288717 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2872288717 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2872288717 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T1236449280_H
#ifndef READONLYCOLLECTIONBASE_T64003788_H
#define READONLYCOLLECTIONBASE_T64003788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t64003788  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t844188058 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t64003788, ___list_0)); }
	inline ArrayList_t844188058 * get_list_0() const { return ___list_0; }
	inline ArrayList_t844188058 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t844188058 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T64003788_H
#ifndef EVENTHANDLERLIST_T1427346375_H
#define EVENTHANDLERLIST_T1427346375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList
struct  EventHandlerList_t1427346375  : public RuntimeObject
{
public:
	// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::entries
	ListEntry_t3734272735 * ___entries_0;
	// System.Delegate System.ComponentModel.EventHandlerList::null_entry
	Delegate_t4108129447 * ___null_entry_1;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(EventHandlerList_t1427346375, ___entries_0)); }
	inline ListEntry_t3734272735 * get_entries_0() const { return ___entries_0; }
	inline ListEntry_t3734272735 ** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(ListEntry_t3734272735 * value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier((&___entries_0), value);
	}

	inline static int32_t get_offset_of_null_entry_1() { return static_cast<int32_t>(offsetof(EventHandlerList_t1427346375, ___null_entry_1)); }
	inline Delegate_t4108129447 * get_null_entry_1() const { return ___null_entry_1; }
	inline Delegate_t4108129447 ** get_address_of_null_entry_1() { return &___null_entry_1; }
	inline void set_null_entry_1(Delegate_t4108129447 * value)
	{
		___null_entry_1 = value;
		Il2CppCodeGenWriteBarrier((&___null_entry_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLERLIST_T1427346375_H
#ifndef MARSHALBYVALUECOMPONENT_T1256752560_H
#define MARSHALBYVALUECOMPONENT_T1256752560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t1256752560  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::eventList
	EventHandlerList_t1427346375 * ___eventList_0;
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	RuntimeObject* ___mySite_1;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	RuntimeObject * ___disposedEvent_2;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t1256752560, ___eventList_0)); }
	inline EventHandlerList_t1427346375 * get_eventList_0() const { return ___eventList_0; }
	inline EventHandlerList_t1427346375 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(EventHandlerList_t1427346375 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_mySite_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t1256752560, ___mySite_1)); }
	inline RuntimeObject* get_mySite_1() const { return ___mySite_1; }
	inline RuntimeObject** get_address_of_mySite_1() { return &___mySite_1; }
	inline void set_mySite_1(RuntimeObject* value)
	{
		___mySite_1 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_1), value);
	}

	inline static int32_t get_offset_of_disposedEvent_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t1256752560, ___disposedEvent_2)); }
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
#endif // MARSHALBYVALUECOMPONENT_T1256752560_H
#ifndef LICFILELICENSEPROVIDER_T4226002989_H
#define LICFILELICENSEPROVIDER_T4226002989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicFileLicenseProvider
struct  LicFileLicenseProvider_t4226002989  : public LicenseProvider_t3084024763
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICFILELICENSEPROVIDER_T4226002989_H
#ifndef LICENSEPROVIDERATTRIBUTE_T2740736635_H
#define LICENSEPROVIDERATTRIBUTE_T2740736635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseProviderAttribute
struct  LicenseProviderAttribute_t2740736635  : public Attribute_t4043032847
{
public:
	// System.Type System.ComponentModel.LicenseProviderAttribute::Provider
	Type_t * ___Provider_0;

public:
	inline static int32_t get_offset_of_Provider_0() { return static_cast<int32_t>(offsetof(LicenseProviderAttribute_t2740736635, ___Provider_0)); }
	inline Type_t * get_Provider_0() const { return ___Provider_0; }
	inline Type_t ** get_address_of_Provider_0() { return &___Provider_0; }
	inline void set_Provider_0(Type_t * value)
	{
		___Provider_0 = value;
		Il2CppCodeGenWriteBarrier((&___Provider_0), value);
	}
};

struct LicenseProviderAttribute_t2740736635_StaticFields
{
public:
	// System.ComponentModel.LicenseProviderAttribute System.ComponentModel.LicenseProviderAttribute::Default
	LicenseProviderAttribute_t2740736635 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(LicenseProviderAttribute_t2740736635_StaticFields, ___Default_1)); }
	inline LicenseProviderAttribute_t2740736635 * get_Default_1() const { return ___Default_1; }
	inline LicenseProviderAttribute_t2740736635 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(LicenseProviderAttribute_t2740736635 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEPROVIDERATTRIBUTE_T2740736635_H
#ifndef LISTBINDABLEATTRIBUTE_T426259451_H
#define LISTBINDABLEATTRIBUTE_T426259451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListBindableAttribute
struct  ListBindableAttribute_t426259451  : public Attribute_t4043032847
{
public:
	// System.Boolean System.ComponentModel.ListBindableAttribute::bindable
	bool ___bindable_3;

public:
	inline static int32_t get_offset_of_bindable_3() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t426259451, ___bindable_3)); }
	inline bool get_bindable_3() const { return ___bindable_3; }
	inline bool* get_address_of_bindable_3() { return &___bindable_3; }
	inline void set_bindable_3(bool value)
	{
		___bindable_3 = value;
	}
};

struct ListBindableAttribute_t426259451_StaticFields
{
public:
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Default
	ListBindableAttribute_t426259451 * ___Default_0;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::No
	ListBindableAttribute_t426259451 * ___No_1;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Yes
	ListBindableAttribute_t426259451 * ___Yes_2;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t426259451_StaticFields, ___Default_0)); }
	inline ListBindableAttribute_t426259451 * get_Default_0() const { return ___Default_0; }
	inline ListBindableAttribute_t426259451 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ListBindableAttribute_t426259451 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t426259451_StaticFields, ___No_1)); }
	inline ListBindableAttribute_t426259451 * get_No_1() const { return ___No_1; }
	inline ListBindableAttribute_t426259451 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ListBindableAttribute_t426259451 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t426259451_StaticFields, ___Yes_2)); }
	inline ListBindableAttribute_t426259451 * get_Yes_2() const { return ___Yes_2; }
	inline ListBindableAttribute_t426259451 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ListBindableAttribute_t426259451 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTBINDABLEATTRIBUTE_T426259451_H
#ifndef LICFILELICENSE_T1564609693_H
#define LICFILELICENSE_T1564609693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicFileLicense
struct  LicFileLicense_t1564609693  : public License_t1289767319
{
public:
	// System.String System.ComponentModel.LicFileLicense::_key
	String_t* ____key_0;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(LicFileLicense_t1564609693, ____key_0)); }
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
#endif // LICFILELICENSE_T1564609693_H
#ifndef NOTIFYPARENTPROPERTYATTRIBUTE_T1439406644_H
#define NOTIFYPARENTPROPERTYATTRIBUTE_T1439406644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NotifyParentPropertyAttribute
struct  NotifyParentPropertyAttribute_t1439406644  : public Attribute_t4043032847
{
public:
	// System.Boolean System.ComponentModel.NotifyParentPropertyAttribute::notifyParent
	bool ___notifyParent_0;

public:
	inline static int32_t get_offset_of_notifyParent_0() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t1439406644, ___notifyParent_0)); }
	inline bool get_notifyParent_0() const { return ___notifyParent_0; }
	inline bool* get_address_of_notifyParent_0() { return &___notifyParent_0; }
	inline void set_notifyParent_0(bool value)
	{
		___notifyParent_0 = value;
	}
};

struct NotifyParentPropertyAttribute_t1439406644_StaticFields
{
public:
	// System.ComponentModel.NotifyParentPropertyAttribute System.ComponentModel.NotifyParentPropertyAttribute::Default
	NotifyParentPropertyAttribute_t1439406644 * ___Default_1;
	// System.ComponentModel.NotifyParentPropertyAttribute System.ComponentModel.NotifyParentPropertyAttribute::No
	NotifyParentPropertyAttribute_t1439406644 * ___No_2;
	// System.ComponentModel.NotifyParentPropertyAttribute System.ComponentModel.NotifyParentPropertyAttribute::Yes
	NotifyParentPropertyAttribute_t1439406644 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t1439406644_StaticFields, ___Default_1)); }
	inline NotifyParentPropertyAttribute_t1439406644 * get_Default_1() const { return ___Default_1; }
	inline NotifyParentPropertyAttribute_t1439406644 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(NotifyParentPropertyAttribute_t1439406644 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t1439406644_StaticFields, ___No_2)); }
	inline NotifyParentPropertyAttribute_t1439406644 * get_No_2() const { return ___No_2; }
	inline NotifyParentPropertyAttribute_t1439406644 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(NotifyParentPropertyAttribute_t1439406644 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t1439406644_StaticFields, ___Yes_3)); }
	inline NotifyParentPropertyAttribute_t1439406644 * get_Yes_3() const { return ___Yes_3; }
	inline NotifyParentPropertyAttribute_t1439406644 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(NotifyParentPropertyAttribute_t1439406644 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYPARENTPROPERTYATTRIBUTE_T1439406644_H
#ifndef MERGABLEPROPERTYATTRIBUTE_T4046554239_H
#define MERGABLEPROPERTYATTRIBUTE_T4046554239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MergablePropertyAttribute
struct  MergablePropertyAttribute_t4046554239  : public Attribute_t4043032847
{
public:
	// System.Boolean System.ComponentModel.MergablePropertyAttribute::mergable
	bool ___mergable_0;

public:
	inline static int32_t get_offset_of_mergable_0() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t4046554239, ___mergable_0)); }
	inline bool get_mergable_0() const { return ___mergable_0; }
	inline bool* get_address_of_mergable_0() { return &___mergable_0; }
	inline void set_mergable_0(bool value)
	{
		___mergable_0 = value;
	}
};

struct MergablePropertyAttribute_t4046554239_StaticFields
{
public:
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Default
	MergablePropertyAttribute_t4046554239 * ___Default_1;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::No
	MergablePropertyAttribute_t4046554239 * ___No_2;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Yes
	MergablePropertyAttribute_t4046554239 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t4046554239_StaticFields, ___Default_1)); }
	inline MergablePropertyAttribute_t4046554239 * get_Default_1() const { return ___Default_1; }
	inline MergablePropertyAttribute_t4046554239 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(MergablePropertyAttribute_t4046554239 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t4046554239_StaticFields, ___No_2)); }
	inline MergablePropertyAttribute_t4046554239 * get_No_2() const { return ___No_2; }
	inline MergablePropertyAttribute_t4046554239 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(MergablePropertyAttribute_t4046554239 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t4046554239_StaticFields, ___Yes_3)); }
	inline MergablePropertyAttribute_t4046554239 * get_Yes_3() const { return ___Yes_3; }
	inline MergablePropertyAttribute_t4046554239 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(MergablePropertyAttribute_t4046554239 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGABLEPROPERTYATTRIBUTE_T4046554239_H
#ifndef MULTILINESTRINGCONVERTER_T4043589183_H
#define MULTILINESTRINGCONVERTER_T4043589183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MultilineStringConverter
struct  MultilineStringConverter_t4043589183  : public TypeConverter_t2966684696
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTILINESTRINGCONVERTER_T4043589183_H
#ifndef NULLABLECONVERTER_T2861585743_H
#define NULLABLECONVERTER_T2861585743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NullableConverter
struct  NullableConverter_t2861585743  : public TypeConverter_t2966684696
{
public:
	// System.Type System.ComponentModel.NullableConverter::nullableType
	Type_t * ___nullableType_0;
	// System.Type System.ComponentModel.NullableConverter::underlyingType
	Type_t * ___underlyingType_1;
	// System.ComponentModel.TypeConverter System.ComponentModel.NullableConverter::underlyingTypeConverter
	TypeConverter_t2966684696 * ___underlyingTypeConverter_2;

public:
	inline static int32_t get_offset_of_nullableType_0() { return static_cast<int32_t>(offsetof(NullableConverter_t2861585743, ___nullableType_0)); }
	inline Type_t * get_nullableType_0() const { return ___nullableType_0; }
	inline Type_t ** get_address_of_nullableType_0() { return &___nullableType_0; }
	inline void set_nullableType_0(Type_t * value)
	{
		___nullableType_0 = value;
		Il2CppCodeGenWriteBarrier((&___nullableType_0), value);
	}

	inline static int32_t get_offset_of_underlyingType_1() { return static_cast<int32_t>(offsetof(NullableConverter_t2861585743, ___underlyingType_1)); }
	inline Type_t * get_underlyingType_1() const { return ___underlyingType_1; }
	inline Type_t ** get_address_of_underlyingType_1() { return &___underlyingType_1; }
	inline void set_underlyingType_1(Type_t * value)
	{
		___underlyingType_1 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingType_1), value);
	}

	inline static int32_t get_offset_of_underlyingTypeConverter_2() { return static_cast<int32_t>(offsetof(NullableConverter_t2861585743, ___underlyingTypeConverter_2)); }
	inline TypeConverter_t2966684696 * get_underlyingTypeConverter_2() const { return ___underlyingTypeConverter_2; }
	inline TypeConverter_t2966684696 ** get_address_of_underlyingTypeConverter_2() { return &___underlyingTypeConverter_2; }
	inline void set_underlyingTypeConverter_2(TypeConverter_t2966684696 * value)
	{
		___underlyingTypeConverter_2 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingTypeConverter_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLECONVERTER_T2861585743_H
#ifndef PASSWORDPROPERTYTEXTATTRIBUTE_T789890149_H
#define PASSWORDPROPERTYTEXTATTRIBUTE_T789890149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PasswordPropertyTextAttribute
struct  PasswordPropertyTextAttribute_t789890149  : public Attribute_t4043032847
{
public:
	// System.Boolean System.ComponentModel.PasswordPropertyTextAttribute::_password
	bool ____password_3;

public:
	inline static int32_t get_offset_of__password_3() { return static_cast<int32_t>(offsetof(PasswordPropertyTextAttribute_t789890149, ____password_3)); }
	inline bool get__password_3() const { return ____password_3; }
	inline bool* get_address_of__password_3() { return &____password_3; }
	inline void set__password_3(bool value)
	{
		____password_3 = value;
	}
};

struct PasswordPropertyTextAttribute_t789890149_StaticFields
{
public:
	// System.ComponentModel.PasswordPropertyTextAttribute System.ComponentModel.PasswordPropertyTextAttribute::Default
	PasswordPropertyTextAttribute_t789890149 * ___Default_0;
	// System.ComponentModel.PasswordPropertyTextAttribute System.ComponentModel.PasswordPropertyTextAttribute::No
	PasswordPropertyTextAttribute_t789890149 * ___No_1;
	// System.ComponentModel.PasswordPropertyTextAttribute System.ComponentModel.PasswordPropertyTextAttribute::Yes
	PasswordPropertyTextAttribute_t789890149 * ___Yes_2;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(PasswordPropertyTextAttribute_t789890149_StaticFields, ___Default_0)); }
	inline PasswordPropertyTextAttribute_t789890149 * get_Default_0() const { return ___Default_0; }
	inline PasswordPropertyTextAttribute_t789890149 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(PasswordPropertyTextAttribute_t789890149 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(PasswordPropertyTextAttribute_t789890149_StaticFields, ___No_1)); }
	inline PasswordPropertyTextAttribute_t789890149 * get_No_1() const { return ___No_1; }
	inline PasswordPropertyTextAttribute_t789890149 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(PasswordPropertyTextAttribute_t789890149 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(PasswordPropertyTextAttribute_t789890149_StaticFields, ___Yes_2)); }
	inline PasswordPropertyTextAttribute_t789890149 * get_Yes_2() const { return ___Yes_2; }
	inline PasswordPropertyTextAttribute_t789890149 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(PasswordPropertyTextAttribute_t789890149 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PASSWORDPROPERTYTEXTATTRIBUTE_T789890149_H
#ifndef PROGRESSCHANGEDEVENTARGS_T3156154711_H
#define PROGRESSCHANGEDEVENTARGS_T3156154711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ProgressChangedEventArgs
struct  ProgressChangedEventArgs_t3156154711  : public EventArgs_t2070024930
{
public:
	// System.Int32 System.ComponentModel.ProgressChangedEventArgs::progress
	int32_t ___progress_1;
	// System.Object System.ComponentModel.ProgressChangedEventArgs::state
	RuntimeObject * ___state_2;

public:
	inline static int32_t get_offset_of_progress_1() { return static_cast<int32_t>(offsetof(ProgressChangedEventArgs_t3156154711, ___progress_1)); }
	inline int32_t get_progress_1() const { return ___progress_1; }
	inline int32_t* get_address_of_progress_1() { return &___progress_1; }
	inline void set_progress_1(int32_t value)
	{
		___progress_1 = value;
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(ProgressChangedEventArgs_t3156154711, ___state_2)); }
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
#endif // PROGRESSCHANGEDEVENTARGS_T3156154711_H
#ifndef PROPERTYCHANGEDEVENTARGS_T1472221181_H
#define PROPERTYCHANGEDEVENTARGS_T1472221181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangedEventArgs
struct  PropertyChangedEventArgs_t1472221181  : public EventArgs_t2070024930
{
public:
	// System.String System.ComponentModel.PropertyChangedEventArgs::propertyName
	String_t* ___propertyName_1;

public:
	inline static int32_t get_offset_of_propertyName_1() { return static_cast<int32_t>(offsetof(PropertyChangedEventArgs_t1472221181, ___propertyName_1)); }
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
#endif // PROPERTYCHANGEDEVENTARGS_T1472221181_H
#ifndef PROPERTYDESCRIPTOR_T4009622457_H
#define PROPERTYDESCRIPTOR_T4009622457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t4009622457  : public MemberDescriptor_t3689707769
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t2966684696 * ___converter_4;
	// System.Collections.Hashtable System.ComponentModel.PropertyDescriptor::notifiers
	Hashtable_t2604207785 * ___notifiers_5;

public:
	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t4009622457, ___converter_4)); }
	inline TypeConverter_t2966684696 * get_converter_4() const { return ___converter_4; }
	inline TypeConverter_t2966684696 ** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(TypeConverter_t2966684696 * value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}

	inline static int32_t get_offset_of_notifiers_5() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t4009622457, ___notifiers_5)); }
	inline Hashtable_t2604207785 * get_notifiers_5() const { return ___notifiers_5; }
	inline Hashtable_t2604207785 ** get_address_of_notifiers_5() { return &___notifiers_5; }
	inline void set_notifiers_5(Hashtable_t2604207785 * value)
	{
		___notifiers_5 = value;
		Il2CppCodeGenWriteBarrier((&___notifiers_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T4009622457_H
#ifndef READONLYATTRIBUTE_T1531168597_H
#define READONLYATTRIBUTE_T1531168597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReadOnlyAttribute
struct  ReadOnlyAttribute_t1531168597  : public Attribute_t4043032847
{
public:
	// System.Boolean System.ComponentModel.ReadOnlyAttribute::read_only
	bool ___read_only_0;

public:
	inline static int32_t get_offset_of_read_only_0() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1531168597, ___read_only_0)); }
	inline bool get_read_only_0() const { return ___read_only_0; }
	inline bool* get_address_of_read_only_0() { return &___read_only_0; }
	inline void set_read_only_0(bool value)
	{
		___read_only_0 = value;
	}
};

struct ReadOnlyAttribute_t1531168597_StaticFields
{
public:
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::No
	ReadOnlyAttribute_t1531168597 * ___No_1;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Yes
	ReadOnlyAttribute_t1531168597 * ___Yes_2;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Default
	ReadOnlyAttribute_t1531168597 * ___Default_3;

public:
	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1531168597_StaticFields, ___No_1)); }
	inline ReadOnlyAttribute_t1531168597 * get_No_1() const { return ___No_1; }
	inline ReadOnlyAttribute_t1531168597 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ReadOnlyAttribute_t1531168597 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1531168597_StaticFields, ___Yes_2)); }
	inline ReadOnlyAttribute_t1531168597 * get_Yes_2() const { return ___Yes_2; }
	inline ReadOnlyAttribute_t1531168597 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ReadOnlyAttribute_t1531168597 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1531168597_StaticFields, ___Default_3)); }
	inline ReadOnlyAttribute_t1531168597 * get_Default_3() const { return ___Default_3; }
	inline ReadOnlyAttribute_t1531168597 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(ReadOnlyAttribute_t1531168597 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T1531168597_H
#ifndef RECOMMENDEDASCONFIGURABLEATTRIBUTE_T3649212674_H
#define RECOMMENDEDASCONFIGURABLEATTRIBUTE_T3649212674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RecommendedAsConfigurableAttribute
struct  RecommendedAsConfigurableAttribute_t3649212674  : public Attribute_t4043032847
{
public:
	// System.Boolean System.ComponentModel.RecommendedAsConfigurableAttribute::recommendedAsConfigurable
	bool ___recommendedAsConfigurable_0;

public:
	inline static int32_t get_offset_of_recommendedAsConfigurable_0() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t3649212674, ___recommendedAsConfigurable_0)); }
	inline bool get_recommendedAsConfigurable_0() const { return ___recommendedAsConfigurable_0; }
	inline bool* get_address_of_recommendedAsConfigurable_0() { return &___recommendedAsConfigurable_0; }
	inline void set_recommendedAsConfigurable_0(bool value)
	{
		___recommendedAsConfigurable_0 = value;
	}
};

struct RecommendedAsConfigurableAttribute_t3649212674_StaticFields
{
public:
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::Default
	RecommendedAsConfigurableAttribute_t3649212674 * ___Default_1;
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::No
	RecommendedAsConfigurableAttribute_t3649212674 * ___No_2;
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::Yes
	RecommendedAsConfigurableAttribute_t3649212674 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t3649212674_StaticFields, ___Default_1)); }
	inline RecommendedAsConfigurableAttribute_t3649212674 * get_Default_1() const { return ___Default_1; }
	inline RecommendedAsConfigurableAttribute_t3649212674 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(RecommendedAsConfigurableAttribute_t3649212674 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t3649212674_StaticFields, ___No_2)); }
	inline RecommendedAsConfigurableAttribute_t3649212674 * get_No_2() const { return ___No_2; }
	inline RecommendedAsConfigurableAttribute_t3649212674 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(RecommendedAsConfigurableAttribute_t3649212674 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t3649212674_StaticFields, ___Yes_3)); }
	inline RecommendedAsConfigurableAttribute_t3649212674 * get_Yes_3() const { return ___Yes_3; }
	inline RecommendedAsConfigurableAttribute_t3649212674 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(RecommendedAsConfigurableAttribute_t3649212674 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOMMENDEDASCONFIGURABLEATTRIBUTE_T3649212674_H
#ifndef REFERENCECONVERTER_T3133734745_H
#define REFERENCECONVERTER_T3133734745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t3133734745  : public TypeConverter_t2966684696
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::reference_type
	Type_t * ___reference_type_0;

public:
	inline static int32_t get_offset_of_reference_type_0() { return static_cast<int32_t>(offsetof(ReferenceConverter_t3133734745, ___reference_type_0)); }
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
#endif // REFERENCECONVERTER_T3133734745_H
#ifndef REFRESHEVENTARGS_T669234255_H
#define REFRESHEVENTARGS_T669234255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshEventArgs
struct  RefreshEventArgs_t669234255  : public EventArgs_t2070024930
{
public:
	// System.Object System.ComponentModel.RefreshEventArgs::component
	RuntimeObject * ___component_1;
	// System.Type System.ComponentModel.RefreshEventArgs::type
	Type_t * ___type_2;

public:
	inline static int32_t get_offset_of_component_1() { return static_cast<int32_t>(offsetof(RefreshEventArgs_t669234255, ___component_1)); }
	inline RuntimeObject * get_component_1() const { return ___component_1; }
	inline RuntimeObject ** get_address_of_component_1() { return &___component_1; }
	inline void set_component_1(RuntimeObject * value)
	{
		___component_1 = value;
		Il2CppCodeGenWriteBarrier((&___component_1), value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(RefreshEventArgs_t669234255, ___type_2)); }
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
#endif // REFRESHEVENTARGS_T669234255_H
#ifndef ENUM_T1232254868_H
#define ENUM_T1232254868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1232254868  : public ValueType_t899977641
{
public:

public:
};

struct Enum_t1232254868_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1565992178* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1232254868_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1565992178* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1565992178** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1565992178* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1232254868_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1232254868_marshaled_com
{
};
#endif // ENUM_T1232254868_H
#ifndef SYSTEMEXCEPTION_T1180164699_H
#define SYSTEMEXCEPTION_T1180164699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t1180164699  : public Exception_t3144957912
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T1180164699_H
#ifndef LOCALIZABLEATTRIBUTE_T2032863955_H
#define LOCALIZABLEATTRIBUTE_T2032863955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LocalizableAttribute
struct  LocalizableAttribute_t2032863955  : public Attribute_t4043032847
{
public:
	// System.Boolean System.ComponentModel.LocalizableAttribute::localizable
	bool ___localizable_0;

public:
	inline static int32_t get_offset_of_localizable_0() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t2032863955, ___localizable_0)); }
	inline bool get_localizable_0() const { return ___localizable_0; }
	inline bool* get_address_of_localizable_0() { return &___localizable_0; }
	inline void set_localizable_0(bool value)
	{
		___localizable_0 = value;
	}
};

struct LocalizableAttribute_t2032863955_StaticFields
{
public:
	// System.ComponentModel.LocalizableAttribute System.ComponentModel.LocalizableAttribute::Default
	LocalizableAttribute_t2032863955 * ___Default_1;
	// System.ComponentModel.LocalizableAttribute System.ComponentModel.LocalizableAttribute::No
	LocalizableAttribute_t2032863955 * ___No_2;
	// System.ComponentModel.LocalizableAttribute System.ComponentModel.LocalizableAttribute::Yes
	LocalizableAttribute_t2032863955 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t2032863955_StaticFields, ___Default_1)); }
	inline LocalizableAttribute_t2032863955 * get_Default_1() const { return ___Default_1; }
	inline LocalizableAttribute_t2032863955 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(LocalizableAttribute_t2032863955 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t2032863955_StaticFields, ___No_2)); }
	inline LocalizableAttribute_t2032863955 * get_No_2() const { return ___No_2; }
	inline LocalizableAttribute_t2032863955 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(LocalizableAttribute_t2032863955 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t2032863955_StaticFields, ___Yes_3)); }
	inline LocalizableAttribute_t2032863955 * get_Yes_3() const { return ___Yes_3; }
	inline LocalizableAttribute_t2032863955 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(LocalizableAttribute_t2032863955 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALIZABLEATTRIBUTE_T2032863955_H
#ifndef IMMUTABLEOBJECTATTRIBUTE_T6407016_H
#define IMMUTABLEOBJECTATTRIBUTE_T6407016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ImmutableObjectAttribute
struct  ImmutableObjectAttribute_t6407016  : public Attribute_t4043032847
{
public:
	// System.Boolean System.ComponentModel.ImmutableObjectAttribute::immutable
	bool ___immutable_0;

public:
	inline static int32_t get_offset_of_immutable_0() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t6407016, ___immutable_0)); }
	inline bool get_immutable_0() const { return ___immutable_0; }
	inline bool* get_address_of_immutable_0() { return &___immutable_0; }
	inline void set_immutable_0(bool value)
	{
		___immutable_0 = value;
	}
};

struct ImmutableObjectAttribute_t6407016_StaticFields
{
public:
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::Default
	ImmutableObjectAttribute_t6407016 * ___Default_1;
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::No
	ImmutableObjectAttribute_t6407016 * ___No_2;
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::Yes
	ImmutableObjectAttribute_t6407016 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t6407016_StaticFields, ___Default_1)); }
	inline ImmutableObjectAttribute_t6407016 * get_Default_1() const { return ___Default_1; }
	inline ImmutableObjectAttribute_t6407016 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(ImmutableObjectAttribute_t6407016 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t6407016_StaticFields, ___No_2)); }
	inline ImmutableObjectAttribute_t6407016 * get_No_2() const { return ___No_2; }
	inline ImmutableObjectAttribute_t6407016 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(ImmutableObjectAttribute_t6407016 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t6407016_StaticFields, ___Yes_3)); }
	inline ImmutableObjectAttribute_t6407016 * get_Yes_3() const { return ___Yes_3; }
	inline ImmutableObjectAttribute_t6407016 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(ImmutableObjectAttribute_t6407016 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMMUTABLEOBJECTATTRIBUTE_T6407016_H
#ifndef BASENUMBERCONVERTER_T1424473277_H
#define BASENUMBERCONVERTER_T1424473277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t1424473277  : public TypeConverter_t2966684696
{
public:
	// System.Type System.ComponentModel.BaseNumberConverter::InnerType
	Type_t * ___InnerType_0;

public:
	inline static int32_t get_offset_of_InnerType_0() { return static_cast<int32_t>(offsetof(BaseNumberConverter_t1424473277, ___InnerType_0)); }
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
#endif // BASENUMBERCONVERTER_T1424473277_H
#ifndef DESCRIPTIONATTRIBUTE_T2386841325_H
#define DESCRIPTIONATTRIBUTE_T2386841325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t2386841325  : public Attribute_t4043032847
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::desc
	String_t* ___desc_0;

public:
	inline static int32_t get_offset_of_desc_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t2386841325, ___desc_0)); }
	inline String_t* get_desc_0() const { return ___desc_0; }
	inline String_t** get_address_of_desc_0() { return &___desc_0; }
	inline void set_desc_0(String_t* value)
	{
		___desc_0 = value;
		Il2CppCodeGenWriteBarrier((&___desc_0), value);
	}
};

struct DescriptionAttribute_t2386841325_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t2386841325 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t2386841325_StaticFields, ___Default_1)); }
	inline DescriptionAttribute_t2386841325 * get_Default_1() const { return ___Default_1; }
	inline DescriptionAttribute_t2386841325 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DescriptionAttribute_t2386841325 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T2386841325_H
#ifndef COMPONENTCOLLECTION_T2895766940_H
#define COMPONENTCOLLECTION_T2895766940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentCollection
struct  ComponentCollection_t2895766940  : public ReadOnlyCollectionBase_t64003788
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCOLLECTION_T2895766940_H
#ifndef DEFAULTEVENTATTRIBUTE_T988306143_H
#define DEFAULTEVENTATTRIBUTE_T988306143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultEventAttribute
struct  DefaultEventAttribute_t988306143  : public Attribute_t4043032847
{
public:
	// System.String System.ComponentModel.DefaultEventAttribute::eventName
	String_t* ___eventName_0;

public:
	inline static int32_t get_offset_of_eventName_0() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t988306143, ___eventName_0)); }
	inline String_t* get_eventName_0() const { return ___eventName_0; }
	inline String_t** get_address_of_eventName_0() { return &___eventName_0; }
	inline void set_eventName_0(String_t* value)
	{
		___eventName_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventName_0), value);
	}
};

struct DefaultEventAttribute_t988306143_StaticFields
{
public:
	// System.ComponentModel.DefaultEventAttribute System.ComponentModel.DefaultEventAttribute::Default
	DefaultEventAttribute_t988306143 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t988306143_StaticFields, ___Default_1)); }
	inline DefaultEventAttribute_t988306143 * get_Default_1() const { return ___Default_1; }
	inline DefaultEventAttribute_t988306143 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultEventAttribute_t988306143 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEVENTATTRIBUTE_T988306143_H
#ifndef DEFAULTPROPERTYATTRIBUTE_T2081852258_H
#define DEFAULTPROPERTYATTRIBUTE_T2081852258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultPropertyAttribute
struct  DefaultPropertyAttribute_t2081852258  : public Attribute_t4043032847
{
public:
	// System.String System.ComponentModel.DefaultPropertyAttribute::property_name
	String_t* ___property_name_0;

public:
	inline static int32_t get_offset_of_property_name_0() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t2081852258, ___property_name_0)); }
	inline String_t* get_property_name_0() const { return ___property_name_0; }
	inline String_t** get_address_of_property_name_0() { return &___property_name_0; }
	inline void set_property_name_0(String_t* value)
	{
		___property_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___property_name_0), value);
	}
};

struct DefaultPropertyAttribute_t2081852258_StaticFields
{
public:
	// System.ComponentModel.DefaultPropertyAttribute System.ComponentModel.DefaultPropertyAttribute::Default
	DefaultPropertyAttribute_t2081852258 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t2081852258_StaticFields, ___Default_1)); }
	inline DefaultPropertyAttribute_t2081852258 * get_Default_1() const { return ___Default_1; }
	inline DefaultPropertyAttribute_t2081852258 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultPropertyAttribute_t2081852258 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROPERTYATTRIBUTE_T2081852258_H
#ifndef DEFAULTVALUEATTRIBUTE_T2256637949_H
#define DEFAULTVALUEATTRIBUTE_T2256637949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t2256637949  : public Attribute_t4043032847
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t2256637949, ___DefaultValue_0)); }
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
#endif // DEFAULTVALUEATTRIBUTE_T2256637949_H
#ifndef GUIDCONVERTER_T4152809744_H
#define GUIDCONVERTER_T4152809744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.GuidConverter
struct  GuidConverter_t4152809744  : public TypeConverter_t2966684696
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDCONVERTER_T4152809744_H
#ifndef DESIGNONLYATTRIBUTE_T534348564_H
#define DESIGNONLYATTRIBUTE_T534348564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignOnlyAttribute
struct  DesignOnlyAttribute_t534348564  : public Attribute_t4043032847
{
public:
	// System.Boolean System.ComponentModel.DesignOnlyAttribute::design_only
	bool ___design_only_0;

public:
	inline static int32_t get_offset_of_design_only_0() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t534348564, ___design_only_0)); }
	inline bool get_design_only_0() const { return ___design_only_0; }
	inline bool* get_address_of_design_only_0() { return &___design_only_0; }
	inline void set_design_only_0(bool value)
	{
		___design_only_0 = value;
	}
};

struct DesignOnlyAttribute_t534348564_StaticFields
{
public:
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Default
	DesignOnlyAttribute_t534348564 * ___Default_1;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::No
	DesignOnlyAttribute_t534348564 * ___No_2;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Yes
	DesignOnlyAttribute_t534348564 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t534348564_StaticFields, ___Default_1)); }
	inline DesignOnlyAttribute_t534348564 * get_Default_1() const { return ___Default_1; }
	inline DesignOnlyAttribute_t534348564 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignOnlyAttribute_t534348564 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t534348564_StaticFields, ___No_2)); }
	inline DesignOnlyAttribute_t534348564 * get_No_2() const { return ___No_2; }
	inline DesignOnlyAttribute_t534348564 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignOnlyAttribute_t534348564 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t534348564_StaticFields, ___Yes_3)); }
	inline DesignOnlyAttribute_t534348564 * get_Yes_3() const { return ___Yes_3; }
	inline DesignOnlyAttribute_t534348564 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignOnlyAttribute_t534348564 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNONLYATTRIBUTE_T534348564_H
#ifndef DESIGNTIMEVISIBLEATTRIBUTE_T4113989006_H
#define DESIGNTIMEVISIBLEATTRIBUTE_T4113989006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignTimeVisibleAttribute
struct  DesignTimeVisibleAttribute_t4113989006  : public Attribute_t4043032847
{
public:
	// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::visible
	bool ___visible_0;

public:
	inline static int32_t get_offset_of_visible_0() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t4113989006, ___visible_0)); }
	inline bool get_visible_0() const { return ___visible_0; }
	inline bool* get_address_of_visible_0() { return &___visible_0; }
	inline void set_visible_0(bool value)
	{
		___visible_0 = value;
	}
};

struct DesignTimeVisibleAttribute_t4113989006_StaticFields
{
public:
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Default
	DesignTimeVisibleAttribute_t4113989006 * ___Default_1;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::No
	DesignTimeVisibleAttribute_t4113989006 * ___No_2;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Yes
	DesignTimeVisibleAttribute_t4113989006 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t4113989006_StaticFields, ___Default_1)); }
	inline DesignTimeVisibleAttribute_t4113989006 * get_Default_1() const { return ___Default_1; }
	inline DesignTimeVisibleAttribute_t4113989006 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignTimeVisibleAttribute_t4113989006 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t4113989006_StaticFields, ___No_2)); }
	inline DesignTimeVisibleAttribute_t4113989006 * get_No_2() const { return ___No_2; }
	inline DesignTimeVisibleAttribute_t4113989006 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignTimeVisibleAttribute_t4113989006 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t4113989006_StaticFields, ___Yes_3)); }
	inline DesignTimeVisibleAttribute_t4113989006 * get_Yes_3() const { return ___Yes_3; }
	inline DesignTimeVisibleAttribute_t4113989006 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignTimeVisibleAttribute_t4113989006 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNTIMEVISIBLEATTRIBUTE_T4113989006_H
#ifndef DESIGNERATTRIBUTE_T639288712_H
#define DESIGNERATTRIBUTE_T639288712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerAttribute
struct  DesignerAttribute_t639288712  : public Attribute_t4043032847
{
public:
	// System.String System.ComponentModel.DesignerAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.DesignerAttribute::basetypename
	String_t* ___basetypename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DesignerAttribute_t639288712, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basetypename_1() { return static_cast<int32_t>(offsetof(DesignerAttribute_t639288712, ___basetypename_1)); }
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
#endif // DESIGNERATTRIBUTE_T639288712_H
#ifndef DESIGNERCATEGORYATTRIBUTE_T3216069781_H
#define DESIGNERCATEGORYATTRIBUTE_T3216069781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerCategoryAttribute
struct  DesignerCategoryAttribute_t3216069781  : public Attribute_t4043032847
{
public:
	// System.String System.ComponentModel.DesignerCategoryAttribute::category
	String_t* ___category_0;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t3216069781, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}
};

struct DesignerCategoryAttribute_t3216069781_StaticFields
{
public:
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Component
	DesignerCategoryAttribute_t3216069781 * ___Component_1;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Form
	DesignerCategoryAttribute_t3216069781 * ___Form_2;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Generic
	DesignerCategoryAttribute_t3216069781 * ___Generic_3;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Default
	DesignerCategoryAttribute_t3216069781 * ___Default_4;

public:
	inline static int32_t get_offset_of_Component_1() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t3216069781_StaticFields, ___Component_1)); }
	inline DesignerCategoryAttribute_t3216069781 * get_Component_1() const { return ___Component_1; }
	inline DesignerCategoryAttribute_t3216069781 ** get_address_of_Component_1() { return &___Component_1; }
	inline void set_Component_1(DesignerCategoryAttribute_t3216069781 * value)
	{
		___Component_1 = value;
		Il2CppCodeGenWriteBarrier((&___Component_1), value);
	}

	inline static int32_t get_offset_of_Form_2() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t3216069781_StaticFields, ___Form_2)); }
	inline DesignerCategoryAttribute_t3216069781 * get_Form_2() const { return ___Form_2; }
	inline DesignerCategoryAttribute_t3216069781 ** get_address_of_Form_2() { return &___Form_2; }
	inline void set_Form_2(DesignerCategoryAttribute_t3216069781 * value)
	{
		___Form_2 = value;
		Il2CppCodeGenWriteBarrier((&___Form_2), value);
	}

	inline static int32_t get_offset_of_Generic_3() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t3216069781_StaticFields, ___Generic_3)); }
	inline DesignerCategoryAttribute_t3216069781 * get_Generic_3() const { return ___Generic_3; }
	inline DesignerCategoryAttribute_t3216069781 ** get_address_of_Generic_3() { return &___Generic_3; }
	inline void set_Generic_3(DesignerCategoryAttribute_t3216069781 * value)
	{
		___Generic_3 = value;
		Il2CppCodeGenWriteBarrier((&___Generic_3), value);
	}

	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t3216069781_StaticFields, ___Default_4)); }
	inline DesignerCategoryAttribute_t3216069781 * get_Default_4() const { return ___Default_4; }
	inline DesignerCategoryAttribute_t3216069781 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(DesignerCategoryAttribute_t3216069781 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier((&___Default_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERCATEGORYATTRIBUTE_T3216069781_H
#ifndef COMPONENT_T3036537838_H
#define COMPONENT_T3036537838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t3036537838  : public MarshalByRefObject_t1236449280
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t1427346375 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t3036537838, ___event_handlers_1)); }
	inline EventHandlerList_t1427346375 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t1427346375 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t1427346375 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t3036537838, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t3036537838, ___disposedEvent_3)); }
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
#endif // COMPONENT_T3036537838_H
#ifndef COLLECTIONCONVERTER_T554355619_H
#define COLLECTIONCONVERTER_T554355619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionConverter
struct  CollectionConverter_t554355619  : public TypeConverter_t2966684696
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCONVERTER_T554355619_H
#ifndef DATETIMECONVERTER_T4220417031_H
#define DATETIMECONVERTER_T4220417031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeConverter
struct  DateTimeConverter_t4220417031  : public TypeConverter_t2966684696
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONVERTER_T4220417031_H
#ifndef CHARCONVERTER_T4086838749_H
#define CHARCONVERTER_T4086838749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CharConverter
struct  CharConverter_t4086838749  : public TypeConverter_t2966684696
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARCONVERTER_T4086838749_H
#ifndef CULTUREINFOCONVERTER_T1371557717_H
#define CULTUREINFOCONVERTER_T1371557717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter
struct  CultureInfoConverter_t1371557717  : public TypeConverter_t2966684696
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::_standardValues
	StandardValuesCollection_t3784828983 * ____standardValues_0;

public:
	inline static int32_t get_offset_of__standardValues_0() { return static_cast<int32_t>(offsetof(CultureInfoConverter_t1371557717, ____standardValues_0)); }
	inline StandardValuesCollection_t3784828983 * get__standardValues_0() const { return ____standardValues_0; }
	inline StandardValuesCollection_t3784828983 ** get_address_of__standardValues_0() { return &____standardValues_0; }
	inline void set__standardValues_0(StandardValuesCollection_t3784828983 * value)
	{
		____standardValues_0 = value;
		Il2CppCodeGenWriteBarrier((&____standardValues_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCONVERTER_T1371557717_H
#ifndef CATEGORYATTRIBUTE_T1826438136_H
#define CATEGORYATTRIBUTE_T1826438136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CategoryAttribute
struct  CategoryAttribute_t1826438136  : public Attribute_t4043032847
{
public:
	// System.String System.ComponentModel.CategoryAttribute::category
	String_t* ___category_0;
	// System.Boolean System.ComponentModel.CategoryAttribute::IsLocalized
	bool ___IsLocalized_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_IsLocalized_1() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136, ___IsLocalized_1)); }
	inline bool get_IsLocalized_1() const { return ___IsLocalized_1; }
	inline bool* get_address_of_IsLocalized_1() { return &___IsLocalized_1; }
	inline void set_IsLocalized_1(bool value)
	{
		___IsLocalized_1 = value;
	}
};

struct CategoryAttribute_t1826438136_StaticFields
{
public:
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::action
	CategoryAttribute_t1826438136 * ___action_2;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::appearance
	CategoryAttribute_t1826438136 * ___appearance_3;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::behaviour
	CategoryAttribute_t1826438136 * ___behaviour_4;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::data
	CategoryAttribute_t1826438136 * ___data_5;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::def
	CategoryAttribute_t1826438136 * ___def_6;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::design
	CategoryAttribute_t1826438136 * ___design_7;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::drag_drop
	CategoryAttribute_t1826438136 * ___drag_drop_8;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::focus
	CategoryAttribute_t1826438136 * ___focus_9;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::format
	CategoryAttribute_t1826438136 * ___format_10;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::key
	CategoryAttribute_t1826438136 * ___key_11;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::layout
	CategoryAttribute_t1826438136 * ___layout_12;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::mouse
	CategoryAttribute_t1826438136 * ___mouse_13;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::window_style
	CategoryAttribute_t1826438136 * ___window_style_14;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::async
	CategoryAttribute_t1826438136 * ___async_15;
	// System.Object System.ComponentModel.CategoryAttribute::lockobj
	RuntimeObject * ___lockobj_16;

public:
	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___action_2)); }
	inline CategoryAttribute_t1826438136 * get_action_2() const { return ___action_2; }
	inline CategoryAttribute_t1826438136 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(CategoryAttribute_t1826438136 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_appearance_3() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___appearance_3)); }
	inline CategoryAttribute_t1826438136 * get_appearance_3() const { return ___appearance_3; }
	inline CategoryAttribute_t1826438136 ** get_address_of_appearance_3() { return &___appearance_3; }
	inline void set_appearance_3(CategoryAttribute_t1826438136 * value)
	{
		___appearance_3 = value;
		Il2CppCodeGenWriteBarrier((&___appearance_3), value);
	}

	inline static int32_t get_offset_of_behaviour_4() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___behaviour_4)); }
	inline CategoryAttribute_t1826438136 * get_behaviour_4() const { return ___behaviour_4; }
	inline CategoryAttribute_t1826438136 ** get_address_of_behaviour_4() { return &___behaviour_4; }
	inline void set_behaviour_4(CategoryAttribute_t1826438136 * value)
	{
		___behaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&___behaviour_4), value);
	}

	inline static int32_t get_offset_of_data_5() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___data_5)); }
	inline CategoryAttribute_t1826438136 * get_data_5() const { return ___data_5; }
	inline CategoryAttribute_t1826438136 ** get_address_of_data_5() { return &___data_5; }
	inline void set_data_5(CategoryAttribute_t1826438136 * value)
	{
		___data_5 = value;
		Il2CppCodeGenWriteBarrier((&___data_5), value);
	}

	inline static int32_t get_offset_of_def_6() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___def_6)); }
	inline CategoryAttribute_t1826438136 * get_def_6() const { return ___def_6; }
	inline CategoryAttribute_t1826438136 ** get_address_of_def_6() { return &___def_6; }
	inline void set_def_6(CategoryAttribute_t1826438136 * value)
	{
		___def_6 = value;
		Il2CppCodeGenWriteBarrier((&___def_6), value);
	}

	inline static int32_t get_offset_of_design_7() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___design_7)); }
	inline CategoryAttribute_t1826438136 * get_design_7() const { return ___design_7; }
	inline CategoryAttribute_t1826438136 ** get_address_of_design_7() { return &___design_7; }
	inline void set_design_7(CategoryAttribute_t1826438136 * value)
	{
		___design_7 = value;
		Il2CppCodeGenWriteBarrier((&___design_7), value);
	}

	inline static int32_t get_offset_of_drag_drop_8() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___drag_drop_8)); }
	inline CategoryAttribute_t1826438136 * get_drag_drop_8() const { return ___drag_drop_8; }
	inline CategoryAttribute_t1826438136 ** get_address_of_drag_drop_8() { return &___drag_drop_8; }
	inline void set_drag_drop_8(CategoryAttribute_t1826438136 * value)
	{
		___drag_drop_8 = value;
		Il2CppCodeGenWriteBarrier((&___drag_drop_8), value);
	}

	inline static int32_t get_offset_of_focus_9() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___focus_9)); }
	inline CategoryAttribute_t1826438136 * get_focus_9() const { return ___focus_9; }
	inline CategoryAttribute_t1826438136 ** get_address_of_focus_9() { return &___focus_9; }
	inline void set_focus_9(CategoryAttribute_t1826438136 * value)
	{
		___focus_9 = value;
		Il2CppCodeGenWriteBarrier((&___focus_9), value);
	}

	inline static int32_t get_offset_of_format_10() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___format_10)); }
	inline CategoryAttribute_t1826438136 * get_format_10() const { return ___format_10; }
	inline CategoryAttribute_t1826438136 ** get_address_of_format_10() { return &___format_10; }
	inline void set_format_10(CategoryAttribute_t1826438136 * value)
	{
		___format_10 = value;
		Il2CppCodeGenWriteBarrier((&___format_10), value);
	}

	inline static int32_t get_offset_of_key_11() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___key_11)); }
	inline CategoryAttribute_t1826438136 * get_key_11() const { return ___key_11; }
	inline CategoryAttribute_t1826438136 ** get_address_of_key_11() { return &___key_11; }
	inline void set_key_11(CategoryAttribute_t1826438136 * value)
	{
		___key_11 = value;
		Il2CppCodeGenWriteBarrier((&___key_11), value);
	}

	inline static int32_t get_offset_of_layout_12() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___layout_12)); }
	inline CategoryAttribute_t1826438136 * get_layout_12() const { return ___layout_12; }
	inline CategoryAttribute_t1826438136 ** get_address_of_layout_12() { return &___layout_12; }
	inline void set_layout_12(CategoryAttribute_t1826438136 * value)
	{
		___layout_12 = value;
		Il2CppCodeGenWriteBarrier((&___layout_12), value);
	}

	inline static int32_t get_offset_of_mouse_13() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___mouse_13)); }
	inline CategoryAttribute_t1826438136 * get_mouse_13() const { return ___mouse_13; }
	inline CategoryAttribute_t1826438136 ** get_address_of_mouse_13() { return &___mouse_13; }
	inline void set_mouse_13(CategoryAttribute_t1826438136 * value)
	{
		___mouse_13 = value;
		Il2CppCodeGenWriteBarrier((&___mouse_13), value);
	}

	inline static int32_t get_offset_of_window_style_14() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___window_style_14)); }
	inline CategoryAttribute_t1826438136 * get_window_style_14() const { return ___window_style_14; }
	inline CategoryAttribute_t1826438136 ** get_address_of_window_style_14() { return &___window_style_14; }
	inline void set_window_style_14(CategoryAttribute_t1826438136 * value)
	{
		___window_style_14 = value;
		Il2CppCodeGenWriteBarrier((&___window_style_14), value);
	}

	inline static int32_t get_offset_of_async_15() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___async_15)); }
	inline CategoryAttribute_t1826438136 * get_async_15() const { return ___async_15; }
	inline CategoryAttribute_t1826438136 ** get_address_of_async_15() { return &___async_15; }
	inline void set_async_15(CategoryAttribute_t1826438136 * value)
	{
		___async_15 = value;
		Il2CppCodeGenWriteBarrier((&___async_15), value);
	}

	inline static int32_t get_offset_of_lockobj_16() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___lockobj_16)); }
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
#endif // CATEGORYATTRIBUTE_T1826438136_H
#ifndef DOWORKEVENTARGS_T3063424378_H
#define DOWORKEVENTARGS_T3063424378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoWorkEventArgs
struct  DoWorkEventArgs_t3063424378  : public EventArgs_t2070024930
{
public:
	// System.Object System.ComponentModel.DoWorkEventArgs::arg
	RuntimeObject * ___arg_1;
	// System.Object System.ComponentModel.DoWorkEventArgs::result
	RuntimeObject * ___result_2;
	// System.Boolean System.ComponentModel.DoWorkEventArgs::cancel
	bool ___cancel_3;

public:
	inline static int32_t get_offset_of_arg_1() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t3063424378, ___arg_1)); }
	inline RuntimeObject * get_arg_1() const { return ___arg_1; }
	inline RuntimeObject ** get_address_of_arg_1() { return &___arg_1; }
	inline void set_arg_1(RuntimeObject * value)
	{
		___arg_1 = value;
		Il2CppCodeGenWriteBarrier((&___arg_1), value);
	}

	inline static int32_t get_offset_of_result_2() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t3063424378, ___result_2)); }
	inline RuntimeObject * get_result_2() const { return ___result_2; }
	inline RuntimeObject ** get_address_of_result_2() { return &___result_2; }
	inline void set_result_2(RuntimeObject * value)
	{
		___result_2 = value;
		Il2CppCodeGenWriteBarrier((&___result_2), value);
	}

	inline static int32_t get_offset_of_cancel_3() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t3063424378, ___cancel_3)); }
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
#endif // DOWORKEVENTARGS_T3063424378_H
#ifndef CANCELEVENTARGS_T1195239045_H
#define CANCELEVENTARGS_T1195239045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CancelEventArgs
struct  CancelEventArgs_t1195239045  : public EventArgs_t2070024930
{
public:
	// System.Boolean System.ComponentModel.CancelEventArgs::cancel
	bool ___cancel_1;

public:
	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(CancelEventArgs_t1195239045, ___cancel_1)); }
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
#endif // CANCELEVENTARGS_T1195239045_H
#ifndef EDITORATTRIBUTE_T957071580_H
#define EDITORATTRIBUTE_T957071580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorAttribute
struct  EditorAttribute_t957071580  : public Attribute_t4043032847
{
public:
	// System.String System.ComponentModel.EditorAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.EditorAttribute::basename
	String_t* ___basename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(EditorAttribute_t957071580, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basename_1() { return static_cast<int32_t>(offsetof(EditorAttribute_t957071580, ___basename_1)); }
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
#endif // EDITORATTRIBUTE_T957071580_H
#ifndef BROWSABLEATTRIBUTE_T3551878845_H
#define BROWSABLEATTRIBUTE_T3551878845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BrowsableAttribute
struct  BrowsableAttribute_t3551878845  : public Attribute_t4043032847
{
public:
	// System.Boolean System.ComponentModel.BrowsableAttribute::browsable
	bool ___browsable_0;

public:
	inline static int32_t get_offset_of_browsable_0() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3551878845, ___browsable_0)); }
	inline bool get_browsable_0() const { return ___browsable_0; }
	inline bool* get_address_of_browsable_0() { return &___browsable_0; }
	inline void set_browsable_0(bool value)
	{
		___browsable_0 = value;
	}
};

struct BrowsableAttribute_t3551878845_StaticFields
{
public:
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Default
	BrowsableAttribute_t3551878845 * ___Default_1;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::No
	BrowsableAttribute_t3551878845 * ___No_2;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Yes
	BrowsableAttribute_t3551878845 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3551878845_StaticFields, ___Default_1)); }
	inline BrowsableAttribute_t3551878845 * get_Default_1() const { return ___Default_1; }
	inline BrowsableAttribute_t3551878845 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(BrowsableAttribute_t3551878845 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3551878845_StaticFields, ___No_2)); }
	inline BrowsableAttribute_t3551878845 * get_No_2() const { return ___No_2; }
	inline BrowsableAttribute_t3551878845 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(BrowsableAttribute_t3551878845 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3551878845_StaticFields, ___Yes_3)); }
	inline BrowsableAttribute_t3551878845 * get_Yes_3() const { return ___Yes_3; }
	inline BrowsableAttribute_t3551878845 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(BrowsableAttribute_t3551878845 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BROWSABLEATTRIBUTE_T3551878845_H
#ifndef BOOLEANCONVERTER_T1109041410_H
#define BOOLEANCONVERTER_T1109041410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BooleanConverter
struct  BooleanConverter_t1109041410  : public TypeConverter_t2966684696
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANCONVERTER_T1109041410_H
#ifndef ENUMCONVERTER_T857485659_H
#define ENUMCONVERTER_T857485659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter
struct  EnumConverter_t857485659  : public TypeConverter_t2966684696
{
public:
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t * ___type_0;
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::stdValues
	StandardValuesCollection_t3784828983 * ___stdValues_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EnumConverter_t857485659, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_stdValues_1() { return static_cast<int32_t>(offsetof(EnumConverter_t857485659, ___stdValues_1)); }
	inline StandardValuesCollection_t3784828983 * get_stdValues_1() const { return ___stdValues_1; }
	inline StandardValuesCollection_t3784828983 ** get_address_of_stdValues_1() { return &___stdValues_1; }
	inline void set_stdValues_1(StandardValuesCollection_t3784828983 * value)
	{
		___stdValues_1 = value;
		Il2CppCodeGenWriteBarrier((&___stdValues_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCONVERTER_T857485659_H
#ifndef EVENTDESCRIPTOR_T4202231385_H
#define EVENTDESCRIPTOR_T4202231385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptor
struct  EventDescriptor_t4202231385  : public MemberDescriptor_t3689707769
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTOR_T4202231385_H
#ifndef EXPANDABLEOBJECTCONVERTER_T1455872238_H
#define EXPANDABLEOBJECTCONVERTER_T1455872238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t1455872238  : public TypeConverter_t2966684696
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T1455872238_H
#ifndef DISPLAYNAMEATTRIBUTE_T3081261961_H
#define DISPLAYNAMEATTRIBUTE_T3081261961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DisplayNameAttribute
struct  DisplayNameAttribute_t3081261961  : public Attribute_t4043032847
{
public:
	// System.String System.ComponentModel.DisplayNameAttribute::attributeDisplayName
	String_t* ___attributeDisplayName_1;

public:
	inline static int32_t get_offset_of_attributeDisplayName_1() { return static_cast<int32_t>(offsetof(DisplayNameAttribute_t3081261961, ___attributeDisplayName_1)); }
	inline String_t* get_attributeDisplayName_1() const { return ___attributeDisplayName_1; }
	inline String_t** get_address_of_attributeDisplayName_1() { return &___attributeDisplayName_1; }
	inline void set_attributeDisplayName_1(String_t* value)
	{
		___attributeDisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___attributeDisplayName_1), value);
	}
};

struct DisplayNameAttribute_t3081261961_StaticFields
{
public:
	// System.ComponentModel.DisplayNameAttribute System.ComponentModel.DisplayNameAttribute::Default
	DisplayNameAttribute_t3081261961 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(DisplayNameAttribute_t3081261961_StaticFields, ___Default_0)); }
	inline DisplayNameAttribute_t3081261961 * get_Default_0() const { return ___Default_0; }
	inline DisplayNameAttribute_t3081261961 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(DisplayNameAttribute_t3081261961 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYNAMEATTRIBUTE_T3081261961_H
#ifndef REFLECTIONPROPERTYDESCRIPTOR_T2867867211_H
#define REFLECTIONPROPERTYDESCRIPTOR_T2867867211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectionPropertyDescriptor
struct  ReflectionPropertyDescriptor_t2867867211  : public PropertyDescriptor_t4009622457
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
	inline static int32_t get_offset_of__member_6() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2867867211, ____member_6)); }
	inline PropertyInfo_t * get__member_6() const { return ____member_6; }
	inline PropertyInfo_t ** get_address_of__member_6() { return &____member_6; }
	inline void set__member_6(PropertyInfo_t * value)
	{
		____member_6 = value;
		Il2CppCodeGenWriteBarrier((&____member_6), value);
	}

	inline static int32_t get_offset_of__componentType_7() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2867867211, ____componentType_7)); }
	inline Type_t * get__componentType_7() const { return ____componentType_7; }
	inline Type_t ** get_address_of__componentType_7() { return &____componentType_7; }
	inline void set__componentType_7(Type_t * value)
	{
		____componentType_7 = value;
		Il2CppCodeGenWriteBarrier((&____componentType_7), value);
	}

	inline static int32_t get_offset_of__propertyType_8() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2867867211, ____propertyType_8)); }
	inline Type_t * get__propertyType_8() const { return ____propertyType_8; }
	inline Type_t ** get_address_of__propertyType_8() { return &____propertyType_8; }
	inline void set__propertyType_8(Type_t * value)
	{
		____propertyType_8 = value;
		Il2CppCodeGenWriteBarrier((&____propertyType_8), value);
	}

	inline static int32_t get_offset_of_getter_9() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2867867211, ___getter_9)); }
	inline PropertyInfo_t * get_getter_9() const { return ___getter_9; }
	inline PropertyInfo_t ** get_address_of_getter_9() { return &___getter_9; }
	inline void set_getter_9(PropertyInfo_t * value)
	{
		___getter_9 = value;
		Il2CppCodeGenWriteBarrier((&___getter_9), value);
	}

	inline static int32_t get_offset_of_setter_10() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2867867211, ___setter_10)); }
	inline PropertyInfo_t * get_setter_10() const { return ___setter_10; }
	inline PropertyInfo_t ** get_address_of_setter_10() { return &___setter_10; }
	inline void set_setter_10(PropertyInfo_t * value)
	{
		___setter_10 = value;
		Il2CppCodeGenWriteBarrier((&___setter_10), value);
	}

	inline static int32_t get_offset_of_accessors_inited_11() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2867867211, ___accessors_inited_11)); }
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
#endif // REFLECTIONPROPERTYDESCRIPTOR_T2867867211_H
#ifndef REFLECTIONEVENTDESCRIPTOR_T3169879480_H
#define REFLECTIONEVENTDESCRIPTOR_T3169879480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectionEventDescriptor
struct  ReflectionEventDescriptor_t3169879480  : public EventDescriptor_t4202231385
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
	inline static int32_t get_offset_of__eventType_4() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t3169879480, ____eventType_4)); }
	inline Type_t * get__eventType_4() const { return ____eventType_4; }
	inline Type_t ** get_address_of__eventType_4() { return &____eventType_4; }
	inline void set__eventType_4(Type_t * value)
	{
		____eventType_4 = value;
		Il2CppCodeGenWriteBarrier((&____eventType_4), value);
	}

	inline static int32_t get_offset_of__componentType_5() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t3169879480, ____componentType_5)); }
	inline Type_t * get__componentType_5() const { return ____componentType_5; }
	inline Type_t ** get_address_of__componentType_5() { return &____componentType_5; }
	inline void set__componentType_5(Type_t * value)
	{
		____componentType_5 = value;
		Il2CppCodeGenWriteBarrier((&____componentType_5), value);
	}

	inline static int32_t get_offset_of__eventInfo_6() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t3169879480, ____eventInfo_6)); }
	inline EventInfo_t * get__eventInfo_6() const { return ____eventInfo_6; }
	inline EventInfo_t ** get_address_of__eventInfo_6() { return &____eventInfo_6; }
	inline void set__eventInfo_6(EventInfo_t * value)
	{
		____eventInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&____eventInfo_6), value);
	}

	inline static int32_t get_offset_of_add_method_7() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t3169879480, ___add_method_7)); }
	inline MethodInfo_t * get_add_method_7() const { return ___add_method_7; }
	inline MethodInfo_t ** get_address_of_add_method_7() { return &___add_method_7; }
	inline void set_add_method_7(MethodInfo_t * value)
	{
		___add_method_7 = value;
		Il2CppCodeGenWriteBarrier((&___add_method_7), value);
	}

	inline static int32_t get_offset_of_remove_method_8() { return static_cast<int32_t>(offsetof(ReflectionEventDescriptor_t3169879480, ___remove_method_8)); }
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
#endif // REFLECTIONEVENTDESCRIPTOR_T3169879480_H
#ifndef BYTECONVERTER_T328767643_H
#define BYTECONVERTER_T328767643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ByteConverter
struct  ByteConverter_t328767643  : public BaseNumberConverter_t1424473277
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTECONVERTER_T328767643_H
#ifndef ARGUMENTEXCEPTION_T3080713079_H
#define ARGUMENTEXCEPTION_T3080713079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t3080713079  : public SystemException_t1180164699
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t3080713079, ___param_name_12)); }
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
#endif // ARGUMENTEXCEPTION_T3080713079_H
#ifndef BINDABLESUPPORT_T2208790742_H
#define BINDABLESUPPORT_T2208790742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BindableSupport
struct  BindableSupport_t2208790742 
{
public:
	// System.Int32 System.ComponentModel.BindableSupport::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindableSupport_t2208790742, ___value___1)); }
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
#endif // BINDABLESUPPORT_T2208790742_H
#ifndef COLLECTIONCHANGEACTION_T2405925552_H
#define COLLECTIONCHANGEACTION_T2405925552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeAction
struct  CollectionChangeAction_t2405925552 
{
public:
	// System.Int32 System.ComponentModel.CollectionChangeAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollectionChangeAction_t2405925552, ___value___1)); }
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
#endif // COLLECTIONCHANGEACTION_T2405925552_H
#ifndef INT16CONVERTER_T4037381577_H
#define INT16CONVERTER_T4037381577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int16Converter
struct  Int16Converter_t4037381577  : public BaseNumberConverter_t1424473277
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16CONVERTER_T4037381577_H
#ifndef DECIMALCONVERTER_T2352576042_H
#define DECIMALCONVERTER_T2352576042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DecimalConverter
struct  DecimalConverter_t2352576042  : public BaseNumberConverter_t1424473277
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONVERTER_T2352576042_H
#ifndef INT32CONVERTER_T1002716161_H
#define INT32CONVERTER_T1002716161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int32Converter
struct  Int32Converter_t1002716161  : public BaseNumberConverter_t1424473277
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32CONVERTER_T1002716161_H
#ifndef EDITORBROWSABLESTATE_T1504913674_H
#define EDITORBROWSABLESTATE_T1504913674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t1504913674 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t1504913674, ___value___1)); }
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
#endif // EDITORBROWSABLESTATE_T1504913674_H
#ifndef LICENSEEXCEPTION_T3407698857_H
#define LICENSEEXCEPTION_T3407698857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseException
struct  LicenseException_t3407698857  : public SystemException_t1180164699
{
public:
	// System.Type System.ComponentModel.LicenseException::type
	Type_t * ___type_11;

public:
	inline static int32_t get_offset_of_type_11() { return static_cast<int32_t>(offsetof(LicenseException_t3407698857, ___type_11)); }
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
#endif // LICENSEEXCEPTION_T3407698857_H
#ifndef DOUBLECONVERTER_T1768991287_H
#define DOUBLECONVERTER_T1768991287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoubleConverter
struct  DoubleConverter_t1768991287  : public BaseNumberConverter_t1424473277
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLECONVERTER_T1768991287_H
#ifndef COMPONENTCONVERTER_T1351707010_H
#define COMPONENTCONVERTER_T1351707010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentConverter
struct  ComponentConverter_t1351707010  : public ReferenceConverter_t3133734745
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCONVERTER_T1351707010_H
#ifndef LICENSEUSAGEMODE_T1993276162_H
#define LICENSEUSAGEMODE_T1993276162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseUsageMode
struct  LicenseUsageMode_t1993276162 
{
public:
	// System.Int32 System.ComponentModel.LicenseUsageMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LicenseUsageMode_t1993276162, ___value___1)); }
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
#endif // LICENSEUSAGEMODE_T1993276162_H
#ifndef LISTSORTDIRECTION_T521137712_H
#define LISTSORTDIRECTION_T521137712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDirection
struct  ListSortDirection_t521137712 
{
public:
	// System.Int32 System.ComponentModel.ListSortDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ListSortDirection_t521137712, ___value___1)); }
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
#endif // LISTSORTDIRECTION_T521137712_H
#ifndef DESIGNERSERIALIZATIONVISIBILITY_T1757378297_H
#define DESIGNERSERIALIZATIONVISIBILITY_T1757378297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibility
struct  DesignerSerializationVisibility_t1757378297 
{
public:
	// System.Int32 System.ComponentModel.DesignerSerializationVisibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibility_t1757378297, ___value___1)); }
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
#endif // DESIGNERSERIALIZATIONVISIBILITY_T1757378297_H
#ifndef LISTCHANGEDTYPE_T410270988_H
#define LISTCHANGEDTYPE_T410270988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListChangedType
struct  ListChangedType_t410270988 
{
public:
	// System.Int32 System.ComponentModel.ListChangedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ListChangedType_t410270988, ___value___1)); }
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
#endif // LISTCHANGEDTYPE_T410270988_H
#ifndef INT64CONVERTER_T2464862213_H
#define INT64CONVERTER_T2464862213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int64Converter
struct  Int64Converter_t2464862213  : public BaseNumberConverter_t1424473277
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64CONVERTER_T2464862213_H
#ifndef LISTCHANGEDEVENTARGS_T1418275251_H
#define LISTCHANGEDEVENTARGS_T1418275251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListChangedEventArgs
struct  ListChangedEventArgs_t1418275251  : public EventArgs_t2070024930
{
public:
	// System.ComponentModel.ListChangedType System.ComponentModel.ListChangedEventArgs::changedType
	int32_t ___changedType_1;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::oldIndex
	int32_t ___oldIndex_2;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::newIndex
	int32_t ___newIndex_3;
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ListChangedEventArgs::propDesc
	PropertyDescriptor_t4009622457 * ___propDesc_4;

public:
	inline static int32_t get_offset_of_changedType_1() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t1418275251, ___changedType_1)); }
	inline int32_t get_changedType_1() const { return ___changedType_1; }
	inline int32_t* get_address_of_changedType_1() { return &___changedType_1; }
	inline void set_changedType_1(int32_t value)
	{
		___changedType_1 = value;
	}

	inline static int32_t get_offset_of_oldIndex_2() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t1418275251, ___oldIndex_2)); }
	inline int32_t get_oldIndex_2() const { return ___oldIndex_2; }
	inline int32_t* get_address_of_oldIndex_2() { return &___oldIndex_2; }
	inline void set_oldIndex_2(int32_t value)
	{
		___oldIndex_2 = value;
	}

	inline static int32_t get_offset_of_newIndex_3() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t1418275251, ___newIndex_3)); }
	inline int32_t get_newIndex_3() const { return ___newIndex_3; }
	inline int32_t* get_address_of_newIndex_3() { return &___newIndex_3; }
	inline void set_newIndex_3(int32_t value)
	{
		___newIndex_3 = value;
	}

	inline static int32_t get_offset_of_propDesc_4() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t1418275251, ___propDesc_4)); }
	inline PropertyDescriptor_t4009622457 * get_propDesc_4() const { return ___propDesc_4; }
	inline PropertyDescriptor_t4009622457 ** get_address_of_propDesc_4() { return &___propDesc_4; }
	inline void set_propDesc_4(PropertyDescriptor_t4009622457 * value)
	{
		___propDesc_4 = value;
		Il2CppCodeGenWriteBarrier((&___propDesc_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTCHANGEDEVENTARGS_T1418275251_H
#ifndef COLLECTIONCHANGEEVENTARGS_T2405037207_H
#define COLLECTIONCHANGEEVENTARGS_T2405037207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeEventArgs
struct  CollectionChangeEventArgs_t2405037207  : public EventArgs_t2070024930
{
public:
	// System.ComponentModel.CollectionChangeAction System.ComponentModel.CollectionChangeEventArgs::changeAction
	int32_t ___changeAction_1;
	// System.Object System.ComponentModel.CollectionChangeEventArgs::theElement
	RuntimeObject * ___theElement_2;

public:
	inline static int32_t get_offset_of_changeAction_1() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t2405037207, ___changeAction_1)); }
	inline int32_t get_changeAction_1() const { return ___changeAction_1; }
	inline int32_t* get_address_of_changeAction_1() { return &___changeAction_1; }
	inline void set_changeAction_1(int32_t value)
	{
		___changeAction_1 = value;
	}

	inline static int32_t get_offset_of_theElement_2() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t2405037207, ___theElement_2)); }
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
#endif // COLLECTIONCHANGEEVENTARGS_T2405037207_H
#ifndef LISTSORTDESCRIPTION_T3345164960_H
#define LISTSORTDESCRIPTION_T3345164960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDescription
struct  ListSortDescription_t3345164960  : public RuntimeObject
{
public:
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ListSortDescription::propertyDescriptor
	PropertyDescriptor_t4009622457 * ___propertyDescriptor_0;
	// System.ComponentModel.ListSortDirection System.ComponentModel.ListSortDescription::sortDirection
	int32_t ___sortDirection_1;

public:
	inline static int32_t get_offset_of_propertyDescriptor_0() { return static_cast<int32_t>(offsetof(ListSortDescription_t3345164960, ___propertyDescriptor_0)); }
	inline PropertyDescriptor_t4009622457 * get_propertyDescriptor_0() const { return ___propertyDescriptor_0; }
	inline PropertyDescriptor_t4009622457 ** get_address_of_propertyDescriptor_0() { return &___propertyDescriptor_0; }
	inline void set_propertyDescriptor_0(PropertyDescriptor_t4009622457 * value)
	{
		___propertyDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((&___propertyDescriptor_0), value);
	}

	inline static int32_t get_offset_of_sortDirection_1() { return static_cast<int32_t>(offsetof(ListSortDescription_t3345164960, ___sortDirection_1)); }
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
#endif // LISTSORTDESCRIPTION_T3345164960_H
#ifndef DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T1753718283_H
#define DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T1753718283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct  DesignerSerializationVisibilityAttribute_t1753718283  : public Attribute_t4043032847
{
public:
	// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::visibility
	int32_t ___visibility_0;

public:
	inline static int32_t get_offset_of_visibility_0() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t1753718283, ___visibility_0)); }
	inline int32_t get_visibility_0() const { return ___visibility_0; }
	inline int32_t* get_address_of_visibility_0() { return &___visibility_0; }
	inline void set_visibility_0(int32_t value)
	{
		___visibility_0 = value;
	}
};

struct DesignerSerializationVisibilityAttribute_t1753718283_StaticFields
{
public:
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Default
	DesignerSerializationVisibilityAttribute_t1753718283 * ___Default_1;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Content
	DesignerSerializationVisibilityAttribute_t1753718283 * ___Content_2;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Hidden
	DesignerSerializationVisibilityAttribute_t1753718283 * ___Hidden_3;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Visible
	DesignerSerializationVisibilityAttribute_t1753718283 * ___Visible_4;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t1753718283_StaticFields, ___Default_1)); }
	inline DesignerSerializationVisibilityAttribute_t1753718283 * get_Default_1() const { return ___Default_1; }
	inline DesignerSerializationVisibilityAttribute_t1753718283 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignerSerializationVisibilityAttribute_t1753718283 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_Content_2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t1753718283_StaticFields, ___Content_2)); }
	inline DesignerSerializationVisibilityAttribute_t1753718283 * get_Content_2() const { return ___Content_2; }
	inline DesignerSerializationVisibilityAttribute_t1753718283 ** get_address_of_Content_2() { return &___Content_2; }
	inline void set_Content_2(DesignerSerializationVisibilityAttribute_t1753718283 * value)
	{
		___Content_2 = value;
		Il2CppCodeGenWriteBarrier((&___Content_2), value);
	}

	inline static int32_t get_offset_of_Hidden_3() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t1753718283_StaticFields, ___Hidden_3)); }
	inline DesignerSerializationVisibilityAttribute_t1753718283 * get_Hidden_3() const { return ___Hidden_3; }
	inline DesignerSerializationVisibilityAttribute_t1753718283 ** get_address_of_Hidden_3() { return &___Hidden_3; }
	inline void set_Hidden_3(DesignerSerializationVisibilityAttribute_t1753718283 * value)
	{
		___Hidden_3 = value;
		Il2CppCodeGenWriteBarrier((&___Hidden_3), value);
	}

	inline static int32_t get_offset_of_Visible_4() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t1753718283_StaticFields, ___Visible_4)); }
	inline DesignerSerializationVisibilityAttribute_t1753718283 * get_Visible_4() const { return ___Visible_4; }
	inline DesignerSerializationVisibilityAttribute_t1753718283 ** get_address_of_Visible_4() { return &___Visible_4; }
	inline void set_Visible_4(DesignerSerializationVisibilityAttribute_t1753718283 * value)
	{
		___Visible_4 = value;
		Il2CppCodeGenWriteBarrier((&___Visible_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T1753718283_H
#ifndef EDITORBROWSABLEATTRIBUTE_T644135574_H
#define EDITORBROWSABLEATTRIBUTE_T644135574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t644135574  : public Attribute_t4043032847
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t644135574, ___state_0)); }
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
#endif // EDITORBROWSABLEATTRIBUTE_T644135574_H
#ifndef INVALIDENUMARGUMENTEXCEPTION_T3996124057_H
#define INVALIDENUMARGUMENTEXCEPTION_T3996124057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InvalidEnumArgumentException
struct  InvalidEnumArgumentException_t3996124057  : public ArgumentException_t3080713079
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDENUMARGUMENTEXCEPTION_T3996124057_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1200 = { sizeof (BaseNumberConverter_t1424473277), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1200[1] = 
{
	BaseNumberConverter_t1424473277::get_offset_of_InnerType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1201 = { sizeof (BindableSupport_t2208790742)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1201[4] = 
{
	BindableSupport_t2208790742::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1202 = { sizeof (BooleanConverter_t1109041410), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1203 = { sizeof (BrowsableAttribute_t3551878845), -1, sizeof(BrowsableAttribute_t3551878845_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1203[4] = 
{
	BrowsableAttribute_t3551878845::get_offset_of_browsable_0(),
	BrowsableAttribute_t3551878845_StaticFields::get_offset_of_Default_1(),
	BrowsableAttribute_t3551878845_StaticFields::get_offset_of_No_2(),
	BrowsableAttribute_t3551878845_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1204 = { sizeof (ByteConverter_t328767643), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1205 = { sizeof (CancelEventArgs_t1195239045), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1205[1] = 
{
	CancelEventArgs_t1195239045::get_offset_of_cancel_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1206 = { sizeof (CategoryAttribute_t1826438136), -1, sizeof(CategoryAttribute_t1826438136_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1206[17] = 
{
	CategoryAttribute_t1826438136::get_offset_of_category_0(),
	CategoryAttribute_t1826438136::get_offset_of_IsLocalized_1(),
	CategoryAttribute_t1826438136_StaticFields::get_offset_of_action_2(),
	CategoryAttribute_t1826438136_StaticFields::get_offset_of_appearance_3(),
	CategoryAttribute_t1826438136_StaticFields::get_offset_of_behaviour_4(),
	CategoryAttribute_t1826438136_StaticFields::get_offset_of_data_5(),
	CategoryAttribute_t1826438136_StaticFields::get_offset_of_def_6(),
	CategoryAttribute_t1826438136_StaticFields::get_offset_of_design_7(),
	CategoryAttribute_t1826438136_StaticFields::get_offset_of_drag_drop_8(),
	CategoryAttribute_t1826438136_StaticFields::get_offset_of_focus_9(),
	CategoryAttribute_t1826438136_StaticFields::get_offset_of_format_10(),
	CategoryAttribute_t1826438136_StaticFields::get_offset_of_key_11(),
	CategoryAttribute_t1826438136_StaticFields::get_offset_of_layout_12(),
	CategoryAttribute_t1826438136_StaticFields::get_offset_of_mouse_13(),
	CategoryAttribute_t1826438136_StaticFields::get_offset_of_window_style_14(),
	CategoryAttribute_t1826438136_StaticFields::get_offset_of_async_15(),
	CategoryAttribute_t1826438136_StaticFields::get_offset_of_lockobj_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1207 = { sizeof (CharConverter_t4086838749), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1208 = { sizeof (CollectionChangeAction_t2405925552)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1208[4] = 
{
	CollectionChangeAction_t2405925552::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1209 = { sizeof (CollectionChangeEventArgs_t2405037207), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1209[2] = 
{
	CollectionChangeEventArgs_t2405037207::get_offset_of_changeAction_1(),
	CollectionChangeEventArgs_t2405037207::get_offset_of_theElement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1210 = { sizeof (CollectionConverter_t554355619), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1211 = { sizeof (Component_t3036537838), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1211[3] = 
{
	Component_t3036537838::get_offset_of_event_handlers_1(),
	Component_t3036537838::get_offset_of_mySite_2(),
	Component_t3036537838::get_offset_of_disposedEvent_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1212 = { sizeof (ComponentCollection_t2895766940), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1213 = { sizeof (ComponentConverter_t1351707010), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1214 = { sizeof (CultureInfoConverter_t1371557717), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1214[1] = 
{
	CultureInfoConverter_t1371557717::get_offset_of__standardValues_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1215 = { sizeof (CultureInfoComparer_t2816788261), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1216 = { sizeof (CustomTypeDescriptor_t2791691433), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1216[1] = 
{
	CustomTypeDescriptor_t2791691433::get_offset_of__parent_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1217 = { sizeof (DateTimeConverter_t4220417031), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1218 = { sizeof (DecimalConverter_t2352576042), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1219 = { sizeof (DefaultEventAttribute_t988306143), -1, sizeof(DefaultEventAttribute_t988306143_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1219[2] = 
{
	DefaultEventAttribute_t988306143::get_offset_of_eventName_0(),
	DefaultEventAttribute_t988306143_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1220 = { sizeof (DefaultPropertyAttribute_t2081852258), -1, sizeof(DefaultPropertyAttribute_t2081852258_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1220[2] = 
{
	DefaultPropertyAttribute_t2081852258::get_offset_of_property_name_0(),
	DefaultPropertyAttribute_t2081852258_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1221 = { sizeof (DefaultValueAttribute_t2256637949), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1221[1] = 
{
	DefaultValueAttribute_t2256637949::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1222 = { sizeof (DescriptionAttribute_t2386841325), -1, sizeof(DescriptionAttribute_t2386841325_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1222[2] = 
{
	DescriptionAttribute_t2386841325::get_offset_of_desc_0(),
	DescriptionAttribute_t2386841325_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1223 = { sizeof (DesignOnlyAttribute_t534348564), -1, sizeof(DesignOnlyAttribute_t534348564_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1223[4] = 
{
	DesignOnlyAttribute_t534348564::get_offset_of_design_only_0(),
	DesignOnlyAttribute_t534348564_StaticFields::get_offset_of_Default_1(),
	DesignOnlyAttribute_t534348564_StaticFields::get_offset_of_No_2(),
	DesignOnlyAttribute_t534348564_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1224 = { sizeof (DesignTimeVisibleAttribute_t4113989006), -1, sizeof(DesignTimeVisibleAttribute_t4113989006_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1224[4] = 
{
	DesignTimeVisibleAttribute_t4113989006::get_offset_of_visible_0(),
	DesignTimeVisibleAttribute_t4113989006_StaticFields::get_offset_of_Default_1(),
	DesignTimeVisibleAttribute_t4113989006_StaticFields::get_offset_of_No_2(),
	DesignTimeVisibleAttribute_t4113989006_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1225 = { sizeof (DesignerAttribute_t639288712), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1225[2] = 
{
	DesignerAttribute_t639288712::get_offset_of_name_0(),
	DesignerAttribute_t639288712::get_offset_of_basetypename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1226 = { sizeof (DesignerCategoryAttribute_t3216069781), -1, sizeof(DesignerCategoryAttribute_t3216069781_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1226[5] = 
{
	DesignerCategoryAttribute_t3216069781::get_offset_of_category_0(),
	DesignerCategoryAttribute_t3216069781_StaticFields::get_offset_of_Component_1(),
	DesignerCategoryAttribute_t3216069781_StaticFields::get_offset_of_Form_2(),
	DesignerCategoryAttribute_t3216069781_StaticFields::get_offset_of_Generic_3(),
	DesignerCategoryAttribute_t3216069781_StaticFields::get_offset_of_Default_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1227 = { sizeof (DesignerSerializationVisibility_t1757378297)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1227[4] = 
{
	DesignerSerializationVisibility_t1757378297::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1228 = { sizeof (DesignerSerializationVisibilityAttribute_t1753718283), -1, sizeof(DesignerSerializationVisibilityAttribute_t1753718283_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1228[5] = 
{
	DesignerSerializationVisibilityAttribute_t1753718283::get_offset_of_visibility_0(),
	DesignerSerializationVisibilityAttribute_t1753718283_StaticFields::get_offset_of_Default_1(),
	DesignerSerializationVisibilityAttribute_t1753718283_StaticFields::get_offset_of_Content_2(),
	DesignerSerializationVisibilityAttribute_t1753718283_StaticFields::get_offset_of_Hidden_3(),
	DesignerSerializationVisibilityAttribute_t1753718283_StaticFields::get_offset_of_Visible_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1229 = { sizeof (DisplayNameAttribute_t3081261961), -1, sizeof(DisplayNameAttribute_t3081261961_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1229[2] = 
{
	DisplayNameAttribute_t3081261961_StaticFields::get_offset_of_Default_0(),
	DisplayNameAttribute_t3081261961::get_offset_of_attributeDisplayName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1230 = { sizeof (DoWorkEventArgs_t3063424378), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1230[3] = 
{
	DoWorkEventArgs_t3063424378::get_offset_of_arg_1(),
	DoWorkEventArgs_t3063424378::get_offset_of_result_2(),
	DoWorkEventArgs_t3063424378::get_offset_of_cancel_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1231 = { sizeof (DoubleConverter_t1768991287), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1232 = { sizeof (EditorAttribute_t957071580), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1232[2] = 
{
	EditorAttribute_t957071580::get_offset_of_name_0(),
	EditorAttribute_t957071580::get_offset_of_basename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1233 = { sizeof (EditorBrowsableAttribute_t644135574), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1233[1] = 
{
	EditorBrowsableAttribute_t644135574::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1234 = { sizeof (EditorBrowsableState_t1504913674)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1234[4] = 
{
	EditorBrowsableState_t1504913674::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1235 = { sizeof (EnumConverter_t857485659), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1235[2] = 
{
	EnumConverter_t857485659::get_offset_of_type_0(),
	EnumConverter_t857485659::get_offset_of_stdValues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1236 = { sizeof (EnumComparer_t2896971067), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1237 = { sizeof (EventDescriptor_t4202231385), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1238 = { sizeof (EventDescriptorCollection_t469371606), -1, sizeof(EventDescriptorCollection_t469371606_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1238[3] = 
{
	EventDescriptorCollection_t469371606::get_offset_of_eventList_0(),
	EventDescriptorCollection_t469371606::get_offset_of_isReadOnly_1(),
	EventDescriptorCollection_t469371606_StaticFields::get_offset_of_Empty_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1239 = { sizeof (ListEntry_t3734272735), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1239[3] = 
{
	ListEntry_t3734272735::get_offset_of_key_0(),
	ListEntry_t3734272735::get_offset_of_value_1(),
	ListEntry_t3734272735::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1240 = { sizeof (EventHandlerList_t1427346375), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1240[2] = 
{
	EventHandlerList_t1427346375::get_offset_of_entries_0(),
	EventHandlerList_t1427346375::get_offset_of_null_entry_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1241 = { sizeof (ExpandableObjectConverter_t1455872238), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1242 = { sizeof (GuidConverter_t4152809744), -1, 0, 0 };
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1261 = { sizeof (ImmutableObjectAttribute_t6407016), -1, sizeof(ImmutableObjectAttribute_t6407016_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1261[4] = 
{
	ImmutableObjectAttribute_t6407016::get_offset_of_immutable_0(),
	ImmutableObjectAttribute_t6407016_StaticFields::get_offset_of_Default_1(),
	ImmutableObjectAttribute_t6407016_StaticFields::get_offset_of_No_2(),
	ImmutableObjectAttribute_t6407016_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1262 = { sizeof (Int16Converter_t4037381577), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1263 = { sizeof (Int32Converter_t1002716161), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1264 = { sizeof (Int64Converter_t2464862213), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1265 = { sizeof (InvalidEnumArgumentException_t3996124057), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1266 = { sizeof (LicFileLicenseProvider_t4226002989), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1267 = { sizeof (LicFileLicense_t1564609693), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1267[1] = 
{
	LicFileLicense_t1564609693::get_offset_of__key_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1268 = { sizeof (License_t1289767319), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1269 = { sizeof (LicenseContext_t3946480566), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1270 = { sizeof (LicenseException_t3407698857), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1270[1] = 
{
	LicenseException_t3407698857::get_offset_of_type_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1271 = { sizeof (LicenseManager_t4070037356), -1, sizeof(LicenseManager_t4070037356_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1271[3] = 
{
	LicenseManager_t4070037356_StaticFields::get_offset_of_mycontext_0(),
	LicenseManager_t4070037356_StaticFields::get_offset_of_contextLockUser_1(),
	LicenseManager_t4070037356_StaticFields::get_offset_of_lockObject_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1272 = { sizeof (LicenseProvider_t3084024763), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1273 = { sizeof (LicenseProviderAttribute_t2740736635), -1, sizeof(LicenseProviderAttribute_t2740736635_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1273[2] = 
{
	LicenseProviderAttribute_t2740736635::get_offset_of_Provider_0(),
	LicenseProviderAttribute_t2740736635_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1274 = { sizeof (LicenseUsageMode_t1993276162)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1274[3] = 
{
	LicenseUsageMode_t1993276162::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1275 = { sizeof (ListBindableAttribute_t426259451), -1, sizeof(ListBindableAttribute_t426259451_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1275[4] = 
{
	ListBindableAttribute_t426259451_StaticFields::get_offset_of_Default_0(),
	ListBindableAttribute_t426259451_StaticFields::get_offset_of_No_1(),
	ListBindableAttribute_t426259451_StaticFields::get_offset_of_Yes_2(),
	ListBindableAttribute_t426259451::get_offset_of_bindable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1276 = { sizeof (ListChangedEventArgs_t1418275251), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1276[4] = 
{
	ListChangedEventArgs_t1418275251::get_offset_of_changedType_1(),
	ListChangedEventArgs_t1418275251::get_offset_of_oldIndex_2(),
	ListChangedEventArgs_t1418275251::get_offset_of_newIndex_3(),
	ListChangedEventArgs_t1418275251::get_offset_of_propDesc_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1277 = { sizeof (ListChangedType_t410270988)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1277[9] = 
{
	ListChangedType_t410270988::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1278 = { sizeof (ListSortDescription_t3345164960), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1278[2] = 
{
	ListSortDescription_t3345164960::get_offset_of_propertyDescriptor_0(),
	ListSortDescription_t3345164960::get_offset_of_sortDirection_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1279 = { sizeof (ListSortDescriptionCollection_t3906840441), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1279[1] = 
{
	ListSortDescriptionCollection_t3906840441::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1280 = { sizeof (ListSortDirection_t521137712)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1280[3] = 
{
	ListSortDirection_t521137712::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1281 = { sizeof (LocalizableAttribute_t2032863955), -1, sizeof(LocalizableAttribute_t2032863955_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1281[4] = 
{
	LocalizableAttribute_t2032863955::get_offset_of_localizable_0(),
	LocalizableAttribute_t2032863955_StaticFields::get_offset_of_Default_1(),
	LocalizableAttribute_t2032863955_StaticFields::get_offset_of_No_2(),
	LocalizableAttribute_t2032863955_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1282 = { sizeof (MarshalByValueComponent_t1256752560), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1282[3] = 
{
	MarshalByValueComponent_t1256752560::get_offset_of_eventList_0(),
	MarshalByValueComponent_t1256752560::get_offset_of_mySite_1(),
	MarshalByValueComponent_t1256752560::get_offset_of_disposedEvent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1283 = { sizeof (MemberDescriptor_t3689707769), -1, sizeof(MemberDescriptor_t3689707769_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1283[4] = 
{
	MemberDescriptor_t3689707769::get_offset_of_name_0(),
	MemberDescriptor_t3689707769::get_offset_of_attrs_1(),
	MemberDescriptor_t3689707769::get_offset_of_attrCollection_2(),
	MemberDescriptor_t3689707769_StaticFields::get_offset_of_default_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1284 = { sizeof (MemberDescriptorComparer_t2685358907), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1285 = { sizeof (MergablePropertyAttribute_t4046554239), -1, sizeof(MergablePropertyAttribute_t4046554239_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1285[4] = 
{
	MergablePropertyAttribute_t4046554239::get_offset_of_mergable_0(),
	MergablePropertyAttribute_t4046554239_StaticFields::get_offset_of_Default_1(),
	MergablePropertyAttribute_t4046554239_StaticFields::get_offset_of_No_2(),
	MergablePropertyAttribute_t4046554239_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1286 = { sizeof (MultilineStringConverter_t4043589183), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1287 = { sizeof (NotifyParentPropertyAttribute_t1439406644), -1, sizeof(NotifyParentPropertyAttribute_t1439406644_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1287[4] = 
{
	NotifyParentPropertyAttribute_t1439406644::get_offset_of_notifyParent_0(),
	NotifyParentPropertyAttribute_t1439406644_StaticFields::get_offset_of_Default_1(),
	NotifyParentPropertyAttribute_t1439406644_StaticFields::get_offset_of_No_2(),
	NotifyParentPropertyAttribute_t1439406644_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1288 = { sizeof (NullableConverter_t2861585743), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1288[3] = 
{
	NullableConverter_t2861585743::get_offset_of_nullableType_0(),
	NullableConverter_t2861585743::get_offset_of_underlyingType_1(),
	NullableConverter_t2861585743::get_offset_of_underlyingTypeConverter_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1289 = { sizeof (PasswordPropertyTextAttribute_t789890149), -1, sizeof(PasswordPropertyTextAttribute_t789890149_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1289[4] = 
{
	PasswordPropertyTextAttribute_t789890149_StaticFields::get_offset_of_Default_0(),
	PasswordPropertyTextAttribute_t789890149_StaticFields::get_offset_of_No_1(),
	PasswordPropertyTextAttribute_t789890149_StaticFields::get_offset_of_Yes_2(),
	PasswordPropertyTextAttribute_t789890149::get_offset_of__password_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1290 = { sizeof (ProgressChangedEventArgs_t3156154711), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1290[2] = 
{
	ProgressChangedEventArgs_t3156154711::get_offset_of_progress_1(),
	ProgressChangedEventArgs_t3156154711::get_offset_of_state_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1291 = { sizeof (PropertyChangedEventArgs_t1472221181), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1291[1] = 
{
	PropertyChangedEventArgs_t1472221181::get_offset_of_propertyName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1292 = { sizeof (PropertyDescriptor_t4009622457), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1292[2] = 
{
	PropertyDescriptor_t4009622457::get_offset_of_converter_4(),
	PropertyDescriptor_t4009622457::get_offset_of_notifiers_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1293 = { sizeof (PropertyDescriptorCollection_t3803351598), -1, sizeof(PropertyDescriptorCollection_t3803351598_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1293[3] = 
{
	PropertyDescriptorCollection_t3803351598_StaticFields::get_offset_of_Empty_0(),
	PropertyDescriptorCollection_t3803351598::get_offset_of_properties_1(),
	PropertyDescriptorCollection_t3803351598::get_offset_of_readOnly_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1294 = { sizeof (ReadOnlyAttribute_t1531168597), -1, sizeof(ReadOnlyAttribute_t1531168597_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1294[4] = 
{
	ReadOnlyAttribute_t1531168597::get_offset_of_read_only_0(),
	ReadOnlyAttribute_t1531168597_StaticFields::get_offset_of_No_1(),
	ReadOnlyAttribute_t1531168597_StaticFields::get_offset_of_Yes_2(),
	ReadOnlyAttribute_t1531168597_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1295 = { sizeof (RecommendedAsConfigurableAttribute_t3649212674), -1, sizeof(RecommendedAsConfigurableAttribute_t3649212674_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1295[4] = 
{
	RecommendedAsConfigurableAttribute_t3649212674::get_offset_of_recommendedAsConfigurable_0(),
	RecommendedAsConfigurableAttribute_t3649212674_StaticFields::get_offset_of_Default_1(),
	RecommendedAsConfigurableAttribute_t3649212674_StaticFields::get_offset_of_No_2(),
	RecommendedAsConfigurableAttribute_t3649212674_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1296 = { sizeof (ReferenceConverter_t3133734745), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1296[1] = 
{
	ReferenceConverter_t3133734745::get_offset_of_reference_type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1297 = { sizeof (ReflectionEventDescriptor_t3169879480), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1297[5] = 
{
	ReflectionEventDescriptor_t3169879480::get_offset_of__eventType_4(),
	ReflectionEventDescriptor_t3169879480::get_offset_of__componentType_5(),
	ReflectionEventDescriptor_t3169879480::get_offset_of__eventInfo_6(),
	ReflectionEventDescriptor_t3169879480::get_offset_of_add_method_7(),
	ReflectionEventDescriptor_t3169879480::get_offset_of_remove_method_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1298 = { sizeof (ReflectionPropertyDescriptor_t2867867211), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1298[6] = 
{
	ReflectionPropertyDescriptor_t2867867211::get_offset_of__member_6(),
	ReflectionPropertyDescriptor_t2867867211::get_offset_of__componentType_7(),
	ReflectionPropertyDescriptor_t2867867211::get_offset_of__propertyType_8(),
	ReflectionPropertyDescriptor_t2867867211::get_offset_of_getter_9(),
	ReflectionPropertyDescriptor_t2867867211::get_offset_of_setter_10(),
	ReflectionPropertyDescriptor_t2867867211::get_offset_of_accessors_inited_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1299 = { sizeof (RefreshEventArgs_t669234255), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1299[2] = 
{
	RefreshEventArgs_t669234255::get_offset_of_component_1(),
	RefreshEventArgs_t669234255::get_offset_of_type_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
