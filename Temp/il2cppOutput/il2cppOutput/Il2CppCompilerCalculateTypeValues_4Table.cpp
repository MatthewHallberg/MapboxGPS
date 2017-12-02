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

// System.Object[]
struct ObjectU5BU5D_t2392277051;
// System.IntPtr[]
struct IntPtrU5BU5D_t3659589827;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t2958216421;
// System.Collections.ArrayList
struct ArrayList_t844188058;
// System.Collections.Hashtable
struct Hashtable_t2604207785;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2872288717;
// System.Runtime.Remoting.Contexts.IDynamicProperty
struct IDynamicProperty_t3979026912;
// System.Runtime.Remoting.Contexts.IDynamicMessageSink
struct IDynamicMessageSink_t2673805933;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t4271477597;
// System.Resources.IResourceReader
struct IResourceReader_t3573025770;
// System.Resources.ResourceReader
struct ResourceReader_t299290609;
// System.IO.BinaryReader
struct BinaryReader_t795679083;
// System.Runtime.Serialization.IFormatter
struct IFormatter_t1480173433;
// System.String[]
struct StringU5BU5D_t3162382152;
// System.Int32[]
struct Int32U5BU5D_t3325461767;
// System.Resources.ResourceReader/ResourceInfo[]
struct ResourceInfoU5BU5D_t2575909676;
// System.Resources.ResourceReader/ResourceCacheItem[]
struct ResourceCacheItemU5BU5D_t263715138;
// System.Runtime.Remoting.Contexts.CrossContextChannel
struct CrossContextChannel_t516326787;
// System.Collections.IList
struct IList_t1814833016;
// System.Char[]
struct CharU5BU5D_t1565992178;
// System.Void
struct Void_t3045135636;
// System.Version
struct Version_t2959285725;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t2637112249;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t4099535435;
// System.Runtime.Remoting.Contexts.ContextCallbackObject
struct ContextCallbackObject_t762592508;
// System.Type[]
struct TypeU5BU5D_t730564648;
// System.Reflection.MemberFilter
struct MemberFilter_t4050762550;




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
#ifndef CHANNELINFO_T2074885633_H
#define CHANNELINFO_T2074885633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ChannelInfo
struct  ChannelInfo_t2074885633  : public RuntimeObject
{
public:
	// System.Object[] System.Runtime.Remoting.ChannelInfo::channelData
	ObjectU5BU5D_t2392277051* ___channelData_0;

public:
	inline static int32_t get_offset_of_channelData_0() { return static_cast<int32_t>(offsetof(ChannelInfo_t2074885633, ___channelData_0)); }
	inline ObjectU5BU5D_t2392277051* get_channelData_0() const { return ___channelData_0; }
	inline ObjectU5BU5D_t2392277051** get_address_of_channelData_0() { return &___channelData_0; }
	inline void set_channelData_0(ObjectU5BU5D_t2392277051* value)
	{
		___channelData_0 = value;
		Il2CppCodeGenWriteBarrier((&___channelData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELINFO_T2074885633_H
#ifndef ERRORWRAPPER_T793257585_H
#define ERRORWRAPPER_T793257585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ErrorWrapper
struct  ErrorWrapper_t793257585  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.ErrorWrapper::errorCode
	int32_t ___errorCode_0;

public:
	inline static int32_t get_offset_of_errorCode_0() { return static_cast<int32_t>(offsetof(ErrorWrapper_t793257585, ___errorCode_0)); }
	inline int32_t get_errorCode_0() const { return ___errorCode_0; }
	inline int32_t* get_address_of_errorCode_0() { return &___errorCode_0; }
	inline void set_errorCode_0(int32_t value)
	{
		___errorCode_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORWRAPPER_T793257585_H
#ifndef CROSSCONTEXTCHANNEL_T516326787_H
#define CROSSCONTEXTCHANNEL_T516326787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextChannel
struct  CrossContextChannel_t516326787  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTCHANNEL_T516326787_H
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
#ifndef DYNAMICPROPERTYCOLLECTION_T4099535435_H
#define DYNAMICPROPERTYCOLLECTION_T4099535435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct  DynamicPropertyCollection_t4099535435  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.DynamicPropertyCollection::_properties
	ArrayList_t844188058 * ____properties_0;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(DynamicPropertyCollection_t4099535435, ____properties_0)); }
	inline ArrayList_t844188058 * get__properties_0() const { return ____properties_0; }
	inline ArrayList_t844188058 ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(ArrayList_t844188058 * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((&____properties_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICPROPERTYCOLLECTION_T4099535435_H
#ifndef ACTIVATIONARGUMENTS_T1384342744_H
#define ACTIVATIONARGUMENTS_T1384342744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Hosting.ActivationArguments
struct  ActivationArguments_t1384342744  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONARGUMENTS_T1384342744_H
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
#ifndef CRITICALFINALIZEROBJECT_T2225943581_H
#define CRITICALFINALIZEROBJECT_T2225943581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t2225943581  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T2225943581_H
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
#ifndef SINKPROVIDERDATA_T3416631570_H
#define SINKPROVIDERDATA_T3416631570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.SinkProviderData
struct  SinkProviderData_t3416631570  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Channels.SinkProviderData::sinkName
	String_t* ___sinkName_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.SinkProviderData::children
	ArrayList_t844188058 * ___children_1;
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.SinkProviderData::properties
	Hashtable_t2604207785 * ___properties_2;

public:
	inline static int32_t get_offset_of_sinkName_0() { return static_cast<int32_t>(offsetof(SinkProviderData_t3416631570, ___sinkName_0)); }
	inline String_t* get_sinkName_0() const { return ___sinkName_0; }
	inline String_t** get_address_of_sinkName_0() { return &___sinkName_0; }
	inline void set_sinkName_0(String_t* value)
	{
		___sinkName_0 = value;
		Il2CppCodeGenWriteBarrier((&___sinkName_0), value);
	}

	inline static int32_t get_offset_of_children_1() { return static_cast<int32_t>(offsetof(SinkProviderData_t3416631570, ___children_1)); }
	inline ArrayList_t844188058 * get_children_1() const { return ___children_1; }
	inline ArrayList_t844188058 ** get_address_of_children_1() { return &___children_1; }
	inline void set_children_1(ArrayList_t844188058 * value)
	{
		___children_1 = value;
		Il2CppCodeGenWriteBarrier((&___children_1), value);
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(SinkProviderData_t3416631570, ___properties_2)); }
	inline Hashtable_t2604207785 * get_properties_2() const { return ___properties_2; }
	inline Hashtable_t2604207785 ** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(Hashtable_t2604207785 * value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier((&___properties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINKPROVIDERDATA_T3416631570_H
#ifndef MARSHAL_T2985855523_H
#define MARSHAL_T2985855523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.Marshal
struct  Marshal_t2985855523  : public RuntimeObject
{
public:

public:
};

struct Marshal_t2985855523_StaticFields
{
public:
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemMaxDBCSCharSize
	int32_t ___SystemMaxDBCSCharSize_0;
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemDefaultCharSize
	int32_t ___SystemDefaultCharSize_1;

public:
	inline static int32_t get_offset_of_SystemMaxDBCSCharSize_0() { return static_cast<int32_t>(offsetof(Marshal_t2985855523_StaticFields, ___SystemMaxDBCSCharSize_0)); }
	inline int32_t get_SystemMaxDBCSCharSize_0() const { return ___SystemMaxDBCSCharSize_0; }
	inline int32_t* get_address_of_SystemMaxDBCSCharSize_0() { return &___SystemMaxDBCSCharSize_0; }
	inline void set_SystemMaxDBCSCharSize_0(int32_t value)
	{
		___SystemMaxDBCSCharSize_0 = value;
	}

	inline static int32_t get_offset_of_SystemDefaultCharSize_1() { return static_cast<int32_t>(offsetof(Marshal_t2985855523_StaticFields, ___SystemDefaultCharSize_1)); }
	inline int32_t get_SystemDefaultCharSize_1() const { return ___SystemDefaultCharSize_1; }
	inline int32_t* get_address_of_SystemDefaultCharSize_1() { return &___SystemDefaultCharSize_1; }
	inline void set_SystemDefaultCharSize_1(int32_t value)
	{
		___SystemDefaultCharSize_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHAL_T2985855523_H
#ifndef ISVOLATILE_T601190913_H
#define ISVOLATILE_T601190913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsVolatile
struct  IsVolatile_t601190913  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISVOLATILE_T601190913_H
#ifndef CROSSAPPDOMAINSINK_T3015081233_H
#define CROSSAPPDOMAINSINK_T3015081233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainSink
struct  CrossAppDomainSink_t3015081233  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::_domainID
	int32_t ____domainID_2;

public:
	inline static int32_t get_offset_of__domainID_2() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t3015081233, ____domainID_2)); }
	inline int32_t get__domainID_2() const { return ____domainID_2; }
	inline int32_t* get_address_of__domainID_2() { return &____domainID_2; }
	inline void set__domainID_2(int32_t value)
	{
		____domainID_2 = value;
	}
};

struct CrossAppDomainSink_t3015081233_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.CrossAppDomainSink::s_sinks
	Hashtable_t2604207785 * ___s_sinks_0;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Channels.CrossAppDomainSink::processMessageMethod
	MethodInfo_t * ___processMessageMethod_1;

public:
	inline static int32_t get_offset_of_s_sinks_0() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t3015081233_StaticFields, ___s_sinks_0)); }
	inline Hashtable_t2604207785 * get_s_sinks_0() const { return ___s_sinks_0; }
	inline Hashtable_t2604207785 ** get_address_of_s_sinks_0() { return &___s_sinks_0; }
	inline void set_s_sinks_0(Hashtable_t2604207785 * value)
	{
		___s_sinks_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_sinks_0), value);
	}

	inline static int32_t get_offset_of_processMessageMethod_1() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t3015081233_StaticFields, ___processMessageMethod_1)); }
	inline MethodInfo_t * get_processMessageMethod_1() const { return ___processMessageMethod_1; }
	inline MethodInfo_t ** get_address_of_processMessageMethod_1() { return &___processMessageMethod_1; }
	inline void set_processMessageMethod_1(MethodInfo_t * value)
	{
		___processMessageMethod_1 = value;
		Il2CppCodeGenWriteBarrier((&___processMessageMethod_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINSINK_T3015081233_H
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
#ifndef DYNAMICPROPERTYREG_T1475592665_H
#define DYNAMICPROPERTYREG_T1475592665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg
struct  DynamicPropertyReg_t1475592665  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Contexts.IDynamicProperty System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg::Property
	RuntimeObject* ___Property_0;
	// System.Runtime.Remoting.Contexts.IDynamicMessageSink System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg::Sink
	RuntimeObject* ___Sink_1;

public:
	inline static int32_t get_offset_of_Property_0() { return static_cast<int32_t>(offsetof(DynamicPropertyReg_t1475592665, ___Property_0)); }
	inline RuntimeObject* get_Property_0() const { return ___Property_0; }
	inline RuntimeObject** get_address_of_Property_0() { return &___Property_0; }
	inline void set_Property_0(RuntimeObject* value)
	{
		___Property_0 = value;
		Il2CppCodeGenWriteBarrier((&___Property_0), value);
	}

	inline static int32_t get_offset_of_Sink_1() { return static_cast<int32_t>(offsetof(DynamicPropertyReg_t1475592665, ___Sink_1)); }
	inline RuntimeObject* get_Sink_1() const { return ___Sink_1; }
	inline RuntimeObject** get_address_of_Sink_1() { return &___Sink_1; }
	inline void set_Sink_1(RuntimeObject* value)
	{
		___Sink_1 = value;
		Il2CppCodeGenWriteBarrier((&___Sink_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICPROPERTYREG_T1475592665_H
#ifndef RESOURCEMANAGER_T2429136511_H
#define RESOURCEMANAGER_T2429136511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager
struct  ResourceManager_t2429136511  : public RuntimeObject
{
public:
	// System.Type System.Resources.ResourceManager::resourceSetType
	Type_t * ___resourceSetType_4;

public:
	inline static int32_t get_offset_of_resourceSetType_4() { return static_cast<int32_t>(offsetof(ResourceManager_t2429136511, ___resourceSetType_4)); }
	inline Type_t * get_resourceSetType_4() const { return ___resourceSetType_4; }
	inline Type_t ** get_address_of_resourceSetType_4() { return &___resourceSetType_4; }
	inline void set_resourceSetType_4(Type_t * value)
	{
		___resourceSetType_4 = value;
		Il2CppCodeGenWriteBarrier((&___resourceSetType_4), value);
	}
};

struct ResourceManager_t2429136511_StaticFields
{
public:
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceCache
	Hashtable_t2604207785 * ___ResourceCache_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::NonExistent
	Hashtable_t2604207785 * ___NonExistent_1;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_2;
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_3;

public:
	inline static int32_t get_offset_of_ResourceCache_0() { return static_cast<int32_t>(offsetof(ResourceManager_t2429136511_StaticFields, ___ResourceCache_0)); }
	inline Hashtable_t2604207785 * get_ResourceCache_0() const { return ___ResourceCache_0; }
	inline Hashtable_t2604207785 ** get_address_of_ResourceCache_0() { return &___ResourceCache_0; }
	inline void set_ResourceCache_0(Hashtable_t2604207785 * value)
	{
		___ResourceCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceCache_0), value);
	}

	inline static int32_t get_offset_of_NonExistent_1() { return static_cast<int32_t>(offsetof(ResourceManager_t2429136511_StaticFields, ___NonExistent_1)); }
	inline Hashtable_t2604207785 * get_NonExistent_1() const { return ___NonExistent_1; }
	inline Hashtable_t2604207785 ** get_address_of_NonExistent_1() { return &___NonExistent_1; }
	inline void set_NonExistent_1(Hashtable_t2604207785 * value)
	{
		___NonExistent_1 = value;
		Il2CppCodeGenWriteBarrier((&___NonExistent_1), value);
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_2() { return static_cast<int32_t>(offsetof(ResourceManager_t2429136511_StaticFields, ___HeaderVersionNumber_2)); }
	inline int32_t get_HeaderVersionNumber_2() const { return ___HeaderVersionNumber_2; }
	inline int32_t* get_address_of_HeaderVersionNumber_2() { return &___HeaderVersionNumber_2; }
	inline void set_HeaderVersionNumber_2(int32_t value)
	{
		___HeaderVersionNumber_2 = value;
	}

	inline static int32_t get_offset_of_MagicNumber_3() { return static_cast<int32_t>(offsetof(ResourceManager_t2429136511_StaticFields, ___MagicNumber_3)); }
	inline int32_t get_MagicNumber_3() const { return ___MagicNumber_3; }
	inline int32_t* get_address_of_MagicNumber_3() { return &___MagicNumber_3; }
	inline void set_MagicNumber_3(int32_t value)
	{
		___MagicNumber_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEMANAGER_T2429136511_H
#ifndef CONTEXTLEVELACTIVATOR_T1572131159_H
#define CONTEXTLEVELACTIVATOR_T1572131159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ContextLevelActivator
struct  ContextLevelActivator_t1572131159  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ContextLevelActivator::m_NextActivator
	RuntimeObject* ___m_NextActivator_0;

public:
	inline static int32_t get_offset_of_m_NextActivator_0() { return static_cast<int32_t>(offsetof(ContextLevelActivator_t1572131159, ___m_NextActivator_0)); }
	inline RuntimeObject* get_m_NextActivator_0() const { return ___m_NextActivator_0; }
	inline RuntimeObject** get_address_of_m_NextActivator_0() { return &___m_NextActivator_0; }
	inline void set_m_NextActivator_0(RuntimeObject* value)
	{
		___m_NextActivator_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_NextActivator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTLEVELACTIVATOR_T1572131159_H
#ifndef RESOURCESET_T1720190569_H
#define RESOURCESET_T1720190569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceSet
struct  ResourceSet_t1720190569  : public RuntimeObject
{
public:
	// System.Resources.IResourceReader System.Resources.ResourceSet::Reader
	RuntimeObject* ___Reader_0;
	// System.Collections.Hashtable System.Resources.ResourceSet::Table
	Hashtable_t2604207785 * ___Table_1;
	// System.Boolean System.Resources.ResourceSet::resources_read
	bool ___resources_read_2;
	// System.Boolean System.Resources.ResourceSet::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_Reader_0() { return static_cast<int32_t>(offsetof(ResourceSet_t1720190569, ___Reader_0)); }
	inline RuntimeObject* get_Reader_0() const { return ___Reader_0; }
	inline RuntimeObject** get_address_of_Reader_0() { return &___Reader_0; }
	inline void set_Reader_0(RuntimeObject* value)
	{
		___Reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___Reader_0), value);
	}

	inline static int32_t get_offset_of_Table_1() { return static_cast<int32_t>(offsetof(ResourceSet_t1720190569, ___Table_1)); }
	inline Hashtable_t2604207785 * get_Table_1() const { return ___Table_1; }
	inline Hashtable_t2604207785 ** get_address_of_Table_1() { return &___Table_1; }
	inline void set_Table_1(Hashtable_t2604207785 * value)
	{
		___Table_1 = value;
		Il2CppCodeGenWriteBarrier((&___Table_1), value);
	}

	inline static int32_t get_offset_of_resources_read_2() { return static_cast<int32_t>(offsetof(ResourceSet_t1720190569, ___resources_read_2)); }
	inline bool get_resources_read_2() const { return ___resources_read_2; }
	inline bool* get_address_of_resources_read_2() { return &___resources_read_2; }
	inline void set_resources_read_2(bool value)
	{
		___resources_read_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(ResourceSet_t1720190569, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCESET_T1720190569_H
#ifndef RESOURCEENUMERATOR_T2986384162_H
#define RESOURCEENUMERATOR_T2986384162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceEnumerator
struct  ResourceEnumerator_t2986384162  : public RuntimeObject
{
public:
	// System.Resources.ResourceReader System.Resources.ResourceReader/ResourceEnumerator::reader
	ResourceReader_t299290609 * ___reader_0;
	// System.Int32 System.Resources.ResourceReader/ResourceEnumerator::index
	int32_t ___index_1;
	// System.Boolean System.Resources.ResourceReader/ResourceEnumerator::finished
	bool ___finished_2;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t2986384162, ___reader_0)); }
	inline ResourceReader_t299290609 * get_reader_0() const { return ___reader_0; }
	inline ResourceReader_t299290609 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(ResourceReader_t299290609 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t2986384162, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_finished_2() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t2986384162, ___finished_2)); }
	inline bool get_finished_2() const { return ___finished_2; }
	inline bool* get_address_of_finished_2() { return &___finished_2; }
	inline void set_finished_2(bool value)
	{
		___finished_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEENUMERATOR_T2986384162_H
#ifndef CONSTRUCTIONLEVELACTIVATOR_T841357401_H
#define CONSTRUCTIONLEVELACTIVATOR_T841357401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ConstructionLevelActivator
struct  ConstructionLevelActivator_t841357401  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTIONLEVELACTIVATOR_T841357401_H
#ifndef CROSSAPPDOMAINDATA_T666260977_H
#define CROSSAPPDOMAINDATA_T666260977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainData
struct  CrossAppDomainData_t666260977  : public RuntimeObject
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainData::_ContextID
	RuntimeObject * ____ContextID_0;
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainData::_DomainID
	int32_t ____DomainID_1;
	// System.String System.Runtime.Remoting.Channels.CrossAppDomainData::_processGuid
	String_t* ____processGuid_2;

public:
	inline static int32_t get_offset_of__ContextID_0() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t666260977, ____ContextID_0)); }
	inline RuntimeObject * get__ContextID_0() const { return ____ContextID_0; }
	inline RuntimeObject ** get_address_of__ContextID_0() { return &____ContextID_0; }
	inline void set__ContextID_0(RuntimeObject * value)
	{
		____ContextID_0 = value;
		Il2CppCodeGenWriteBarrier((&____ContextID_0), value);
	}

	inline static int32_t get_offset_of__DomainID_1() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t666260977, ____DomainID_1)); }
	inline int32_t get__DomainID_1() const { return ____DomainID_1; }
	inline int32_t* get_address_of__DomainID_1() { return &____DomainID_1; }
	inline void set__DomainID_1(int32_t value)
	{
		____DomainID_1 = value;
	}

	inline static int32_t get_offset_of__processGuid_2() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t666260977, ____processGuid_2)); }
	inline String_t* get__processGuid_2() const { return ____processGuid_2; }
	inline String_t** get_address_of__processGuid_2() { return &____processGuid_2; }
	inline void set__processGuid_2(String_t* value)
	{
		____processGuid_2 = value;
		Il2CppCodeGenWriteBarrier((&____processGuid_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINDATA_T666260977_H
#ifndef RESOURCEREADER_T299290609_H
#define RESOURCEREADER_T299290609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader
struct  ResourceReader_t299290609  : public RuntimeObject
{
public:
	// System.IO.BinaryReader System.Resources.ResourceReader::reader
	BinaryReader_t795679083 * ___reader_0;
	// System.Object System.Resources.ResourceReader::readerLock
	RuntimeObject * ___readerLock_1;
	// System.Runtime.Serialization.IFormatter System.Resources.ResourceReader::formatter
	RuntimeObject* ___formatter_2;
	// System.Int32 System.Resources.ResourceReader::resourceCount
	int32_t ___resourceCount_3;
	// System.Int32 System.Resources.ResourceReader::typeCount
	int32_t ___typeCount_4;
	// System.String[] System.Resources.ResourceReader::typeNames
	StringU5BU5D_t3162382152* ___typeNames_5;
	// System.Int32[] System.Resources.ResourceReader::hashes
	Int32U5BU5D_t3325461767* ___hashes_6;
	// System.Resources.ResourceReader/ResourceInfo[] System.Resources.ResourceReader::infos
	ResourceInfoU5BU5D_t2575909676* ___infos_7;
	// System.Int32 System.Resources.ResourceReader::dataSectionOffset
	int32_t ___dataSectionOffset_8;
	// System.Int64 System.Resources.ResourceReader::nameSectionOffset
	int64_t ___nameSectionOffset_9;
	// System.Int32 System.Resources.ResourceReader::resource_ver
	int32_t ___resource_ver_10;
	// System.Resources.ResourceReader/ResourceCacheItem[] System.Resources.ResourceReader::cache
	ResourceCacheItemU5BU5D_t263715138* ___cache_11;
	// System.Object System.Resources.ResourceReader::cache_lock
	RuntimeObject * ___cache_lock_12;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceReader_t299290609, ___reader_0)); }
	inline BinaryReader_t795679083 * get_reader_0() const { return ___reader_0; }
	inline BinaryReader_t795679083 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(BinaryReader_t795679083 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_readerLock_1() { return static_cast<int32_t>(offsetof(ResourceReader_t299290609, ___readerLock_1)); }
	inline RuntimeObject * get_readerLock_1() const { return ___readerLock_1; }
	inline RuntimeObject ** get_address_of_readerLock_1() { return &___readerLock_1; }
	inline void set_readerLock_1(RuntimeObject * value)
	{
		___readerLock_1 = value;
		Il2CppCodeGenWriteBarrier((&___readerLock_1), value);
	}

	inline static int32_t get_offset_of_formatter_2() { return static_cast<int32_t>(offsetof(ResourceReader_t299290609, ___formatter_2)); }
	inline RuntimeObject* get_formatter_2() const { return ___formatter_2; }
	inline RuntimeObject** get_address_of_formatter_2() { return &___formatter_2; }
	inline void set_formatter_2(RuntimeObject* value)
	{
		___formatter_2 = value;
		Il2CppCodeGenWriteBarrier((&___formatter_2), value);
	}

	inline static int32_t get_offset_of_resourceCount_3() { return static_cast<int32_t>(offsetof(ResourceReader_t299290609, ___resourceCount_3)); }
	inline int32_t get_resourceCount_3() const { return ___resourceCount_3; }
	inline int32_t* get_address_of_resourceCount_3() { return &___resourceCount_3; }
	inline void set_resourceCount_3(int32_t value)
	{
		___resourceCount_3 = value;
	}

	inline static int32_t get_offset_of_typeCount_4() { return static_cast<int32_t>(offsetof(ResourceReader_t299290609, ___typeCount_4)); }
	inline int32_t get_typeCount_4() const { return ___typeCount_4; }
	inline int32_t* get_address_of_typeCount_4() { return &___typeCount_4; }
	inline void set_typeCount_4(int32_t value)
	{
		___typeCount_4 = value;
	}

	inline static int32_t get_offset_of_typeNames_5() { return static_cast<int32_t>(offsetof(ResourceReader_t299290609, ___typeNames_5)); }
	inline StringU5BU5D_t3162382152* get_typeNames_5() const { return ___typeNames_5; }
	inline StringU5BU5D_t3162382152** get_address_of_typeNames_5() { return &___typeNames_5; }
	inline void set_typeNames_5(StringU5BU5D_t3162382152* value)
	{
		___typeNames_5 = value;
		Il2CppCodeGenWriteBarrier((&___typeNames_5), value);
	}

	inline static int32_t get_offset_of_hashes_6() { return static_cast<int32_t>(offsetof(ResourceReader_t299290609, ___hashes_6)); }
	inline Int32U5BU5D_t3325461767* get_hashes_6() const { return ___hashes_6; }
	inline Int32U5BU5D_t3325461767** get_address_of_hashes_6() { return &___hashes_6; }
	inline void set_hashes_6(Int32U5BU5D_t3325461767* value)
	{
		___hashes_6 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_6), value);
	}

	inline static int32_t get_offset_of_infos_7() { return static_cast<int32_t>(offsetof(ResourceReader_t299290609, ___infos_7)); }
	inline ResourceInfoU5BU5D_t2575909676* get_infos_7() const { return ___infos_7; }
	inline ResourceInfoU5BU5D_t2575909676** get_address_of_infos_7() { return &___infos_7; }
	inline void set_infos_7(ResourceInfoU5BU5D_t2575909676* value)
	{
		___infos_7 = value;
		Il2CppCodeGenWriteBarrier((&___infos_7), value);
	}

	inline static int32_t get_offset_of_dataSectionOffset_8() { return static_cast<int32_t>(offsetof(ResourceReader_t299290609, ___dataSectionOffset_8)); }
	inline int32_t get_dataSectionOffset_8() const { return ___dataSectionOffset_8; }
	inline int32_t* get_address_of_dataSectionOffset_8() { return &___dataSectionOffset_8; }
	inline void set_dataSectionOffset_8(int32_t value)
	{
		___dataSectionOffset_8 = value;
	}

	inline static int32_t get_offset_of_nameSectionOffset_9() { return static_cast<int32_t>(offsetof(ResourceReader_t299290609, ___nameSectionOffset_9)); }
	inline int64_t get_nameSectionOffset_9() const { return ___nameSectionOffset_9; }
	inline int64_t* get_address_of_nameSectionOffset_9() { return &___nameSectionOffset_9; }
	inline void set_nameSectionOffset_9(int64_t value)
	{
		___nameSectionOffset_9 = value;
	}

	inline static int32_t get_offset_of_resource_ver_10() { return static_cast<int32_t>(offsetof(ResourceReader_t299290609, ___resource_ver_10)); }
	inline int32_t get_resource_ver_10() const { return ___resource_ver_10; }
	inline int32_t* get_address_of_resource_ver_10() { return &___resource_ver_10; }
	inline void set_resource_ver_10(int32_t value)
	{
		___resource_ver_10 = value;
	}

	inline static int32_t get_offset_of_cache_11() { return static_cast<int32_t>(offsetof(ResourceReader_t299290609, ___cache_11)); }
	inline ResourceCacheItemU5BU5D_t263715138* get_cache_11() const { return ___cache_11; }
	inline ResourceCacheItemU5BU5D_t263715138** get_address_of_cache_11() { return &___cache_11; }
	inline void set_cache_11(ResourceCacheItemU5BU5D_t263715138* value)
	{
		___cache_11 = value;
		Il2CppCodeGenWriteBarrier((&___cache_11), value);
	}

	inline static int32_t get_offset_of_cache_lock_12() { return static_cast<int32_t>(offsetof(ResourceReader_t299290609, ___cache_lock_12)); }
	inline RuntimeObject * get_cache_lock_12() const { return ___cache_lock_12; }
	inline RuntimeObject ** get_address_of_cache_lock_12() { return &___cache_lock_12; }
	inline void set_cache_lock_12(RuntimeObject * value)
	{
		___cache_lock_12 = value;
		Il2CppCodeGenWriteBarrier((&___cache_lock_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEREADER_T299290609_H
#ifndef CHANNELSERVICES_T161072159_H
#define CHANNELSERVICES_T161072159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.ChannelServices
struct  ChannelServices_t161072159  : public RuntimeObject
{
public:

public:
};

struct ChannelServices_t161072159_StaticFields
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::registeredChannels
	ArrayList_t844188058 * ___registeredChannels_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::delayedClientChannels
	ArrayList_t844188058 * ___delayedClientChannels_1;
	// System.Runtime.Remoting.Contexts.CrossContextChannel System.Runtime.Remoting.Channels.ChannelServices::_crossContextSink
	CrossContextChannel_t516326787 * ____crossContextSink_2;
	// System.String System.Runtime.Remoting.Channels.ChannelServices::CrossContextUrl
	String_t* ___CrossContextUrl_3;
	// System.Collections.IList System.Runtime.Remoting.Channels.ChannelServices::oldStartModeTypes
	RuntimeObject* ___oldStartModeTypes_4;

public:
	inline static int32_t get_offset_of_registeredChannels_0() { return static_cast<int32_t>(offsetof(ChannelServices_t161072159_StaticFields, ___registeredChannels_0)); }
	inline ArrayList_t844188058 * get_registeredChannels_0() const { return ___registeredChannels_0; }
	inline ArrayList_t844188058 ** get_address_of_registeredChannels_0() { return &___registeredChannels_0; }
	inline void set_registeredChannels_0(ArrayList_t844188058 * value)
	{
		___registeredChannels_0 = value;
		Il2CppCodeGenWriteBarrier((&___registeredChannels_0), value);
	}

	inline static int32_t get_offset_of_delayedClientChannels_1() { return static_cast<int32_t>(offsetof(ChannelServices_t161072159_StaticFields, ___delayedClientChannels_1)); }
	inline ArrayList_t844188058 * get_delayedClientChannels_1() const { return ___delayedClientChannels_1; }
	inline ArrayList_t844188058 ** get_address_of_delayedClientChannels_1() { return &___delayedClientChannels_1; }
	inline void set_delayedClientChannels_1(ArrayList_t844188058 * value)
	{
		___delayedClientChannels_1 = value;
		Il2CppCodeGenWriteBarrier((&___delayedClientChannels_1), value);
	}

	inline static int32_t get_offset_of__crossContextSink_2() { return static_cast<int32_t>(offsetof(ChannelServices_t161072159_StaticFields, ____crossContextSink_2)); }
	inline CrossContextChannel_t516326787 * get__crossContextSink_2() const { return ____crossContextSink_2; }
	inline CrossContextChannel_t516326787 ** get_address_of__crossContextSink_2() { return &____crossContextSink_2; }
	inline void set__crossContextSink_2(CrossContextChannel_t516326787 * value)
	{
		____crossContextSink_2 = value;
		Il2CppCodeGenWriteBarrier((&____crossContextSink_2), value);
	}

	inline static int32_t get_offset_of_CrossContextUrl_3() { return static_cast<int32_t>(offsetof(ChannelServices_t161072159_StaticFields, ___CrossContextUrl_3)); }
	inline String_t* get_CrossContextUrl_3() const { return ___CrossContextUrl_3; }
	inline String_t** get_address_of_CrossContextUrl_3() { return &___CrossContextUrl_3; }
	inline void set_CrossContextUrl_3(String_t* value)
	{
		___CrossContextUrl_3 = value;
		Il2CppCodeGenWriteBarrier((&___CrossContextUrl_3), value);
	}

	inline static int32_t get_offset_of_oldStartModeTypes_4() { return static_cast<int32_t>(offsetof(ChannelServices_t161072159_StaticFields, ___oldStartModeTypes_4)); }
	inline RuntimeObject* get_oldStartModeTypes_4() const { return ___oldStartModeTypes_4; }
	inline RuntimeObject** get_address_of_oldStartModeTypes_4() { return &___oldStartModeTypes_4; }
	inline void set_oldStartModeTypes_4(RuntimeObject* value)
	{
		___oldStartModeTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&___oldStartModeTypes_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELSERVICES_T161072159_H
#ifndef CROSSAPPDOMAINCHANNEL_T3834454133_H
#define CROSSAPPDOMAINCHANNEL_T3834454133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainChannel
struct  CrossAppDomainChannel_t3834454133  : public RuntimeObject
{
public:

public:
};

struct CrossAppDomainChannel_t3834454133_StaticFields
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::s_lock
	RuntimeObject * ___s_lock_0;

public:
	inline static int32_t get_offset_of_s_lock_0() { return static_cast<int32_t>(offsetof(CrossAppDomainChannel_t3834454133_StaticFields, ___s_lock_0)); }
	inline RuntimeObject * get_s_lock_0() const { return ___s_lock_0; }
	inline RuntimeObject ** get_address_of_s_lock_0() { return &___s_lock_0; }
	inline void set_s_lock_0(RuntimeObject * value)
	{
		___s_lock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_lock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINCHANNEL_T3834454133_H
#ifndef ACTIVATIONSERVICES_T2056628617_H
#define ACTIVATIONSERVICES_T2056628617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ActivationServices
struct  ActivationServices_t2056628617  : public RuntimeObject
{
public:

public:
};

struct ActivationServices_t2056628617_StaticFields
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::_constructionActivator
	RuntimeObject* ____constructionActivator_0;

public:
	inline static int32_t get_offset_of__constructionActivator_0() { return static_cast<int32_t>(offsetof(ActivationServices_t2056628617_StaticFields, ____constructionActivator_0)); }
	inline RuntimeObject* get__constructionActivator_0() const { return ____constructionActivator_0; }
	inline RuntimeObject** get_address_of__constructionActivator_0() { return &____constructionActivator_0; }
	inline void set__constructionActivator_0(RuntimeObject* value)
	{
		____constructionActivator_0 = value;
		Il2CppCodeGenWriteBarrier((&____constructionActivator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONSERVICES_T2056628617_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef APPDOMAINLEVELACTIVATOR_T148467324_H
#define APPDOMAINLEVELACTIVATOR_T148467324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.AppDomainLevelActivator
struct  AppDomainLevelActivator_t148467324  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Activation.AppDomainLevelActivator::_activationUrl
	String_t* ____activationUrl_0;
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.AppDomainLevelActivator::_next
	RuntimeObject* ____next_1;

public:
	inline static int32_t get_offset_of__activationUrl_0() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t148467324, ____activationUrl_0)); }
	inline String_t* get__activationUrl_0() const { return ____activationUrl_0; }
	inline String_t** get_address_of__activationUrl_0() { return &____activationUrl_0; }
	inline void set__activationUrl_0(String_t* value)
	{
		____activationUrl_0 = value;
		Il2CppCodeGenWriteBarrier((&____activationUrl_0), value);
	}

	inline static int32_t get_offset_of__next_1() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t148467324, ____next_1)); }
	inline RuntimeObject* get__next_1() const { return ____next_1; }
	inline RuntimeObject** get_address_of__next_1() { return &____next_1; }
	inline void set__next_1(RuntimeObject* value)
	{
		____next_1 = value;
		Il2CppCodeGenWriteBarrier((&____next_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAINLEVELACTIVATOR_T148467324_H
#ifndef DISPIDATTRIBUTE_T3034412097_H
#define DISPIDATTRIBUTE_T3034412097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DispIdAttribute
struct  DispIdAttribute_t3034412097  : public Attribute_t4043032847
{
public:
	// System.Int32 System.Runtime.InteropServices.DispIdAttribute::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(DispIdAttribute_t3034412097, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPIDATTRIBUTE_T3034412097_H
#ifndef TYPELIBVERSIONATTRIBUTE_T664053944_H
#define TYPELIBVERSIONATTRIBUTE_T664053944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibVersionAttribute
struct  TypeLibVersionAttribute_t664053944  : public Attribute_t4043032847
{
public:
	// System.Int32 System.Runtime.InteropServices.TypeLibVersionAttribute::major
	int32_t ___major_0;
	// System.Int32 System.Runtime.InteropServices.TypeLibVersionAttribute::minor
	int32_t ___minor_1;

public:
	inline static int32_t get_offset_of_major_0() { return static_cast<int32_t>(offsetof(TypeLibVersionAttribute_t664053944, ___major_0)); }
	inline int32_t get_major_0() const { return ___major_0; }
	inline int32_t* get_address_of_major_0() { return &___major_0; }
	inline void set_major_0(int32_t value)
	{
		___major_0 = value;
	}

	inline static int32_t get_offset_of_minor_1() { return static_cast<int32_t>(offsetof(TypeLibVersionAttribute_t664053944, ___minor_1)); }
	inline int32_t get_minor_1() const { return ___minor_1; }
	inline int32_t* get_address_of_minor_1() { return &___minor_1; }
	inline void set_minor_1(int32_t value)
	{
		___minor_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBVERSIONATTRIBUTE_T664053944_H
#ifndef TYPELIBIMPORTCLASSATTRIBUTE_T307393754_H
#define TYPELIBIMPORTCLASSATTRIBUTE_T307393754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibImportClassAttribute
struct  TypeLibImportClassAttribute_t307393754  : public Attribute_t4043032847
{
public:
	// System.String System.Runtime.InteropServices.TypeLibImportClassAttribute::_importClass
	String_t* ____importClass_0;

public:
	inline static int32_t get_offset_of__importClass_0() { return static_cast<int32_t>(offsetof(TypeLibImportClassAttribute_t307393754, ____importClass_0)); }
	inline String_t* get__importClass_0() const { return ____importClass_0; }
	inline String_t** get_address_of__importClass_0() { return &____importClass_0; }
	inline void set__importClass_0(String_t* value)
	{
		____importClass_0 = value;
		Il2CppCodeGenWriteBarrier((&____importClass_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBIMPORTCLASSATTRIBUTE_T307393754_H
#ifndef GCHANDLE_T2441836452_H
#define GCHANDLE_T2441836452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t2441836452 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t2441836452, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T2441836452_H
#ifndef PRESERVESIGATTRIBUTE_T3234900933_H
#define PRESERVESIGATTRIBUTE_T3234900933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.PreserveSigAttribute
struct  PreserveSigAttribute_t3234900933  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESERVESIGATTRIBUTE_T3234900933_H
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
#ifndef COMCOMPATIBLEVERSIONATTRIBUTE_T2219707556_H
#define COMCOMPATIBLEVERSIONATTRIBUTE_T2219707556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComCompatibleVersionAttribute
struct  ComCompatibleVersionAttribute_t2219707556  : public Attribute_t4043032847
{
public:
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::major
	int32_t ___major_0;
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::minor
	int32_t ___minor_1;
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::build
	int32_t ___build_2;
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::revision
	int32_t ___revision_3;

public:
	inline static int32_t get_offset_of_major_0() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t2219707556, ___major_0)); }
	inline int32_t get_major_0() const { return ___major_0; }
	inline int32_t* get_address_of_major_0() { return &___major_0; }
	inline void set_major_0(int32_t value)
	{
		___major_0 = value;
	}

	inline static int32_t get_offset_of_minor_1() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t2219707556, ___minor_1)); }
	inline int32_t get_minor_1() const { return ___minor_1; }
	inline int32_t* get_address_of_minor_1() { return &___minor_1; }
	inline void set_minor_1(int32_t value)
	{
		___minor_1 = value;
	}

	inline static int32_t get_offset_of_build_2() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t2219707556, ___build_2)); }
	inline int32_t get_build_2() const { return ___build_2; }
	inline int32_t* get_address_of_build_2() { return &___build_2; }
	inline void set_build_2(int32_t value)
	{
		___build_2 = value;
	}

	inline static int32_t get_offset_of_revision_3() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t2219707556, ___revision_3)); }
	inline int32_t get_revision_3() const { return ___revision_3; }
	inline int32_t* get_address_of_revision_3() { return &___revision_3; }
	inline void set_revision_3(int32_t value)
	{
		___revision_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMCOMPATIBLEVERSIONATTRIBUTE_T2219707556_H
#ifndef TARGETINVOCATIONEXCEPTION_T3355001966_H
#define TARGETINVOCATIONEXCEPTION_T3355001966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetInvocationException
struct  TargetInvocationException_t3355001966  : public Exception_t3144957912
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETINVOCATIONEXCEPTION_T3355001966_H
#ifndef TARGETPARAMETERCOUNTEXCEPTION_T936775303_H
#define TARGETPARAMETERCOUNTEXCEPTION_T936775303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetParameterCountException
struct  TargetParameterCountException_t936775303  : public Exception_t3144957912
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETPARAMETERCOUNTEXCEPTION_T936775303_H
#ifndef CONTEXTBOUNDOBJECT_T3806040418_H
#define CONTEXTBOUNDOBJECT_T3806040418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ContextBoundObject
struct  ContextBoundObject_t3806040418  : public MarshalByRefObject_t1236449280
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTBOUNDOBJECT_T3806040418_H
#ifndef NEUTRALRESOURCESLANGUAGEATTRIBUTE_T874997446_H
#define NEUTRALRESOURCESLANGUAGEATTRIBUTE_T874997446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NeutralResourcesLanguageAttribute
struct  NeutralResourcesLanguageAttribute_t874997446  : public Attribute_t4043032847
{
public:
	// System.String System.Resources.NeutralResourcesLanguageAttribute::culture
	String_t* ___culture_0;

public:
	inline static int32_t get_offset_of_culture_0() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t874997446, ___culture_0)); }
	inline String_t* get_culture_0() const { return ___culture_0; }
	inline String_t** get_address_of_culture_0() { return &___culture_0; }
	inline void set_culture_0(String_t* value)
	{
		___culture_0 = value;
		Il2CppCodeGenWriteBarrier((&___culture_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEUTRALRESOURCESLANGUAGEATTRIBUTE_T874997446_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	UIntPtr_t  ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline UIntPtr_t  get_Zero_0() const { return ___Zero_0; }
	inline UIntPtr_t * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(UIntPtr_t  value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef RESOURCEINFO_T2024327665_H
#define RESOURCEINFO_T2024327665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceInfo
struct  ResourceInfo_t2024327665 
{
public:
	// System.Int64 System.Resources.ResourceReader/ResourceInfo::ValuePosition
	int64_t ___ValuePosition_0;
	// System.String System.Resources.ResourceReader/ResourceInfo::ResourceName
	String_t* ___ResourceName_1;
	// System.Int32 System.Resources.ResourceReader/ResourceInfo::TypeIndex
	int32_t ___TypeIndex_2;

public:
	inline static int32_t get_offset_of_ValuePosition_0() { return static_cast<int32_t>(offsetof(ResourceInfo_t2024327665, ___ValuePosition_0)); }
	inline int64_t get_ValuePosition_0() const { return ___ValuePosition_0; }
	inline int64_t* get_address_of_ValuePosition_0() { return &___ValuePosition_0; }
	inline void set_ValuePosition_0(int64_t value)
	{
		___ValuePosition_0 = value;
	}

	inline static int32_t get_offset_of_ResourceName_1() { return static_cast<int32_t>(offsetof(ResourceInfo_t2024327665, ___ResourceName_1)); }
	inline String_t* get_ResourceName_1() const { return ___ResourceName_1; }
	inline String_t** get_address_of_ResourceName_1() { return &___ResourceName_1; }
	inline void set_ResourceName_1(String_t* value)
	{
		___ResourceName_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_1), value);
	}

	inline static int32_t get_offset_of_TypeIndex_2() { return static_cast<int32_t>(offsetof(ResourceInfo_t2024327665, ___TypeIndex_2)); }
	inline int32_t get_TypeIndex_2() const { return ___TypeIndex_2; }
	inline int32_t* get_address_of_TypeIndex_2() { return &___TypeIndex_2; }
	inline void set_TypeIndex_2(int32_t value)
	{
		___TypeIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t2024327665_marshaled_pinvoke
{
	int64_t ___ValuePosition_0;
	char* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t2024327665_marshaled_com
{
	int64_t ___ValuePosition_0;
	Il2CppChar* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
#endif // RESOURCEINFO_T2024327665_H
#ifndef RESOURCECACHEITEM_T959158547_H
#define RESOURCECACHEITEM_T959158547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceCacheItem
struct  ResourceCacheItem_t959158547 
{
public:
	// System.String System.Resources.ResourceReader/ResourceCacheItem::ResourceName
	String_t* ___ResourceName_0;
	// System.Object System.Resources.ResourceReader/ResourceCacheItem::ResourceValue
	RuntimeObject * ___ResourceValue_1;

public:
	inline static int32_t get_offset_of_ResourceName_0() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t959158547, ___ResourceName_0)); }
	inline String_t* get_ResourceName_0() const { return ___ResourceName_0; }
	inline String_t** get_address_of_ResourceName_0() { return &___ResourceName_0; }
	inline void set_ResourceName_0(String_t* value)
	{
		___ResourceName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_0), value);
	}

	inline static int32_t get_offset_of_ResourceValue_1() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t959158547, ___ResourceValue_1)); }
	inline RuntimeObject * get_ResourceValue_1() const { return ___ResourceValue_1; }
	inline RuntimeObject ** get_address_of_ResourceValue_1() { return &___ResourceValue_1; }
	inline void set_ResourceValue_1(RuntimeObject * value)
	{
		___ResourceValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t959158547_marshaled_pinvoke
{
	char* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t959158547_marshaled_com
{
	Il2CppChar* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
#endif // RESOURCECACHEITEM_T959158547_H
#ifndef RUNTIMERESOURCESET_T3719045798_H
#define RUNTIMERESOURCESET_T3719045798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.RuntimeResourceSet
struct  RuntimeResourceSet_t3719045798  : public ResourceSet_t1720190569
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMERESOURCESET_T3719045798_H
#ifndef COMDEFAULTINTERFACEATTRIBUTE_T3222702339_H
#define COMDEFAULTINTERFACEATTRIBUTE_T3222702339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
struct  ComDefaultInterfaceAttribute_t3222702339  : public Attribute_t4043032847
{
public:
	// System.Type System.Runtime.InteropServices.ComDefaultInterfaceAttribute::_type
	Type_t * ____type_0;

public:
	inline static int32_t get_offset_of__type_0() { return static_cast<int32_t>(offsetof(ComDefaultInterfaceAttribute_t3222702339, ____type_0)); }
	inline Type_t * get__type_0() const { return ____type_0; }
	inline Type_t ** get_address_of__type_0() { return &____type_0; }
	inline void set__type_0(Type_t * value)
	{
		____type_0 = value;
		Il2CppCodeGenWriteBarrier((&____type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMDEFAULTINTERFACEATTRIBUTE_T3222702339_H
#ifndef SATELLITECONTRACTVERSIONATTRIBUTE_T494146621_H
#define SATELLITECONTRACTVERSIONATTRIBUTE_T494146621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.SatelliteContractVersionAttribute
struct  SatelliteContractVersionAttribute_t494146621  : public Attribute_t4043032847
{
public:
	// System.Version System.Resources.SatelliteContractVersionAttribute::ver
	Version_t2959285725 * ___ver_0;

public:
	inline static int32_t get_offset_of_ver_0() { return static_cast<int32_t>(offsetof(SatelliteContractVersionAttribute_t494146621, ___ver_0)); }
	inline Version_t2959285725 * get_ver_0() const { return ___ver_0; }
	inline Version_t2959285725 ** get_address_of_ver_0() { return &___ver_0; }
	inline void set_ver_0(Version_t2959285725 * value)
	{
		___ver_0 = value;
		Il2CppCodeGenWriteBarrier((&___ver_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SATELLITECONTRACTVERSIONATTRIBUTE_T494146621_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
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
#ifndef STRINGFREEZINGATTRIBUTE_T3928221002_H
#define STRINGFREEZINGATTRIBUTE_T3928221002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.StringFreezingAttribute
struct  StringFreezingAttribute_t3928221002  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGFREEZINGATTRIBUTE_T3928221002_H
#ifndef BESTFITMAPPINGATTRIBUTE_T1432041048_H
#define BESTFITMAPPINGATTRIBUTE_T1432041048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.BestFitMappingAttribute
struct  BestFitMappingAttribute_t1432041048  : public Attribute_t4043032847
{
public:
	// System.Boolean System.Runtime.InteropServices.BestFitMappingAttribute::bfm
	bool ___bfm_0;

public:
	inline static int32_t get_offset_of_bfm_0() { return static_cast<int32_t>(offsetof(BestFitMappingAttribute_t1432041048, ___bfm_0)); }
	inline bool get_bfm_0() const { return ___bfm_0; }
	inline bool* get_address_of_bfm_0() { return &___bfm_0; }
	inline void set_bfm_0(bool value)
	{
		___bfm_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BESTFITMAPPINGATTRIBUTE_T1432041048_H
#ifndef REMOTEACTIVATOR_T2585573514_H
#define REMOTEACTIVATOR_T2585573514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.RemoteActivator
struct  RemoteActivator_t2585573514  : public MarshalByRefObject_t1236449280
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTEACTIVATOR_T2585573514_H
#ifndef CONTEXTATTRIBUTE_T2851210059_H
#define CONTEXTATTRIBUTE_T2851210059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.ContextAttribute
struct  ContextAttribute_t2851210059  : public Attribute_t4043032847
{
public:
	// System.String System.Runtime.Remoting.Contexts.ContextAttribute::AttributeName
	String_t* ___AttributeName_0;

public:
	inline static int32_t get_offset_of_AttributeName_0() { return static_cast<int32_t>(offsetof(ContextAttribute_t2851210059, ___AttributeName_0)); }
	inline String_t* get_AttributeName_0() const { return ___AttributeName_0; }
	inline String_t** get_address_of_AttributeName_0() { return &___AttributeName_0; }
	inline void set_AttributeName_0(String_t* value)
	{
		___AttributeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___AttributeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTATTRIBUTE_T2851210059_H
#ifndef COMPILATIONRELAXATIONSATTRIBUTE_T3971967841_H
#define COMPILATIONRELAXATIONSATTRIBUTE_T3971967841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct  CompilationRelaxationsAttribute_t3971967841  : public Attribute_t4043032847
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::relax
	int32_t ___relax_0;

public:
	inline static int32_t get_offset_of_relax_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t3971967841, ___relax_0)); }
	inline int32_t get_relax_0() const { return ___relax_0; }
	inline int32_t* get_address_of_relax_0() { return &___relax_0; }
	inline void set_relax_0(int32_t value)
	{
		___relax_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILATIONRELAXATIONSATTRIBUTE_T3971967841_H
#ifndef TARGETEXCEPTION_T3942660094_H
#define TARGETEXCEPTION_T3942660094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetException
struct  TargetException_t3942660094  : public Exception_t3144957912
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETEXCEPTION_T3942660094_H
#ifndef CONTEXT_T836690175_H
#define CONTEXT_T836690175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.Context
struct  Context_t836690175  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Remoting.Contexts.Context::domain_id
	int32_t ___domain_id_0;
	// System.Int32 System.Runtime.Remoting.Contexts.Context::context_id
	int32_t ___context_id_1;
	// System.UIntPtr System.Runtime.Remoting.Contexts.Context::static_data
	UIntPtr_t  ___static_data_2;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::server_context_sink_chain
	RuntimeObject* ___server_context_sink_chain_4;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::client_context_sink_chain
	RuntimeObject* ___client_context_sink_chain_5;
	// System.Object[] System.Runtime.Remoting.Contexts.Context::datastore
	ObjectU5BU5D_t2392277051* ___datastore_6;
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.Context::context_properties
	ArrayList_t844188058 * ___context_properties_7;
	// System.Boolean System.Runtime.Remoting.Contexts.Context::frozen
	bool ___frozen_8;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::context_dynamic_properties
	DynamicPropertyCollection_t4099535435 * ___context_dynamic_properties_12;
	// System.Runtime.Remoting.Contexts.ContextCallbackObject System.Runtime.Remoting.Contexts.Context::callback_object
	ContextCallbackObject_t762592508 * ___callback_object_13;

public:
	inline static int32_t get_offset_of_domain_id_0() { return static_cast<int32_t>(offsetof(Context_t836690175, ___domain_id_0)); }
	inline int32_t get_domain_id_0() const { return ___domain_id_0; }
	inline int32_t* get_address_of_domain_id_0() { return &___domain_id_0; }
	inline void set_domain_id_0(int32_t value)
	{
		___domain_id_0 = value;
	}

	inline static int32_t get_offset_of_context_id_1() { return static_cast<int32_t>(offsetof(Context_t836690175, ___context_id_1)); }
	inline int32_t get_context_id_1() const { return ___context_id_1; }
	inline int32_t* get_address_of_context_id_1() { return &___context_id_1; }
	inline void set_context_id_1(int32_t value)
	{
		___context_id_1 = value;
	}

	inline static int32_t get_offset_of_static_data_2() { return static_cast<int32_t>(offsetof(Context_t836690175, ___static_data_2)); }
	inline UIntPtr_t  get_static_data_2() const { return ___static_data_2; }
	inline UIntPtr_t * get_address_of_static_data_2() { return &___static_data_2; }
	inline void set_static_data_2(UIntPtr_t  value)
	{
		___static_data_2 = value;
	}

	inline static int32_t get_offset_of_server_context_sink_chain_4() { return static_cast<int32_t>(offsetof(Context_t836690175, ___server_context_sink_chain_4)); }
	inline RuntimeObject* get_server_context_sink_chain_4() const { return ___server_context_sink_chain_4; }
	inline RuntimeObject** get_address_of_server_context_sink_chain_4() { return &___server_context_sink_chain_4; }
	inline void set_server_context_sink_chain_4(RuntimeObject* value)
	{
		___server_context_sink_chain_4 = value;
		Il2CppCodeGenWriteBarrier((&___server_context_sink_chain_4), value);
	}

	inline static int32_t get_offset_of_client_context_sink_chain_5() { return static_cast<int32_t>(offsetof(Context_t836690175, ___client_context_sink_chain_5)); }
	inline RuntimeObject* get_client_context_sink_chain_5() const { return ___client_context_sink_chain_5; }
	inline RuntimeObject** get_address_of_client_context_sink_chain_5() { return &___client_context_sink_chain_5; }
	inline void set_client_context_sink_chain_5(RuntimeObject* value)
	{
		___client_context_sink_chain_5 = value;
		Il2CppCodeGenWriteBarrier((&___client_context_sink_chain_5), value);
	}

	inline static int32_t get_offset_of_datastore_6() { return static_cast<int32_t>(offsetof(Context_t836690175, ___datastore_6)); }
	inline ObjectU5BU5D_t2392277051* get_datastore_6() const { return ___datastore_6; }
	inline ObjectU5BU5D_t2392277051** get_address_of_datastore_6() { return &___datastore_6; }
	inline void set_datastore_6(ObjectU5BU5D_t2392277051* value)
	{
		___datastore_6 = value;
		Il2CppCodeGenWriteBarrier((&___datastore_6), value);
	}

	inline static int32_t get_offset_of_context_properties_7() { return static_cast<int32_t>(offsetof(Context_t836690175, ___context_properties_7)); }
	inline ArrayList_t844188058 * get_context_properties_7() const { return ___context_properties_7; }
	inline ArrayList_t844188058 ** get_address_of_context_properties_7() { return &___context_properties_7; }
	inline void set_context_properties_7(ArrayList_t844188058 * value)
	{
		___context_properties_7 = value;
		Il2CppCodeGenWriteBarrier((&___context_properties_7), value);
	}

	inline static int32_t get_offset_of_frozen_8() { return static_cast<int32_t>(offsetof(Context_t836690175, ___frozen_8)); }
	inline bool get_frozen_8() const { return ___frozen_8; }
	inline bool* get_address_of_frozen_8() { return &___frozen_8; }
	inline void set_frozen_8(bool value)
	{
		___frozen_8 = value;
	}

	inline static int32_t get_offset_of_context_dynamic_properties_12() { return static_cast<int32_t>(offsetof(Context_t836690175, ___context_dynamic_properties_12)); }
	inline DynamicPropertyCollection_t4099535435 * get_context_dynamic_properties_12() const { return ___context_dynamic_properties_12; }
	inline DynamicPropertyCollection_t4099535435 ** get_address_of_context_dynamic_properties_12() { return &___context_dynamic_properties_12; }
	inline void set_context_dynamic_properties_12(DynamicPropertyCollection_t4099535435 * value)
	{
		___context_dynamic_properties_12 = value;
		Il2CppCodeGenWriteBarrier((&___context_dynamic_properties_12), value);
	}

	inline static int32_t get_offset_of_callback_object_13() { return static_cast<int32_t>(offsetof(Context_t836690175, ___callback_object_13)); }
	inline ContextCallbackObject_t762592508 * get_callback_object_13() const { return ___callback_object_13; }
	inline ContextCallbackObject_t762592508 ** get_address_of_callback_object_13() { return &___callback_object_13; }
	inline void set_callback_object_13(ContextCallbackObject_t762592508 * value)
	{
		___callback_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___callback_object_13), value);
	}
};

struct Context_t836690175_StaticFields
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::default_server_context_sink
	RuntimeObject* ___default_server_context_sink_3;
	// System.Int32 System.Runtime.Remoting.Contexts.Context::global_count
	int32_t ___global_count_9;
	// System.Collections.Hashtable System.Runtime.Remoting.Contexts.Context::namedSlots
	Hashtable_t2604207785 * ___namedSlots_10;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::global_dynamic_properties
	DynamicPropertyCollection_t4099535435 * ___global_dynamic_properties_11;

public:
	inline static int32_t get_offset_of_default_server_context_sink_3() { return static_cast<int32_t>(offsetof(Context_t836690175_StaticFields, ___default_server_context_sink_3)); }
	inline RuntimeObject* get_default_server_context_sink_3() const { return ___default_server_context_sink_3; }
	inline RuntimeObject** get_address_of_default_server_context_sink_3() { return &___default_server_context_sink_3; }
	inline void set_default_server_context_sink_3(RuntimeObject* value)
	{
		___default_server_context_sink_3 = value;
		Il2CppCodeGenWriteBarrier((&___default_server_context_sink_3), value);
	}

	inline static int32_t get_offset_of_global_count_9() { return static_cast<int32_t>(offsetof(Context_t836690175_StaticFields, ___global_count_9)); }
	inline int32_t get_global_count_9() const { return ___global_count_9; }
	inline int32_t* get_address_of_global_count_9() { return &___global_count_9; }
	inline void set_global_count_9(int32_t value)
	{
		___global_count_9 = value;
	}

	inline static int32_t get_offset_of_namedSlots_10() { return static_cast<int32_t>(offsetof(Context_t836690175_StaticFields, ___namedSlots_10)); }
	inline Hashtable_t2604207785 * get_namedSlots_10() const { return ___namedSlots_10; }
	inline Hashtable_t2604207785 ** get_address_of_namedSlots_10() { return &___namedSlots_10; }
	inline void set_namedSlots_10(Hashtable_t2604207785 * value)
	{
		___namedSlots_10 = value;
		Il2CppCodeGenWriteBarrier((&___namedSlots_10), value);
	}

	inline static int32_t get_offset_of_global_dynamic_properties_11() { return static_cast<int32_t>(offsetof(Context_t836690175_StaticFields, ___global_dynamic_properties_11)); }
	inline DynamicPropertyCollection_t4099535435 * get_global_dynamic_properties_11() const { return ___global_dynamic_properties_11; }
	inline DynamicPropertyCollection_t4099535435 ** get_address_of_global_dynamic_properties_11() { return &___global_dynamic_properties_11; }
	inline void set_global_dynamic_properties_11(DynamicPropertyCollection_t4099535435 * value)
	{
		___global_dynamic_properties_11 = value;
		Il2CppCodeGenWriteBarrier((&___global_dynamic_properties_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXT_T836690175_H
#ifndef CONTEXTCALLBACKOBJECT_T762592508_H
#define CONTEXTCALLBACKOBJECT_T762592508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.ContextCallbackObject
struct  ContextCallbackObject_t762592508  : public ContextBoundObject_t3806040418
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTCALLBACKOBJECT_T762592508_H
#ifndef RUNTIMETYPEHANDLE_T3959358908_H
#define RUNTIMETYPEHANDLE_T3959358908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3959358908 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3959358908, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3959358908_H
#ifndef UNMANAGEDTYPE_T1735154090_H
#define UNMANAGEDTYPE_T1735154090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t1735154090 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t1735154090, ___value___1)); }
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
#endif // UNMANAGEDTYPE_T1735154090_H
#ifndef CONSISTENCY_T1232136939_H
#define CONSISTENCY_T1232136939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.Consistency
struct  Consistency_t1232136939 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Consistency::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Consistency_t1232136939, ___value___1)); }
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
#endif // CONSISTENCY_T1232136939_H
#ifndef COMPILATIONRELAXATIONS_T240709021_H
#define COMPILATIONRELAXATIONS_T240709021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxations
struct  CompilationRelaxations_t240709021 
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxations::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompilationRelaxations_t240709021, ___value___1)); }
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
#endif // COMPILATIONRELAXATIONS_T240709021_H
#ifndef URLATTRIBUTE_T87163068_H
#define URLATTRIBUTE_T87163068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.UrlAttribute
struct  UrlAttribute_t87163068  : public ContextAttribute_t2851210059
{
public:
	// System.String System.Runtime.Remoting.Activation.UrlAttribute::url
	String_t* ___url_1;

public:
	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(UrlAttribute_t87163068, ___url_1)); }
	inline String_t* get_url_1() const { return ___url_1; }
	inline String_t** get_address_of_url_1() { return &___url_1; }
	inline void set_url_1(String_t* value)
	{
		___url_1 = value;
		Il2CppCodeGenWriteBarrier((&___url_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URLATTRIBUTE_T87163068_H
#ifndef CALLINGCONVENTION_T1481587516_H
#define CALLINGCONVENTION_T1481587516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t1481587516 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConvention_t1481587516, ___value___1)); }
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
#endif // CALLINGCONVENTION_T1481587516_H
#ifndef CHARSET_T28244681_H
#define CHARSET_T28244681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CharSet
struct  CharSet_t28244681 
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharSet_t28244681, ___value___1)); }
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
#endif // CHARSET_T28244681_H
#ifndef PREDEFINEDRESOURCETYPE_T2283881198_H
#define PREDEFINEDRESOURCETYPE_T2283881198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.PredefinedResourceType
struct  PredefinedResourceType_t2283881198 
{
public:
	// System.Int32 System.Resources.PredefinedResourceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PredefinedResourceType_t2283881198, ___value___1)); }
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
#endif // PREDEFINEDRESOURCETYPE_T2283881198_H
#ifndef CER_T2416746981_H
#define CER_T2416746981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.Cer
struct  Cer_t2416746981 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Cer::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Cer_t2416746981, ___value___1)); }
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
#endif // CER_T2416746981_H
#ifndef CLASSINTERFACETYPE_T58996256_H
#define CLASSINTERFACETYPE_T58996256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceType
struct  ClassInterfaceType_t58996256 
{
public:
	// System.Int32 System.Runtime.InteropServices.ClassInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ClassInterfaceType_t58996256, ___value___1)); }
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
#endif // CLASSINTERFACETYPE_T58996256_H
#ifndef EXTERNALEXCEPTION_T1149957655_H
#define EXTERNALEXCEPTION_T1149957655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t1149957655  : public SystemException_t1180164699
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T1149957655_H
#ifndef GCHANDLETYPE_T2675944327_H
#define GCHANDLETYPE_T2675944327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t2675944327 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GCHandleType_t2675944327, ___value___1)); }
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
#endif // GCHANDLETYPE_T2675944327_H
#ifndef BINDINGFLAGS_T1060091263_H
#define BINDINGFLAGS_T1060091263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t1060091263 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t1060091263, ___value___1)); }
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
#endif // BINDINGFLAGS_T1060091263_H
#ifndef MARSHALDIRECTIVEEXCEPTION_T619274961_H
#define MARSHALDIRECTIVEEXCEPTION_T619274961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.MarshalDirectiveException
struct  MarshalDirectiveException_t619274961  : public SystemException_t1180164699
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALDIRECTIVEEXCEPTION_T619274961_H
#ifndef SAFEHANDLE_T3795463195_H
#define SAFEHANDLE_T3795463195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t3795463195  : public CriticalFinalizerObject_t2225943581
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	IntPtr_t ___handle_0;
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::invalid_handle_value
	IntPtr_t ___invalid_handle_value_1;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::refcount
	int32_t ___refcount_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::owns_handle
	bool ___owns_handle_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t3795463195, ___handle_0)); }
	inline IntPtr_t get_handle_0() const { return ___handle_0; }
	inline IntPtr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(IntPtr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_invalid_handle_value_1() { return static_cast<int32_t>(offsetof(SafeHandle_t3795463195, ___invalid_handle_value_1)); }
	inline IntPtr_t get_invalid_handle_value_1() const { return ___invalid_handle_value_1; }
	inline IntPtr_t* get_address_of_invalid_handle_value_1() { return &___invalid_handle_value_1; }
	inline void set_invalid_handle_value_1(IntPtr_t value)
	{
		___invalid_handle_value_1 = value;
	}

	inline static int32_t get_offset_of_refcount_2() { return static_cast<int32_t>(offsetof(SafeHandle_t3795463195, ___refcount_2)); }
	inline int32_t get_refcount_2() const { return ___refcount_2; }
	inline int32_t* get_address_of_refcount_2() { return &___refcount_2; }
	inline void set_refcount_2(int32_t value)
	{
		___refcount_2 = value;
	}

	inline static int32_t get_offset_of_owns_handle_3() { return static_cast<int32_t>(offsetof(SafeHandle_t3795463195, ___owns_handle_3)); }
	inline bool get_owns_handle_3() const { return ___owns_handle_3; }
	inline bool* get_address_of_owns_handle_3() { return &___owns_handle_3; }
	inline void set_owns_handle_3(bool value)
	{
		___owns_handle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLE_T3795463195_H
#ifndef TYPEATTRIBUTES_T1081649250_H
#define TYPEATTRIBUTES_T1081649250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeAttributes
struct  TypeAttributes_t1081649250 
{
public:
	// System.Int32 System.Reflection.TypeAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeAttributes_t1081649250, ___value___1)); }
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
#endif // TYPEATTRIBUTES_T1081649250_H
#ifndef COMINTERFACETYPE_T1861789584_H
#define COMINTERFACETYPE_T1861789584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComInterfaceType
struct  ComInterfaceType_t1861789584 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComInterfaceType_t1861789584, ___value___1)); }
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
#endif // COMINTERFACETYPE_T1861789584_H
#ifndef LOADHINT_T2753892286_H
#define LOADHINT_T2753892286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.LoadHint
struct  LoadHint_t2753892286 
{
public:
	// System.Int32 System.Runtime.CompilerServices.LoadHint::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadHint_t2753892286, ___value___1)); }
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
#endif // LOADHINT_T2753892286_H
#ifndef DEFAULTDEPENDENCYATTRIBUTE_T1811546569_H
#define DEFAULTDEPENDENCYATTRIBUTE_T1811546569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DefaultDependencyAttribute
struct  DefaultDependencyAttribute_t1811546569  : public Attribute_t4043032847
{
public:
	// System.Runtime.CompilerServices.LoadHint System.Runtime.CompilerServices.DefaultDependencyAttribute::hint
	int32_t ___hint_0;

public:
	inline static int32_t get_offset_of_hint_0() { return static_cast<int32_t>(offsetof(DefaultDependencyAttribute_t1811546569, ___hint_0)); }
	inline int32_t get_hint_0() const { return ___hint_0; }
	inline int32_t* get_address_of_hint_0() { return &___hint_0; }
	inline void set_hint_0(int32_t value)
	{
		___hint_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTDEPENDENCYATTRIBUTE_T1811546569_H
#ifndef COMEXCEPTION_T505866380_H
#define COMEXCEPTION_T505866380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.COMException
struct  COMException_t505866380  : public ExternalException_t1149957655
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMEXCEPTION_T505866380_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3959358908  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3959358908  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3959358908 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3959358908  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t730564648* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t4050762550 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t4050762550 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t4050762550 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t730564648* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t730564648** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t730564648* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t4050762550 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t4050762550 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t4050762550 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t4050762550 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t4050762550 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t4050762550 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t4050762550 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t4050762550 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t4050762550 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef CLASSINTERFACEATTRIBUTE_T1302200490_H
#define CLASSINTERFACEATTRIBUTE_T1302200490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceAttribute
struct  ClassInterfaceAttribute_t1302200490  : public Attribute_t4043032847
{
public:
	// System.Runtime.InteropServices.ClassInterfaceType System.Runtime.InteropServices.ClassInterfaceAttribute::ciType
	int32_t ___ciType_0;

public:
	inline static int32_t get_offset_of_ciType_0() { return static_cast<int32_t>(offsetof(ClassInterfaceAttribute_t1302200490, ___ciType_0)); }
	inline int32_t get_ciType_0() const { return ___ciType_0; }
	inline int32_t* get_address_of_ciType_0() { return &___ciType_0; }
	inline void set_ciType_0(int32_t value)
	{
		___ciType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSINTERFACEATTRIBUTE_T1302200490_H
#ifndef UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T1080997381_H
#define UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T1080997381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
struct  UnmanagedFunctionPointerAttribute_t1080997381  : public Attribute_t4043032847
{
public:
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::call_conv
	int32_t ___call_conv_0;

public:
	inline static int32_t get_offset_of_call_conv_0() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t1080997381, ___call_conv_0)); }
	inline int32_t get_call_conv_0() const { return ___call_conv_0; }
	inline int32_t* get_address_of_call_conv_0() { return &___call_conv_0; }
	inline void set_call_conv_0(int32_t value)
	{
		___call_conv_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T1080997381_H
#ifndef RELIABILITYCONTRACTATTRIBUTE_T2218481874_H
#define RELIABILITYCONTRACTATTRIBUTE_T2218481874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
struct  ReliabilityContractAttribute_t2218481874  : public Attribute_t4043032847
{
public:
	// System.Runtime.ConstrainedExecution.Consistency System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::consistency
	int32_t ___consistency_0;
	// System.Runtime.ConstrainedExecution.Cer System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::cer
	int32_t ___cer_1;

public:
	inline static int32_t get_offset_of_consistency_0() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t2218481874, ___consistency_0)); }
	inline int32_t get_consistency_0() const { return ___consistency_0; }
	inline int32_t* get_address_of_consistency_0() { return &___consistency_0; }
	inline void set_consistency_0(int32_t value)
	{
		___consistency_0 = value;
	}

	inline static int32_t get_offset_of_cer_1() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t2218481874, ___cer_1)); }
	inline int32_t get_cer_1() const { return ___cer_1; }
	inline int32_t* get_address_of_cer_1() { return &___cer_1; }
	inline void set_cer_1(int32_t value)
	{
		___cer_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELIABILITYCONTRACTATTRIBUTE_T2218481874_H
#ifndef INTERFACETYPEATTRIBUTE_T3190428354_H
#define INTERFACETYPEATTRIBUTE_T3190428354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InterfaceTypeAttribute
struct  InterfaceTypeAttribute_t3190428354  : public Attribute_t4043032847
{
public:
	// System.Runtime.InteropServices.ComInterfaceType System.Runtime.InteropServices.InterfaceTypeAttribute::intType
	int32_t ___intType_0;

public:
	inline static int32_t get_offset_of_intType_0() { return static_cast<int32_t>(offsetof(InterfaceTypeAttribute_t3190428354, ___intType_0)); }
	inline int32_t get_intType_0() const { return ___intType_0; }
	inline int32_t* get_address_of_intType_0() { return &___intType_0; }
	inline void set_intType_0(int32_t value)
	{
		___intType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERFACETYPEATTRIBUTE_T3190428354_H
#ifndef TYPEDELEGATOR_T3731066942_H
#define TYPEDELEGATOR_T3731066942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeDelegator
struct  TypeDelegator_t3731066942  : public Type_t
{
public:
	// System.Type System.Reflection.TypeDelegator::typeImpl
	Type_t * ___typeImpl_8;

public:
	inline static int32_t get_offset_of_typeImpl_8() { return static_cast<int32_t>(offsetof(TypeDelegator_t3731066942, ___typeImpl_8)); }
	inline Type_t * get_typeImpl_8() const { return ___typeImpl_8; }
	inline Type_t ** get_address_of_typeImpl_8() { return &___typeImpl_8; }
	inline void set_typeImpl_8(Type_t * value)
	{
		___typeImpl_8 = value;
		Il2CppCodeGenWriteBarrier((&___typeImpl_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDELEGATOR_T3731066942_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize400 = { sizeof (TargetException_t3942660094), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize401 = { sizeof (TargetInvocationException_t3355001966), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize402 = { sizeof (TargetParameterCountException_t936775303), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize403 = { sizeof (TypeAttributes_t1081649250)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable403[32] = 
{
	TypeAttributes_t1081649250::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize404 = { sizeof (TypeDelegator_t3731066942), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable404[1] = 
{
	TypeDelegator_t3731066942::get_offset_of_typeImpl_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize405 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize406 = { sizeof (NeutralResourcesLanguageAttribute_t874997446), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable406[1] = 
{
	NeutralResourcesLanguageAttribute_t874997446::get_offset_of_culture_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize407 = { sizeof (ResourceManager_t2429136511), -1, sizeof(ResourceManager_t2429136511_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable407[5] = 
{
	ResourceManager_t2429136511_StaticFields::get_offset_of_ResourceCache_0(),
	ResourceManager_t2429136511_StaticFields::get_offset_of_NonExistent_1(),
	ResourceManager_t2429136511_StaticFields::get_offset_of_HeaderVersionNumber_2(),
	ResourceManager_t2429136511_StaticFields::get_offset_of_MagicNumber_3(),
	ResourceManager_t2429136511::get_offset_of_resourceSetType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize408 = { sizeof (PredefinedResourceType_t2283881198)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable408[21] = 
{
	PredefinedResourceType_t2283881198::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize409 = { sizeof (ResourceReader_t299290609), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable409[13] = 
{
	ResourceReader_t299290609::get_offset_of_reader_0(),
	ResourceReader_t299290609::get_offset_of_readerLock_1(),
	ResourceReader_t299290609::get_offset_of_formatter_2(),
	ResourceReader_t299290609::get_offset_of_resourceCount_3(),
	ResourceReader_t299290609::get_offset_of_typeCount_4(),
	ResourceReader_t299290609::get_offset_of_typeNames_5(),
	ResourceReader_t299290609::get_offset_of_hashes_6(),
	ResourceReader_t299290609::get_offset_of_infos_7(),
	ResourceReader_t299290609::get_offset_of_dataSectionOffset_8(),
	ResourceReader_t299290609::get_offset_of_nameSectionOffset_9(),
	ResourceReader_t299290609::get_offset_of_resource_ver_10(),
	ResourceReader_t299290609::get_offset_of_cache_11(),
	ResourceReader_t299290609::get_offset_of_cache_lock_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize410 = { sizeof (ResourceInfo_t2024327665)+ sizeof (RuntimeObject), sizeof(ResourceInfo_t2024327665_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable410[3] = 
{
	ResourceInfo_t2024327665::get_offset_of_ValuePosition_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t2024327665::get_offset_of_ResourceName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t2024327665::get_offset_of_TypeIndex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize411 = { sizeof (ResourceCacheItem_t959158547)+ sizeof (RuntimeObject), sizeof(ResourceCacheItem_t959158547_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable411[2] = 
{
	ResourceCacheItem_t959158547::get_offset_of_ResourceName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceCacheItem_t959158547::get_offset_of_ResourceValue_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize412 = { sizeof (ResourceEnumerator_t2986384162), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable412[3] = 
{
	ResourceEnumerator_t2986384162::get_offset_of_reader_0(),
	ResourceEnumerator_t2986384162::get_offset_of_index_1(),
	ResourceEnumerator_t2986384162::get_offset_of_finished_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize413 = { sizeof (ResourceSet_t1720190569), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable413[4] = 
{
	ResourceSet_t1720190569::get_offset_of_Reader_0(),
	ResourceSet_t1720190569::get_offset_of_Table_1(),
	ResourceSet_t1720190569::get_offset_of_resources_read_2(),
	ResourceSet_t1720190569::get_offset_of_disposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize414 = { sizeof (RuntimeResourceSet_t3719045798), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize415 = { sizeof (SatelliteContractVersionAttribute_t494146621), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable415[1] = 
{
	SatelliteContractVersionAttribute_t494146621::get_offset_of_ver_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize416 = { sizeof (CompilationRelaxations_t240709021)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable416[2] = 
{
	CompilationRelaxations_t240709021::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize417 = { sizeof (CompilationRelaxationsAttribute_t3971967841), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable417[1] = 
{
	CompilationRelaxationsAttribute_t3971967841::get_offset_of_relax_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize418 = { sizeof (DefaultDependencyAttribute_t1811546569), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable418[1] = 
{
	DefaultDependencyAttribute_t1811546569::get_offset_of_hint_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize419 = { sizeof (IsVolatile_t601190913), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize420 = { sizeof (LoadHint_t2753892286)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable420[4] = 
{
	LoadHint_t2753892286::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize421 = { sizeof (StringFreezingAttribute_t3928221002), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize422 = { sizeof (Cer_t2416746981)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable422[4] = 
{
	Cer_t2416746981::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize423 = { sizeof (Consistency_t1232136939)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable423[5] = 
{
	Consistency_t1232136939::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize424 = { sizeof (CriticalFinalizerObject_t2225943581), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize425 = { sizeof (ReliabilityContractAttribute_t2218481874), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable425[2] = 
{
	ReliabilityContractAttribute_t2218481874::get_offset_of_consistency_0(),
	ReliabilityContractAttribute_t2218481874::get_offset_of_cer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize426 = { sizeof (ActivationArguments_t1384342744), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize427 = { sizeof (BestFitMappingAttribute_t1432041048), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable427[1] = 
{
	BestFitMappingAttribute_t1432041048::get_offset_of_bfm_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize428 = { sizeof (COMException_t505866380), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize429 = { sizeof (CallingConvention_t1481587516)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable429[6] = 
{
	CallingConvention_t1481587516::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize430 = { sizeof (CharSet_t28244681)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable430[5] = 
{
	CharSet_t28244681::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize431 = { sizeof (ClassInterfaceAttribute_t1302200490), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable431[1] = 
{
	ClassInterfaceAttribute_t1302200490::get_offset_of_ciType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize432 = { sizeof (ClassInterfaceType_t58996256)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable432[4] = 
{
	ClassInterfaceType_t58996256::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize433 = { sizeof (ComCompatibleVersionAttribute_t2219707556), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable433[4] = 
{
	ComCompatibleVersionAttribute_t2219707556::get_offset_of_major_0(),
	ComCompatibleVersionAttribute_t2219707556::get_offset_of_minor_1(),
	ComCompatibleVersionAttribute_t2219707556::get_offset_of_build_2(),
	ComCompatibleVersionAttribute_t2219707556::get_offset_of_revision_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize434 = { sizeof (ComDefaultInterfaceAttribute_t3222702339), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable434[1] = 
{
	ComDefaultInterfaceAttribute_t3222702339::get_offset_of__type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize435 = { sizeof (ComInterfaceType_t1861789584)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable435[4] = 
{
	ComInterfaceType_t1861789584::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize436 = { sizeof (DispIdAttribute_t3034412097), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable436[1] = 
{
	DispIdAttribute_t3034412097::get_offset_of_id_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize437 = { sizeof (ErrorWrapper_t793257585), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable437[1] = 
{
	ErrorWrapper_t793257585::get_offset_of_errorCode_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize438 = { sizeof (ExternalException_t1149957655), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize439 = { sizeof (GCHandle_t2441836452)+ sizeof (RuntimeObject), sizeof(GCHandle_t2441836452 ), 0, 0 };
extern const int32_t g_FieldOffsetTable439[1] = 
{
	GCHandle_t2441836452::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize440 = { sizeof (GCHandleType_t2675944327)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable440[5] = 
{
	GCHandleType_t2675944327::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize441 = { sizeof (InterfaceTypeAttribute_t3190428354), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable441[1] = 
{
	InterfaceTypeAttribute_t3190428354::get_offset_of_intType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize442 = { sizeof (Marshal_t2985855523), -1, sizeof(Marshal_t2985855523_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable442[2] = 
{
	Marshal_t2985855523_StaticFields::get_offset_of_SystemMaxDBCSCharSize_0(),
	Marshal_t2985855523_StaticFields::get_offset_of_SystemDefaultCharSize_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize443 = { sizeof (MarshalDirectiveException_t619274961), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable443[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize444 = { sizeof (PreserveSigAttribute_t3234900933), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize445 = { sizeof (SafeHandle_t3795463195), sizeof(void*), 0, 0 };
extern const int32_t g_FieldOffsetTable445[4] = 
{
	SafeHandle_t3795463195::get_offset_of_handle_0(),
	SafeHandle_t3795463195::get_offset_of_invalid_handle_value_1(),
	SafeHandle_t3795463195::get_offset_of_refcount_2(),
	SafeHandle_t3795463195::get_offset_of_owns_handle_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize446 = { sizeof (TypeLibImportClassAttribute_t307393754), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable446[1] = 
{
	TypeLibImportClassAttribute_t307393754::get_offset_of__importClass_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize447 = { sizeof (TypeLibVersionAttribute_t664053944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable447[2] = 
{
	TypeLibVersionAttribute_t664053944::get_offset_of_major_0(),
	TypeLibVersionAttribute_t664053944::get_offset_of_minor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize448 = { sizeof (UnmanagedFunctionPointerAttribute_t1080997381), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable448[1] = 
{
	UnmanagedFunctionPointerAttribute_t1080997381::get_offset_of_call_conv_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize449 = { sizeof (UnmanagedType_t1735154090)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable449[36] = 
{
	UnmanagedType_t1735154090::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize450 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize451 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize452 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize453 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize454 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize455 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize456 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize457 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize458 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize459 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize460 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize461 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize462 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize463 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize464 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize465 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize466 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize467 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize468 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize469 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize470 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize471 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize472 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize473 = { sizeof (ActivationServices_t2056628617), -1, sizeof(ActivationServices_t2056628617_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable473[1] = 
{
	ActivationServices_t2056628617_StaticFields::get_offset_of__constructionActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize474 = { sizeof (AppDomainLevelActivator_t148467324), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable474[2] = 
{
	AppDomainLevelActivator_t148467324::get_offset_of__activationUrl_0(),
	AppDomainLevelActivator_t148467324::get_offset_of__next_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize475 = { sizeof (ConstructionLevelActivator_t841357401), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize476 = { sizeof (ContextLevelActivator_t1572131159), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable476[1] = 
{
	ContextLevelActivator_t1572131159::get_offset_of_m_NextActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize477 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize478 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize479 = { sizeof (RemoteActivator_t2585573514), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize480 = { sizeof (UrlAttribute_t87163068), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable480[1] = 
{
	UrlAttribute_t87163068::get_offset_of_url_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize481 = { sizeof (ChannelInfo_t2074885633), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable481[1] = 
{
	ChannelInfo_t2074885633::get_offset_of_channelData_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize482 = { sizeof (ChannelServices_t161072159), -1, sizeof(ChannelServices_t161072159_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable482[5] = 
{
	ChannelServices_t161072159_StaticFields::get_offset_of_registeredChannels_0(),
	ChannelServices_t161072159_StaticFields::get_offset_of_delayedClientChannels_1(),
	ChannelServices_t161072159_StaticFields::get_offset_of__crossContextSink_2(),
	ChannelServices_t161072159_StaticFields::get_offset_of_CrossContextUrl_3(),
	ChannelServices_t161072159_StaticFields::get_offset_of_oldStartModeTypes_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize483 = { sizeof (CrossAppDomainData_t666260977), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable483[3] = 
{
	CrossAppDomainData_t666260977::get_offset_of__ContextID_0(),
	CrossAppDomainData_t666260977::get_offset_of__DomainID_1(),
	CrossAppDomainData_t666260977::get_offset_of__processGuid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize484 = { sizeof (CrossAppDomainChannel_t3834454133), -1, sizeof(CrossAppDomainChannel_t3834454133_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable484[1] = 
{
	CrossAppDomainChannel_t3834454133_StaticFields::get_offset_of_s_lock_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize485 = { sizeof (CrossAppDomainSink_t3015081233), -1, sizeof(CrossAppDomainSink_t3015081233_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable485[3] = 
{
	CrossAppDomainSink_t3015081233_StaticFields::get_offset_of_s_sinks_0(),
	CrossAppDomainSink_t3015081233_StaticFields::get_offset_of_processMessageMethod_1(),
	CrossAppDomainSink_t3015081233::get_offset_of__domainID_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize486 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize487 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize488 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize489 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize490 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize491 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize492 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize493 = { sizeof (SinkProviderData_t3416631570), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable493[3] = 
{
	SinkProviderData_t3416631570::get_offset_of_sinkName_0(),
	SinkProviderData_t3416631570::get_offset_of_children_1(),
	SinkProviderData_t3416631570::get_offset_of_properties_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize494 = { sizeof (Context_t836690175), -1, sizeof(Context_t836690175_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable494[14] = 
{
	Context_t836690175::get_offset_of_domain_id_0(),
	Context_t836690175::get_offset_of_context_id_1(),
	Context_t836690175::get_offset_of_static_data_2(),
	Context_t836690175_StaticFields::get_offset_of_default_server_context_sink_3(),
	Context_t836690175::get_offset_of_server_context_sink_chain_4(),
	Context_t836690175::get_offset_of_client_context_sink_chain_5(),
	Context_t836690175::get_offset_of_datastore_6(),
	Context_t836690175::get_offset_of_context_properties_7(),
	Context_t836690175::get_offset_of_frozen_8(),
	Context_t836690175_StaticFields::get_offset_of_global_count_9(),
	Context_t836690175_StaticFields::get_offset_of_namedSlots_10(),
	Context_t836690175_StaticFields::get_offset_of_global_dynamic_properties_11(),
	Context_t836690175::get_offset_of_context_dynamic_properties_12(),
	Context_t836690175::get_offset_of_callback_object_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize495 = { sizeof (DynamicPropertyCollection_t4099535435), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable495[1] = 
{
	DynamicPropertyCollection_t4099535435::get_offset_of__properties_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize496 = { sizeof (DynamicPropertyReg_t1475592665), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable496[2] = 
{
	DynamicPropertyReg_t1475592665::get_offset_of_Property_0(),
	DynamicPropertyReg_t1475592665::get_offset_of_Sink_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize497 = { sizeof (ContextCallbackObject_t762592508), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize498 = { sizeof (ContextAttribute_t2851210059), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable498[1] = 
{
	ContextAttribute_t2851210059::get_offset_of_AttributeName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize499 = { sizeof (CrossContextChannel_t516326787), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
