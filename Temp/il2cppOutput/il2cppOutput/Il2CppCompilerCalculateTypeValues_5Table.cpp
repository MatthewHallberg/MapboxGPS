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

// System.String
struct String_t;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t2637112249;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t4099535435;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t3894886840;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
struct ObjRefSurrogate_t1194665622;
// System.Runtime.Remoting.Messaging.RemotingSurrogate
struct RemotingSurrogate_t1003204781;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3446218964;
// System.Object[]
struct ObjectU5BU5D_t2392277051;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t2002431052;
// System.Exception
struct Exception_t3144957912;
// System.Reflection.MethodBase
struct MethodBase_t809716788;
// System.Type[]
struct TypeU5BU5D_t730564648;
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct MethodReturnDictionary_t478885572;
// System.Runtime.Remoting.Messaging.ArgInfo
struct ArgInfo_t175167629;
// System.MarshalByRefObject
struct MarshalByRefObject_t1236449280;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t3254981993;
// System.Runtime.Remoting.Identity
struct Identity_t3398186979;
// System.Collections.ArrayList
struct ArrayList_t844188058;
// System.IntPtr[]
struct IntPtrU5BU5D_t3659589827;
// System.Collections.IDictionary
struct IDictionary_t2958216421;
// System.Collections.Hashtable
struct Hashtable_t2604207785;
// System.Runtime.Remoting.IChannelInfo
struct IChannelInfo_t1355883334;
// System.Runtime.Remoting.IRemotingTypeInfo
struct IRemotingTypeInfo_t989065259;
// System.Runtime.Remoting.IEnvoyInfo
struct IEnvoyInfo_t631975308;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3485169016;
// System.Runtime.Remoting.ChannelData
struct ChannelData_t1971636194;
// System.Collections.Stack
struct Stack_t2081607145;
// System.Collections.IList
struct IList_t1814833016;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2872288717;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t2281743239;
// System.String[]
struct StringU5BU5D_t3162382152;
// System.Byte[]
struct ByteU5BU5D_t2896786162;
// System.Runtime.Remoting.Contexts.Context
struct Context_t836690175;
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t3611941991;
// System.Runtime.Remoting.Messaging.MethodDictionary
struct MethodDictionary_t2144428769;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1544691829;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t3828615931;
// System.Threading.Timer
struct Timer_t4217116598;
// System.Int32[]
struct Int32U5BU5D_t3325461767;
// System.Runtime.Remoting.Messaging.CallContextRemotingData
struct CallContextRemotingData_t2000558446;
// System.Runtime.Remoting.Lifetime.Lease
struct Lease_t3233299325;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t4271477597;
// System.WeakReference
struct WeakReference_t2109491361;
// System.Char[]
struct CharU5BU5D_t1565992178;
// System.Void
struct Void_t3045135636;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t3573799552;
// System.DelegateData
struct DelegateData_t1857717760;
// System.Threading.Mutex
struct Mutex_t369786240;
// System.Threading.Thread
struct Thread_t4168895802;
// System.Runtime.Remoting.Lifetime.LeaseManager
struct LeaseManager_t2028314007;
// System.Threading.WaitHandle
struct WaitHandle_t1735860266;
// System.Threading.ExecutionContext
struct ExecutionContext_t380815810;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t2706641219;
// System.Runtime.Remoting.Messaging.IMessageCtrl
struct IMessageCtrl_t2866914986;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t2156779670;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t1971846531;
// System.Reflection.MonoMethod
struct MonoMethod_t;
// System.Runtime.Remoting.Messaging.MethodCallDictionary
struct MethodCallDictionary_t2725835951;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t4174666413;
// System.Runtime.Remoting.Lifetime.ILease
struct ILease_t3153983563;
// System.IAsyncResult
struct IAsyncResult_t1380204350;
// System.AsyncCallback
struct AsyncCallback_t3881358540;
// System.Collections.Queue
struct Queue_t345199151;
// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
struct RenewalDelegate_t624611738;




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
#ifndef IDENTITY_T3398186979_H
#define IDENTITY_T3398186979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Identity
struct  Identity_t3398186979  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Identity::_objectUri
	String_t* ____objectUri_0;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::_channelSink
	RuntimeObject* ____channelSink_1;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::_envoySink
	RuntimeObject* ____envoySink_2;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::_clientDynamicProperties
	DynamicPropertyCollection_t4099535435 * ____clientDynamicProperties_3;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::_serverDynamicProperties
	DynamicPropertyCollection_t4099535435 * ____serverDynamicProperties_4;
	// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::_objRef
	ObjRef_t3894886840 * ____objRef_5;
	// System.Boolean System.Runtime.Remoting.Identity::_disposed
	bool ____disposed_6;

public:
	inline static int32_t get_offset_of__objectUri_0() { return static_cast<int32_t>(offsetof(Identity_t3398186979, ____objectUri_0)); }
	inline String_t* get__objectUri_0() const { return ____objectUri_0; }
	inline String_t** get_address_of__objectUri_0() { return &____objectUri_0; }
	inline void set__objectUri_0(String_t* value)
	{
		____objectUri_0 = value;
		Il2CppCodeGenWriteBarrier((&____objectUri_0), value);
	}

	inline static int32_t get_offset_of__channelSink_1() { return static_cast<int32_t>(offsetof(Identity_t3398186979, ____channelSink_1)); }
	inline RuntimeObject* get__channelSink_1() const { return ____channelSink_1; }
	inline RuntimeObject** get_address_of__channelSink_1() { return &____channelSink_1; }
	inline void set__channelSink_1(RuntimeObject* value)
	{
		____channelSink_1 = value;
		Il2CppCodeGenWriteBarrier((&____channelSink_1), value);
	}

	inline static int32_t get_offset_of__envoySink_2() { return static_cast<int32_t>(offsetof(Identity_t3398186979, ____envoySink_2)); }
	inline RuntimeObject* get__envoySink_2() const { return ____envoySink_2; }
	inline RuntimeObject** get_address_of__envoySink_2() { return &____envoySink_2; }
	inline void set__envoySink_2(RuntimeObject* value)
	{
		____envoySink_2 = value;
		Il2CppCodeGenWriteBarrier((&____envoySink_2), value);
	}

	inline static int32_t get_offset_of__clientDynamicProperties_3() { return static_cast<int32_t>(offsetof(Identity_t3398186979, ____clientDynamicProperties_3)); }
	inline DynamicPropertyCollection_t4099535435 * get__clientDynamicProperties_3() const { return ____clientDynamicProperties_3; }
	inline DynamicPropertyCollection_t4099535435 ** get_address_of__clientDynamicProperties_3() { return &____clientDynamicProperties_3; }
	inline void set__clientDynamicProperties_3(DynamicPropertyCollection_t4099535435 * value)
	{
		____clientDynamicProperties_3 = value;
		Il2CppCodeGenWriteBarrier((&____clientDynamicProperties_3), value);
	}

	inline static int32_t get_offset_of__serverDynamicProperties_4() { return static_cast<int32_t>(offsetof(Identity_t3398186979, ____serverDynamicProperties_4)); }
	inline DynamicPropertyCollection_t4099535435 * get__serverDynamicProperties_4() const { return ____serverDynamicProperties_4; }
	inline DynamicPropertyCollection_t4099535435 ** get_address_of__serverDynamicProperties_4() { return &____serverDynamicProperties_4; }
	inline void set__serverDynamicProperties_4(DynamicPropertyCollection_t4099535435 * value)
	{
		____serverDynamicProperties_4 = value;
		Il2CppCodeGenWriteBarrier((&____serverDynamicProperties_4), value);
	}

	inline static int32_t get_offset_of__objRef_5() { return static_cast<int32_t>(offsetof(Identity_t3398186979, ____objRef_5)); }
	inline ObjRef_t3894886840 * get__objRef_5() const { return ____objRef_5; }
	inline ObjRef_t3894886840 ** get_address_of__objRef_5() { return &____objRef_5; }
	inline void set__objRef_5(ObjRef_t3894886840 * value)
	{
		____objRef_5 = value;
		Il2CppCodeGenWriteBarrier((&____objRef_5), value);
	}

	inline static int32_t get_offset_of__disposed_6() { return static_cast<int32_t>(offsetof(Identity_t3398186979, ____disposed_6)); }
	inline bool get__disposed_6() const { return ____disposed_6; }
	inline bool* get_address_of__disposed_6() { return &____disposed_6; }
	inline void set__disposed_6(bool value)
	{
		____disposed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IDENTITY_T3398186979_H
#ifndef REMOTINGSURROGATESELECTOR_T3811297368_H
#define REMOTINGSURROGATESELECTOR_T3811297368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
struct  RemotingSurrogateSelector_t3811297368  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::_next
	RuntimeObject* ____next_3;

public:
	inline static int32_t get_offset_of__next_3() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t3811297368, ____next_3)); }
	inline RuntimeObject* get__next_3() const { return ____next_3; }
	inline RuntimeObject** get_address_of__next_3() { return &____next_3; }
	inline void set__next_3(RuntimeObject* value)
	{
		____next_3 = value;
		Il2CppCodeGenWriteBarrier((&____next_3), value);
	}
};

struct RemotingSurrogateSelector_t3811297368_StaticFields
{
public:
	// System.Type System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::s_cachedTypeObjRef
	Type_t * ___s_cachedTypeObjRef_0;
	// System.Runtime.Remoting.Messaging.ObjRefSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::_objRefSurrogate
	ObjRefSurrogate_t1194665622 * ____objRefSurrogate_1;
	// System.Runtime.Remoting.Messaging.RemotingSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::_objRemotingSurrogate
	RemotingSurrogate_t1003204781 * ____objRemotingSurrogate_2;

public:
	inline static int32_t get_offset_of_s_cachedTypeObjRef_0() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t3811297368_StaticFields, ___s_cachedTypeObjRef_0)); }
	inline Type_t * get_s_cachedTypeObjRef_0() const { return ___s_cachedTypeObjRef_0; }
	inline Type_t ** get_address_of_s_cachedTypeObjRef_0() { return &___s_cachedTypeObjRef_0; }
	inline void set_s_cachedTypeObjRef_0(Type_t * value)
	{
		___s_cachedTypeObjRef_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedTypeObjRef_0), value);
	}

	inline static int32_t get_offset_of__objRefSurrogate_1() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t3811297368_StaticFields, ____objRefSurrogate_1)); }
	inline ObjRefSurrogate_t1194665622 * get__objRefSurrogate_1() const { return ____objRefSurrogate_1; }
	inline ObjRefSurrogate_t1194665622 ** get_address_of__objRefSurrogate_1() { return &____objRefSurrogate_1; }
	inline void set__objRefSurrogate_1(ObjRefSurrogate_t1194665622 * value)
	{
		____objRefSurrogate_1 = value;
		Il2CppCodeGenWriteBarrier((&____objRefSurrogate_1), value);
	}

	inline static int32_t get_offset_of__objRemotingSurrogate_2() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t3811297368_StaticFields, ____objRemotingSurrogate_2)); }
	inline RemotingSurrogate_t1003204781 * get__objRemotingSurrogate_2() const { return ____objRemotingSurrogate_2; }
	inline RemotingSurrogate_t1003204781 ** get_address_of__objRemotingSurrogate_2() { return &____objRemotingSurrogate_2; }
	inline void set__objRemotingSurrogate_2(RemotingSurrogate_t1003204781 * value)
	{
		____objRemotingSurrogate_2 = value;
		Il2CppCodeGenWriteBarrier((&____objRemotingSurrogate_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGSURROGATESELECTOR_T3811297368_H
#ifndef RETURNMESSAGE_T1228178955_H
#define RETURNMESSAGE_T1228178955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ReturnMessage
struct  ReturnMessage_t1228178955  : public RuntimeObject
{
public:
	// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::_outArgs
	ObjectU5BU5D_t2392277051* ____outArgs_0;
	// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::_args
	ObjectU5BU5D_t2392277051* ____args_1;
	// System.Int32 System.Runtime.Remoting.Messaging.ReturnMessage::_outArgsCount
	int32_t ____outArgsCount_2;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::_callCtx
	LogicalCallContext_t2002431052 * ____callCtx_3;
	// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::_returnValue
	RuntimeObject * ____returnValue_4;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_uri
	String_t* ____uri_5;
	// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::_exception
	Exception_t3144957912 * ____exception_6;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::_methodBase
	MethodBase_t809716788 * ____methodBase_7;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_methodName
	String_t* ____methodName_8;
	// System.Type[] System.Runtime.Remoting.Messaging.ReturnMessage::_methodSignature
	TypeU5BU5D_t730564648* ____methodSignature_9;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_typeName
	String_t* ____typeName_10;
	// System.Runtime.Remoting.Messaging.MethodReturnDictionary System.Runtime.Remoting.Messaging.ReturnMessage::_properties
	MethodReturnDictionary_t478885572 * ____properties_11;
	// System.Runtime.Remoting.Messaging.ArgInfo System.Runtime.Remoting.Messaging.ReturnMessage::_inArgInfo
	ArgInfo_t175167629 * ____inArgInfo_12;

public:
	inline static int32_t get_offset_of__outArgs_0() { return static_cast<int32_t>(offsetof(ReturnMessage_t1228178955, ____outArgs_0)); }
	inline ObjectU5BU5D_t2392277051* get__outArgs_0() const { return ____outArgs_0; }
	inline ObjectU5BU5D_t2392277051** get_address_of__outArgs_0() { return &____outArgs_0; }
	inline void set__outArgs_0(ObjectU5BU5D_t2392277051* value)
	{
		____outArgs_0 = value;
		Il2CppCodeGenWriteBarrier((&____outArgs_0), value);
	}

	inline static int32_t get_offset_of__args_1() { return static_cast<int32_t>(offsetof(ReturnMessage_t1228178955, ____args_1)); }
	inline ObjectU5BU5D_t2392277051* get__args_1() const { return ____args_1; }
	inline ObjectU5BU5D_t2392277051** get_address_of__args_1() { return &____args_1; }
	inline void set__args_1(ObjectU5BU5D_t2392277051* value)
	{
		____args_1 = value;
		Il2CppCodeGenWriteBarrier((&____args_1), value);
	}

	inline static int32_t get_offset_of__outArgsCount_2() { return static_cast<int32_t>(offsetof(ReturnMessage_t1228178955, ____outArgsCount_2)); }
	inline int32_t get__outArgsCount_2() const { return ____outArgsCount_2; }
	inline int32_t* get_address_of__outArgsCount_2() { return &____outArgsCount_2; }
	inline void set__outArgsCount_2(int32_t value)
	{
		____outArgsCount_2 = value;
	}

	inline static int32_t get_offset_of__callCtx_3() { return static_cast<int32_t>(offsetof(ReturnMessage_t1228178955, ____callCtx_3)); }
	inline LogicalCallContext_t2002431052 * get__callCtx_3() const { return ____callCtx_3; }
	inline LogicalCallContext_t2002431052 ** get_address_of__callCtx_3() { return &____callCtx_3; }
	inline void set__callCtx_3(LogicalCallContext_t2002431052 * value)
	{
		____callCtx_3 = value;
		Il2CppCodeGenWriteBarrier((&____callCtx_3), value);
	}

	inline static int32_t get_offset_of__returnValue_4() { return static_cast<int32_t>(offsetof(ReturnMessage_t1228178955, ____returnValue_4)); }
	inline RuntimeObject * get__returnValue_4() const { return ____returnValue_4; }
	inline RuntimeObject ** get_address_of__returnValue_4() { return &____returnValue_4; }
	inline void set__returnValue_4(RuntimeObject * value)
	{
		____returnValue_4 = value;
		Il2CppCodeGenWriteBarrier((&____returnValue_4), value);
	}

	inline static int32_t get_offset_of__uri_5() { return static_cast<int32_t>(offsetof(ReturnMessage_t1228178955, ____uri_5)); }
	inline String_t* get__uri_5() const { return ____uri_5; }
	inline String_t** get_address_of__uri_5() { return &____uri_5; }
	inline void set__uri_5(String_t* value)
	{
		____uri_5 = value;
		Il2CppCodeGenWriteBarrier((&____uri_5), value);
	}

	inline static int32_t get_offset_of__exception_6() { return static_cast<int32_t>(offsetof(ReturnMessage_t1228178955, ____exception_6)); }
	inline Exception_t3144957912 * get__exception_6() const { return ____exception_6; }
	inline Exception_t3144957912 ** get_address_of__exception_6() { return &____exception_6; }
	inline void set__exception_6(Exception_t3144957912 * value)
	{
		____exception_6 = value;
		Il2CppCodeGenWriteBarrier((&____exception_6), value);
	}

	inline static int32_t get_offset_of__methodBase_7() { return static_cast<int32_t>(offsetof(ReturnMessage_t1228178955, ____methodBase_7)); }
	inline MethodBase_t809716788 * get__methodBase_7() const { return ____methodBase_7; }
	inline MethodBase_t809716788 ** get_address_of__methodBase_7() { return &____methodBase_7; }
	inline void set__methodBase_7(MethodBase_t809716788 * value)
	{
		____methodBase_7 = value;
		Il2CppCodeGenWriteBarrier((&____methodBase_7), value);
	}

	inline static int32_t get_offset_of__methodName_8() { return static_cast<int32_t>(offsetof(ReturnMessage_t1228178955, ____methodName_8)); }
	inline String_t* get__methodName_8() const { return ____methodName_8; }
	inline String_t** get_address_of__methodName_8() { return &____methodName_8; }
	inline void set__methodName_8(String_t* value)
	{
		____methodName_8 = value;
		Il2CppCodeGenWriteBarrier((&____methodName_8), value);
	}

	inline static int32_t get_offset_of__methodSignature_9() { return static_cast<int32_t>(offsetof(ReturnMessage_t1228178955, ____methodSignature_9)); }
	inline TypeU5BU5D_t730564648* get__methodSignature_9() const { return ____methodSignature_9; }
	inline TypeU5BU5D_t730564648** get_address_of__methodSignature_9() { return &____methodSignature_9; }
	inline void set__methodSignature_9(TypeU5BU5D_t730564648* value)
	{
		____methodSignature_9 = value;
		Il2CppCodeGenWriteBarrier((&____methodSignature_9), value);
	}

	inline static int32_t get_offset_of__typeName_10() { return static_cast<int32_t>(offsetof(ReturnMessage_t1228178955, ____typeName_10)); }
	inline String_t* get__typeName_10() const { return ____typeName_10; }
	inline String_t** get_address_of__typeName_10() { return &____typeName_10; }
	inline void set__typeName_10(String_t* value)
	{
		____typeName_10 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_10), value);
	}

	inline static int32_t get_offset_of__properties_11() { return static_cast<int32_t>(offsetof(ReturnMessage_t1228178955, ____properties_11)); }
	inline MethodReturnDictionary_t478885572 * get__properties_11() const { return ____properties_11; }
	inline MethodReturnDictionary_t478885572 ** get_address_of__properties_11() { return &____properties_11; }
	inline void set__properties_11(MethodReturnDictionary_t478885572 * value)
	{
		____properties_11 = value;
		Il2CppCodeGenWriteBarrier((&____properties_11), value);
	}

	inline static int32_t get_offset_of__inArgInfo_12() { return static_cast<int32_t>(offsetof(ReturnMessage_t1228178955, ____inArgInfo_12)); }
	inline ArgInfo_t175167629 * get__inArgInfo_12() const { return ____inArgInfo_12; }
	inline ArgInfo_t175167629 ** get_address_of__inArgInfo_12() { return &____inArgInfo_12; }
	inline void set__inArgInfo_12(ArgInfo_t175167629 * value)
	{
		____inArgInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&____inArgInfo_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RETURNMESSAGE_T1228178955_H
#ifndef SERVERCONTEXTTERMINATORSINK_T434810407_H
#define SERVERCONTEXTTERMINATORSINK_T434810407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ServerContextTerminatorSink
struct  ServerContextTerminatorSink_t434810407  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERCONTEXTTERMINATORSINK_T434810407_H
#ifndef SERVEROBJECTTERMINATORSINK_T979267002_H
#define SERVEROBJECTTERMINATORSINK_T979267002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
struct  ServerObjectTerminatorSink_t979267002  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink::_nextSink
	RuntimeObject* ____nextSink_0;

public:
	inline static int32_t get_offset_of__nextSink_0() { return static_cast<int32_t>(offsetof(ServerObjectTerminatorSink_t979267002, ____nextSink_0)); }
	inline RuntimeObject* get__nextSink_0() const { return ____nextSink_0; }
	inline RuntimeObject** get_address_of__nextSink_0() { return &____nextSink_0; }
	inline void set__nextSink_0(RuntimeObject* value)
	{
		____nextSink_0 = value;
		Il2CppCodeGenWriteBarrier((&____nextSink_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVEROBJECTTERMINATORSINK_T979267002_H
#ifndef STACKBUILDERSINK_T1433904979_H
#define STACKBUILDERSINK_T1433904979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.StackBuilderSink
struct  StackBuilderSink_t1433904979  : public RuntimeObject
{
public:
	// System.MarshalByRefObject System.Runtime.Remoting.Messaging.StackBuilderSink::_target
	MarshalByRefObject_t1236449280 * ____target_0;
	// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Messaging.StackBuilderSink::_rp
	RealProxy_t3254981993 * ____rp_1;

public:
	inline static int32_t get_offset_of__target_0() { return static_cast<int32_t>(offsetof(StackBuilderSink_t1433904979, ____target_0)); }
	inline MarshalByRefObject_t1236449280 * get__target_0() const { return ____target_0; }
	inline MarshalByRefObject_t1236449280 ** get_address_of__target_0() { return &____target_0; }
	inline void set__target_0(MarshalByRefObject_t1236449280 * value)
	{
		____target_0 = value;
		Il2CppCodeGenWriteBarrier((&____target_0), value);
	}

	inline static int32_t get_offset_of__rp_1() { return static_cast<int32_t>(offsetof(StackBuilderSink_t1433904979, ____rp_1)); }
	inline RealProxy_t3254981993 * get__rp_1() const { return ____rp_1; }
	inline RealProxy_t3254981993 ** get_address_of__rp_1() { return &____rp_1; }
	inline void set__rp_1(RealProxy_t3254981993 * value)
	{
		____rp_1 = value;
		Il2CppCodeGenWriteBarrier((&____rp_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKBUILDERSINK_T1433904979_H
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
#ifndef TRANSPARENTPROXY_T571554740_H
#define TRANSPARENTPROXY_T571554740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.TransparentProxy
struct  TransparentProxy_t571554740  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.TransparentProxy::_rp
	RealProxy_t3254981993 * ____rp_0;

public:
	inline static int32_t get_offset_of__rp_0() { return static_cast<int32_t>(offsetof(TransparentProxy_t571554740, ____rp_0)); }
	inline RealProxy_t3254981993 * get__rp_0() const { return ____rp_0; }
	inline RealProxy_t3254981993 ** get_address_of__rp_0() { return &____rp_0; }
	inline void set__rp_0(RealProxy_t3254981993 * value)
	{
		____rp_0 = value;
		Il2CppCodeGenWriteBarrier((&____rp_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSPARENTPROXY_T571554740_H
#ifndef REALPROXY_T3254981993_H
#define REALPROXY_T3254981993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.RealProxy
struct  RealProxy_t3254981993  : public RuntimeObject
{
public:
	// System.Type System.Runtime.Remoting.Proxies.RealProxy::class_to_proxy
	Type_t * ___class_to_proxy_0;
	// System.Int32 System.Runtime.Remoting.Proxies.RealProxy::_targetDomainId
	int32_t ____targetDomainId_1;
	// System.String System.Runtime.Remoting.Proxies.RealProxy::_targetUri
	String_t* ____targetUri_2;
	// System.Runtime.Remoting.Identity System.Runtime.Remoting.Proxies.RealProxy::_objectIdentity
	Identity_t3398186979 * ____objectIdentity_3;
	// System.Object System.Runtime.Remoting.Proxies.RealProxy::_objTP
	RuntimeObject * ____objTP_4;

public:
	inline static int32_t get_offset_of_class_to_proxy_0() { return static_cast<int32_t>(offsetof(RealProxy_t3254981993, ___class_to_proxy_0)); }
	inline Type_t * get_class_to_proxy_0() const { return ___class_to_proxy_0; }
	inline Type_t ** get_address_of_class_to_proxy_0() { return &___class_to_proxy_0; }
	inline void set_class_to_proxy_0(Type_t * value)
	{
		___class_to_proxy_0 = value;
		Il2CppCodeGenWriteBarrier((&___class_to_proxy_0), value);
	}

	inline static int32_t get_offset_of__targetDomainId_1() { return static_cast<int32_t>(offsetof(RealProxy_t3254981993, ____targetDomainId_1)); }
	inline int32_t get__targetDomainId_1() const { return ____targetDomainId_1; }
	inline int32_t* get_address_of__targetDomainId_1() { return &____targetDomainId_1; }
	inline void set__targetDomainId_1(int32_t value)
	{
		____targetDomainId_1 = value;
	}

	inline static int32_t get_offset_of__targetUri_2() { return static_cast<int32_t>(offsetof(RealProxy_t3254981993, ____targetUri_2)); }
	inline String_t* get__targetUri_2() const { return ____targetUri_2; }
	inline String_t** get_address_of__targetUri_2() { return &____targetUri_2; }
	inline void set__targetUri_2(String_t* value)
	{
		____targetUri_2 = value;
		Il2CppCodeGenWriteBarrier((&____targetUri_2), value);
	}

	inline static int32_t get_offset_of__objectIdentity_3() { return static_cast<int32_t>(offsetof(RealProxy_t3254981993, ____objectIdentity_3)); }
	inline Identity_t3398186979 * get__objectIdentity_3() const { return ____objectIdentity_3; }
	inline Identity_t3398186979 ** get_address_of__objectIdentity_3() { return &____objectIdentity_3; }
	inline void set__objectIdentity_3(Identity_t3398186979 * value)
	{
		____objectIdentity_3 = value;
		Il2CppCodeGenWriteBarrier((&____objectIdentity_3), value);
	}

	inline static int32_t get_offset_of__objTP_4() { return static_cast<int32_t>(offsetof(RealProxy_t3254981993, ____objTP_4)); }
	inline RuntimeObject * get__objTP_4() const { return ____objTP_4; }
	inline RuntimeObject ** get_address_of__objTP_4() { return &____objTP_4; }
	inline void set__objTP_4(RuntimeObject * value)
	{
		____objTP_4 = value;
		Il2CppCodeGenWriteBarrier((&____objTP_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REALPROXY_T3254981993_H
#ifndef TRACKINGSERVICES_T1810649676_H
#define TRACKINGSERVICES_T1810649676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Services.TrackingServices
struct  TrackingServices_t1810649676  : public RuntimeObject
{
public:

public:
};

struct TrackingServices_t1810649676_StaticFields
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Services.TrackingServices::_handlers
	ArrayList_t844188058 * ____handlers_0;

public:
	inline static int32_t get_offset_of__handlers_0() { return static_cast<int32_t>(offsetof(TrackingServices_t1810649676_StaticFields, ____handlers_0)); }
	inline ArrayList_t844188058 * get__handlers_0() const { return ____handlers_0; }
	inline ArrayList_t844188058 ** get_address_of__handlers_0() { return &____handlers_0; }
	inline void set__handlers_0(ArrayList_t844188058 * value)
	{
		____handlers_0 = value;
		Il2CppCodeGenWriteBarrier((&____handlers_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKINGSERVICES_T1810649676_H
#ifndef ENVOYINFO_T3045591672_H
#define ENVOYINFO_T3045591672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.EnvoyInfo
struct  EnvoyInfo_t3045591672  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.EnvoyInfo::envoySinks
	RuntimeObject* ___envoySinks_0;

public:
	inline static int32_t get_offset_of_envoySinks_0() { return static_cast<int32_t>(offsetof(EnvoyInfo_t3045591672, ___envoySinks_0)); }
	inline RuntimeObject* get_envoySinks_0() const { return ___envoySinks_0; }
	inline RuntimeObject** get_address_of_envoySinks_0() { return &___envoySinks_0; }
	inline void set_envoySinks_0(RuntimeObject* value)
	{
		___envoySinks_0 = value;
		Il2CppCodeGenWriteBarrier((&___envoySinks_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVOYINFO_T3045591672_H
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
#ifndef INTERNALREMOTINGSERVICES_T229150950_H
#define INTERNALREMOTINGSERVICES_T229150950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.InternalRemotingServices
struct  InternalRemotingServices_t229150950  : public RuntimeObject
{
public:

public:
};

struct InternalRemotingServices_t229150950_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.InternalRemotingServices::_soapAttributes
	Hashtable_t2604207785 * ____soapAttributes_0;

public:
	inline static int32_t get_offset_of__soapAttributes_0() { return static_cast<int32_t>(offsetof(InternalRemotingServices_t229150950_StaticFields, ____soapAttributes_0)); }
	inline Hashtable_t2604207785 * get__soapAttributes_0() const { return ____soapAttributes_0; }
	inline Hashtable_t2604207785 ** get_address_of__soapAttributes_0() { return &____soapAttributes_0; }
	inline void set__soapAttributes_0(Hashtable_t2604207785 * value)
	{
		____soapAttributes_0 = value;
		Il2CppCodeGenWriteBarrier((&____soapAttributes_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALREMOTINGSERVICES_T229150950_H
#ifndef OBJREF_T3894886840_H
#define OBJREF_T3894886840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ObjRef
struct  ObjRef_t3894886840  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::channel_info
	RuntimeObject* ___channel_info_0;
	// System.String System.Runtime.Remoting.ObjRef::uri
	String_t* ___uri_1;
	// System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::typeInfo
	RuntimeObject* ___typeInfo_2;
	// System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::envoyInfo
	RuntimeObject* ___envoyInfo_3;
	// System.Int32 System.Runtime.Remoting.ObjRef::flags
	int32_t ___flags_4;
	// System.Type System.Runtime.Remoting.ObjRef::_serverType
	Type_t * ____serverType_5;

public:
	inline static int32_t get_offset_of_channel_info_0() { return static_cast<int32_t>(offsetof(ObjRef_t3894886840, ___channel_info_0)); }
	inline RuntimeObject* get_channel_info_0() const { return ___channel_info_0; }
	inline RuntimeObject** get_address_of_channel_info_0() { return &___channel_info_0; }
	inline void set_channel_info_0(RuntimeObject* value)
	{
		___channel_info_0 = value;
		Il2CppCodeGenWriteBarrier((&___channel_info_0), value);
	}

	inline static int32_t get_offset_of_uri_1() { return static_cast<int32_t>(offsetof(ObjRef_t3894886840, ___uri_1)); }
	inline String_t* get_uri_1() const { return ___uri_1; }
	inline String_t** get_address_of_uri_1() { return &___uri_1; }
	inline void set_uri_1(String_t* value)
	{
		___uri_1 = value;
		Il2CppCodeGenWriteBarrier((&___uri_1), value);
	}

	inline static int32_t get_offset_of_typeInfo_2() { return static_cast<int32_t>(offsetof(ObjRef_t3894886840, ___typeInfo_2)); }
	inline RuntimeObject* get_typeInfo_2() const { return ___typeInfo_2; }
	inline RuntimeObject** get_address_of_typeInfo_2() { return &___typeInfo_2; }
	inline void set_typeInfo_2(RuntimeObject* value)
	{
		___typeInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___typeInfo_2), value);
	}

	inline static int32_t get_offset_of_envoyInfo_3() { return static_cast<int32_t>(offsetof(ObjRef_t3894886840, ___envoyInfo_3)); }
	inline RuntimeObject* get_envoyInfo_3() const { return ___envoyInfo_3; }
	inline RuntimeObject** get_address_of_envoyInfo_3() { return &___envoyInfo_3; }
	inline void set_envoyInfo_3(RuntimeObject* value)
	{
		___envoyInfo_3 = value;
		Il2CppCodeGenWriteBarrier((&___envoyInfo_3), value);
	}

	inline static int32_t get_offset_of_flags_4() { return static_cast<int32_t>(offsetof(ObjRef_t3894886840, ___flags_4)); }
	inline int32_t get_flags_4() const { return ___flags_4; }
	inline int32_t* get_address_of_flags_4() { return &___flags_4; }
	inline void set_flags_4(int32_t value)
	{
		___flags_4 = value;
	}

	inline static int32_t get_offset_of__serverType_5() { return static_cast<int32_t>(offsetof(ObjRef_t3894886840, ____serverType_5)); }
	inline Type_t * get__serverType_5() const { return ____serverType_5; }
	inline Type_t ** get_address_of__serverType_5() { return &____serverType_5; }
	inline void set__serverType_5(Type_t * value)
	{
		____serverType_5 = value;
		Il2CppCodeGenWriteBarrier((&____serverType_5), value);
	}
};

struct ObjRef_t3894886840_StaticFields
{
public:
	// System.Int32 System.Runtime.Remoting.ObjRef::MarshalledObjectRef
	int32_t ___MarshalledObjectRef_6;
	// System.Int32 System.Runtime.Remoting.ObjRef::WellKnowObjectRef
	int32_t ___WellKnowObjectRef_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.ObjRef::<>f__switch$map26
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24map26_8;

public:
	inline static int32_t get_offset_of_MarshalledObjectRef_6() { return static_cast<int32_t>(offsetof(ObjRef_t3894886840_StaticFields, ___MarshalledObjectRef_6)); }
	inline int32_t get_MarshalledObjectRef_6() const { return ___MarshalledObjectRef_6; }
	inline int32_t* get_address_of_MarshalledObjectRef_6() { return &___MarshalledObjectRef_6; }
	inline void set_MarshalledObjectRef_6(int32_t value)
	{
		___MarshalledObjectRef_6 = value;
	}

	inline static int32_t get_offset_of_WellKnowObjectRef_7() { return static_cast<int32_t>(offsetof(ObjRef_t3894886840_StaticFields, ___WellKnowObjectRef_7)); }
	inline int32_t get_WellKnowObjectRef_7() const { return ___WellKnowObjectRef_7; }
	inline int32_t* get_address_of_WellKnowObjectRef_7() { return &___WellKnowObjectRef_7; }
	inline void set_WellKnowObjectRef_7(int32_t value)
	{
		___WellKnowObjectRef_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map26_8() { return static_cast<int32_t>(offsetof(ObjRef_t3894886840_StaticFields, ___U3CU3Ef__switchU24map26_8)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24map26_8() const { return ___U3CU3Ef__switchU24map26_8; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24map26_8() { return &___U3CU3Ef__switchU24map26_8; }
	inline void set_U3CU3Ef__switchU24map26_8(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24map26_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map26_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJREF_T3894886840_H
#ifndef REMOTINGCONFIGURATION_T3267472338_H
#define REMOTINGCONFIGURATION_T3267472338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.RemotingConfiguration
struct  RemotingConfiguration_t3267472338  : public RuntimeObject
{
public:

public:
};

struct RemotingConfiguration_t3267472338_StaticFields
{
public:
	// System.String System.Runtime.Remoting.RemotingConfiguration::applicationID
	String_t* ___applicationID_0;
	// System.String System.Runtime.Remoting.RemotingConfiguration::applicationName
	String_t* ___applicationName_1;
	// System.String System.Runtime.Remoting.RemotingConfiguration::processGuid
	String_t* ___processGuid_2;
	// System.Boolean System.Runtime.Remoting.RemotingConfiguration::defaultConfigRead
	bool ___defaultConfigRead_3;
	// System.Boolean System.Runtime.Remoting.RemotingConfiguration::defaultDelayedConfigRead
	bool ___defaultDelayedConfigRead_4;
	// System.String System.Runtime.Remoting.RemotingConfiguration::_errorMode
	String_t* ____errorMode_5;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::wellKnownClientEntries
	Hashtable_t2604207785 * ___wellKnownClientEntries_6;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::activatedClientEntries
	Hashtable_t2604207785 * ___activatedClientEntries_7;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::wellKnownServiceEntries
	Hashtable_t2604207785 * ___wellKnownServiceEntries_8;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::activatedServiceEntries
	Hashtable_t2604207785 * ___activatedServiceEntries_9;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::channelTemplates
	Hashtable_t2604207785 * ___channelTemplates_10;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::clientProviderTemplates
	Hashtable_t2604207785 * ___clientProviderTemplates_11;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::serverProviderTemplates
	Hashtable_t2604207785 * ___serverProviderTemplates_12;

public:
	inline static int32_t get_offset_of_applicationID_0() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3267472338_StaticFields, ___applicationID_0)); }
	inline String_t* get_applicationID_0() const { return ___applicationID_0; }
	inline String_t** get_address_of_applicationID_0() { return &___applicationID_0; }
	inline void set_applicationID_0(String_t* value)
	{
		___applicationID_0 = value;
		Il2CppCodeGenWriteBarrier((&___applicationID_0), value);
	}

	inline static int32_t get_offset_of_applicationName_1() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3267472338_StaticFields, ___applicationName_1)); }
	inline String_t* get_applicationName_1() const { return ___applicationName_1; }
	inline String_t** get_address_of_applicationName_1() { return &___applicationName_1; }
	inline void set_applicationName_1(String_t* value)
	{
		___applicationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___applicationName_1), value);
	}

	inline static int32_t get_offset_of_processGuid_2() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3267472338_StaticFields, ___processGuid_2)); }
	inline String_t* get_processGuid_2() const { return ___processGuid_2; }
	inline String_t** get_address_of_processGuid_2() { return &___processGuid_2; }
	inline void set_processGuid_2(String_t* value)
	{
		___processGuid_2 = value;
		Il2CppCodeGenWriteBarrier((&___processGuid_2), value);
	}

	inline static int32_t get_offset_of_defaultConfigRead_3() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3267472338_StaticFields, ___defaultConfigRead_3)); }
	inline bool get_defaultConfigRead_3() const { return ___defaultConfigRead_3; }
	inline bool* get_address_of_defaultConfigRead_3() { return &___defaultConfigRead_3; }
	inline void set_defaultConfigRead_3(bool value)
	{
		___defaultConfigRead_3 = value;
	}

	inline static int32_t get_offset_of_defaultDelayedConfigRead_4() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3267472338_StaticFields, ___defaultDelayedConfigRead_4)); }
	inline bool get_defaultDelayedConfigRead_4() const { return ___defaultDelayedConfigRead_4; }
	inline bool* get_address_of_defaultDelayedConfigRead_4() { return &___defaultDelayedConfigRead_4; }
	inline void set_defaultDelayedConfigRead_4(bool value)
	{
		___defaultDelayedConfigRead_4 = value;
	}

	inline static int32_t get_offset_of__errorMode_5() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3267472338_StaticFields, ____errorMode_5)); }
	inline String_t* get__errorMode_5() const { return ____errorMode_5; }
	inline String_t** get_address_of__errorMode_5() { return &____errorMode_5; }
	inline void set__errorMode_5(String_t* value)
	{
		____errorMode_5 = value;
		Il2CppCodeGenWriteBarrier((&____errorMode_5), value);
	}

	inline static int32_t get_offset_of_wellKnownClientEntries_6() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3267472338_StaticFields, ___wellKnownClientEntries_6)); }
	inline Hashtable_t2604207785 * get_wellKnownClientEntries_6() const { return ___wellKnownClientEntries_6; }
	inline Hashtable_t2604207785 ** get_address_of_wellKnownClientEntries_6() { return &___wellKnownClientEntries_6; }
	inline void set_wellKnownClientEntries_6(Hashtable_t2604207785 * value)
	{
		___wellKnownClientEntries_6 = value;
		Il2CppCodeGenWriteBarrier((&___wellKnownClientEntries_6), value);
	}

	inline static int32_t get_offset_of_activatedClientEntries_7() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3267472338_StaticFields, ___activatedClientEntries_7)); }
	inline Hashtable_t2604207785 * get_activatedClientEntries_7() const { return ___activatedClientEntries_7; }
	inline Hashtable_t2604207785 ** get_address_of_activatedClientEntries_7() { return &___activatedClientEntries_7; }
	inline void set_activatedClientEntries_7(Hashtable_t2604207785 * value)
	{
		___activatedClientEntries_7 = value;
		Il2CppCodeGenWriteBarrier((&___activatedClientEntries_7), value);
	}

	inline static int32_t get_offset_of_wellKnownServiceEntries_8() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3267472338_StaticFields, ___wellKnownServiceEntries_8)); }
	inline Hashtable_t2604207785 * get_wellKnownServiceEntries_8() const { return ___wellKnownServiceEntries_8; }
	inline Hashtable_t2604207785 ** get_address_of_wellKnownServiceEntries_8() { return &___wellKnownServiceEntries_8; }
	inline void set_wellKnownServiceEntries_8(Hashtable_t2604207785 * value)
	{
		___wellKnownServiceEntries_8 = value;
		Il2CppCodeGenWriteBarrier((&___wellKnownServiceEntries_8), value);
	}

	inline static int32_t get_offset_of_activatedServiceEntries_9() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3267472338_StaticFields, ___activatedServiceEntries_9)); }
	inline Hashtable_t2604207785 * get_activatedServiceEntries_9() const { return ___activatedServiceEntries_9; }
	inline Hashtable_t2604207785 ** get_address_of_activatedServiceEntries_9() { return &___activatedServiceEntries_9; }
	inline void set_activatedServiceEntries_9(Hashtable_t2604207785 * value)
	{
		___activatedServiceEntries_9 = value;
		Il2CppCodeGenWriteBarrier((&___activatedServiceEntries_9), value);
	}

	inline static int32_t get_offset_of_channelTemplates_10() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3267472338_StaticFields, ___channelTemplates_10)); }
	inline Hashtable_t2604207785 * get_channelTemplates_10() const { return ___channelTemplates_10; }
	inline Hashtable_t2604207785 ** get_address_of_channelTemplates_10() { return &___channelTemplates_10; }
	inline void set_channelTemplates_10(Hashtable_t2604207785 * value)
	{
		___channelTemplates_10 = value;
		Il2CppCodeGenWriteBarrier((&___channelTemplates_10), value);
	}

	inline static int32_t get_offset_of_clientProviderTemplates_11() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3267472338_StaticFields, ___clientProviderTemplates_11)); }
	inline Hashtable_t2604207785 * get_clientProviderTemplates_11() const { return ___clientProviderTemplates_11; }
	inline Hashtable_t2604207785 ** get_address_of_clientProviderTemplates_11() { return &___clientProviderTemplates_11; }
	inline void set_clientProviderTemplates_11(Hashtable_t2604207785 * value)
	{
		___clientProviderTemplates_11 = value;
		Il2CppCodeGenWriteBarrier((&___clientProviderTemplates_11), value);
	}

	inline static int32_t get_offset_of_serverProviderTemplates_12() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3267472338_StaticFields, ___serverProviderTemplates_12)); }
	inline Hashtable_t2604207785 * get_serverProviderTemplates_12() const { return ___serverProviderTemplates_12; }
	inline Hashtable_t2604207785 ** get_address_of_serverProviderTemplates_12() { return &___serverProviderTemplates_12; }
	inline void set_serverProviderTemplates_12(Hashtable_t2604207785 * value)
	{
		___serverProviderTemplates_12 = value;
		Il2CppCodeGenWriteBarrier((&___serverProviderTemplates_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGCONFIGURATION_T3267472338_H
#ifndef CONFIGHANDLER_T1108969946_H
#define CONFIGHANDLER_T1108969946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ConfigHandler
struct  ConfigHandler_t1108969946  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.ConfigHandler::typeEntries
	ArrayList_t844188058 * ___typeEntries_0;
	// System.Collections.ArrayList System.Runtime.Remoting.ConfigHandler::channelInstances
	ArrayList_t844188058 * ___channelInstances_1;
	// System.Runtime.Remoting.ChannelData System.Runtime.Remoting.ConfigHandler::currentChannel
	ChannelData_t1971636194 * ___currentChannel_2;
	// System.Collections.Stack System.Runtime.Remoting.ConfigHandler::currentProviderData
	Stack_t2081607145 * ___currentProviderData_3;
	// System.String System.Runtime.Remoting.ConfigHandler::currentClientUrl
	String_t* ___currentClientUrl_4;
	// System.String System.Runtime.Remoting.ConfigHandler::appName
	String_t* ___appName_5;
	// System.String System.Runtime.Remoting.ConfigHandler::currentXmlPath
	String_t* ___currentXmlPath_6;
	// System.Boolean System.Runtime.Remoting.ConfigHandler::onlyDelayedChannels
	bool ___onlyDelayedChannels_7;

public:
	inline static int32_t get_offset_of_typeEntries_0() { return static_cast<int32_t>(offsetof(ConfigHandler_t1108969946, ___typeEntries_0)); }
	inline ArrayList_t844188058 * get_typeEntries_0() const { return ___typeEntries_0; }
	inline ArrayList_t844188058 ** get_address_of_typeEntries_0() { return &___typeEntries_0; }
	inline void set_typeEntries_0(ArrayList_t844188058 * value)
	{
		___typeEntries_0 = value;
		Il2CppCodeGenWriteBarrier((&___typeEntries_0), value);
	}

	inline static int32_t get_offset_of_channelInstances_1() { return static_cast<int32_t>(offsetof(ConfigHandler_t1108969946, ___channelInstances_1)); }
	inline ArrayList_t844188058 * get_channelInstances_1() const { return ___channelInstances_1; }
	inline ArrayList_t844188058 ** get_address_of_channelInstances_1() { return &___channelInstances_1; }
	inline void set_channelInstances_1(ArrayList_t844188058 * value)
	{
		___channelInstances_1 = value;
		Il2CppCodeGenWriteBarrier((&___channelInstances_1), value);
	}

	inline static int32_t get_offset_of_currentChannel_2() { return static_cast<int32_t>(offsetof(ConfigHandler_t1108969946, ___currentChannel_2)); }
	inline ChannelData_t1971636194 * get_currentChannel_2() const { return ___currentChannel_2; }
	inline ChannelData_t1971636194 ** get_address_of_currentChannel_2() { return &___currentChannel_2; }
	inline void set_currentChannel_2(ChannelData_t1971636194 * value)
	{
		___currentChannel_2 = value;
		Il2CppCodeGenWriteBarrier((&___currentChannel_2), value);
	}

	inline static int32_t get_offset_of_currentProviderData_3() { return static_cast<int32_t>(offsetof(ConfigHandler_t1108969946, ___currentProviderData_3)); }
	inline Stack_t2081607145 * get_currentProviderData_3() const { return ___currentProviderData_3; }
	inline Stack_t2081607145 ** get_address_of_currentProviderData_3() { return &___currentProviderData_3; }
	inline void set_currentProviderData_3(Stack_t2081607145 * value)
	{
		___currentProviderData_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentProviderData_3), value);
	}

	inline static int32_t get_offset_of_currentClientUrl_4() { return static_cast<int32_t>(offsetof(ConfigHandler_t1108969946, ___currentClientUrl_4)); }
	inline String_t* get_currentClientUrl_4() const { return ___currentClientUrl_4; }
	inline String_t** get_address_of_currentClientUrl_4() { return &___currentClientUrl_4; }
	inline void set_currentClientUrl_4(String_t* value)
	{
		___currentClientUrl_4 = value;
		Il2CppCodeGenWriteBarrier((&___currentClientUrl_4), value);
	}

	inline static int32_t get_offset_of_appName_5() { return static_cast<int32_t>(offsetof(ConfigHandler_t1108969946, ___appName_5)); }
	inline String_t* get_appName_5() const { return ___appName_5; }
	inline String_t** get_address_of_appName_5() { return &___appName_5; }
	inline void set_appName_5(String_t* value)
	{
		___appName_5 = value;
		Il2CppCodeGenWriteBarrier((&___appName_5), value);
	}

	inline static int32_t get_offset_of_currentXmlPath_6() { return static_cast<int32_t>(offsetof(ConfigHandler_t1108969946, ___currentXmlPath_6)); }
	inline String_t* get_currentXmlPath_6() const { return ___currentXmlPath_6; }
	inline String_t** get_address_of_currentXmlPath_6() { return &___currentXmlPath_6; }
	inline void set_currentXmlPath_6(String_t* value)
	{
		___currentXmlPath_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentXmlPath_6), value);
	}

	inline static int32_t get_offset_of_onlyDelayedChannels_7() { return static_cast<int32_t>(offsetof(ConfigHandler_t1108969946, ___onlyDelayedChannels_7)); }
	inline bool get_onlyDelayedChannels_7() const { return ___onlyDelayedChannels_7; }
	inline bool* get_address_of_onlyDelayedChannels_7() { return &___onlyDelayedChannels_7; }
	inline void set_onlyDelayedChannels_7(bool value)
	{
		___onlyDelayedChannels_7 = value;
	}
};

struct ConfigHandler_t1108969946_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.ConfigHandler::<>f__switch$map27
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24map27_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.ConfigHandler::<>f__switch$map28
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24map28_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map27_8() { return static_cast<int32_t>(offsetof(ConfigHandler_t1108969946_StaticFields, ___U3CU3Ef__switchU24map27_8)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24map27_8() const { return ___U3CU3Ef__switchU24map27_8; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24map27_8() { return &___U3CU3Ef__switchU24map27_8; }
	inline void set_U3CU3Ef__switchU24map27_8(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24map27_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map27_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map28_9() { return static_cast<int32_t>(offsetof(ConfigHandler_t1108969946_StaticFields, ___U3CU3Ef__switchU24map28_9)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24map28_9() const { return ___U3CU3Ef__switchU24map28_9; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24map28_9() { return &___U3CU3Ef__switchU24map28_9; }
	inline void set_U3CU3Ef__switchU24map28_9(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24map28_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map28_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGHANDLER_T1108969946_H
#ifndef CHANNELDATA_T1971636194_H
#define CHANNELDATA_T1971636194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ChannelData
struct  ChannelData_t1971636194  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.ChannelData::Ref
	String_t* ___Ref_0;
	// System.String System.Runtime.Remoting.ChannelData::Type
	String_t* ___Type_1;
	// System.String System.Runtime.Remoting.ChannelData::Id
	String_t* ___Id_2;
	// System.String System.Runtime.Remoting.ChannelData::DelayLoadAsClientChannel
	String_t* ___DelayLoadAsClientChannel_3;
	// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::_serverProviders
	ArrayList_t844188058 * ____serverProviders_4;
	// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::_clientProviders
	ArrayList_t844188058 * ____clientProviders_5;
	// System.Collections.Hashtable System.Runtime.Remoting.ChannelData::_customProperties
	Hashtable_t2604207785 * ____customProperties_6;

public:
	inline static int32_t get_offset_of_Ref_0() { return static_cast<int32_t>(offsetof(ChannelData_t1971636194, ___Ref_0)); }
	inline String_t* get_Ref_0() const { return ___Ref_0; }
	inline String_t** get_address_of_Ref_0() { return &___Ref_0; }
	inline void set_Ref_0(String_t* value)
	{
		___Ref_0 = value;
		Il2CppCodeGenWriteBarrier((&___Ref_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(ChannelData_t1971636194, ___Type_1)); }
	inline String_t* get_Type_1() const { return ___Type_1; }
	inline String_t** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(String_t* value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((&___Type_1), value);
	}

	inline static int32_t get_offset_of_Id_2() { return static_cast<int32_t>(offsetof(ChannelData_t1971636194, ___Id_2)); }
	inline String_t* get_Id_2() const { return ___Id_2; }
	inline String_t** get_address_of_Id_2() { return &___Id_2; }
	inline void set_Id_2(String_t* value)
	{
		___Id_2 = value;
		Il2CppCodeGenWriteBarrier((&___Id_2), value);
	}

	inline static int32_t get_offset_of_DelayLoadAsClientChannel_3() { return static_cast<int32_t>(offsetof(ChannelData_t1971636194, ___DelayLoadAsClientChannel_3)); }
	inline String_t* get_DelayLoadAsClientChannel_3() const { return ___DelayLoadAsClientChannel_3; }
	inline String_t** get_address_of_DelayLoadAsClientChannel_3() { return &___DelayLoadAsClientChannel_3; }
	inline void set_DelayLoadAsClientChannel_3(String_t* value)
	{
		___DelayLoadAsClientChannel_3 = value;
		Il2CppCodeGenWriteBarrier((&___DelayLoadAsClientChannel_3), value);
	}

	inline static int32_t get_offset_of__serverProviders_4() { return static_cast<int32_t>(offsetof(ChannelData_t1971636194, ____serverProviders_4)); }
	inline ArrayList_t844188058 * get__serverProviders_4() const { return ____serverProviders_4; }
	inline ArrayList_t844188058 ** get_address_of__serverProviders_4() { return &____serverProviders_4; }
	inline void set__serverProviders_4(ArrayList_t844188058 * value)
	{
		____serverProviders_4 = value;
		Il2CppCodeGenWriteBarrier((&____serverProviders_4), value);
	}

	inline static int32_t get_offset_of__clientProviders_5() { return static_cast<int32_t>(offsetof(ChannelData_t1971636194, ____clientProviders_5)); }
	inline ArrayList_t844188058 * get__clientProviders_5() const { return ____clientProviders_5; }
	inline ArrayList_t844188058 ** get_address_of__clientProviders_5() { return &____clientProviders_5; }
	inline void set__clientProviders_5(ArrayList_t844188058 * value)
	{
		____clientProviders_5 = value;
		Il2CppCodeGenWriteBarrier((&____clientProviders_5), value);
	}

	inline static int32_t get_offset_of__customProperties_6() { return static_cast<int32_t>(offsetof(ChannelData_t1971636194, ____customProperties_6)); }
	inline Hashtable_t2604207785 * get__customProperties_6() const { return ____customProperties_6; }
	inline Hashtable_t2604207785 ** get_address_of__customProperties_6() { return &____customProperties_6; }
	inline void set__customProperties_6(Hashtable_t2604207785 * value)
	{
		____customProperties_6 = value;
		Il2CppCodeGenWriteBarrier((&____customProperties_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELDATA_T1971636194_H
#ifndef PROVIDERDATA_T3818146511_H
#define PROVIDERDATA_T3818146511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ProviderData
struct  ProviderData_t3818146511  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.ProviderData::Ref
	String_t* ___Ref_0;
	// System.String System.Runtime.Remoting.ProviderData::Type
	String_t* ___Type_1;
	// System.String System.Runtime.Remoting.ProviderData::Id
	String_t* ___Id_2;
	// System.Collections.Hashtable System.Runtime.Remoting.ProviderData::CustomProperties
	Hashtable_t2604207785 * ___CustomProperties_3;
	// System.Collections.IList System.Runtime.Remoting.ProviderData::CustomData
	RuntimeObject* ___CustomData_4;

public:
	inline static int32_t get_offset_of_Ref_0() { return static_cast<int32_t>(offsetof(ProviderData_t3818146511, ___Ref_0)); }
	inline String_t* get_Ref_0() const { return ___Ref_0; }
	inline String_t** get_address_of_Ref_0() { return &___Ref_0; }
	inline void set_Ref_0(String_t* value)
	{
		___Ref_0 = value;
		Il2CppCodeGenWriteBarrier((&___Ref_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(ProviderData_t3818146511, ___Type_1)); }
	inline String_t* get_Type_1() const { return ___Type_1; }
	inline String_t** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(String_t* value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((&___Type_1), value);
	}

	inline static int32_t get_offset_of_Id_2() { return static_cast<int32_t>(offsetof(ProviderData_t3818146511, ___Id_2)); }
	inline String_t* get_Id_2() const { return ___Id_2; }
	inline String_t** get_address_of_Id_2() { return &___Id_2; }
	inline void set_Id_2(String_t* value)
	{
		___Id_2 = value;
		Il2CppCodeGenWriteBarrier((&___Id_2), value);
	}

	inline static int32_t get_offset_of_CustomProperties_3() { return static_cast<int32_t>(offsetof(ProviderData_t3818146511, ___CustomProperties_3)); }
	inline Hashtable_t2604207785 * get_CustomProperties_3() const { return ___CustomProperties_3; }
	inline Hashtable_t2604207785 ** get_address_of_CustomProperties_3() { return &___CustomProperties_3; }
	inline void set_CustomProperties_3(Hashtable_t2604207785 * value)
	{
		___CustomProperties_3 = value;
		Il2CppCodeGenWriteBarrier((&___CustomProperties_3), value);
	}

	inline static int32_t get_offset_of_CustomData_4() { return static_cast<int32_t>(offsetof(ProviderData_t3818146511, ___CustomData_4)); }
	inline RuntimeObject* get_CustomData_4() const { return ___CustomData_4; }
	inline RuntimeObject** get_address_of_CustomData_4() { return &___CustomData_4; }
	inline void set_CustomData_4(RuntimeObject* value)
	{
		___CustomData_4 = value;
		Il2CppCodeGenWriteBarrier((&___CustomData_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROVIDERDATA_T3818146511_H
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
#ifndef CODEGENERATOR_T1612317817_H
#define CODEGENERATOR_T1612317817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.CodeGenerator
struct  CodeGenerator_t1612317817  : public RuntimeObject
{
public:

public:
};

struct CodeGenerator_t1612317817_StaticFields
{
public:
	// System.Object System.Runtime.Serialization.Formatters.Binary.CodeGenerator::monitor
	RuntimeObject * ___monitor_0;
	// System.Reflection.Emit.ModuleBuilder System.Runtime.Serialization.Formatters.Binary.CodeGenerator::_module
	ModuleBuilder_t2281743239 * ____module_1;

public:
	inline static int32_t get_offset_of_monitor_0() { return static_cast<int32_t>(offsetof(CodeGenerator_t1612317817_StaticFields, ___monitor_0)); }
	inline RuntimeObject * get_monitor_0() const { return ___monitor_0; }
	inline RuntimeObject ** get_address_of_monitor_0() { return &___monitor_0; }
	inline void set_monitor_0(RuntimeObject * value)
	{
		___monitor_0 = value;
		Il2CppCodeGenWriteBarrier((&___monitor_0), value);
	}

	inline static int32_t get_offset_of__module_1() { return static_cast<int32_t>(offsetof(CodeGenerator_t1612317817_StaticFields, ____module_1)); }
	inline ModuleBuilder_t2281743239 * get__module_1() const { return ____module_1; }
	inline ModuleBuilder_t2281743239 ** get_address_of__module_1() { return &____module_1; }
	inline void set__module_1(ModuleBuilder_t2281743239 * value)
	{
		____module_1 = value;
		Il2CppCodeGenWriteBarrier((&____module_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEGENERATOR_T1612317817_H
#ifndef SOAPSERVICES_T3011640723_H
#define SOAPSERVICES_T3011640723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SoapServices
struct  SoapServices_t3011640723  : public RuntimeObject
{
public:

public:
};

struct SoapServices_t3011640723_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_xmlTypes
	Hashtable_t2604207785 * ____xmlTypes_0;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_xmlElements
	Hashtable_t2604207785 * ____xmlElements_1;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_soapActions
	Hashtable_t2604207785 * ____soapActions_2;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_soapActionsMethods
	Hashtable_t2604207785 * ____soapActionsMethods_3;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_typeInfos
	Hashtable_t2604207785 * ____typeInfos_4;

public:
	inline static int32_t get_offset_of__xmlTypes_0() { return static_cast<int32_t>(offsetof(SoapServices_t3011640723_StaticFields, ____xmlTypes_0)); }
	inline Hashtable_t2604207785 * get__xmlTypes_0() const { return ____xmlTypes_0; }
	inline Hashtable_t2604207785 ** get_address_of__xmlTypes_0() { return &____xmlTypes_0; }
	inline void set__xmlTypes_0(Hashtable_t2604207785 * value)
	{
		____xmlTypes_0 = value;
		Il2CppCodeGenWriteBarrier((&____xmlTypes_0), value);
	}

	inline static int32_t get_offset_of__xmlElements_1() { return static_cast<int32_t>(offsetof(SoapServices_t3011640723_StaticFields, ____xmlElements_1)); }
	inline Hashtable_t2604207785 * get__xmlElements_1() const { return ____xmlElements_1; }
	inline Hashtable_t2604207785 ** get_address_of__xmlElements_1() { return &____xmlElements_1; }
	inline void set__xmlElements_1(Hashtable_t2604207785 * value)
	{
		____xmlElements_1 = value;
		Il2CppCodeGenWriteBarrier((&____xmlElements_1), value);
	}

	inline static int32_t get_offset_of__soapActions_2() { return static_cast<int32_t>(offsetof(SoapServices_t3011640723_StaticFields, ____soapActions_2)); }
	inline Hashtable_t2604207785 * get__soapActions_2() const { return ____soapActions_2; }
	inline Hashtable_t2604207785 ** get_address_of__soapActions_2() { return &____soapActions_2; }
	inline void set__soapActions_2(Hashtable_t2604207785 * value)
	{
		____soapActions_2 = value;
		Il2CppCodeGenWriteBarrier((&____soapActions_2), value);
	}

	inline static int32_t get_offset_of__soapActionsMethods_3() { return static_cast<int32_t>(offsetof(SoapServices_t3011640723_StaticFields, ____soapActionsMethods_3)); }
	inline Hashtable_t2604207785 * get__soapActionsMethods_3() const { return ____soapActionsMethods_3; }
	inline Hashtable_t2604207785 ** get_address_of__soapActionsMethods_3() { return &____soapActionsMethods_3; }
	inline void set__soapActionsMethods_3(Hashtable_t2604207785 * value)
	{
		____soapActionsMethods_3 = value;
		Il2CppCodeGenWriteBarrier((&____soapActionsMethods_3), value);
	}

	inline static int32_t get_offset_of__typeInfos_4() { return static_cast<int32_t>(offsetof(SoapServices_t3011640723_StaticFields, ____typeInfos_4)); }
	inline Hashtable_t2604207785 * get__typeInfos_4() const { return ____typeInfos_4; }
	inline Hashtable_t2604207785 ** get_address_of__typeInfos_4() { return &____typeInfos_4; }
	inline void set__typeInfos_4(Hashtable_t2604207785 * value)
	{
		____typeInfos_4 = value;
		Il2CppCodeGenWriteBarrier((&____typeInfos_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPSERVICES_T3011640723_H
#ifndef TYPEINFO_T1062248833_H
#define TYPEINFO_T1062248833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SoapServices/TypeInfo
struct  TypeInfo_t1062248833  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices/TypeInfo::Attributes
	Hashtable_t2604207785 * ___Attributes_0;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices/TypeInfo::Elements
	Hashtable_t2604207785 * ___Elements_1;

public:
	inline static int32_t get_offset_of_Attributes_0() { return static_cast<int32_t>(offsetof(TypeInfo_t1062248833, ___Attributes_0)); }
	inline Hashtable_t2604207785 * get_Attributes_0() const { return ___Attributes_0; }
	inline Hashtable_t2604207785 ** get_address_of_Attributes_0() { return &___Attributes_0; }
	inline void set_Attributes_0(Hashtable_t2604207785 * value)
	{
		___Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Attributes_0), value);
	}

	inline static int32_t get_offset_of_Elements_1() { return static_cast<int32_t>(offsetof(TypeInfo_t1062248833, ___Elements_1)); }
	inline Hashtable_t2604207785 * get_Elements_1() const { return ___Elements_1; }
	inline Hashtable_t2604207785 ** get_address_of_Elements_1() { return &___Elements_1; }
	inline void set_Elements_1(Hashtable_t2604207785 * value)
	{
		___Elements_1 = value;
		Il2CppCodeGenWriteBarrier((&___Elements_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T1062248833_H
#ifndef TYPEENTRY_T1472761653_H
#define TYPEENTRY_T1472761653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.TypeEntry
struct  TypeEntry_t1472761653  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.TypeEntry::assembly_name
	String_t* ___assembly_name_0;
	// System.String System.Runtime.Remoting.TypeEntry::type_name
	String_t* ___type_name_1;

public:
	inline static int32_t get_offset_of_assembly_name_0() { return static_cast<int32_t>(offsetof(TypeEntry_t1472761653, ___assembly_name_0)); }
	inline String_t* get_assembly_name_0() const { return ___assembly_name_0; }
	inline String_t** get_address_of_assembly_name_0() { return &___assembly_name_0; }
	inline void set_assembly_name_0(String_t* value)
	{
		___assembly_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_name_0), value);
	}

	inline static int32_t get_offset_of_type_name_1() { return static_cast<int32_t>(offsetof(TypeEntry_t1472761653, ___type_name_1)); }
	inline String_t* get_type_name_1() const { return ___type_name_1; }
	inline String_t** get_address_of_type_name_1() { return &___type_name_1; }
	inline void set_type_name_1(String_t* value)
	{
		___type_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEENTRY_T1472761653_H
#ifndef TYPEINFO_T4128924288_H
#define TYPEINFO_T4128924288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.TypeInfo
struct  TypeInfo_t4128924288  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.TypeInfo::serverType
	String_t* ___serverType_0;
	// System.String[] System.Runtime.Remoting.TypeInfo::serverHierarchy
	StringU5BU5D_t3162382152* ___serverHierarchy_1;
	// System.String[] System.Runtime.Remoting.TypeInfo::interfacesImplemented
	StringU5BU5D_t3162382152* ___interfacesImplemented_2;

public:
	inline static int32_t get_offset_of_serverType_0() { return static_cast<int32_t>(offsetof(TypeInfo_t4128924288, ___serverType_0)); }
	inline String_t* get_serverType_0() const { return ___serverType_0; }
	inline String_t** get_address_of_serverType_0() { return &___serverType_0; }
	inline void set_serverType_0(String_t* value)
	{
		___serverType_0 = value;
		Il2CppCodeGenWriteBarrier((&___serverType_0), value);
	}

	inline static int32_t get_offset_of_serverHierarchy_1() { return static_cast<int32_t>(offsetof(TypeInfo_t4128924288, ___serverHierarchy_1)); }
	inline StringU5BU5D_t3162382152* get_serverHierarchy_1() const { return ___serverHierarchy_1; }
	inline StringU5BU5D_t3162382152** get_address_of_serverHierarchy_1() { return &___serverHierarchy_1; }
	inline void set_serverHierarchy_1(StringU5BU5D_t3162382152* value)
	{
		___serverHierarchy_1 = value;
		Il2CppCodeGenWriteBarrier((&___serverHierarchy_1), value);
	}

	inline static int32_t get_offset_of_interfacesImplemented_2() { return static_cast<int32_t>(offsetof(TypeInfo_t4128924288, ___interfacesImplemented_2)); }
	inline StringU5BU5D_t3162382152* get_interfacesImplemented_2() const { return ___interfacesImplemented_2; }
	inline StringU5BU5D_t3162382152** get_address_of_interfacesImplemented_2() { return &___interfacesImplemented_2; }
	inline void set_interfacesImplemented_2(StringU5BU5D_t3162382152* value)
	{
		___interfacesImplemented_2 = value;
		Il2CppCodeGenWriteBarrier((&___interfacesImplemented_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T4128924288_H
#ifndef OBJREFSURROGATE_T1194665622_H
#define OBJREFSURROGATE_T1194665622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ObjRefSurrogate
struct  ObjRefSurrogate_t1194665622  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJREFSURROGATE_T1194665622_H
#ifndef REMOTINGSURROGATE_T1003204781_H
#define REMOTINGSURROGATE_T1003204781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.RemotingSurrogate
struct  RemotingSurrogate_t1003204781  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGSURROGATE_T1003204781_H
#ifndef BINARYCOMMON_T3518887154_H
#define BINARYCOMMON_T3518887154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
struct  BinaryCommon_t3518887154  : public RuntimeObject
{
public:

public:
};

struct BinaryCommon_t3518887154_StaticFields
{
public:
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::BinaryHeader
	ByteU5BU5D_t2896786162* ___BinaryHeader_0;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodesToType
	TypeU5BU5D_t730564648* ____typeCodesToType_1;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodeMap
	ByteU5BU5D_t2896786162* ____typeCodeMap_2;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryCommon::UseReflectionSerialization
	bool ___UseReflectionSerialization_3;

public:
	inline static int32_t get_offset_of_BinaryHeader_0() { return static_cast<int32_t>(offsetof(BinaryCommon_t3518887154_StaticFields, ___BinaryHeader_0)); }
	inline ByteU5BU5D_t2896786162* get_BinaryHeader_0() const { return ___BinaryHeader_0; }
	inline ByteU5BU5D_t2896786162** get_address_of_BinaryHeader_0() { return &___BinaryHeader_0; }
	inline void set_BinaryHeader_0(ByteU5BU5D_t2896786162* value)
	{
		___BinaryHeader_0 = value;
		Il2CppCodeGenWriteBarrier((&___BinaryHeader_0), value);
	}

	inline static int32_t get_offset_of__typeCodesToType_1() { return static_cast<int32_t>(offsetof(BinaryCommon_t3518887154_StaticFields, ____typeCodesToType_1)); }
	inline TypeU5BU5D_t730564648* get__typeCodesToType_1() const { return ____typeCodesToType_1; }
	inline TypeU5BU5D_t730564648** get_address_of__typeCodesToType_1() { return &____typeCodesToType_1; }
	inline void set__typeCodesToType_1(TypeU5BU5D_t730564648* value)
	{
		____typeCodesToType_1 = value;
		Il2CppCodeGenWriteBarrier((&____typeCodesToType_1), value);
	}

	inline static int32_t get_offset_of__typeCodeMap_2() { return static_cast<int32_t>(offsetof(BinaryCommon_t3518887154_StaticFields, ____typeCodeMap_2)); }
	inline ByteU5BU5D_t2896786162* get__typeCodeMap_2() const { return ____typeCodeMap_2; }
	inline ByteU5BU5D_t2896786162** get_address_of__typeCodeMap_2() { return &____typeCodeMap_2; }
	inline void set__typeCodeMap_2(ByteU5BU5D_t2896786162* value)
	{
		____typeCodeMap_2 = value;
		Il2CppCodeGenWriteBarrier((&____typeCodeMap_2), value);
	}

	inline static int32_t get_offset_of_UseReflectionSerialization_3() { return static_cast<int32_t>(offsetof(BinaryCommon_t3518887154_StaticFields, ___UseReflectionSerialization_3)); }
	inline bool get_UseReflectionSerialization_3() const { return ___UseReflectionSerialization_3; }
	inline bool* get_address_of_UseReflectionSerialization_3() { return &___UseReflectionSerialization_3; }
	inline void set_UseReflectionSerialization_3(bool value)
	{
		___UseReflectionSerialization_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYCOMMON_T3518887154_H
#ifndef CLIENTCONTEXTTERMINATORSINK_T3440594275_H
#define CLIENTCONTEXTTERMINATORSINK_T3440594275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ClientContextTerminatorSink
struct  ClientContextTerminatorSink_t3440594275  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Messaging.ClientContextTerminatorSink::_context
	Context_t836690175 * ____context_0;

public:
	inline static int32_t get_offset_of__context_0() { return static_cast<int32_t>(offsetof(ClientContextTerminatorSink_t3440594275, ____context_0)); }
	inline Context_t836690175 * get__context_0() const { return ____context_0; }
	inline Context_t836690175 ** get_address_of__context_0() { return &____context_0; }
	inline void set__context_0(Context_t836690175 * value)
	{
		____context_0 = value;
		Il2CppCodeGenWriteBarrier((&____context_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTCONTEXTTERMINATORSINK_T3440594275_H
#ifndef SYNCHRONIZEDCLIENTCONTEXTSINK_T1983962132_H
#define SYNCHRONIZEDCLIENTCONTEXTSINK_T1983962132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizedClientContextSink
struct  SynchronizedClientContextSink_t1983962132  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizedClientContextSink::_next
	RuntimeObject* ____next_0;
	// System.Runtime.Remoting.Contexts.SynchronizationAttribute System.Runtime.Remoting.Contexts.SynchronizedClientContextSink::_att
	SynchronizationAttribute_t3611941991 * ____att_1;

public:
	inline static int32_t get_offset_of__next_0() { return static_cast<int32_t>(offsetof(SynchronizedClientContextSink_t1983962132, ____next_0)); }
	inline RuntimeObject* get__next_0() const { return ____next_0; }
	inline RuntimeObject** get_address_of__next_0() { return &____next_0; }
	inline void set__next_0(RuntimeObject* value)
	{
		____next_0 = value;
		Il2CppCodeGenWriteBarrier((&____next_0), value);
	}

	inline static int32_t get_offset_of__att_1() { return static_cast<int32_t>(offsetof(SynchronizedClientContextSink_t1983962132, ____att_1)); }
	inline SynchronizationAttribute_t3611941991 * get__att_1() const { return ____att_1; }
	inline SynchronizationAttribute_t3611941991 ** get_address_of__att_1() { return &____att_1; }
	inline void set__att_1(SynchronizationAttribute_t3611941991 * value)
	{
		____att_1 = value;
		Il2CppCodeGenWriteBarrier((&____att_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDCLIENTCONTEXTSINK_T1983962132_H
#ifndef DICTIONARYENUMERATOR_T2259741821_H
#define DICTIONARYENUMERATOR_T2259741821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
struct  DictionaryEnumerator_t2259741821  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.MethodDictionary System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::_methodDictionary
	MethodDictionary_t2144428769 * ____methodDictionary_0;
	// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::_hashtableEnum
	RuntimeObject* ____hashtableEnum_1;
	// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::_posMethod
	int32_t ____posMethod_2;

public:
	inline static int32_t get_offset_of__methodDictionary_0() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t2259741821, ____methodDictionary_0)); }
	inline MethodDictionary_t2144428769 * get__methodDictionary_0() const { return ____methodDictionary_0; }
	inline MethodDictionary_t2144428769 ** get_address_of__methodDictionary_0() { return &____methodDictionary_0; }
	inline void set__methodDictionary_0(MethodDictionary_t2144428769 * value)
	{
		____methodDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&____methodDictionary_0), value);
	}

	inline static int32_t get_offset_of__hashtableEnum_1() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t2259741821, ____hashtableEnum_1)); }
	inline RuntimeObject* get__hashtableEnum_1() const { return ____hashtableEnum_1; }
	inline RuntimeObject** get_address_of__hashtableEnum_1() { return &____hashtableEnum_1; }
	inline void set__hashtableEnum_1(RuntimeObject* value)
	{
		____hashtableEnum_1 = value;
		Il2CppCodeGenWriteBarrier((&____hashtableEnum_1), value);
	}

	inline static int32_t get_offset_of__posMethod_2() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t2259741821, ____posMethod_2)); }
	inline int32_t get__posMethod_2() const { return ____posMethod_2; }
	inline int32_t* get_address_of__posMethod_2() { return &____posMethod_2; }
	inline void set__posMethod_2(int32_t value)
	{
		____posMethod_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYENUMERATOR_T2259741821_H
#ifndef METHODDICTIONARY_T2144428769_H
#define METHODDICTIONARY_T2144428769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary
struct  MethodDictionary_t2144428769  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::_internalProperties
	RuntimeObject* ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MethodDictionary::_message
	RuntimeObject* ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MethodDictionary::_methodKeys
	StringU5BU5D_t3162382152* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::_ownProperties
	bool ____ownProperties_3;

public:
	inline static int32_t get_offset_of__internalProperties_0() { return static_cast<int32_t>(offsetof(MethodDictionary_t2144428769, ____internalProperties_0)); }
	inline RuntimeObject* get__internalProperties_0() const { return ____internalProperties_0; }
	inline RuntimeObject** get_address_of__internalProperties_0() { return &____internalProperties_0; }
	inline void set__internalProperties_0(RuntimeObject* value)
	{
		____internalProperties_0 = value;
		Il2CppCodeGenWriteBarrier((&____internalProperties_0), value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MethodDictionary_t2144428769, ____message_1)); }
	inline RuntimeObject* get__message_1() const { return ____message_1; }
	inline RuntimeObject** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(RuntimeObject* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((&____message_1), value);
	}

	inline static int32_t get_offset_of__methodKeys_2() { return static_cast<int32_t>(offsetof(MethodDictionary_t2144428769, ____methodKeys_2)); }
	inline StringU5BU5D_t3162382152* get__methodKeys_2() const { return ____methodKeys_2; }
	inline StringU5BU5D_t3162382152** get_address_of__methodKeys_2() { return &____methodKeys_2; }
	inline void set__methodKeys_2(StringU5BU5D_t3162382152* value)
	{
		____methodKeys_2 = value;
		Il2CppCodeGenWriteBarrier((&____methodKeys_2), value);
	}

	inline static int32_t get_offset_of__ownProperties_3() { return static_cast<int32_t>(offsetof(MethodDictionary_t2144428769, ____ownProperties_3)); }
	inline bool get__ownProperties_3() const { return ____ownProperties_3; }
	inline bool* get_address_of__ownProperties_3() { return &____ownProperties_3; }
	inline void set__ownProperties_3(bool value)
	{
		____ownProperties_3 = value;
	}
};

struct MethodDictionary_t2144428769_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodDictionary::<>f__switch$map21
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24map21_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodDictionary::<>f__switch$map22
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24map22_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map21_4() { return static_cast<int32_t>(offsetof(MethodDictionary_t2144428769_StaticFields, ___U3CU3Ef__switchU24map21_4)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24map21_4() const { return ___U3CU3Ef__switchU24map21_4; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24map21_4() { return &___U3CU3Ef__switchU24map21_4; }
	inline void set_U3CU3Ef__switchU24map21_4(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24map21_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map21_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map22_5() { return static_cast<int32_t>(offsetof(MethodDictionary_t2144428769_StaticFields, ___U3CU3Ef__switchU24map22_5)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24map22_5() const { return ___U3CU3Ef__switchU24map22_5; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24map22_5() { return &___U3CU3Ef__switchU24map22_5; }
	inline void set_U3CU3Ef__switchU24map22_5(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24map22_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map22_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODDICTIONARY_T2144428769_H
#ifndef SYNCHRONIZEDSERVERCONTEXTSINK_T33215363_H
#define SYNCHRONIZEDSERVERCONTEXTSINK_T33215363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizedServerContextSink
struct  SynchronizedServerContextSink_t33215363  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizedServerContextSink::_next
	RuntimeObject* ____next_0;
	// System.Runtime.Remoting.Contexts.SynchronizationAttribute System.Runtime.Remoting.Contexts.SynchronizedServerContextSink::_att
	SynchronizationAttribute_t3611941991 * ____att_1;

public:
	inline static int32_t get_offset_of__next_0() { return static_cast<int32_t>(offsetof(SynchronizedServerContextSink_t33215363, ____next_0)); }
	inline RuntimeObject* get__next_0() const { return ____next_0; }
	inline RuntimeObject** get_address_of__next_0() { return &____next_0; }
	inline void set__next_0(RuntimeObject* value)
	{
		____next_0 = value;
		Il2CppCodeGenWriteBarrier((&____next_0), value);
	}

	inline static int32_t get_offset_of__att_1() { return static_cast<int32_t>(offsetof(SynchronizedServerContextSink_t33215363, ____att_1)); }
	inline SynchronizationAttribute_t3611941991 * get__att_1() const { return ____att_1; }
	inline SynchronizationAttribute_t3611941991 ** get_address_of__att_1() { return &____att_1; }
	inline void set__att_1(SynchronizationAttribute_t3611941991 * value)
	{
		____att_1 = value;
		Il2CppCodeGenWriteBarrier((&____att_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDSERVERCONTEXTSINK_T33215363_H
#ifndef LEASEMANAGER_T2028314007_H
#define LEASEMANAGER_T2028314007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LeaseManager
struct  LeaseManager_t2028314007  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Lifetime.LeaseManager::_objects
	ArrayList_t844188058 * ____objects_0;
	// System.Threading.Timer System.Runtime.Remoting.Lifetime.LeaseManager::_timer
	Timer_t4217116598 * ____timer_1;

public:
	inline static int32_t get_offset_of__objects_0() { return static_cast<int32_t>(offsetof(LeaseManager_t2028314007, ____objects_0)); }
	inline ArrayList_t844188058 * get__objects_0() const { return ____objects_0; }
	inline ArrayList_t844188058 ** get_address_of__objects_0() { return &____objects_0; }
	inline void set__objects_0(ArrayList_t844188058 * value)
	{
		____objects_0 = value;
		Il2CppCodeGenWriteBarrier((&____objects_0), value);
	}

	inline static int32_t get_offset_of__timer_1() { return static_cast<int32_t>(offsetof(LeaseManager_t2028314007, ____timer_1)); }
	inline Timer_t4217116598 * get__timer_1() const { return ____timer_1; }
	inline Timer_t4217116598 ** get_address_of__timer_1() { return &____timer_1; }
	inline void set__timer_1(Timer_t4217116598 * value)
	{
		____timer_1 = value;
		Il2CppCodeGenWriteBarrier((&____timer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEASEMANAGER_T2028314007_H
#ifndef METHODCALL_T2700394733_H
#define METHODCALL_T2700394733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodCall
struct  MethodCall_t2700394733  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_uri
	String_t* ____uri_0;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_typeName
	String_t* ____typeName_1;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_methodName
	String_t* ____methodName_2;
	// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::_args
	ObjectU5BU5D_t2392277051* ____args_3;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_methodSignature
	TypeU5BU5D_t730564648* ____methodSignature_4;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::_methodBase
	MethodBase_t809716788 * ____methodBase_5;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::_callContext
	LogicalCallContext_t2002431052 * ____callContext_6;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_genericArguments
	TypeU5BU5D_t730564648* ____genericArguments_7;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::ExternalProperties
	RuntimeObject* ___ExternalProperties_8;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::InternalProperties
	RuntimeObject* ___InternalProperties_9;

public:
	inline static int32_t get_offset_of__uri_0() { return static_cast<int32_t>(offsetof(MethodCall_t2700394733, ____uri_0)); }
	inline String_t* get__uri_0() const { return ____uri_0; }
	inline String_t** get_address_of__uri_0() { return &____uri_0; }
	inline void set__uri_0(String_t* value)
	{
		____uri_0 = value;
		Il2CppCodeGenWriteBarrier((&____uri_0), value);
	}

	inline static int32_t get_offset_of__typeName_1() { return static_cast<int32_t>(offsetof(MethodCall_t2700394733, ____typeName_1)); }
	inline String_t* get__typeName_1() const { return ____typeName_1; }
	inline String_t** get_address_of__typeName_1() { return &____typeName_1; }
	inline void set__typeName_1(String_t* value)
	{
		____typeName_1 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_1), value);
	}

	inline static int32_t get_offset_of__methodName_2() { return static_cast<int32_t>(offsetof(MethodCall_t2700394733, ____methodName_2)); }
	inline String_t* get__methodName_2() const { return ____methodName_2; }
	inline String_t** get_address_of__methodName_2() { return &____methodName_2; }
	inline void set__methodName_2(String_t* value)
	{
		____methodName_2 = value;
		Il2CppCodeGenWriteBarrier((&____methodName_2), value);
	}

	inline static int32_t get_offset_of__args_3() { return static_cast<int32_t>(offsetof(MethodCall_t2700394733, ____args_3)); }
	inline ObjectU5BU5D_t2392277051* get__args_3() const { return ____args_3; }
	inline ObjectU5BU5D_t2392277051** get_address_of__args_3() { return &____args_3; }
	inline void set__args_3(ObjectU5BU5D_t2392277051* value)
	{
		____args_3 = value;
		Il2CppCodeGenWriteBarrier((&____args_3), value);
	}

	inline static int32_t get_offset_of__methodSignature_4() { return static_cast<int32_t>(offsetof(MethodCall_t2700394733, ____methodSignature_4)); }
	inline TypeU5BU5D_t730564648* get__methodSignature_4() const { return ____methodSignature_4; }
	inline TypeU5BU5D_t730564648** get_address_of__methodSignature_4() { return &____methodSignature_4; }
	inline void set__methodSignature_4(TypeU5BU5D_t730564648* value)
	{
		____methodSignature_4 = value;
		Il2CppCodeGenWriteBarrier((&____methodSignature_4), value);
	}

	inline static int32_t get_offset_of__methodBase_5() { return static_cast<int32_t>(offsetof(MethodCall_t2700394733, ____methodBase_5)); }
	inline MethodBase_t809716788 * get__methodBase_5() const { return ____methodBase_5; }
	inline MethodBase_t809716788 ** get_address_of__methodBase_5() { return &____methodBase_5; }
	inline void set__methodBase_5(MethodBase_t809716788 * value)
	{
		____methodBase_5 = value;
		Il2CppCodeGenWriteBarrier((&____methodBase_5), value);
	}

	inline static int32_t get_offset_of__callContext_6() { return static_cast<int32_t>(offsetof(MethodCall_t2700394733, ____callContext_6)); }
	inline LogicalCallContext_t2002431052 * get__callContext_6() const { return ____callContext_6; }
	inline LogicalCallContext_t2002431052 ** get_address_of__callContext_6() { return &____callContext_6; }
	inline void set__callContext_6(LogicalCallContext_t2002431052 * value)
	{
		____callContext_6 = value;
		Il2CppCodeGenWriteBarrier((&____callContext_6), value);
	}

	inline static int32_t get_offset_of__genericArguments_7() { return static_cast<int32_t>(offsetof(MethodCall_t2700394733, ____genericArguments_7)); }
	inline TypeU5BU5D_t730564648* get__genericArguments_7() const { return ____genericArguments_7; }
	inline TypeU5BU5D_t730564648** get_address_of__genericArguments_7() { return &____genericArguments_7; }
	inline void set__genericArguments_7(TypeU5BU5D_t730564648* value)
	{
		____genericArguments_7 = value;
		Il2CppCodeGenWriteBarrier((&____genericArguments_7), value);
	}

	inline static int32_t get_offset_of_ExternalProperties_8() { return static_cast<int32_t>(offsetof(MethodCall_t2700394733, ___ExternalProperties_8)); }
	inline RuntimeObject* get_ExternalProperties_8() const { return ___ExternalProperties_8; }
	inline RuntimeObject** get_address_of_ExternalProperties_8() { return &___ExternalProperties_8; }
	inline void set_ExternalProperties_8(RuntimeObject* value)
	{
		___ExternalProperties_8 = value;
		Il2CppCodeGenWriteBarrier((&___ExternalProperties_8), value);
	}

	inline static int32_t get_offset_of_InternalProperties_9() { return static_cast<int32_t>(offsetof(MethodCall_t2700394733, ___InternalProperties_9)); }
	inline RuntimeObject* get_InternalProperties_9() const { return ___InternalProperties_9; }
	inline RuntimeObject** get_address_of_InternalProperties_9() { return &___InternalProperties_9; }
	inline void set_InternalProperties_9(RuntimeObject* value)
	{
		___InternalProperties_9 = value;
		Il2CppCodeGenWriteBarrier((&___InternalProperties_9), value);
	}
};

struct MethodCall_t2700394733_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodCall::<>f__switch$map1F
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24map1F_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1F_10() { return static_cast<int32_t>(offsetof(MethodCall_t2700394733_StaticFields, ___U3CU3Ef__switchU24map1F_10)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24map1F_10() const { return ___U3CU3Ef__switchU24map1F_10; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24map1F_10() { return &___U3CU3Ef__switchU24map1F_10; }
	inline void set_U3CU3Ef__switchU24map1F_10(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24map1F_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1F_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALL_T2700394733_H
#ifndef ARGINFO_T175167629_H
#define ARGINFO_T175167629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ArgInfo
struct  ArgInfo_t175167629  : public RuntimeObject
{
public:
	// System.Int32[] System.Runtime.Remoting.Messaging.ArgInfo::_paramMap
	Int32U5BU5D_t3325461767* ____paramMap_0;
	// System.Int32 System.Runtime.Remoting.Messaging.ArgInfo::_inoutArgCount
	int32_t ____inoutArgCount_1;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ArgInfo::_method
	MethodBase_t809716788 * ____method_2;

public:
	inline static int32_t get_offset_of__paramMap_0() { return static_cast<int32_t>(offsetof(ArgInfo_t175167629, ____paramMap_0)); }
	inline Int32U5BU5D_t3325461767* get__paramMap_0() const { return ____paramMap_0; }
	inline Int32U5BU5D_t3325461767** get_address_of__paramMap_0() { return &____paramMap_0; }
	inline void set__paramMap_0(Int32U5BU5D_t3325461767* value)
	{
		____paramMap_0 = value;
		Il2CppCodeGenWriteBarrier((&____paramMap_0), value);
	}

	inline static int32_t get_offset_of__inoutArgCount_1() { return static_cast<int32_t>(offsetof(ArgInfo_t175167629, ____inoutArgCount_1)); }
	inline int32_t get__inoutArgCount_1() const { return ____inoutArgCount_1; }
	inline int32_t* get_address_of__inoutArgCount_1() { return &____inoutArgCount_1; }
	inline void set__inoutArgCount_1(int32_t value)
	{
		____inoutArgCount_1 = value;
	}

	inline static int32_t get_offset_of__method_2() { return static_cast<int32_t>(offsetof(ArgInfo_t175167629, ____method_2)); }
	inline MethodBase_t809716788 * get__method_2() const { return ____method_2; }
	inline MethodBase_t809716788 ** get_address_of__method_2() { return &____method_2; }
	inline void set__method_2(MethodBase_t809716788 * value)
	{
		____method_2 = value;
		Il2CppCodeGenWriteBarrier((&____method_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGINFO_T175167629_H
#ifndef ENVOYTERMINATORSINK_T3979210013_H
#define ENVOYTERMINATORSINK_T3979210013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
struct  EnvoyTerminatorSink_t3979210013  : public RuntimeObject
{
public:

public:
};

struct EnvoyTerminatorSink_t3979210013_StaticFields
{
public:
	// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::Instance
	EnvoyTerminatorSink_t3979210013 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(EnvoyTerminatorSink_t3979210013_StaticFields, ___Instance_0)); }
	inline EnvoyTerminatorSink_t3979210013 * get_Instance_0() const { return ___Instance_0; }
	inline EnvoyTerminatorSink_t3979210013 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(EnvoyTerminatorSink_t3979210013 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVOYTERMINATORSINK_T3979210013_H
#ifndef LEASESINK_T1787498687_H
#define LEASESINK_T1787498687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LeaseSink
struct  LeaseSink_t1787498687  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Lifetime.LeaseSink::_nextSink
	RuntimeObject* ____nextSink_0;

public:
	inline static int32_t get_offset_of__nextSink_0() { return static_cast<int32_t>(offsetof(LeaseSink_t1787498687, ____nextSink_0)); }
	inline RuntimeObject* get__nextSink_0() const { return ____nextSink_0; }
	inline RuntimeObject** get_address_of__nextSink_0() { return &____nextSink_0; }
	inline void set__nextSink_0(RuntimeObject* value)
	{
		____nextSink_0 = value;
		Il2CppCodeGenWriteBarrier((&____nextSink_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEASESINK_T1787498687_H
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
#ifndef CALLCONTEXTREMOTINGDATA_T2000558446_H
#define CALLCONTEXTREMOTINGDATA_T2000558446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.CallContextRemotingData
struct  CallContextRemotingData_t2000558446  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Messaging.CallContextRemotingData::_logicalCallID
	String_t* ____logicalCallID_0;

public:
	inline static int32_t get_offset_of__logicalCallID_0() { return static_cast<int32_t>(offsetof(CallContextRemotingData_t2000558446, ____logicalCallID_0)); }
	inline String_t* get__logicalCallID_0() const { return ____logicalCallID_0; }
	inline String_t** get_address_of__logicalCallID_0() { return &____logicalCallID_0; }
	inline void set__logicalCallID_0(String_t* value)
	{
		____logicalCallID_0 = value;
		Il2CppCodeGenWriteBarrier((&____logicalCallID_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLCONTEXTREMOTINGDATA_T2000558446_H
#ifndef LOGICALCALLCONTEXT_T2002431052_H
#define LOGICALCALLCONTEXT_T2002431052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.LogicalCallContext
struct  LogicalCallContext_t2002431052  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.Messaging.LogicalCallContext::_data
	Hashtable_t2604207785 * ____data_0;
	// System.Runtime.Remoting.Messaging.CallContextRemotingData System.Runtime.Remoting.Messaging.LogicalCallContext::_remotingData
	CallContextRemotingData_t2000558446 * ____remotingData_1;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(LogicalCallContext_t2002431052, ____data_0)); }
	inline Hashtable_t2604207785 * get__data_0() const { return ____data_0; }
	inline Hashtable_t2604207785 ** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(Hashtable_t2604207785 * value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}

	inline static int32_t get_offset_of__remotingData_1() { return static_cast<int32_t>(offsetof(LogicalCallContext_t2002431052, ____remotingData_1)); }
	inline CallContextRemotingData_t2000558446 * get__remotingData_1() const { return ____remotingData_1; }
	inline CallContextRemotingData_t2000558446 ** get_address_of__remotingData_1() { return &____remotingData_1; }
	inline void set__remotingData_1(CallContextRemotingData_t2000558446 * value)
	{
		____remotingData_1 = value;
		Il2CppCodeGenWriteBarrier((&____remotingData_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGICALCALLCONTEXT_T2002431052_H
#ifndef HEADER_T1083447172_H
#define HEADER_T1083447172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.Header
struct  Header_t1083447172  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Messaging.Header::HeaderNamespace
	String_t* ___HeaderNamespace_0;
	// System.Boolean System.Runtime.Remoting.Messaging.Header::MustUnderstand
	bool ___MustUnderstand_1;
	// System.String System.Runtime.Remoting.Messaging.Header::Name
	String_t* ___Name_2;
	// System.Object System.Runtime.Remoting.Messaging.Header::Value
	RuntimeObject * ___Value_3;

public:
	inline static int32_t get_offset_of_HeaderNamespace_0() { return static_cast<int32_t>(offsetof(Header_t1083447172, ___HeaderNamespace_0)); }
	inline String_t* get_HeaderNamespace_0() const { return ___HeaderNamespace_0; }
	inline String_t** get_address_of_HeaderNamespace_0() { return &___HeaderNamespace_0; }
	inline void set_HeaderNamespace_0(String_t* value)
	{
		___HeaderNamespace_0 = value;
		Il2CppCodeGenWriteBarrier((&___HeaderNamespace_0), value);
	}

	inline static int32_t get_offset_of_MustUnderstand_1() { return static_cast<int32_t>(offsetof(Header_t1083447172, ___MustUnderstand_1)); }
	inline bool get_MustUnderstand_1() const { return ___MustUnderstand_1; }
	inline bool* get_address_of_MustUnderstand_1() { return &___MustUnderstand_1; }
	inline void set_MustUnderstand_1(bool value)
	{
		___MustUnderstand_1 = value;
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(Header_t1083447172, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___Name_2), value);
	}

	inline static int32_t get_offset_of_Value_3() { return static_cast<int32_t>(offsetof(Header_t1083447172, ___Value_3)); }
	inline RuntimeObject * get_Value_3() const { return ___Value_3; }
	inline RuntimeObject ** get_address_of_Value_3() { return &___Value_3; }
	inline void set_Value_3(RuntimeObject * value)
	{
		___Value_3 = value;
		Il2CppCodeGenWriteBarrier((&___Value_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADER_T1083447172_H
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
#ifndef SERVERIDENTITY_T2872288717_H
#define SERVERIDENTITY_T2872288717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ServerIdentity
struct  ServerIdentity_t2872288717  : public Identity_t3398186979
{
public:
	// System.Type System.Runtime.Remoting.ServerIdentity::_objectType
	Type_t * ____objectType_7;
	// System.MarshalByRefObject System.Runtime.Remoting.ServerIdentity::_serverObject
	MarshalByRefObject_t1236449280 * ____serverObject_8;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.ServerIdentity::_serverSink
	RuntimeObject* ____serverSink_9;
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.ServerIdentity::_context
	Context_t836690175 * ____context_10;
	// System.Runtime.Remoting.Lifetime.Lease System.Runtime.Remoting.ServerIdentity::_lease
	Lease_t3233299325 * ____lease_11;

public:
	inline static int32_t get_offset_of__objectType_7() { return static_cast<int32_t>(offsetof(ServerIdentity_t2872288717, ____objectType_7)); }
	inline Type_t * get__objectType_7() const { return ____objectType_7; }
	inline Type_t ** get_address_of__objectType_7() { return &____objectType_7; }
	inline void set__objectType_7(Type_t * value)
	{
		____objectType_7 = value;
		Il2CppCodeGenWriteBarrier((&____objectType_7), value);
	}

	inline static int32_t get_offset_of__serverObject_8() { return static_cast<int32_t>(offsetof(ServerIdentity_t2872288717, ____serverObject_8)); }
	inline MarshalByRefObject_t1236449280 * get__serverObject_8() const { return ____serverObject_8; }
	inline MarshalByRefObject_t1236449280 ** get_address_of__serverObject_8() { return &____serverObject_8; }
	inline void set__serverObject_8(MarshalByRefObject_t1236449280 * value)
	{
		____serverObject_8 = value;
		Il2CppCodeGenWriteBarrier((&____serverObject_8), value);
	}

	inline static int32_t get_offset_of__serverSink_9() { return static_cast<int32_t>(offsetof(ServerIdentity_t2872288717, ____serverSink_9)); }
	inline RuntimeObject* get__serverSink_9() const { return ____serverSink_9; }
	inline RuntimeObject** get_address_of__serverSink_9() { return &____serverSink_9; }
	inline void set__serverSink_9(RuntimeObject* value)
	{
		____serverSink_9 = value;
		Il2CppCodeGenWriteBarrier((&____serverSink_9), value);
	}

	inline static int32_t get_offset_of__context_10() { return static_cast<int32_t>(offsetof(ServerIdentity_t2872288717, ____context_10)); }
	inline Context_t836690175 * get__context_10() const { return ____context_10; }
	inline Context_t836690175 ** get_address_of__context_10() { return &____context_10; }
	inline void set__context_10(Context_t836690175 * value)
	{
		____context_10 = value;
		Il2CppCodeGenWriteBarrier((&____context_10), value);
	}

	inline static int32_t get_offset_of__lease_11() { return static_cast<int32_t>(offsetof(ServerIdentity_t2872288717, ____lease_11)); }
	inline Lease_t3233299325 * get__lease_11() const { return ____lease_11; }
	inline Lease_t3233299325 ** get_address_of__lease_11() { return &____lease_11; }
	inline void set__lease_11(Lease_t3233299325 * value)
	{
		____lease_11 = value;
		Il2CppCodeGenWriteBarrier((&____lease_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERIDENTITY_T2872288717_H
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
#ifndef WELLKNOWNCLIENTTYPEENTRY_T3654590287_H
#define WELLKNOWNCLIENTTYPEENTRY_T3654590287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownClientTypeEntry
struct  WellKnownClientTypeEntry_t3654590287  : public TypeEntry_t1472761653
{
public:
	// System.Type System.Runtime.Remoting.WellKnownClientTypeEntry::obj_type
	Type_t * ___obj_type_2;
	// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::obj_url
	String_t* ___obj_url_3;
	// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::app_url
	String_t* ___app_url_4;

public:
	inline static int32_t get_offset_of_obj_type_2() { return static_cast<int32_t>(offsetof(WellKnownClientTypeEntry_t3654590287, ___obj_type_2)); }
	inline Type_t * get_obj_type_2() const { return ___obj_type_2; }
	inline Type_t ** get_address_of_obj_type_2() { return &___obj_type_2; }
	inline void set_obj_type_2(Type_t * value)
	{
		___obj_type_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_2), value);
	}

	inline static int32_t get_offset_of_obj_url_3() { return static_cast<int32_t>(offsetof(WellKnownClientTypeEntry_t3654590287, ___obj_url_3)); }
	inline String_t* get_obj_url_3() const { return ___obj_url_3; }
	inline String_t** get_address_of_obj_url_3() { return &___obj_url_3; }
	inline void set_obj_url_3(String_t* value)
	{
		___obj_url_3 = value;
		Il2CppCodeGenWriteBarrier((&___obj_url_3), value);
	}

	inline static int32_t get_offset_of_app_url_4() { return static_cast<int32_t>(offsetof(WellKnownClientTypeEntry_t3654590287, ___app_url_4)); }
	inline String_t* get_app_url_4() const { return ___app_url_4; }
	inline String_t** get_address_of_app_url_4() { return &___app_url_4; }
	inline void set_app_url_4(String_t* value)
	{
		___app_url_4 = value;
		Il2CppCodeGenWriteBarrier((&___app_url_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WELLKNOWNCLIENTTYPEENTRY_T3654590287_H
#ifndef FORMATTERDATA_T557963947_H
#define FORMATTERDATA_T557963947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.FormatterData
struct  FormatterData_t557963947  : public ProviderData_t3818146511
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERDATA_T557963947_H
#ifndef CONSTRUCTIONCALL_T3573799552_H
#define CONSTRUCTIONCALL_T3573799552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ConstructionCall
struct  ConstructionCall_t3573799552  : public MethodCall_t2700394733
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::_activator
	RuntimeObject* ____activator_11;
	// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::_activationAttributes
	ObjectU5BU5D_t2392277051* ____activationAttributes_12;
	// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::_contextProperties
	RuntimeObject* ____contextProperties_13;
	// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::_activationType
	Type_t * ____activationType_14;
	// System.String System.Runtime.Remoting.Messaging.ConstructionCall::_activationTypeName
	String_t* ____activationTypeName_15;
	// System.Boolean System.Runtime.Remoting.Messaging.ConstructionCall::_isContextOk
	bool ____isContextOk_16;

public:
	inline static int32_t get_offset_of__activator_11() { return static_cast<int32_t>(offsetof(ConstructionCall_t3573799552, ____activator_11)); }
	inline RuntimeObject* get__activator_11() const { return ____activator_11; }
	inline RuntimeObject** get_address_of__activator_11() { return &____activator_11; }
	inline void set__activator_11(RuntimeObject* value)
	{
		____activator_11 = value;
		Il2CppCodeGenWriteBarrier((&____activator_11), value);
	}

	inline static int32_t get_offset_of__activationAttributes_12() { return static_cast<int32_t>(offsetof(ConstructionCall_t3573799552, ____activationAttributes_12)); }
	inline ObjectU5BU5D_t2392277051* get__activationAttributes_12() const { return ____activationAttributes_12; }
	inline ObjectU5BU5D_t2392277051** get_address_of__activationAttributes_12() { return &____activationAttributes_12; }
	inline void set__activationAttributes_12(ObjectU5BU5D_t2392277051* value)
	{
		____activationAttributes_12 = value;
		Il2CppCodeGenWriteBarrier((&____activationAttributes_12), value);
	}

	inline static int32_t get_offset_of__contextProperties_13() { return static_cast<int32_t>(offsetof(ConstructionCall_t3573799552, ____contextProperties_13)); }
	inline RuntimeObject* get__contextProperties_13() const { return ____contextProperties_13; }
	inline RuntimeObject** get_address_of__contextProperties_13() { return &____contextProperties_13; }
	inline void set__contextProperties_13(RuntimeObject* value)
	{
		____contextProperties_13 = value;
		Il2CppCodeGenWriteBarrier((&____contextProperties_13), value);
	}

	inline static int32_t get_offset_of__activationType_14() { return static_cast<int32_t>(offsetof(ConstructionCall_t3573799552, ____activationType_14)); }
	inline Type_t * get__activationType_14() const { return ____activationType_14; }
	inline Type_t ** get_address_of__activationType_14() { return &____activationType_14; }
	inline void set__activationType_14(Type_t * value)
	{
		____activationType_14 = value;
		Il2CppCodeGenWriteBarrier((&____activationType_14), value);
	}

	inline static int32_t get_offset_of__activationTypeName_15() { return static_cast<int32_t>(offsetof(ConstructionCall_t3573799552, ____activationTypeName_15)); }
	inline String_t* get__activationTypeName_15() const { return ____activationTypeName_15; }
	inline String_t** get_address_of__activationTypeName_15() { return &____activationTypeName_15; }
	inline void set__activationTypeName_15(String_t* value)
	{
		____activationTypeName_15 = value;
		Il2CppCodeGenWriteBarrier((&____activationTypeName_15), value);
	}

	inline static int32_t get_offset_of__isContextOk_16() { return static_cast<int32_t>(offsetof(ConstructionCall_t3573799552, ____isContextOk_16)); }
	inline bool get__isContextOk_16() const { return ____isContextOk_16; }
	inline bool* get_address_of__isContextOk_16() { return &____isContextOk_16; }
	inline void set__isContextOk_16(bool value)
	{
		____isContextOk_16 = value;
	}
};

struct ConstructionCall_t3573799552_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.ConstructionCall::<>f__switch$map20
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24map20_17;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map20_17() { return static_cast<int32_t>(offsetof(ConstructionCall_t3573799552_StaticFields, ___U3CU3Ef__switchU24map20_17)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24map20_17() const { return ___U3CU3Ef__switchU24map20_17; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24map20_17() { return &___U3CU3Ef__switchU24map20_17; }
	inline void set_U3CU3Ef__switchU24map20_17(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24map20_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map20_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTIONCALL_T3573799552_H
#ifndef CLIENTIDENTITY_T1791328503_H
#define CLIENTIDENTITY_T1791328503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ClientIdentity
struct  ClientIdentity_t1791328503  : public Identity_t3398186979
{
public:
	// System.WeakReference System.Runtime.Remoting.ClientIdentity::_proxyReference
	WeakReference_t2109491361 * ____proxyReference_7;

public:
	inline static int32_t get_offset_of__proxyReference_7() { return static_cast<int32_t>(offsetof(ClientIdentity_t1791328503, ____proxyReference_7)); }
	inline WeakReference_t2109491361 * get__proxyReference_7() const { return ____proxyReference_7; }
	inline WeakReference_t2109491361 ** get_address_of__proxyReference_7() { return &____proxyReference_7; }
	inline void set__proxyReference_7(WeakReference_t2109491361 * value)
	{
		____proxyReference_7 = value;
		Il2CppCodeGenWriteBarrier((&____proxyReference_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTIDENTITY_T1791328503_H
#ifndef CONSTRUCTIONCALLDICTIONARY_T2718733748_H
#define CONSTRUCTIONCALLDICTIONARY_T2718733748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
struct  ConstructionCallDictionary_t2718733748  : public MethodDictionary_t2144428769
{
public:

public:
};

struct ConstructionCallDictionary_t2718733748_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.ConstructionCallDictionary::InternalKeys
	StringU5BU5D_t3162382152* ___InternalKeys_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.ConstructionCallDictionary::<>f__switch$map23
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24map23_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.ConstructionCallDictionary::<>f__switch$map24
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24map24_8;

public:
	inline static int32_t get_offset_of_InternalKeys_6() { return static_cast<int32_t>(offsetof(ConstructionCallDictionary_t2718733748_StaticFields, ___InternalKeys_6)); }
	inline StringU5BU5D_t3162382152* get_InternalKeys_6() const { return ___InternalKeys_6; }
	inline StringU5BU5D_t3162382152** get_address_of_InternalKeys_6() { return &___InternalKeys_6; }
	inline void set_InternalKeys_6(StringU5BU5D_t3162382152* value)
	{
		___InternalKeys_6 = value;
		Il2CppCodeGenWriteBarrier((&___InternalKeys_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map23_7() { return static_cast<int32_t>(offsetof(ConstructionCallDictionary_t2718733748_StaticFields, ___U3CU3Ef__switchU24map23_7)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24map23_7() const { return ___U3CU3Ef__switchU24map23_7; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24map23_7() { return &___U3CU3Ef__switchU24map23_7; }
	inline void set_U3CU3Ef__switchU24map23_7(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24map23_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map23_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map24_8() { return static_cast<int32_t>(offsetof(ConstructionCallDictionary_t2718733748_StaticFields, ___U3CU3Ef__switchU24map24_8)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24map24_8() const { return ___U3CU3Ef__switchU24map24_8; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24map24_8() { return &___U3CU3Ef__switchU24map24_8; }
	inline void set_U3CU3Ef__switchU24map24_8(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24map24_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map24_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTIONCALLDICTIONARY_T2718733748_H
#ifndef METHODRETURNDICTIONARY_T478885572_H
#define METHODRETURNDICTIONARY_T478885572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct  MethodReturnDictionary_t478885572  : public MethodDictionary_t2144428769
{
public:

public:
};

struct MethodReturnDictionary_t478885572_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalReturnKeys
	StringU5BU5D_t3162382152* ___InternalReturnKeys_6;
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalExceptionKeys
	StringU5BU5D_t3162382152* ___InternalExceptionKeys_7;

public:
	inline static int32_t get_offset_of_InternalReturnKeys_6() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_t478885572_StaticFields, ___InternalReturnKeys_6)); }
	inline StringU5BU5D_t3162382152* get_InternalReturnKeys_6() const { return ___InternalReturnKeys_6; }
	inline StringU5BU5D_t3162382152** get_address_of_InternalReturnKeys_6() { return &___InternalReturnKeys_6; }
	inline void set_InternalReturnKeys_6(StringU5BU5D_t3162382152* value)
	{
		___InternalReturnKeys_6 = value;
		Il2CppCodeGenWriteBarrier((&___InternalReturnKeys_6), value);
	}

	inline static int32_t get_offset_of_InternalExceptionKeys_7() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_t478885572_StaticFields, ___InternalExceptionKeys_7)); }
	inline StringU5BU5D_t3162382152* get_InternalExceptionKeys_7() const { return ___InternalExceptionKeys_7; }
	inline StringU5BU5D_t3162382152** get_address_of_InternalExceptionKeys_7() { return &___InternalExceptionKeys_7; }
	inline void set_InternalExceptionKeys_7(StringU5BU5D_t3162382152* value)
	{
		___InternalExceptionKeys_7 = value;
		Il2CppCodeGenWriteBarrier((&___InternalExceptionKeys_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODRETURNDICTIONARY_T478885572_H
#ifndef METHODCALLDICTIONARY_T2725835951_H
#define METHODCALLDICTIONARY_T2725835951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodCallDictionary
struct  MethodCallDictionary_t2725835951  : public MethodDictionary_t2144428769
{
public:

public:
};

struct MethodCallDictionary_t2725835951_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MethodCallDictionary::InternalKeys
	StringU5BU5D_t3162382152* ___InternalKeys_6;

public:
	inline static int32_t get_offset_of_InternalKeys_6() { return static_cast<int32_t>(offsetof(MethodCallDictionary_t2725835951_StaticFields, ___InternalKeys_6)); }
	inline StringU5BU5D_t3162382152* get_InternalKeys_6() const { return ___InternalKeys_6; }
	inline StringU5BU5D_t3162382152** get_address_of_InternalKeys_6() { return &___InternalKeys_6; }
	inline void set_InternalKeys_6(StringU5BU5D_t3162382152* value)
	{
		___InternalKeys_6 = value;
		Il2CppCodeGenWriteBarrier((&___InternalKeys_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALLDICTIONARY_T2725835951_H
#ifndef ONEWAYATTRIBUTE_T235182317_H
#define ONEWAYATTRIBUTE_T235182317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.OneWayAttribute
struct  OneWayAttribute_t235182317  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONEWAYATTRIBUTE_T235182317_H
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
#ifndef TIMESPAN_T2423083873_H
#define TIMESPAN_T2423083873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t2423083873 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t2423083873, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t2423083873_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t2423083873  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t2423083873  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t2423083873  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t2423083873_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t2423083873  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t2423083873 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t2423083873  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t2423083873_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t2423083873  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t2423083873 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t2423083873  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t2423083873_StaticFields, ___Zero_2)); }
	inline TimeSpan_t2423083873  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t2423083873 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t2423083873  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T2423083873_H
#ifndef PROXYATTRIBUTE_T4173475434_H
#define PROXYATTRIBUTE_T4173475434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.ProxyAttribute
struct  ProxyAttribute_t4173475434  : public Attribute_t4043032847
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROXYATTRIBUTE_T4173475434_H
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
#ifndef ACTIVATEDCLIENTTYPEENTRY_T145162810_H
#define ACTIVATEDCLIENTTYPEENTRY_T145162810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ActivatedClientTypeEntry
struct  ActivatedClientTypeEntry_t145162810  : public TypeEntry_t1472761653
{
public:
	// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::applicationUrl
	String_t* ___applicationUrl_2;
	// System.Type System.Runtime.Remoting.ActivatedClientTypeEntry::obj_type
	Type_t * ___obj_type_3;

public:
	inline static int32_t get_offset_of_applicationUrl_2() { return static_cast<int32_t>(offsetof(ActivatedClientTypeEntry_t145162810, ___applicationUrl_2)); }
	inline String_t* get_applicationUrl_2() const { return ___applicationUrl_2; }
	inline String_t** get_address_of_applicationUrl_2() { return &___applicationUrl_2; }
	inline void set_applicationUrl_2(String_t* value)
	{
		___applicationUrl_2 = value;
		Il2CppCodeGenWriteBarrier((&___applicationUrl_2), value);
	}

	inline static int32_t get_offset_of_obj_type_3() { return static_cast<int32_t>(offsetof(ActivatedClientTypeEntry_t145162810, ___obj_type_3)); }
	inline Type_t * get_obj_type_3() const { return ___obj_type_3; }
	inline Type_t ** get_address_of_obj_type_3() { return &___obj_type_3; }
	inline void set_obj_type_3(Type_t * value)
	{
		___obj_type_3 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATEDCLIENTTYPEENTRY_T145162810_H
#ifndef ACTIVATEDSERVICETYPEENTRY_T872521767_H
#define ACTIVATEDSERVICETYPEENTRY_T872521767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ActivatedServiceTypeEntry
struct  ActivatedServiceTypeEntry_t872521767  : public TypeEntry_t1472761653
{
public:
	// System.Type System.Runtime.Remoting.ActivatedServiceTypeEntry::obj_type
	Type_t * ___obj_type_2;

public:
	inline static int32_t get_offset_of_obj_type_2() { return static_cast<int32_t>(offsetof(ActivatedServiceTypeEntry_t872521767, ___obj_type_2)); }
	inline Type_t * get_obj_type_2() const { return ___obj_type_2; }
	inline Type_t ** get_address_of_obj_type_2() { return &___obj_type_2; }
	inline void set_obj_type_2(Type_t * value)
	{
		___obj_type_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATEDSERVICETYPEENTRY_T872521767_H
#ifndef REMOTINGPROXY_T13090642_H
#define REMOTINGPROXY_T13090642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.RemotingProxy
struct  RemotingProxy_t13090642  : public RealProxy_t3254981993
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Proxies.RemotingProxy::_sink
	RuntimeObject* ____sink_7;
	// System.Boolean System.Runtime.Remoting.Proxies.RemotingProxy::_hasEnvoySink
	bool ____hasEnvoySink_8;
	// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Proxies.RemotingProxy::_ctorCall
	ConstructionCall_t3573799552 * ____ctorCall_9;

public:
	inline static int32_t get_offset_of__sink_7() { return static_cast<int32_t>(offsetof(RemotingProxy_t13090642, ____sink_7)); }
	inline RuntimeObject* get__sink_7() const { return ____sink_7; }
	inline RuntimeObject** get_address_of__sink_7() { return &____sink_7; }
	inline void set__sink_7(RuntimeObject* value)
	{
		____sink_7 = value;
		Il2CppCodeGenWriteBarrier((&____sink_7), value);
	}

	inline static int32_t get_offset_of__hasEnvoySink_8() { return static_cast<int32_t>(offsetof(RemotingProxy_t13090642, ____hasEnvoySink_8)); }
	inline bool get__hasEnvoySink_8() const { return ____hasEnvoySink_8; }
	inline bool* get_address_of__hasEnvoySink_8() { return &____hasEnvoySink_8; }
	inline void set__hasEnvoySink_8(bool value)
	{
		____hasEnvoySink_8 = value;
	}

	inline static int32_t get_offset_of__ctorCall_9() { return static_cast<int32_t>(offsetof(RemotingProxy_t13090642, ____ctorCall_9)); }
	inline ConstructionCall_t3573799552 * get__ctorCall_9() const { return ____ctorCall_9; }
	inline ConstructionCall_t3573799552 ** get_address_of__ctorCall_9() { return &____ctorCall_9; }
	inline void set__ctorCall_9(ConstructionCall_t3573799552 * value)
	{
		____ctorCall_9 = value;
		Il2CppCodeGenWriteBarrier((&____ctorCall_9), value);
	}
};

struct RemotingProxy_t13090642_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Runtime.Remoting.Proxies.RemotingProxy::_cache_GetTypeMethod
	MethodInfo_t * ____cache_GetTypeMethod_5;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Proxies.RemotingProxy::_cache_GetHashCodeMethod
	MethodInfo_t * ____cache_GetHashCodeMethod_6;

public:
	inline static int32_t get_offset_of__cache_GetTypeMethod_5() { return static_cast<int32_t>(offsetof(RemotingProxy_t13090642_StaticFields, ____cache_GetTypeMethod_5)); }
	inline MethodInfo_t * get__cache_GetTypeMethod_5() const { return ____cache_GetTypeMethod_5; }
	inline MethodInfo_t ** get_address_of__cache_GetTypeMethod_5() { return &____cache_GetTypeMethod_5; }
	inline void set__cache_GetTypeMethod_5(MethodInfo_t * value)
	{
		____cache_GetTypeMethod_5 = value;
		Il2CppCodeGenWriteBarrier((&____cache_GetTypeMethod_5), value);
	}

	inline static int32_t get_offset_of__cache_GetHashCodeMethod_6() { return static_cast<int32_t>(offsetof(RemotingProxy_t13090642_StaticFields, ____cache_GetHashCodeMethod_6)); }
	inline MethodInfo_t * get__cache_GetHashCodeMethod_6() const { return ____cache_GetHashCodeMethod_6; }
	inline MethodInfo_t ** get_address_of__cache_GetHashCodeMethod_6() { return &____cache_GetHashCodeMethod_6; }
	inline void set__cache_GetHashCodeMethod_6(MethodInfo_t * value)
	{
		____cache_GetHashCodeMethod_6 = value;
		Il2CppCodeGenWriteBarrier((&____cache_GetHashCodeMethod_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGPROXY_T13090642_H
#ifndef SOAPATTRIBUTE_T2378586715_H
#define SOAPATTRIBUTE_T2378586715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapAttribute
struct  SoapAttribute_t2378586715  : public Attribute_t4043032847
{
public:
	// System.Boolean System.Runtime.Remoting.Metadata.SoapAttribute::_useAttribute
	bool ____useAttribute_0;
	// System.String System.Runtime.Remoting.Metadata.SoapAttribute::ProtXmlNamespace
	String_t* ___ProtXmlNamespace_1;
	// System.Object System.Runtime.Remoting.Metadata.SoapAttribute::ReflectInfo
	RuntimeObject * ___ReflectInfo_2;

public:
	inline static int32_t get_offset_of__useAttribute_0() { return static_cast<int32_t>(offsetof(SoapAttribute_t2378586715, ____useAttribute_0)); }
	inline bool get__useAttribute_0() const { return ____useAttribute_0; }
	inline bool* get_address_of__useAttribute_0() { return &____useAttribute_0; }
	inline void set__useAttribute_0(bool value)
	{
		____useAttribute_0 = value;
	}

	inline static int32_t get_offset_of_ProtXmlNamespace_1() { return static_cast<int32_t>(offsetof(SoapAttribute_t2378586715, ___ProtXmlNamespace_1)); }
	inline String_t* get_ProtXmlNamespace_1() const { return ___ProtXmlNamespace_1; }
	inline String_t** get_address_of_ProtXmlNamespace_1() { return &___ProtXmlNamespace_1; }
	inline void set_ProtXmlNamespace_1(String_t* value)
	{
		___ProtXmlNamespace_1 = value;
		Il2CppCodeGenWriteBarrier((&___ProtXmlNamespace_1), value);
	}

	inline static int32_t get_offset_of_ReflectInfo_2() { return static_cast<int32_t>(offsetof(SoapAttribute_t2378586715, ___ReflectInfo_2)); }
	inline RuntimeObject * get_ReflectInfo_2() const { return ___ReflectInfo_2; }
	inline RuntimeObject ** get_address_of_ReflectInfo_2() { return &___ReflectInfo_2; }
	inline void set_ReflectInfo_2(RuntimeObject * value)
	{
		___ReflectInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___ReflectInfo_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPATTRIBUTE_T2378586715_H
#ifndef TYPEFILTERLEVEL_T2031632874_H
#define TYPEFILTERLEVEL_T2031632874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.TypeFilterLevel
struct  TypeFilterLevel_t2031632874 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.TypeFilterLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeFilterLevel_t2031632874, ___value___1)); }
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
#endif // TYPEFILTERLEVEL_T2031632874_H
#ifndef FORMATTERTYPESTYLE_T1996266268_H
#define FORMATTERTYPESTYLE_T1996266268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct  FormatterTypeStyle_t1996266268 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_t1996266268, ___value___1)); }
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
#endif // FORMATTERTYPESTYLE_T1996266268_H
#ifndef TYPETAG_T1597460466_H
#define TYPETAG_T1597460466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.TypeTag
struct  TypeTag_t1597460466 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.TypeTag::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeTag_t1597460466, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPETAG_T1597460466_H
#ifndef RETURNTYPETAG_T4203705022_H
#define RETURNTYPETAG_T4203705022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag
struct  ReturnTypeTag_t4203705022 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReturnTypeTag_t4203705022, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RETURNTYPETAG_T4203705022_H
#ifndef DATETIMEKIND_T1678210009_H
#define DATETIMEKIND_T1678210009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t1678210009 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t1678210009, ___value___1)); }
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
#endif // DATETIMEKIND_T1678210009_H
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
#ifndef FORMATTERASSEMBLYSTYLE_T2520967006_H
#define FORMATTERASSEMBLYSTYLE_T2520967006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_t2520967006 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t2520967006, ___value___1)); }
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
#endif // FORMATTERASSEMBLYSTYLE_T2520967006_H
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
#ifndef METHODFLAGS_T1419404466_H
#define METHODFLAGS_T1419404466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MethodFlags
struct  MethodFlags_t1419404466 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.MethodFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodFlags_t1419404466, ___value___1)); }
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
#endif // METHODFLAGS_T1419404466_H
#ifndef SYNCHRONIZATIONATTRIBUTE_T3611941991_H
#define SYNCHRONIZATIONATTRIBUTE_T3611941991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct  SynchronizationAttribute_t3611941991  : public ContextAttribute_t2851210059
{
public:
	// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::_bReEntrant
	bool ____bReEntrant_1;
	// System.Int32 System.Runtime.Remoting.Contexts.SynchronizationAttribute::_flavor
	int32_t ____flavor_2;
	// System.Int32 System.Runtime.Remoting.Contexts.SynchronizationAttribute::_lockCount
	int32_t ____lockCount_3;
	// System.Threading.Mutex System.Runtime.Remoting.Contexts.SynchronizationAttribute::_mutex
	Mutex_t369786240 * ____mutex_4;
	// System.Threading.Thread System.Runtime.Remoting.Contexts.SynchronizationAttribute::_ownerThread
	Thread_t4168895802 * ____ownerThread_5;

public:
	inline static int32_t get_offset_of__bReEntrant_1() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t3611941991, ____bReEntrant_1)); }
	inline bool get__bReEntrant_1() const { return ____bReEntrant_1; }
	inline bool* get_address_of__bReEntrant_1() { return &____bReEntrant_1; }
	inline void set__bReEntrant_1(bool value)
	{
		____bReEntrant_1 = value;
	}

	inline static int32_t get_offset_of__flavor_2() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t3611941991, ____flavor_2)); }
	inline int32_t get__flavor_2() const { return ____flavor_2; }
	inline int32_t* get_address_of__flavor_2() { return &____flavor_2; }
	inline void set__flavor_2(int32_t value)
	{
		____flavor_2 = value;
	}

	inline static int32_t get_offset_of__lockCount_3() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t3611941991, ____lockCount_3)); }
	inline int32_t get__lockCount_3() const { return ____lockCount_3; }
	inline int32_t* get_address_of__lockCount_3() { return &____lockCount_3; }
	inline void set__lockCount_3(int32_t value)
	{
		____lockCount_3 = value;
	}

	inline static int32_t get_offset_of__mutex_4() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t3611941991, ____mutex_4)); }
	inline Mutex_t369786240 * get__mutex_4() const { return ____mutex_4; }
	inline Mutex_t369786240 ** get_address_of__mutex_4() { return &____mutex_4; }
	inline void set__mutex_4(Mutex_t369786240 * value)
	{
		____mutex_4 = value;
		Il2CppCodeGenWriteBarrier((&____mutex_4), value);
	}

	inline static int32_t get_offset_of__ownerThread_5() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t3611941991, ____ownerThread_5)); }
	inline Thread_t4168895802 * get__ownerThread_5() const { return ____ownerThread_5; }
	inline Thread_t4168895802 ** get_address_of__ownerThread_5() { return &____ownerThread_5; }
	inline void set__ownerThread_5(Thread_t4168895802 * value)
	{
		____ownerThread_5 = value;
		Il2CppCodeGenWriteBarrier((&____ownerThread_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONATTRIBUTE_T3611941991_H
#ifndef SOAPMETHODATTRIBUTE_T2266268136_H
#define SOAPMETHODATTRIBUTE_T2266268136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapMethodAttribute
struct  SoapMethodAttribute_t2266268136  : public SoapAttribute_t2378586715
{
public:
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_responseElement
	String_t* ____responseElement_3;
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_responseNamespace
	String_t* ____responseNamespace_4;
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_returnElement
	String_t* ____returnElement_5;
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_soapAction
	String_t* ____soapAction_6;
	// System.Boolean System.Runtime.Remoting.Metadata.SoapMethodAttribute::_useAttribute
	bool ____useAttribute_7;
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_namespace
	String_t* ____namespace_8;

public:
	inline static int32_t get_offset_of__responseElement_3() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t2266268136, ____responseElement_3)); }
	inline String_t* get__responseElement_3() const { return ____responseElement_3; }
	inline String_t** get_address_of__responseElement_3() { return &____responseElement_3; }
	inline void set__responseElement_3(String_t* value)
	{
		____responseElement_3 = value;
		Il2CppCodeGenWriteBarrier((&____responseElement_3), value);
	}

	inline static int32_t get_offset_of__responseNamespace_4() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t2266268136, ____responseNamespace_4)); }
	inline String_t* get__responseNamespace_4() const { return ____responseNamespace_4; }
	inline String_t** get_address_of__responseNamespace_4() { return &____responseNamespace_4; }
	inline void set__responseNamespace_4(String_t* value)
	{
		____responseNamespace_4 = value;
		Il2CppCodeGenWriteBarrier((&____responseNamespace_4), value);
	}

	inline static int32_t get_offset_of__returnElement_5() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t2266268136, ____returnElement_5)); }
	inline String_t* get__returnElement_5() const { return ____returnElement_5; }
	inline String_t** get_address_of__returnElement_5() { return &____returnElement_5; }
	inline void set__returnElement_5(String_t* value)
	{
		____returnElement_5 = value;
		Il2CppCodeGenWriteBarrier((&____returnElement_5), value);
	}

	inline static int32_t get_offset_of__soapAction_6() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t2266268136, ____soapAction_6)); }
	inline String_t* get__soapAction_6() const { return ____soapAction_6; }
	inline String_t** get_address_of__soapAction_6() { return &____soapAction_6; }
	inline void set__soapAction_6(String_t* value)
	{
		____soapAction_6 = value;
		Il2CppCodeGenWriteBarrier((&____soapAction_6), value);
	}

	inline static int32_t get_offset_of__useAttribute_7() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t2266268136, ____useAttribute_7)); }
	inline bool get__useAttribute_7() const { return ____useAttribute_7; }
	inline bool* get_address_of__useAttribute_7() { return &____useAttribute_7; }
	inline void set__useAttribute_7(bool value)
	{
		____useAttribute_7 = value;
	}

	inline static int32_t get_offset_of__namespace_8() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t2266268136, ____namespace_8)); }
	inline String_t* get__namespace_8() const { return ____namespace_8; }
	inline String_t** get_address_of__namespace_8() { return &____namespace_8; }
	inline void set__namespace_8(String_t* value)
	{
		____namespace_8 = value;
		Il2CppCodeGenWriteBarrier((&____namespace_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPMETHODATTRIBUTE_T2266268136_H
#ifndef LEASESTATE_T2714780545_H
#define LEASESTATE_T2714780545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LeaseState
struct  LeaseState_t2714780545 
{
public:
	// System.Int32 System.Runtime.Remoting.Lifetime.LeaseState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LeaseState_t2714780545, ___value___1)); }
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
#endif // LEASESTATE_T2714780545_H
#ifndef LIFETIMESERVICES_T2289822009_H
#define LIFETIMESERVICES_T2289822009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LifetimeServices
struct  LifetimeServices_t2289822009  : public RuntimeObject
{
public:

public:
};

struct LifetimeServices_t2289822009_StaticFields
{
public:
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseManagerPollTime
	TimeSpan_t2423083873  ____leaseManagerPollTime_0;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseTime
	TimeSpan_t2423083873  ____leaseTime_1;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_renewOnCallTime
	TimeSpan_t2423083873  ____renewOnCallTime_2;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_sponsorshipTimeout
	TimeSpan_t2423083873  ____sponsorshipTimeout_3;
	// System.Runtime.Remoting.Lifetime.LeaseManager System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseManager
	LeaseManager_t2028314007 * ____leaseManager_4;

public:
	inline static int32_t get_offset_of__leaseManagerPollTime_0() { return static_cast<int32_t>(offsetof(LifetimeServices_t2289822009_StaticFields, ____leaseManagerPollTime_0)); }
	inline TimeSpan_t2423083873  get__leaseManagerPollTime_0() const { return ____leaseManagerPollTime_0; }
	inline TimeSpan_t2423083873 * get_address_of__leaseManagerPollTime_0() { return &____leaseManagerPollTime_0; }
	inline void set__leaseManagerPollTime_0(TimeSpan_t2423083873  value)
	{
		____leaseManagerPollTime_0 = value;
	}

	inline static int32_t get_offset_of__leaseTime_1() { return static_cast<int32_t>(offsetof(LifetimeServices_t2289822009_StaticFields, ____leaseTime_1)); }
	inline TimeSpan_t2423083873  get__leaseTime_1() const { return ____leaseTime_1; }
	inline TimeSpan_t2423083873 * get_address_of__leaseTime_1() { return &____leaseTime_1; }
	inline void set__leaseTime_1(TimeSpan_t2423083873  value)
	{
		____leaseTime_1 = value;
	}

	inline static int32_t get_offset_of__renewOnCallTime_2() { return static_cast<int32_t>(offsetof(LifetimeServices_t2289822009_StaticFields, ____renewOnCallTime_2)); }
	inline TimeSpan_t2423083873  get__renewOnCallTime_2() const { return ____renewOnCallTime_2; }
	inline TimeSpan_t2423083873 * get_address_of__renewOnCallTime_2() { return &____renewOnCallTime_2; }
	inline void set__renewOnCallTime_2(TimeSpan_t2423083873  value)
	{
		____renewOnCallTime_2 = value;
	}

	inline static int32_t get_offset_of__sponsorshipTimeout_3() { return static_cast<int32_t>(offsetof(LifetimeServices_t2289822009_StaticFields, ____sponsorshipTimeout_3)); }
	inline TimeSpan_t2423083873  get__sponsorshipTimeout_3() const { return ____sponsorshipTimeout_3; }
	inline TimeSpan_t2423083873 * get_address_of__sponsorshipTimeout_3() { return &____sponsorshipTimeout_3; }
	inline void set__sponsorshipTimeout_3(TimeSpan_t2423083873  value)
	{
		____sponsorshipTimeout_3 = value;
	}

	inline static int32_t get_offset_of__leaseManager_4() { return static_cast<int32_t>(offsetof(LifetimeServices_t2289822009_StaticFields, ____leaseManager_4)); }
	inline LeaseManager_t2028314007 * get__leaseManager_4() const { return ____leaseManager_4; }
	inline LeaseManager_t2028314007 ** get_address_of__leaseManager_4() { return &____leaseManager_4; }
	inline void set__leaseManager_4(LeaseManager_t2028314007 * value)
	{
		____leaseManager_4 = value;
		Il2CppCodeGenWriteBarrier((&____leaseManager_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIFETIMESERVICES_T2289822009_H
#ifndef ARGINFOTYPE_T2920297624_H
#define ARGINFOTYPE_T2920297624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ArgInfoType
struct  ArgInfoType_t2920297624 
{
public:
	// System.Byte System.Runtime.Remoting.Messaging.ArgInfoType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ArgInfoType_t2920297624, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGINFOTYPE_T2920297624_H
#ifndef ASYNCRESULT_T4047664598_H
#define ASYNCRESULT_T4047664598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.AsyncResult
struct  AsyncResult_t4047664598  : public RuntimeObject
{
public:
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_state
	RuntimeObject * ___async_state_0;
	// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::handle
	WaitHandle_t1735860266 * ___handle_1;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_delegate
	RuntimeObject * ___async_delegate_2;
	// System.IntPtr System.Runtime.Remoting.Messaging.AsyncResult::data
	IntPtr_t ___data_3;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::object_data
	RuntimeObject * ___object_data_4;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::sync_completed
	bool ___sync_completed_5;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::completed
	bool ___completed_6;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::endinvoke_called
	bool ___endinvoke_called_7;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_callback
	RuntimeObject * ___async_callback_8;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::current
	ExecutionContext_t380815810 * ___current_9;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::original
	ExecutionContext_t380815810 * ___original_10;
	// System.Int32 System.Runtime.Remoting.Messaging.AsyncResult::gchandle
	int32_t ___gchandle_11;
	// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::call_message
	MonoMethodMessage_t2706641219 * ___call_message_12;
	// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::message_ctrl
	RuntimeObject* ___message_ctrl_13;
	// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::reply_message
	RuntimeObject* ___reply_message_14;

public:
	inline static int32_t get_offset_of_async_state_0() { return static_cast<int32_t>(offsetof(AsyncResult_t4047664598, ___async_state_0)); }
	inline RuntimeObject * get_async_state_0() const { return ___async_state_0; }
	inline RuntimeObject ** get_address_of_async_state_0() { return &___async_state_0; }
	inline void set_async_state_0(RuntimeObject * value)
	{
		___async_state_0 = value;
		Il2CppCodeGenWriteBarrier((&___async_state_0), value);
	}

	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(AsyncResult_t4047664598, ___handle_1)); }
	inline WaitHandle_t1735860266 * get_handle_1() const { return ___handle_1; }
	inline WaitHandle_t1735860266 ** get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(WaitHandle_t1735860266 * value)
	{
		___handle_1 = value;
		Il2CppCodeGenWriteBarrier((&___handle_1), value);
	}

	inline static int32_t get_offset_of_async_delegate_2() { return static_cast<int32_t>(offsetof(AsyncResult_t4047664598, ___async_delegate_2)); }
	inline RuntimeObject * get_async_delegate_2() const { return ___async_delegate_2; }
	inline RuntimeObject ** get_address_of_async_delegate_2() { return &___async_delegate_2; }
	inline void set_async_delegate_2(RuntimeObject * value)
	{
		___async_delegate_2 = value;
		Il2CppCodeGenWriteBarrier((&___async_delegate_2), value);
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(AsyncResult_t4047664598, ___data_3)); }
	inline IntPtr_t get_data_3() const { return ___data_3; }
	inline IntPtr_t* get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(IntPtr_t value)
	{
		___data_3 = value;
	}

	inline static int32_t get_offset_of_object_data_4() { return static_cast<int32_t>(offsetof(AsyncResult_t4047664598, ___object_data_4)); }
	inline RuntimeObject * get_object_data_4() const { return ___object_data_4; }
	inline RuntimeObject ** get_address_of_object_data_4() { return &___object_data_4; }
	inline void set_object_data_4(RuntimeObject * value)
	{
		___object_data_4 = value;
		Il2CppCodeGenWriteBarrier((&___object_data_4), value);
	}

	inline static int32_t get_offset_of_sync_completed_5() { return static_cast<int32_t>(offsetof(AsyncResult_t4047664598, ___sync_completed_5)); }
	inline bool get_sync_completed_5() const { return ___sync_completed_5; }
	inline bool* get_address_of_sync_completed_5() { return &___sync_completed_5; }
	inline void set_sync_completed_5(bool value)
	{
		___sync_completed_5 = value;
	}

	inline static int32_t get_offset_of_completed_6() { return static_cast<int32_t>(offsetof(AsyncResult_t4047664598, ___completed_6)); }
	inline bool get_completed_6() const { return ___completed_6; }
	inline bool* get_address_of_completed_6() { return &___completed_6; }
	inline void set_completed_6(bool value)
	{
		___completed_6 = value;
	}

	inline static int32_t get_offset_of_endinvoke_called_7() { return static_cast<int32_t>(offsetof(AsyncResult_t4047664598, ___endinvoke_called_7)); }
	inline bool get_endinvoke_called_7() const { return ___endinvoke_called_7; }
	inline bool* get_address_of_endinvoke_called_7() { return &___endinvoke_called_7; }
	inline void set_endinvoke_called_7(bool value)
	{
		___endinvoke_called_7 = value;
	}

	inline static int32_t get_offset_of_async_callback_8() { return static_cast<int32_t>(offsetof(AsyncResult_t4047664598, ___async_callback_8)); }
	inline RuntimeObject * get_async_callback_8() const { return ___async_callback_8; }
	inline RuntimeObject ** get_address_of_async_callback_8() { return &___async_callback_8; }
	inline void set_async_callback_8(RuntimeObject * value)
	{
		___async_callback_8 = value;
		Il2CppCodeGenWriteBarrier((&___async_callback_8), value);
	}

	inline static int32_t get_offset_of_current_9() { return static_cast<int32_t>(offsetof(AsyncResult_t4047664598, ___current_9)); }
	inline ExecutionContext_t380815810 * get_current_9() const { return ___current_9; }
	inline ExecutionContext_t380815810 ** get_address_of_current_9() { return &___current_9; }
	inline void set_current_9(ExecutionContext_t380815810 * value)
	{
		___current_9 = value;
		Il2CppCodeGenWriteBarrier((&___current_9), value);
	}

	inline static int32_t get_offset_of_original_10() { return static_cast<int32_t>(offsetof(AsyncResult_t4047664598, ___original_10)); }
	inline ExecutionContext_t380815810 * get_original_10() const { return ___original_10; }
	inline ExecutionContext_t380815810 ** get_address_of_original_10() { return &___original_10; }
	inline void set_original_10(ExecutionContext_t380815810 * value)
	{
		___original_10 = value;
		Il2CppCodeGenWriteBarrier((&___original_10), value);
	}

	inline static int32_t get_offset_of_gchandle_11() { return static_cast<int32_t>(offsetof(AsyncResult_t4047664598, ___gchandle_11)); }
	inline int32_t get_gchandle_11() const { return ___gchandle_11; }
	inline int32_t* get_address_of_gchandle_11() { return &___gchandle_11; }
	inline void set_gchandle_11(int32_t value)
	{
		___gchandle_11 = value;
	}

	inline static int32_t get_offset_of_call_message_12() { return static_cast<int32_t>(offsetof(AsyncResult_t4047664598, ___call_message_12)); }
	inline MonoMethodMessage_t2706641219 * get_call_message_12() const { return ___call_message_12; }
	inline MonoMethodMessage_t2706641219 ** get_address_of_call_message_12() { return &___call_message_12; }
	inline void set_call_message_12(MonoMethodMessage_t2706641219 * value)
	{
		___call_message_12 = value;
		Il2CppCodeGenWriteBarrier((&___call_message_12), value);
	}

	inline static int32_t get_offset_of_message_ctrl_13() { return static_cast<int32_t>(offsetof(AsyncResult_t4047664598, ___message_ctrl_13)); }
	inline RuntimeObject* get_message_ctrl_13() const { return ___message_ctrl_13; }
	inline RuntimeObject** get_address_of_message_ctrl_13() { return &___message_ctrl_13; }
	inline void set_message_ctrl_13(RuntimeObject* value)
	{
		___message_ctrl_13 = value;
		Il2CppCodeGenWriteBarrier((&___message_ctrl_13), value);
	}

	inline static int32_t get_offset_of_reply_message_14() { return static_cast<int32_t>(offsetof(AsyncResult_t4047664598, ___reply_message_14)); }
	inline RuntimeObject* get_reply_message_14() const { return ___reply_message_14; }
	inline RuntimeObject** get_address_of_reply_message_14() { return &___reply_message_14; }
	inline void set_reply_message_14(RuntimeObject* value)
	{
		___reply_message_14 = value;
		Il2CppCodeGenWriteBarrier((&___reply_message_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCRESULT_T4047664598_H
#ifndef CALLTYPE_T811430344_H
#define CALLTYPE_T811430344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.CallType
struct  CallType_t811430344 
{
public:
	// System.Int32 System.Runtime.Remoting.Messaging.CallType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallType_t811430344, ___value___1)); }
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
#endif // CALLTYPE_T811430344_H
#ifndef SOAPFIELDATTRIBUTE_T2549054394_H
#define SOAPFIELDATTRIBUTE_T2549054394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapFieldAttribute
struct  SoapFieldAttribute_t2549054394  : public SoapAttribute_t2378586715
{
public:
	// System.String System.Runtime.Remoting.Metadata.SoapFieldAttribute::_elementName
	String_t* ____elementName_3;
	// System.Boolean System.Runtime.Remoting.Metadata.SoapFieldAttribute::_isElement
	bool ____isElement_4;

public:
	inline static int32_t get_offset_of__elementName_3() { return static_cast<int32_t>(offsetof(SoapFieldAttribute_t2549054394, ____elementName_3)); }
	inline String_t* get__elementName_3() const { return ____elementName_3; }
	inline String_t** get_address_of__elementName_3() { return &____elementName_3; }
	inline void set__elementName_3(String_t* value)
	{
		____elementName_3 = value;
		Il2CppCodeGenWriteBarrier((&____elementName_3), value);
	}

	inline static int32_t get_offset_of__isElement_4() { return static_cast<int32_t>(offsetof(SoapFieldAttribute_t2549054394, ____isElement_4)); }
	inline bool get__isElement_4() const { return ____isElement_4; }
	inline bool* get_address_of__isElement_4() { return &____isElement_4; }
	inline void set__isElement_4(bool value)
	{
		____isElement_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPFIELDATTRIBUTE_T2549054394_H
#ifndef BINARYELEMENT_T2918002141_H
#define BINARYELEMENT_T2918002141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryElement
struct  BinaryElement_t2918002141 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.BinaryElement::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BinaryElement_t2918002141, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYELEMENT_T2918002141_H
#ifndef SOAPPARAMETERATTRIBUTE_T95860180_H
#define SOAPPARAMETERATTRIBUTE_T95860180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapParameterAttribute
struct  SoapParameterAttribute_t95860180  : public SoapAttribute_t2378586715
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPPARAMETERATTRIBUTE_T95860180_H
#ifndef STREAMINGCONTEXTSTATES_T3777041376_H
#define STREAMINGCONTEXTSTATES_T3777041376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t3777041376 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t3777041376, ___value___1)); }
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
#endif // STREAMINGCONTEXTSTATES_T3777041376_H
#ifndef REMOTINGEXCEPTION_T3456746615_H
#define REMOTINGEXCEPTION_T3456746615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.RemotingException
struct  RemotingException_t3456746615  : public SystemException_t1180164699
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGEXCEPTION_T3456746615_H
#ifndef CLIENTACTIVATEDIDENTITY_T2634035449_H
#define CLIENTACTIVATEDIDENTITY_T2634035449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ClientActivatedIdentity
struct  ClientActivatedIdentity_t2634035449  : public ServerIdentity_t2872288717
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTACTIVATEDIDENTITY_T2634035449_H
#ifndef SINGLETONIDENTITY_T3582602160_H
#define SINGLETONIDENTITY_T3582602160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SingletonIdentity
struct  SingletonIdentity_t3582602160  : public ServerIdentity_t2872288717
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETONIDENTITY_T3582602160_H
#ifndef SINGLECALLIDENTITY_T164680570_H
#define SINGLECALLIDENTITY_T164680570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SingleCallIdentity
struct  SingleCallIdentity_t164680570  : public ServerIdentity_t2872288717
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLECALLIDENTITY_T164680570_H
#ifndef WELLKNOWNOBJECTMODE_T3789746901_H
#define WELLKNOWNOBJECTMODE_T3789746901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownObjectMode
struct  WellKnownObjectMode_t3789746901 
{
public:
	// System.Int32 System.Runtime.Remoting.WellKnownObjectMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WellKnownObjectMode_t3789746901, ___value___1)); }
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
#endif // WELLKNOWNOBJECTMODE_T3789746901_H
#ifndef SOAPTYPEATTRIBUTE_T3751848300_H
#define SOAPTYPEATTRIBUTE_T3751848300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapTypeAttribute
struct  SoapTypeAttribute_t3751848300  : public SoapAttribute_t2378586715
{
public:
	// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::_useAttribute
	bool ____useAttribute_3;
	// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::_xmlElementName
	String_t* ____xmlElementName_4;
	// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::_xmlNamespace
	String_t* ____xmlNamespace_5;
	// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::_xmlTypeName
	String_t* ____xmlTypeName_6;
	// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::_xmlTypeNamespace
	String_t* ____xmlTypeNamespace_7;
	// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::_isType
	bool ____isType_8;
	// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::_isElement
	bool ____isElement_9;

public:
	inline static int32_t get_offset_of__useAttribute_3() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t3751848300, ____useAttribute_3)); }
	inline bool get__useAttribute_3() const { return ____useAttribute_3; }
	inline bool* get_address_of__useAttribute_3() { return &____useAttribute_3; }
	inline void set__useAttribute_3(bool value)
	{
		____useAttribute_3 = value;
	}

	inline static int32_t get_offset_of__xmlElementName_4() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t3751848300, ____xmlElementName_4)); }
	inline String_t* get__xmlElementName_4() const { return ____xmlElementName_4; }
	inline String_t** get_address_of__xmlElementName_4() { return &____xmlElementName_4; }
	inline void set__xmlElementName_4(String_t* value)
	{
		____xmlElementName_4 = value;
		Il2CppCodeGenWriteBarrier((&____xmlElementName_4), value);
	}

	inline static int32_t get_offset_of__xmlNamespace_5() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t3751848300, ____xmlNamespace_5)); }
	inline String_t* get__xmlNamespace_5() const { return ____xmlNamespace_5; }
	inline String_t** get_address_of__xmlNamespace_5() { return &____xmlNamespace_5; }
	inline void set__xmlNamespace_5(String_t* value)
	{
		____xmlNamespace_5 = value;
		Il2CppCodeGenWriteBarrier((&____xmlNamespace_5), value);
	}

	inline static int32_t get_offset_of__xmlTypeName_6() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t3751848300, ____xmlTypeName_6)); }
	inline String_t* get__xmlTypeName_6() const { return ____xmlTypeName_6; }
	inline String_t** get_address_of__xmlTypeName_6() { return &____xmlTypeName_6; }
	inline void set__xmlTypeName_6(String_t* value)
	{
		____xmlTypeName_6 = value;
		Il2CppCodeGenWriteBarrier((&____xmlTypeName_6), value);
	}

	inline static int32_t get_offset_of__xmlTypeNamespace_7() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t3751848300, ____xmlTypeNamespace_7)); }
	inline String_t* get__xmlTypeNamespace_7() const { return ____xmlTypeNamespace_7; }
	inline String_t** get_address_of__xmlTypeNamespace_7() { return &____xmlTypeNamespace_7; }
	inline void set__xmlTypeNamespace_7(String_t* value)
	{
		____xmlTypeNamespace_7 = value;
		Il2CppCodeGenWriteBarrier((&____xmlTypeNamespace_7), value);
	}

	inline static int32_t get_offset_of__isType_8() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t3751848300, ____isType_8)); }
	inline bool get__isType_8() const { return ____isType_8; }
	inline bool* get_address_of__isType_8() { return &____isType_8; }
	inline void set__isType_8(bool value)
	{
		____isType_8 = value;
	}

	inline static int32_t get_offset_of__isElement_9() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t3751848300, ____isElement_9)); }
	inline bool get__isElement_9() const { return ____isElement_9; }
	inline bool* get_address_of__isElement_9() { return &____isElement_9; }
	inline void set__isElement_9(bool value)
	{
		____isElement_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPTYPEATTRIBUTE_T3751848300_H
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
#ifndef DATETIME_T547944966_H
#define DATETIME_T547944966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t547944966 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t2423083873  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t547944966, ___ticks_0)); }
	inline TimeSpan_t2423083873  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t2423083873 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t2423083873  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t547944966, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t547944966_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t547944966  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t547944966  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t3162382152* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t3162382152* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t3162382152* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t3162382152* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t3162382152* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t3162382152* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t3162382152* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t3325461767* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t3325461767* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t547944966_StaticFields, ___MaxValue_2)); }
	inline DateTime_t547944966  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t547944966 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t547944966  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t547944966_StaticFields, ___MinValue_3)); }
	inline DateTime_t547944966  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t547944966 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t547944966  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t547944966_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t3162382152* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t3162382152** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t3162382152* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t547944966_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t3162382152* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t3162382152** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t3162382152* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t547944966_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t3162382152* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t3162382152** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t3162382152* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t547944966_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t3162382152* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t3162382152** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t3162382152* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t547944966_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t3162382152* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t3162382152** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t3162382152* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t547944966_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t3162382152* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t3162382152** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t3162382152* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t547944966_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t3162382152* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t3162382152** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t3162382152* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t547944966_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t3325461767* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t3325461767** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t3325461767* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t547944966_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t3325461767* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t3325461767** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t3325461767* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t547944966_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t547944966_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T547944966_H
#ifndef REMOTINGSERVICES_T803427945_H
#define REMOTINGSERVICES_T803427945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.RemotingServices
struct  RemotingServices_t803427945  : public RuntimeObject
{
public:

public:
};

struct RemotingServices_t803427945_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingServices::uri_hash
	Hashtable_t2604207785 * ___uri_hash_0;
	// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter System.Runtime.Remoting.RemotingServices::_serializationFormatter
	BinaryFormatter_t1971846531 * ____serializationFormatter_1;
	// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter System.Runtime.Remoting.RemotingServices::_deserializationFormatter
	BinaryFormatter_t1971846531 * ____deserializationFormatter_2;
	// System.String System.Runtime.Remoting.RemotingServices::app_id
	String_t* ___app_id_3;
	// System.Int32 System.Runtime.Remoting.RemotingServices::next_id
	int32_t ___next_id_4;
	// System.Reflection.BindingFlags System.Runtime.Remoting.RemotingServices::methodBindings
	int32_t ___methodBindings_5;
	// System.Reflection.MethodInfo System.Runtime.Remoting.RemotingServices::FieldSetterMethod
	MethodInfo_t * ___FieldSetterMethod_6;
	// System.Reflection.MethodInfo System.Runtime.Remoting.RemotingServices::FieldGetterMethod
	MethodInfo_t * ___FieldGetterMethod_7;

public:
	inline static int32_t get_offset_of_uri_hash_0() { return static_cast<int32_t>(offsetof(RemotingServices_t803427945_StaticFields, ___uri_hash_0)); }
	inline Hashtable_t2604207785 * get_uri_hash_0() const { return ___uri_hash_0; }
	inline Hashtable_t2604207785 ** get_address_of_uri_hash_0() { return &___uri_hash_0; }
	inline void set_uri_hash_0(Hashtable_t2604207785 * value)
	{
		___uri_hash_0 = value;
		Il2CppCodeGenWriteBarrier((&___uri_hash_0), value);
	}

	inline static int32_t get_offset_of__serializationFormatter_1() { return static_cast<int32_t>(offsetof(RemotingServices_t803427945_StaticFields, ____serializationFormatter_1)); }
	inline BinaryFormatter_t1971846531 * get__serializationFormatter_1() const { return ____serializationFormatter_1; }
	inline BinaryFormatter_t1971846531 ** get_address_of__serializationFormatter_1() { return &____serializationFormatter_1; }
	inline void set__serializationFormatter_1(BinaryFormatter_t1971846531 * value)
	{
		____serializationFormatter_1 = value;
		Il2CppCodeGenWriteBarrier((&____serializationFormatter_1), value);
	}

	inline static int32_t get_offset_of__deserializationFormatter_2() { return static_cast<int32_t>(offsetof(RemotingServices_t803427945_StaticFields, ____deserializationFormatter_2)); }
	inline BinaryFormatter_t1971846531 * get__deserializationFormatter_2() const { return ____deserializationFormatter_2; }
	inline BinaryFormatter_t1971846531 ** get_address_of__deserializationFormatter_2() { return &____deserializationFormatter_2; }
	inline void set__deserializationFormatter_2(BinaryFormatter_t1971846531 * value)
	{
		____deserializationFormatter_2 = value;
		Il2CppCodeGenWriteBarrier((&____deserializationFormatter_2), value);
	}

	inline static int32_t get_offset_of_app_id_3() { return static_cast<int32_t>(offsetof(RemotingServices_t803427945_StaticFields, ___app_id_3)); }
	inline String_t* get_app_id_3() const { return ___app_id_3; }
	inline String_t** get_address_of_app_id_3() { return &___app_id_3; }
	inline void set_app_id_3(String_t* value)
	{
		___app_id_3 = value;
		Il2CppCodeGenWriteBarrier((&___app_id_3), value);
	}

	inline static int32_t get_offset_of_next_id_4() { return static_cast<int32_t>(offsetof(RemotingServices_t803427945_StaticFields, ___next_id_4)); }
	inline int32_t get_next_id_4() const { return ___next_id_4; }
	inline int32_t* get_address_of_next_id_4() { return &___next_id_4; }
	inline void set_next_id_4(int32_t value)
	{
		___next_id_4 = value;
	}

	inline static int32_t get_offset_of_methodBindings_5() { return static_cast<int32_t>(offsetof(RemotingServices_t803427945_StaticFields, ___methodBindings_5)); }
	inline int32_t get_methodBindings_5() const { return ___methodBindings_5; }
	inline int32_t* get_address_of_methodBindings_5() { return &___methodBindings_5; }
	inline void set_methodBindings_5(int32_t value)
	{
		___methodBindings_5 = value;
	}

	inline static int32_t get_offset_of_FieldSetterMethod_6() { return static_cast<int32_t>(offsetof(RemotingServices_t803427945_StaticFields, ___FieldSetterMethod_6)); }
	inline MethodInfo_t * get_FieldSetterMethod_6() const { return ___FieldSetterMethod_6; }
	inline MethodInfo_t ** get_address_of_FieldSetterMethod_6() { return &___FieldSetterMethod_6; }
	inline void set_FieldSetterMethod_6(MethodInfo_t * value)
	{
		___FieldSetterMethod_6 = value;
		Il2CppCodeGenWriteBarrier((&___FieldSetterMethod_6), value);
	}

	inline static int32_t get_offset_of_FieldGetterMethod_7() { return static_cast<int32_t>(offsetof(RemotingServices_t803427945_StaticFields, ___FieldGetterMethod_7)); }
	inline MethodInfo_t * get_FieldGetterMethod_7() const { return ___FieldGetterMethod_7; }
	inline MethodInfo_t ** get_address_of_FieldGetterMethod_7() { return &___FieldGetterMethod_7; }
	inline void set_FieldGetterMethod_7(MethodInfo_t * value)
	{
		___FieldGetterMethod_7 = value;
		Il2CppCodeGenWriteBarrier((&___FieldGetterMethod_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGSERVICES_T803427945_H
#ifndef MONOMETHODMESSAGE_T2706641219_H
#define MONOMETHODMESSAGE_T2706641219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct  MonoMethodMessage_t2706641219  : public RuntimeObject
{
public:
	// System.Reflection.MonoMethod System.Runtime.Remoting.Messaging.MonoMethodMessage::method
	MonoMethod_t * ___method_0;
	// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::args
	ObjectU5BU5D_t2392277051* ___args_1;
	// System.Byte[] System.Runtime.Remoting.Messaging.MonoMethodMessage::arg_types
	ByteU5BU5D_t2896786162* ___arg_types_2;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::ctx
	LogicalCallContext_t2002431052 * ___ctx_3;
	// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::rval
	RuntimeObject * ___rval_4;
	// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::exc
	Exception_t3144957912 * ___exc_5;
	// System.Runtime.Remoting.Messaging.CallType System.Runtime.Remoting.Messaging.MonoMethodMessage::call_type
	int32_t ___call_type_6;
	// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::uri
	String_t* ___uri_7;
	// System.Runtime.Remoting.Messaging.MethodCallDictionary System.Runtime.Remoting.Messaging.MonoMethodMessage::properties
	MethodCallDictionary_t2725835951 * ___properties_8;
	// System.Type[] System.Runtime.Remoting.Messaging.MonoMethodMessage::methodSignature
	TypeU5BU5D_t730564648* ___methodSignature_9;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2706641219, ___method_0)); }
	inline MonoMethod_t * get_method_0() const { return ___method_0; }
	inline MonoMethod_t ** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(MonoMethod_t * value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier((&___method_0), value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2706641219, ___args_1)); }
	inline ObjectU5BU5D_t2392277051* get_args_1() const { return ___args_1; }
	inline ObjectU5BU5D_t2392277051** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(ObjectU5BU5D_t2392277051* value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier((&___args_1), value);
	}

	inline static int32_t get_offset_of_arg_types_2() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2706641219, ___arg_types_2)); }
	inline ByteU5BU5D_t2896786162* get_arg_types_2() const { return ___arg_types_2; }
	inline ByteU5BU5D_t2896786162** get_address_of_arg_types_2() { return &___arg_types_2; }
	inline void set_arg_types_2(ByteU5BU5D_t2896786162* value)
	{
		___arg_types_2 = value;
		Il2CppCodeGenWriteBarrier((&___arg_types_2), value);
	}

	inline static int32_t get_offset_of_ctx_3() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2706641219, ___ctx_3)); }
	inline LogicalCallContext_t2002431052 * get_ctx_3() const { return ___ctx_3; }
	inline LogicalCallContext_t2002431052 ** get_address_of_ctx_3() { return &___ctx_3; }
	inline void set_ctx_3(LogicalCallContext_t2002431052 * value)
	{
		___ctx_3 = value;
		Il2CppCodeGenWriteBarrier((&___ctx_3), value);
	}

	inline static int32_t get_offset_of_rval_4() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2706641219, ___rval_4)); }
	inline RuntimeObject * get_rval_4() const { return ___rval_4; }
	inline RuntimeObject ** get_address_of_rval_4() { return &___rval_4; }
	inline void set_rval_4(RuntimeObject * value)
	{
		___rval_4 = value;
		Il2CppCodeGenWriteBarrier((&___rval_4), value);
	}

	inline static int32_t get_offset_of_exc_5() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2706641219, ___exc_5)); }
	inline Exception_t3144957912 * get_exc_5() const { return ___exc_5; }
	inline Exception_t3144957912 ** get_address_of_exc_5() { return &___exc_5; }
	inline void set_exc_5(Exception_t3144957912 * value)
	{
		___exc_5 = value;
		Il2CppCodeGenWriteBarrier((&___exc_5), value);
	}

	inline static int32_t get_offset_of_call_type_6() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2706641219, ___call_type_6)); }
	inline int32_t get_call_type_6() const { return ___call_type_6; }
	inline int32_t* get_address_of_call_type_6() { return &___call_type_6; }
	inline void set_call_type_6(int32_t value)
	{
		___call_type_6 = value;
	}

	inline static int32_t get_offset_of_uri_7() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2706641219, ___uri_7)); }
	inline String_t* get_uri_7() const { return ___uri_7; }
	inline String_t** get_address_of_uri_7() { return &___uri_7; }
	inline void set_uri_7(String_t* value)
	{
		___uri_7 = value;
		Il2CppCodeGenWriteBarrier((&___uri_7), value);
	}

	inline static int32_t get_offset_of_properties_8() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2706641219, ___properties_8)); }
	inline MethodCallDictionary_t2725835951 * get_properties_8() const { return ___properties_8; }
	inline MethodCallDictionary_t2725835951 ** get_address_of_properties_8() { return &___properties_8; }
	inline void set_properties_8(MethodCallDictionary_t2725835951 * value)
	{
		___properties_8 = value;
		Il2CppCodeGenWriteBarrier((&___properties_8), value);
	}

	inline static int32_t get_offset_of_methodSignature_9() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2706641219, ___methodSignature_9)); }
	inline TypeU5BU5D_t730564648* get_methodSignature_9() const { return ___methodSignature_9; }
	inline TypeU5BU5D_t730564648** get_address_of_methodSignature_9() { return &___methodSignature_9; }
	inline void set_methodSignature_9(TypeU5BU5D_t730564648* value)
	{
		___methodSignature_9 = value;
		Il2CppCodeGenWriteBarrier((&___methodSignature_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOMETHODMESSAGE_T2706641219_H
#ifndef STREAMINGCONTEXT_T1093102588_H
#define STREAMINGCONTEXT_T1093102588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t1093102588 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t1093102588, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t1093102588, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t1093102588_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t1093102588_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T1093102588_H
#ifndef WELLKNOWNSERVICETYPEENTRY_T1949424422_H
#define WELLKNOWNSERVICETYPEENTRY_T1949424422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownServiceTypeEntry
struct  WellKnownServiceTypeEntry_t1949424422  : public TypeEntry_t1472761653
{
public:
	// System.Type System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_type
	Type_t * ___obj_type_2;
	// System.String System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_uri
	String_t* ___obj_uri_3;
	// System.Runtime.Remoting.WellKnownObjectMode System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_mode
	int32_t ___obj_mode_4;

public:
	inline static int32_t get_offset_of_obj_type_2() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t1949424422, ___obj_type_2)); }
	inline Type_t * get_obj_type_2() const { return ___obj_type_2; }
	inline Type_t ** get_address_of_obj_type_2() { return &___obj_type_2; }
	inline void set_obj_type_2(Type_t * value)
	{
		___obj_type_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_2), value);
	}

	inline static int32_t get_offset_of_obj_uri_3() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t1949424422, ___obj_uri_3)); }
	inline String_t* get_obj_uri_3() const { return ___obj_uri_3; }
	inline String_t** get_address_of_obj_uri_3() { return &___obj_uri_3; }
	inline void set_obj_uri_3(String_t* value)
	{
		___obj_uri_3 = value;
		Il2CppCodeGenWriteBarrier((&___obj_uri_3), value);
	}

	inline static int32_t get_offset_of_obj_mode_4() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t1949424422, ___obj_mode_4)); }
	inline int32_t get_obj_mode_4() const { return ___obj_mode_4; }
	inline int32_t* get_address_of_obj_mode_4() { return &___obj_mode_4; }
	inline void set_obj_mode_4(int32_t value)
	{
		___obj_mode_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WELLKNOWNSERVICETYPEENTRY_T1949424422_H
#ifndef BINARYFORMATTER_T1971846531_H
#define BINARYFORMATTER_T1971846531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct  BinaryFormatter_t1971846531  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::assembly_format
	int32_t ___assembly_format_0;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::binder
	SerializationBinder_t4174666413 * ___binder_1;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::context
	StreamingContext_t1093102588  ___context_2;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::surrogate_selector
	RuntimeObject* ___surrogate_selector_3;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::type_format
	int32_t ___type_format_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::filter_level
	int32_t ___filter_level_5;

public:
	inline static int32_t get_offset_of_assembly_format_0() { return static_cast<int32_t>(offsetof(BinaryFormatter_t1971846531, ___assembly_format_0)); }
	inline int32_t get_assembly_format_0() const { return ___assembly_format_0; }
	inline int32_t* get_address_of_assembly_format_0() { return &___assembly_format_0; }
	inline void set_assembly_format_0(int32_t value)
	{
		___assembly_format_0 = value;
	}

	inline static int32_t get_offset_of_binder_1() { return static_cast<int32_t>(offsetof(BinaryFormatter_t1971846531, ___binder_1)); }
	inline SerializationBinder_t4174666413 * get_binder_1() const { return ___binder_1; }
	inline SerializationBinder_t4174666413 ** get_address_of_binder_1() { return &___binder_1; }
	inline void set_binder_1(SerializationBinder_t4174666413 * value)
	{
		___binder_1 = value;
		Il2CppCodeGenWriteBarrier((&___binder_1), value);
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(BinaryFormatter_t1971846531, ___context_2)); }
	inline StreamingContext_t1093102588  get_context_2() const { return ___context_2; }
	inline StreamingContext_t1093102588 * get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(StreamingContext_t1093102588  value)
	{
		___context_2 = value;
	}

	inline static int32_t get_offset_of_surrogate_selector_3() { return static_cast<int32_t>(offsetof(BinaryFormatter_t1971846531, ___surrogate_selector_3)); }
	inline RuntimeObject* get_surrogate_selector_3() const { return ___surrogate_selector_3; }
	inline RuntimeObject** get_address_of_surrogate_selector_3() { return &___surrogate_selector_3; }
	inline void set_surrogate_selector_3(RuntimeObject* value)
	{
		___surrogate_selector_3 = value;
		Il2CppCodeGenWriteBarrier((&___surrogate_selector_3), value);
	}

	inline static int32_t get_offset_of_type_format_4() { return static_cast<int32_t>(offsetof(BinaryFormatter_t1971846531, ___type_format_4)); }
	inline int32_t get_type_format_4() const { return ___type_format_4; }
	inline int32_t* get_address_of_type_format_4() { return &___type_format_4; }
	inline void set_type_format_4(int32_t value)
	{
		___type_format_4 = value;
	}

	inline static int32_t get_offset_of_filter_level_5() { return static_cast<int32_t>(offsetof(BinaryFormatter_t1971846531, ___filter_level_5)); }
	inline int32_t get_filter_level_5() const { return ___filter_level_5; }
	inline int32_t* get_address_of_filter_level_5() { return &___filter_level_5; }
	inline void set_filter_level_5(int32_t value)
	{
		___filter_level_5 = value;
	}
};

struct BinaryFormatter_t1971846531_StaticFields
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::<DefaultSurrogateSelector>k__BackingField
	RuntimeObject* ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BinaryFormatter_t1971846531_StaticFields, ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() const { return ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return &___U3CDefaultSurrogateSelectorU3Ek__BackingField_6; }
	inline void set_U3CDefaultSurrogateSelectorU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CDefaultSurrogateSelectorU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultSurrogateSelectorU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYFORMATTER_T1971846531_H
#ifndef RENEWALDELEGATE_T624611738_H
#define RENEWALDELEGATE_T624611738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
struct  RenewalDelegate_t624611738  : public MulticastDelegate_t3965931391
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENEWALDELEGATE_T624611738_H
#ifndef LEASE_T3233299325_H
#define LEASE_T3233299325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.Lease
struct  Lease_t3233299325  : public MarshalByRefObject_t1236449280
{
public:
	// System.DateTime System.Runtime.Remoting.Lifetime.Lease::_leaseExpireTime
	DateTime_t547944966  ____leaseExpireTime_1;
	// System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.Lease::_currentState
	int32_t ____currentState_2;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::_initialLeaseTime
	TimeSpan_t2423083873  ____initialLeaseTime_3;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::_renewOnCallTime
	TimeSpan_t2423083873  ____renewOnCallTime_4;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::_sponsorshipTimeout
	TimeSpan_t2423083873  ____sponsorshipTimeout_5;
	// System.Collections.ArrayList System.Runtime.Remoting.Lifetime.Lease::_sponsors
	ArrayList_t844188058 * ____sponsors_6;
	// System.Collections.Queue System.Runtime.Remoting.Lifetime.Lease::_renewingSponsors
	Queue_t345199151 * ____renewingSponsors_7;
	// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate System.Runtime.Remoting.Lifetime.Lease::_renewalDelegate
	RenewalDelegate_t624611738 * ____renewalDelegate_8;

public:
	inline static int32_t get_offset_of__leaseExpireTime_1() { return static_cast<int32_t>(offsetof(Lease_t3233299325, ____leaseExpireTime_1)); }
	inline DateTime_t547944966  get__leaseExpireTime_1() const { return ____leaseExpireTime_1; }
	inline DateTime_t547944966 * get_address_of__leaseExpireTime_1() { return &____leaseExpireTime_1; }
	inline void set__leaseExpireTime_1(DateTime_t547944966  value)
	{
		____leaseExpireTime_1 = value;
	}

	inline static int32_t get_offset_of__currentState_2() { return static_cast<int32_t>(offsetof(Lease_t3233299325, ____currentState_2)); }
	inline int32_t get__currentState_2() const { return ____currentState_2; }
	inline int32_t* get_address_of__currentState_2() { return &____currentState_2; }
	inline void set__currentState_2(int32_t value)
	{
		____currentState_2 = value;
	}

	inline static int32_t get_offset_of__initialLeaseTime_3() { return static_cast<int32_t>(offsetof(Lease_t3233299325, ____initialLeaseTime_3)); }
	inline TimeSpan_t2423083873  get__initialLeaseTime_3() const { return ____initialLeaseTime_3; }
	inline TimeSpan_t2423083873 * get_address_of__initialLeaseTime_3() { return &____initialLeaseTime_3; }
	inline void set__initialLeaseTime_3(TimeSpan_t2423083873  value)
	{
		____initialLeaseTime_3 = value;
	}

	inline static int32_t get_offset_of__renewOnCallTime_4() { return static_cast<int32_t>(offsetof(Lease_t3233299325, ____renewOnCallTime_4)); }
	inline TimeSpan_t2423083873  get__renewOnCallTime_4() const { return ____renewOnCallTime_4; }
	inline TimeSpan_t2423083873 * get_address_of__renewOnCallTime_4() { return &____renewOnCallTime_4; }
	inline void set__renewOnCallTime_4(TimeSpan_t2423083873  value)
	{
		____renewOnCallTime_4 = value;
	}

	inline static int32_t get_offset_of__sponsorshipTimeout_5() { return static_cast<int32_t>(offsetof(Lease_t3233299325, ____sponsorshipTimeout_5)); }
	inline TimeSpan_t2423083873  get__sponsorshipTimeout_5() const { return ____sponsorshipTimeout_5; }
	inline TimeSpan_t2423083873 * get_address_of__sponsorshipTimeout_5() { return &____sponsorshipTimeout_5; }
	inline void set__sponsorshipTimeout_5(TimeSpan_t2423083873  value)
	{
		____sponsorshipTimeout_5 = value;
	}

	inline static int32_t get_offset_of__sponsors_6() { return static_cast<int32_t>(offsetof(Lease_t3233299325, ____sponsors_6)); }
	inline ArrayList_t844188058 * get__sponsors_6() const { return ____sponsors_6; }
	inline ArrayList_t844188058 ** get_address_of__sponsors_6() { return &____sponsors_6; }
	inline void set__sponsors_6(ArrayList_t844188058 * value)
	{
		____sponsors_6 = value;
		Il2CppCodeGenWriteBarrier((&____sponsors_6), value);
	}

	inline static int32_t get_offset_of__renewingSponsors_7() { return static_cast<int32_t>(offsetof(Lease_t3233299325, ____renewingSponsors_7)); }
	inline Queue_t345199151 * get__renewingSponsors_7() const { return ____renewingSponsors_7; }
	inline Queue_t345199151 ** get_address_of__renewingSponsors_7() { return &____renewingSponsors_7; }
	inline void set__renewingSponsors_7(Queue_t345199151 * value)
	{
		____renewingSponsors_7 = value;
		Il2CppCodeGenWriteBarrier((&____renewingSponsors_7), value);
	}

	inline static int32_t get_offset_of__renewalDelegate_8() { return static_cast<int32_t>(offsetof(Lease_t3233299325, ____renewalDelegate_8)); }
	inline RenewalDelegate_t624611738 * get__renewalDelegate_8() const { return ____renewalDelegate_8; }
	inline RenewalDelegate_t624611738 ** get_address_of__renewalDelegate_8() { return &____renewalDelegate_8; }
	inline void set__renewalDelegate_8(RenewalDelegate_t624611738 * value)
	{
		____renewalDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((&____renewalDelegate_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEASE_T3233299325_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize500 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize501 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize502 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize503 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize504 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize505 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize506 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize507 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize508 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize509 = { sizeof (SynchronizationAttribute_t3611941991), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable509[5] = 
{
	SynchronizationAttribute_t3611941991::get_offset_of__bReEntrant_1(),
	SynchronizationAttribute_t3611941991::get_offset_of__flavor_2(),
	SynchronizationAttribute_t3611941991::get_offset_of__lockCount_3(),
	SynchronizationAttribute_t3611941991::get_offset_of__mutex_4(),
	SynchronizationAttribute_t3611941991::get_offset_of__ownerThread_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize510 = { sizeof (SynchronizedClientContextSink_t1983962132), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable510[2] = 
{
	SynchronizedClientContextSink_t1983962132::get_offset_of__next_0(),
	SynchronizedClientContextSink_t1983962132::get_offset_of__att_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize511 = { sizeof (SynchronizedServerContextSink_t33215363), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable511[2] = 
{
	SynchronizedServerContextSink_t33215363::get_offset_of__next_0(),
	SynchronizedServerContextSink_t33215363::get_offset_of__att_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize512 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize513 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize514 = { sizeof (Lease_t3233299325), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable514[8] = 
{
	Lease_t3233299325::get_offset_of__leaseExpireTime_1(),
	Lease_t3233299325::get_offset_of__currentState_2(),
	Lease_t3233299325::get_offset_of__initialLeaseTime_3(),
	Lease_t3233299325::get_offset_of__renewOnCallTime_4(),
	Lease_t3233299325::get_offset_of__sponsorshipTimeout_5(),
	Lease_t3233299325::get_offset_of__sponsors_6(),
	Lease_t3233299325::get_offset_of__renewingSponsors_7(),
	Lease_t3233299325::get_offset_of__renewalDelegate_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize515 = { sizeof (RenewalDelegate_t624611738), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize516 = { sizeof (LeaseManager_t2028314007), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable516[2] = 
{
	LeaseManager_t2028314007::get_offset_of__objects_0(),
	LeaseManager_t2028314007::get_offset_of__timer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize517 = { sizeof (LeaseSink_t1787498687), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable517[1] = 
{
	LeaseSink_t1787498687::get_offset_of__nextSink_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize518 = { sizeof (LeaseState_t2714780545)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable518[6] = 
{
	LeaseState_t2714780545::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize519 = { sizeof (LifetimeServices_t2289822009), -1, sizeof(LifetimeServices_t2289822009_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable519[5] = 
{
	LifetimeServices_t2289822009_StaticFields::get_offset_of__leaseManagerPollTime_0(),
	LifetimeServices_t2289822009_StaticFields::get_offset_of__leaseTime_1(),
	LifetimeServices_t2289822009_StaticFields::get_offset_of__renewOnCallTime_2(),
	LifetimeServices_t2289822009_StaticFields::get_offset_of__sponsorshipTimeout_3(),
	LifetimeServices_t2289822009_StaticFields::get_offset_of__leaseManager_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize520 = { sizeof (ArgInfoType_t2920297624)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable520[3] = 
{
	ArgInfoType_t2920297624::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize521 = { sizeof (ArgInfo_t175167629), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable521[3] = 
{
	ArgInfo_t175167629::get_offset_of__paramMap_0(),
	ArgInfo_t175167629::get_offset_of__inoutArgCount_1(),
	ArgInfo_t175167629::get_offset_of__method_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize522 = { sizeof (AsyncResult_t4047664598), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable522[15] = 
{
	AsyncResult_t4047664598::get_offset_of_async_state_0(),
	AsyncResult_t4047664598::get_offset_of_handle_1(),
	AsyncResult_t4047664598::get_offset_of_async_delegate_2(),
	AsyncResult_t4047664598::get_offset_of_data_3(),
	AsyncResult_t4047664598::get_offset_of_object_data_4(),
	AsyncResult_t4047664598::get_offset_of_sync_completed_5(),
	AsyncResult_t4047664598::get_offset_of_completed_6(),
	AsyncResult_t4047664598::get_offset_of_endinvoke_called_7(),
	AsyncResult_t4047664598::get_offset_of_async_callback_8(),
	AsyncResult_t4047664598::get_offset_of_current_9(),
	AsyncResult_t4047664598::get_offset_of_original_10(),
	AsyncResult_t4047664598::get_offset_of_gchandle_11(),
	AsyncResult_t4047664598::get_offset_of_call_message_12(),
	AsyncResult_t4047664598::get_offset_of_message_ctrl_13(),
	AsyncResult_t4047664598::get_offset_of_reply_message_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize523 = { sizeof (ClientContextTerminatorSink_t3440594275), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable523[1] = 
{
	ClientContextTerminatorSink_t3440594275::get_offset_of__context_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize524 = { sizeof (ConstructionCall_t3573799552), -1, sizeof(ConstructionCall_t3573799552_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable524[7] = 
{
	ConstructionCall_t3573799552::get_offset_of__activator_11(),
	ConstructionCall_t3573799552::get_offset_of__activationAttributes_12(),
	ConstructionCall_t3573799552::get_offset_of__contextProperties_13(),
	ConstructionCall_t3573799552::get_offset_of__activationType_14(),
	ConstructionCall_t3573799552::get_offset_of__activationTypeName_15(),
	ConstructionCall_t3573799552::get_offset_of__isContextOk_16(),
	ConstructionCall_t3573799552_StaticFields::get_offset_of_U3CU3Ef__switchU24map20_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize525 = { sizeof (ConstructionCallDictionary_t2718733748), -1, sizeof(ConstructionCallDictionary_t2718733748_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable525[3] = 
{
	ConstructionCallDictionary_t2718733748_StaticFields::get_offset_of_InternalKeys_6(),
	ConstructionCallDictionary_t2718733748_StaticFields::get_offset_of_U3CU3Ef__switchU24map23_7(),
	ConstructionCallDictionary_t2718733748_StaticFields::get_offset_of_U3CU3Ef__switchU24map24_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize526 = { sizeof (EnvoyTerminatorSink_t3979210013), -1, sizeof(EnvoyTerminatorSink_t3979210013_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable526[1] = 
{
	EnvoyTerminatorSink_t3979210013_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize527 = { sizeof (Header_t1083447172), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable527[4] = 
{
	Header_t1083447172::get_offset_of_HeaderNamespace_0(),
	Header_t1083447172::get_offset_of_MustUnderstand_1(),
	Header_t1083447172::get_offset_of_Name_2(),
	Header_t1083447172::get_offset_of_Value_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize528 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize529 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize530 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize531 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize532 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize533 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize534 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize535 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize536 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize537 = { sizeof (LogicalCallContext_t2002431052), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable537[2] = 
{
	LogicalCallContext_t2002431052::get_offset_of__data_0(),
	LogicalCallContext_t2002431052::get_offset_of__remotingData_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize538 = { sizeof (CallContextRemotingData_t2000558446), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable538[1] = 
{
	CallContextRemotingData_t2000558446::get_offset_of__logicalCallID_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize539 = { sizeof (MethodCall_t2700394733), -1, sizeof(MethodCall_t2700394733_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable539[11] = 
{
	MethodCall_t2700394733::get_offset_of__uri_0(),
	MethodCall_t2700394733::get_offset_of__typeName_1(),
	MethodCall_t2700394733::get_offset_of__methodName_2(),
	MethodCall_t2700394733::get_offset_of__args_3(),
	MethodCall_t2700394733::get_offset_of__methodSignature_4(),
	MethodCall_t2700394733::get_offset_of__methodBase_5(),
	MethodCall_t2700394733::get_offset_of__callContext_6(),
	MethodCall_t2700394733::get_offset_of__genericArguments_7(),
	MethodCall_t2700394733::get_offset_of_ExternalProperties_8(),
	MethodCall_t2700394733::get_offset_of_InternalProperties_9(),
	MethodCall_t2700394733_StaticFields::get_offset_of_U3CU3Ef__switchU24map1F_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize540 = { sizeof (MethodCallDictionary_t2725835951), -1, sizeof(MethodCallDictionary_t2725835951_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable540[1] = 
{
	MethodCallDictionary_t2725835951_StaticFields::get_offset_of_InternalKeys_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize541 = { sizeof (MethodDictionary_t2144428769), -1, sizeof(MethodDictionary_t2144428769_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable541[6] = 
{
	MethodDictionary_t2144428769::get_offset_of__internalProperties_0(),
	MethodDictionary_t2144428769::get_offset_of__message_1(),
	MethodDictionary_t2144428769::get_offset_of__methodKeys_2(),
	MethodDictionary_t2144428769::get_offset_of__ownProperties_3(),
	MethodDictionary_t2144428769_StaticFields::get_offset_of_U3CU3Ef__switchU24map21_4(),
	MethodDictionary_t2144428769_StaticFields::get_offset_of_U3CU3Ef__switchU24map22_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize542 = { sizeof (DictionaryEnumerator_t2259741821), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable542[3] = 
{
	DictionaryEnumerator_t2259741821::get_offset_of__methodDictionary_0(),
	DictionaryEnumerator_t2259741821::get_offset_of__hashtableEnum_1(),
	DictionaryEnumerator_t2259741821::get_offset_of__posMethod_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize543 = { sizeof (MethodReturnDictionary_t478885572), -1, sizeof(MethodReturnDictionary_t478885572_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable543[2] = 
{
	MethodReturnDictionary_t478885572_StaticFields::get_offset_of_InternalReturnKeys_6(),
	MethodReturnDictionary_t478885572_StaticFields::get_offset_of_InternalExceptionKeys_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize544 = { sizeof (MonoMethodMessage_t2706641219), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable544[10] = 
{
	MonoMethodMessage_t2706641219::get_offset_of_method_0(),
	MonoMethodMessage_t2706641219::get_offset_of_args_1(),
	MonoMethodMessage_t2706641219::get_offset_of_arg_types_2(),
	MonoMethodMessage_t2706641219::get_offset_of_ctx_3(),
	MonoMethodMessage_t2706641219::get_offset_of_rval_4(),
	MonoMethodMessage_t2706641219::get_offset_of_exc_5(),
	MonoMethodMessage_t2706641219::get_offset_of_call_type_6(),
	MonoMethodMessage_t2706641219::get_offset_of_uri_7(),
	MonoMethodMessage_t2706641219::get_offset_of_properties_8(),
	MonoMethodMessage_t2706641219::get_offset_of_methodSignature_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize545 = { sizeof (CallType_t811430344)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable545[5] = 
{
	CallType_t811430344::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize546 = { sizeof (OneWayAttribute_t235182317), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize547 = { sizeof (RemotingSurrogate_t1003204781), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize548 = { sizeof (ObjRefSurrogate_t1194665622), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize549 = { sizeof (RemotingSurrogateSelector_t3811297368), -1, sizeof(RemotingSurrogateSelector_t3811297368_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable549[4] = 
{
	RemotingSurrogateSelector_t3811297368_StaticFields::get_offset_of_s_cachedTypeObjRef_0(),
	RemotingSurrogateSelector_t3811297368_StaticFields::get_offset_of__objRefSurrogate_1(),
	RemotingSurrogateSelector_t3811297368_StaticFields::get_offset_of__objRemotingSurrogate_2(),
	RemotingSurrogateSelector_t3811297368::get_offset_of__next_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize550 = { sizeof (ReturnMessage_t1228178955), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable550[13] = 
{
	ReturnMessage_t1228178955::get_offset_of__outArgs_0(),
	ReturnMessage_t1228178955::get_offset_of__args_1(),
	ReturnMessage_t1228178955::get_offset_of__outArgsCount_2(),
	ReturnMessage_t1228178955::get_offset_of__callCtx_3(),
	ReturnMessage_t1228178955::get_offset_of__returnValue_4(),
	ReturnMessage_t1228178955::get_offset_of__uri_5(),
	ReturnMessage_t1228178955::get_offset_of__exception_6(),
	ReturnMessage_t1228178955::get_offset_of__methodBase_7(),
	ReturnMessage_t1228178955::get_offset_of__methodName_8(),
	ReturnMessage_t1228178955::get_offset_of__methodSignature_9(),
	ReturnMessage_t1228178955::get_offset_of__typeName_10(),
	ReturnMessage_t1228178955::get_offset_of__properties_11(),
	ReturnMessage_t1228178955::get_offset_of__inArgInfo_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize551 = { sizeof (ServerContextTerminatorSink_t434810407), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize552 = { sizeof (ServerObjectTerminatorSink_t979267002), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable552[1] = 
{
	ServerObjectTerminatorSink_t979267002::get_offset_of__nextSink_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize553 = { sizeof (StackBuilderSink_t1433904979), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable553[2] = 
{
	StackBuilderSink_t1433904979::get_offset_of__target_0(),
	StackBuilderSink_t1433904979::get_offset_of__rp_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize554 = { sizeof (SoapAttribute_t2378586715), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable554[3] = 
{
	SoapAttribute_t2378586715::get_offset_of__useAttribute_0(),
	SoapAttribute_t2378586715::get_offset_of_ProtXmlNamespace_1(),
	SoapAttribute_t2378586715::get_offset_of_ReflectInfo_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize555 = { sizeof (SoapFieldAttribute_t2549054394), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable555[2] = 
{
	SoapFieldAttribute_t2549054394::get_offset_of__elementName_3(),
	SoapFieldAttribute_t2549054394::get_offset_of__isElement_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize556 = { sizeof (SoapMethodAttribute_t2266268136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable556[6] = 
{
	SoapMethodAttribute_t2266268136::get_offset_of__responseElement_3(),
	SoapMethodAttribute_t2266268136::get_offset_of__responseNamespace_4(),
	SoapMethodAttribute_t2266268136::get_offset_of__returnElement_5(),
	SoapMethodAttribute_t2266268136::get_offset_of__soapAction_6(),
	SoapMethodAttribute_t2266268136::get_offset_of__useAttribute_7(),
	SoapMethodAttribute_t2266268136::get_offset_of__namespace_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize557 = { sizeof (SoapParameterAttribute_t95860180), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize558 = { sizeof (SoapTypeAttribute_t3751848300), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable558[7] = 
{
	SoapTypeAttribute_t3751848300::get_offset_of__useAttribute_3(),
	SoapTypeAttribute_t3751848300::get_offset_of__xmlElementName_4(),
	SoapTypeAttribute_t3751848300::get_offset_of__xmlNamespace_5(),
	SoapTypeAttribute_t3751848300::get_offset_of__xmlTypeName_6(),
	SoapTypeAttribute_t3751848300::get_offset_of__xmlTypeNamespace_7(),
	SoapTypeAttribute_t3751848300::get_offset_of__isType_8(),
	SoapTypeAttribute_t3751848300::get_offset_of__isElement_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize559 = { sizeof (ProxyAttribute_t4173475434), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize560 = { sizeof (TransparentProxy_t571554740), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable560[1] = 
{
	TransparentProxy_t571554740::get_offset_of__rp_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize561 = { sizeof (RealProxy_t3254981993), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable561[5] = 
{
	RealProxy_t3254981993::get_offset_of_class_to_proxy_0(),
	RealProxy_t3254981993::get_offset_of__targetDomainId_1(),
	RealProxy_t3254981993::get_offset_of__targetUri_2(),
	RealProxy_t3254981993::get_offset_of__objectIdentity_3(),
	RealProxy_t3254981993::get_offset_of__objTP_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize562 = { sizeof (RemotingProxy_t13090642), -1, sizeof(RemotingProxy_t13090642_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable562[5] = 
{
	RemotingProxy_t13090642_StaticFields::get_offset_of__cache_GetTypeMethod_5(),
	RemotingProxy_t13090642_StaticFields::get_offset_of__cache_GetHashCodeMethod_6(),
	RemotingProxy_t13090642::get_offset_of__sink_7(),
	RemotingProxy_t13090642::get_offset_of__hasEnvoySink_8(),
	RemotingProxy_t13090642::get_offset_of__ctorCall_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize563 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize564 = { sizeof (TrackingServices_t1810649676), -1, sizeof(TrackingServices_t1810649676_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable564[1] = 
{
	TrackingServices_t1810649676_StaticFields::get_offset_of__handlers_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize565 = { sizeof (ActivatedClientTypeEntry_t145162810), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable565[2] = 
{
	ActivatedClientTypeEntry_t145162810::get_offset_of_applicationUrl_2(),
	ActivatedClientTypeEntry_t145162810::get_offset_of_obj_type_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize566 = { sizeof (ActivatedServiceTypeEntry_t872521767), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable566[1] = 
{
	ActivatedServiceTypeEntry_t872521767::get_offset_of_obj_type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize567 = { sizeof (EnvoyInfo_t3045591672), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable567[1] = 
{
	EnvoyInfo_t3045591672::get_offset_of_envoySinks_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize568 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize569 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize570 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize571 = { sizeof (Identity_t3398186979), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable571[7] = 
{
	Identity_t3398186979::get_offset_of__objectUri_0(),
	Identity_t3398186979::get_offset_of__channelSink_1(),
	Identity_t3398186979::get_offset_of__envoySink_2(),
	Identity_t3398186979::get_offset_of__clientDynamicProperties_3(),
	Identity_t3398186979::get_offset_of__serverDynamicProperties_4(),
	Identity_t3398186979::get_offset_of__objRef_5(),
	Identity_t3398186979::get_offset_of__disposed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize572 = { sizeof (ClientIdentity_t1791328503), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable572[1] = 
{
	ClientIdentity_t1791328503::get_offset_of__proxyReference_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize573 = { sizeof (InternalRemotingServices_t229150950), -1, sizeof(InternalRemotingServices_t229150950_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable573[1] = 
{
	InternalRemotingServices_t229150950_StaticFields::get_offset_of__soapAttributes_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize574 = { sizeof (ObjRef_t3894886840), -1, sizeof(ObjRef_t3894886840_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable574[9] = 
{
	ObjRef_t3894886840::get_offset_of_channel_info_0(),
	ObjRef_t3894886840::get_offset_of_uri_1(),
	ObjRef_t3894886840::get_offset_of_typeInfo_2(),
	ObjRef_t3894886840::get_offset_of_envoyInfo_3(),
	ObjRef_t3894886840::get_offset_of_flags_4(),
	ObjRef_t3894886840::get_offset_of__serverType_5(),
	ObjRef_t3894886840_StaticFields::get_offset_of_MarshalledObjectRef_6(),
	ObjRef_t3894886840_StaticFields::get_offset_of_WellKnowObjectRef_7(),
	ObjRef_t3894886840_StaticFields::get_offset_of_U3CU3Ef__switchU24map26_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize575 = { sizeof (RemotingConfiguration_t3267472338), -1, sizeof(RemotingConfiguration_t3267472338_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable575[13] = 
{
	RemotingConfiguration_t3267472338_StaticFields::get_offset_of_applicationID_0(),
	RemotingConfiguration_t3267472338_StaticFields::get_offset_of_applicationName_1(),
	RemotingConfiguration_t3267472338_StaticFields::get_offset_of_processGuid_2(),
	RemotingConfiguration_t3267472338_StaticFields::get_offset_of_defaultConfigRead_3(),
	RemotingConfiguration_t3267472338_StaticFields::get_offset_of_defaultDelayedConfigRead_4(),
	RemotingConfiguration_t3267472338_StaticFields::get_offset_of__errorMode_5(),
	RemotingConfiguration_t3267472338_StaticFields::get_offset_of_wellKnownClientEntries_6(),
	RemotingConfiguration_t3267472338_StaticFields::get_offset_of_activatedClientEntries_7(),
	RemotingConfiguration_t3267472338_StaticFields::get_offset_of_wellKnownServiceEntries_8(),
	RemotingConfiguration_t3267472338_StaticFields::get_offset_of_activatedServiceEntries_9(),
	RemotingConfiguration_t3267472338_StaticFields::get_offset_of_channelTemplates_10(),
	RemotingConfiguration_t3267472338_StaticFields::get_offset_of_clientProviderTemplates_11(),
	RemotingConfiguration_t3267472338_StaticFields::get_offset_of_serverProviderTemplates_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize576 = { sizeof (ConfigHandler_t1108969946), -1, sizeof(ConfigHandler_t1108969946_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable576[10] = 
{
	ConfigHandler_t1108969946::get_offset_of_typeEntries_0(),
	ConfigHandler_t1108969946::get_offset_of_channelInstances_1(),
	ConfigHandler_t1108969946::get_offset_of_currentChannel_2(),
	ConfigHandler_t1108969946::get_offset_of_currentProviderData_3(),
	ConfigHandler_t1108969946::get_offset_of_currentClientUrl_4(),
	ConfigHandler_t1108969946::get_offset_of_appName_5(),
	ConfigHandler_t1108969946::get_offset_of_currentXmlPath_6(),
	ConfigHandler_t1108969946::get_offset_of_onlyDelayedChannels_7(),
	ConfigHandler_t1108969946_StaticFields::get_offset_of_U3CU3Ef__switchU24map27_8(),
	ConfigHandler_t1108969946_StaticFields::get_offset_of_U3CU3Ef__switchU24map28_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize577 = { sizeof (ChannelData_t1971636194), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable577[7] = 
{
	ChannelData_t1971636194::get_offset_of_Ref_0(),
	ChannelData_t1971636194::get_offset_of_Type_1(),
	ChannelData_t1971636194::get_offset_of_Id_2(),
	ChannelData_t1971636194::get_offset_of_DelayLoadAsClientChannel_3(),
	ChannelData_t1971636194::get_offset_of__serverProviders_4(),
	ChannelData_t1971636194::get_offset_of__clientProviders_5(),
	ChannelData_t1971636194::get_offset_of__customProperties_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize578 = { sizeof (ProviderData_t3818146511), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable578[5] = 
{
	ProviderData_t3818146511::get_offset_of_Ref_0(),
	ProviderData_t3818146511::get_offset_of_Type_1(),
	ProviderData_t3818146511::get_offset_of_Id_2(),
	ProviderData_t3818146511::get_offset_of_CustomProperties_3(),
	ProviderData_t3818146511::get_offset_of_CustomData_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize579 = { sizeof (FormatterData_t557963947), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize580 = { sizeof (RemotingException_t3456746615), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize581 = { sizeof (RemotingServices_t803427945), -1, sizeof(RemotingServices_t803427945_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable581[8] = 
{
	RemotingServices_t803427945_StaticFields::get_offset_of_uri_hash_0(),
	RemotingServices_t803427945_StaticFields::get_offset_of__serializationFormatter_1(),
	RemotingServices_t803427945_StaticFields::get_offset_of__deserializationFormatter_2(),
	RemotingServices_t803427945_StaticFields::get_offset_of_app_id_3(),
	RemotingServices_t803427945_StaticFields::get_offset_of_next_id_4(),
	RemotingServices_t803427945_StaticFields::get_offset_of_methodBindings_5(),
	RemotingServices_t803427945_StaticFields::get_offset_of_FieldSetterMethod_6(),
	RemotingServices_t803427945_StaticFields::get_offset_of_FieldGetterMethod_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize582 = { sizeof (ServerIdentity_t2872288717), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable582[5] = 
{
	ServerIdentity_t2872288717::get_offset_of__objectType_7(),
	ServerIdentity_t2872288717::get_offset_of__serverObject_8(),
	ServerIdentity_t2872288717::get_offset_of__serverSink_9(),
	ServerIdentity_t2872288717::get_offset_of__context_10(),
	ServerIdentity_t2872288717::get_offset_of__lease_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize583 = { sizeof (ClientActivatedIdentity_t2634035449), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize584 = { sizeof (SingletonIdentity_t3582602160), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize585 = { sizeof (SingleCallIdentity_t164680570), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize586 = { sizeof (SoapServices_t3011640723), -1, sizeof(SoapServices_t3011640723_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable586[5] = 
{
	SoapServices_t3011640723_StaticFields::get_offset_of__xmlTypes_0(),
	SoapServices_t3011640723_StaticFields::get_offset_of__xmlElements_1(),
	SoapServices_t3011640723_StaticFields::get_offset_of__soapActions_2(),
	SoapServices_t3011640723_StaticFields::get_offset_of__soapActionsMethods_3(),
	SoapServices_t3011640723_StaticFields::get_offset_of__typeInfos_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize587 = { sizeof (TypeInfo_t1062248833), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable587[2] = 
{
	TypeInfo_t1062248833::get_offset_of_Attributes_0(),
	TypeInfo_t1062248833::get_offset_of_Elements_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize588 = { sizeof (TypeEntry_t1472761653), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable588[2] = 
{
	TypeEntry_t1472761653::get_offset_of_assembly_name_0(),
	TypeEntry_t1472761653::get_offset_of_type_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize589 = { sizeof (TypeInfo_t4128924288), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable589[3] = 
{
	TypeInfo_t4128924288::get_offset_of_serverType_0(),
	TypeInfo_t4128924288::get_offset_of_serverHierarchy_1(),
	TypeInfo_t4128924288::get_offset_of_interfacesImplemented_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize590 = { sizeof (WellKnownClientTypeEntry_t3654590287), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable590[3] = 
{
	WellKnownClientTypeEntry_t3654590287::get_offset_of_obj_type_2(),
	WellKnownClientTypeEntry_t3654590287::get_offset_of_obj_url_3(),
	WellKnownClientTypeEntry_t3654590287::get_offset_of_app_url_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize591 = { sizeof (WellKnownObjectMode_t3789746901)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable591[3] = 
{
	WellKnownObjectMode_t3789746901::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize592 = { sizeof (WellKnownServiceTypeEntry_t1949424422), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable592[3] = 
{
	WellKnownServiceTypeEntry_t1949424422::get_offset_of_obj_type_2(),
	WellKnownServiceTypeEntry_t1949424422::get_offset_of_obj_uri_3(),
	WellKnownServiceTypeEntry_t1949424422::get_offset_of_obj_mode_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize593 = { sizeof (BinaryCommon_t3518887154), -1, sizeof(BinaryCommon_t3518887154_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable593[4] = 
{
	BinaryCommon_t3518887154_StaticFields::get_offset_of_BinaryHeader_0(),
	BinaryCommon_t3518887154_StaticFields::get_offset_of__typeCodesToType_1(),
	BinaryCommon_t3518887154_StaticFields::get_offset_of__typeCodeMap_2(),
	BinaryCommon_t3518887154_StaticFields::get_offset_of_UseReflectionSerialization_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize594 = { sizeof (BinaryElement_t2918002141)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable594[24] = 
{
	BinaryElement_t2918002141::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize595 = { sizeof (TypeTag_t1597460466)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable595[9] = 
{
	TypeTag_t1597460466::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize596 = { sizeof (MethodFlags_t1419404466)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable596[11] = 
{
	MethodFlags_t1419404466::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize597 = { sizeof (ReturnTypeTag_t4203705022)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable597[5] = 
{
	ReturnTypeTag_t4203705022::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize598 = { sizeof (BinaryFormatter_t1971846531), -1, sizeof(BinaryFormatter_t1971846531_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable598[7] = 
{
	BinaryFormatter_t1971846531::get_offset_of_assembly_format_0(),
	BinaryFormatter_t1971846531::get_offset_of_binder_1(),
	BinaryFormatter_t1971846531::get_offset_of_context_2(),
	BinaryFormatter_t1971846531::get_offset_of_surrogate_selector_3(),
	BinaryFormatter_t1971846531::get_offset_of_type_format_4(),
	BinaryFormatter_t1971846531::get_offset_of_filter_level_5(),
	BinaryFormatter_t1971846531_StaticFields::get_offset_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize599 = { sizeof (CodeGenerator_t1612317817), -1, sizeof(CodeGenerator_t1612317817_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable599[2] = 
{
	CodeGenerator_t1612317817_StaticFields::get_offset_of_monitor_0(),
	CodeGenerator_t1612317817_StaticFields::get_offset_of__module_1(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
