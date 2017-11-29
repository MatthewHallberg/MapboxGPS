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
// System.String[]
struct StringU5BU5D_t1002137567;
// UnityEngine.ILogger
struct ILogger_t2469942007;
// UnityEngine.Application/LowMemoryCallback
struct LowMemoryCallback_t3540878114;
// UnityEngine.Application/LogCallback
struct LogCallback_t3984433206;
// UnityEngine.Events.UnityAction
struct UnityAction_t3848807389;
// UnityEngine.Gyroscope
struct Gyroscope_t420243132;
// UnityEngine.LocationService
struct LocationService_t928662678;
// UnityEngine.Compass
struct Compass_t4027010770;
// System.Xml.Linq.XNode
struct XNode_t2212804849;
// System.Collections.IEnumerator
struct IEnumerator_t1476090656;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t2553719670;
// System.Xml.Linq.XContainer
struct XContainer_t3617914763;
// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XNamespace>
struct Dictionary_2_t526189881;
// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XName>
struct Dictionary_2_t1179483251;
// System.Xml.Linq.XNamespace
struct XNamespace_t3854109164;
// System.Xml.Linq.XElement
struct XElement_t4054785200;
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute>
struct IEnumerator_1_t2905653378;
// System.Xml.Linq.XAttribute
struct XAttribute_t2918920311;
// System.Char[]
struct CharU5BU5D_t3282355116;
// System.Void
struct Void_t3918784447;
// System.Xml.Linq.XNodeEqualityComparer
struct XNodeEqualityComparer_t2174105339;
// System.Xml.Linq.XNodeDocumentOrderComparer
struct XNodeDocumentOrderComparer_t3587170718;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2296229153;
// UnityEngine.CullingGroup/StateChanged
struct StateChanged_t872882345;
// UnityEngine.Display[]
struct DisplayU5BU5D_t2922367796;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t3334459968;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement>
struct IEnumerable_1_t2615015413;
// System.Xml.Linq.XName
struct XName_t212435238;
// System.Xml.Linq.XDeclaration
struct XDeclaration_t4062854853;
// System.IAsyncResult
struct IAsyncResult_t326317600;
// System.AsyncCallback
struct AsyncCallback_t1487541470;
// UnityEngine.Camera
struct Camera_t866888860;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t224027381;




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
#ifndef U3CMODULEU3E_T4264416200_H
#define U3CMODULEU3E_T4264416200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t4264416200 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T4264416200_H
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
#ifndef CURSOR_T1362515464_H
#define CURSOR_T1362515464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Cursor
struct  Cursor_t1362515464  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURSOR_T1362515464_H
#ifndef HOSTDATA_T3398010783_H
#define HOSTDATA_T3398010783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HostData
struct  HostData_t3398010783  : public RuntimeObject
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
	StringU5BU5D_t1002137567* ___m_IP_5;
	// System.Int32 UnityEngine.HostData::m_Port
	int32_t ___m_Port_6;
	// System.Int32 UnityEngine.HostData::m_PasswordProtected
	int32_t ___m_PasswordProtected_7;
	// System.String UnityEngine.HostData::m_Comment
	String_t* ___m_Comment_8;
	// System.String UnityEngine.HostData::m_GUID
	String_t* ___m_GUID_9;

public:
	inline static int32_t get_offset_of_m_Nat_0() { return static_cast<int32_t>(offsetof(HostData_t3398010783, ___m_Nat_0)); }
	inline int32_t get_m_Nat_0() const { return ___m_Nat_0; }
	inline int32_t* get_address_of_m_Nat_0() { return &___m_Nat_0; }
	inline void set_m_Nat_0(int32_t value)
	{
		___m_Nat_0 = value;
	}

	inline static int32_t get_offset_of_m_GameType_1() { return static_cast<int32_t>(offsetof(HostData_t3398010783, ___m_GameType_1)); }
	inline String_t* get_m_GameType_1() const { return ___m_GameType_1; }
	inline String_t** get_address_of_m_GameType_1() { return &___m_GameType_1; }
	inline void set_m_GameType_1(String_t* value)
	{
		___m_GameType_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameType_1), value);
	}

	inline static int32_t get_offset_of_m_GameName_2() { return static_cast<int32_t>(offsetof(HostData_t3398010783, ___m_GameName_2)); }
	inline String_t* get_m_GameName_2() const { return ___m_GameName_2; }
	inline String_t** get_address_of_m_GameName_2() { return &___m_GameName_2; }
	inline void set_m_GameName_2(String_t* value)
	{
		___m_GameName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameName_2), value);
	}

	inline static int32_t get_offset_of_m_ConnectedPlayers_3() { return static_cast<int32_t>(offsetof(HostData_t3398010783, ___m_ConnectedPlayers_3)); }
	inline int32_t get_m_ConnectedPlayers_3() const { return ___m_ConnectedPlayers_3; }
	inline int32_t* get_address_of_m_ConnectedPlayers_3() { return &___m_ConnectedPlayers_3; }
	inline void set_m_ConnectedPlayers_3(int32_t value)
	{
		___m_ConnectedPlayers_3 = value;
	}

	inline static int32_t get_offset_of_m_PlayerLimit_4() { return static_cast<int32_t>(offsetof(HostData_t3398010783, ___m_PlayerLimit_4)); }
	inline int32_t get_m_PlayerLimit_4() const { return ___m_PlayerLimit_4; }
	inline int32_t* get_address_of_m_PlayerLimit_4() { return &___m_PlayerLimit_4; }
	inline void set_m_PlayerLimit_4(int32_t value)
	{
		___m_PlayerLimit_4 = value;
	}

	inline static int32_t get_offset_of_m_IP_5() { return static_cast<int32_t>(offsetof(HostData_t3398010783, ___m_IP_5)); }
	inline StringU5BU5D_t1002137567* get_m_IP_5() const { return ___m_IP_5; }
	inline StringU5BU5D_t1002137567** get_address_of_m_IP_5() { return &___m_IP_5; }
	inline void set_m_IP_5(StringU5BU5D_t1002137567* value)
	{
		___m_IP_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_IP_5), value);
	}

	inline static int32_t get_offset_of_m_Port_6() { return static_cast<int32_t>(offsetof(HostData_t3398010783, ___m_Port_6)); }
	inline int32_t get_m_Port_6() const { return ___m_Port_6; }
	inline int32_t* get_address_of_m_Port_6() { return &___m_Port_6; }
	inline void set_m_Port_6(int32_t value)
	{
		___m_Port_6 = value;
	}

	inline static int32_t get_offset_of_m_PasswordProtected_7() { return static_cast<int32_t>(offsetof(HostData_t3398010783, ___m_PasswordProtected_7)); }
	inline int32_t get_m_PasswordProtected_7() const { return ___m_PasswordProtected_7; }
	inline int32_t* get_address_of_m_PasswordProtected_7() { return &___m_PasswordProtected_7; }
	inline void set_m_PasswordProtected_7(int32_t value)
	{
		___m_PasswordProtected_7 = value;
	}

	inline static int32_t get_offset_of_m_Comment_8() { return static_cast<int32_t>(offsetof(HostData_t3398010783, ___m_Comment_8)); }
	inline String_t* get_m_Comment_8() const { return ___m_Comment_8; }
	inline String_t** get_address_of_m_Comment_8() { return &___m_Comment_8; }
	inline void set_m_Comment_8(String_t* value)
	{
		___m_Comment_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Comment_8), value);
	}

	inline static int32_t get_offset_of_m_GUID_9() { return static_cast<int32_t>(offsetof(HostData_t3398010783, ___m_GUID_9)); }
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
struct HostData_t3398010783_marshaled_pinvoke
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
struct HostData_t3398010783_marshaled_com
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
#endif // HOSTDATA_T3398010783_H
#ifndef CUSTOMYIELDINSTRUCTION_T2497760721_H
#define CUSTOMYIELDINSTRUCTION_T2497760721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t2497760721  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T2497760721_H
#ifndef DEBUGLOGHANDLER_T3226125174_H
#define DEBUGLOGHANDLER_T3226125174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DebugLogHandler
struct  DebugLogHandler_t3226125174  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGLOGHANDLER_T3226125174_H
#ifndef DEBUG_T1647946932_H
#define DEBUG_T1647946932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Debug
struct  Debug_t1647946932  : public RuntimeObject
{
public:

public:
};

struct Debug_t1647946932_StaticFields
{
public:
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_0;

public:
	inline static int32_t get_offset_of_s_Logger_0() { return static_cast<int32_t>(offsetof(Debug_t1647946932_StaticFields, ___s_Logger_0)); }
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
#endif // DEBUG_T1647946932_H
#ifndef SYSTEMINFO_T876164885_H
#define SYSTEMINFO_T876164885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SystemInfo
struct  SystemInfo_t876164885  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMINFO_T876164885_H
#ifndef PLAYERCONNECTIONINTERNAL_T3619672480_H
#define PLAYERCONNECTIONINTERNAL_T3619672480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PlayerConnectionInternal
struct  PlayerConnectionInternal_t3619672480  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONNECTIONINTERNAL_T3619672480_H
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
#ifndef APPLICATION_T1822371542_H
#define APPLICATION_T1822371542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application
struct  Application_t1822371542  : public RuntimeObject
{
public:

public:
};

struct Application_t1822371542_StaticFields
{
public:
	// UnityEngine.Application/LowMemoryCallback UnityEngine.Application::lowMemory
	LowMemoryCallback_t3540878114 * ___lowMemory_0;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandler
	LogCallback_t3984433206 * ___s_LogCallbackHandler_1;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandlerThreaded
	LogCallback_t3984433206 * ___s_LogCallbackHandlerThreaded_2;
	// UnityEngine.Events.UnityAction UnityEngine.Application::onBeforeRender
	UnityAction_t3848807389 * ___onBeforeRender_3;

public:
	inline static int32_t get_offset_of_lowMemory_0() { return static_cast<int32_t>(offsetof(Application_t1822371542_StaticFields, ___lowMemory_0)); }
	inline LowMemoryCallback_t3540878114 * get_lowMemory_0() const { return ___lowMemory_0; }
	inline LowMemoryCallback_t3540878114 ** get_address_of_lowMemory_0() { return &___lowMemory_0; }
	inline void set_lowMemory_0(LowMemoryCallback_t3540878114 * value)
	{
		___lowMemory_0 = value;
		Il2CppCodeGenWriteBarrier((&___lowMemory_0), value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandler_1() { return static_cast<int32_t>(offsetof(Application_t1822371542_StaticFields, ___s_LogCallbackHandler_1)); }
	inline LogCallback_t3984433206 * get_s_LogCallbackHandler_1() const { return ___s_LogCallbackHandler_1; }
	inline LogCallback_t3984433206 ** get_address_of_s_LogCallbackHandler_1() { return &___s_LogCallbackHandler_1; }
	inline void set_s_LogCallbackHandler_1(LogCallback_t3984433206 * value)
	{
		___s_LogCallbackHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_LogCallbackHandler_1), value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandlerThreaded_2() { return static_cast<int32_t>(offsetof(Application_t1822371542_StaticFields, ___s_LogCallbackHandlerThreaded_2)); }
	inline LogCallback_t3984433206 * get_s_LogCallbackHandlerThreaded_2() const { return ___s_LogCallbackHandlerThreaded_2; }
	inline LogCallback_t3984433206 ** get_address_of_s_LogCallbackHandlerThreaded_2() { return &___s_LogCallbackHandlerThreaded_2; }
	inline void set_s_LogCallbackHandlerThreaded_2(LogCallback_t3984433206 * value)
	{
		___s_LogCallbackHandlerThreaded_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_LogCallbackHandlerThreaded_2), value);
	}

	inline static int32_t get_offset_of_onBeforeRender_3() { return static_cast<int32_t>(offsetof(Application_t1822371542_StaticFields, ___onBeforeRender_3)); }
	inline UnityAction_t3848807389 * get_onBeforeRender_3() const { return ___onBeforeRender_3; }
	inline UnityAction_t3848807389 ** get_address_of_onBeforeRender_3() { return &___onBeforeRender_3; }
	inline void set_onBeforeRender_3(UnityAction_t3848807389 * value)
	{
		___onBeforeRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onBeforeRender_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATION_T1822371542_H
#ifndef INPUT_T238603509_H
#define INPUT_T238603509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Input
struct  Input_t238603509  : public RuntimeObject
{
public:

public:
};

struct Input_t238603509_StaticFields
{
public:
	// UnityEngine.Gyroscope UnityEngine.Input::m_MainGyro
	Gyroscope_t420243132 * ___m_MainGyro_0;
	// UnityEngine.LocationService UnityEngine.Input::locationServiceInstance
	LocationService_t928662678 * ___locationServiceInstance_1;
	// UnityEngine.Compass UnityEngine.Input::compassInstance
	Compass_t4027010770 * ___compassInstance_2;

public:
	inline static int32_t get_offset_of_m_MainGyro_0() { return static_cast<int32_t>(offsetof(Input_t238603509_StaticFields, ___m_MainGyro_0)); }
	inline Gyroscope_t420243132 * get_m_MainGyro_0() const { return ___m_MainGyro_0; }
	inline Gyroscope_t420243132 ** get_address_of_m_MainGyro_0() { return &___m_MainGyro_0; }
	inline void set_m_MainGyro_0(Gyroscope_t420243132 * value)
	{
		___m_MainGyro_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_MainGyro_0), value);
	}

	inline static int32_t get_offset_of_locationServiceInstance_1() { return static_cast<int32_t>(offsetof(Input_t238603509_StaticFields, ___locationServiceInstance_1)); }
	inline LocationService_t928662678 * get_locationServiceInstance_1() const { return ___locationServiceInstance_1; }
	inline LocationService_t928662678 ** get_address_of_locationServiceInstance_1() { return &___locationServiceInstance_1; }
	inline void set_locationServiceInstance_1(LocationService_t928662678 * value)
	{
		___locationServiceInstance_1 = value;
		Il2CppCodeGenWriteBarrier((&___locationServiceInstance_1), value);
	}

	inline static int32_t get_offset_of_compassInstance_2() { return static_cast<int32_t>(offsetof(Input_t238603509_StaticFields, ___compassInstance_2)); }
	inline Compass_t4027010770 * get_compassInstance_2() const { return ___compassInstance_2; }
	inline Compass_t4027010770 ** get_address_of_compassInstance_2() { return &___compassInstance_2; }
	inline void set_compassInstance_2(Compass_t4027010770 * value)
	{
		___compassInstance_2 = value;
		Il2CppCodeGenWriteBarrier((&___compassInstance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUT_T238603509_H
#ifndef U3CEXPANDARRAYU3EC__ITERATOR25_T2720300305_H
#define U3CEXPANDARRAYU3EC__ITERATOR25_T2720300305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25
struct  U3CExpandArrayU3Ec__Iterator25_t2720300305  : public RuntimeObject
{
public:
	// System.Object System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::o
	RuntimeObject * ___o_0;
	// System.Xml.Linq.XNode System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::<n>__0
	XNode_t2212804849 * ___U3CnU3E__0_1;
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
	inline static int32_t get_offset_of_o_0() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t2720300305, ___o_0)); }
	inline RuntimeObject * get_o_0() const { return ___o_0; }
	inline RuntimeObject ** get_address_of_o_0() { return &___o_0; }
	inline void set_o_0(RuntimeObject * value)
	{
		___o_0 = value;
		Il2CppCodeGenWriteBarrier((&___o_0), value);
	}

	inline static int32_t get_offset_of_U3CnU3E__0_1() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t2720300305, ___U3CnU3E__0_1)); }
	inline XNode_t2212804849 * get_U3CnU3E__0_1() const { return ___U3CnU3E__0_1; }
	inline XNode_t2212804849 ** get_address_of_U3CnU3E__0_1() { return &___U3CnU3E__0_1; }
	inline void set_U3CnU3E__0_1(XNode_t2212804849 * value)
	{
		___U3CnU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3CU24s_86U3E__1_2() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t2720300305, ___U3CU24s_86U3E__1_2)); }
	inline RuntimeObject* get_U3CU24s_86U3E__1_2() const { return ___U3CU24s_86U3E__1_2; }
	inline RuntimeObject** get_address_of_U3CU24s_86U3E__1_2() { return &___U3CU24s_86U3E__1_2; }
	inline void set_U3CU24s_86U3E__1_2(RuntimeObject* value)
	{
		___U3CU24s_86U3E__1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24s_86U3E__1_2), value);
	}

	inline static int32_t get_offset_of_U3CobjU3E__2_3() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t2720300305, ___U3CobjU3E__2_3)); }
	inline RuntimeObject * get_U3CobjU3E__2_3() const { return ___U3CobjU3E__2_3; }
	inline RuntimeObject ** get_address_of_U3CobjU3E__2_3() { return &___U3CobjU3E__2_3; }
	inline void set_U3CobjU3E__2_3(RuntimeObject * value)
	{
		___U3CobjU3E__2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CobjU3E__2_3), value);
	}

	inline static int32_t get_offset_of_U3CU24s_87U3E__3_4() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t2720300305, ___U3CU24s_87U3E__3_4)); }
	inline RuntimeObject* get_U3CU24s_87U3E__3_4() const { return ___U3CU24s_87U3E__3_4; }
	inline RuntimeObject** get_address_of_U3CU24s_87U3E__3_4() { return &___U3CU24s_87U3E__3_4; }
	inline void set_U3CU24s_87U3E__3_4(RuntimeObject* value)
	{
		___U3CU24s_87U3E__3_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24s_87U3E__3_4), value);
	}

	inline static int32_t get_offset_of_U3CooU3E__4_5() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t2720300305, ___U3CooU3E__4_5)); }
	inline RuntimeObject * get_U3CooU3E__4_5() const { return ___U3CooU3E__4_5; }
	inline RuntimeObject ** get_address_of_U3CooU3E__4_5() { return &___U3CooU3E__4_5; }
	inline void set_U3CooU3E__4_5(RuntimeObject * value)
	{
		___U3CooU3E__4_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CooU3E__4_5), value);
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t2720300305, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t2720300305, ___U24current_7)); }
	inline RuntimeObject * get_U24current_7() const { return ___U24current_7; }
	inline RuntimeObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(RuntimeObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_7), value);
	}

	inline static int32_t get_offset_of_U3CU24U3Eo_8() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t2720300305, ___U3CU24U3Eo_8)); }
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
#endif // U3CEXPANDARRAYU3EC__ITERATOR25_T2720300305_H
#ifndef XUTIL_T2475861538_H
#define XUTIL_T2475861538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XUtil
struct  XUtil_t2475861538  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XUTIL_T2475861538_H
#ifndef COMPASS_T4027010770_H
#define COMPASS_T4027010770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Compass
struct  Compass_t4027010770  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPASS_T4027010770_H
#ifndef UNHANDLEDEXCEPTIONHANDLER_T2917824870_H
#define UNHANDLEDEXCEPTIONHANDLER_T2917824870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnhandledExceptionHandler
struct  UnhandledExceptionHandler_t2917824870  : public RuntimeObject
{
public:

public:
};

struct UnhandledExceptionHandler_t2917824870_StaticFields
{
public:
	// System.UnhandledExceptionEventHandler UnityEngine.UnhandledExceptionHandler::<>f__mg$cache0
	UnhandledExceptionEventHandler_t2553719670 * ___U3CU3Ef__mgU24cache0_0;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_0() { return static_cast<int32_t>(offsetof(UnhandledExceptionHandler_t2917824870_StaticFields, ___U3CU3Ef__mgU24cache0_0)); }
	inline UnhandledExceptionEventHandler_t2553719670 * get_U3CU3Ef__mgU24cache0_0() const { return ___U3CU3Ef__mgU24cache0_0; }
	inline UnhandledExceptionEventHandler_t2553719670 ** get_address_of_U3CU3Ef__mgU24cache0_0() { return &___U3CU3Ef__mgU24cache0_0; }
	inline void set_U3CU3Ef__mgU24cache0_0(UnhandledExceptionEventHandler_t2553719670 * value)
	{
		___U3CU3Ef__mgU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONHANDLER_T2917824870_H
#ifndef XOBJECT_T1582006750_H
#define XOBJECT_T1582006750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XObject
struct  XObject_t1582006750  : public RuntimeObject
{
public:
	// System.Xml.Linq.XContainer System.Xml.Linq.XObject::owner
	XContainer_t3617914763 * ___owner_0;
	// System.String System.Xml.Linq.XObject::baseuri
	String_t* ___baseuri_1;
	// System.Int32 System.Xml.Linq.XObject::line
	int32_t ___line_2;
	// System.Int32 System.Xml.Linq.XObject::column
	int32_t ___column_3;

public:
	inline static int32_t get_offset_of_owner_0() { return static_cast<int32_t>(offsetof(XObject_t1582006750, ___owner_0)); }
	inline XContainer_t3617914763 * get_owner_0() const { return ___owner_0; }
	inline XContainer_t3617914763 ** get_address_of_owner_0() { return &___owner_0; }
	inline void set_owner_0(XContainer_t3617914763 * value)
	{
		___owner_0 = value;
		Il2CppCodeGenWriteBarrier((&___owner_0), value);
	}

	inline static int32_t get_offset_of_baseuri_1() { return static_cast<int32_t>(offsetof(XObject_t1582006750, ___baseuri_1)); }
	inline String_t* get_baseuri_1() const { return ___baseuri_1; }
	inline String_t** get_address_of_baseuri_1() { return &___baseuri_1; }
	inline void set_baseuri_1(String_t* value)
	{
		___baseuri_1 = value;
		Il2CppCodeGenWriteBarrier((&___baseuri_1), value);
	}

	inline static int32_t get_offset_of_line_2() { return static_cast<int32_t>(offsetof(XObject_t1582006750, ___line_2)); }
	inline int32_t get_line_2() const { return ___line_2; }
	inline int32_t* get_address_of_line_2() { return &___line_2; }
	inline void set_line_2(int32_t value)
	{
		___line_2 = value;
	}

	inline static int32_t get_offset_of_column_3() { return static_cast<int32_t>(offsetof(XObject_t1582006750, ___column_3)); }
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
#endif // XOBJECT_T1582006750_H
#ifndef XNODEEQUALITYCOMPARER_T2174105339_H
#define XNODEEQUALITYCOMPARER_T2174105339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XNodeEqualityComparer
struct  XNodeEqualityComparer_t2174105339  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XNODEEQUALITYCOMPARER_T2174105339_H
#ifndef YIELDINSTRUCTION_T1944489577_H
#define YIELDINSTRUCTION_T1944489577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t1944489577  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t1944489577_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t1944489577_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T1944489577_H
#ifndef XNODEDOCUMENTORDERCOMPARER_T3587170718_H
#define XNODEDOCUMENTORDERCOMPARER_T3587170718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XNodeDocumentOrderComparer
struct  XNodeDocumentOrderComparer_t3587170718  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XNODEDOCUMENTORDERCOMPARER_T3587170718_H
#ifndef XNAMESPACE_T3854109164_H
#define XNAMESPACE_T3854109164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XNamespace
struct  XNamespace_t3854109164  : public RuntimeObject
{
public:
	// System.String System.Xml.Linq.XNamespace::uri
	String_t* ___uri_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XName> System.Xml.Linq.XNamespace::table
	Dictionary_2_t1179483251 * ___table_5;

public:
	inline static int32_t get_offset_of_uri_4() { return static_cast<int32_t>(offsetof(XNamespace_t3854109164, ___uri_4)); }
	inline String_t* get_uri_4() const { return ___uri_4; }
	inline String_t** get_address_of_uri_4() { return &___uri_4; }
	inline void set_uri_4(String_t* value)
	{
		___uri_4 = value;
		Il2CppCodeGenWriteBarrier((&___uri_4), value);
	}

	inline static int32_t get_offset_of_table_5() { return static_cast<int32_t>(offsetof(XNamespace_t3854109164, ___table_5)); }
	inline Dictionary_2_t1179483251 * get_table_5() const { return ___table_5; }
	inline Dictionary_2_t1179483251 ** get_address_of_table_5() { return &___table_5; }
	inline void set_table_5(Dictionary_2_t1179483251 * value)
	{
		___table_5 = value;
		Il2CppCodeGenWriteBarrier((&___table_5), value);
	}
};

struct XNamespace_t3854109164_StaticFields
{
public:
	// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::blank
	XNamespace_t3854109164 * ___blank_0;
	// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::xml
	XNamespace_t3854109164 * ___xml_1;
	// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::xmlns
	XNamespace_t3854109164 * ___xmlns_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XNamespace> System.Xml.Linq.XNamespace::nstable
	Dictionary_2_t526189881 * ___nstable_3;

public:
	inline static int32_t get_offset_of_blank_0() { return static_cast<int32_t>(offsetof(XNamespace_t3854109164_StaticFields, ___blank_0)); }
	inline XNamespace_t3854109164 * get_blank_0() const { return ___blank_0; }
	inline XNamespace_t3854109164 ** get_address_of_blank_0() { return &___blank_0; }
	inline void set_blank_0(XNamespace_t3854109164 * value)
	{
		___blank_0 = value;
		Il2CppCodeGenWriteBarrier((&___blank_0), value);
	}

	inline static int32_t get_offset_of_xml_1() { return static_cast<int32_t>(offsetof(XNamespace_t3854109164_StaticFields, ___xml_1)); }
	inline XNamespace_t3854109164 * get_xml_1() const { return ___xml_1; }
	inline XNamespace_t3854109164 ** get_address_of_xml_1() { return &___xml_1; }
	inline void set_xml_1(XNamespace_t3854109164 * value)
	{
		___xml_1 = value;
		Il2CppCodeGenWriteBarrier((&___xml_1), value);
	}

	inline static int32_t get_offset_of_xmlns_2() { return static_cast<int32_t>(offsetof(XNamespace_t3854109164_StaticFields, ___xmlns_2)); }
	inline XNamespace_t3854109164 * get_xmlns_2() const { return ___xmlns_2; }
	inline XNamespace_t3854109164 ** get_address_of_xmlns_2() { return &___xmlns_2; }
	inline void set_xmlns_2(XNamespace_t3854109164 * value)
	{
		___xmlns_2 = value;
		Il2CppCodeGenWriteBarrier((&___xmlns_2), value);
	}

	inline static int32_t get_offset_of_nstable_3() { return static_cast<int32_t>(offsetof(XNamespace_t3854109164_StaticFields, ___nstable_3)); }
	inline Dictionary_2_t526189881 * get_nstable_3() const { return ___nstable_3; }
	inline Dictionary_2_t526189881 ** get_address_of_nstable_3() { return &___nstable_3; }
	inline void set_nstable_3(Dictionary_2_t526189881 * value)
	{
		___nstable_3 = value;
		Il2CppCodeGenWriteBarrier((&___nstable_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XNAMESPACE_T3854109164_H
#ifndef U3CNODESU3EC__ITERATOR1A_T88305227_H
#define U3CNODESU3EC__ITERATOR1A_T88305227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XContainer/<Nodes>c__Iterator1A
struct  U3CNodesU3Ec__Iterator1A_t88305227  : public RuntimeObject
{
public:
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::<n>__0
	XNode_t2212804849 * ___U3CnU3E__0_0;
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::<next>__1
	XNode_t2212804849 * ___U3CnextU3E__1_1;
	// System.Int32 System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::$PC
	int32_t ___U24PC_2;
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::$current
	XNode_t2212804849 * ___U24current_3;
	// System.Xml.Linq.XContainer System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::<>f__this
	XContainer_t3617914763 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_U3CnU3E__0_0() { return static_cast<int32_t>(offsetof(U3CNodesU3Ec__Iterator1A_t88305227, ___U3CnU3E__0_0)); }
	inline XNode_t2212804849 * get_U3CnU3E__0_0() const { return ___U3CnU3E__0_0; }
	inline XNode_t2212804849 ** get_address_of_U3CnU3E__0_0() { return &___U3CnU3E__0_0; }
	inline void set_U3CnU3E__0_0(XNode_t2212804849 * value)
	{
		___U3CnU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CnextU3E__1_1() { return static_cast<int32_t>(offsetof(U3CNodesU3Ec__Iterator1A_t88305227, ___U3CnextU3E__1_1)); }
	inline XNode_t2212804849 * get_U3CnextU3E__1_1() const { return ___U3CnextU3E__1_1; }
	inline XNode_t2212804849 ** get_address_of_U3CnextU3E__1_1() { return &___U3CnextU3E__1_1; }
	inline void set_U3CnextU3E__1_1(XNode_t2212804849 * value)
	{
		___U3CnextU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnextU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CNodesU3Ec__Iterator1A_t88305227, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CNodesU3Ec__Iterator1A_t88305227, ___U24current_3)); }
	inline XNode_t2212804849 * get_U24current_3() const { return ___U24current_3; }
	inline XNode_t2212804849 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(XNode_t2212804849 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CNodesU3Ec__Iterator1A_t88305227, ___U3CU3Ef__this_4)); }
	inline XContainer_t3617914763 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline XContainer_t3617914763 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(XContainer_t3617914763 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__this_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CNODESU3EC__ITERATOR1A_T88305227_H
#ifndef XNAME_T212435238_H
#define XNAME_T212435238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XName
struct  XName_t212435238  : public RuntimeObject
{
public:
	// System.String System.Xml.Linq.XName::local
	String_t* ___local_0;
	// System.Xml.Linq.XNamespace System.Xml.Linq.XName::ns
	XNamespace_t3854109164 * ___ns_1;

public:
	inline static int32_t get_offset_of_local_0() { return static_cast<int32_t>(offsetof(XName_t212435238, ___local_0)); }
	inline String_t* get_local_0() const { return ___local_0; }
	inline String_t** get_address_of_local_0() { return &___local_0; }
	inline void set_local_0(String_t* value)
	{
		___local_0 = value;
		Il2CppCodeGenWriteBarrier((&___local_0), value);
	}

	inline static int32_t get_offset_of_ns_1() { return static_cast<int32_t>(offsetof(XName_t212435238, ___ns_1)); }
	inline XNamespace_t3854109164 * get_ns_1() const { return ___ns_1; }
	inline XNamespace_t3854109164 ** get_address_of_ns_1() { return &___ns_1; }
	inline void set_ns_1(XNamespace_t3854109164 * value)
	{
		___ns_1 = value;
		Il2CppCodeGenWriteBarrier((&___ns_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XNAME_T212435238_H
#ifndef XDECLARATION_T4062854853_H
#define XDECLARATION_T4062854853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XDeclaration
struct  XDeclaration_t4062854853  : public RuntimeObject
{
public:
	// System.String System.Xml.Linq.XDeclaration::encoding
	String_t* ___encoding_0;
	// System.String System.Xml.Linq.XDeclaration::standalone
	String_t* ___standalone_1;
	// System.String System.Xml.Linq.XDeclaration::version
	String_t* ___version_2;

public:
	inline static int32_t get_offset_of_encoding_0() { return static_cast<int32_t>(offsetof(XDeclaration_t4062854853, ___encoding_0)); }
	inline String_t* get_encoding_0() const { return ___encoding_0; }
	inline String_t** get_address_of_encoding_0() { return &___encoding_0; }
	inline void set_encoding_0(String_t* value)
	{
		___encoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_0), value);
	}

	inline static int32_t get_offset_of_standalone_1() { return static_cast<int32_t>(offsetof(XDeclaration_t4062854853, ___standalone_1)); }
	inline String_t* get_standalone_1() const { return ___standalone_1; }
	inline String_t** get_address_of_standalone_1() { return &___standalone_1; }
	inline void set_standalone_1(String_t* value)
	{
		___standalone_1 = value;
		Il2CppCodeGenWriteBarrier((&___standalone_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(XDeclaration_t4062854853, ___version_2)); }
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
#endif // XDECLARATION_T4062854853_H
#ifndef U3CGETPREFIXOFNAMESPACECOREU3EC__ITERATOR23_T810905911_H
#define U3CGETPREFIXOFNAMESPACECOREU3EC__ITERATOR23_T810905911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23
struct  U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t810905911  : public RuntimeObject
{
public:
	// System.Xml.Linq.XElement System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::<el>__0
	XElement_t4054785200 * ___U3CelU3E__0_0;
	// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute> System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::<$s_68>__1
	RuntimeObject* ___U3CU24s_68U3E__1_1;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::<a>__2
	XAttribute_t2918920311 * ___U3CaU3E__2_2;
	// System.Xml.Linq.XNamespace System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::ns
	XNamespace_t3854109164 * ___ns_3;
	// System.Int32 System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::$PC
	int32_t ___U24PC_4;
	// System.String System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::$current
	String_t* ___U24current_5;
	// System.Xml.Linq.XNamespace System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::<$>ns
	XNamespace_t3854109164 * ___U3CU24U3Ens_6;
	// System.Xml.Linq.XElement System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::<>f__this
	XElement_t4054785200 * ___U3CU3Ef__this_7;

public:
	inline static int32_t get_offset_of_U3CelU3E__0_0() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t810905911, ___U3CelU3E__0_0)); }
	inline XElement_t4054785200 * get_U3CelU3E__0_0() const { return ___U3CelU3E__0_0; }
	inline XElement_t4054785200 ** get_address_of_U3CelU3E__0_0() { return &___U3CelU3E__0_0; }
	inline void set_U3CelU3E__0_0(XElement_t4054785200 * value)
	{
		___U3CelU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CelU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CU24s_68U3E__1_1() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t810905911, ___U3CU24s_68U3E__1_1)); }
	inline RuntimeObject* get_U3CU24s_68U3E__1_1() const { return ___U3CU24s_68U3E__1_1; }
	inline RuntimeObject** get_address_of_U3CU24s_68U3E__1_1() { return &___U3CU24s_68U3E__1_1; }
	inline void set_U3CU24s_68U3E__1_1(RuntimeObject* value)
	{
		___U3CU24s_68U3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24s_68U3E__1_1), value);
	}

	inline static int32_t get_offset_of_U3CaU3E__2_2() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t810905911, ___U3CaU3E__2_2)); }
	inline XAttribute_t2918920311 * get_U3CaU3E__2_2() const { return ___U3CaU3E__2_2; }
	inline XAttribute_t2918920311 ** get_address_of_U3CaU3E__2_2() { return &___U3CaU3E__2_2; }
	inline void set_U3CaU3E__2_2(XAttribute_t2918920311 * value)
	{
		___U3CaU3E__2_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CaU3E__2_2), value);
	}

	inline static int32_t get_offset_of_ns_3() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t810905911, ___ns_3)); }
	inline XNamespace_t3854109164 * get_ns_3() const { return ___ns_3; }
	inline XNamespace_t3854109164 ** get_address_of_ns_3() { return &___ns_3; }
	inline void set_ns_3(XNamespace_t3854109164 * value)
	{
		___ns_3 = value;
		Il2CppCodeGenWriteBarrier((&___ns_3), value);
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t810905911, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t810905911, ___U24current_5)); }
	inline String_t* get_U24current_5() const { return ___U24current_5; }
	inline String_t** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(String_t* value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U3CU24U3Ens_6() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t810905911, ___U3CU24U3Ens_6)); }
	inline XNamespace_t3854109164 * get_U3CU24U3Ens_6() const { return ___U3CU24U3Ens_6; }
	inline XNamespace_t3854109164 ** get_address_of_U3CU24U3Ens_6() { return &___U3CU24U3Ens_6; }
	inline void set_U3CU24U3Ens_6(XNamespace_t3854109164 * value)
	{
		___U3CU24U3Ens_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24U3Ens_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_7() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t810905911, ___U3CU3Ef__this_7)); }
	inline XElement_t4054785200 * get_U3CU3Ef__this_7() const { return ___U3CU3Ef__this_7; }
	inline XElement_t4054785200 ** get_address_of_U3CU3Ef__this_7() { return &___U3CU3Ef__this_7; }
	inline void set_U3CU3Ef__this_7(XElement_t4054785200 * value)
	{
		___U3CU3Ef__this_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__this_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETPREFIXOFNAMESPACECOREU3EC__ITERATOR23_T810905911_H
#ifndef LOCATIONSERVICE_T928662678_H
#define LOCATIONSERVICE_T928662678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LocationService
struct  LocationService_t928662678  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCATIONSERVICE_T928662678_H
#ifndef U3CATTRIBUTESU3EC__ITERATOR20_T2991868239_H
#define U3CATTRIBUTESU3EC__ITERATOR20_T2991868239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XElement/<Attributes>c__Iterator20
struct  U3CAttributesU3Ec__Iterator20_t2991868239  : public RuntimeObject
{
public:
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement/<Attributes>c__Iterator20::<a>__0
	XAttribute_t2918920311 * ___U3CaU3E__0_0;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement/<Attributes>c__Iterator20::<next>__1
	XAttribute_t2918920311 * ___U3CnextU3E__1_1;
	// System.Int32 System.Xml.Linq.XElement/<Attributes>c__Iterator20::$PC
	int32_t ___U24PC_2;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement/<Attributes>c__Iterator20::$current
	XAttribute_t2918920311 * ___U24current_3;
	// System.Xml.Linq.XElement System.Xml.Linq.XElement/<Attributes>c__Iterator20::<>f__this
	XElement_t4054785200 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_U3CaU3E__0_0() { return static_cast<int32_t>(offsetof(U3CAttributesU3Ec__Iterator20_t2991868239, ___U3CaU3E__0_0)); }
	inline XAttribute_t2918920311 * get_U3CaU3E__0_0() const { return ___U3CaU3E__0_0; }
	inline XAttribute_t2918920311 ** get_address_of_U3CaU3E__0_0() { return &___U3CaU3E__0_0; }
	inline void set_U3CaU3E__0_0(XAttribute_t2918920311 * value)
	{
		___U3CaU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CaU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CnextU3E__1_1() { return static_cast<int32_t>(offsetof(U3CAttributesU3Ec__Iterator20_t2991868239, ___U3CnextU3E__1_1)); }
	inline XAttribute_t2918920311 * get_U3CnextU3E__1_1() const { return ___U3CnextU3E__1_1; }
	inline XAttribute_t2918920311 ** get_address_of_U3CnextU3E__1_1() { return &___U3CnextU3E__1_1; }
	inline void set_U3CnextU3E__1_1(XAttribute_t2918920311 * value)
	{
		___U3CnextU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnextU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CAttributesU3Ec__Iterator20_t2991868239, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CAttributesU3Ec__Iterator20_t2991868239, ___U24current_3)); }
	inline XAttribute_t2918920311 * get_U24current_3() const { return ___U24current_3; }
	inline XAttribute_t2918920311 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(XAttribute_t2918920311 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CAttributesU3Ec__Iterator20_t2991868239, ___U3CU3Ef__this_4)); }
	inline XElement_t4054785200 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline XElement_t4054785200 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(XElement_t4054785200 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__this_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CATTRIBUTESU3EC__ITERATOR20_T2991868239_H
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
#ifndef SCREEN_T350152785_H
#define SCREEN_T350152785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Screen
struct  Screen_t350152785  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREEN_T350152785_H
#ifndef GYROSCOPE_T420243132_H
#define GYROSCOPE_T420243132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gyroscope
struct  Gyroscope_t420243132  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GYROSCOPE_T420243132_H
#ifndef KEYFRAME_T4091804758_H
#define KEYFRAME_T4091804758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t4091804758 
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
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t4091804758, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t4091804758, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t4091804758, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t4091804758, ___m_OutTangent_3)); }
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
#endif // KEYFRAME_T4091804758_H
#ifndef MATHF_T201832977_H
#define MATHF_T201832977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mathf
struct  Mathf_t201832977 
{
public:

public:
};

struct Mathf_t201832977_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t201832977_StaticFields, ___Epsilon_0)); }
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
#endif // MATHF_T201832977_H
#ifndef QUATERNION_T1786792567_H
#define QUATERNION_T1786792567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t1786792567 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t1786792567, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t1786792567, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t1786792567, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t1786792567, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t1786792567_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t1786792567  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t1786792567_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t1786792567  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t1786792567 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t1786792567  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T1786792567_H
#ifndef VECTOR3_T638544396_H
#define VECTOR3_T638544396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t638544396 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t638544396, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t638544396, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t638544396, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t638544396_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t638544396  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t638544396  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t638544396  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t638544396  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t638544396  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t638544396  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t638544396  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t638544396  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t638544396  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t638544396  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t638544396_StaticFields, ___zeroVector_4)); }
	inline Vector3_t638544396  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t638544396 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t638544396  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t638544396_StaticFields, ___oneVector_5)); }
	inline Vector3_t638544396  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t638544396 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t638544396  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t638544396_StaticFields, ___upVector_6)); }
	inline Vector3_t638544396  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t638544396 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t638544396  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t638544396_StaticFields, ___downVector_7)); }
	inline Vector3_t638544396  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t638544396 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t638544396  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t638544396_StaticFields, ___leftVector_8)); }
	inline Vector3_t638544396  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t638544396 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t638544396  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t638544396_StaticFields, ___rightVector_9)); }
	inline Vector3_t638544396  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t638544396 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t638544396  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t638544396_StaticFields, ___forwardVector_10)); }
	inline Vector3_t638544396  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t638544396 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t638544396  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t638544396_StaticFields, ___backVector_11)); }
	inline Vector3_t638544396  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t638544396 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t638544396  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t638544396_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t638544396  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t638544396 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t638544396  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t638544396_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t638544396  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t638544396 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t638544396  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T638544396_H
#ifndef LAYERMASK_T1657378534_H
#define LAYERMASK_T1657378534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t1657378534 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t1657378534, ___m_Mask_0)); }
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
#endif // LAYERMASK_T1657378534_H
#ifndef LOCATIONINFO_T2913371470_H
#define LOCATIONINFO_T2913371470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LocationInfo
struct  LocationInfo_t2913371470 
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
	inline static int32_t get_offset_of_m_Timestamp_0() { return static_cast<int32_t>(offsetof(LocationInfo_t2913371470, ___m_Timestamp_0)); }
	inline double get_m_Timestamp_0() const { return ___m_Timestamp_0; }
	inline double* get_address_of_m_Timestamp_0() { return &___m_Timestamp_0; }
	inline void set_m_Timestamp_0(double value)
	{
		___m_Timestamp_0 = value;
	}

	inline static int32_t get_offset_of_m_Latitude_1() { return static_cast<int32_t>(offsetof(LocationInfo_t2913371470, ___m_Latitude_1)); }
	inline float get_m_Latitude_1() const { return ___m_Latitude_1; }
	inline float* get_address_of_m_Latitude_1() { return &___m_Latitude_1; }
	inline void set_m_Latitude_1(float value)
	{
		___m_Latitude_1 = value;
	}

	inline static int32_t get_offset_of_m_Longitude_2() { return static_cast<int32_t>(offsetof(LocationInfo_t2913371470, ___m_Longitude_2)); }
	inline float get_m_Longitude_2() const { return ___m_Longitude_2; }
	inline float* get_address_of_m_Longitude_2() { return &___m_Longitude_2; }
	inline void set_m_Longitude_2(float value)
	{
		___m_Longitude_2 = value;
	}

	inline static int32_t get_offset_of_m_Altitude_3() { return static_cast<int32_t>(offsetof(LocationInfo_t2913371470, ___m_Altitude_3)); }
	inline float get_m_Altitude_3() const { return ___m_Altitude_3; }
	inline float* get_address_of_m_Altitude_3() { return &___m_Altitude_3; }
	inline void set_m_Altitude_3(float value)
	{
		___m_Altitude_3 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAccuracy_4() { return static_cast<int32_t>(offsetof(LocationInfo_t2913371470, ___m_HorizontalAccuracy_4)); }
	inline float get_m_HorizontalAccuracy_4() const { return ___m_HorizontalAccuracy_4; }
	inline float* get_address_of_m_HorizontalAccuracy_4() { return &___m_HorizontalAccuracy_4; }
	inline void set_m_HorizontalAccuracy_4(float value)
	{
		___m_HorizontalAccuracy_4 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAccuracy_5() { return static_cast<int32_t>(offsetof(LocationInfo_t2913371470, ___m_VerticalAccuracy_5)); }
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
#endif // LOCATIONINFO_T2913371470_H
#ifndef CULLINGGROUPEVENT_T2683986671_H
#define CULLINGGROUPEVENT_T2683986671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroupEvent
struct  CullingGroupEvent_t2683986671 
{
public:
	// System.Int32 UnityEngine.CullingGroupEvent::m_Index
	int32_t ___m_Index_0;
	// System.Byte UnityEngine.CullingGroupEvent::m_PrevState
	uint8_t ___m_PrevState_1;
	// System.Byte UnityEngine.CullingGroupEvent::m_ThisState
	uint8_t ___m_ThisState_2;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t2683986671, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_PrevState_1() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t2683986671, ___m_PrevState_1)); }
	inline uint8_t get_m_PrevState_1() const { return ___m_PrevState_1; }
	inline uint8_t* get_address_of_m_PrevState_1() { return &___m_PrevState_1; }
	inline void set_m_PrevState_1(uint8_t value)
	{
		___m_PrevState_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisState_2() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t2683986671, ___m_ThisState_2)); }
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
#endif // CULLINGGROUPEVENT_T2683986671_H
#ifndef MATRIX4X4_T3657519234_H
#define MATRIX4X4_T3657519234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t3657519234 
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
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t3657519234, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t3657519234, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t3657519234, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t3657519234, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t3657519234, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t3657519234, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t3657519234, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t3657519234, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t3657519234, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t3657519234, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t3657519234, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t3657519234, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t3657519234, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t3657519234, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t3657519234, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t3657519234, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t3657519234_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t3657519234  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t3657519234  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t3657519234_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t3657519234  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t3657519234 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t3657519234  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t3657519234_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t3657519234  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t3657519234 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t3657519234  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T3657519234_H
#ifndef WAITFORENDOFFRAME_T851222588_H
#define WAITFORENDOFFRAME_T851222588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t851222588  : public YieldInstruction_t1944489577
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORENDOFFRAME_T851222588_H
#ifndef TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T4010709356_H
#define TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T4010709356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
struct  TouchScreenKeyboard_InternalConstructorHelperArguments_t4010709356 
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
	inline static int32_t get_offset_of_keyboardType_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t4010709356, ___keyboardType_0)); }
	inline uint32_t get_keyboardType_0() const { return ___keyboardType_0; }
	inline uint32_t* get_address_of_keyboardType_0() { return &___keyboardType_0; }
	inline void set_keyboardType_0(uint32_t value)
	{
		___keyboardType_0 = value;
	}

	inline static int32_t get_offset_of_autocorrection_1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t4010709356, ___autocorrection_1)); }
	inline uint32_t get_autocorrection_1() const { return ___autocorrection_1; }
	inline uint32_t* get_address_of_autocorrection_1() { return &___autocorrection_1; }
	inline void set_autocorrection_1(uint32_t value)
	{
		___autocorrection_1 = value;
	}

	inline static int32_t get_offset_of_multiline_2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t4010709356, ___multiline_2)); }
	inline uint32_t get_multiline_2() const { return ___multiline_2; }
	inline uint32_t* get_address_of_multiline_2() { return &___multiline_2; }
	inline void set_multiline_2(uint32_t value)
	{
		___multiline_2 = value;
	}

	inline static int32_t get_offset_of_secure_3() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t4010709356, ___secure_3)); }
	inline uint32_t get_secure_3() const { return ___secure_3; }
	inline uint32_t* get_address_of_secure_3() { return &___secure_3; }
	inline void set_secure_3(uint32_t value)
	{
		___secure_3 = value;
	}

	inline static int32_t get_offset_of_alert_4() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t4010709356, ___alert_4)); }
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
#endif // TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T4010709356_H
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
#ifndef NETWORKPLAYER_T2602801639_H
#define NETWORKPLAYER_T2602801639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkPlayer
struct  NetworkPlayer_t2602801639 
{
public:
	// System.Int32 UnityEngine.NetworkPlayer::index
	int32_t ___index_0;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(NetworkPlayer_t2602801639, ___index_0)); }
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
#endif // NETWORKPLAYER_T2602801639_H
#ifndef NETWORKVIEWID_T612802567_H
#define NETWORKVIEWID_T612802567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkViewID
struct  NetworkViewID_t612802567 
{
public:
	// System.Int32 UnityEngine.NetworkViewID::a
	int32_t ___a_0;
	// System.Int32 UnityEngine.NetworkViewID::b
	int32_t ___b_1;
	// System.Int32 UnityEngine.NetworkViewID::c
	int32_t ___c_2;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(NetworkViewID_t612802567, ___a_0)); }
	inline int32_t get_a_0() const { return ___a_0; }
	inline int32_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int32_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(NetworkViewID_t612802567, ___b_1)); }
	inline int32_t get_b_1() const { return ___b_1; }
	inline int32_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int32_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(NetworkViewID_t612802567, ___c_2)); }
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
#endif // NETWORKVIEWID_T612802567_H
#ifndef RPC_T3859908688_H
#define RPC_T3859908688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RPC
struct  RPC_t3859908688  : public Attribute_t2136411158
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RPC_T3859908688_H
#ifndef VECTOR2_T680295296_H
#define VECTOR2_T680295296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t680295296 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t680295296, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t680295296, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t680295296_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t680295296  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t680295296  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t680295296  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t680295296  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t680295296  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t680295296  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t680295296  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t680295296  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t680295296_StaticFields, ___zeroVector_2)); }
	inline Vector2_t680295296  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t680295296 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t680295296  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t680295296_StaticFields, ___oneVector_3)); }
	inline Vector2_t680295296  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t680295296 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t680295296  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t680295296_StaticFields, ___upVector_4)); }
	inline Vector2_t680295296  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t680295296 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t680295296  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t680295296_StaticFields, ___downVector_5)); }
	inline Vector2_t680295296  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t680295296 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t680295296  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t680295296_StaticFields, ___leftVector_6)); }
	inline Vector2_t680295296  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t680295296 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t680295296  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t680295296_StaticFields, ___rightVector_7)); }
	inline Vector2_t680295296  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t680295296 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t680295296  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t680295296_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t680295296  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t680295296 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t680295296  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t680295296_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t680295296  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t680295296 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t680295296  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T680295296_H
#ifndef WAITFORFIXEDUPDATE_T724701634_H
#define WAITFORFIXEDUPDATE_T724701634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForFixedUpdate
struct  WaitForFixedUpdate_t724701634  : public YieldInstruction_t1944489577
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORFIXEDUPDATE_T724701634_H
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
#ifndef WAITFORSECONDS_T1199935048_H
#define WAITFORSECONDS_T1199935048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1199935048  : public YieldInstruction_t1944489577
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1199935048, ___m_Seconds_0)); }
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
struct WaitForSeconds_t1199935048_marshaled_pinvoke : public YieldInstruction_t1944489577_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1199935048_marshaled_com : public YieldInstruction_t1944489577_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1199935048_H
#ifndef XNODE_T2212804849_H
#define XNODE_T2212804849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XNode
struct  XNode_t2212804849  : public XObject_t1582006750
{
public:
	// System.Xml.Linq.XNode System.Xml.Linq.XNode::previous
	XNode_t2212804849 * ___previous_6;
	// System.Xml.Linq.XNode System.Xml.Linq.XNode::next
	XNode_t2212804849 * ___next_7;

public:
	inline static int32_t get_offset_of_previous_6() { return static_cast<int32_t>(offsetof(XNode_t2212804849, ___previous_6)); }
	inline XNode_t2212804849 * get_previous_6() const { return ___previous_6; }
	inline XNode_t2212804849 ** get_address_of_previous_6() { return &___previous_6; }
	inline void set_previous_6(XNode_t2212804849 * value)
	{
		___previous_6 = value;
		Il2CppCodeGenWriteBarrier((&___previous_6), value);
	}

	inline static int32_t get_offset_of_next_7() { return static_cast<int32_t>(offsetof(XNode_t2212804849, ___next_7)); }
	inline XNode_t2212804849 * get_next_7() const { return ___next_7; }
	inline XNode_t2212804849 ** get_address_of_next_7() { return &___next_7; }
	inline void set_next_7(XNode_t2212804849 * value)
	{
		___next_7 = value;
		Il2CppCodeGenWriteBarrier((&___next_7), value);
	}
};

struct XNode_t2212804849_StaticFields
{
public:
	// System.Xml.Linq.XNodeEqualityComparer System.Xml.Linq.XNode::eq_comparer
	XNodeEqualityComparer_t2174105339 * ___eq_comparer_4;
	// System.Xml.Linq.XNodeDocumentOrderComparer System.Xml.Linq.XNode::order_comparer
	XNodeDocumentOrderComparer_t3587170718 * ___order_comparer_5;

public:
	inline static int32_t get_offset_of_eq_comparer_4() { return static_cast<int32_t>(offsetof(XNode_t2212804849_StaticFields, ___eq_comparer_4)); }
	inline XNodeEqualityComparer_t2174105339 * get_eq_comparer_4() const { return ___eq_comparer_4; }
	inline XNodeEqualityComparer_t2174105339 ** get_address_of_eq_comparer_4() { return &___eq_comparer_4; }
	inline void set_eq_comparer_4(XNodeEqualityComparer_t2174105339 * value)
	{
		___eq_comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___eq_comparer_4), value);
	}

	inline static int32_t get_offset_of_order_comparer_5() { return static_cast<int32_t>(offsetof(XNode_t2212804849_StaticFields, ___order_comparer_5)); }
	inline XNodeDocumentOrderComparer_t3587170718 * get_order_comparer_5() const { return ___order_comparer_5; }
	inline XNodeDocumentOrderComparer_t3587170718 ** get_address_of_order_comparer_5() { return &___order_comparer_5; }
	inline void set_order_comparer_5(XNodeDocumentOrderComparer_t3587170718 * value)
	{
		___order_comparer_5 = value;
		Il2CppCodeGenWriteBarrier((&___order_comparer_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XNODE_T2212804849_H
#ifndef PLAYERPREFSEXCEPTION_T3782386320_H
#define PLAYERPREFSEXCEPTION_T3782386320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PlayerPrefsException
struct  PlayerPrefsException_t3782386320  : public Exception_t76254738
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERPREFSEXCEPTION_T3782386320_H
#ifndef U24ARRAYTYPEU2416_T1716548270_H
#define U24ARRAYTYPEU2416_T1716548270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t1716548270 
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
		uint8_t U24ArrayTypeU2416_t1716548270__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T1716548270_H
#ifndef VOID_T3918784447_H
#define VOID_T3918784447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t3918784447 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T3918784447_H
#ifndef IMECOMPOSITIONMODE_T1960545577_H
#define IMECOMPOSITIONMODE_T1960545577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.IMECompositionMode
struct  IMECompositionMode_t1960545577 
{
public:
	// System.Int32 UnityEngine.IMECompositionMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(IMECompositionMode_t1960545577, ___value___1)); }
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
#endif // IMECOMPOSITIONMODE_T1960545577_H
#ifndef TOUCHTYPE_T2978410530_H
#define TOUCHTYPE_T2978410530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t2978410530 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchType_t2978410530, ___value___1)); }
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
#endif // TOUCHTYPE_T2978410530_H
#ifndef LOCATIONSERVICESTATUS_T3743834447_H
#define LOCATIONSERVICESTATUS_T3743834447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LocationServiceStatus
struct  LocationServiceStatus_t3743834447 
{
public:
	// System.Int32 UnityEngine.LocationServiceStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LocationServiceStatus_t3743834447, ___value___1)); }
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
#endif // LOCATIONSERVICESTATUS_T3743834447_H
#ifndef OBJECT_T3411029014_H
#define OBJECT_T3411029014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t3411029014  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t3411029014, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t3411029014_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t3411029014_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t3411029014_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t3411029014_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T3411029014_H
#ifndef INTERNALVERTEXCHANNELTYPE_T2950563558_H
#define INTERNALVERTEXCHANNELTYPE_T2950563558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalVertexChannelType
struct  InternalVertexChannelType_t2950563558 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalVertexChannelType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalVertexChannelType_t2950563558, ___value___1)); }
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
#endif // INTERNALVERTEXCHANNELTYPE_T2950563558_H
#ifndef INTERNALSHADERCHANNEL_T2182637787_H
#define INTERNALSHADERCHANNEL_T2182637787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalShaderChannel
struct  InternalShaderChannel_t2182637787 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalShaderChannel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalShaderChannel_t2182637787, ___value___1)); }
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
#endif // INTERNALSHADERCHANNEL_T2182637787_H
#ifndef NETWORKMESSAGEINFO_T2617239561_H
#define NETWORKMESSAGEINFO_T2617239561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkMessageInfo
struct  NetworkMessageInfo_t2617239561 
{
public:
	// System.Double UnityEngine.NetworkMessageInfo::m_TimeStamp
	double ___m_TimeStamp_0;
	// UnityEngine.NetworkPlayer UnityEngine.NetworkMessageInfo::m_Sender
	NetworkPlayer_t2602801639  ___m_Sender_1;
	// UnityEngine.NetworkViewID UnityEngine.NetworkMessageInfo::m_ViewID
	NetworkViewID_t612802567  ___m_ViewID_2;

public:
	inline static int32_t get_offset_of_m_TimeStamp_0() { return static_cast<int32_t>(offsetof(NetworkMessageInfo_t2617239561, ___m_TimeStamp_0)); }
	inline double get_m_TimeStamp_0() const { return ___m_TimeStamp_0; }
	inline double* get_address_of_m_TimeStamp_0() { return &___m_TimeStamp_0; }
	inline void set_m_TimeStamp_0(double value)
	{
		___m_TimeStamp_0 = value;
	}

	inline static int32_t get_offset_of_m_Sender_1() { return static_cast<int32_t>(offsetof(NetworkMessageInfo_t2617239561, ___m_Sender_1)); }
	inline NetworkPlayer_t2602801639  get_m_Sender_1() const { return ___m_Sender_1; }
	inline NetworkPlayer_t2602801639 * get_address_of_m_Sender_1() { return &___m_Sender_1; }
	inline void set_m_Sender_1(NetworkPlayer_t2602801639  value)
	{
		___m_Sender_1 = value;
	}

	inline static int32_t get_offset_of_m_ViewID_2() { return static_cast<int32_t>(offsetof(NetworkMessageInfo_t2617239561, ___m_ViewID_2)); }
	inline NetworkViewID_t612802567  get_m_ViewID_2() const { return ___m_ViewID_2; }
	inline NetworkViewID_t612802567 * get_address_of_m_ViewID_2() { return &___m_ViewID_2; }
	inline void set_m_ViewID_2(NetworkViewID_t612802567  value)
	{
		___m_ViewID_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKMESSAGEINFO_T2617239561_H
#ifndef BOUNDS_T1732058181_H
#define BOUNDS_T1732058181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t1732058181 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t638544396  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t638544396  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t1732058181, ___m_Center_0)); }
	inline Vector3_t638544396  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t638544396 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t638544396  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t1732058181, ___m_Extents_1)); }
	inline Vector3_t638544396  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t638544396 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t638544396  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T1732058181_H
#ifndef TOUCHPHASE_T2496570352_H
#define TOUCHPHASE_T2496570352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t2496570352 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchPhase_t2496570352, ___value___1)); }
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
#endif // TOUCHPHASE_T2496570352_H
#ifndef BITSTREAM_T1775220973_H
#define BITSTREAM_T1775220973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BitStream
struct  BitStream_t1775220973  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.BitStream::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(BitStream_t1775220973, ___m_Ptr_0)); }
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
#endif // BITSTREAM_T1775220973_H
#ifndef ANIMATIONCURVE_T3143246184_H
#define ANIMATIONCURVE_T3143246184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t3143246184  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t3143246184, ___m_Ptr_0)); }
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
struct AnimationCurve_t3143246184_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3143246184_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T3143246184_H
#ifndef LOGTYPE_T3941618958_H
#define LOGTYPE_T3941618958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t3941618958 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t3941618958, ___value___1)); }
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
#endif // LOGTYPE_T3941618958_H
#ifndef XCONTAINER_T3617914763_H
#define XCONTAINER_T3617914763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XContainer
struct  XContainer_t3617914763  : public XNode_t2212804849
{
public:
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer::first
	XNode_t2212804849 * ___first_8;
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer::last
	XNode_t2212804849 * ___last_9;

public:
	inline static int32_t get_offset_of_first_8() { return static_cast<int32_t>(offsetof(XContainer_t3617914763, ___first_8)); }
	inline XNode_t2212804849 * get_first_8() const { return ___first_8; }
	inline XNode_t2212804849 ** get_address_of_first_8() { return &___first_8; }
	inline void set_first_8(XNode_t2212804849 * value)
	{
		___first_8 = value;
		Il2CppCodeGenWriteBarrier((&___first_8), value);
	}

	inline static int32_t get_offset_of_last_9() { return static_cast<int32_t>(offsetof(XContainer_t3617914763, ___last_9)); }
	inline XNode_t2212804849 * get_last_9() const { return ___last_9; }
	inline XNode_t2212804849 ** get_address_of_last_9() { return &___last_9; }
	inline void set_last_9(XNode_t2212804849 * value)
	{
		___last_9 = value;
		Il2CppCodeGenWriteBarrier((&___last_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XCONTAINER_T3617914763_H
#ifndef DELEGATE_T346420667_H
#define DELEGATE_T346420667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t346420667  : public RuntimeObject
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
	DelegateData_t2296229153 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t346420667, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t346420667, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t346420667, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t346420667, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t346420667, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t346420667, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t346420667, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t346420667, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t346420667, ___data_8)); }
	inline DelegateData_t2296229153 * get_data_8() const { return ___data_8; }
	inline DelegateData_t2296229153 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t2296229153 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T346420667_H
#ifndef CULLINGGROUP_T2726813712_H
#define CULLINGGROUP_T2726813712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup
struct  CullingGroup_t2726813712  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.CullingGroup::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.CullingGroup/StateChanged UnityEngine.CullingGroup::m_OnStateChanged
	StateChanged_t872882345 * ___m_OnStateChanged_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CullingGroup_t2726813712, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_OnStateChanged_1() { return static_cast<int32_t>(offsetof(CullingGroup_t2726813712, ___m_OnStateChanged_1)); }
	inline StateChanged_t872882345 * get_m_OnStateChanged_1() const { return ___m_OnStateChanged_1; }
	inline StateChanged_t872882345 ** get_address_of_m_OnStateChanged_1() { return &___m_OnStateChanged_1; }
	inline void set_m_OnStateChanged_1(StateChanged_t872882345 * value)
	{
		___m_OnStateChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnStateChanged_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.CullingGroup
struct CullingGroup_t2726813712_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
// Native definition for COM marshalling of UnityEngine.CullingGroup
struct CullingGroup_t2726813712_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
#endif // CULLINGGROUP_T2726813712_H
#ifndef ASYNCOPERATION_T1438384981_H
#define ASYNCOPERATION_T1438384981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1438384981  : public YieldInstruction_t1944489577
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1438384981, ___m_Ptr_0)); }
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
struct AsyncOperation_t1438384981_marshaled_pinvoke : public YieldInstruction_t1944489577_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1438384981_marshaled_com : public YieldInstruction_t1944489577_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ASYNCOPERATION_T1438384981_H
#ifndef COROUTINE_T801279259_H
#define COROUTINE_T801279259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t801279259  : public YieldInstruction_t1944489577
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t801279259, ___m_Ptr_0)); }
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
struct Coroutine_t801279259_marshaled_pinvoke : public YieldInstruction_t1944489577_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t801279259_marshaled_com : public YieldInstruction_t1944489577_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T801279259_H
#ifndef XPROCESSINGINSTRUCTION_T2992450387_H
#define XPROCESSINGINSTRUCTION_T2992450387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XProcessingInstruction
struct  XProcessingInstruction_t2992450387  : public XNode_t2212804849
{
public:
	// System.String System.Xml.Linq.XProcessingInstruction::name
	String_t* ___name_8;
	// System.String System.Xml.Linq.XProcessingInstruction::data
	String_t* ___data_9;

public:
	inline static int32_t get_offset_of_name_8() { return static_cast<int32_t>(offsetof(XProcessingInstruction_t2992450387, ___name_8)); }
	inline String_t* get_name_8() const { return ___name_8; }
	inline String_t** get_address_of_name_8() { return &___name_8; }
	inline void set_name_8(String_t* value)
	{
		___name_8 = value;
		Il2CppCodeGenWriteBarrier((&___name_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(XProcessingInstruction_t2992450387, ___data_9)); }
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
#endif // XPROCESSINGINSTRUCTION_T2992450387_H
#ifndef COMPARERESULT_T1840554193_H
#define COMPARERESULT_T1840554193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XNodeDocumentOrderComparer/CompareResult
struct  CompareResult_t1840554193 
{
public:
	// System.Int32 System.Xml.Linq.XNodeDocumentOrderComparer/CompareResult::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompareResult_t1840554193, ___value___1)); }
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
#endif // COMPARERESULT_T1840554193_H
#ifndef TOUCHSCREENKEYBOARD_T1324816179_H
#define TOUCHSCREENKEYBOARD_T1324816179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard
struct  TouchScreenKeyboard_t1324816179  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TouchScreenKeyboard::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t1324816179, ___m_Ptr_0)); }
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
#endif // TOUCHSCREENKEYBOARD_T1324816179_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1698564607_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1698564607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t1698564607  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t1698564607_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU2416_t1716548270  ___U24U24fieldU2D0_0;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564607_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU2416_t1716548270  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU2416_t1716548270 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU2416_t1716548270  value)
	{
		___U24U24fieldU2D0_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1698564607_H
#ifndef CURSORLOCKMODE_T3463750965_H
#define CURSORLOCKMODE_T3463750965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CursorLockMode
struct  CursorLockMode_t3463750965 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CursorLockMode_t3463750965, ___value___1)); }
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
#endif // CURSORLOCKMODE_T3463750965_H
#ifndef DISPLAY_T3867356297_H
#define DISPLAY_T3867356297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display
struct  Display_t3867356297  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t ___nativeDisplay_0;

public:
	inline static int32_t get_offset_of_nativeDisplay_0() { return static_cast<int32_t>(offsetof(Display_t3867356297, ___nativeDisplay_0)); }
	inline IntPtr_t get_nativeDisplay_0() const { return ___nativeDisplay_0; }
	inline IntPtr_t* get_address_of_nativeDisplay_0() { return &___nativeDisplay_0; }
	inline void set_nativeDisplay_0(IntPtr_t value)
	{
		___nativeDisplay_0 = value;
	}
};

struct Display_t3867356297_StaticFields
{
public:
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t2922367796* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t3867356297 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t3334459968 * ___onDisplaysUpdated_3;

public:
	inline static int32_t get_offset_of_displays_1() { return static_cast<int32_t>(offsetof(Display_t3867356297_StaticFields, ___displays_1)); }
	inline DisplayU5BU5D_t2922367796* get_displays_1() const { return ___displays_1; }
	inline DisplayU5BU5D_t2922367796** get_address_of_displays_1() { return &___displays_1; }
	inline void set_displays_1(DisplayU5BU5D_t2922367796* value)
	{
		___displays_1 = value;
		Il2CppCodeGenWriteBarrier((&___displays_1), value);
	}

	inline static int32_t get_offset_of__mainDisplay_2() { return static_cast<int32_t>(offsetof(Display_t3867356297_StaticFields, ____mainDisplay_2)); }
	inline Display_t3867356297 * get__mainDisplay_2() const { return ____mainDisplay_2; }
	inline Display_t3867356297 ** get_address_of__mainDisplay_2() { return &____mainDisplay_2; }
	inline void set__mainDisplay_2(Display_t3867356297 * value)
	{
		____mainDisplay_2 = value;
		Il2CppCodeGenWriteBarrier((&____mainDisplay_2), value);
	}

	inline static int32_t get_offset_of_onDisplaysUpdated_3() { return static_cast<int32_t>(offsetof(Display_t3867356297_StaticFields, ___onDisplaysUpdated_3)); }
	inline DisplaysUpdatedDelegate_t3334459968 * get_onDisplaysUpdated_3() const { return ___onDisplaysUpdated_3; }
	inline DisplaysUpdatedDelegate_t3334459968 ** get_address_of_onDisplaysUpdated_3() { return &___onDisplaysUpdated_3; }
	inline void set_onDisplaysUpdated_3(DisplaysUpdatedDelegate_t3334459968 * value)
	{
		___onDisplaysUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((&___onDisplaysUpdated_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAY_T3867356297_H
#ifndef GRADIENT_T919596157_H
#define GRADIENT_T919596157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gradient
struct  Gradient_t919596157  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Gradient_t919596157, ___m_Ptr_0)); }
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
struct Gradient_t919596157_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_t919596157_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // GRADIENT_T919596157_H
#ifndef XTEXT_T4144209884_H
#define XTEXT_T4144209884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XText
struct  XText_t4144209884  : public XNode_t2212804849
{
public:
	// System.String System.Xml.Linq.XText::value
	String_t* ___value_8;

public:
	inline static int32_t get_offset_of_value_8() { return static_cast<int32_t>(offsetof(XText_t4144209884, ___value_8)); }
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
#endif // XTEXT_T4144209884_H
#ifndef RECTOFFSET_T2596031519_H
#define RECTOFFSET_T2596031519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t2596031519  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t2596031519, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t2596031519, ___m_SourceStyle_1)); }
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
struct RectOffset_t2596031519_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t2596031519_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T2596031519_H
#ifndef MATERIALPROPERTYBLOCK_T1598978997_H
#define MATERIALPROPERTYBLOCK_T1598978997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MaterialPropertyBlock
struct  MaterialPropertyBlock_t1598978997  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t1598978997, ___m_Ptr_0)); }
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
#endif // MATERIALPROPERTYBLOCK_T1598978997_H
#ifndef XDOCUMENTTYPE_T1780791022_H
#define XDOCUMENTTYPE_T1780791022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XDocumentType
struct  XDocumentType_t1780791022  : public XNode_t2212804849
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
	inline static int32_t get_offset_of_name_8() { return static_cast<int32_t>(offsetof(XDocumentType_t1780791022, ___name_8)); }
	inline String_t* get_name_8() const { return ___name_8; }
	inline String_t** get_address_of_name_8() { return &___name_8; }
	inline void set_name_8(String_t* value)
	{
		___name_8 = value;
		Il2CppCodeGenWriteBarrier((&___name_8), value);
	}

	inline static int32_t get_offset_of_pubid_9() { return static_cast<int32_t>(offsetof(XDocumentType_t1780791022, ___pubid_9)); }
	inline String_t* get_pubid_9() const { return ___pubid_9; }
	inline String_t** get_address_of_pubid_9() { return &___pubid_9; }
	inline void set_pubid_9(String_t* value)
	{
		___pubid_9 = value;
		Il2CppCodeGenWriteBarrier((&___pubid_9), value);
	}

	inline static int32_t get_offset_of_sysid_10() { return static_cast<int32_t>(offsetof(XDocumentType_t1780791022, ___sysid_10)); }
	inline String_t* get_sysid_10() const { return ___sysid_10; }
	inline String_t** get_address_of_sysid_10() { return &___sysid_10; }
	inline void set_sysid_10(String_t* value)
	{
		___sysid_10 = value;
		Il2CppCodeGenWriteBarrier((&___sysid_10), value);
	}

	inline static int32_t get_offset_of_intSubset_11() { return static_cast<int32_t>(offsetof(XDocumentType_t1780791022, ___intSubset_11)); }
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
#endif // XDOCUMENTTYPE_T1780791022_H
#ifndef XELEMENT_T4054785200_H
#define XELEMENT_T4054785200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XElement
struct  XElement_t4054785200  : public XContainer_t3617914763
{
public:
	// System.Xml.Linq.XName System.Xml.Linq.XElement::name
	XName_t212435238 * ___name_11;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::attr_first
	XAttribute_t2918920311 * ___attr_first_12;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::attr_last
	XAttribute_t2918920311 * ___attr_last_13;
	// System.Boolean System.Xml.Linq.XElement::explicit_is_empty
	bool ___explicit_is_empty_14;

public:
	inline static int32_t get_offset_of_name_11() { return static_cast<int32_t>(offsetof(XElement_t4054785200, ___name_11)); }
	inline XName_t212435238 * get_name_11() const { return ___name_11; }
	inline XName_t212435238 ** get_address_of_name_11() { return &___name_11; }
	inline void set_name_11(XName_t212435238 * value)
	{
		___name_11 = value;
		Il2CppCodeGenWriteBarrier((&___name_11), value);
	}

	inline static int32_t get_offset_of_attr_first_12() { return static_cast<int32_t>(offsetof(XElement_t4054785200, ___attr_first_12)); }
	inline XAttribute_t2918920311 * get_attr_first_12() const { return ___attr_first_12; }
	inline XAttribute_t2918920311 ** get_address_of_attr_first_12() { return &___attr_first_12; }
	inline void set_attr_first_12(XAttribute_t2918920311 * value)
	{
		___attr_first_12 = value;
		Il2CppCodeGenWriteBarrier((&___attr_first_12), value);
	}

	inline static int32_t get_offset_of_attr_last_13() { return static_cast<int32_t>(offsetof(XElement_t4054785200, ___attr_last_13)); }
	inline XAttribute_t2918920311 * get_attr_last_13() const { return ___attr_last_13; }
	inline XAttribute_t2918920311 ** get_address_of_attr_last_13() { return &___attr_last_13; }
	inline void set_attr_last_13(XAttribute_t2918920311 * value)
	{
		___attr_last_13 = value;
		Il2CppCodeGenWriteBarrier((&___attr_last_13), value);
	}

	inline static int32_t get_offset_of_explicit_is_empty_14() { return static_cast<int32_t>(offsetof(XElement_t4054785200, ___explicit_is_empty_14)); }
	inline bool get_explicit_is_empty_14() const { return ___explicit_is_empty_14; }
	inline bool* get_address_of_explicit_is_empty_14() { return &___explicit_is_empty_14; }
	inline void set_explicit_is_empty_14(bool value)
	{
		___explicit_is_empty_14 = value;
	}
};

struct XElement_t4054785200_StaticFields
{
public:
	// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XElement::emptySequence
	RuntimeObject* ___emptySequence_10;

public:
	inline static int32_t get_offset_of_emptySequence_10() { return static_cast<int32_t>(offsetof(XElement_t4054785200_StaticFields, ___emptySequence_10)); }
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
#endif // XELEMENT_T4054785200_H
#ifndef XDOCUMENT_T1592296494_H
#define XDOCUMENT_T1592296494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XDocument
struct  XDocument_t1592296494  : public XContainer_t3617914763
{
public:
	// System.Xml.Linq.XDeclaration System.Xml.Linq.XDocument::xmldecl
	XDeclaration_t4062854853 * ___xmldecl_10;

public:
	inline static int32_t get_offset_of_xmldecl_10() { return static_cast<int32_t>(offsetof(XDocument_t1592296494, ___xmldecl_10)); }
	inline XDeclaration_t4062854853 * get_xmldecl_10() const { return ___xmldecl_10; }
	inline XDeclaration_t4062854853 ** get_address_of_xmldecl_10() { return &___xmldecl_10; }
	inline void set_xmldecl_10(XDeclaration_t4062854853 * value)
	{
		___xmldecl_10 = value;
		Il2CppCodeGenWriteBarrier((&___xmldecl_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XDOCUMENT_T1592296494_H
#ifndef SCRIPTABLEOBJECT_T3431182594_H
#define SCRIPTABLEOBJECT_T3431182594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t3431182594  : public Object_t3411029014
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t3431182594_marshaled_pinvoke : public Object_t3411029014_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t3431182594_marshaled_com : public Object_t3411029014_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T3431182594_H
#ifndef FAILEDTOLOADSCRIPTOBJECT_T2454416794_H
#define FAILEDTOLOADSCRIPTOBJECT_T2454416794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FailedToLoadScriptObject
struct  FailedToLoadScriptObject_t2454416794  : public Object_t3411029014
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.FailedToLoadScriptObject
struct FailedToLoadScriptObject_t2454416794_marshaled_pinvoke : public Object_t3411029014_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.FailedToLoadScriptObject
struct FailedToLoadScriptObject_t2454416794_marshaled_com : public Object_t3411029014_marshaled_com
{
};
#endif // FAILEDTOLOADSCRIPTOBJECT_T2454416794_H
#ifndef TOUCH_T2547862717_H
#define TOUCH_T2547862717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t2547862717 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t680295296  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t680295296  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t680295296  ___m_PositionDelta_3;
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
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t2547862717, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t2547862717, ___m_Position_1)); }
	inline Vector2_t680295296  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t680295296 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t680295296  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t2547862717, ___m_RawPosition_2)); }
	inline Vector2_t680295296  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t680295296 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t680295296  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t2547862717, ___m_PositionDelta_3)); }
	inline Vector2_t680295296  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t680295296 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t680295296  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t2547862717, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t2547862717, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t2547862717, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t2547862717, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t2547862717, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t2547862717, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t2547862717, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t2547862717, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t2547862717, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t2547862717, ___m_AzimuthAngle_13)); }
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
#endif // TOUCH_T2547862717_H
#ifndef RENDERSETTINGS_T1990494961_H
#define RENDERSETTINGS_T1990494961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderSettings
struct  RenderSettings_t1990494961  : public Object_t3411029014
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERSETTINGS_T1990494961_H
#ifndef LIGHTMAPSETTINGS_T3339320020_H
#define LIGHTMAPSETTINGS_T3339320020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LightmapSettings
struct  LightmapSettings_t3339320020  : public Object_t3411029014
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHTMAPSETTINGS_T3339320020_H
#ifndef ASSETBUNDLECREATEREQUEST_T604185280_H
#define ASSETBUNDLECREATEREQUEST_T604185280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundleCreateRequest
struct  AssetBundleCreateRequest_t604185280  : public AsyncOperation_t1438384981
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSETBUNDLECREATEREQUEST_T604185280_H
#ifndef COMPONENT_T589579297_H
#define COMPONENT_T589579297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t589579297  : public Object_t3411029014
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T589579297_H
#ifndef MESH_T1534304697_H
#define MESH_T1534304697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t1534304697  : public Object_t3411029014
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T1534304697_H
#ifndef LIGHTPROBES_T1847104015_H
#define LIGHTPROBES_T1847104015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LightProbes
struct  LightProbes_t1847104015  : public Object_t3411029014
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHTPROBES_T1847104015_H
#ifndef MULTICASTDELEGATE_T905511653_H
#define MULTICASTDELEGATE_T905511653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t905511653  : public Delegate_t346420667
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t905511653 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t905511653 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t905511653, ___prev_9)); }
	inline MulticastDelegate_t905511653 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t905511653 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t905511653 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t905511653, ___kpm_next_10)); }
	inline MulticastDelegate_t905511653 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t905511653 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t905511653 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T905511653_H
#ifndef GAMEOBJECT_T4112081111_H
#define GAMEOBJECT_T4112081111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t4112081111  : public Object_t3411029014
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T4112081111_H
#ifndef QUALITYSETTINGS_T3665719541_H
#define QUALITYSETTINGS_T3665719541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.QualitySettings
struct  QualitySettings_t3665719541  : public Object_t3411029014
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUALITYSETTINGS_T3665719541_H
#ifndef ASSETBUNDLE_T938073754_H
#define ASSETBUNDLE_T938073754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundle
struct  AssetBundle_t938073754  : public Object_t3411029014
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSETBUNDLE_T938073754_H
#ifndef ASSETBUNDLEREQUEST_T364932084_H
#define ASSETBUNDLEREQUEST_T364932084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundleRequest
struct  AssetBundleRequest_t364932084  : public AsyncOperation_t1438384981
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t364932084_marshaled_pinvoke : public AsyncOperation_t1438384981_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t364932084_marshaled_com : public AsyncOperation_t1438384981_marshaled_com
{
};
#endif // ASSETBUNDLEREQUEST_T364932084_H
#ifndef LOGCALLBACK_T3984433206_H
#define LOGCALLBACK_T3984433206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LogCallback
struct  LogCallback_t3984433206  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGCALLBACK_T3984433206_H
#ifndef LOWMEMORYCALLBACK_T3540878114_H
#define LOWMEMORYCALLBACK_T3540878114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LowMemoryCallback
struct  LowMemoryCallback_t3540878114  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOWMEMORYCALLBACK_T3540878114_H
#ifndef BEHAVIOUR_T1772242713_H
#define BEHAVIOUR_T1772242713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1772242713  : public Component_t589579297
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1772242713_H
#ifndef STATECHANGED_T872882345_H
#define STATECHANGED_T872882345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup/StateChanged
struct  StateChanged_t872882345  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATECHANGED_T872882345_H
#ifndef RENDERER_T3370833284_H
#define RENDERER_T3370833284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t3370833284  : public Component_t589579297
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T3370833284_H
#ifndef DISPLAYSUPDATEDDELEGATE_T3334459968_H
#define DISPLAYSUPDATEDDELEGATE_T3334459968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display/DisplaysUpdatedDelegate
struct  DisplaysUpdatedDelegate_t3334459968  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYSUPDATEDDELEGATE_T3334459968_H
#ifndef CAMERACALLBACK_T224027381_H
#define CAMERACALLBACK_T224027381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera/CameraCallback
struct  CameraCallback_t224027381  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACALLBACK_T224027381_H
#ifndef MESHFILTER_T49475659_H
#define MESHFILTER_T49475659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t49475659  : public Component_t589579297
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T49475659_H
#ifndef MONOBEHAVIOUR_T2180095334_H
#define MONOBEHAVIOUR_T2180095334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t2180095334  : public Behaviour_t1772242713
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T2180095334_H
#ifndef CAMERA_T866888860_H
#define CAMERA_T866888860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t866888860  : public Behaviour_t1772242713
{
public:

public:
};

struct Camera_t866888860_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t224027381 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t224027381 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t224027381 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t866888860_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t224027381 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t224027381 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t224027381 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t866888860_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t224027381 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t224027381 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t224027381 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t866888860_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t224027381 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t224027381 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t224027381 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T866888860_H
#ifndef LIGHT_T3166766662_H
#define LIGHT_T3166766662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Light
struct  Light_t3166766662  : public Behaviour_t1772242713
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_2;

public:
	inline static int32_t get_offset_of_m_BakedIndex_2() { return static_cast<int32_t>(offsetof(Light_t3166766662, ___m_BakedIndex_2)); }
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
#endif // LIGHT_T3166766662_H
#ifndef MESHRENDERER_T3028238241_H
#define MESHRENDERER_T3028238241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t3028238241  : public Renderer_t3370833284
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T3028238241_H
#ifndef GUIELEMENT_T1039882068_H
#define GUIELEMENT_T1039882068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIElement
struct  GUIElement_t1039882068  : public Behaviour_t1772242713
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIELEMENT_T1039882068_H
#ifndef NETWORKVIEW_T1545761480_H
#define NETWORKVIEW_T1545761480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkView
struct  NetworkView_t1545761480  : public Behaviour_t1772242713
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKVIEW_T1545761480_H
#ifndef GUILAYER_T313622697_H
#define GUILAYER_T313622697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayer
struct  GUILayer_t313622697  : public Behaviour_t1772242713
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYER_T313622697_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3000 = { sizeof (XContainer_t3617914763), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3000[2] = 
{
	XContainer_t3617914763::get_offset_of_first_8(),
	XContainer_t3617914763::get_offset_of_last_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3001 = { sizeof (U3CNodesU3Ec__Iterator1A_t88305227), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3001[5] = 
{
	U3CNodesU3Ec__Iterator1A_t88305227::get_offset_of_U3CnU3E__0_0(),
	U3CNodesU3Ec__Iterator1A_t88305227::get_offset_of_U3CnextU3E__1_1(),
	U3CNodesU3Ec__Iterator1A_t88305227::get_offset_of_U24PC_2(),
	U3CNodesU3Ec__Iterator1A_t88305227::get_offset_of_U24current_3(),
	U3CNodesU3Ec__Iterator1A_t88305227::get_offset_of_U3CU3Ef__this_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3002 = { sizeof (XDeclaration_t4062854853), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3002[3] = 
{
	XDeclaration_t4062854853::get_offset_of_encoding_0(),
	XDeclaration_t4062854853::get_offset_of_standalone_1(),
	XDeclaration_t4062854853::get_offset_of_version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3003 = { sizeof (XDocument_t1592296494), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3003[1] = 
{
	XDocument_t1592296494::get_offset_of_xmldecl_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3004 = { sizeof (XDocumentType_t1780791022), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3004[4] = 
{
	XDocumentType_t1780791022::get_offset_of_name_8(),
	XDocumentType_t1780791022::get_offset_of_pubid_9(),
	XDocumentType_t1780791022::get_offset_of_sysid_10(),
	XDocumentType_t1780791022::get_offset_of_intSubset_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3005 = { sizeof (XElement_t4054785200), -1, sizeof(XElement_t4054785200_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3005[5] = 
{
	XElement_t4054785200_StaticFields::get_offset_of_emptySequence_10(),
	XElement_t4054785200::get_offset_of_name_11(),
	XElement_t4054785200::get_offset_of_attr_first_12(),
	XElement_t4054785200::get_offset_of_attr_last_13(),
	XElement_t4054785200::get_offset_of_explicit_is_empty_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3006 = { sizeof (U3CAttributesU3Ec__Iterator20_t2991868239), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3006[5] = 
{
	U3CAttributesU3Ec__Iterator20_t2991868239::get_offset_of_U3CaU3E__0_0(),
	U3CAttributesU3Ec__Iterator20_t2991868239::get_offset_of_U3CnextU3E__1_1(),
	U3CAttributesU3Ec__Iterator20_t2991868239::get_offset_of_U24PC_2(),
	U3CAttributesU3Ec__Iterator20_t2991868239::get_offset_of_U24current_3(),
	U3CAttributesU3Ec__Iterator20_t2991868239::get_offset_of_U3CU3Ef__this_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3007 = { sizeof (U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t810905911), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3007[8] = 
{
	U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t810905911::get_offset_of_U3CelU3E__0_0(),
	U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t810905911::get_offset_of_U3CU24s_68U3E__1_1(),
	U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t810905911::get_offset_of_U3CaU3E__2_2(),
	U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t810905911::get_offset_of_ns_3(),
	U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t810905911::get_offset_of_U24PC_4(),
	U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t810905911::get_offset_of_U24current_5(),
	U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t810905911::get_offset_of_U3CU24U3Ens_6(),
	U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t810905911::get_offset_of_U3CU3Ef__this_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3008 = { sizeof (XName_t212435238), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3008[2] = 
{
	XName_t212435238::get_offset_of_local_0(),
	XName_t212435238::get_offset_of_ns_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3009 = { sizeof (XNamespace_t3854109164), -1, sizeof(XNamespace_t3854109164_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3009[6] = 
{
	XNamespace_t3854109164_StaticFields::get_offset_of_blank_0(),
	XNamespace_t3854109164_StaticFields::get_offset_of_xml_1(),
	XNamespace_t3854109164_StaticFields::get_offset_of_xmlns_2(),
	XNamespace_t3854109164_StaticFields::get_offset_of_nstable_3(),
	XNamespace_t3854109164::get_offset_of_uri_4(),
	XNamespace_t3854109164::get_offset_of_table_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3010 = { sizeof (XNode_t2212804849), -1, sizeof(XNode_t2212804849_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3010[4] = 
{
	XNode_t2212804849_StaticFields::get_offset_of_eq_comparer_4(),
	XNode_t2212804849_StaticFields::get_offset_of_order_comparer_5(),
	XNode_t2212804849::get_offset_of_previous_6(),
	XNode_t2212804849::get_offset_of_next_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3011 = { sizeof (XNodeDocumentOrderComparer_t3587170718), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3012 = { sizeof (CompareResult_t1840554193)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3012[9] = 
{
	CompareResult_t1840554193::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3013 = { sizeof (XNodeEqualityComparer_t2174105339), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3014 = { sizeof (XObject_t1582006750), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3014[4] = 
{
	XObject_t1582006750::get_offset_of_owner_0(),
	XObject_t1582006750::get_offset_of_baseuri_1(),
	XObject_t1582006750::get_offset_of_line_2(),
	XObject_t1582006750::get_offset_of_column_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3015 = { sizeof (XProcessingInstruction_t2992450387), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3015[2] = 
{
	XProcessingInstruction_t2992450387::get_offset_of_name_8(),
	XProcessingInstruction_t2992450387::get_offset_of_data_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3016 = { sizeof (XText_t4144209884), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3016[1] = 
{
	XText_t4144209884::get_offset_of_value_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3017 = { sizeof (XUtil_t2475861538), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3018 = { sizeof (U3CExpandArrayU3Ec__Iterator25_t2720300305), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3018[9] = 
{
	U3CExpandArrayU3Ec__Iterator25_t2720300305::get_offset_of_o_0(),
	U3CExpandArrayU3Ec__Iterator25_t2720300305::get_offset_of_U3CnU3E__0_1(),
	U3CExpandArrayU3Ec__Iterator25_t2720300305::get_offset_of_U3CU24s_86U3E__1_2(),
	U3CExpandArrayU3Ec__Iterator25_t2720300305::get_offset_of_U3CobjU3E__2_3(),
	U3CExpandArrayU3Ec__Iterator25_t2720300305::get_offset_of_U3CU24s_87U3E__3_4(),
	U3CExpandArrayU3Ec__Iterator25_t2720300305::get_offset_of_U3CooU3E__4_5(),
	U3CExpandArrayU3Ec__Iterator25_t2720300305::get_offset_of_U24PC_6(),
	U3CExpandArrayU3Ec__Iterator25_t2720300305::get_offset_of_U24current_7(),
	U3CExpandArrayU3Ec__Iterator25_t2720300305::get_offset_of_U3CU24U3Eo_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3019 = { sizeof (U3CPrivateImplementationDetailsU3E_t1698564607), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1698564607_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3019[1] = 
{
	U3CPrivateImplementationDetailsU3E_t1698564607_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3020 = { sizeof (U24ArrayTypeU2416_t1716548270)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2416_t1716548270 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3021 = { sizeof (U3CModuleU3E_t4264416200), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3022 = { sizeof (Application_t1822371542), -1, sizeof(Application_t1822371542_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3022[4] = 
{
	Application_t1822371542_StaticFields::get_offset_of_lowMemory_0(),
	Application_t1822371542_StaticFields::get_offset_of_s_LogCallbackHandler_1(),
	Application_t1822371542_StaticFields::get_offset_of_s_LogCallbackHandlerThreaded_2(),
	Application_t1822371542_StaticFields::get_offset_of_onBeforeRender_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3023 = { sizeof (LowMemoryCallback_t3540878114), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3024 = { sizeof (LogCallback_t3984433206), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3025 = { sizeof (AssetBundleCreateRequest_t604185280), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3026 = { sizeof (AssetBundleRequest_t364932084), sizeof(AssetBundleRequest_t364932084_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3027 = { sizeof (AssetBundle_t938073754), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3028 = { sizeof (AsyncOperation_t1438384981), sizeof(AsyncOperation_t1438384981_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3028[1] = 
{
	AsyncOperation_t1438384981::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3029 = { sizeof (SystemInfo_t876164885), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3030 = { sizeof (WaitForSeconds_t1199935048), sizeof(WaitForSeconds_t1199935048_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3030[1] = 
{
	WaitForSeconds_t1199935048::get_offset_of_m_Seconds_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3031 = { sizeof (WaitForFixedUpdate_t724701634), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3032 = { sizeof (WaitForEndOfFrame_t851222588), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3033 = { sizeof (CustomYieldInstruction_t2497760721), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3034 = { sizeof (Coroutine_t801279259), sizeof(Coroutine_t801279259_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3034[1] = 
{
	Coroutine_t801279259::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3035 = { sizeof (ScriptableObject_t3431182594), sizeof(ScriptableObject_t3431182594_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3036 = { sizeof (FailedToLoadScriptObject_t2454416794), sizeof(FailedToLoadScriptObject_t2454416794_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3037 = { sizeof (Behaviour_t1772242713), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3038 = { sizeof (Camera_t866888860), -1, sizeof(Camera_t866888860_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3038[3] = 
{
	Camera_t866888860_StaticFields::get_offset_of_onPreCull_2(),
	Camera_t866888860_StaticFields::get_offset_of_onPreRender_3(),
	Camera_t866888860_StaticFields::get_offset_of_onPostRender_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3039 = { sizeof (CameraCallback_t224027381), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3040 = { sizeof (Component_t589579297), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3041 = { sizeof (UnhandledExceptionHandler_t2917824870), -1, sizeof(UnhandledExceptionHandler_t2917824870_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3041[1] = 
{
	UnhandledExceptionHandler_t2917824870_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3042 = { sizeof (CullingGroupEvent_t2683986671)+ sizeof (RuntimeObject), sizeof(CullingGroupEvent_t2683986671 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3042[3] = 
{
	CullingGroupEvent_t2683986671::get_offset_of_m_Index_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t2683986671::get_offset_of_m_PrevState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t2683986671::get_offset_of_m_ThisState_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3043 = { sizeof (CullingGroup_t2726813712), sizeof(CullingGroup_t2726813712_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3043[2] = 
{
	CullingGroup_t2726813712::get_offset_of_m_Ptr_0(),
	CullingGroup_t2726813712::get_offset_of_m_OnStateChanged_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3044 = { sizeof (StateChanged_t872882345), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3045 = { sizeof (CursorLockMode_t3463750965)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3045[4] = 
{
	CursorLockMode_t3463750965::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3046 = { sizeof (Cursor_t1362515464), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3047 = { sizeof (DebugLogHandler_t3226125174), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3048 = { sizeof (Debug_t1647946932), -1, sizeof(Debug_t1647946932_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3048[1] = 
{
	Debug_t1647946932_StaticFields::get_offset_of_s_Logger_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3049 = { sizeof (Display_t3867356297), -1, sizeof(Display_t3867356297_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3049[4] = 
{
	Display_t3867356297::get_offset_of_nativeDisplay_0(),
	Display_t3867356297_StaticFields::get_offset_of_displays_1(),
	Display_t3867356297_StaticFields::get_offset_of__mainDisplay_2(),
	Display_t3867356297_StaticFields::get_offset_of_onDisplaysUpdated_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3050 = { sizeof (DisplaysUpdatedDelegate_t3334459968), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3051 = { sizeof (GameObject_t4112081111), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3052 = { sizeof (Gradient_t919596157), sizeof(Gradient_t919596157_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3052[1] = 
{
	Gradient_t919596157::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3053 = { sizeof (RenderSettings_t1990494961), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3054 = { sizeof (QualitySettings_t3665719541), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3055 = { sizeof (MeshFilter_t49475659), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3056 = { sizeof (Renderer_t3370833284), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3057 = { sizeof (MaterialPropertyBlock_t1598978997), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3057[1] = 
{
	MaterialPropertyBlock_t1598978997::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3058 = { sizeof (LightProbes_t1847104015), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3059 = { sizeof (LightmapSettings_t3339320020), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3060 = { sizeof (Screen_t350152785), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3061 = { sizeof (MeshRenderer_t3028238241), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3062 = { sizeof (RectOffset_t2596031519), sizeof(RectOffset_t2596031519_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3062[2] = 
{
	RectOffset_t2596031519::get_offset_of_m_Ptr_0(),
	RectOffset_t2596031519::get_offset_of_m_SourceStyle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3063 = { sizeof (GUIElement_t1039882068), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3064 = { sizeof (GUILayer_t313622697), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3065 = { sizeof (TouchScreenKeyboard_InternalConstructorHelperArguments_t4010709356)+ sizeof (RuntimeObject), sizeof(TouchScreenKeyboard_InternalConstructorHelperArguments_t4010709356 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3065[5] = 
{
	TouchScreenKeyboard_InternalConstructorHelperArguments_t4010709356::get_offset_of_keyboardType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t4010709356::get_offset_of_autocorrection_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t4010709356::get_offset_of_multiline_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t4010709356::get_offset_of_secure_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t4010709356::get_offset_of_alert_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3066 = { sizeof (TouchScreenKeyboard_t1324816179), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3066[1] = 
{
	TouchScreenKeyboard_t1324816179::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3067 = { sizeof (TouchPhase_t2496570352)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3067[6] = 
{
	TouchPhase_t2496570352::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3068 = { sizeof (IMECompositionMode_t1960545577)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3068[4] = 
{
	IMECompositionMode_t1960545577::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3069 = { sizeof (TouchType_t2978410530)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3069[4] = 
{
	TouchType_t2978410530::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3070 = { sizeof (Touch_t2547862717)+ sizeof (RuntimeObject), sizeof(Touch_t2547862717 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3070[14] = 
{
	Touch_t2547862717::get_offset_of_m_FingerId_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2547862717::get_offset_of_m_Position_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2547862717::get_offset_of_m_RawPosition_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2547862717::get_offset_of_m_PositionDelta_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2547862717::get_offset_of_m_TimeDelta_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2547862717::get_offset_of_m_TapCount_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2547862717::get_offset_of_m_Phase_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2547862717::get_offset_of_m_Type_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2547862717::get_offset_of_m_Pressure_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2547862717::get_offset_of_m_maximumPossiblePressure_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2547862717::get_offset_of_m_Radius_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2547862717::get_offset_of_m_RadiusVariance_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2547862717::get_offset_of_m_AltitudeAngle_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2547862717::get_offset_of_m_AzimuthAngle_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3071 = { sizeof (Gyroscope_t420243132), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3072 = { sizeof (LocationInfo_t2913371470)+ sizeof (RuntimeObject), sizeof(LocationInfo_t2913371470 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3072[6] = 
{
	LocationInfo_t2913371470::get_offset_of_m_Timestamp_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LocationInfo_t2913371470::get_offset_of_m_Latitude_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LocationInfo_t2913371470::get_offset_of_m_Longitude_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LocationInfo_t2913371470::get_offset_of_m_Altitude_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LocationInfo_t2913371470::get_offset_of_m_HorizontalAccuracy_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LocationInfo_t2913371470::get_offset_of_m_VerticalAccuracy_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3073 = { sizeof (LocationServiceStatus_t3743834447)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3073[5] = 
{
	LocationServiceStatus_t3743834447::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3074 = { sizeof (LocationService_t928662678), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3075 = { sizeof (Compass_t4027010770), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3076 = { sizeof (Input_t238603509), -1, sizeof(Input_t238603509_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3076[3] = 
{
	Input_t238603509_StaticFields::get_offset_of_m_MainGyro_0(),
	Input_t238603509_StaticFields::get_offset_of_locationServiceInstance_1(),
	Input_t238603509_StaticFields::get_offset_of_compassInstance_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3077 = { sizeof (LayerMask_t1657378534)+ sizeof (RuntimeObject), sizeof(LayerMask_t1657378534 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3077[1] = 
{
	LayerMask_t1657378534::get_offset_of_m_Mask_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3078 = { sizeof (Light_t3166766662), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3078[1] = 
{
	Light_t3166766662::get_offset_of_m_BakedIndex_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3079 = { sizeof (Vector3_t638544396)+ sizeof (RuntimeObject), sizeof(Vector3_t638544396 ), sizeof(Vector3_t638544396_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3079[14] = 
{
	0,
	Vector3_t638544396::get_offset_of_x_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t638544396::get_offset_of_y_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t638544396::get_offset_of_z_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t638544396_StaticFields::get_offset_of_zeroVector_4(),
	Vector3_t638544396_StaticFields::get_offset_of_oneVector_5(),
	Vector3_t638544396_StaticFields::get_offset_of_upVector_6(),
	Vector3_t638544396_StaticFields::get_offset_of_downVector_7(),
	Vector3_t638544396_StaticFields::get_offset_of_leftVector_8(),
	Vector3_t638544396_StaticFields::get_offset_of_rightVector_9(),
	Vector3_t638544396_StaticFields::get_offset_of_forwardVector_10(),
	Vector3_t638544396_StaticFields::get_offset_of_backVector_11(),
	Vector3_t638544396_StaticFields::get_offset_of_positiveInfinityVector_12(),
	Vector3_t638544396_StaticFields::get_offset_of_negativeInfinityVector_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3080 = { sizeof (Quaternion_t1786792567)+ sizeof (RuntimeObject), sizeof(Quaternion_t1786792567 ), sizeof(Quaternion_t1786792567_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3080[6] = 
{
	Quaternion_t1786792567::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t1786792567::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t1786792567::get_offset_of_z_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t1786792567::get_offset_of_w_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t1786792567_StaticFields::get_offset_of_identityQuaternion_4(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3081 = { sizeof (Matrix4x4_t3657519234)+ sizeof (RuntimeObject), sizeof(Matrix4x4_t3657519234 ), sizeof(Matrix4x4_t3657519234_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3081[18] = 
{
	Matrix4x4_t3657519234::get_offset_of_m00_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3657519234::get_offset_of_m10_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3657519234::get_offset_of_m20_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3657519234::get_offset_of_m30_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3657519234::get_offset_of_m01_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3657519234::get_offset_of_m11_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3657519234::get_offset_of_m21_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3657519234::get_offset_of_m31_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3657519234::get_offset_of_m02_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3657519234::get_offset_of_m12_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3657519234::get_offset_of_m22_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3657519234::get_offset_of_m32_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3657519234::get_offset_of_m03_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3657519234::get_offset_of_m13_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3657519234::get_offset_of_m23_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3657519234::get_offset_of_m33_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3657519234_StaticFields::get_offset_of_zeroMatrix_16(),
	Matrix4x4_t3657519234_StaticFields::get_offset_of_identityMatrix_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3082 = { sizeof (Bounds_t1732058181)+ sizeof (RuntimeObject), sizeof(Bounds_t1732058181 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3082[2] = 
{
	Bounds_t1732058181::get_offset_of_m_Center_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Bounds_t1732058181::get_offset_of_m_Extents_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3083 = { sizeof (Mathf_t201832977)+ sizeof (RuntimeObject), sizeof(Mathf_t201832977 ), sizeof(Mathf_t201832977_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3083[1] = 
{
	Mathf_t201832977_StaticFields::get_offset_of_Epsilon_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3084 = { sizeof (Keyframe_t4091804758)+ sizeof (RuntimeObject), sizeof(Keyframe_t4091804758 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3084[4] = 
{
	Keyframe_t4091804758::get_offset_of_m_Time_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t4091804758::get_offset_of_m_Value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t4091804758::get_offset_of_m_InTangent_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t4091804758::get_offset_of_m_OutTangent_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3085 = { sizeof (AnimationCurve_t3143246184), sizeof(AnimationCurve_t3143246184_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3085[1] = 
{
	AnimationCurve_t3143246184::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3086 = { sizeof (Mesh_t1534304697), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3087 = { sizeof (InternalShaderChannel_t2182637787)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3087[9] = 
{
	InternalShaderChannel_t2182637787::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3088 = { sizeof (InternalVertexChannelType_t2950563558)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3088[3] = 
{
	InternalVertexChannelType_t2950563558::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3089 = { sizeof (MonoBehaviour_t2180095334), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3090 = { sizeof (NetworkPlayer_t2602801639)+ sizeof (RuntimeObject), sizeof(NetworkPlayer_t2602801639 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3090[1] = 
{
	NetworkPlayer_t2602801639::get_offset_of_index_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3091 = { sizeof (NetworkViewID_t612802567)+ sizeof (RuntimeObject), sizeof(NetworkViewID_t612802567 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3091[3] = 
{
	NetworkViewID_t612802567::get_offset_of_a_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkViewID_t612802567::get_offset_of_b_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkViewID_t612802567::get_offset_of_c_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3092 = { sizeof (NetworkView_t1545761480), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3093 = { sizeof (BitStream_t1775220973), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3093[1] = 
{
	BitStream_t1775220973::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3094 = { sizeof (RPC_t3859908688), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3095 = { sizeof (HostData_t3398010783), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3095[10] = 
{
	HostData_t3398010783::get_offset_of_m_Nat_0(),
	HostData_t3398010783::get_offset_of_m_GameType_1(),
	HostData_t3398010783::get_offset_of_m_GameName_2(),
	HostData_t3398010783::get_offset_of_m_ConnectedPlayers_3(),
	HostData_t3398010783::get_offset_of_m_PlayerLimit_4(),
	HostData_t3398010783::get_offset_of_m_IP_5(),
	HostData_t3398010783::get_offset_of_m_Port_6(),
	HostData_t3398010783::get_offset_of_m_PasswordProtected_7(),
	HostData_t3398010783::get_offset_of_m_Comment_8(),
	HostData_t3398010783::get_offset_of_m_GUID_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3096 = { sizeof (NetworkMessageInfo_t2617239561)+ sizeof (RuntimeObject), sizeof(NetworkMessageInfo_t2617239561 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3096[3] = 
{
	NetworkMessageInfo_t2617239561::get_offset_of_m_TimeStamp_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkMessageInfo_t2617239561::get_offset_of_m_Sender_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkMessageInfo_t2617239561::get_offset_of_m_ViewID_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3097 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3098 = { sizeof (PlayerConnectionInternal_t3619672480), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3099 = { sizeof (PlayerPrefsException_t3782386320), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
