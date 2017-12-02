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

// UnityEngine.Object
struct Object_t2959123960;
// System.String
struct String_t;
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t3390434829;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1369747660;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t5893965;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t1512187251;
// System.IntPtr[]
struct IntPtrU5BU5D_t3659589827;
// System.Collections.IDictionary
struct IDictionary_t2958216421;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t2509516432;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t4293353747;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t3992391162;
// UnityEngine.Events.UnityAction
struct UnityAction_t975035011;
// UnityEngine.GameObject
struct GameObject_t2713501050;
// UnityEngine.Camera
struct Camera_t3598185681;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2567660903;
// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct Queue_1_t2506499647;
// System.Object[]
struct ObjectU5BU5D_t2392277051;
// System.Void
struct Void_t3045135636;
// System.Char[]
struct CharU5BU5D_t1565992178;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1857717760;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t789627557;
// System.IAsyncResult
struct IAsyncResult_t1380204350;
// System.AsyncCallback
struct AsyncCallback_t3881358540;




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
#ifndef ARGUMENTCACHE_T789627557_H
#define ARGUMENTCACHE_T789627557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.ArgumentCache
struct  ArgumentCache_t789627557  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.ArgumentCache::m_ObjectArgument
	Object_t2959123960 * ___m_ObjectArgument_0;
	// System.String UnityEngine.Events.ArgumentCache::m_ObjectArgumentAssemblyTypeName
	String_t* ___m_ObjectArgumentAssemblyTypeName_1;
	// System.Int32 UnityEngine.Events.ArgumentCache::m_IntArgument
	int32_t ___m_IntArgument_2;
	// System.Single UnityEngine.Events.ArgumentCache::m_FloatArgument
	float ___m_FloatArgument_3;
	// System.String UnityEngine.Events.ArgumentCache::m_StringArgument
	String_t* ___m_StringArgument_4;
	// System.Boolean UnityEngine.Events.ArgumentCache::m_BoolArgument
	bool ___m_BoolArgument_5;

public:
	inline static int32_t get_offset_of_m_ObjectArgument_0() { return static_cast<int32_t>(offsetof(ArgumentCache_t789627557, ___m_ObjectArgument_0)); }
	inline Object_t2959123960 * get_m_ObjectArgument_0() const { return ___m_ObjectArgument_0; }
	inline Object_t2959123960 ** get_address_of_m_ObjectArgument_0() { return &___m_ObjectArgument_0; }
	inline void set_m_ObjectArgument_0(Object_t2959123960 * value)
	{
		___m_ObjectArgument_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgument_0), value);
	}

	inline static int32_t get_offset_of_m_ObjectArgumentAssemblyTypeName_1() { return static_cast<int32_t>(offsetof(ArgumentCache_t789627557, ___m_ObjectArgumentAssemblyTypeName_1)); }
	inline String_t* get_m_ObjectArgumentAssemblyTypeName_1() const { return ___m_ObjectArgumentAssemblyTypeName_1; }
	inline String_t** get_address_of_m_ObjectArgumentAssemblyTypeName_1() { return &___m_ObjectArgumentAssemblyTypeName_1; }
	inline void set_m_ObjectArgumentAssemblyTypeName_1(String_t* value)
	{
		___m_ObjectArgumentAssemblyTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgumentAssemblyTypeName_1), value);
	}

	inline static int32_t get_offset_of_m_IntArgument_2() { return static_cast<int32_t>(offsetof(ArgumentCache_t789627557, ___m_IntArgument_2)); }
	inline int32_t get_m_IntArgument_2() const { return ___m_IntArgument_2; }
	inline int32_t* get_address_of_m_IntArgument_2() { return &___m_IntArgument_2; }
	inline void set_m_IntArgument_2(int32_t value)
	{
		___m_IntArgument_2 = value;
	}

	inline static int32_t get_offset_of_m_FloatArgument_3() { return static_cast<int32_t>(offsetof(ArgumentCache_t789627557, ___m_FloatArgument_3)); }
	inline float get_m_FloatArgument_3() const { return ___m_FloatArgument_3; }
	inline float* get_address_of_m_FloatArgument_3() { return &___m_FloatArgument_3; }
	inline void set_m_FloatArgument_3(float value)
	{
		___m_FloatArgument_3 = value;
	}

	inline static int32_t get_offset_of_m_StringArgument_4() { return static_cast<int32_t>(offsetof(ArgumentCache_t789627557, ___m_StringArgument_4)); }
	inline String_t* get_m_StringArgument_4() const { return ___m_StringArgument_4; }
	inline String_t** get_address_of_m_StringArgument_4() { return &___m_StringArgument_4; }
	inline void set_m_StringArgument_4(String_t* value)
	{
		___m_StringArgument_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringArgument_4), value);
	}

	inline static int32_t get_offset_of_m_BoolArgument_5() { return static_cast<int32_t>(offsetof(ArgumentCache_t789627557, ___m_BoolArgument_5)); }
	inline bool get_m_BoolArgument_5() const { return ___m_BoolArgument_5; }
	inline bool* get_address_of_m_BoolArgument_5() { return &___m_BoolArgument_5; }
	inline void set_m_BoolArgument_5(bool value)
	{
		___m_BoolArgument_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTCACHE_T789627557_H
#ifndef BASEINVOKABLECALL_T1830042727_H
#define BASEINVOKABLECALL_T1830042727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_t1830042727  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_T1830042727_H
#ifndef SCRIPTINGUTILS_T543215380_H
#define SCRIPTINGUTILS_T543215380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.ScriptingUtils
struct  ScriptingUtils_t543215380  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTINGUTILS_T543215380_H
#ifndef SENDMOUSEEVENTS_T3405797331_H
#define SENDMOUSEEVENTS_T3405797331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t3405797331  : public RuntimeObject
{
public:

public:
};

struct SendMouseEvents_t3405797331_StaticFields
{
public:
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseUsed
	bool ___s_MouseUsed_0;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t3390434829* ___m_LastHit_1;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t3390434829* ___m_MouseDownHit_2;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t3390434829* ___m_CurrentHit_3;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t1369747660* ___m_Cameras_4;

public:
	inline static int32_t get_offset_of_s_MouseUsed_0() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3405797331_StaticFields, ___s_MouseUsed_0)); }
	inline bool get_s_MouseUsed_0() const { return ___s_MouseUsed_0; }
	inline bool* get_address_of_s_MouseUsed_0() { return &___s_MouseUsed_0; }
	inline void set_s_MouseUsed_0(bool value)
	{
		___s_MouseUsed_0 = value;
	}

	inline static int32_t get_offset_of_m_LastHit_1() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3405797331_StaticFields, ___m_LastHit_1)); }
	inline HitInfoU5BU5D_t3390434829* get_m_LastHit_1() const { return ___m_LastHit_1; }
	inline HitInfoU5BU5D_t3390434829** get_address_of_m_LastHit_1() { return &___m_LastHit_1; }
	inline void set_m_LastHit_1(HitInfoU5BU5D_t3390434829* value)
	{
		___m_LastHit_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastHit_1), value);
	}

	inline static int32_t get_offset_of_m_MouseDownHit_2() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3405797331_StaticFields, ___m_MouseDownHit_2)); }
	inline HitInfoU5BU5D_t3390434829* get_m_MouseDownHit_2() const { return ___m_MouseDownHit_2; }
	inline HitInfoU5BU5D_t3390434829** get_address_of_m_MouseDownHit_2() { return &___m_MouseDownHit_2; }
	inline void set_m_MouseDownHit_2(HitInfoU5BU5D_t3390434829* value)
	{
		___m_MouseDownHit_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_MouseDownHit_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentHit_3() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3405797331_StaticFields, ___m_CurrentHit_3)); }
	inline HitInfoU5BU5D_t3390434829* get_m_CurrentHit_3() const { return ___m_CurrentHit_3; }
	inline HitInfoU5BU5D_t3390434829** get_address_of_m_CurrentHit_3() { return &___m_CurrentHit_3; }
	inline void set_m_CurrentHit_3(HitInfoU5BU5D_t3390434829* value)
	{
		___m_CurrentHit_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentHit_3), value);
	}

	inline static int32_t get_offset_of_m_Cameras_4() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3405797331_StaticFields, ___m_Cameras_4)); }
	inline CameraU5BU5D_t1369747660* get_m_Cameras_4() const { return ___m_Cameras_4; }
	inline CameraU5BU5D_t1369747660** get_address_of_m_Cameras_4() { return &___m_Cameras_4; }
	inline void set_m_Cameras_4(CameraU5BU5D_t1369747660* value)
	{
		___m_Cameras_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cameras_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMOUSEEVENTS_T3405797331_H
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
#ifndef SETUPCOROUTINE_T79821028_H
#define SETUPCOROUTINE_T79821028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SetupCoroutine
struct  SetupCoroutine_t79821028  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETUPCOROUTINE_T79821028_H
#ifndef UNITYSTRING_T3531455484_H
#define UNITYSTRING_T3531455484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityString
struct  UnityString_t3531455484  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSTRING_T3531455484_H
#ifndef CLASSLIBRARYINITIALIZER_T2665232679_H
#define CLASSLIBRARYINITIALIZER_T2665232679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ClassLibraryInitializer
struct  ClassLibraryInitializer_t2665232679  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSLIBRARYINITIALIZER_T2665232679_H
#ifndef UNITYEVENTBASE_T273297287_H
#define UNITYEVENTBASE_T273297287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t273297287  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t5893965 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t1512187251 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t273297287, ___m_Calls_0)); }
	inline InvokableCallList_t5893965 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t5893965 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t5893965 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t273297287, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t1512187251 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t1512187251 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t1512187251 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t273297287, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t273297287, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T273297287_H
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
#ifndef INVOKABLECALLLIST_T5893965_H
#define INVOKABLECALLLIST_T5893965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCallList
struct  InvokableCallList_t5893965  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_PersistentCalls
	List_1_t2509516432 * ___m_PersistentCalls_0;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_RuntimeCalls
	List_1_t2509516432 * ___m_RuntimeCalls_1;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_ExecutingCalls
	List_1_t2509516432 * ___m_ExecutingCalls_2;
	// System.Boolean UnityEngine.Events.InvokableCallList::m_NeedsUpdate
	bool ___m_NeedsUpdate_3;

public:
	inline static int32_t get_offset_of_m_PersistentCalls_0() { return static_cast<int32_t>(offsetof(InvokableCallList_t5893965, ___m_PersistentCalls_0)); }
	inline List_1_t2509516432 * get_m_PersistentCalls_0() const { return ___m_PersistentCalls_0; }
	inline List_1_t2509516432 ** get_address_of_m_PersistentCalls_0() { return &___m_PersistentCalls_0; }
	inline void set_m_PersistentCalls_0(List_1_t2509516432 * value)
	{
		___m_PersistentCalls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_0), value);
	}

	inline static int32_t get_offset_of_m_RuntimeCalls_1() { return static_cast<int32_t>(offsetof(InvokableCallList_t5893965, ___m_RuntimeCalls_1)); }
	inline List_1_t2509516432 * get_m_RuntimeCalls_1() const { return ___m_RuntimeCalls_1; }
	inline List_1_t2509516432 ** get_address_of_m_RuntimeCalls_1() { return &___m_RuntimeCalls_1; }
	inline void set_m_RuntimeCalls_1(List_1_t2509516432 * value)
	{
		___m_RuntimeCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_RuntimeCalls_1), value);
	}

	inline static int32_t get_offset_of_m_ExecutingCalls_2() { return static_cast<int32_t>(offsetof(InvokableCallList_t5893965, ___m_ExecutingCalls_2)); }
	inline List_1_t2509516432 * get_m_ExecutingCalls_2() const { return ___m_ExecutingCalls_2; }
	inline List_1_t2509516432 ** get_address_of_m_ExecutingCalls_2() { return &___m_ExecutingCalls_2; }
	inline void set_m_ExecutingCalls_2(List_1_t2509516432 * value)
	{
		___m_ExecutingCalls_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutingCalls_2), value);
	}

	inline static int32_t get_offset_of_m_NeedsUpdate_3() { return static_cast<int32_t>(offsetof(InvokableCallList_t5893965, ___m_NeedsUpdate_3)); }
	inline bool get_m_NeedsUpdate_3() const { return ___m_NeedsUpdate_3; }
	inline bool* get_address_of_m_NeedsUpdate_3() { return &___m_NeedsUpdate_3; }
	inline void set_m_NeedsUpdate_3(bool value)
	{
		___m_NeedsUpdate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALLLIST_T5893965_H
#ifndef GUISTATEOBJECTS_T2957732363_H
#define GUISTATEOBJECTS_T2957732363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStateObjects
struct  GUIStateObjects_t2957732363  : public RuntimeObject
{
public:

public:
};

struct GUIStateObjects_t2957732363_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Object> UnityEngine.GUIStateObjects::s_StateCache
	Dictionary_2_t4293353747 * ___s_StateCache_0;

public:
	inline static int32_t get_offset_of_s_StateCache_0() { return static_cast<int32_t>(offsetof(GUIStateObjects_t2957732363_StaticFields, ___s_StateCache_0)); }
	inline Dictionary_2_t4293353747 * get_s_StateCache_0() const { return ___s_StateCache_0; }
	inline Dictionary_2_t4293353747 ** get_address_of_s_StateCache_0() { return &___s_StateCache_0; }
	inline void set_s_StateCache_0(Dictionary_2_t4293353747 * value)
	{
		___s_StateCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_StateCache_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISTATEOBJECTS_T2957732363_H
#ifndef SYNCHRONIZATIONCONTEXT_T181644878_H
#define SYNCHRONIZATIONCONTEXT_T181644878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t181644878  : public RuntimeObject
{
public:

public:
};

struct SynchronizationContext_t181644878_ThreadStaticFields
{
public:
	// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::currentContext
	SynchronizationContext_t181644878 * ___currentContext_0;

public:
	inline static int32_t get_offset_of_currentContext_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t181644878_ThreadStaticFields, ___currentContext_0)); }
	inline SynchronizationContext_t181644878 * get_currentContext_0() const { return ___currentContext_0; }
	inline SynchronizationContext_t181644878 ** get_address_of_currentContext_0() { return &___currentContext_0; }
	inline void set_currentContext_0(SynchronizationContext_t181644878 * value)
	{
		___currentContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentContext_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXT_T181644878_H
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
#ifndef PERSISTENTCALLGROUP_T1512187251_H
#define PERSISTENTCALLGROUP_T1512187251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCallGroup
struct  PersistentCallGroup_t1512187251  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall> UnityEngine.Events.PersistentCallGroup::m_Calls
	List_1_t3992391162 * ___m_Calls_0;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(PersistentCallGroup_t1512187251, ___m_Calls_0)); }
	inline List_1_t3992391162 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline List_1_t3992391162 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(List_1_t3992391162 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALLGROUP_T1512187251_H
#ifndef STACKTRACEUTILITY_T2935809837_H
#define STACKTRACEUTILITY_T2935809837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StackTraceUtility
struct  StackTraceUtility_t2935809837  : public RuntimeObject
{
public:

public:
};

struct StackTraceUtility_t2935809837_StaticFields
{
public:
	// System.String UnityEngine.StackTraceUtility::projectFolder
	String_t* ___projectFolder_0;

public:
	inline static int32_t get_offset_of_projectFolder_0() { return static_cast<int32_t>(offsetof(StackTraceUtility_t2935809837_StaticFields, ___projectFolder_0)); }
	inline String_t* get_projectFolder_0() const { return ___projectFolder_0; }
	inline String_t** get_address_of_projectFolder_0() { return &___projectFolder_0; }
	inline void set_projectFolder_0(String_t* value)
	{
		___projectFolder_0 = value;
		Il2CppCodeGenWriteBarrier((&___projectFolder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACEUTILITY_T2935809837_H
#ifndef VECTOR4_T3956767633_H
#define VECTOR4_T3956767633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3956767633 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3956767633, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3956767633, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3956767633, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3956767633, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3956767633_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3956767633  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3956767633  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3956767633  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3956767633  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3956767633_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3956767633  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3956767633 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3956767633  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3956767633_StaticFields, ___oneVector_6)); }
	inline Vector4_t3956767633  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3956767633 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3956767633  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3956767633_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3956767633  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3956767633 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3956767633  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3956767633_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3956767633  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3956767633 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3956767633  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3956767633_H
#ifndef INVOKABLECALL_T4038916779_H
#define INVOKABLECALL_T4038916779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall
struct  InvokableCall_t4038916779  : public BaseInvokableCall_t1830042727
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t975035011 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t4038916779, ___Delegate_0)); }
	inline UnityAction_t975035011 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t975035011 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t975035011 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_T4038916779_H
#ifndef UNITYEXCEPTION_T3117622477_H
#define UNITYEXCEPTION_T3117622477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityException
struct  UnityException_t3117622477  : public Exception_t3144957912
{
public:
	// System.String UnityEngine.UnityException::unityStackTrace
	String_t* ___unityStackTrace_12;

public:
	inline static int32_t get_offset_of_unityStackTrace_12() { return static_cast<int32_t>(offsetof(UnityException_t3117622477, ___unityStackTrace_12)); }
	inline String_t* get_unityStackTrace_12() const { return ___unityStackTrace_12; }
	inline String_t** get_address_of_unityStackTrace_12() { return &___unityStackTrace_12; }
	inline void set_unityStackTrace_12(String_t* value)
	{
		___unityStackTrace_12 = value;
		Il2CppCodeGenWriteBarrier((&___unityStackTrace_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEXCEPTION_T3117622477_H
#ifndef HITINFO_T823695844_H
#define HITINFO_T823695844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t823695844 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t2713501050 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t3598185681 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t823695844, ___target_0)); }
	inline GameObject_t2713501050 * get_target_0() const { return ___target_0; }
	inline GameObject_t2713501050 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t2713501050 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t823695844, ___camera_1)); }
	inline Camera_t3598185681 * get_camera_1() const { return ___camera_1; }
	inline Camera_t3598185681 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t3598185681 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t823695844_marshaled_pinvoke
{
	GameObject_t2713501050 * ___target_0;
	Camera_t3598185681 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t823695844_marshaled_com
{
	GameObject_t2713501050 * ___target_0;
	Camera_t3598185681 * ___camera_1;
};
#endif // HITINFO_T823695844_H
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
#ifndef PREFERBINARYSERIALIZATION_T2280044084_H
#define PREFERBINARYSERIALIZATION_T2280044084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PreferBinarySerialization
struct  PreferBinarySerialization_t2280044084  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREFERBINARYSERIALIZATION_T2280044084_H
#ifndef SERIALIZEFIELD_T2010593100_H
#define SERIALIZEFIELD_T2010593100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializeField
struct  SerializeField_t2010593100  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEFIELD_T2010593100_H
#ifndef RANGEINT_T277386674_H
#define RANGEINT_T277386674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeInt
struct  RangeInt_t277386674 
{
public:
	// System.Int32 UnityEngine.RangeInt::start
	int32_t ___start_0;
	// System.Int32 UnityEngine.RangeInt::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(RangeInt_t277386674, ___start_0)); }
	inline int32_t get_start_0() const { return ___start_0; }
	inline int32_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int32_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(RangeInt_t277386674, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEINT_T277386674_H
#ifndef SERIALIZEPRIVATEVARIABLES_T1113383561_H
#define SERIALIZEPRIVATEVARIABLES_T1113383561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializePrivateVariables
struct  SerializePrivateVariables_t1113383561  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEPRIVATEVARIABLES_T1113383561_H
#ifndef WORKREQUEST_T3544874328_H
#define WORKREQUEST_T3544874328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct  WorkRequest_t3544874328 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t2567660903 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t3544874328, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t2567660903 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t2567660903 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t2567660903 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateCallback_0), value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t3544874328, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateState_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t3544874328_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t3544874328_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
};
#endif // WORKREQUEST_T3544874328_H
#ifndef SELECTIONBASEATTRIBUTE_T4232020112_H
#define SELECTIONBASEATTRIBUTE_T4232020112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SelectionBaseAttribute
struct  SelectionBaseAttribute_t4232020112  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONBASEATTRIBUTE_T4232020112_H
#ifndef UNITYSYNCHRONIZATIONCONTEXT_T2083483129_H
#define UNITYSYNCHRONIZATIONCONTEXT_T2083483129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext
struct  UnitySynchronizationContext_t2083483129  : public SynchronizationContext_t181644878
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest> UnityEngine.UnitySynchronizationContext::m_AsyncWorkQueue
	Queue_1_t2506499647 * ___m_AsyncWorkQueue_1;

public:
	inline static int32_t get_offset_of_m_AsyncWorkQueue_1() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t2083483129, ___m_AsyncWorkQueue_1)); }
	inline Queue_1_t2506499647 * get_m_AsyncWorkQueue_1() const { return ___m_AsyncWorkQueue_1; }
	inline Queue_1_t2506499647 ** get_address_of_m_AsyncWorkQueue_1() { return &___m_AsyncWorkQueue_1; }
	inline void set_m_AsyncWorkQueue_1(Queue_1_t2506499647 * value)
	{
		___m_AsyncWorkQueue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_AsyncWorkQueue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSYNCHRONIZATIONCONTEXT_T2083483129_H
#ifndef RECT_T1241426998_H
#define RECT_T1241426998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t1241426998 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t1241426998, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t1241426998, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t1241426998, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t1241426998, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T1241426998_H
#ifndef WAITFORSECONDSREALTIME_T1008110407_H
#define WAITFORSECONDSREALTIME_T1008110407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSecondsRealtime
struct  WaitForSecondsRealtime_t1008110407  : public CustomYieldInstruction_t4088954792
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::waitTime
	float ___waitTime_0;

public:
	inline static int32_t get_offset_of_waitTime_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t1008110407, ___waitTime_0)); }
	inline float get_waitTime_0() const { return ___waitTime_0; }
	inline float* get_address_of_waitTime_0() { return &___waitTime_0; }
	inline void set_waitTime_0(float value)
	{
		___waitTime_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORSECONDSREALTIME_T1008110407_H
#ifndef PROPERTYATTRIBUTE_T3983238440_H
#define PROPERTYATTRIBUTE_T3983238440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t3983238440  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T3983238440_H
#ifndef UNITYEVENT_T508714019_H
#define UNITYEVENT_T508714019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t508714019  : public UnityEventBase_t273297287
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2392277051* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t508714019, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2392277051* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2392277051** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2392277051* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T508714019_H
#ifndef WRITEONLYATTRIBUTE_T1702964336_H
#define WRITEONLYATTRIBUTE_T1702964336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.WriteOnlyAttribute
struct  WriteOnlyAttribute_t1702964336  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEONLYATTRIBUTE_T1702964336_H
#ifndef READONLYATTRIBUTE_T969351313_H
#define READONLYATTRIBUTE_T969351313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadOnlyAttribute
struct  ReadOnlyAttribute_t969351313  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T969351313_H
#ifndef CONTEXTMENU_T1426356672_H
#define CONTEXTMENU_T1426356672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContextMenu
struct  ContextMenu_t1426356672  : public Attribute_t4043032847
{
public:
	// System.String UnityEngine.ContextMenu::menuItem
	String_t* ___menuItem_0;
	// System.Boolean UnityEngine.ContextMenu::validate
	bool ___validate_1;
	// System.Int32 UnityEngine.ContextMenu::priority
	int32_t ___priority_2;

public:
	inline static int32_t get_offset_of_menuItem_0() { return static_cast<int32_t>(offsetof(ContextMenu_t1426356672, ___menuItem_0)); }
	inline String_t* get_menuItem_0() const { return ___menuItem_0; }
	inline String_t** get_address_of_menuItem_0() { return &___menuItem_0; }
	inline void set_menuItem_0(String_t* value)
	{
		___menuItem_0 = value;
		Il2CppCodeGenWriteBarrier((&___menuItem_0), value);
	}

	inline static int32_t get_offset_of_validate_1() { return static_cast<int32_t>(offsetof(ContextMenu_t1426356672, ___validate_1)); }
	inline bool get_validate_1() const { return ___validate_1; }
	inline bool* get_address_of_validate_1() { return &___validate_1; }
	inline void set_validate_1(bool value)
	{
		___validate_1 = value;
	}

	inline static int32_t get_offset_of_priority_2() { return static_cast<int32_t>(offsetof(ContextMenu_t1426356672, ___priority_2)); }
	inline int32_t get_priority_2() const { return ___priority_2; }
	inline int32_t* get_address_of_priority_2() { return &___priority_2; }
	inline void set_priority_2(int32_t value)
	{
		___priority_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTMENU_T1426356672_H
#ifndef EXECUTEINEDITMODE_T4079392231_H
#define EXECUTEINEDITMODE_T4079392231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ExecuteInEditMode
struct  ExecuteInEditMode_t4079392231  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEINEDITMODE_T4079392231_H
#ifndef HIDEININSPECTOR_T1548251527_H
#define HIDEININSPECTOR_T1548251527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideInInspector
struct  HideInInspector_t1548251527  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEININSPECTOR_T1548251527_H
#ifndef DEFAULTEXECUTIONORDER_T1539617479_H
#define DEFAULTEXECUTIONORDER_T1539617479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DefaultExecutionOrder
struct  DefaultExecutionOrder_t1539617479  : public Attribute_t4043032847
{
public:
	// System.Int32 UnityEngine.DefaultExecutionOrder::<order>k__BackingField
	int32_t ___U3CorderU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CorderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DefaultExecutionOrder_t1539617479, ___U3CorderU3Ek__BackingField_0)); }
	inline int32_t get_U3CorderU3Ek__BackingField_0() const { return ___U3CorderU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CorderU3Ek__BackingField_0() { return &___U3CorderU3Ek__BackingField_0; }
	inline void set_U3CorderU3Ek__BackingField_0(int32_t value)
	{
		___U3CorderU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEXECUTIONORDER_T1539617479_H
#ifndef IL2CPPSTRUCTALIGNMENTATTRIBUTE_T4289353736_H
#define IL2CPPSTRUCTALIGNMENTATTRIBUTE_T4289353736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.IL2CPPStructAlignmentAttribute
struct  IL2CPPStructAlignmentAttribute_t4289353736  : public Attribute_t4043032847
{
public:
	// System.Int32 UnityEngine.IL2CPPStructAlignmentAttribute::Align
	int32_t ___Align_0;

public:
	inline static int32_t get_offset_of_Align_0() { return static_cast<int32_t>(offsetof(IL2CPPStructAlignmentAttribute_t4289353736, ___Align_0)); }
	inline int32_t get_Align_0() const { return ___Align_0; }
	inline int32_t* get_address_of_Align_0() { return &___Align_0; }
	inline void set_Align_0(int32_t value)
	{
		___Align_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPSTRUCTALIGNMENTATTRIBUTE_T4289353736_H
#ifndef NATIVECLASSATTRIBUTE_T2505691358_H
#define NATIVECLASSATTRIBUTE_T2505691358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NativeClassAttribute
struct  NativeClassAttribute_t2505691358  : public Attribute_t4043032847
{
public:
	// System.String UnityEngine.NativeClassAttribute::<QualifiedNativeName>k__BackingField
	String_t* ___U3CQualifiedNativeNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CQualifiedNativeNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeClassAttribute_t2505691358, ___U3CQualifiedNativeNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CQualifiedNativeNameU3Ek__BackingField_0() const { return ___U3CQualifiedNativeNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CQualifiedNativeNameU3Ek__BackingField_0() { return &___U3CQualifiedNativeNameU3Ek__BackingField_0; }
	inline void set_U3CQualifiedNativeNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CQualifiedNativeNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CQualifiedNativeNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECLASSATTRIBUTE_T2505691358_H
#ifndef ASSEMBLYISEDITORASSEMBLY_T2925306663_H
#define ASSEMBLYISEDITORASSEMBLY_T2925306663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssemblyIsEditorAssembly
struct  AssemblyIsEditorAssembly_t2925306663  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYISEDITORASSEMBLY_T2925306663_H
#ifndef WRITABLEATTRIBUTE_T549885478_H
#define WRITABLEATTRIBUTE_T549885478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WritableAttribute
struct  WritableAttribute_t549885478  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITABLEATTRIBUTE_T549885478_H
#ifndef GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T677266379_H
#define GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T677266379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.GeneratedByOldBindingsGeneratorAttribute
struct  GeneratedByOldBindingsGeneratorAttribute_t677266379  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T677266379_H
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
#ifndef THREADANDSERIALIZATIONSAFEATTRIBUTE_T1433446126_H
#define THREADANDSERIALIZATIONSAFEATTRIBUTE_T1433446126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ThreadAndSerializationSafeAttribute
struct  ThreadAndSerializationSafeAttribute_t1433446126  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADANDSERIALIZATIONSAFEATTRIBUTE_T1433446126_H
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
#ifndef SINGLE_T3704631363_H
#define SINGLE_T3704631363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t3704631363 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t3704631363, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T3704631363_H
#ifndef COLOR_T919792895_H
#define COLOR_T919792895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t919792895 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t919792895, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t919792895, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t919792895, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t919792895, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T919792895_H
#ifndef COLOR32_T245063601_H
#define COLOR32_T245063601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct ALIGN_TYPE(4) Color32_t245063601 
{
public:
	// System.Byte UnityEngine.Color32::r
	uint8_t ___r_0;
	// System.Byte UnityEngine.Color32::g
	uint8_t ___g_1;
	// System.Byte UnityEngine.Color32::b
	uint8_t ___b_2;
	// System.Byte UnityEngine.Color32::a
	uint8_t ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color32_t245063601, ___r_0)); }
	inline uint8_t get_r_0() const { return ___r_0; }
	inline uint8_t* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(uint8_t value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color32_t245063601, ___g_1)); }
	inline uint8_t get_g_1() const { return ___g_1; }
	inline uint8_t* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(uint8_t value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color32_t245063601, ___b_2)); }
	inline uint8_t get_b_2() const { return ___b_2; }
	inline uint8_t* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(uint8_t value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color32_t245063601, ___a_3)); }
	inline uint8_t get_a_3() const { return ___a_3; }
	inline uint8_t* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(uint8_t value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T245063601_H
#ifndef RESOLUTION_T4020000516_H
#define RESOLUTION_T4020000516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resolution
struct  Resolution_t4020000516 
{
public:
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;

public:
	inline static int32_t get_offset_of_m_Width_0() { return static_cast<int32_t>(offsetof(Resolution_t4020000516, ___m_Width_0)); }
	inline int32_t get_m_Width_0() const { return ___m_Width_0; }
	inline int32_t* get_address_of_m_Width_0() { return &___m_Width_0; }
	inline void set_m_Width_0(int32_t value)
	{
		___m_Width_0 = value;
	}

	inline static int32_t get_offset_of_m_Height_1() { return static_cast<int32_t>(offsetof(Resolution_t4020000516, ___m_Height_1)); }
	inline int32_t get_m_Height_1() const { return ___m_Height_1; }
	inline int32_t* get_address_of_m_Height_1() { return &___m_Height_1; }
	inline void set_m_Height_1(int32_t value)
	{
		___m_Height_1 = value;
	}

	inline static int32_t get_offset_of_m_RefreshRate_2() { return static_cast<int32_t>(offsetof(Resolution_t4020000516, ___m_RefreshRate_2)); }
	inline int32_t get_m_RefreshRate_2() const { return ___m_RefreshRate_2; }
	inline int32_t* get_address_of_m_RefreshRate_2() { return &___m_RefreshRate_2; }
	inline void set_m_RefreshRate_2(int32_t value)
	{
		___m_RefreshRate_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLUTION_T4020000516_H
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
#ifndef NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T3149572603_H
#define NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T3149572603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsMinMaxWriteRestrictionAttribute
struct  NativeContainerSupportsMinMaxWriteRestrictionAttribute_t3149572603  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T3149572603_H
#ifndef NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T3766748638_H
#define NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T3766748638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsAtomicWriteAttribute
struct  NativeContainerSupportsAtomicWriteAttribute_t3766748638  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T3766748638_H
#ifndef NATIVECONTAINERATTRIBUTE_T183098922_H
#define NATIVECONTAINERATTRIBUTE_T183098922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerAttribute
struct  NativeContainerAttribute_t183098922  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERATTRIBUTE_T183098922_H
#ifndef DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T1245883633_H
#define DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T1245883633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.DeallocateOnJobCompletionAttribute
struct  DeallocateOnJobCompletionAttribute_t1245883633  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T1245883633_H
#ifndef READWRITEATTRIBUTE_T1292301318_H
#define READWRITEATTRIBUTE_T1292301318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadWriteAttribute
struct  ReadWriteAttribute_t1292301318  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READWRITEATTRIBUTE_T1292301318_H
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
#ifndef CREATEASSETMENUATTRIBUTE_T1796285046_H
#define CREATEASSETMENUATTRIBUTE_T1796285046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CreateAssetMenuAttribute
struct  CreateAssetMenuAttribute_t1796285046  : public Attribute_t4043032847
{
public:
	// System.String UnityEngine.CreateAssetMenuAttribute::<menuName>k__BackingField
	String_t* ___U3CmenuNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CmenuNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CreateAssetMenuAttribute_t1796285046, ___U3CmenuNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CmenuNameU3Ek__BackingField_0() const { return ___U3CmenuNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CmenuNameU3Ek__BackingField_0() { return &___U3CmenuNameU3Ek__BackingField_0; }
	inline void set_U3CmenuNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CmenuNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmenuNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATEASSETMENUATTRIBUTE_T1796285046_H
#ifndef UNITYEVENTCALLSTATE_T3074133981_H
#define UNITYEVENTCALLSTATE_T3074133981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventCallState
struct  UnityEventCallState_t3074133981 
{
public:
	// System.Int32 UnityEngine.Events.UnityEventCallState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityEventCallState_t3074133981, ___value___1)); }
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
#endif // UNITYEVENTCALLSTATE_T3074133981_H
#ifndef RAY_T3882192035_H
#define RAY_T3882192035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3882192035 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t1731499529  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t1731499529  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3882192035, ___m_Origin_0)); }
	inline Vector3_t1731499529  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t1731499529 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t1731499529  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3882192035, ___m_Direction_1)); }
	inline Vector3_t1731499529  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t1731499529 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t1731499529  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3882192035_H
#ifndef TRACKEDREFERENCE_T3264995013_H
#define TRACKEDREFERENCE_T3264995013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_t3264995013  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t3264995013, ___m_Ptr_0)); }
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
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t3264995013_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t3264995013_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_T3264995013_H
#ifndef COLORWRITEMASK_T1194920885_H
#define COLORWRITEMASK_T1194920885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ColorWriteMask
struct  ColorWriteMask_t1194920885 
{
public:
	// System.Int32 UnityEngine.Rendering.ColorWriteMask::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColorWriteMask_t1194920885, ___value___1)); }
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
#endif // COLORWRITEMASK_T1194920885_H
#ifndef COMPAREFUNCTION_T1879652605_H
#define COMPAREFUNCTION_T1879652605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CompareFunction
struct  CompareFunction_t1879652605 
{
public:
	// System.Int32 UnityEngine.Rendering.CompareFunction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompareFunction_t1879652605, ___value___1)); }
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
#endif // COMPAREFUNCTION_T1879652605_H
#ifndef TEXTUREFORMAT_T2402816721_H
#define TEXTUREFORMAT_T2402816721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2402816721 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2402816721, ___value___1)); }
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
#endif // TEXTUREFORMAT_T2402816721_H
#ifndef TEXTUREWRAPMODE_T973658091_H
#define TEXTUREWRAPMODE_T973658091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t973658091 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureWrapMode_t973658091, ___value___1)); }
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
#endif // TEXTUREWRAPMODE_T973658091_H
#ifndef FILTERMODE_T3771938796_H
#define FILTERMODE_T3771938796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FilterMode
struct  FilterMode_t3771938796 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FilterMode_t3771938796, ___value___1)); }
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
#endif // FILTERMODE_T3771938796_H
#ifndef SCREENORIENTATION_T3910451331_H
#define SCREENORIENTATION_T3910451331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScreenOrientation
struct  ScreenOrientation_t3910451331 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ScreenOrientation_t3910451331, ___value___1)); }
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
#endif // SCREENORIENTATION_T3910451331_H
#ifndef PERSISTENTLISTENERMODE_T2520521159_H
#define PERSISTENTLISTENERMODE_T2520521159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentListenerMode
struct  PersistentListenerMode_t2520521159 
{
public:
	// System.Int32 UnityEngine.Events.PersistentListenerMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PersistentListenerMode_t2520521159, ___value___1)); }
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
#endif // PERSISTENTLISTENERMODE_T2520521159_H
#ifndef CAMERACLEARFLAGS_T943739614_H
#define CAMERACLEARFLAGS_T943739614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CameraClearFlags
struct  CameraClearFlags_t943739614 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraClearFlags_t943739614, ___value___1)); }
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
#endif // CAMERACLEARFLAGS_T943739614_H
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
#ifndef OPERATINGSYSTEMFAMILY_T2422753102_H
#define OPERATINGSYSTEMFAMILY_T2422753102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.OperatingSystemFamily
struct  OperatingSystemFamily_t2422753102 
{
public:
	// System.Int32 UnityEngine.OperatingSystemFamily::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OperatingSystemFamily_t2422753102, ___value___1)); }
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
#endif // OPERATINGSYSTEMFAMILY_T2422753102_H
#ifndef RUNTIMEPLATFORM_T103269373_H
#define RUNTIMEPLATFORM_T103269373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t103269373 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RuntimePlatform_t103269373, ___value___1)); }
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
#endif // RUNTIMEPLATFORM_T103269373_H
#ifndef SPACE_T241123071_H
#define SPACE_T241123071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Space
struct  Space_t241123071 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Space_t241123071, ___value___1)); }
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
#endif // SPACE_T241123071_H
#ifndef PRIMITIVETYPE_T1606603097_H
#define PRIMITIVETYPE_T1606603097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PrimitiveType
struct  PrimitiveType_t1606603097 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrimitiveType_t1606603097, ___value___1)); }
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
#endif // PRIMITIVETYPE_T1606603097_H
#ifndef SENDMESSAGEOPTIONS_T3020228074_H
#define SENDMESSAGEOPTIONS_T3020228074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMessageOptions
struct  SendMessageOptions_t3020228074 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SendMessageOptions_t3020228074, ___value___1)); }
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
#endif // SENDMESSAGEOPTIONS_T3020228074_H
#ifndef DEVICETYPE_T3091211994_H
#define DEVICETYPE_T3091211994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DeviceType
struct  DeviceType_t3091211994 
{
public:
	// System.Int32 UnityEngine.DeviceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DeviceType_t3091211994, ___value___1)); }
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
#endif // DEVICETYPE_T3091211994_H
#ifndef AMBIENTMODE_T852434967_H
#define AMBIENTMODE_T852434967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.AmbientMode
struct  AmbientMode_t852434967 
{
public:
	// System.Int32 UnityEngine.Rendering.AmbientMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AmbientMode_t852434967, ___value___1)); }
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
#endif // AMBIENTMODE_T852434967_H
#ifndef STENCILOP_T645666874_H
#define STENCILOP_T645666874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.StencilOp
struct  StencilOp_t645666874 
{
public:
	// System.Int32 UnityEngine.Rendering.StencilOp::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StencilOp_t645666874, ___value___1)); }
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
#endif // STENCILOP_T645666874_H
#ifndef BUILTINRENDERTEXTURETYPE_T57578576_H
#define BUILTINRENDERTEXTURETYPE_T57578576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.BuiltinRenderTextureType
struct  BuiltinRenderTextureType_t57578576 
{
public:
	// System.Int32 UnityEngine.Rendering.BuiltinRenderTextureType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BuiltinRenderTextureType_t57578576, ___value___1)); }
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
#endif // BUILTINRENDERTEXTURETYPE_T57578576_H
#ifndef TOUCHSCREENKEYBOARDTYPE_T312151232_H
#define TOUCHSCREENKEYBOARDTYPE_T312151232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_t312151232 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_t312151232, ___value___1)); }
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
#endif // TOUCHSCREENKEYBOARDTYPE_T312151232_H
#ifndef FLAGS_T3376018576_H
#define FLAGS_T3376018576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.FrameData/Flags
struct  Flags_t3376018576 
{
public:
	// System.Int32 UnityEngine.Playables.FrameData/Flags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Flags_t3376018576, ___value___1)); }
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
#endif // FLAGS_T3376018576_H
#ifndef TEXTAREAATTRIBUTE_T3989481350_H
#define TEXTAREAATTRIBUTE_T3989481350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAreaAttribute
struct  TextAreaAttribute_t3989481350  : public PropertyAttribute_t3983238440
{
public:
	// System.Int32 UnityEngine.TextAreaAttribute::minLines
	int32_t ___minLines_0;
	// System.Int32 UnityEngine.TextAreaAttribute::maxLines
	int32_t ___maxLines_1;

public:
	inline static int32_t get_offset_of_minLines_0() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t3989481350, ___minLines_0)); }
	inline int32_t get_minLines_0() const { return ___minLines_0; }
	inline int32_t* get_address_of_minLines_0() { return &___minLines_0; }
	inline void set_minLines_0(int32_t value)
	{
		___minLines_0 = value;
	}

	inline static int32_t get_offset_of_maxLines_1() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t3989481350, ___maxLines_1)); }
	inline int32_t get_maxLines_1() const { return ___maxLines_1; }
	inline int32_t* get_address_of_maxLines_1() { return &___maxLines_1; }
	inline void set_maxLines_1(int32_t value)
	{
		___maxLines_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTAREAATTRIBUTE_T3989481350_H
#ifndef MULTILINEATTRIBUTE_T1424796120_H
#define MULTILINEATTRIBUTE_T1424796120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MultilineAttribute
struct  MultilineAttribute_t1424796120  : public PropertyAttribute_t3983238440
{
public:
	// System.Int32 UnityEngine.MultilineAttribute::lines
	int32_t ___lines_0;

public:
	inline static int32_t get_offset_of_lines_0() { return static_cast<int32_t>(offsetof(MultilineAttribute_t1424796120, ___lines_0)); }
	inline int32_t get_lines_0() const { return ___lines_0; }
	inline int32_t* get_address_of_lines_0() { return &___lines_0; }
	inline void set_lines_0(int32_t value)
	{
		___lines_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTILINEATTRIBUTE_T1424796120_H
#ifndef CAMERAEVENT_T3020187893_H
#define CAMERAEVENT_T3020187893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CameraEvent
struct  CameraEvent_t3020187893 
{
public:
	// System.Int32 UnityEngine.Rendering.CameraEvent::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraEvent_t3020187893, ___value___1)); }
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
#endif // CAMERAEVENT_T3020187893_H
#ifndef HEADERATTRIBUTE_T839188693_H
#define HEADERATTRIBUTE_T839188693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HeaderAttribute
struct  HeaderAttribute_t839188693  : public PropertyAttribute_t3983238440
{
public:
	// System.String UnityEngine.HeaderAttribute::header
	String_t* ___header_0;

public:
	inline static int32_t get_offset_of_header_0() { return static_cast<int32_t>(offsetof(HeaderAttribute_t839188693, ___header_0)); }
	inline String_t* get_header_0() const { return ___header_0; }
	inline String_t** get_address_of_header_0() { return &___header_0; }
	inline void set_header_0(String_t* value)
	{
		___header_0 = value;
		Il2CppCodeGenWriteBarrier((&___header_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADERATTRIBUTE_T839188693_H
#ifndef RANGEATTRIBUTE_T1201377835_H
#define RANGEATTRIBUTE_T1201377835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeAttribute
struct  RangeAttribute_t1201377835  : public PropertyAttribute_t3983238440
{
public:
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_0;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(RangeAttribute_t1201377835, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(RangeAttribute_t1201377835, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEATTRIBUTE_T1201377835_H
#ifndef TOOLTIPATTRIBUTE_T4181799461_H
#define TOOLTIPATTRIBUTE_T4181799461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TooltipAttribute
struct  TooltipAttribute_t4181799461  : public PropertyAttribute_t3983238440
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_0;

public:
	inline static int32_t get_offset_of_tooltip_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t4181799461, ___tooltip_0)); }
	inline String_t* get_tooltip_0() const { return ___tooltip_0; }
	inline String_t** get_address_of_tooltip_0() { return &___tooltip_0; }
	inline void set_tooltip_0(String_t* value)
	{
		___tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((&___tooltip_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLTIPATTRIBUTE_T4181799461_H
#ifndef PLANE_T345832164_H
#define PLANE_T345832164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Plane
struct  Plane_t345832164 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t1731499529  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t345832164, ___m_Normal_0)); }
	inline Vector3_t1731499529  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t1731499529 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t1731499529  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t345832164, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANE_T345832164_H
#ifndef MATHFINTERNAL_T1475445448_H
#define MATHFINTERNAL_T1475445448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.MathfInternal
struct  MathfInternal_t1475445448 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MathfInternal_t1475445448__padding[1];
	};

public:
};

struct MathfInternal_t1475445448_StaticFields
{
public:
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinNormal
	float ___FloatMinNormal_0;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinDenormal
	float ___FloatMinDenormal_1;
	// System.Boolean UnityEngineInternal.MathfInternal::IsFlushToZeroEnabled
	bool ___IsFlushToZeroEnabled_2;

public:
	inline static int32_t get_offset_of_FloatMinNormal_0() { return static_cast<int32_t>(offsetof(MathfInternal_t1475445448_StaticFields, ___FloatMinNormal_0)); }
	inline float get_FloatMinNormal_0() const { return ___FloatMinNormal_0; }
	inline float* get_address_of_FloatMinNormal_0() { return &___FloatMinNormal_0; }
	inline void set_FloatMinNormal_0(float value)
	{
		___FloatMinNormal_0 = value;
	}

	inline static int32_t get_offset_of_FloatMinDenormal_1() { return static_cast<int32_t>(offsetof(MathfInternal_t1475445448_StaticFields, ___FloatMinDenormal_1)); }
	inline float get_FloatMinDenormal_1() const { return ___FloatMinDenormal_1; }
	inline float* get_address_of_FloatMinDenormal_1() { return &___FloatMinDenormal_1; }
	inline void set_FloatMinDenormal_1(float value)
	{
		___FloatMinDenormal_1 = value;
	}

	inline static int32_t get_offset_of_IsFlushToZeroEnabled_2() { return static_cast<int32_t>(offsetof(MathfInternal_t1475445448_StaticFields, ___IsFlushToZeroEnabled_2)); }
	inline bool get_IsFlushToZeroEnabled_2() const { return ___IsFlushToZeroEnabled_2; }
	inline bool* get_address_of_IsFlushToZeroEnabled_2() { return &___IsFlushToZeroEnabled_2; }
	inline void set_IsFlushToZeroEnabled_2(bool value)
	{
		___IsFlushToZeroEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHFINTERNAL_T1475445448_H
#ifndef KEYCODE_T1068972203_H
#define KEYCODE_T1068972203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t1068972203 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t1068972203, ___value___1)); }
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
#endif // KEYCODE_T1068972203_H
#ifndef SPACEATTRIBUTE_T1869461606_H
#define SPACEATTRIBUTE_T1869461606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpaceAttribute
struct  SpaceAttribute_t1869461606  : public PropertyAttribute_t3983238440
{
public:
	// System.Single UnityEngine.SpaceAttribute::height
	float ___height_0;

public:
	inline static int32_t get_offset_of_height_0() { return static_cast<int32_t>(offsetof(SpaceAttribute_t1869461606, ___height_0)); }
	inline float get_height_0() const { return ___height_0; }
	inline float* get_address_of_height_0() { return &___height_0; }
	inline void set_height_0(float value)
	{
		___height_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACEATTRIBUTE_T1869461606_H
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
#ifndef FRAMEDATA_T884459379_H
#define FRAMEDATA_T884459379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.FrameData
struct  FrameData_t884459379 
{
public:
	// System.UInt64 UnityEngine.Playables.FrameData::m_FrameID
	uint64_t ___m_FrameID_0;
	// System.Double UnityEngine.Playables.FrameData::m_DeltaTime
	double ___m_DeltaTime_1;
	// System.Single UnityEngine.Playables.FrameData::m_Weight
	float ___m_Weight_2;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveWeight
	float ___m_EffectiveWeight_3;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveSpeed
	float ___m_EffectiveSpeed_4;
	// UnityEngine.Playables.FrameData/Flags UnityEngine.Playables.FrameData::m_Flags
	int32_t ___m_Flags_5;

public:
	inline static int32_t get_offset_of_m_FrameID_0() { return static_cast<int32_t>(offsetof(FrameData_t884459379, ___m_FrameID_0)); }
	inline uint64_t get_m_FrameID_0() const { return ___m_FrameID_0; }
	inline uint64_t* get_address_of_m_FrameID_0() { return &___m_FrameID_0; }
	inline void set_m_FrameID_0(uint64_t value)
	{
		___m_FrameID_0 = value;
	}

	inline static int32_t get_offset_of_m_DeltaTime_1() { return static_cast<int32_t>(offsetof(FrameData_t884459379, ___m_DeltaTime_1)); }
	inline double get_m_DeltaTime_1() const { return ___m_DeltaTime_1; }
	inline double* get_address_of_m_DeltaTime_1() { return &___m_DeltaTime_1; }
	inline void set_m_DeltaTime_1(double value)
	{
		___m_DeltaTime_1 = value;
	}

	inline static int32_t get_offset_of_m_Weight_2() { return static_cast<int32_t>(offsetof(FrameData_t884459379, ___m_Weight_2)); }
	inline float get_m_Weight_2() const { return ___m_Weight_2; }
	inline float* get_address_of_m_Weight_2() { return &___m_Weight_2; }
	inline void set_m_Weight_2(float value)
	{
		___m_Weight_2 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveWeight_3() { return static_cast<int32_t>(offsetof(FrameData_t884459379, ___m_EffectiveWeight_3)); }
	inline float get_m_EffectiveWeight_3() const { return ___m_EffectiveWeight_3; }
	inline float* get_address_of_m_EffectiveWeight_3() { return &___m_EffectiveWeight_3; }
	inline void set_m_EffectiveWeight_3(float value)
	{
		___m_EffectiveWeight_3 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveSpeed_4() { return static_cast<int32_t>(offsetof(FrameData_t884459379, ___m_EffectiveSpeed_4)); }
	inline float get_m_EffectiveSpeed_4() const { return ___m_EffectiveSpeed_4; }
	inline float* get_address_of_m_EffectiveSpeed_4() { return &___m_EffectiveSpeed_4; }
	inline void set_m_EffectiveSpeed_4(float value)
	{
		___m_EffectiveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_m_Flags_5() { return static_cast<int32_t>(offsetof(FrameData_t884459379, ___m_Flags_5)); }
	inline int32_t get_m_Flags_5() const { return ___m_Flags_5; }
	inline int32_t* get_address_of_m_Flags_5() { return &___m_Flags_5; }
	inline void set_m_Flags_5(int32_t value)
	{
		___m_Flags_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMEDATA_T884459379_H
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
#ifndef PERSISTENTCALL_T3312917457_H
#define PERSISTENTCALL_T3312917457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCall
struct  PersistentCall_t3312917457  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.PersistentCall::m_Target
	Object_t2959123960 * ___m_Target_0;
	// System.String UnityEngine.Events.PersistentCall::m_MethodName
	String_t* ___m_MethodName_1;
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode_2;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t789627557 * ___m_Arguments_3;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(PersistentCall_t3312917457, ___m_Target_0)); }
	inline Object_t2959123960 * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_t2959123960 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_t2959123960 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_MethodName_1() { return static_cast<int32_t>(offsetof(PersistentCall_t3312917457, ___m_MethodName_1)); }
	inline String_t* get_m_MethodName_1() const { return ___m_MethodName_1; }
	inline String_t** get_address_of_m_MethodName_1() { return &___m_MethodName_1; }
	inline void set_m_MethodName_1(String_t* value)
	{
		___m_MethodName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MethodName_1), value);
	}

	inline static int32_t get_offset_of_m_Mode_2() { return static_cast<int32_t>(offsetof(PersistentCall_t3312917457, ___m_Mode_2)); }
	inline int32_t get_m_Mode_2() const { return ___m_Mode_2; }
	inline int32_t* get_address_of_m_Mode_2() { return &___m_Mode_2; }
	inline void set_m_Mode_2(int32_t value)
	{
		___m_Mode_2 = value;
	}

	inline static int32_t get_offset_of_m_Arguments_3() { return static_cast<int32_t>(offsetof(PersistentCall_t3312917457, ___m_Arguments_3)); }
	inline ArgumentCache_t789627557 * get_m_Arguments_3() const { return ___m_Arguments_3; }
	inline ArgumentCache_t789627557 ** get_address_of_m_Arguments_3() { return &___m_Arguments_3; }
	inline void set_m_Arguments_3(ArgumentCache_t789627557 * value)
	{
		___m_Arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Arguments_3), value);
	}

	inline static int32_t get_offset_of_m_CallState_4() { return static_cast<int32_t>(offsetof(PersistentCall_t3312917457, ___m_CallState_4)); }
	inline int32_t get_m_CallState_4() const { return ___m_CallState_4; }
	inline int32_t* get_address_of_m_CallState_4() { return &___m_CallState_4; }
	inline void set_m_CallState_4(int32_t value)
	{
		___m_CallState_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALL_T3312917457_H
#ifndef RENDERTARGETIDENTIFIER_T3879992801_H
#define RENDERTARGETIDENTIFIER_T3879992801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.RenderTargetIdentifier
struct  RenderTargetIdentifier_t3879992801 
{
public:
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_0;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_2;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t3879992801, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_NameID_1() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t3879992801, ___m_NameID_1)); }
	inline int32_t get_m_NameID_1() const { return ___m_NameID_1; }
	inline int32_t* get_address_of_m_NameID_1() { return &___m_NameID_1; }
	inline void set_m_NameID_1(int32_t value)
	{
		___m_NameID_1 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_2() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t3879992801, ___m_InstanceID_2)); }
	inline int32_t get_m_InstanceID_2() const { return ___m_InstanceID_2; }
	inline int32_t* get_address_of_m_InstanceID_2() { return &___m_InstanceID_2; }
	inline void set_m_InstanceID_2(int32_t value)
	{
		___m_InstanceID_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTARGETIDENTIFIER_T3879992801_H
#ifndef UNITYACTION_T975035011_H
#define UNITYACTION_T975035011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t975035011  : public MulticastDelegate_t3965931391
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T975035011_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3300 = { sizeof (CreateAssetMenuAttribute_t1796285046), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3300[1] = 
{
	CreateAssetMenuAttribute_t1796285046::get_offset_of_U3CmenuNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3301 = { sizeof (ContextMenu_t1426356672), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3301[3] = 
{
	ContextMenu_t1426356672::get_offset_of_menuItem_0(),
	ContextMenu_t1426356672::get_offset_of_validate_1(),
	ContextMenu_t1426356672::get_offset_of_priority_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3302 = { sizeof (ExecuteInEditMode_t4079392231), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3303 = { sizeof (HideInInspector_t1548251527), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3304 = { sizeof (DefaultExecutionOrder_t1539617479), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3304[1] = 
{
	DefaultExecutionOrder_t1539617479::get_offset_of_U3CorderU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3305 = { sizeof (IL2CPPStructAlignmentAttribute_t4289353736), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3305[1] = 
{
	IL2CPPStructAlignmentAttribute_t4289353736::get_offset_of_Align_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3306 = { sizeof (NativeClassAttribute_t2505691358), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3306[1] = 
{
	NativeClassAttribute_t2505691358::get_offset_of_U3CQualifiedNativeNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3307 = { sizeof (AssemblyIsEditorAssembly_t2925306663), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3308 = { sizeof (WritableAttribute_t549885478), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3309 = { sizeof (GeneratedByOldBindingsGeneratorAttribute_t677266379), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3310 = { sizeof (SendMessageOptions_t3020228074)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3310[3] = 
{
	SendMessageOptions_t3020228074::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3311 = { sizeof (PrimitiveType_t1606603097)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3311[7] = 
{
	PrimitiveType_t1606603097::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3312 = { sizeof (Space_t241123071)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3312[3] = 
{
	Space_t241123071::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3313 = { sizeof (RuntimePlatform_t103269373)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3313[34] = 
{
	RuntimePlatform_t103269373::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3314 = { sizeof (OperatingSystemFamily_t2422753102)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3314[5] = 
{
	OperatingSystemFamily_t2422753102::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3315 = { sizeof (LogType_t4125087975)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3315[6] = 
{
	LogType_t4125087975::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3316 = { sizeof (DeviceType_t3091211994)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3316[5] = 
{
	DeviceType_t3091211994::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3317 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3317[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3318 = { sizeof (ClassLibraryInitializer_t2665232679), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3319 = { sizeof (Color_t919792895)+ sizeof (RuntimeObject), sizeof(Color_t919792895 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3319[4] = 
{
	Color_t919792895::get_offset_of_r_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t919792895::get_offset_of_g_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t919792895::get_offset_of_b_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t919792895::get_offset_of_a_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3320 = { sizeof (Color32_t245063601)+ sizeof (RuntimeObject), sizeof(Color32_t245063601 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3320[4] = 
{
	Color32_t245063601::get_offset_of_r_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color32_t245063601::get_offset_of_g_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color32_t245063601::get_offset_of_b_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color32_t245063601::get_offset_of_a_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3321 = { sizeof (SetupCoroutine_t79821028), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3322 = { sizeof (Resolution_t4020000516)+ sizeof (RuntimeObject), sizeof(Resolution_t4020000516 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3322[3] = 
{
	Resolution_t4020000516::get_offset_of_m_Width_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Resolution_t4020000516::get_offset_of_m_Height_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Resolution_t4020000516::get_offset_of_m_RefreshRate_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3323 = { sizeof (CameraClearFlags_t943739614)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3323[6] = 
{
	CameraClearFlags_t943739614::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3324 = { sizeof (ScreenOrientation_t3910451331)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3324[8] = 
{
	ScreenOrientation_t3910451331::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3325 = { sizeof (FilterMode_t3771938796)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3325[4] = 
{
	FilterMode_t3771938796::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3326 = { sizeof (TextureWrapMode_t973658091)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3326[5] = 
{
	TextureWrapMode_t973658091::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3327 = { sizeof (TextureFormat_t2402816721)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3327[54] = 
{
	TextureFormat_t2402816721::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3328 = { sizeof (CompareFunction_t1879652605)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3328[10] = 
{
	CompareFunction_t1879652605::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3329 = { sizeof (ColorWriteMask_t1194920885)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3329[6] = 
{
	ColorWriteMask_t1194920885::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3330 = { sizeof (StencilOp_t645666874)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3330[9] = 
{
	StencilOp_t645666874::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3331 = { sizeof (AmbientMode_t852434967)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3331[5] = 
{
	AmbientMode_t852434967::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3332 = { sizeof (CameraEvent_t3020187893)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3332[26] = 
{
	CameraEvent_t3020187893::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3333 = { sizeof (BuiltinRenderTextureType_t57578576)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3333[21] = 
{
	BuiltinRenderTextureType_t57578576::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3334 = { sizeof (RenderTargetIdentifier_t3879992801)+ sizeof (RuntimeObject), sizeof(RenderTargetIdentifier_t3879992801 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3334[3] = 
{
	RenderTargetIdentifier_t3879992801::get_offset_of_m_Type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTargetIdentifier_t3879992801::get_offset_of_m_NameID_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTargetIdentifier_t3879992801::get_offset_of_m_InstanceID_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3335 = { sizeof (GUIStateObjects_t2957732363), -1, sizeof(GUIStateObjects_t2957732363_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3335[1] = 
{
	GUIStateObjects_t2957732363_StaticFields::get_offset_of_s_StateCache_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3336 = { sizeof (KeyCode_t1068972203)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3336[322] = 
{
	KeyCode_t1068972203::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3337 = { sizeof (MathfInternal_t1475445448)+ sizeof (RuntimeObject), sizeof(MathfInternal_t1475445448 ), sizeof(MathfInternal_t1475445448_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3337[3] = 
{
	MathfInternal_t1475445448_StaticFields::get_offset_of_FloatMinNormal_0(),
	MathfInternal_t1475445448_StaticFields::get_offset_of_FloatMinDenormal_1(),
	MathfInternal_t1475445448_StaticFields::get_offset_of_IsFlushToZeroEnabled_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3338 = { sizeof (ScriptingUtils_t543215380), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3339 = { sizeof (SendMouseEvents_t3405797331), -1, sizeof(SendMouseEvents_t3405797331_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3339[5] = 
{
	SendMouseEvents_t3405797331_StaticFields::get_offset_of_s_MouseUsed_0(),
	SendMouseEvents_t3405797331_StaticFields::get_offset_of_m_LastHit_1(),
	SendMouseEvents_t3405797331_StaticFields::get_offset_of_m_MouseDownHit_2(),
	SendMouseEvents_t3405797331_StaticFields::get_offset_of_m_CurrentHit_3(),
	SendMouseEvents_t3405797331_StaticFields::get_offset_of_m_Cameras_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3340 = { sizeof (HitInfo_t823695844)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3340[2] = 
{
	HitInfo_t823695844::get_offset_of_target_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HitInfo_t823695844::get_offset_of_camera_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3341 = { sizeof (Plane_t345832164)+ sizeof (RuntimeObject), sizeof(Plane_t345832164 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3341[2] = 
{
	Plane_t345832164::get_offset_of_m_Normal_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Plane_t345832164::get_offset_of_m_Distance_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3342 = { sizeof (PropertyAttribute_t3983238440), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3343 = { sizeof (TooltipAttribute_t4181799461), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3343[1] = 
{
	TooltipAttribute_t4181799461::get_offset_of_tooltip_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3344 = { sizeof (SpaceAttribute_t1869461606), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3344[1] = 
{
	SpaceAttribute_t1869461606::get_offset_of_height_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3345 = { sizeof (HeaderAttribute_t839188693), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3345[1] = 
{
	HeaderAttribute_t839188693::get_offset_of_header_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3346 = { sizeof (RangeAttribute_t1201377835), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3346[2] = 
{
	RangeAttribute_t1201377835::get_offset_of_min_0(),
	RangeAttribute_t1201377835::get_offset_of_max_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3347 = { sizeof (MultilineAttribute_t1424796120), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3347[1] = 
{
	MultilineAttribute_t1424796120::get_offset_of_lines_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3348 = { sizeof (TextAreaAttribute_t3989481350), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3348[2] = 
{
	TextAreaAttribute_t3989481350::get_offset_of_minLines_0(),
	TextAreaAttribute_t3989481350::get_offset_of_maxLines_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3349 = { sizeof (RangeInt_t277386674)+ sizeof (RuntimeObject), sizeof(RangeInt_t277386674 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3349[2] = 
{
	RangeInt_t277386674::get_offset_of_start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RangeInt_t277386674::get_offset_of_length_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3350 = { sizeof (Ray_t3882192035)+ sizeof (RuntimeObject), sizeof(Ray_t3882192035 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3350[2] = 
{
	Ray_t3882192035::get_offset_of_m_Origin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Ray_t3882192035::get_offset_of_m_Direction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3351 = { sizeof (Rect_t1241426998)+ sizeof (RuntimeObject), sizeof(Rect_t1241426998 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3351[4] = 
{
	Rect_t1241426998::get_offset_of_m_XMin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t1241426998::get_offset_of_m_YMin_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t1241426998::get_offset_of_m_Width_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t1241426998::get_offset_of_m_Height_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3352 = { sizeof (SelectionBaseAttribute_t4232020112), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3353 = { sizeof (SerializePrivateVariables_t1113383561), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3354 = { sizeof (SerializeField_t2010593100), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3355 = { sizeof (PreferBinarySerialization_t2280044084), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3356 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3357 = { sizeof (StackTraceUtility_t2935809837), -1, sizeof(StackTraceUtility_t2935809837_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3357[1] = 
{
	StackTraceUtility_t2935809837_StaticFields::get_offset_of_projectFolder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3358 = { sizeof (UnityException_t3117622477), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3358[2] = 
{
	0,
	UnityException_t3117622477::get_offset_of_unityStackTrace_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3359 = { sizeof (TouchScreenKeyboardType_t312151232)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3359[12] = 
{
	TouchScreenKeyboardType_t312151232::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3360 = { sizeof (TrackedReference_t3264995013), sizeof(TrackedReference_t3264995013_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3360[1] = 
{
	TrackedReference_t3264995013::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3361 = { sizeof (PersistentListenerMode_t2520521159)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3361[8] = 
{
	PersistentListenerMode_t2520521159::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3362 = { sizeof (ArgumentCache_t789627557), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3362[6] = 
{
	ArgumentCache_t789627557::get_offset_of_m_ObjectArgument_0(),
	ArgumentCache_t789627557::get_offset_of_m_ObjectArgumentAssemblyTypeName_1(),
	ArgumentCache_t789627557::get_offset_of_m_IntArgument_2(),
	ArgumentCache_t789627557::get_offset_of_m_FloatArgument_3(),
	ArgumentCache_t789627557::get_offset_of_m_StringArgument_4(),
	ArgumentCache_t789627557::get_offset_of_m_BoolArgument_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3363 = { sizeof (BaseInvokableCall_t1830042727), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3364 = { sizeof (InvokableCall_t4038916779), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3364[1] = 
{
	InvokableCall_t4038916779::get_offset_of_Delegate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3365 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3365[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3366 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3366[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3367 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3367[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3368 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3368[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3369 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3369[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3370 = { sizeof (UnityEventCallState_t3074133981)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3370[4] = 
{
	UnityEventCallState_t3074133981::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3371 = { sizeof (PersistentCall_t3312917457), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3371[5] = 
{
	PersistentCall_t3312917457::get_offset_of_m_Target_0(),
	PersistentCall_t3312917457::get_offset_of_m_MethodName_1(),
	PersistentCall_t3312917457::get_offset_of_m_Mode_2(),
	PersistentCall_t3312917457::get_offset_of_m_Arguments_3(),
	PersistentCall_t3312917457::get_offset_of_m_CallState_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3372 = { sizeof (PersistentCallGroup_t1512187251), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3372[1] = 
{
	PersistentCallGroup_t1512187251::get_offset_of_m_Calls_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3373 = { sizeof (InvokableCallList_t5893965), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3373[4] = 
{
	InvokableCallList_t5893965::get_offset_of_m_PersistentCalls_0(),
	InvokableCallList_t5893965::get_offset_of_m_RuntimeCalls_1(),
	InvokableCallList_t5893965::get_offset_of_m_ExecutingCalls_2(),
	InvokableCallList_t5893965::get_offset_of_m_NeedsUpdate_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3374 = { sizeof (UnityEventBase_t273297287), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3374[4] = 
{
	UnityEventBase_t273297287::get_offset_of_m_Calls_0(),
	UnityEventBase_t273297287::get_offset_of_m_PersistentCalls_1(),
	UnityEventBase_t273297287::get_offset_of_m_TypeName_2(),
	UnityEventBase_t273297287::get_offset_of_m_CallsDirty_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3375 = { sizeof (UnityAction_t975035011), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3376 = { sizeof (UnityEvent_t508714019), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3376[1] = 
{
	UnityEvent_t508714019::get_offset_of_m_InvokeArray_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3377 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3378 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3378[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3379 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3380 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3380[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3381 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3382 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3382[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3383 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3384 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3384[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3385 = { sizeof (UnityString_t3531455484), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3386 = { sizeof (UnitySynchronizationContext_t2083483129), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3386[1] = 
{
	UnitySynchronizationContext_t2083483129::get_offset_of_m_AsyncWorkQueue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3387 = { sizeof (WorkRequest_t3544874328)+ sizeof (RuntimeObject), sizeof(WorkRequest_t3544874328_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3387[2] = 
{
	WorkRequest_t3544874328::get_offset_of_m_DelagateCallback_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WorkRequest_t3544874328::get_offset_of_m_DelagateState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3388 = { sizeof (Vector2_t4049733265)+ sizeof (RuntimeObject), sizeof(Vector2_t4049733265 ), sizeof(Vector2_t4049733265_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3388[11] = 
{
	Vector2_t4049733265::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2_t4049733265::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2_t4049733265_StaticFields::get_offset_of_zeroVector_2(),
	Vector2_t4049733265_StaticFields::get_offset_of_oneVector_3(),
	Vector2_t4049733265_StaticFields::get_offset_of_upVector_4(),
	Vector2_t4049733265_StaticFields::get_offset_of_downVector_5(),
	Vector2_t4049733265_StaticFields::get_offset_of_leftVector_6(),
	Vector2_t4049733265_StaticFields::get_offset_of_rightVector_7(),
	Vector2_t4049733265_StaticFields::get_offset_of_positiveInfinityVector_8(),
	Vector2_t4049733265_StaticFields::get_offset_of_negativeInfinityVector_9(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3389 = { sizeof (Vector4_t3956767633)+ sizeof (RuntimeObject), sizeof(Vector4_t3956767633 ), sizeof(Vector4_t3956767633_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3389[9] = 
{
	0,
	Vector4_t3956767633::get_offset_of_x_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t3956767633::get_offset_of_y_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t3956767633::get_offset_of_z_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t3956767633::get_offset_of_w_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t3956767633_StaticFields::get_offset_of_zeroVector_5(),
	Vector4_t3956767633_StaticFields::get_offset_of_oneVector_6(),
	Vector4_t3956767633_StaticFields::get_offset_of_positiveInfinityVector_7(),
	Vector4_t3956767633_StaticFields::get_offset_of_negativeInfinityVector_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3390 = { sizeof (WaitForSecondsRealtime_t1008110407), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3390[1] = 
{
	WaitForSecondsRealtime_t1008110407::get_offset_of_waitTime_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3391 = { sizeof (ThreadAndSerializationSafeAttribute_t1433446126), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3392 = { sizeof (ReadOnlyAttribute_t969351313), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3393 = { sizeof (ReadWriteAttribute_t1292301318), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3394 = { sizeof (WriteOnlyAttribute_t1702964336), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3395 = { sizeof (DeallocateOnJobCompletionAttribute_t1245883633), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3396 = { sizeof (NativeContainerAttribute_t183098922), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3397 = { sizeof (NativeContainerSupportsAtomicWriteAttribute_t3766748638), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3398 = { sizeof (NativeContainerSupportsMinMaxWriteRestrictionAttribute_t3149572603), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3399 = { sizeof (FrameData_t884459379)+ sizeof (RuntimeObject), sizeof(FrameData_t884459379 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3399[6] = 
{
	FrameData_t884459379::get_offset_of_m_FrameID_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t884459379::get_offset_of_m_DeltaTime_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t884459379::get_offset_of_m_Weight_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t884459379::get_offset_of_m_EffectiveWeight_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t884459379::get_offset_of_m_EffectiveSpeed_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t884459379::get_offset_of_m_Flags_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
