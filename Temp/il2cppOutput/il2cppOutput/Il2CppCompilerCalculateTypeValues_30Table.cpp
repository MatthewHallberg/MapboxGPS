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
// System.String[]
struct StringU5BU5D_t3162382152;
// UnityEngine.ILogger
struct ILogger_t2836435234;
// UnityEngine.Application/LowMemoryCallback
struct LowMemoryCallback_t2407671705;
// UnityEngine.Application/LogCallback
struct LogCallback_t2708451746;
// UnityEngine.Events.UnityAction
struct UnityAction_t975035011;
// UnityEngine.Gyroscope
struct Gyroscope_t854707766;
// UnityEngine.LocationService
struct LocationService_t490144105;
// UnityEngine.Compass
struct Compass_t3377430827;
// System.Xml.Linq.XNode
struct XNode_t2780391442;
// System.Collections.IEnumerator
struct IEnumerator_t2577231953;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t2452659249;
// System.Xml.Linq.XContainer
struct XContainer_t924164084;
// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XNamespace>
struct Dictionary_2_t4088293610;
// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XName>
struct Dictionary_2_t1499339004;
// System.Xml.Linq.XNamespace
struct XNamespace_t3902556772;
// System.Xml.Linq.XElement
struct XElement_t4188750518;
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute>
struct IEnumerator_1_t1487390902;
// System.Xml.Linq.XAttribute
struct XAttribute_t584204258;
// System.Char[]
struct CharU5BU5D_t1565992178;
// System.Void
struct Void_t3045135636;
// System.Xml.Linq.XNodeEqualityComparer
struct XNodeEqualityComparer_t3883418371;
// System.Xml.Linq.XNodeDocumentOrderComparer
struct XNodeDocumentOrderComparer_t830105129;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1857717760;
// UnityEngine.CullingGroup/StateChanged
struct StateChanged_t1214506628;
// UnityEngine.Display[]
struct DisplayU5BU5D_t3947932131;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t2504994180;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement>
struct IEnumerable_1_t1643560477;
// System.Xml.Linq.XName
struct XName_t1313602166;
// System.Xml.Linq.XDeclaration
struct XDeclaration_t791999680;
// System.IAsyncResult
struct IAsyncResult_t1380204350;
// System.AsyncCallback
struct AsyncCallback_t3881358540;
// UnityEngine.Camera
struct Camera_t3598185681;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t2234510627;




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
#ifndef U3CMODULEU3E_T1335858004_H
#define U3CMODULEU3E_T1335858004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1335858004 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T1335858004_H
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
#ifndef CURSOR_T2811534235_H
#define CURSOR_T2811534235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Cursor
struct  Cursor_t2811534235  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURSOR_T2811534235_H
#ifndef HOSTDATA_T1798681486_H
#define HOSTDATA_T1798681486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HostData
struct  HostData_t1798681486  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.HostData::m_Nat
	int32_t ___m_Nat_0;
	// System.String UnityEngine.HostData::m_GameType
	String_t* ___m_GameType_1;
	// System.String UnityEngine.HostData::m_GameName
	String_t* ___m_GameName_2;
	// System.Int32 UnityEngine.HostData::m_ConnectedPlayers
	int32_t ___m_ConnectedPlayers_3;
	// System.Int32 UnityEngine.HostData::m_PlayerLimit
	int32_t ___m_PlayerLimit_4;
	// System.String[] UnityEngine.HostData::m_IP
	StringU5BU5D_t3162382152* ___m_IP_5;
	// System.Int32 UnityEngine.HostData::m_Port
	int32_t ___m_Port_6;
	// System.Int32 UnityEngine.HostData::m_PasswordProtected
	int32_t ___m_PasswordProtected_7;
	// System.String UnityEngine.HostData::m_Comment
	String_t* ___m_Comment_8;
	// System.String UnityEngine.HostData::m_GUID
	String_t* ___m_GUID_9;

public:
	inline static int32_t get_offset_of_m_Nat_0() { return static_cast<int32_t>(offsetof(HostData_t1798681486, ___m_Nat_0)); }
	inline int32_t get_m_Nat_0() const { return ___m_Nat_0; }
	inline int32_t* get_address_of_m_Nat_0() { return &___m_Nat_0; }
	inline void set_m_Nat_0(int32_t value)
	{
		___m_Nat_0 = value;
	}

	inline static int32_t get_offset_of_m_GameType_1() { return static_cast<int32_t>(offsetof(HostData_t1798681486, ___m_GameType_1)); }
	inline String_t* get_m_GameType_1() const { return ___m_GameType_1; }
	inline String_t** get_address_of_m_GameType_1() { return &___m_GameType_1; }
	inline void set_m_GameType_1(String_t* value)
	{
		___m_GameType_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameType_1), value);
	}

	inline static int32_t get_offset_of_m_GameName_2() { return static_cast<int32_t>(offsetof(HostData_t1798681486, ___m_GameName_2)); }
	inline String_t* get_m_GameName_2() const { return ___m_GameName_2; }
	inline String_t** get_address_of_m_GameName_2() { return &___m_GameName_2; }
	inline void set_m_GameName_2(String_t* value)
	{
		___m_GameName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameName_2), value);
	}

	inline static int32_t get_offset_of_m_ConnectedPlayers_3() { return static_cast<int32_t>(offsetof(HostData_t1798681486, ___m_ConnectedPlayers_3)); }
	inline int32_t get_m_ConnectedPlayers_3() const { return ___m_ConnectedPlayers_3; }
	inline int32_t* get_address_of_m_ConnectedPlayers_3() { return &___m_ConnectedPlayers_3; }
	inline void set_m_ConnectedPlayers_3(int32_t value)
	{
		___m_ConnectedPlayers_3 = value;
	}

	inline static int32_t get_offset_of_m_PlayerLimit_4() { return static_cast<int32_t>(offsetof(HostData_t1798681486, ___m_PlayerLimit_4)); }
	inline int32_t get_m_PlayerLimit_4() const { return ___m_PlayerLimit_4; }
	inline int32_t* get_address_of_m_PlayerLimit_4() { return &___m_PlayerLimit_4; }
	inline void set_m_PlayerLimit_4(int32_t value)
	{
		___m_PlayerLimit_4 = value;
	}

	inline static int32_t get_offset_of_m_IP_5() { return static_cast<int32_t>(offsetof(HostData_t1798681486, ___m_IP_5)); }
	inline StringU5BU5D_t3162382152* get_m_IP_5() const { return ___m_IP_5; }
	inline StringU5BU5D_t3162382152** get_address_of_m_IP_5() { return &___m_IP_5; }
	inline void set_m_IP_5(StringU5BU5D_t3162382152* value)
	{
		___m_IP_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_IP_5), value);
	}

	inline static int32_t get_offset_of_m_Port_6() { return static_cast<int32_t>(offsetof(HostData_t1798681486, ___m_Port_6)); }
	inline int32_t get_m_Port_6() const { return ___m_Port_6; }
	inline int32_t* get_address_of_m_Port_6() { return &___m_Port_6; }
	inline void set_m_Port_6(int32_t value)
	{
		___m_Port_6 = value;
	}

	inline static int32_t get_offset_of_m_PasswordProtected_7() { return static_cast<int32_t>(offsetof(HostData_t1798681486, ___m_PasswordProtected_7)); }
	inline int32_t get_m_PasswordProtected_7() const { return ___m_PasswordProtected_7; }
	inline int32_t* get_address_of_m_PasswordProtected_7() { return &___m_PasswordProtected_7; }
	inline void set_m_PasswordProtected_7(int32_t value)
	{
		___m_PasswordProtected_7 = value;
	}

	inline static int32_t get_offset_of_m_Comment_8() { return static_cast<int32_t>(offsetof(HostData_t1798681486, ___m_Comment_8)); }
	inline String_t* get_m_Comment_8() const { return ___m_Comment_8; }
	inline String_t** get_address_of_m_Comment_8() { return &___m_Comment_8; }
	inline void set_m_Comment_8(String_t* value)
	{
		___m_Comment_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Comment_8), value);
	}

	inline static int32_t get_offset_of_m_GUID_9() { return static_cast<int32_t>(offsetof(HostData_t1798681486, ___m_GUID_9)); }
	inline String_t* get_m_GUID_9() const { return ___m_GUID_9; }
	inline String_t** get_address_of_m_GUID_9() { return &___m_GUID_9; }
	inline void set_m_GUID_9(String_t* value)
	{
		___m_GUID_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_GUID_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.HostData
struct HostData_t1798681486_marshaled_pinvoke
{
	int32_t ___m_Nat_0;
	char* ___m_GameType_1;
	char* ___m_GameName_2;
	int32_t ___m_ConnectedPlayers_3;
	int32_t ___m_PlayerLimit_4;
	char** ___m_IP_5;
	int32_t ___m_Port_6;
	int32_t ___m_PasswordProtected_7;
	char* ___m_Comment_8;
	char* ___m_GUID_9;
};
// Native definition for COM marshalling of UnityEngine.HostData
struct HostData_t1798681486_marshaled_com
{
	int32_t ___m_Nat_0;
	Il2CppChar* ___m_GameType_1;
	Il2CppChar* ___m_GameName_2;
	int32_t ___m_ConnectedPlayers_3;
	int32_t ___m_PlayerLimit_4;
	Il2CppChar** ___m_IP_5;
	int32_t ___m_Port_6;
	int32_t ___m_PasswordProtected_7;
	Il2CppChar* ___m_Comment_8;
	Il2CppChar* ___m_GUID_9;
};
#endif // HOSTDATA_T1798681486_H
#ifndef CUSTOMYIELDINSTRUCTION_T4088954792_H
#define CUSTOMYIELDINSTRUCTION_T4088954792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t4088954792  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T4088954792_H
#ifndef DEBUGLOGHANDLER_T2510235573_H
#define DEBUGLOGHANDLER_T2510235573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DebugLogHandler
struct  DebugLogHandler_t2510235573  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGLOGHANDLER_T2510235573_H
#ifndef DEBUG_T1473602136_H
#define DEBUG_T1473602136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Debug
struct  Debug_t1473602136  : public RuntimeObject
{
public:

public:
};

struct Debug_t1473602136_StaticFields
{
public:
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_0;

public:
	inline static int32_t get_offset_of_s_Logger_0() { return static_cast<int32_t>(offsetof(Debug_t1473602136_StaticFields, ___s_Logger_0)); }
	inline RuntimeObject* get_s_Logger_0() const { return ___s_Logger_0; }
	inline RuntimeObject** get_address_of_s_Logger_0() { return &___s_Logger_0; }
	inline void set_s_Logger_0(RuntimeObject* value)
	{
		___s_Logger_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Logger_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUG_T1473602136_H
#ifndef SYSTEMINFO_T601229409_H
#define SYSTEMINFO_T601229409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SystemInfo
struct  SystemInfo_t601229409  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMINFO_T601229409_H
#ifndef PLAYERCONNECTIONINTERNAL_T912631986_H
#define PLAYERCONNECTIONINTERNAL_T912631986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PlayerConnectionInternal
struct  PlayerConnectionInternal_t912631986  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONNECTIONINTERNAL_T912631986_H
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
#ifndef APPLICATION_T2705976006_H
#define APPLICATION_T2705976006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application
struct  Application_t2705976006  : public RuntimeObject
{
public:

public:
};

struct Application_t2705976006_StaticFields
{
public:
	// UnityEngine.Application/LowMemoryCallback UnityEngine.Application::lowMemory
	LowMemoryCallback_t2407671705 * ___lowMemory_0;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandler
	LogCallback_t2708451746 * ___s_LogCallbackHandler_1;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandlerThreaded
	LogCallback_t2708451746 * ___s_LogCallbackHandlerThreaded_2;
	// UnityEngine.Events.UnityAction UnityEngine.Application::onBeforeRender
	UnityAction_t975035011 * ___onBeforeRender_3;

public:
	inline static int32_t get_offset_of_lowMemory_0() { return static_cast<int32_t>(offsetof(Application_t2705976006_StaticFields, ___lowMemory_0)); }
	inline LowMemoryCallback_t2407671705 * get_lowMemory_0() const { return ___lowMemory_0; }
	inline LowMemoryCallback_t2407671705 ** get_address_of_lowMemory_0() { return &___lowMemory_0; }
	inline void set_lowMemory_0(LowMemoryCallback_t2407671705 * value)
	{
		___lowMemory_0 = value;
		Il2CppCodeGenWriteBarrier((&___lowMemory_0), value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandler_1() { return static_cast<int32_t>(offsetof(Application_t2705976006_StaticFields, ___s_LogCallbackHandler_1)); }
	inline LogCallback_t2708451746 * get_s_LogCallbackHandler_1() const { return ___s_LogCallbackHandler_1; }
	inline LogCallback_t2708451746 ** get_address_of_s_LogCallbackHandler_1() { return &___s_LogCallbackHandler_1; }
	inline void set_s_LogCallbackHandler_1(LogCallback_t2708451746 * value)
	{
		___s_LogCallbackHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_LogCallbackHandler_1), value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandlerThreaded_2() { return static_cast<int32_t>(offsetof(Application_t2705976006_StaticFields, ___s_LogCallbackHandlerThreaded_2)); }
	inline LogCallback_t2708451746 * get_s_LogCallbackHandlerThreaded_2() const { return ___s_LogCallbackHandlerThreaded_2; }
	inline LogCallback_t2708451746 ** get_address_of_s_LogCallbackHandlerThreaded_2() { return &___s_LogCallbackHandlerThreaded_2; }
	inline void set_s_LogCallbackHandlerThreaded_2(LogCallback_t2708451746 * value)
	{
		___s_LogCallbackHandlerThreaded_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_LogCallbackHandlerThreaded_2), value);
	}

	inline static int32_t get_offset_of_onBeforeRender_3() { return static_cast<int32_t>(offsetof(Application_t2705976006_StaticFields, ___onBeforeRender_3)); }
	inline UnityAction_t975035011 * get_onBeforeRender_3() const { return ___onBeforeRender_3; }
	inline UnityAction_t975035011 ** get_address_of_onBeforeRender_3() { return &___onBeforeRender_3; }
	inline void set_onBeforeRender_3(UnityAction_t975035011 * value)
	{
		___onBeforeRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onBeforeRender_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATION_T2705976006_H
#ifndef INPUT_T1545252376_H
#define INPUT_T1545252376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Input
struct  Input_t1545252376  : public RuntimeObject
{
public:

public:
};

struct Input_t1545252376_StaticFields
{
public:
	// UnityEngine.Gyroscope UnityEngine.Input::m_MainGyro
	Gyroscope_t854707766 * ___m_MainGyro_0;
	// UnityEngine.LocationService UnityEngine.Input::locationServiceInstance
	LocationService_t490144105 * ___locationServiceInstance_1;
	// UnityEngine.Compass UnityEngine.Input::compassInstance
	Compass_t3377430827 * ___compassInstance_2;

public:
	inline static int32_t get_offset_of_m_MainGyro_0() { return static_cast<int32_t>(offsetof(Input_t1545252376_StaticFields, ___m_MainGyro_0)); }
	inline Gyroscope_t854707766 * get_m_MainGyro_0() const { return ___m_MainGyro_0; }
	inline Gyroscope_t854707766 ** get_address_of_m_MainGyro_0() { return &___m_MainGyro_0; }
	inline void set_m_MainGyro_0(Gyroscope_t854707766 * value)
	{
		___m_MainGyro_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_MainGyro_0), value);
	}

	inline static int32_t get_offset_of_locationServiceInstance_1() { return static_cast<int32_t>(offsetof(Input_t1545252376_StaticFields, ___locationServiceInstance_1)); }
	inline LocationService_t490144105 * get_locationServiceInstance_1() const { return ___locationServiceInstance_1; }
	inline LocationService_t490144105 ** get_address_of_locationServiceInstance_1() { return &___locationServiceInstance_1; }
	inline void set_locationServiceInstance_1(LocationService_t490144105 * value)
	{
		___locationServiceInstance_1 = value;
		Il2CppCodeGenWriteBarrier((&___locationServiceInstance_1), value);
	}

	inline static int32_t get_offset_of_compassInstance_2() { return static_cast<int32_t>(offsetof(Input_t1545252376_StaticFields, ___compassInstance_2)); }
	inline Compass_t3377430827 * get_compassInstance_2() const { return ___compassInstance_2; }
	inline Compass_t3377430827 ** get_address_of_compassInstance_2() { return &___compassInstance_2; }
	inline void set_compassInstance_2(Compass_t3377430827 * value)
	{
		___compassInstance_2 = value;
		Il2CppCodeGenWriteBarrier((&___compassInstance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUT_T1545252376_H
#ifndef U3CEXPANDARRAYU3EC__ITERATOR25_T4163351297_H
#define U3CEXPANDARRAYU3EC__ITERATOR25_T4163351297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25
struct  U3CExpandArrayU3Ec__Iterator25_t4163351297  : public RuntimeObject
{
public:
	// System.Object System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::o
	RuntimeObject * ___o_0;
	// System.Xml.Linq.XNode System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::<n>__0
	XNode_t2780391442 * ___U3CnU3E__0_1;
	// System.Collections.IEnumerator System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::<$s_86>__1
	RuntimeObject* ___U3CU24s_86U3E__1_2;
	// System.Object System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::<obj>__2
	RuntimeObject * ___U3CobjU3E__2_3;
	// System.Collections.IEnumerator System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::<$s_87>__3
	RuntimeObject* ___U3CU24s_87U3E__3_4;
	// System.Object System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::<oo>__4
	RuntimeObject * ___U3CooU3E__4_5;
	// System.Int32 System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::$PC
	int32_t ___U24PC_6;
	// System.Object System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::$current
	RuntimeObject * ___U24current_7;
	// System.Object System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::<$>o
	RuntimeObject * ___U3CU24U3Eo_8;

public:
	inline static int32_t get_offset_of_o_0() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t4163351297, ___o_0)); }
	inline RuntimeObject * get_o_0() const { return ___o_0; }
	inline RuntimeObject ** get_address_of_o_0() { return &___o_0; }
	inline void set_o_0(RuntimeObject * value)
	{
		___o_0 = value;
		Il2CppCodeGenWriteBarrier((&___o_0), value);
	}

	inline static int32_t get_offset_of_U3CnU3E__0_1() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t4163351297, ___U3CnU3E__0_1)); }
	inline XNode_t2780391442 * get_U3CnU3E__0_1() const { return ___U3CnU3E__0_1; }
	inline XNode_t2780391442 ** get_address_of_U3CnU3E__0_1() { return &___U3CnU3E__0_1; }
	inline void set_U3CnU3E__0_1(XNode_t2780391442 * value)
	{
		___U3CnU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3CU24s_86U3E__1_2() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t4163351297, ___U3CU24s_86U3E__1_2)); }
	inline RuntimeObject* get_U3CU24s_86U3E__1_2() const { return ___U3CU24s_86U3E__1_2; }
	inline RuntimeObject** get_address_of_U3CU24s_86U3E__1_2() { return &___U3CU24s_86U3E__1_2; }
	inline void set_U3CU24s_86U3E__1_2(RuntimeObject* value)
	{
		___U3CU24s_86U3E__1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24s_86U3E__1_2), value);
	}

	inline static int32_t get_offset_of_U3CobjU3E__2_3() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t4163351297, ___U3CobjU3E__2_3)); }
	inline RuntimeObject * get_U3CobjU3E__2_3() const { return ___U3CobjU3E__2_3; }
	inline RuntimeObject ** get_address_of_U3CobjU3E__2_3() { return &___U3CobjU3E__2_3; }
	inline void set_U3CobjU3E__2_3(RuntimeObject * value)
	{
		___U3CobjU3E__2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CobjU3E__2_3), value);
	}

	inline static int32_t get_offset_of_U3CU24s_87U3E__3_4() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t4163351297, ___U3CU24s_87U3E__3_4)); }
	inline RuntimeObject* get_U3CU24s_87U3E__3_4() const { return ___U3CU24s_87U3E__3_4; }
	inline RuntimeObject** get_address_of_U3CU24s_87U3E__3_4() { return &___U3CU24s_87U3E__3_4; }
	inline void set_U3CU24s_87U3E__3_4(RuntimeObject* value)
	{
		___U3CU24s_87U3E__3_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24s_87U3E__3_4), value);
	}

	inline static int32_t get_offset_of_U3CooU3E__4_5() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t4163351297, ___U3CooU3E__4_5)); }
	inline RuntimeObject * get_U3CooU3E__4_5() const { return ___U3CooU3E__4_5; }
	inline RuntimeObject ** get_address_of_U3CooU3E__4_5() { return &___U3CooU3E__4_5; }
	inline void set_U3CooU3E__4_5(RuntimeObject * value)
	{
		___U3CooU3E__4_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CooU3E__4_5), value);
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t4163351297, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t4163351297, ___U24current_7)); }
	inline RuntimeObject * get_U24current_7() const { return ___U24current_7; }
	inline RuntimeObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(RuntimeObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_7), value);
	}

	inline static int32_t get_offset_of_U3CU24U3Eo_8() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t4163351297, ___U3CU24U3Eo_8)); }
	inline RuntimeObject * get_U3CU24U3Eo_8() const { return ___U3CU24U3Eo_8; }
	inline RuntimeObject ** get_address_of_U3CU24U3Eo_8() { return &___U3CU24U3Eo_8; }
	inline void set_U3CU24U3Eo_8(RuntimeObject * value)
	{
		___U3CU24U3Eo_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24U3Eo_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CEXPANDARRAYU3EC__ITERATOR25_T4163351297_H
#ifndef XUTIL_T846057026_H
#define XUTIL_T846057026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XUtil
struct  XUtil_t846057026  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XUTIL_T846057026_H
#ifndef COMPASS_T3377430827_H
#define COMPASS_T3377430827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Compass
struct  Compass_t3377430827  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPASS_T3377430827_H
#ifndef UNHANDLEDEXCEPTIONHANDLER_T2171783740_H
#define UNHANDLEDEXCEPTIONHANDLER_T2171783740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnhandledExceptionHandler
struct  UnhandledExceptionHandler_t2171783740  : public RuntimeObject
{
public:

public:
};

struct UnhandledExceptionHandler_t2171783740_StaticFields
{
public:
	// System.UnhandledExceptionEventHandler UnityEngine.UnhandledExceptionHandler::<>f__mg$cache0
	UnhandledExceptionEventHandler_t2452659249 * ___U3CU3Ef__mgU24cache0_0;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_0() { return static_cast<int32_t>(offsetof(UnhandledExceptionHandler_t2171783740_StaticFields, ___U3CU3Ef__mgU24cache0_0)); }
	inline UnhandledExceptionEventHandler_t2452659249 * get_U3CU3Ef__mgU24cache0_0() const { return ___U3CU3Ef__mgU24cache0_0; }
	inline UnhandledExceptionEventHandler_t2452659249 ** get_address_of_U3CU3Ef__mgU24cache0_0() { return &___U3CU3Ef__mgU24cache0_0; }
	inline void set_U3CU3Ef__mgU24cache0_0(UnhandledExceptionEventHandler_t2452659249 * value)
	{
		___U3CU3Ef__mgU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONHANDLER_T2171783740_H
#ifndef XOBJECT_T4102756128_H
#define XOBJECT_T4102756128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XObject
struct  XObject_t4102756128  : public RuntimeObject
{
public:
	// System.Xml.Linq.XContainer System.Xml.Linq.XObject::owner
	XContainer_t924164084 * ___owner_0;
	// System.String System.Xml.Linq.XObject::baseuri
	String_t* ___baseuri_1;
	// System.Int32 System.Xml.Linq.XObject::line
	int32_t ___line_2;
	// System.Int32 System.Xml.Linq.XObject::column
	int32_t ___column_3;

public:
	inline static int32_t get_offset_of_owner_0() { return static_cast<int32_t>(offsetof(XObject_t4102756128, ___owner_0)); }
	inline XContainer_t924164084 * get_owner_0() const { return ___owner_0; }
	inline XContainer_t924164084 ** get_address_of_owner_0() { return &___owner_0; }
	inline void set_owner_0(XContainer_t924164084 * value)
	{
		___owner_0 = value;
		Il2CppCodeGenWriteBarrier((&___owner_0), value);
	}

	inline static int32_t get_offset_of_baseuri_1() { return static_cast<int32_t>(offsetof(XObject_t4102756128, ___baseuri_1)); }
	inline String_t* get_baseuri_1() const { return ___baseuri_1; }
	inline String_t** get_address_of_baseuri_1() { return &___baseuri_1; }
	inline void set_baseuri_1(String_t* value)
	{
		___baseuri_1 = value;
		Il2CppCodeGenWriteBarrier((&___baseuri_1), value);
	}

	inline static int32_t get_offset_of_line_2() { return static_cast<int32_t>(offsetof(XObject_t4102756128, ___line_2)); }
	inline int32_t get_line_2() const { return ___line_2; }
	inline int32_t* get_address_of_line_2() { return &___line_2; }
	inline void set_line_2(int32_t value)
	{
		___line_2 = value;
	}

	inline static int32_t get_offset_of_column_3() { return static_cast<int32_t>(offsetof(XObject_t4102756128, ___column_3)); }
	inline int32_t get_column_3() const { return ___column_3; }
	inline int32_t* get_address_of_column_3() { return &___column_3; }
	inline void set_column_3(int32_t value)
	{
		___column_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XOBJECT_T4102756128_H
#ifndef XNODEEQUALITYCOMPARER_T3883418371_H
#define XNODEEQUALITYCOMPARER_T3883418371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XNodeEqualityComparer
struct  XNodeEqualityComparer_t3883418371  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XNODEEQUALITYCOMPARER_T3883418371_H
#ifndef YIELDINSTRUCTION_T1919479601_H
#define YIELDINSTRUCTION_T1919479601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t1919479601  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t1919479601_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t1919479601_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T1919479601_H
#ifndef XNODEDOCUMENTORDERCOMPARER_T830105129_H
#define XNODEDOCUMENTORDERCOMPARER_T830105129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XNodeDocumentOrderComparer
struct  XNodeDocumentOrderComparer_t830105129  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XNODEDOCUMENTORDERCOMPARER_T830105129_H
#ifndef XNAMESPACE_T3902556772_H
#define XNAMESPACE_T3902556772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XNamespace
struct  XNamespace_t3902556772  : public RuntimeObject
{
public:
	// System.String System.Xml.Linq.XNamespace::uri
	String_t* ___uri_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XName> System.Xml.Linq.XNamespace::table
	Dictionary_2_t1499339004 * ___table_5;

public:
	inline static int32_t get_offset_of_uri_4() { return static_cast<int32_t>(offsetof(XNamespace_t3902556772, ___uri_4)); }
	inline String_t* get_uri_4() const { return ___uri_4; }
	inline String_t** get_address_of_uri_4() { return &___uri_4; }
	inline void set_uri_4(String_t* value)
	{
		___uri_4 = value;
		Il2CppCodeGenWriteBarrier((&___uri_4), value);
	}

	inline static int32_t get_offset_of_table_5() { return static_cast<int32_t>(offsetof(XNamespace_t3902556772, ___table_5)); }
	inline Dictionary_2_t1499339004 * get_table_5() const { return ___table_5; }
	inline Dictionary_2_t1499339004 ** get_address_of_table_5() { return &___table_5; }
	inline void set_table_5(Dictionary_2_t1499339004 * value)
	{
		___table_5 = value;
		Il2CppCodeGenWriteBarrier((&___table_5), value);
	}
};

struct XNamespace_t3902556772_StaticFields
{
public:
	// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::blank
	XNamespace_t3902556772 * ___blank_0;
	// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::xml
	XNamespace_t3902556772 * ___xml_1;
	// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::xmlns
	XNamespace_t3902556772 * ___xmlns_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XNamespace> System.Xml.Linq.XNamespace::nstable
	Dictionary_2_t4088293610 * ___nstable_3;

public:
	inline static int32_t get_offset_of_blank_0() { return static_cast<int32_t>(offsetof(XNamespace_t3902556772_StaticFields, ___blank_0)); }
	inline XNamespace_t3902556772 * get_blank_0() const { return ___blank_0; }
	inline XNamespace_t3902556772 ** get_address_of_blank_0() { return &___blank_0; }
	inline void set_blank_0(XNamespace_t3902556772 * value)
	{
		___blank_0 = value;
		Il2CppCodeGenWriteBarrier((&___blank_0), value);
	}

	inline static int32_t get_offset_of_xml_1() { return static_cast<int32_t>(offsetof(XNamespace_t3902556772_StaticFields, ___xml_1)); }
	inline XNamespace_t3902556772 * get_xml_1() const { return ___xml_1; }
	inline XNamespace_t3902556772 ** get_address_of_xml_1() { return &___xml_1; }
	inline void set_xml_1(XNamespace_t3902556772 * value)
	{
		___xml_1 = value;
		Il2CppCodeGenWriteBarrier((&___xml_1), value);
	}

	inline static int32_t get_offset_of_xmlns_2() { return static_cast<int32_t>(offsetof(XNamespace_t3902556772_StaticFields, ___xmlns_2)); }
	inline XNamespace_t3902556772 * get_xmlns_2() const { return ___xmlns_2; }
	inline XNamespace_t3902556772 ** get_address_of_xmlns_2() { return &___xmlns_2; }
	inline void set_xmlns_2(XNamespace_t3902556772 * value)
	{
		___xmlns_2 = value;
		Il2CppCodeGenWriteBarrier((&___xmlns_2), value);
	}

	inline static int32_t get_offset_of_nstable_3() { return static_cast<int32_t>(offsetof(XNamespace_t3902556772_StaticFields, ___nstable_3)); }
	inline Dictionary_2_t4088293610 * get_nstable_3() const { return ___nstable_3; }
	inline Dictionary_2_t4088293610 ** get_address_of_nstable_3() { return &___nstable_3; }
	inline void set_nstable_3(Dictionary_2_t4088293610 * value)
	{
		___nstable_3 = value;
		Il2CppCodeGenWriteBarrier((&___nstable_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XNAMESPACE_T3902556772_H
#ifndef U3CNODESU3EC__ITERATOR1A_T1192396320_H
#define U3CNODESU3EC__ITERATOR1A_T1192396320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XContainer/<Nodes>c__Iterator1A
struct  U3CNodesU3Ec__Iterator1A_t1192396320  : public RuntimeObject
{
public:
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::<n>__0
	XNode_t2780391442 * ___U3CnU3E__0_0;
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::<next>__1
	XNode_t2780391442 * ___U3CnextU3E__1_1;
	// System.Int32 System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::$PC
	int32_t ___U24PC_2;
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::$current
	XNode_t2780391442 * ___U24current_3;
	// System.Xml.Linq.XContainer System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::<>f__this
	XContainer_t924164084 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_U3CnU3E__0_0() { return static_cast<int32_t>(offsetof(U3CNodesU3Ec__Iterator1A_t1192396320, ___U3CnU3E__0_0)); }
	inline XNode_t2780391442 * get_U3CnU3E__0_0() const { return ___U3CnU3E__0_0; }
	inline XNode_t2780391442 ** get_address_of_U3CnU3E__0_0() { return &___U3CnU3E__0_0; }
	inline void set_U3CnU3E__0_0(XNode_t2780391442 * value)
	{
		___U3CnU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CnextU3E__1_1() { return static_cast<int32_t>(offsetof(U3CNodesU3Ec__Iterator1A_t1192396320, ___U3CnextU3E__1_1)); }
	inline XNode_t2780391442 * get_U3CnextU3E__1_1() const { return ___U3CnextU3E__1_1; }
	inline XNode_t2780391442 ** get_address_of_U3CnextU3E__1_1() { return &___U3CnextU3E__1_1; }
	inline void set_U3CnextU3E__1_1(XNode_t2780391442 * value)
	{
		___U3CnextU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnextU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CNodesU3Ec__Iterator1A_t1192396320, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CNodesU3Ec__Iterator1A_t1192396320, ___U24current_3)); }
	inline XNode_t2780391442 * get_U24current_3() const { return ___U24current_3; }
	inline XNode_t2780391442 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(XNode_t2780391442 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CNodesU3Ec__Iterator1A_t1192396320, ___U3CU3Ef__this_4)); }
	inline XContainer_t924164084 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline XContainer_t924164084 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(XContainer_t924164084 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__this_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CNODESU3EC__ITERATOR1A_T1192396320_H
#ifndef XNAME_T1313602166_H
#define XNAME_T1313602166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XName
struct  XName_t1313602166  : public RuntimeObject
{
public:
	// System.String System.Xml.Linq.XName::local
	String_t* ___local_0;
	// System.Xml.Linq.XNamespace System.Xml.Linq.XName::ns
	XNamespace_t3902556772 * ___ns_1;

public:
	inline static int32_t get_offset_of_local_0() { return static_cast<int32_t>(offsetof(XName_t1313602166, ___local_0)); }
	inline String_t* get_local_0() const { return ___local_0; }
	inline String_t** get_address_of_local_0() { return &___local_0; }
	inline void set_local_0(String_t* value)
	{
		___local_0 = value;
		Il2CppCodeGenWriteBarrier((&___local_0), value);
	}

	inline static int32_t get_offset_of_ns_1() { return static_cast<int32_t>(offsetof(XName_t1313602166, ___ns_1)); }
	inline XNamespace_t3902556772 * get_ns_1() const { return ___ns_1; }
	inline XNamespace_t3902556772 ** get_address_of_ns_1() { return &___ns_1; }
	inline void set_ns_1(XNamespace_t3902556772 * value)
	{
		___ns_1 = value;
		Il2CppCodeGenWriteBarrier((&___ns_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XNAME_T1313602166_H
#ifndef XDECLARATION_T791999680_H
#define XDECLARATION_T791999680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XDeclaration
struct  XDeclaration_t791999680  : public RuntimeObject
{
public:
	// System.String System.Xml.Linq.XDeclaration::encoding
	String_t* ___encoding_0;
	// System.String System.Xml.Linq.XDeclaration::standalone
	String_t* ___standalone_1;
	// System.String System.Xml.Linq.XDeclaration::version
	String_t* ___version_2;

public:
	inline static int32_t get_offset_of_encoding_0() { return static_cast<int32_t>(offsetof(XDeclaration_t791999680, ___encoding_0)); }
	inline String_t* get_encoding_0() const { return ___encoding_0; }
	inline String_t** get_address_of_encoding_0() { return &___encoding_0; }
	inline void set_encoding_0(String_t* value)
	{
		___encoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_0), value);
	}

	inline static int32_t get_offset_of_standalone_1() { return static_cast<int32_t>(offsetof(XDeclaration_t791999680, ___standalone_1)); }
	inline String_t* get_standalone_1() const { return ___standalone_1; }
	inline String_t** get_address_of_standalone_1() { return &___standalone_1; }
	inline void set_standalone_1(String_t* value)
	{
		___standalone_1 = value;
		Il2CppCodeGenWriteBarrier((&___standalone_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(XDeclaration_t791999680, ___version_2)); }
	inline String_t* get_version_2() const { return ___version_2; }
	inline String_t** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(String_t* value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier((&___version_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XDECLARATION_T791999680_H
#ifndef U3CGETPREFIXOFNAMESPACECOREU3EC__ITERATOR23_T140612106_H
#define U3CGETPREFIXOFNAMESPACECOREU3EC__ITERATOR23_T140612106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23
struct  U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t140612106  : public RuntimeObject
{
public:
	// System.Xml.Linq.XElement System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::<el>__0
	XElement_t4188750518 * ___U3CelU3E__0_0;
	// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute> System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::<$s_68>__1
	RuntimeObject* ___U3CU24s_68U3E__1_1;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::<a>__2
	XAttribute_t584204258 * ___U3CaU3E__2_2;
	// System.Xml.Linq.XNamespace System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::ns
	XNamespace_t3902556772 * ___ns_3;
	// System.Int32 System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::$PC
	int32_t ___U24PC_4;
	// System.String System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::$current
	String_t* ___U24current_5;
	// System.Xml.Linq.XNamespace System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::<$>ns
	XNamespace_t3902556772 * ___U3CU24U3Ens_6;
	// System.Xml.Linq.XElement System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::<>f__this
	XElement_t4188750518 * ___U3CU3Ef__this_7;

public:
	inline static int32_t get_offset_of_U3CelU3E__0_0() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t140612106, ___U3CelU3E__0_0)); }
	inline XElement_t4188750518 * get_U3CelU3E__0_0() const { return ___U3CelU3E__0_0; }
	inline XElement_t4188750518 ** get_address_of_U3CelU3E__0_0() { return &___U3CelU3E__0_0; }
	inline void set_U3CelU3E__0_0(XElement_t4188750518 * value)
	{
		___U3CelU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CelU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CU24s_68U3E__1_1() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t140612106, ___U3CU24s_68U3E__1_1)); }
	inline RuntimeObject* get_U3CU24s_68U3E__1_1() const { return ___U3CU24s_68U3E__1_1; }
	inline RuntimeObject** get_address_of_U3CU24s_68U3E__1_1() { return &___U3CU24s_68U3E__1_1; }
	inline void set_U3CU24s_68U3E__1_1(RuntimeObject* value)
	{
		___U3CU24s_68U3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24s_68U3E__1_1), value);
	}

	inline static int32_t get_offset_of_U3CaU3E__2_2() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t140612106, ___U3CaU3E__2_2)); }
	inline XAttribute_t584204258 * get_U3CaU3E__2_2() const { return ___U3CaU3E__2_2; }
	inline XAttribute_t584204258 ** get_address_of_U3CaU3E__2_2() { return &___U3CaU3E__2_2; }
	inline void set_U3CaU3E__2_2(XAttribute_t584204258 * value)
	{
		___U3CaU3E__2_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CaU3E__2_2), value);
	}

	inline static int32_t get_offset_of_ns_3() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t140612106, ___ns_3)); }
	inline XNamespace_t3902556772 * get_ns_3() const { return ___ns_3; }
	inline XNamespace_t3902556772 ** get_address_of_ns_3() { return &___ns_3; }
	inline void set_ns_3(XNamespace_t3902556772 * value)
	{
		___ns_3 = value;
		Il2CppCodeGenWriteBarrier((&___ns_3), value);
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t140612106, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t140612106, ___U24current_5)); }
	inline String_t* get_U24current_5() const { return ___U24current_5; }
	inline String_t** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(String_t* value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U3CU24U3Ens_6() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t140612106, ___U3CU24U3Ens_6)); }
	inline XNamespace_t3902556772 * get_U3CU24U3Ens_6() const { return ___U3CU24U3Ens_6; }
	inline XNamespace_t3902556772 ** get_address_of_U3CU24U3Ens_6() { return &___U3CU24U3Ens_6; }
	inline void set_U3CU24U3Ens_6(XNamespace_t3902556772 * value)
	{
		___U3CU24U3Ens_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24U3Ens_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_7() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t140612106, ___U3CU3Ef__this_7)); }
	inline XElement_t4188750518 * get_U3CU3Ef__this_7() const { return ___U3CU3Ef__this_7; }
	inline XElement_t4188750518 ** get_address_of_U3CU3Ef__this_7() { return &___U3CU3Ef__this_7; }
	inline void set_U3CU3Ef__this_7(XElement_t4188750518 * value)
	{
		___U3CU3Ef__this_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__this_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETPREFIXOFNAMESPACECOREU3EC__ITERATOR23_T140612106_H
#ifndef LOCATIONSERVICE_T490144105_H
#define LOCATIONSERVICE_T490144105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LocationService
struct  LocationService_t490144105  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCATIONSERVICE_T490144105_H
#ifndef U3CATTRIBUTESU3EC__ITERATOR20_T1301852267_H
#define U3CATTRIBUTESU3EC__ITERATOR20_T1301852267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XElement/<Attributes>c__Iterator20
struct  U3CAttributesU3Ec__Iterator20_t1301852267  : public RuntimeObject
{
public:
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement/<Attributes>c__Iterator20::<a>__0
	XAttribute_t584204258 * ___U3CaU3E__0_0;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement/<Attributes>c__Iterator20::<next>__1
	XAttribute_t584204258 * ___U3CnextU3E__1_1;
	// System.Int32 System.Xml.Linq.XElement/<Attributes>c__Iterator20::$PC
	int32_t ___U24PC_2;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement/<Attributes>c__Iterator20::$current
	XAttribute_t584204258 * ___U24current_3;
	// System.Xml.Linq.XElement System.Xml.Linq.XElement/<Attributes>c__Iterator20::<>f__this
	XElement_t4188750518 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_U3CaU3E__0_0() { return static_cast<int32_t>(offsetof(U3CAttributesU3Ec__Iterator20_t1301852267, ___U3CaU3E__0_0)); }
	inline XAttribute_t584204258 * get_U3CaU3E__0_0() const { return ___U3CaU3E__0_0; }
	inline XAttribute_t584204258 ** get_address_of_U3CaU3E__0_0() { return &___U3CaU3E__0_0; }
	inline void set_U3CaU3E__0_0(XAttribute_t584204258 * value)
	{
		___U3CaU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CaU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CnextU3E__1_1() { return static_cast<int32_t>(offsetof(U3CAttributesU3Ec__Iterator20_t1301852267, ___U3CnextU3E__1_1)); }
	inline XAttribute_t584204258 * get_U3CnextU3E__1_1() const { return ___U3CnextU3E__1_1; }
	inline XAttribute_t584204258 ** get_address_of_U3CnextU3E__1_1() { return &___U3CnextU3E__1_1; }
	inline void set_U3CnextU3E__1_1(XAttribute_t584204258 * value)
	{
		___U3CnextU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnextU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CAttributesU3Ec__Iterator20_t1301852267, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CAttributesU3Ec__Iterator20_t1301852267, ___U24current_3)); }
	inline XAttribute_t584204258 * get_U24current_3() const { return ___U24current_3; }
	inline XAttribute_t584204258 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(XAttribute_t584204258 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CAttributesU3Ec__Iterator20_t1301852267, ___U3CU3Ef__this_4)); }
	inline XElement_t4188750518 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline XElement_t4188750518 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(XElement_t4188750518 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__this_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CATTRIBUTESU3EC__ITERATOR20_T1301852267_H
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
#ifndef SCREEN_T3212058449_H
#define SCREEN_T3212058449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Screen
struct  Screen_t3212058449  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREEN_T3212058449_H
#ifndef GYROSCOPE_T854707766_H
#define GYROSCOPE_T854707766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gyroscope
struct  Gyroscope_t854707766  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GYROSCOPE_T854707766_H
#ifndef KEYFRAME_T2239019230_H
#define KEYFRAME_T2239019230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t2239019230 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t2239019230, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t2239019230, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t2239019230, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t2239019230, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T2239019230_H
#ifndef MATHF_T2754288356_H
#define MATHF_T2754288356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mathf
struct  Mathf_t2754288356 
{
public:

public:
};

struct Mathf_t2754288356_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t2754288356_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHF_T2754288356_H
#ifndef QUATERNION_T3861711338_H
#define QUATERNION_T3861711338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t3861711338 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t3861711338, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t3861711338, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t3861711338, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t3861711338, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t3861711338_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t3861711338  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t3861711338_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t3861711338  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t3861711338 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t3861711338  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T3861711338_H
#ifndef VECTOR3_T1731499529_H
#define VECTOR3_T1731499529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t1731499529 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t1731499529, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t1731499529, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t1731499529, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t1731499529_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t1731499529  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t1731499529  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t1731499529  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t1731499529  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t1731499529  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t1731499529  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t1731499529  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t1731499529  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t1731499529  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t1731499529  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t1731499529_StaticFields, ___zeroVector_4)); }
	inline Vector3_t1731499529  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t1731499529 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t1731499529  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t1731499529_StaticFields, ___oneVector_5)); }
	inline Vector3_t1731499529  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t1731499529 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t1731499529  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t1731499529_StaticFields, ___upVector_6)); }
	inline Vector3_t1731499529  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t1731499529 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t1731499529  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t1731499529_StaticFields, ___downVector_7)); }
	inline Vector3_t1731499529  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t1731499529 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t1731499529  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t1731499529_StaticFields, ___leftVector_8)); }
	inline Vector3_t1731499529  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t1731499529 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t1731499529  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t1731499529_StaticFields, ___rightVector_9)); }
	inline Vector3_t1731499529  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t1731499529 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t1731499529  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t1731499529_StaticFields, ___forwardVector_10)); }
	inline Vector3_t1731499529  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t1731499529 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t1731499529  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t1731499529_StaticFields, ___backVector_11)); }
	inline Vector3_t1731499529  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t1731499529 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t1731499529  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t1731499529_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t1731499529  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t1731499529 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t1731499529  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t1731499529_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t1731499529  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t1731499529 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t1731499529  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T1731499529_H
#ifndef LAYERMASK_T423020429_H
#define LAYERMASK_T423020429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t423020429 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t423020429, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T423020429_H
#ifndef LOCATIONINFO_T595263381_H
#define LOCATIONINFO_T595263381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LocationInfo
struct  LocationInfo_t595263381 
{
public:
	// System.Double UnityEngine.LocationInfo::m_Timestamp
	double ___m_Timestamp_0;
	// System.Single UnityEngine.LocationInfo::m_Latitude
	float ___m_Latitude_1;
	// System.Single UnityEngine.LocationInfo::m_Longitude
	float ___m_Longitude_2;
	// System.Single UnityEngine.LocationInfo::m_Altitude
	float ___m_Altitude_3;
	// System.Single UnityEngine.LocationInfo::m_HorizontalAccuracy
	float ___m_HorizontalAccuracy_4;
	// System.Single UnityEngine.LocationInfo::m_VerticalAccuracy
	float ___m_VerticalAccuracy_5;

public:
	inline static int32_t get_offset_of_m_Timestamp_0() { return static_cast<int32_t>(offsetof(LocationInfo_t595263381, ___m_Timestamp_0)); }
	inline double get_m_Timestamp_0() const { return ___m_Timestamp_0; }
	inline double* get_address_of_m_Timestamp_0() { return &___m_Timestamp_0; }
	inline void set_m_Timestamp_0(double value)
	{
		___m_Timestamp_0 = value;
	}

	inline static int32_t get_offset_of_m_Latitude_1() { return static_cast<int32_t>(offsetof(LocationInfo_t595263381, ___m_Latitude_1)); }
	inline float get_m_Latitude_1() const { return ___m_Latitude_1; }
	inline float* get_address_of_m_Latitude_1() { return &___m_Latitude_1; }
	inline void set_m_Latitude_1(float value)
	{
		___m_Latitude_1 = value;
	}

	inline static int32_t get_offset_of_m_Longitude_2() { return static_cast<int32_t>(offsetof(LocationInfo_t595263381, ___m_Longitude_2)); }
	inline float get_m_Longitude_2() const { return ___m_Longitude_2; }
	inline float* get_address_of_m_Longitude_2() { return &___m_Longitude_2; }
	inline void set_m_Longitude_2(float value)
	{
		___m_Longitude_2 = value;
	}

	inline static int32_t get_offset_of_m_Altitude_3() { return static_cast<int32_t>(offsetof(LocationInfo_t595263381, ___m_Altitude_3)); }
	inline float get_m_Altitude_3() const { return ___m_Altitude_3; }
	inline float* get_address_of_m_Altitude_3() { return &___m_Altitude_3; }
	inline void set_m_Altitude_3(float value)
	{
		___m_Altitude_3 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAccuracy_4() { return static_cast<int32_t>(offsetof(LocationInfo_t595263381, ___m_HorizontalAccuracy_4)); }
	inline float get_m_HorizontalAccuracy_4() const { return ___m_HorizontalAccuracy_4; }
	inline float* get_address_of_m_HorizontalAccuracy_4() { return &___m_HorizontalAccuracy_4; }
	inline void set_m_HorizontalAccuracy_4(float value)
	{
		___m_HorizontalAccuracy_4 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAccuracy_5() { return static_cast<int32_t>(offsetof(LocationInfo_t595263381, ___m_VerticalAccuracy_5)); }
	inline float get_m_VerticalAccuracy_5() const { return ___m_VerticalAccuracy_5; }
	inline float* get_address_of_m_VerticalAccuracy_5() { return &___m_VerticalAccuracy_5; }
	inline void set_m_VerticalAccuracy_5(float value)
	{
		___m_VerticalAccuracy_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCATIONINFO_T595263381_H
#ifndef CULLINGGROUPEVENT_T2057326562_H
#define CULLINGGROUPEVENT_T2057326562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroupEvent
struct  CullingGroupEvent_t2057326562 
{
public:
	// System.Int32 UnityEngine.CullingGroupEvent::m_Index
	int32_t ___m_Index_0;
	// System.Byte UnityEngine.CullingGroupEvent::m_PrevState
	uint8_t ___m_PrevState_1;
	// System.Byte UnityEngine.CullingGroupEvent::m_ThisState
	uint8_t ___m_ThisState_2;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t2057326562, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_PrevState_1() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t2057326562, ___m_PrevState_1)); }
	inline uint8_t get_m_PrevState_1() const { return ___m_PrevState_1; }
	inline uint8_t* get_address_of_m_PrevState_1() { return &___m_PrevState_1; }
	inline void set_m_PrevState_1(uint8_t value)
	{
		___m_PrevState_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisState_2() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t2057326562, ___m_ThisState_2)); }
	inline uint8_t get_m_ThisState_2() const { return ___m_ThisState_2; }
	inline uint8_t* get_address_of_m_ThisState_2() { return &___m_ThisState_2; }
	inline void set_m_ThisState_2(uint8_t value)
	{
		___m_ThisState_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULLINGGROUPEVENT_T2057326562_H
#ifndef MATRIX4X4_T3754836899_H
#define MATRIX4X4_T3754836899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t3754836899 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t3754836899, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t3754836899, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t3754836899, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t3754836899, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t3754836899, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t3754836899, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t3754836899, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t3754836899, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t3754836899, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t3754836899, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t3754836899, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t3754836899, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t3754836899, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t3754836899, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t3754836899, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t3754836899, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t3754836899_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t3754836899  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t3754836899  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t3754836899_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t3754836899  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t3754836899 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t3754836899  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t3754836899_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t3754836899  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t3754836899 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t3754836899  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T3754836899_H
#ifndef WAITFORENDOFFRAME_T4289796553_H
#define WAITFORENDOFFRAME_T4289796553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t4289796553  : public YieldInstruction_t1919479601
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORENDOFFRAME_T4289796553_H
#ifndef TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T2167186674_H
#define TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T2167186674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
struct  TouchScreenKeyboard_InternalConstructorHelperArguments_t2167186674 
{
public:
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::keyboardType
	uint32_t ___keyboardType_0;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::autocorrection
	uint32_t ___autocorrection_1;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::multiline
	uint32_t ___multiline_2;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::secure
	uint32_t ___secure_3;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::alert
	uint32_t ___alert_4;

public:
	inline static int32_t get_offset_of_keyboardType_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t2167186674, ___keyboardType_0)); }
	inline uint32_t get_keyboardType_0() const { return ___keyboardType_0; }
	inline uint32_t* get_address_of_keyboardType_0() { return &___keyboardType_0; }
	inline void set_keyboardType_0(uint32_t value)
	{
		___keyboardType_0 = value;
	}

	inline static int32_t get_offset_of_autocorrection_1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t2167186674, ___autocorrection_1)); }
	inline uint32_t get_autocorrection_1() const { return ___autocorrection_1; }
	inline uint32_t* get_address_of_autocorrection_1() { return &___autocorrection_1; }
	inline void set_autocorrection_1(uint32_t value)
	{
		___autocorrection_1 = value;
	}

	inline static int32_t get_offset_of_multiline_2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t2167186674, ___multiline_2)); }
	inline uint32_t get_multiline_2() const { return ___multiline_2; }
	inline uint32_t* get_address_of_multiline_2() { return &___multiline_2; }
	inline void set_multiline_2(uint32_t value)
	{
		___multiline_2 = value;
	}

	inline static int32_t get_offset_of_secure_3() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t2167186674, ___secure_3)); }
	inline uint32_t get_secure_3() const { return ___secure_3; }
	inline uint32_t* get_address_of_secure_3() { return &___secure_3; }
	inline void set_secure_3(uint32_t value)
	{
		___secure_3 = value;
	}

	inline static int32_t get_offset_of_alert_4() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t2167186674, ___alert_4)); }
	inline uint32_t get_alert_4() const { return ___alert_4; }
	inline uint32_t* get_address_of_alert_4() { return &___alert_4; }
	inline void set_alert_4(uint32_t value)
	{
		___alert_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T2167186674_H
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
#ifndef NETWORKPLAYER_T3120360395_H
#define NETWORKPLAYER_T3120360395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkPlayer
struct  NetworkPlayer_t3120360395 
{
public:
	// System.Int32 UnityEngine.NetworkPlayer::index
	int32_t ___index_0;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(NetworkPlayer_t3120360395, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKPLAYER_T3120360395_H
#ifndef NETWORKVIEWID_T643675311_H
#define NETWORKVIEWID_T643675311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkViewID
struct  NetworkViewID_t643675311 
{
public:
	// System.Int32 UnityEngine.NetworkViewID::a
	int32_t ___a_0;
	// System.Int32 UnityEngine.NetworkViewID::b
	int32_t ___b_1;
	// System.Int32 UnityEngine.NetworkViewID::c
	int32_t ___c_2;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(NetworkViewID_t643675311, ___a_0)); }
	inline int32_t get_a_0() const { return ___a_0; }
	inline int32_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int32_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(NetworkViewID_t643675311, ___b_1)); }
	inline int32_t get_b_1() const { return ___b_1; }
	inline int32_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int32_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(NetworkViewID_t643675311, ___c_2)); }
	inline int32_t get_c_2() const { return ___c_2; }
	inline int32_t* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(int32_t value)
	{
		___c_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKVIEWID_T643675311_H
#ifndef RPC_T378197337_H
#define RPC_T378197337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RPC
struct  RPC_t378197337  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RPC_T378197337_H
#ifndef VECTOR2_T4049733265_H
#define VECTOR2_T4049733265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t4049733265 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t4049733265, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t4049733265, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t4049733265_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t4049733265  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t4049733265  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t4049733265  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t4049733265  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t4049733265  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t4049733265  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t4049733265  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t4049733265  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t4049733265_StaticFields, ___zeroVector_2)); }
	inline Vector2_t4049733265  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t4049733265 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t4049733265  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t4049733265_StaticFields, ___oneVector_3)); }
	inline Vector2_t4049733265  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t4049733265 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t4049733265  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t4049733265_StaticFields, ___upVector_4)); }
	inline Vector2_t4049733265  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t4049733265 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t4049733265  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t4049733265_StaticFields, ___downVector_5)); }
	inline Vector2_t4049733265  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t4049733265 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t4049733265  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t4049733265_StaticFields, ___leftVector_6)); }
	inline Vector2_t4049733265  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t4049733265 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t4049733265  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t4049733265_StaticFields, ___rightVector_7)); }
	inline Vector2_t4049733265  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t4049733265 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t4049733265  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t4049733265_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t4049733265  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t4049733265 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t4049733265  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t4049733265_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t4049733265  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t4049733265 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t4049733265  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T4049733265_H
#ifndef WAITFORFIXEDUPDATE_T2088235019_H
#define WAITFORFIXEDUPDATE_T2088235019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForFixedUpdate
struct  WaitForFixedUpdate_t2088235019  : public YieldInstruction_t1919479601
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORFIXEDUPDATE_T2088235019_H
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
#ifndef WAITFORSECONDS_T1308324405_H
#define WAITFORSECONDS_T1308324405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1308324405  : public YieldInstruction_t1919479601
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1308324405, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1308324405_marshaled_pinvoke : public YieldInstruction_t1919479601_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1308324405_marshaled_com : public YieldInstruction_t1919479601_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1308324405_H
#ifndef XNODE_T2780391442_H
#define XNODE_T2780391442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XNode
struct  XNode_t2780391442  : public XObject_t4102756128
{
public:
	// System.Xml.Linq.XNode System.Xml.Linq.XNode::previous
	XNode_t2780391442 * ___previous_6;
	// System.Xml.Linq.XNode System.Xml.Linq.XNode::next
	XNode_t2780391442 * ___next_7;

public:
	inline static int32_t get_offset_of_previous_6() { return static_cast<int32_t>(offsetof(XNode_t2780391442, ___previous_6)); }
	inline XNode_t2780391442 * get_previous_6() const { return ___previous_6; }
	inline XNode_t2780391442 ** get_address_of_previous_6() { return &___previous_6; }
	inline void set_previous_6(XNode_t2780391442 * value)
	{
		___previous_6 = value;
		Il2CppCodeGenWriteBarrier((&___previous_6), value);
	}

	inline static int32_t get_offset_of_next_7() { return static_cast<int32_t>(offsetof(XNode_t2780391442, ___next_7)); }
	inline XNode_t2780391442 * get_next_7() const { return ___next_7; }
	inline XNode_t2780391442 ** get_address_of_next_7() { return &___next_7; }
	inline void set_next_7(XNode_t2780391442 * value)
	{
		___next_7 = value;
		Il2CppCodeGenWriteBarrier((&___next_7), value);
	}
};

struct XNode_t2780391442_StaticFields
{
public:
	// System.Xml.Linq.XNodeEqualityComparer System.Xml.Linq.XNode::eq_comparer
	XNodeEqualityComparer_t3883418371 * ___eq_comparer_4;
	// System.Xml.Linq.XNodeDocumentOrderComparer System.Xml.Linq.XNode::order_comparer
	XNodeDocumentOrderComparer_t830105129 * ___order_comparer_5;

public:
	inline static int32_t get_offset_of_eq_comparer_4() { return static_cast<int32_t>(offsetof(XNode_t2780391442_StaticFields, ___eq_comparer_4)); }
	inline XNodeEqualityComparer_t3883418371 * get_eq_comparer_4() const { return ___eq_comparer_4; }
	inline XNodeEqualityComparer_t3883418371 ** get_address_of_eq_comparer_4() { return &___eq_comparer_4; }
	inline void set_eq_comparer_4(XNodeEqualityComparer_t3883418371 * value)
	{
		___eq_comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___eq_comparer_4), value);
	}

	inline static int32_t get_offset_of_order_comparer_5() { return static_cast<int32_t>(offsetof(XNode_t2780391442_StaticFields, ___order_comparer_5)); }
	inline XNodeDocumentOrderComparer_t830105129 * get_order_comparer_5() const { return ___order_comparer_5; }
	inline XNodeDocumentOrderComparer_t830105129 ** get_address_of_order_comparer_5() { return &___order_comparer_5; }
	inline void set_order_comparer_5(XNodeDocumentOrderComparer_t830105129 * value)
	{
		___order_comparer_5 = value;
		Il2CppCodeGenWriteBarrier((&___order_comparer_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XNODE_T2780391442_H
#ifndef PLAYERPREFSEXCEPTION_T1521104370_H
#define PLAYERPREFSEXCEPTION_T1521104370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PlayerPrefsException
struct  PlayerPrefsException_t1521104370  : public Exception_t3144957912
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERPREFSEXCEPTION_T1521104370_H
#ifndef U24ARRAYTYPEU2416_T486650187_H
#define U24ARRAYTYPEU2416_T486650187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t486650187 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2416_t486650187__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T486650187_H
#ifndef VOID_T3045135636_H
#define VOID_T3045135636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t3045135636 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T3045135636_H
#ifndef IMECOMPOSITIONMODE_T787529871_H
#define IMECOMPOSITIONMODE_T787529871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.IMECompositionMode
struct  IMECompositionMode_t787529871 
{
public:
	// System.Int32 UnityEngine.IMECompositionMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(IMECompositionMode_t787529871, ___value___1)); }
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
#endif // IMECOMPOSITIONMODE_T787529871_H
#ifndef TOUCHTYPE_T3151494483_H
#define TOUCHTYPE_T3151494483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t3151494483 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchType_t3151494483, ___value___1)); }
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
#endif // TOUCHTYPE_T3151494483_H
#ifndef LOCATIONSERVICESTATUS_T1832580834_H
#define LOCATIONSERVICESTATUS_T1832580834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LocationServiceStatus
struct  LocationServiceStatus_t1832580834 
{
public:
	// System.Int32 UnityEngine.LocationServiceStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LocationServiceStatus_t1832580834, ___value___1)); }
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
#endif // LOCATIONSERVICESTATUS_T1832580834_H
#ifndef OBJECT_T2959123960_H
#define OBJECT_T2959123960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t2959123960  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t2959123960, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t2959123960_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t2959123960_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t2959123960_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t2959123960_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T2959123960_H
#ifndef INTERNALVERTEXCHANNELTYPE_T1441119145_H
#define INTERNALVERTEXCHANNELTYPE_T1441119145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalVertexChannelType
struct  InternalVertexChannelType_t1441119145 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalVertexChannelType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalVertexChannelType_t1441119145, ___value___1)); }
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
#endif // INTERNALVERTEXCHANNELTYPE_T1441119145_H
#ifndef INTERNALSHADERCHANNEL_T1950882005_H
#define INTERNALSHADERCHANNEL_T1950882005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalShaderChannel
struct  InternalShaderChannel_t1950882005 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalShaderChannel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalShaderChannel_t1950882005, ___value___1)); }
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
#endif // INTERNALSHADERCHANNEL_T1950882005_H
#ifndef NETWORKMESSAGEINFO_T1416739033_H
#define NETWORKMESSAGEINFO_T1416739033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkMessageInfo
struct  NetworkMessageInfo_t1416739033 
{
public:
	// System.Double UnityEngine.NetworkMessageInfo::m_TimeStamp
	double ___m_TimeStamp_0;
	// UnityEngine.NetworkPlayer UnityEngine.NetworkMessageInfo::m_Sender
	NetworkPlayer_t3120360395  ___m_Sender_1;
	// UnityEngine.NetworkViewID UnityEngine.NetworkMessageInfo::m_ViewID
	NetworkViewID_t643675311  ___m_ViewID_2;

public:
	inline static int32_t get_offset_of_m_TimeStamp_0() { return static_cast<int32_t>(offsetof(NetworkMessageInfo_t1416739033, ___m_TimeStamp_0)); }
	inline double get_m_TimeStamp_0() const { return ___m_TimeStamp_0; }
	inline double* get_address_of_m_TimeStamp_0() { return &___m_TimeStamp_0; }
	inline void set_m_TimeStamp_0(double value)
	{
		___m_TimeStamp_0 = value;
	}

	inline static int32_t get_offset_of_m_Sender_1() { return static_cast<int32_t>(offsetof(NetworkMessageInfo_t1416739033, ___m_Sender_1)); }
	inline NetworkPlayer_t3120360395  get_m_Sender_1() const { return ___m_Sender_1; }
	inline NetworkPlayer_t3120360395 * get_address_of_m_Sender_1() { return &___m_Sender_1; }
	inline void set_m_Sender_1(NetworkPlayer_t3120360395  value)
	{
		___m_Sender_1 = value;
	}

	inline static int32_t get_offset_of_m_ViewID_2() { return static_cast<int32_t>(offsetof(NetworkMessageInfo_t1416739033, ___m_ViewID_2)); }
	inline NetworkViewID_t643675311  get_m_ViewID_2() const { return ___m_ViewID_2; }
	inline NetworkViewID_t643675311 * get_address_of_m_ViewID_2() { return &___m_ViewID_2; }
	inline void set_m_ViewID_2(NetworkViewID_t643675311  value)
	{
		___m_ViewID_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKMESSAGEINFO_T1416739033_H
#ifndef BOUNDS_T853329207_H
#define BOUNDS_T853329207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t853329207 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t1731499529  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t1731499529  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t853329207, ___m_Center_0)); }
	inline Vector3_t1731499529  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t1731499529 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t1731499529  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t853329207, ___m_Extents_1)); }
	inline Vector3_t1731499529  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t1731499529 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t1731499529  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T853329207_H
#ifndef TOUCHPHASE_T882638677_H
#define TOUCHPHASE_T882638677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t882638677 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchPhase_t882638677, ___value___1)); }
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
#endif // TOUCHPHASE_T882638677_H
#ifndef BITSTREAM_T3767076773_H
#define BITSTREAM_T3767076773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BitStream
struct  BitStream_t3767076773  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.BitStream::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(BitStream_t3767076773, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITSTREAM_T3767076773_H
#ifndef ANIMATIONCURVE_T1194302662_H
#define ANIMATIONCURVE_T1194302662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t1194302662  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t1194302662, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t1194302662_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t1194302662_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T1194302662_H
#ifndef LOGTYPE_T4125087975_H
#define LOGTYPE_T4125087975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t4125087975 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t4125087975, ___value___1)); }
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
#endif // LOGTYPE_T4125087975_H
#ifndef XCONTAINER_T924164084_H
#define XCONTAINER_T924164084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XContainer
struct  XContainer_t924164084  : public XNode_t2780391442
{
public:
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer::first
	XNode_t2780391442 * ___first_8;
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer::last
	XNode_t2780391442 * ___last_9;

public:
	inline static int32_t get_offset_of_first_8() { return static_cast<int32_t>(offsetof(XContainer_t924164084, ___first_8)); }
	inline XNode_t2780391442 * get_first_8() const { return ___first_8; }
	inline XNode_t2780391442 ** get_address_of_first_8() { return &___first_8; }
	inline void set_first_8(XNode_t2780391442 * value)
	{
		___first_8 = value;
		Il2CppCodeGenWriteBarrier((&___first_8), value);
	}

	inline static int32_t get_offset_of_last_9() { return static_cast<int32_t>(offsetof(XContainer_t924164084, ___last_9)); }
	inline XNode_t2780391442 * get_last_9() const { return ___last_9; }
	inline XNode_t2780391442 ** get_address_of_last_9() { return &___last_9; }
	inline void set_last_9(XNode_t2780391442 * value)
	{
		___last_9 = value;
		Il2CppCodeGenWriteBarrier((&___last_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XCONTAINER_T924164084_H
#ifndef DELEGATE_T4108129447_H
#define DELEGATE_T4108129447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t4108129447  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1857717760 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t4108129447, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t4108129447, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t4108129447, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t4108129447, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t4108129447, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t4108129447, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t4108129447, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t4108129447, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t4108129447, ___data_8)); }
	inline DelegateData_t1857717760 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1857717760 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1857717760 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T4108129447_H
#ifndef CULLINGGROUP_T2290735057_H
#define CULLINGGROUP_T2290735057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup
struct  CullingGroup_t2290735057  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.CullingGroup::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.CullingGroup/StateChanged UnityEngine.CullingGroup::m_OnStateChanged
	StateChanged_t1214506628 * ___m_OnStateChanged_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CullingGroup_t2290735057, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_OnStateChanged_1() { return static_cast<int32_t>(offsetof(CullingGroup_t2290735057, ___m_OnStateChanged_1)); }
	inline StateChanged_t1214506628 * get_m_OnStateChanged_1() const { return ___m_OnStateChanged_1; }
	inline StateChanged_t1214506628 ** get_address_of_m_OnStateChanged_1() { return &___m_OnStateChanged_1; }
	inline void set_m_OnStateChanged_1(StateChanged_t1214506628 * value)
	{
		___m_OnStateChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnStateChanged_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.CullingGroup
struct CullingGroup_t2290735057_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
// Native definition for COM marshalling of UnityEngine.CullingGroup
struct CullingGroup_t2290735057_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
#endif // CULLINGGROUP_T2290735057_H
#ifndef ASYNCOPERATION_T1605716278_H
#define ASYNCOPERATION_T1605716278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1605716278  : public YieldInstruction_t1919479601
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1605716278, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1605716278_marshaled_pinvoke : public YieldInstruction_t1919479601_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1605716278_marshaled_com : public YieldInstruction_t1919479601_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ASYNCOPERATION_T1605716278_H
#ifndef COROUTINE_T4040213945_H
#define COROUTINE_T4040213945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t4040213945  : public YieldInstruction_t1919479601
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t4040213945, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t4040213945_marshaled_pinvoke : public YieldInstruction_t1919479601_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t4040213945_marshaled_com : public YieldInstruction_t1919479601_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T4040213945_H
#ifndef XPROCESSINGINSTRUCTION_T3537113434_H
#define XPROCESSINGINSTRUCTION_T3537113434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XProcessingInstruction
struct  XProcessingInstruction_t3537113434  : public XNode_t2780391442
{
public:
	// System.String System.Xml.Linq.XProcessingInstruction::name
	String_t* ___name_8;
	// System.String System.Xml.Linq.XProcessingInstruction::data
	String_t* ___data_9;

public:
	inline static int32_t get_offset_of_name_8() { return static_cast<int32_t>(offsetof(XProcessingInstruction_t3537113434, ___name_8)); }
	inline String_t* get_name_8() const { return ___name_8; }
	inline String_t** get_address_of_name_8() { return &___name_8; }
	inline void set_name_8(String_t* value)
	{
		___name_8 = value;
		Il2CppCodeGenWriteBarrier((&___name_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(XProcessingInstruction_t3537113434, ___data_9)); }
	inline String_t* get_data_9() const { return ___data_9; }
	inline String_t** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(String_t* value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPROCESSINGINSTRUCTION_T3537113434_H
#ifndef COMPARERESULT_T531952043_H
#define COMPARERESULT_T531952043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XNodeDocumentOrderComparer/CompareResult
struct  CompareResult_t531952043 
{
public:
	// System.Int32 System.Xml.Linq.XNodeDocumentOrderComparer/CompareResult::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompareResult_t531952043, ___value___1)); }
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
#endif // COMPARERESULT_T531952043_H
#ifndef TOUCHSCREENKEYBOARD_T1443217069_H
#define TOUCHSCREENKEYBOARD_T1443217069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard
struct  TouchScreenKeyboard_t1443217069  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TouchScreenKeyboard::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t1443217069, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARD_T1443217069_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2554832845_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2554832845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t2554832845  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t2554832845_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU2416_t486650187  ___U24U24fieldU2D0_0;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2554832845_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU2416_t486650187  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU2416_t486650187 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU2416_t486650187  value)
	{
		___U24U24fieldU2D0_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2554832845_H
#ifndef CURSORLOCKMODE_T1421414223_H
#define CURSORLOCKMODE_T1421414223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CursorLockMode
struct  CursorLockMode_t1421414223 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CursorLockMode_t1421414223, ___value___1)); }
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
#endif // CURSORLOCKMODE_T1421414223_H
#ifndef DISPLAY_T957679174_H
#define DISPLAY_T957679174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display
struct  Display_t957679174  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t ___nativeDisplay_0;

public:
	inline static int32_t get_offset_of_nativeDisplay_0() { return static_cast<int32_t>(offsetof(Display_t957679174, ___nativeDisplay_0)); }
	inline IntPtr_t get_nativeDisplay_0() const { return ___nativeDisplay_0; }
	inline IntPtr_t* get_address_of_nativeDisplay_0() { return &___nativeDisplay_0; }
	inline void set_nativeDisplay_0(IntPtr_t value)
	{
		___nativeDisplay_0 = value;
	}
};

struct Display_t957679174_StaticFields
{
public:
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t3947932131* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t957679174 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t2504994180 * ___onDisplaysUpdated_3;

public:
	inline static int32_t get_offset_of_displays_1() { return static_cast<int32_t>(offsetof(Display_t957679174_StaticFields, ___displays_1)); }
	inline DisplayU5BU5D_t3947932131* get_displays_1() const { return ___displays_1; }
	inline DisplayU5BU5D_t3947932131** get_address_of_displays_1() { return &___displays_1; }
	inline void set_displays_1(DisplayU5BU5D_t3947932131* value)
	{
		___displays_1 = value;
		Il2CppCodeGenWriteBarrier((&___displays_1), value);
	}

	inline static int32_t get_offset_of__mainDisplay_2() { return static_cast<int32_t>(offsetof(Display_t957679174_StaticFields, ____mainDisplay_2)); }
	inline Display_t957679174 * get__mainDisplay_2() const { return ____mainDisplay_2; }
	inline Display_t957679174 ** get_address_of__mainDisplay_2() { return &____mainDisplay_2; }
	inline void set__mainDisplay_2(Display_t957679174 * value)
	{
		____mainDisplay_2 = value;
		Il2CppCodeGenWriteBarrier((&____mainDisplay_2), value);
	}

	inline static int32_t get_offset_of_onDisplaysUpdated_3() { return static_cast<int32_t>(offsetof(Display_t957679174_StaticFields, ___onDisplaysUpdated_3)); }
	inline DisplaysUpdatedDelegate_t2504994180 * get_onDisplaysUpdated_3() const { return ___onDisplaysUpdated_3; }
	inline DisplaysUpdatedDelegate_t2504994180 ** get_address_of_onDisplaysUpdated_3() { return &___onDisplaysUpdated_3; }
	inline void set_onDisplaysUpdated_3(DisplaysUpdatedDelegate_t2504994180 * value)
	{
		___onDisplaysUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((&___onDisplaysUpdated_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAY_T957679174_H
#ifndef GRADIENT_T4115282030_H
#define GRADIENT_T4115282030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gradient
struct  Gradient_t4115282030  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Gradient_t4115282030, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_t4115282030_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_t4115282030_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // GRADIENT_T4115282030_H
#ifndef XTEXT_T2717582915_H
#define XTEXT_T2717582915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XText
struct  XText_t2717582915  : public XNode_t2780391442
{
public:
	// System.String System.Xml.Linq.XText::value
	String_t* ___value_8;

public:
	inline static int32_t get_offset_of_value_8() { return static_cast<int32_t>(offsetof(XText_t2717582915, ___value_8)); }
	inline String_t* get_value_8() const { return ___value_8; }
	inline String_t** get_address_of_value_8() { return &___value_8; }
	inline void set_value_8(String_t* value)
	{
		___value_8 = value;
		Il2CppCodeGenWriteBarrier((&___value_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XTEXT_T2717582915_H
#ifndef RECTOFFSET_T2543238708_H
#define RECTOFFSET_T2543238708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t2543238708  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t2543238708, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t2543238708, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t2543238708_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t2543238708_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T2543238708_H
#ifndef MATERIALPROPERTYBLOCK_T3284754277_H
#define MATERIALPROPERTYBLOCK_T3284754277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MaterialPropertyBlock
struct  MaterialPropertyBlock_t3284754277  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t3284754277, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALPROPERTYBLOCK_T3284754277_H
#ifndef XDOCUMENTTYPE_T1347471450_H
#define XDOCUMENTTYPE_T1347471450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XDocumentType
struct  XDocumentType_t1347471450  : public XNode_t2780391442
{
public:
	// System.String System.Xml.Linq.XDocumentType::name
	String_t* ___name_8;
	// System.String System.Xml.Linq.XDocumentType::pubid
	String_t* ___pubid_9;
	// System.String System.Xml.Linq.XDocumentType::sysid
	String_t* ___sysid_10;
	// System.String System.Xml.Linq.XDocumentType::intSubset
	String_t* ___intSubset_11;

public:
	inline static int32_t get_offset_of_name_8() { return static_cast<int32_t>(offsetof(XDocumentType_t1347471450, ___name_8)); }
	inline String_t* get_name_8() const { return ___name_8; }
	inline String_t** get_address_of_name_8() { return &___name_8; }
	inline void set_name_8(String_t* value)
	{
		___name_8 = value;
		Il2CppCodeGenWriteBarrier((&___name_8), value);
	}

	inline static int32_t get_offset_of_pubid_9() { return static_cast<int32_t>(offsetof(XDocumentType_t1347471450, ___pubid_9)); }
	inline String_t* get_pubid_9() const { return ___pubid_9; }
	inline String_t** get_address_of_pubid_9() { return &___pubid_9; }
	inline void set_pubid_9(String_t* value)
	{
		___pubid_9 = value;
		Il2CppCodeGenWriteBarrier((&___pubid_9), value);
	}

	inline static int32_t get_offset_of_sysid_10() { return static_cast<int32_t>(offsetof(XDocumentType_t1347471450, ___sysid_10)); }
	inline String_t* get_sysid_10() const { return ___sysid_10; }
	inline String_t** get_address_of_sysid_10() { return &___sysid_10; }
	inline void set_sysid_10(String_t* value)
	{
		___sysid_10 = value;
		Il2CppCodeGenWriteBarrier((&___sysid_10), value);
	}

	inline static int32_t get_offset_of_intSubset_11() { return static_cast<int32_t>(offsetof(XDocumentType_t1347471450, ___intSubset_11)); }
	inline String_t* get_intSubset_11() const { return ___intSubset_11; }
	inline String_t** get_address_of_intSubset_11() { return &___intSubset_11; }
	inline void set_intSubset_11(String_t* value)
	{
		___intSubset_11 = value;
		Il2CppCodeGenWriteBarrier((&___intSubset_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XDOCUMENTTYPE_T1347471450_H
#ifndef XELEMENT_T4188750518_H
#define XELEMENT_T4188750518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XElement
struct  XElement_t4188750518  : public XContainer_t924164084
{
public:
	// System.Xml.Linq.XName System.Xml.Linq.XElement::name
	XName_t1313602166 * ___name_11;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::attr_first
	XAttribute_t584204258 * ___attr_first_12;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::attr_last
	XAttribute_t584204258 * ___attr_last_13;
	// System.Boolean System.Xml.Linq.XElement::explicit_is_empty
	bool ___explicit_is_empty_14;

public:
	inline static int32_t get_offset_of_name_11() { return static_cast<int32_t>(offsetof(XElement_t4188750518, ___name_11)); }
	inline XName_t1313602166 * get_name_11() const { return ___name_11; }
	inline XName_t1313602166 ** get_address_of_name_11() { return &___name_11; }
	inline void set_name_11(XName_t1313602166 * value)
	{
		___name_11 = value;
		Il2CppCodeGenWriteBarrier((&___name_11), value);
	}

	inline static int32_t get_offset_of_attr_first_12() { return static_cast<int32_t>(offsetof(XElement_t4188750518, ___attr_first_12)); }
	inline XAttribute_t584204258 * get_attr_first_12() const { return ___attr_first_12; }
	inline XAttribute_t584204258 ** get_address_of_attr_first_12() { return &___attr_first_12; }
	inline void set_attr_first_12(XAttribute_t584204258 * value)
	{
		___attr_first_12 = value;
		Il2CppCodeGenWriteBarrier((&___attr_first_12), value);
	}

	inline static int32_t get_offset_of_attr_last_13() { return static_cast<int32_t>(offsetof(XElement_t4188750518, ___attr_last_13)); }
	inline XAttribute_t584204258 * get_attr_last_13() const { return ___attr_last_13; }
	inline XAttribute_t584204258 ** get_address_of_attr_last_13() { return &___attr_last_13; }
	inline void set_attr_last_13(XAttribute_t584204258 * value)
	{
		___attr_last_13 = value;
		Il2CppCodeGenWriteBarrier((&___attr_last_13), value);
	}

	inline static int32_t get_offset_of_explicit_is_empty_14() { return static_cast<int32_t>(offsetof(XElement_t4188750518, ___explicit_is_empty_14)); }
	inline bool get_explicit_is_empty_14() const { return ___explicit_is_empty_14; }
	inline bool* get_address_of_explicit_is_empty_14() { return &___explicit_is_empty_14; }
	inline void set_explicit_is_empty_14(bool value)
	{
		___explicit_is_empty_14 = value;
	}
};

struct XElement_t4188750518_StaticFields
{
public:
	// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XElement::emptySequence
	RuntimeObject* ___emptySequence_10;

public:
	inline static int32_t get_offset_of_emptySequence_10() { return static_cast<int32_t>(offsetof(XElement_t4188750518_StaticFields, ___emptySequence_10)); }
	inline RuntimeObject* get_emptySequence_10() const { return ___emptySequence_10; }
	inline RuntimeObject** get_address_of_emptySequence_10() { return &___emptySequence_10; }
	inline void set_emptySequence_10(RuntimeObject* value)
	{
		___emptySequence_10 = value;
		Il2CppCodeGenWriteBarrier((&___emptySequence_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XELEMENT_T4188750518_H
#ifndef XDOCUMENT_T2593465662_H
#define XDOCUMENT_T2593465662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XDocument
struct  XDocument_t2593465662  : public XContainer_t924164084
{
public:
	// System.Xml.Linq.XDeclaration System.Xml.Linq.XDocument::xmldecl
	XDeclaration_t791999680 * ___xmldecl_10;

public:
	inline static int32_t get_offset_of_xmldecl_10() { return static_cast<int32_t>(offsetof(XDocument_t2593465662, ___xmldecl_10)); }
	inline XDeclaration_t791999680 * get_xmldecl_10() const { return ___xmldecl_10; }
	inline XDeclaration_t791999680 ** get_address_of_xmldecl_10() { return &___xmldecl_10; }
	inline void set_xmldecl_10(XDeclaration_t791999680 * value)
	{
		___xmldecl_10 = value;
		Il2CppCodeGenWriteBarrier((&___xmldecl_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XDOCUMENT_T2593465662_H
#ifndef SCRIPTABLEOBJECT_T2643846172_H
#define SCRIPTABLEOBJECT_T2643846172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2643846172  : public Object_t2959123960
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2643846172_marshaled_pinvoke : public Object_t2959123960_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2643846172_marshaled_com : public Object_t2959123960_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2643846172_H
#ifndef FAILEDTOLOADSCRIPTOBJECT_T286848765_H
#define FAILEDTOLOADSCRIPTOBJECT_T286848765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FailedToLoadScriptObject
struct  FailedToLoadScriptObject_t286848765  : public Object_t2959123960
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.FailedToLoadScriptObject
struct FailedToLoadScriptObject_t286848765_marshaled_pinvoke : public Object_t2959123960_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.FailedToLoadScriptObject
struct FailedToLoadScriptObject_t286848765_marshaled_com : public Object_t2959123960_marshaled_com
{
};
#endif // FAILEDTOLOADSCRIPTOBJECT_T286848765_H
#ifndef TOUCH_T3430142624_H
#define TOUCH_T3430142624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t3430142624 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t4049733265  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t4049733265  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t4049733265  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t3430142624, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t3430142624, ___m_Position_1)); }
	inline Vector2_t4049733265  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t4049733265 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t4049733265  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t3430142624, ___m_RawPosition_2)); }
	inline Vector2_t4049733265  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t4049733265 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t4049733265  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t3430142624, ___m_PositionDelta_3)); }
	inline Vector2_t4049733265  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t4049733265 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t4049733265  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t3430142624, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t3430142624, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t3430142624, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t3430142624, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t3430142624, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t3430142624, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t3430142624, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t3430142624, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t3430142624, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t3430142624, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T3430142624_H
#ifndef RENDERSETTINGS_T947043548_H
#define RENDERSETTINGS_T947043548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderSettings
struct  RenderSettings_t947043548  : public Object_t2959123960
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERSETTINGS_T947043548_H
#ifndef LIGHTMAPSETTINGS_T2018807894_H
#define LIGHTMAPSETTINGS_T2018807894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LightmapSettings
struct  LightmapSettings_t2018807894  : public Object_t2959123960
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHTMAPSETTINGS_T2018807894_H
#ifndef ASSETBUNDLECREATEREQUEST_T1746845331_H
#define ASSETBUNDLECREATEREQUEST_T1746845331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundleCreateRequest
struct  AssetBundleCreateRequest_t1746845331  : public AsyncOperation_t1605716278
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSETBUNDLECREATEREQUEST_T1746845331_H
#ifndef COMPONENT_T1644057383_H
#define COMPONENT_T1644057383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1644057383  : public Object_t2959123960
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1644057383_H
#ifndef MESH_T1245197510_H
#define MESH_T1245197510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t1245197510  : public Object_t2959123960
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T1245197510_H
#ifndef LIGHTPROBES_T3210574878_H
#define LIGHTPROBES_T3210574878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LightProbes
struct  LightProbes_t3210574878  : public Object_t2959123960
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHTPROBES_T3210574878_H
#ifndef MULTICASTDELEGATE_T3965931391_H
#define MULTICASTDELEGATE_T3965931391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3965931391  : public Delegate_t4108129447
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t3965931391 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t3965931391 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3965931391, ___prev_9)); }
	inline MulticastDelegate_t3965931391 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t3965931391 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t3965931391 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3965931391, ___kpm_next_10)); }
	inline MulticastDelegate_t3965931391 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t3965931391 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t3965931391 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T3965931391_H
#ifndef GAMEOBJECT_T2713501050_H
#define GAMEOBJECT_T2713501050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t2713501050  : public Object_t2959123960
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T2713501050_H
#ifndef QUALITYSETTINGS_T2940486503_H
#define QUALITYSETTINGS_T2940486503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.QualitySettings
struct  QualitySettings_t2940486503  : public Object_t2959123960
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUALITYSETTINGS_T2940486503_H
#ifndef ASSETBUNDLE_T1608669699_H
#define ASSETBUNDLE_T1608669699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundle
struct  AssetBundle_t1608669699  : public Object_t2959123960
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSETBUNDLE_T1608669699_H
#ifndef ASSETBUNDLEREQUEST_T2746027238_H
#define ASSETBUNDLEREQUEST_T2746027238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundleRequest
struct  AssetBundleRequest_t2746027238  : public AsyncOperation_t1605716278
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t2746027238_marshaled_pinvoke : public AsyncOperation_t1605716278_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t2746027238_marshaled_com : public AsyncOperation_t1605716278_marshaled_com
{
};
#endif // ASSETBUNDLEREQUEST_T2746027238_H
#ifndef LOGCALLBACK_T2708451746_H
#define LOGCALLBACK_T2708451746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LogCallback
struct  LogCallback_t2708451746  : public MulticastDelegate_t3965931391
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGCALLBACK_T2708451746_H
#ifndef LOWMEMORYCALLBACK_T2407671705_H
#define LOWMEMORYCALLBACK_T2407671705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LowMemoryCallback
struct  LowMemoryCallback_t2407671705  : public MulticastDelegate_t3965931391
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOWMEMORYCALLBACK_T2407671705_H
#ifndef BEHAVIOUR_T4092056886_H
#define BEHAVIOUR_T4092056886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t4092056886  : public Component_t1644057383
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T4092056886_H
#ifndef STATECHANGED_T1214506628_H
#define STATECHANGED_T1214506628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup/StateChanged
struct  StateChanged_t1214506628  : public MulticastDelegate_t3965931391
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATECHANGED_T1214506628_H
#ifndef RENDERER_T1911939268_H
#define RENDERER_T1911939268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t1911939268  : public Component_t1644057383
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T1911939268_H
#ifndef DISPLAYSUPDATEDDELEGATE_T2504994180_H
#define DISPLAYSUPDATEDDELEGATE_T2504994180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display/DisplaysUpdatedDelegate
struct  DisplaysUpdatedDelegate_t2504994180  : public MulticastDelegate_t3965931391
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYSUPDATEDDELEGATE_T2504994180_H
#ifndef CAMERACALLBACK_T2234510627_H
#define CAMERACALLBACK_T2234510627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera/CameraCallback
struct  CameraCallback_t2234510627  : public MulticastDelegate_t3965931391
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACALLBACK_T2234510627_H
#ifndef MESHFILTER_T3207912565_H
#define MESHFILTER_T3207912565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t3207912565  : public Component_t1644057383
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T3207912565_H
#ifndef MONOBEHAVIOUR_T4274739169_H
#define MONOBEHAVIOUR_T4274739169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4274739169  : public Behaviour_t4092056886
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4274739169_H
#ifndef CAMERA_T3598185681_H
#define CAMERA_T3598185681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t3598185681  : public Behaviour_t4092056886
{
public:

public:
};

struct Camera_t3598185681_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t2234510627 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t2234510627 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t2234510627 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t3598185681_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t2234510627 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t2234510627 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t2234510627 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t3598185681_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t2234510627 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t2234510627 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t2234510627 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t3598185681_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t2234510627 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t2234510627 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t2234510627 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T3598185681_H
#ifndef LIGHT_T4251631732_H
#define LIGHT_T4251631732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Light
struct  Light_t4251631732  : public Behaviour_t4092056886
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_2;

public:
	inline static int32_t get_offset_of_m_BakedIndex_2() { return static_cast<int32_t>(offsetof(Light_t4251631732, ___m_BakedIndex_2)); }
	inline int32_t get_m_BakedIndex_2() const { return ___m_BakedIndex_2; }
	inline int32_t* get_address_of_m_BakedIndex_2() { return &___m_BakedIndex_2; }
	inline void set_m_BakedIndex_2(int32_t value)
	{
		___m_BakedIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHT_T4251631732_H
#ifndef MESHRENDERER_T3083502508_H
#define MESHRENDERER_T3083502508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t3083502508  : public Renderer_t1911939268
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T3083502508_H
#ifndef GUIELEMENT_T1772263977_H
#define GUIELEMENT_T1772263977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIElement
struct  GUIElement_t1772263977  : public Behaviour_t4092056886
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIELEMENT_T1772263977_H
#ifndef NETWORKVIEW_T4004206655_H
#define NETWORKVIEW_T4004206655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkView
struct  NetworkView_t4004206655  : public Behaviour_t4092056886
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKVIEW_T4004206655_H
#ifndef GUILAYER_T1710878832_H
#define GUILAYER_T1710878832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayer
struct  GUILayer_t1710878832  : public Behaviour_t4092056886
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYER_T1710878832_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3000 = { sizeof (XContainer_t924164084), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3000[2] = 
{
	XContainer_t924164084::get_offset_of_first_8(),
	XContainer_t924164084::get_offset_of_last_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3001 = { sizeof (U3CNodesU3Ec__Iterator1A_t1192396320), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3001[5] = 
{
	U3CNodesU3Ec__Iterator1A_t1192396320::get_offset_of_U3CnU3E__0_0(),
	U3CNodesU3Ec__Iterator1A_t1192396320::get_offset_of_U3CnextU3E__1_1(),
	U3CNodesU3Ec__Iterator1A_t1192396320::get_offset_of_U24PC_2(),
	U3CNodesU3Ec__Iterator1A_t1192396320::get_offset_of_U24current_3(),
	U3CNodesU3Ec__Iterator1A_t1192396320::get_offset_of_U3CU3Ef__this_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3002 = { sizeof (XDeclaration_t791999680), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3002[3] = 
{
	XDeclaration_t791999680::get_offset_of_encoding_0(),
	XDeclaration_t791999680::get_offset_of_standalone_1(),
	XDeclaration_t791999680::get_offset_of_version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3003 = { sizeof (XDocument_t2593465662), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3003[1] = 
{
	XDocument_t2593465662::get_offset_of_xmldecl_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3004 = { sizeof (XDocumentType_t1347471450), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3004[4] = 
{
	XDocumentType_t1347471450::get_offset_of_name_8(),
	XDocumentType_t1347471450::get_offset_of_pubid_9(),
	XDocumentType_t1347471450::get_offset_of_sysid_10(),
	XDocumentType_t1347471450::get_offset_of_intSubset_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3005 = { sizeof (XElement_t4188750518), -1, sizeof(XElement_t4188750518_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3005[5] = 
{
	XElement_t4188750518_StaticFields::get_offset_of_emptySequence_10(),
	XElement_t4188750518::get_offset_of_name_11(),
	XElement_t4188750518::get_offset_of_attr_first_12(),
	XElement_t4188750518::get_offset_of_attr_last_13(),
	XElement_t4188750518::get_offset_of_explicit_is_empty_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3006 = { sizeof (U3CAttributesU3Ec__Iterator20_t1301852267), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3006[5] = 
{
	U3CAttributesU3Ec__Iterator20_t1301852267::get_offset_of_U3CaU3E__0_0(),
	U3CAttributesU3Ec__Iterator20_t1301852267::get_offset_of_U3CnextU3E__1_1(),
	U3CAttributesU3Ec__Iterator20_t1301852267::get_offset_of_U24PC_2(),
	U3CAttributesU3Ec__Iterator20_t1301852267::get_offset_of_U24current_3(),
	U3CAttributesU3Ec__Iterator20_t1301852267::get_offset_of_U3CU3Ef__this_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3007 = { sizeof (U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t140612106), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3007[8] = 
{
	U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t140612106::get_offset_of_U3CelU3E__0_0(),
	U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t140612106::get_offset_of_U3CU24s_68U3E__1_1(),
	U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t140612106::get_offset_of_U3CaU3E__2_2(),
	U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t140612106::get_offset_of_ns_3(),
	U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t140612106::get_offset_of_U24PC_4(),
	U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t140612106::get_offset_of_U24current_5(),
	U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t140612106::get_offset_of_U3CU24U3Ens_6(),
	U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t140612106::get_offset_of_U3CU3Ef__this_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3008 = { sizeof (XName_t1313602166), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3008[2] = 
{
	XName_t1313602166::get_offset_of_local_0(),
	XName_t1313602166::get_offset_of_ns_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3009 = { sizeof (XNamespace_t3902556772), -1, sizeof(XNamespace_t3902556772_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3009[6] = 
{
	XNamespace_t3902556772_StaticFields::get_offset_of_blank_0(),
	XNamespace_t3902556772_StaticFields::get_offset_of_xml_1(),
	XNamespace_t3902556772_StaticFields::get_offset_of_xmlns_2(),
	XNamespace_t3902556772_StaticFields::get_offset_of_nstable_3(),
	XNamespace_t3902556772::get_offset_of_uri_4(),
	XNamespace_t3902556772::get_offset_of_table_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3010 = { sizeof (XNode_t2780391442), -1, sizeof(XNode_t2780391442_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3010[4] = 
{
	XNode_t2780391442_StaticFields::get_offset_of_eq_comparer_4(),
	XNode_t2780391442_StaticFields::get_offset_of_order_comparer_5(),
	XNode_t2780391442::get_offset_of_previous_6(),
	XNode_t2780391442::get_offset_of_next_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3011 = { sizeof (XNodeDocumentOrderComparer_t830105129), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3012 = { sizeof (CompareResult_t531952043)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3012[9] = 
{
	CompareResult_t531952043::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3013 = { sizeof (XNodeEqualityComparer_t3883418371), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3014 = { sizeof (XObject_t4102756128), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3014[4] = 
{
	XObject_t4102756128::get_offset_of_owner_0(),
	XObject_t4102756128::get_offset_of_baseuri_1(),
	XObject_t4102756128::get_offset_of_line_2(),
	XObject_t4102756128::get_offset_of_column_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3015 = { sizeof (XProcessingInstruction_t3537113434), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3015[2] = 
{
	XProcessingInstruction_t3537113434::get_offset_of_name_8(),
	XProcessingInstruction_t3537113434::get_offset_of_data_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3016 = { sizeof (XText_t2717582915), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3016[1] = 
{
	XText_t2717582915::get_offset_of_value_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3017 = { sizeof (XUtil_t846057026), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3018 = { sizeof (U3CExpandArrayU3Ec__Iterator25_t4163351297), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3018[9] = 
{
	U3CExpandArrayU3Ec__Iterator25_t4163351297::get_offset_of_o_0(),
	U3CExpandArrayU3Ec__Iterator25_t4163351297::get_offset_of_U3CnU3E__0_1(),
	U3CExpandArrayU3Ec__Iterator25_t4163351297::get_offset_of_U3CU24s_86U3E__1_2(),
	U3CExpandArrayU3Ec__Iterator25_t4163351297::get_offset_of_U3CobjU3E__2_3(),
	U3CExpandArrayU3Ec__Iterator25_t4163351297::get_offset_of_U3CU24s_87U3E__3_4(),
	U3CExpandArrayU3Ec__Iterator25_t4163351297::get_offset_of_U3CooU3E__4_5(),
	U3CExpandArrayU3Ec__Iterator25_t4163351297::get_offset_of_U24PC_6(),
	U3CExpandArrayU3Ec__Iterator25_t4163351297::get_offset_of_U24current_7(),
	U3CExpandArrayU3Ec__Iterator25_t4163351297::get_offset_of_U3CU24U3Eo_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3019 = { sizeof (U3CPrivateImplementationDetailsU3E_t2554832845), -1, sizeof(U3CPrivateImplementationDetailsU3E_t2554832845_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3019[1] = 
{
	U3CPrivateImplementationDetailsU3E_t2554832845_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3020 = { sizeof (U24ArrayTypeU2416_t486650187)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2416_t486650187 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3021 = { sizeof (U3CModuleU3E_t1335858004), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3022 = { sizeof (Application_t2705976006), -1, sizeof(Application_t2705976006_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3022[4] = 
{
	Application_t2705976006_StaticFields::get_offset_of_lowMemory_0(),
	Application_t2705976006_StaticFields::get_offset_of_s_LogCallbackHandler_1(),
	Application_t2705976006_StaticFields::get_offset_of_s_LogCallbackHandlerThreaded_2(),
	Application_t2705976006_StaticFields::get_offset_of_onBeforeRender_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3023 = { sizeof (LowMemoryCallback_t2407671705), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3024 = { sizeof (LogCallback_t2708451746), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3025 = { sizeof (AssetBundleCreateRequest_t1746845331), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3026 = { sizeof (AssetBundleRequest_t2746027238), sizeof(AssetBundleRequest_t2746027238_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3027 = { sizeof (AssetBundle_t1608669699), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3028 = { sizeof (AsyncOperation_t1605716278), sizeof(AsyncOperation_t1605716278_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3028[1] = 
{
	AsyncOperation_t1605716278::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3029 = { sizeof (SystemInfo_t601229409), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3030 = { sizeof (WaitForSeconds_t1308324405), sizeof(WaitForSeconds_t1308324405_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3030[1] = 
{
	WaitForSeconds_t1308324405::get_offset_of_m_Seconds_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3031 = { sizeof (WaitForFixedUpdate_t2088235019), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3032 = { sizeof (WaitForEndOfFrame_t4289796553), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3033 = { sizeof (CustomYieldInstruction_t4088954792), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3034 = { sizeof (Coroutine_t4040213945), sizeof(Coroutine_t4040213945_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3034[1] = 
{
	Coroutine_t4040213945::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3035 = { sizeof (ScriptableObject_t2643846172), sizeof(ScriptableObject_t2643846172_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3036 = { sizeof (FailedToLoadScriptObject_t286848765), sizeof(FailedToLoadScriptObject_t286848765_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3037 = { sizeof (Behaviour_t4092056886), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3038 = { sizeof (Camera_t3598185681), -1, sizeof(Camera_t3598185681_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3038[3] = 
{
	Camera_t3598185681_StaticFields::get_offset_of_onPreCull_2(),
	Camera_t3598185681_StaticFields::get_offset_of_onPreRender_3(),
	Camera_t3598185681_StaticFields::get_offset_of_onPostRender_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3039 = { sizeof (CameraCallback_t2234510627), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3040 = { sizeof (Component_t1644057383), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3041 = { sizeof (UnhandledExceptionHandler_t2171783740), -1, sizeof(UnhandledExceptionHandler_t2171783740_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3041[1] = 
{
	UnhandledExceptionHandler_t2171783740_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3042 = { sizeof (CullingGroupEvent_t2057326562)+ sizeof (RuntimeObject), sizeof(CullingGroupEvent_t2057326562 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3042[3] = 
{
	CullingGroupEvent_t2057326562::get_offset_of_m_Index_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t2057326562::get_offset_of_m_PrevState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t2057326562::get_offset_of_m_ThisState_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3043 = { sizeof (CullingGroup_t2290735057), sizeof(CullingGroup_t2290735057_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3043[2] = 
{
	CullingGroup_t2290735057::get_offset_of_m_Ptr_0(),
	CullingGroup_t2290735057::get_offset_of_m_OnStateChanged_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3044 = { sizeof (StateChanged_t1214506628), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3045 = { sizeof (CursorLockMode_t1421414223)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3045[4] = 
{
	CursorLockMode_t1421414223::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3046 = { sizeof (Cursor_t2811534235), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3047 = { sizeof (DebugLogHandler_t2510235573), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3048 = { sizeof (Debug_t1473602136), -1, sizeof(Debug_t1473602136_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3048[1] = 
{
	Debug_t1473602136_StaticFields::get_offset_of_s_Logger_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3049 = { sizeof (Display_t957679174), -1, sizeof(Display_t957679174_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3049[4] = 
{
	Display_t957679174::get_offset_of_nativeDisplay_0(),
	Display_t957679174_StaticFields::get_offset_of_displays_1(),
	Display_t957679174_StaticFields::get_offset_of__mainDisplay_2(),
	Display_t957679174_StaticFields::get_offset_of_onDisplaysUpdated_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3050 = { sizeof (DisplaysUpdatedDelegate_t2504994180), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3051 = { sizeof (GameObject_t2713501050), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3052 = { sizeof (Gradient_t4115282030), sizeof(Gradient_t4115282030_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3052[1] = 
{
	Gradient_t4115282030::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3053 = { sizeof (RenderSettings_t947043548), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3054 = { sizeof (QualitySettings_t2940486503), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3055 = { sizeof (MeshFilter_t3207912565), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3056 = { sizeof (Renderer_t1911939268), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3057 = { sizeof (MaterialPropertyBlock_t3284754277), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3057[1] = 
{
	MaterialPropertyBlock_t3284754277::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3058 = { sizeof (LightProbes_t3210574878), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3059 = { sizeof (LightmapSettings_t2018807894), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3060 = { sizeof (Screen_t3212058449), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3061 = { sizeof (MeshRenderer_t3083502508), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3062 = { sizeof (RectOffset_t2543238708), sizeof(RectOffset_t2543238708_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3062[2] = 
{
	RectOffset_t2543238708::get_offset_of_m_Ptr_0(),
	RectOffset_t2543238708::get_offset_of_m_SourceStyle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3063 = { sizeof (GUIElement_t1772263977), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3064 = { sizeof (GUILayer_t1710878832), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3065 = { sizeof (TouchScreenKeyboard_InternalConstructorHelperArguments_t2167186674)+ sizeof (RuntimeObject), sizeof(TouchScreenKeyboard_InternalConstructorHelperArguments_t2167186674 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3065[5] = 
{
	TouchScreenKeyboard_InternalConstructorHelperArguments_t2167186674::get_offset_of_keyboardType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t2167186674::get_offset_of_autocorrection_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t2167186674::get_offset_of_multiline_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t2167186674::get_offset_of_secure_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t2167186674::get_offset_of_alert_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3066 = { sizeof (TouchScreenKeyboard_t1443217069), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3066[1] = 
{
	TouchScreenKeyboard_t1443217069::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3067 = { sizeof (TouchPhase_t882638677)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3067[6] = 
{
	TouchPhase_t882638677::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3068 = { sizeof (IMECompositionMode_t787529871)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3068[4] = 
{
	IMECompositionMode_t787529871::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3069 = { sizeof (TouchType_t3151494483)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3069[4] = 
{
	TouchType_t3151494483::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3070 = { sizeof (Touch_t3430142624)+ sizeof (RuntimeObject), sizeof(Touch_t3430142624 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3070[14] = 
{
	Touch_t3430142624::get_offset_of_m_FingerId_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3430142624::get_offset_of_m_Position_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3430142624::get_offset_of_m_RawPosition_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3430142624::get_offset_of_m_PositionDelta_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3430142624::get_offset_of_m_TimeDelta_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3430142624::get_offset_of_m_TapCount_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3430142624::get_offset_of_m_Phase_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3430142624::get_offset_of_m_Type_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3430142624::get_offset_of_m_Pressure_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3430142624::get_offset_of_m_maximumPossiblePressure_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3430142624::get_offset_of_m_Radius_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3430142624::get_offset_of_m_RadiusVariance_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3430142624::get_offset_of_m_AltitudeAngle_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3430142624::get_offset_of_m_AzimuthAngle_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3071 = { sizeof (Gyroscope_t854707766), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3072 = { sizeof (LocationInfo_t595263381)+ sizeof (RuntimeObject), sizeof(LocationInfo_t595263381 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3072[6] = 
{
	LocationInfo_t595263381::get_offset_of_m_Timestamp_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LocationInfo_t595263381::get_offset_of_m_Latitude_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LocationInfo_t595263381::get_offset_of_m_Longitude_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LocationInfo_t595263381::get_offset_of_m_Altitude_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LocationInfo_t595263381::get_offset_of_m_HorizontalAccuracy_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LocationInfo_t595263381::get_offset_of_m_VerticalAccuracy_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3073 = { sizeof (LocationServiceStatus_t1832580834)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3073[5] = 
{
	LocationServiceStatus_t1832580834::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3074 = { sizeof (LocationService_t490144105), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3075 = { sizeof (Compass_t3377430827), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3076 = { sizeof (Input_t1545252376), -1, sizeof(Input_t1545252376_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3076[3] = 
{
	Input_t1545252376_StaticFields::get_offset_of_m_MainGyro_0(),
	Input_t1545252376_StaticFields::get_offset_of_locationServiceInstance_1(),
	Input_t1545252376_StaticFields::get_offset_of_compassInstance_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3077 = { sizeof (LayerMask_t423020429)+ sizeof (RuntimeObject), sizeof(LayerMask_t423020429 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3077[1] = 
{
	LayerMask_t423020429::get_offset_of_m_Mask_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3078 = { sizeof (Light_t4251631732), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3078[1] = 
{
	Light_t4251631732::get_offset_of_m_BakedIndex_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3079 = { sizeof (Vector3_t1731499529)+ sizeof (RuntimeObject), sizeof(Vector3_t1731499529 ), sizeof(Vector3_t1731499529_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3079[14] = 
{
	0,
	Vector3_t1731499529::get_offset_of_x_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t1731499529::get_offset_of_y_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t1731499529::get_offset_of_z_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t1731499529_StaticFields::get_offset_of_zeroVector_4(),
	Vector3_t1731499529_StaticFields::get_offset_of_oneVector_5(),
	Vector3_t1731499529_StaticFields::get_offset_of_upVector_6(),
	Vector3_t1731499529_StaticFields::get_offset_of_downVector_7(),
	Vector3_t1731499529_StaticFields::get_offset_of_leftVector_8(),
	Vector3_t1731499529_StaticFields::get_offset_of_rightVector_9(),
	Vector3_t1731499529_StaticFields::get_offset_of_forwardVector_10(),
	Vector3_t1731499529_StaticFields::get_offset_of_backVector_11(),
	Vector3_t1731499529_StaticFields::get_offset_of_positiveInfinityVector_12(),
	Vector3_t1731499529_StaticFields::get_offset_of_negativeInfinityVector_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3080 = { sizeof (Quaternion_t3861711338)+ sizeof (RuntimeObject), sizeof(Quaternion_t3861711338 ), sizeof(Quaternion_t3861711338_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3080[6] = 
{
	Quaternion_t3861711338::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t3861711338::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t3861711338::get_offset_of_z_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t3861711338::get_offset_of_w_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t3861711338_StaticFields::get_offset_of_identityQuaternion_4(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3081 = { sizeof (Matrix4x4_t3754836899)+ sizeof (RuntimeObject), sizeof(Matrix4x4_t3754836899 ), sizeof(Matrix4x4_t3754836899_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3081[18] = 
{
	Matrix4x4_t3754836899::get_offset_of_m00_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3754836899::get_offset_of_m10_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3754836899::get_offset_of_m20_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3754836899::get_offset_of_m30_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3754836899::get_offset_of_m01_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3754836899::get_offset_of_m11_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3754836899::get_offset_of_m21_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3754836899::get_offset_of_m31_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3754836899::get_offset_of_m02_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3754836899::get_offset_of_m12_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3754836899::get_offset_of_m22_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3754836899::get_offset_of_m32_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3754836899::get_offset_of_m03_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3754836899::get_offset_of_m13_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3754836899::get_offset_of_m23_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3754836899::get_offset_of_m33_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3754836899_StaticFields::get_offset_of_zeroMatrix_16(),
	Matrix4x4_t3754836899_StaticFields::get_offset_of_identityMatrix_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3082 = { sizeof (Bounds_t853329207)+ sizeof (RuntimeObject), sizeof(Bounds_t853329207 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3082[2] = 
{
	Bounds_t853329207::get_offset_of_m_Center_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Bounds_t853329207::get_offset_of_m_Extents_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3083 = { sizeof (Mathf_t2754288356)+ sizeof (RuntimeObject), sizeof(Mathf_t2754288356 ), sizeof(Mathf_t2754288356_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3083[1] = 
{
	Mathf_t2754288356_StaticFields::get_offset_of_Epsilon_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3084 = { sizeof (Keyframe_t2239019230)+ sizeof (RuntimeObject), sizeof(Keyframe_t2239019230 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3084[4] = 
{
	Keyframe_t2239019230::get_offset_of_m_Time_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t2239019230::get_offset_of_m_Value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t2239019230::get_offset_of_m_InTangent_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t2239019230::get_offset_of_m_OutTangent_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3085 = { sizeof (AnimationCurve_t1194302662), sizeof(AnimationCurve_t1194302662_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3085[1] = 
{
	AnimationCurve_t1194302662::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3086 = { sizeof (Mesh_t1245197510), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3087 = { sizeof (InternalShaderChannel_t1950882005)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3087[9] = 
{
	InternalShaderChannel_t1950882005::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3088 = { sizeof (InternalVertexChannelType_t1441119145)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3088[3] = 
{
	InternalVertexChannelType_t1441119145::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3089 = { sizeof (MonoBehaviour_t4274739169), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3090 = { sizeof (NetworkPlayer_t3120360395)+ sizeof (RuntimeObject), sizeof(NetworkPlayer_t3120360395 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3090[1] = 
{
	NetworkPlayer_t3120360395::get_offset_of_index_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3091 = { sizeof (NetworkViewID_t643675311)+ sizeof (RuntimeObject), sizeof(NetworkViewID_t643675311 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3091[3] = 
{
	NetworkViewID_t643675311::get_offset_of_a_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkViewID_t643675311::get_offset_of_b_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkViewID_t643675311::get_offset_of_c_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3092 = { sizeof (NetworkView_t4004206655), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3093 = { sizeof (BitStream_t3767076773), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3093[1] = 
{
	BitStream_t3767076773::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3094 = { sizeof (RPC_t378197337), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3095 = { sizeof (HostData_t1798681486), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3095[10] = 
{
	HostData_t1798681486::get_offset_of_m_Nat_0(),
	HostData_t1798681486::get_offset_of_m_GameType_1(),
	HostData_t1798681486::get_offset_of_m_GameName_2(),
	HostData_t1798681486::get_offset_of_m_ConnectedPlayers_3(),
	HostData_t1798681486::get_offset_of_m_PlayerLimit_4(),
	HostData_t1798681486::get_offset_of_m_IP_5(),
	HostData_t1798681486::get_offset_of_m_Port_6(),
	HostData_t1798681486::get_offset_of_m_PasswordProtected_7(),
	HostData_t1798681486::get_offset_of_m_Comment_8(),
	HostData_t1798681486::get_offset_of_m_GUID_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3096 = { sizeof (NetworkMessageInfo_t1416739033)+ sizeof (RuntimeObject), sizeof(NetworkMessageInfo_t1416739033 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3096[3] = 
{
	NetworkMessageInfo_t1416739033::get_offset_of_m_TimeStamp_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkMessageInfo_t1416739033::get_offset_of_m_Sender_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkMessageInfo_t1416739033::get_offset_of_m_ViewID_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3097 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3098 = { sizeof (PlayerConnectionInternal_t912631986), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3099 = { sizeof (PlayerPrefsException_t1521104370), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
