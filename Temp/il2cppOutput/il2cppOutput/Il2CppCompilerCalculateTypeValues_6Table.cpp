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

// System.Collections.Hashtable
struct Hashtable_t188184851;
// System.Collections.ArrayList
struct ArrayList_t1090370772;
// System.String
struct String_t;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t909066729;
// System.Collections.IEnumerator
struct IEnumerator_t1476090656;
// System.Runtime.Serialization.SerializationCallbacks
struct SerializationCallbacks_t742565834;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1360047143;
// System.Byte[]
struct ByteU5BU5D_t2378657911;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t2604602054;
// System.Security.Cryptography.CspParameters
struct CspParameters_t4291407971;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t2761455344;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1115686309;
// System.IntPtr[]
struct IntPtrU5BU5D_t271461801;
// System.Collections.IDictionary
struct IDictionary_t1279208843;
// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer
struct InstanceComparer_t87733426;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t259536267;
// System.String[]
struct StringU5BU5D_t1002137567;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t3506361754;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3588703597;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t802614987;
// System.UInt32[]
struct UInt32U5BU5D_t1751769761;
// System.Security.Cryptography.DSA
struct DSA_t2257449250;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t3908565528;
// System.Char[]
struct CharU5BU5D_t3282355116;
// System.Void
struct Void_t3918784447;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Int32[]
struct Int32U5BU5D_t1719863841;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2296229153;
// System.Security.Cryptography.TripleDES
struct TripleDES_t2204016143;
// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t1667991735;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t2165077239;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t2171626949;
// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t1882898536;
// System.IO.Stream
struct Stream_t2967449720;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t4021321872;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t214215410;
// System.Runtime.Serialization.ISerializationSurrogate
struct ISerializationSurrogate_t4180361577;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t2264857852;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t3407680861;
// System.Security.SecureString
struct SecureString_t2781743094;
// System.Byte[,]
struct ByteU5BU2CU5D_t2378657912;
// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct CallbackHandler_t4077992800;
// System.Runtime.Serialization.ObjectIDGenerator
struct ObjectIDGenerator_t220037371;
// System.Collections.Queue
struct Queue_t1728721708;
// System.Reflection.Assembly
struct Assembly_t2048463656;
// System.Runtime.Serialization.SerializationObjectManager
struct SerializationObjectManager_t104510113;
// System.IAsyncResult
struct IAsyncResult_t326317600;
// System.AsyncCallback
struct AsyncCallback_t1487541470;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t534173557;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2395696821;




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
#ifndef MESSAGEFORMATTER_T1553117616_H
#define MESSAGEFORMATTER_T1553117616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MessageFormatter
struct  MessageFormatter_t1553117616  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEFORMATTER_T1553117616_H
#ifndef SERIALIZATIONINFO_T214215410_H
#define SERIALIZATIONINFO_T214215410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t214215410  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_t188184851 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t1090370772 * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	RuntimeObject* ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t214215410, ___serialized_0)); }
	inline Hashtable_t188184851 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_t188184851 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_t188184851 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier((&___serialized_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t214215410, ___values_1)); }
	inline ArrayList_t1090370772 * get_values_1() const { return ___values_1; }
	inline ArrayList_t1090370772 ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t1090370772 * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t214215410, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_2), value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t214215410, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_3), value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t214215410, ___converter_4)); }
	inline RuntimeObject* get_converter_4() const { return ___converter_4; }
	inline RuntimeObject** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(RuntimeObject* value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T214215410_H
#ifndef SERIALIZATIONINFOENUMERATOR_T906076048_H
#define SERIALIZATIONINFOENUMERATOR_T906076048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfoEnumerator
struct  SerializationInfoEnumerator_t906076048  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Runtime.Serialization.SerializationInfoEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(SerializationInfoEnumerator_t906076048, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFOENUMERATOR_T906076048_H
#ifndef U3CREGISTEROBJECTU3EC__ANONSTOREY3_T3621939586_H
#define U3CREGISTEROBJECTU3EC__ANONSTOREY3_T3621939586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey3
struct  U3CRegisterObjectU3Ec__AnonStorey3_t3621939586  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.SerializationCallbacks System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey3::sc
	SerializationCallbacks_t742565834 * ___sc_0;
	// System.Object System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey3::obj
	RuntimeObject * ___obj_1;

public:
	inline static int32_t get_offset_of_sc_0() { return static_cast<int32_t>(offsetof(U3CRegisterObjectU3Ec__AnonStorey3_t3621939586, ___sc_0)); }
	inline SerializationCallbacks_t742565834 * get_sc_0() const { return ___sc_0; }
	inline SerializationCallbacks_t742565834 ** get_address_of_sc_0() { return &___sc_0; }
	inline void set_sc_0(SerializationCallbacks_t742565834 * value)
	{
		___sc_0 = value;
		Il2CppCodeGenWriteBarrier((&___sc_0), value);
	}

	inline static int32_t get_offset_of_obj_1() { return static_cast<int32_t>(offsetof(U3CRegisterObjectU3Ec__AnonStorey3_t3621939586, ___obj_1)); }
	inline RuntimeObject * get_obj_1() const { return ___obj_1; }
	inline RuntimeObject ** get_address_of_obj_1() { return &___obj_1; }
	inline void set_obj_1(RuntimeObject * value)
	{
		___obj_1 = value;
		Il2CppCodeGenWriteBarrier((&___obj_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREGISTEROBJECTU3EC__ANONSTOREY3_T3621939586_H
#ifndef OBJECTSECURITY_T1763213511_H
#define OBJECTSECURITY_T1763213511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AccessControl.ObjectSecurity
struct  ObjectSecurity_t1763213511  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTSECURITY_T1763213511_H
#ifndef X509CERTIFICATE_T3183509327_H
#define X509CERTIFICATE_T3183509327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate
struct  X509Certificate_t3183509327  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate::x509
	X509Certificate_t1360047143 * ___x509_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::cachedCertificateHash
	ByteU5BU5D_t2378657911* ___cachedCertificateHash_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_3;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_4;

public:
	inline static int32_t get_offset_of_x509_0() { return static_cast<int32_t>(offsetof(X509Certificate_t3183509327, ___x509_0)); }
	inline X509Certificate_t1360047143 * get_x509_0() const { return ___x509_0; }
	inline X509Certificate_t1360047143 ** get_address_of_x509_0() { return &___x509_0; }
	inline void set_x509_0(X509Certificate_t1360047143 * value)
	{
		___x509_0 = value;
		Il2CppCodeGenWriteBarrier((&___x509_0), value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t3183509327, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_cachedCertificateHash_2() { return static_cast<int32_t>(offsetof(X509Certificate_t3183509327, ___cachedCertificateHash_2)); }
	inline ByteU5BU5D_t2378657911* get_cachedCertificateHash_2() const { return ___cachedCertificateHash_2; }
	inline ByteU5BU5D_t2378657911** get_address_of_cachedCertificateHash_2() { return &___cachedCertificateHash_2; }
	inline void set_cachedCertificateHash_2(ByteU5BU5D_t2378657911* value)
	{
		___cachedCertificateHash_2 = value;
		Il2CppCodeGenWriteBarrier((&___cachedCertificateHash_2), value);
	}

	inline static int32_t get_offset_of_issuer_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t3183509327, ___issuer_name_3)); }
	inline String_t* get_issuer_name_3() const { return ___issuer_name_3; }
	inline String_t** get_address_of_issuer_name_3() { return &___issuer_name_3; }
	inline void set_issuer_name_3(String_t* value)
	{
		___issuer_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_name_3), value);
	}

	inline static int32_t get_offset_of_subject_name_4() { return static_cast<int32_t>(offsetof(X509Certificate_t3183509327, ___subject_name_4)); }
	inline String_t* get_subject_name_4() const { return ___subject_name_4; }
	inline String_t** get_address_of_subject_name_4() { return &___subject_name_4; }
	inline void set_subject_name_4(String_t* value)
	{
		___subject_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___subject_name_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T3183509327_H
#ifndef ASYMMETRICALGORITHM_T4121483336_H
#define ASYMMETRICALGORITHM_T4121483336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t4121483336  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t2604602054* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t4121483336, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t4121483336, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t2604602054* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t2604602054** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t2604602054* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T4121483336_H
#ifndef ASYMMETRICKEYEXCHANGEDEFORMATTER_T3440597542_H
#define ASYMMETRICKEYEXCHANGEDEFORMATTER_T3440597542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeDeformatter
struct  AsymmetricKeyExchangeDeformatter_t3440597542  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEDEFORMATTER_T3440597542_H
#ifndef ASYMMETRICKEYEXCHANGEFORMATTER_T71173349_H
#define ASYMMETRICKEYEXCHANGEFORMATTER_T71173349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
struct  AsymmetricKeyExchangeFormatter_t71173349  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEFORMATTER_T71173349_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T3228332467_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T3228332467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t3228332467  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T3228332467_H
#ifndef ASYMMETRICSIGNATUREFORMATTER_T3931539935_H
#define ASYMMETRICSIGNATUREFORMATTER_T3931539935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct  AsymmetricSignatureFormatter_t3931539935  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREFORMATTER_T3931539935_H
#ifndef BASE64CONSTANTS_T1932035648_H
#define BASE64CONSTANTS_T1932035648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Base64Constants
struct  Base64Constants_t1932035648  : public RuntimeObject
{
public:

public:
};

struct Base64Constants_t1932035648_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.Base64Constants::EncodeTable
	ByteU5BU5D_t2378657911* ___EncodeTable_0;
	// System.Byte[] System.Security.Cryptography.Base64Constants::DecodeTable
	ByteU5BU5D_t2378657911* ___DecodeTable_1;

public:
	inline static int32_t get_offset_of_EncodeTable_0() { return static_cast<int32_t>(offsetof(Base64Constants_t1932035648_StaticFields, ___EncodeTable_0)); }
	inline ByteU5BU5D_t2378657911* get_EncodeTable_0() const { return ___EncodeTable_0; }
	inline ByteU5BU5D_t2378657911** get_address_of_EncodeTable_0() { return &___EncodeTable_0; }
	inline void set_EncodeTable_0(ByteU5BU5D_t2378657911* value)
	{
		___EncodeTable_0 = value;
		Il2CppCodeGenWriteBarrier((&___EncodeTable_0), value);
	}

	inline static int32_t get_offset_of_DecodeTable_1() { return static_cast<int32_t>(offsetof(Base64Constants_t1932035648_StaticFields, ___DecodeTable_1)); }
	inline ByteU5BU5D_t2378657911* get_DecodeTable_1() const { return ___DecodeTable_1; }
	inline ByteU5BU5D_t2378657911** get_address_of_DecodeTable_1() { return &___DecodeTable_1; }
	inline void set_DecodeTable_1(ByteU5BU5D_t2378657911* value)
	{
		___DecodeTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___DecodeTable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASE64CONSTANTS_T1932035648_H
#ifndef CRYPTOAPITRANSFORM_T2783517362_H
#define CRYPTOAPITRANSFORM_T2783517362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoAPITransform
struct  CryptoAPITransform_t2783517362  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Cryptography.CryptoAPITransform::m_disposed
	bool ___m_disposed_0;

public:
	inline static int32_t get_offset_of_m_disposed_0() { return static_cast<int32_t>(offsetof(CryptoAPITransform_t2783517362, ___m_disposed_0)); }
	inline bool get_m_disposed_0() const { return ___m_disposed_0; }
	inline bool* get_address_of_m_disposed_0() { return &___m_disposed_0; }
	inline void set_m_disposed_0(bool value)
	{
		___m_disposed_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOAPITRANSFORM_T2783517362_H
#ifndef CRYPTOCONFIG_T2211454577_H
#define CRYPTOCONFIG_T2211454577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoConfig
struct  CryptoConfig_t2211454577  : public RuntimeObject
{
public:

public:
};

struct CryptoConfig_t2211454577_StaticFields
{
public:
	// System.Object System.Security.Cryptography.CryptoConfig::lockObject
	RuntimeObject * ___lockObject_136;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::algorithms
	Hashtable_t188184851 * ___algorithms_137;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::oid
	Hashtable_t188184851 * ___oid_138;

public:
	inline static int32_t get_offset_of_lockObject_136() { return static_cast<int32_t>(offsetof(CryptoConfig_t2211454577_StaticFields, ___lockObject_136)); }
	inline RuntimeObject * get_lockObject_136() const { return ___lockObject_136; }
	inline RuntimeObject ** get_address_of_lockObject_136() { return &___lockObject_136; }
	inline void set_lockObject_136(RuntimeObject * value)
	{
		___lockObject_136 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_136), value);
	}

	inline static int32_t get_offset_of_algorithms_137() { return static_cast<int32_t>(offsetof(CryptoConfig_t2211454577_StaticFields, ___algorithms_137)); }
	inline Hashtable_t188184851 * get_algorithms_137() const { return ___algorithms_137; }
	inline Hashtable_t188184851 ** get_address_of_algorithms_137() { return &___algorithms_137; }
	inline void set_algorithms_137(Hashtable_t188184851 * value)
	{
		___algorithms_137 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_137), value);
	}

	inline static int32_t get_offset_of_oid_138() { return static_cast<int32_t>(offsetof(CryptoConfig_t2211454577_StaticFields, ___oid_138)); }
	inline Hashtable_t188184851 * get_oid_138() const { return ___oid_138; }
	inline Hashtable_t188184851 ** get_address_of_oid_138() { return &___oid_138; }
	inline void set_oid_138(Hashtable_t188184851 * value)
	{
		___oid_138 = value;
		Il2CppCodeGenWriteBarrier((&___oid_138), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONFIG_T2211454577_H
#ifndef CRYPTOHANDLER_T2970555817_H
#define CRYPTOHANDLER_T2970555817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoConfig/CryptoHandler
struct  CryptoHandler_t2970555817  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig/CryptoHandler::algorithms
	Hashtable_t188184851 * ___algorithms_0;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig/CryptoHandler::oid
	Hashtable_t188184851 * ___oid_1;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig/CryptoHandler::names
	Hashtable_t188184851 * ___names_2;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig/CryptoHandler::classnames
	Hashtable_t188184851 * ___classnames_3;
	// System.Int32 System.Security.Cryptography.CryptoConfig/CryptoHandler::level
	int32_t ___level_4;

public:
	inline static int32_t get_offset_of_algorithms_0() { return static_cast<int32_t>(offsetof(CryptoHandler_t2970555817, ___algorithms_0)); }
	inline Hashtable_t188184851 * get_algorithms_0() const { return ___algorithms_0; }
	inline Hashtable_t188184851 ** get_address_of_algorithms_0() { return &___algorithms_0; }
	inline void set_algorithms_0(Hashtable_t188184851 * value)
	{
		___algorithms_0 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_0), value);
	}

	inline static int32_t get_offset_of_oid_1() { return static_cast<int32_t>(offsetof(CryptoHandler_t2970555817, ___oid_1)); }
	inline Hashtable_t188184851 * get_oid_1() const { return ___oid_1; }
	inline Hashtable_t188184851 ** get_address_of_oid_1() { return &___oid_1; }
	inline void set_oid_1(Hashtable_t188184851 * value)
	{
		___oid_1 = value;
		Il2CppCodeGenWriteBarrier((&___oid_1), value);
	}

	inline static int32_t get_offset_of_names_2() { return static_cast<int32_t>(offsetof(CryptoHandler_t2970555817, ___names_2)); }
	inline Hashtable_t188184851 * get_names_2() const { return ___names_2; }
	inline Hashtable_t188184851 ** get_address_of_names_2() { return &___names_2; }
	inline void set_names_2(Hashtable_t188184851 * value)
	{
		___names_2 = value;
		Il2CppCodeGenWriteBarrier((&___names_2), value);
	}

	inline static int32_t get_offset_of_classnames_3() { return static_cast<int32_t>(offsetof(CryptoHandler_t2970555817, ___classnames_3)); }
	inline Hashtable_t188184851 * get_classnames_3() const { return ___classnames_3; }
	inline Hashtable_t188184851 ** get_address_of_classnames_3() { return &___classnames_3; }
	inline void set_classnames_3(Hashtable_t188184851 * value)
	{
		___classnames_3 = value;
		Il2CppCodeGenWriteBarrier((&___classnames_3), value);
	}

	inline static int32_t get_offset_of_level_4() { return static_cast<int32_t>(offsetof(CryptoHandler_t2970555817, ___level_4)); }
	inline int32_t get_level_4() const { return ___level_4; }
	inline int32_t* get_address_of_level_4() { return &___level_4; }
	inline void set_level_4(int32_t value)
	{
		___level_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOHANDLER_T2970555817_H
#ifndef CSPKEYCONTAINERINFO_T142824498_H
#define CSPKEYCONTAINERINFO_T142824498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspKeyContainerInfo
struct  CspKeyContainerInfo_t142824498  : public RuntimeObject
{
public:
	// System.Security.Cryptography.CspParameters System.Security.Cryptography.CspKeyContainerInfo::_params
	CspParameters_t4291407971 * ____params_0;
	// System.Boolean System.Security.Cryptography.CspKeyContainerInfo::_random
	bool ____random_1;

public:
	inline static int32_t get_offset_of__params_0() { return static_cast<int32_t>(offsetof(CspKeyContainerInfo_t142824498, ____params_0)); }
	inline CspParameters_t4291407971 * get__params_0() const { return ____params_0; }
	inline CspParameters_t4291407971 ** get_address_of__params_0() { return &____params_0; }
	inline void set__params_0(CspParameters_t4291407971 * value)
	{
		____params_0 = value;
		Il2CppCodeGenWriteBarrier((&____params_0), value);
	}

	inline static int32_t get_offset_of__random_1() { return static_cast<int32_t>(offsetof(CspKeyContainerInfo_t142824498, ____random_1)); }
	inline bool get__random_1() const { return ____random_1; }
	inline bool* get_address_of__random_1() { return &____random_1; }
	inline void set__random_1(bool value)
	{
		____random_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPKEYCONTAINERINFO_T142824498_H
#ifndef DERIVEBYTES_T708730207_H
#define DERIVEBYTES_T708730207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DeriveBytes
struct  DeriveBytes_t708730207  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEBYTES_T708730207_H
#ifndef HASHALGORITHM_T3908565528_H
#define HASHALGORITHM_T3908565528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t3908565528  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t2378657911* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3908565528, ___HashValue_0)); }
	inline ByteU5BU5D_t2378657911* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t2378657911** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t2378657911* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3908565528, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3908565528, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3908565528, ___disposed_3)); }
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
#endif // HASHALGORITHM_T3908565528_H
#ifndef KEYSIZES_T740852447_H
#define KEYSIZES_T740852447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeySizes
struct  KeySizes_t740852447  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.KeySizes::_maxSize
	int32_t ____maxSize_0;
	// System.Int32 System.Security.Cryptography.KeySizes::_minSize
	int32_t ____minSize_1;
	// System.Int32 System.Security.Cryptography.KeySizes::_skipSize
	int32_t ____skipSize_2;

public:
	inline static int32_t get_offset_of__maxSize_0() { return static_cast<int32_t>(offsetof(KeySizes_t740852447, ____maxSize_0)); }
	inline int32_t get__maxSize_0() const { return ____maxSize_0; }
	inline int32_t* get_address_of__maxSize_0() { return &____maxSize_0; }
	inline void set__maxSize_0(int32_t value)
	{
		____maxSize_0 = value;
	}

	inline static int32_t get_offset_of__minSize_1() { return static_cast<int32_t>(offsetof(KeySizes_t740852447, ____minSize_1)); }
	inline int32_t get__minSize_1() const { return ____minSize_1; }
	inline int32_t* get_address_of__minSize_1() { return &____minSize_1; }
	inline void set__minSize_1(int32_t value)
	{
		____minSize_1 = value;
	}

	inline static int32_t get_offset_of__skipSize_2() { return static_cast<int32_t>(offsetof(KeySizes_t740852447, ____skipSize_2)); }
	inline int32_t get__skipSize_2() const { return ____skipSize_2; }
	inline int32_t* get_address_of__skipSize_2() { return &____skipSize_2; }
	inline void set__skipSize_2(int32_t value)
	{
		____skipSize_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSIZES_T740852447_H
#ifndef MASKGENERATIONMETHOD_T154787205_H
#define MASKGENERATIONMETHOD_T154787205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MaskGenerationMethod
struct  MaskGenerationMethod_t154787205  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKGENERATIONMETHOD_T154787205_H
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
#ifndef STREAM_T2967449720_H
#define STREAM_T2967449720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t2967449720  : public RuntimeObject
{
public:

public:
};

struct Stream_t2967449720_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t2967449720 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t2967449720_StaticFields, ___Null_0)); }
	inline Stream_t2967449720 * get_Null_0() const { return ___Null_0; }
	inline Stream_t2967449720 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t2967449720 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T2967449720_H
#ifndef SYMMETRICTRANSFORM_T3077681375_H
#define SYMMETRICTRANSFORM_T3077681375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t3077681375  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t2761455344 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t2378657911* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t2378657911* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t2378657911* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t2378657911* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t1115686309 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3077681375, ___algo_0)); }
	inline SymmetricAlgorithm_t2761455344 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t2761455344 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t2761455344 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3077681375, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3077681375, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3077681375, ___temp_3)); }
	inline ByteU5BU5D_t2378657911* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t2378657911** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t2378657911* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3077681375, ___temp2_4)); }
	inline ByteU5BU5D_t2378657911* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t2378657911** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t2378657911* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3077681375, ___workBuff_5)); }
	inline ByteU5BU5D_t2378657911* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t2378657911** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t2378657911* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3077681375, ___workout_6)); }
	inline ByteU5BU5D_t2378657911* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t2378657911** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t2378657911* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3077681375, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3077681375, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3077681375, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3077681375, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3077681375, ____rng_11)); }
	inline RandomNumberGenerator_t1115686309 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t1115686309 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t1115686309 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T3077681375_H
#ifndef SERIALIZATIONCALLBACKS_T742565834_H
#define SERIALIZATIONCALLBACKS_T742565834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationCallbacks
struct  SerializationCallbacks_t742565834  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onSerializingList
	ArrayList_t1090370772 * ___onSerializingList_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onSerializedList
	ArrayList_t1090370772 * ___onSerializedList_1;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onDeserializingList
	ArrayList_t1090370772 * ___onDeserializingList_2;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onDeserializedList
	ArrayList_t1090370772 * ___onDeserializedList_3;

public:
	inline static int32_t get_offset_of_onSerializingList_0() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t742565834, ___onSerializingList_0)); }
	inline ArrayList_t1090370772 * get_onSerializingList_0() const { return ___onSerializingList_0; }
	inline ArrayList_t1090370772 ** get_address_of_onSerializingList_0() { return &___onSerializingList_0; }
	inline void set_onSerializingList_0(ArrayList_t1090370772 * value)
	{
		___onSerializingList_0 = value;
		Il2CppCodeGenWriteBarrier((&___onSerializingList_0), value);
	}

	inline static int32_t get_offset_of_onSerializedList_1() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t742565834, ___onSerializedList_1)); }
	inline ArrayList_t1090370772 * get_onSerializedList_1() const { return ___onSerializedList_1; }
	inline ArrayList_t1090370772 ** get_address_of_onSerializedList_1() { return &___onSerializedList_1; }
	inline void set_onSerializedList_1(ArrayList_t1090370772 * value)
	{
		___onSerializedList_1 = value;
		Il2CppCodeGenWriteBarrier((&___onSerializedList_1), value);
	}

	inline static int32_t get_offset_of_onDeserializingList_2() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t742565834, ___onDeserializingList_2)); }
	inline ArrayList_t1090370772 * get_onDeserializingList_2() const { return ___onDeserializingList_2; }
	inline ArrayList_t1090370772 ** get_address_of_onDeserializingList_2() { return &___onDeserializingList_2; }
	inline void set_onDeserializingList_2(ArrayList_t1090370772 * value)
	{
		___onDeserializingList_2 = value;
		Il2CppCodeGenWriteBarrier((&___onDeserializingList_2), value);
	}

	inline static int32_t get_offset_of_onDeserializedList_3() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t742565834, ___onDeserializedList_3)); }
	inline ArrayList_t1090370772 * get_onDeserializedList_3() const { return ___onDeserializedList_3; }
	inline ArrayList_t1090370772 ** get_address_of_onDeserializedList_3() { return &___onDeserializedList_3; }
	inline void set_onDeserializedList_3(ArrayList_t1090370772 * value)
	{
		___onDeserializedList_3 = value;
		Il2CppCodeGenWriteBarrier((&___onDeserializedList_3), value);
	}
};

struct SerializationCallbacks_t742565834_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationCallbacks::cache
	Hashtable_t188184851 * ___cache_4;
	// System.Object System.Runtime.Serialization.SerializationCallbacks::cache_lock
	RuntimeObject * ___cache_lock_5;

public:
	inline static int32_t get_offset_of_cache_4() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t742565834_StaticFields, ___cache_4)); }
	inline Hashtable_t188184851 * get_cache_4() const { return ___cache_4; }
	inline Hashtable_t188184851 ** get_address_of_cache_4() { return &___cache_4; }
	inline void set_cache_4(Hashtable_t188184851 * value)
	{
		___cache_4 = value;
		Il2CppCodeGenWriteBarrier((&___cache_4), value);
	}

	inline static int32_t get_offset_of_cache_lock_5() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t742565834_StaticFields, ___cache_lock_5)); }
	inline RuntimeObject * get_cache_lock_5() const { return ___cache_lock_5; }
	inline RuntimeObject ** get_address_of_cache_lock_5() { return &___cache_lock_5; }
	inline void set_cache_lock_5(RuntimeObject * value)
	{
		___cache_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___cache_lock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONCALLBACKS_T742565834_H
#ifndef SERIALIZATIONBINDER_T534173557_H
#define SERIALIZATIONBINDER_T534173557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationBinder
struct  SerializationBinder_t534173557  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONBINDER_T534173557_H
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
#ifndef FORMATTERCONVERTER_T1229115976_H
#define FORMATTERCONVERTER_T1229115976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FormatterConverter
struct  FormatterConverter_t1229115976  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERCONVERTER_T1229115976_H
#ifndef OBJECTIDGENERATOR_T220037371_H
#define OBJECTIDGENERATOR_T220037371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectIDGenerator
struct  ObjectIDGenerator_t220037371  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.ObjectIDGenerator::table
	Hashtable_t188184851 * ___table_0;
	// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::current
	int64_t ___current_1;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(ObjectIDGenerator_t220037371, ___table_0)); }
	inline Hashtable_t188184851 * get_table_0() const { return ___table_0; }
	inline Hashtable_t188184851 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Hashtable_t188184851 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((&___table_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(ObjectIDGenerator_t220037371, ___current_1)); }
	inline int64_t get_current_1() const { return ___current_1; }
	inline int64_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int64_t value)
	{
		___current_1 = value;
	}
};

struct ObjectIDGenerator_t220037371_StaticFields
{
public:
	// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer System.Runtime.Serialization.ObjectIDGenerator::comparer
	InstanceComparer_t87733426 * ___comparer_2;

public:
	inline static int32_t get_offset_of_comparer_2() { return static_cast<int32_t>(offsetof(ObjectIDGenerator_t220037371_StaticFields, ___comparer_2)); }
	inline InstanceComparer_t87733426 * get_comparer_2() const { return ___comparer_2; }
	inline InstanceComparer_t87733426 ** get_address_of_comparer_2() { return &___comparer_2; }
	inline void set_comparer_2(InstanceComparer_t87733426 * value)
	{
		___comparer_2 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTIDGENERATOR_T220037371_H
#ifndef TYPEMETADATA_T2838334036_H
#define TYPEMETADATA_T2838334036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
struct  TypeMetadata_t2838334036  : public RuntimeObject
{
public:
	// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::Type
	Type_t * ___Type_0;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberTypes
	TypeU5BU5D_t259536267* ___MemberTypes_1;
	// System.String[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberNames
	StringU5BU5D_t1002137567* ___MemberNames_2;
	// System.Reflection.MemberInfo[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberInfos
	MemberInfoU5BU5D_t3506361754* ___MemberInfos_3;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::FieldCount
	int32_t ___FieldCount_4;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::NeedsSerializationInfo
	bool ___NeedsSerializationInfo_5;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(TypeMetadata_t2838334036, ___Type_0)); }
	inline Type_t * get_Type_0() const { return ___Type_0; }
	inline Type_t ** get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(Type_t * value)
	{
		___Type_0 = value;
		Il2CppCodeGenWriteBarrier((&___Type_0), value);
	}

	inline static int32_t get_offset_of_MemberTypes_1() { return static_cast<int32_t>(offsetof(TypeMetadata_t2838334036, ___MemberTypes_1)); }
	inline TypeU5BU5D_t259536267* get_MemberTypes_1() const { return ___MemberTypes_1; }
	inline TypeU5BU5D_t259536267** get_address_of_MemberTypes_1() { return &___MemberTypes_1; }
	inline void set_MemberTypes_1(TypeU5BU5D_t259536267* value)
	{
		___MemberTypes_1 = value;
		Il2CppCodeGenWriteBarrier((&___MemberTypes_1), value);
	}

	inline static int32_t get_offset_of_MemberNames_2() { return static_cast<int32_t>(offsetof(TypeMetadata_t2838334036, ___MemberNames_2)); }
	inline StringU5BU5D_t1002137567* get_MemberNames_2() const { return ___MemberNames_2; }
	inline StringU5BU5D_t1002137567** get_address_of_MemberNames_2() { return &___MemberNames_2; }
	inline void set_MemberNames_2(StringU5BU5D_t1002137567* value)
	{
		___MemberNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberNames_2), value);
	}

	inline static int32_t get_offset_of_MemberInfos_3() { return static_cast<int32_t>(offsetof(TypeMetadata_t2838334036, ___MemberInfos_3)); }
	inline MemberInfoU5BU5D_t3506361754* get_MemberInfos_3() const { return ___MemberInfos_3; }
	inline MemberInfoU5BU5D_t3506361754** get_address_of_MemberInfos_3() { return &___MemberInfos_3; }
	inline void set_MemberInfos_3(MemberInfoU5BU5D_t3506361754* value)
	{
		___MemberInfos_3 = value;
		Il2CppCodeGenWriteBarrier((&___MemberInfos_3), value);
	}

	inline static int32_t get_offset_of_FieldCount_4() { return static_cast<int32_t>(offsetof(TypeMetadata_t2838334036, ___FieldCount_4)); }
	inline int32_t get_FieldCount_4() const { return ___FieldCount_4; }
	inline int32_t* get_address_of_FieldCount_4() { return &___FieldCount_4; }
	inline void set_FieldCount_4(int32_t value)
	{
		___FieldCount_4 = value;
	}

	inline static int32_t get_offset_of_NeedsSerializationInfo_5() { return static_cast<int32_t>(offsetof(TypeMetadata_t2838334036, ___NeedsSerializationInfo_5)); }
	inline bool get_NeedsSerializationInfo_5() const { return ___NeedsSerializationInfo_5; }
	inline bool* get_address_of_NeedsSerializationInfo_5() { return &___NeedsSerializationInfo_5; }
	inline void set_NeedsSerializationInfo_5(bool value)
	{
		___NeedsSerializationInfo_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEMETADATA_T2838334036_H
#ifndef INSTANCECOMPARER_T87733426_H
#define INSTANCECOMPARER_T87733426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer
struct  InstanceComparer_t87733426  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCECOMPARER_T87733426_H
#ifndef ARRAYNULLFILLER_T790178463_H
#define ARRAYNULLFILLER_T790178463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller
struct  ArrayNullFiller_t790178463  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller::NullCount
	int32_t ___NullCount_0;

public:
	inline static int32_t get_offset_of_NullCount_0() { return static_cast<int32_t>(offsetof(ArrayNullFiller_t790178463, ___NullCount_0)); }
	inline int32_t get_NullCount_0() const { return ___NullCount_0; }
	inline int32_t* get_address_of_NullCount_0() { return &___NullCount_0; }
	inline void set_NullCount_0(int32_t value)
	{
		___NullCount_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYNULLFILLER_T790178463_H
#ifndef TYPEMETADATA_T802614987_H
#define TYPEMETADATA_T802614987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct  TypeMetadata_t802614987  : public RuntimeObject
{
public:
	// System.String System.Runtime.Serialization.Formatters.Binary.TypeMetadata::TypeAssemblyName
	String_t* ___TypeAssemblyName_0;
	// System.String System.Runtime.Serialization.Formatters.Binary.TypeMetadata::InstanceTypeName
	String_t* ___InstanceTypeName_1;

public:
	inline static int32_t get_offset_of_TypeAssemblyName_0() { return static_cast<int32_t>(offsetof(TypeMetadata_t802614987, ___TypeAssemblyName_0)); }
	inline String_t* get_TypeAssemblyName_0() const { return ___TypeAssemblyName_0; }
	inline String_t** get_address_of_TypeAssemblyName_0() { return &___TypeAssemblyName_0; }
	inline void set_TypeAssemblyName_0(String_t* value)
	{
		___TypeAssemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((&___TypeAssemblyName_0), value);
	}

	inline static int32_t get_offset_of_InstanceTypeName_1() { return static_cast<int32_t>(offsetof(TypeMetadata_t802614987, ___InstanceTypeName_1)); }
	inline String_t* get_InstanceTypeName_1() const { return ___InstanceTypeName_1; }
	inline String_t** get_address_of_InstanceTypeName_1() { return &___InstanceTypeName_1; }
	inline void set_InstanceTypeName_1(String_t* value)
	{
		___InstanceTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceTypeName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEMETADATA_T802614987_H
#ifndef BASEFIXUPRECORD_T3407680861_H
#define BASEFIXUPRECORD_T3407680861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.BaseFixupRecord
struct  BaseFixupRecord_t3407680861  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.BaseFixupRecord::ObjectToBeFixed
	ObjectRecord_t3588703597 * ___ObjectToBeFixed_0;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.BaseFixupRecord::ObjectRequired
	ObjectRecord_t3588703597 * ___ObjectRequired_1;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.BaseFixupRecord::NextSameContainer
	BaseFixupRecord_t3407680861 * ___NextSameContainer_2;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.BaseFixupRecord::NextSameRequired
	BaseFixupRecord_t3407680861 * ___NextSameRequired_3;

public:
	inline static int32_t get_offset_of_ObjectToBeFixed_0() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t3407680861, ___ObjectToBeFixed_0)); }
	inline ObjectRecord_t3588703597 * get_ObjectToBeFixed_0() const { return ___ObjectToBeFixed_0; }
	inline ObjectRecord_t3588703597 ** get_address_of_ObjectToBeFixed_0() { return &___ObjectToBeFixed_0; }
	inline void set_ObjectToBeFixed_0(ObjectRecord_t3588703597 * value)
	{
		___ObjectToBeFixed_0 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectToBeFixed_0), value);
	}

	inline static int32_t get_offset_of_ObjectRequired_1() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t3407680861, ___ObjectRequired_1)); }
	inline ObjectRecord_t3588703597 * get_ObjectRequired_1() const { return ___ObjectRequired_1; }
	inline ObjectRecord_t3588703597 ** get_address_of_ObjectRequired_1() { return &___ObjectRequired_1; }
	inline void set_ObjectRequired_1(ObjectRecord_t3588703597 * value)
	{
		___ObjectRequired_1 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectRequired_1), value);
	}

	inline static int32_t get_offset_of_NextSameContainer_2() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t3407680861, ___NextSameContainer_2)); }
	inline BaseFixupRecord_t3407680861 * get_NextSameContainer_2() const { return ___NextSameContainer_2; }
	inline BaseFixupRecord_t3407680861 ** get_address_of_NextSameContainer_2() { return &___NextSameContainer_2; }
	inline void set_NextSameContainer_2(BaseFixupRecord_t3407680861 * value)
	{
		___NextSameContainer_2 = value;
		Il2CppCodeGenWriteBarrier((&___NextSameContainer_2), value);
	}

	inline static int32_t get_offset_of_NextSameRequired_3() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t3407680861, ___NextSameRequired_3)); }
	inline BaseFixupRecord_t3407680861 * get_NextSameRequired_3() const { return ___NextSameRequired_3; }
	inline BaseFixupRecord_t3407680861 ** get_address_of_NextSameRequired_3() { return &___NextSameRequired_3; }
	inline void set_NextSameRequired_3(BaseFixupRecord_t3407680861 * value)
	{
		___NextSameRequired_3 = value;
		Il2CppCodeGenWriteBarrier((&___NextSameRequired_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEFIXUPRECORD_T3407680861_H
#ifndef FORMATTERSERVICES_T2899463638_H
#define FORMATTERSERVICES_T2899463638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FormatterServices
struct  FormatterServices_t2899463638  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERSERVICES_T2899463638_H
#ifndef METADATAREFERENCE_T857703378_H
#define METADATAREFERENCE_T857703378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectWriter/MetadataReference
struct  MetadataReference_t857703378  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.Formatters.Binary.TypeMetadata System.Runtime.Serialization.Formatters.Binary.ObjectWriter/MetadataReference::Metadata
	TypeMetadata_t802614987 * ___Metadata_0;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectWriter/MetadataReference::ObjectID
	int64_t ___ObjectID_1;

public:
	inline static int32_t get_offset_of_Metadata_0() { return static_cast<int32_t>(offsetof(MetadataReference_t857703378, ___Metadata_0)); }
	inline TypeMetadata_t802614987 * get_Metadata_0() const { return ___Metadata_0; }
	inline TypeMetadata_t802614987 ** get_address_of_Metadata_0() { return &___Metadata_0; }
	inline void set_Metadata_0(TypeMetadata_t802614987 * value)
	{
		___Metadata_0 = value;
		Il2CppCodeGenWriteBarrier((&___Metadata_0), value);
	}

	inline static int32_t get_offset_of_ObjectID_1() { return static_cast<int32_t>(offsetof(MetadataReference_t857703378, ___ObjectID_1)); }
	inline int64_t get_ObjectID_1() const { return ___ObjectID_1; }
	inline int64_t* get_address_of_ObjectID_1() { return &___ObjectID_1; }
	inline void set_ObjectID_1(int64_t value)
	{
		___ObjectID_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METADATAREFERENCE_T857703378_H
#ifndef DESTRANSFORM_T227128484_H
#define DESTRANSFORM_T227128484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESTransform
struct  DESTransform_t227128484  : public SymmetricTransform_t3077681375
{
public:
	// System.Byte[] System.Security.Cryptography.DESTransform::keySchedule
	ByteU5BU5D_t2378657911* ___keySchedule_16;
	// System.Byte[] System.Security.Cryptography.DESTransform::byteBuff
	ByteU5BU5D_t2378657911* ___byteBuff_17;
	// System.UInt32[] System.Security.Cryptography.DESTransform::dwordBuff
	UInt32U5BU5D_t1751769761* ___dwordBuff_18;

public:
	inline static int32_t get_offset_of_keySchedule_16() { return static_cast<int32_t>(offsetof(DESTransform_t227128484, ___keySchedule_16)); }
	inline ByteU5BU5D_t2378657911* get_keySchedule_16() const { return ___keySchedule_16; }
	inline ByteU5BU5D_t2378657911** get_address_of_keySchedule_16() { return &___keySchedule_16; }
	inline void set_keySchedule_16(ByteU5BU5D_t2378657911* value)
	{
		___keySchedule_16 = value;
		Il2CppCodeGenWriteBarrier((&___keySchedule_16), value);
	}

	inline static int32_t get_offset_of_byteBuff_17() { return static_cast<int32_t>(offsetof(DESTransform_t227128484, ___byteBuff_17)); }
	inline ByteU5BU5D_t2378657911* get_byteBuff_17() const { return ___byteBuff_17; }
	inline ByteU5BU5D_t2378657911** get_address_of_byteBuff_17() { return &___byteBuff_17; }
	inline void set_byteBuff_17(ByteU5BU5D_t2378657911* value)
	{
		___byteBuff_17 = value;
		Il2CppCodeGenWriteBarrier((&___byteBuff_17), value);
	}

	inline static int32_t get_offset_of_dwordBuff_18() { return static_cast<int32_t>(offsetof(DESTransform_t227128484, ___dwordBuff_18)); }
	inline UInt32U5BU5D_t1751769761* get_dwordBuff_18() const { return ___dwordBuff_18; }
	inline UInt32U5BU5D_t1751769761** get_address_of_dwordBuff_18() { return &___dwordBuff_18; }
	inline void set_dwordBuff_18(UInt32U5BU5D_t1751769761* value)
	{
		___dwordBuff_18 = value;
		Il2CppCodeGenWriteBarrier((&___dwordBuff_18), value);
	}
};

struct DESTransform_t227128484_StaticFields
{
public:
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BIT_SIZE
	int32_t ___KEY_BIT_SIZE_12;
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BYTE_SIZE
	int32_t ___KEY_BYTE_SIZE_13;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BIT_SIZE
	int32_t ___BLOCK_BIT_SIZE_14;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BYTE_SIZE
	int32_t ___BLOCK_BYTE_SIZE_15;
	// System.UInt32[] System.Security.Cryptography.DESTransform::spBoxes
	UInt32U5BU5D_t1751769761* ___spBoxes_19;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC1
	ByteU5BU5D_t2378657911* ___PC1_20;
	// System.Byte[] System.Security.Cryptography.DESTransform::leftRotTotal
	ByteU5BU5D_t2378657911* ___leftRotTotal_21;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC2
	ByteU5BU5D_t2378657911* ___PC2_22;
	// System.UInt32[] System.Security.Cryptography.DESTransform::ipTab
	UInt32U5BU5D_t1751769761* ___ipTab_23;
	// System.UInt32[] System.Security.Cryptography.DESTransform::fpTab
	UInt32U5BU5D_t1751769761* ___fpTab_24;

public:
	inline static int32_t get_offset_of_KEY_BIT_SIZE_12() { return static_cast<int32_t>(offsetof(DESTransform_t227128484_StaticFields, ___KEY_BIT_SIZE_12)); }
	inline int32_t get_KEY_BIT_SIZE_12() const { return ___KEY_BIT_SIZE_12; }
	inline int32_t* get_address_of_KEY_BIT_SIZE_12() { return &___KEY_BIT_SIZE_12; }
	inline void set_KEY_BIT_SIZE_12(int32_t value)
	{
		___KEY_BIT_SIZE_12 = value;
	}

	inline static int32_t get_offset_of_KEY_BYTE_SIZE_13() { return static_cast<int32_t>(offsetof(DESTransform_t227128484_StaticFields, ___KEY_BYTE_SIZE_13)); }
	inline int32_t get_KEY_BYTE_SIZE_13() const { return ___KEY_BYTE_SIZE_13; }
	inline int32_t* get_address_of_KEY_BYTE_SIZE_13() { return &___KEY_BYTE_SIZE_13; }
	inline void set_KEY_BYTE_SIZE_13(int32_t value)
	{
		___KEY_BYTE_SIZE_13 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BIT_SIZE_14() { return static_cast<int32_t>(offsetof(DESTransform_t227128484_StaticFields, ___BLOCK_BIT_SIZE_14)); }
	inline int32_t get_BLOCK_BIT_SIZE_14() const { return ___BLOCK_BIT_SIZE_14; }
	inline int32_t* get_address_of_BLOCK_BIT_SIZE_14() { return &___BLOCK_BIT_SIZE_14; }
	inline void set_BLOCK_BIT_SIZE_14(int32_t value)
	{
		___BLOCK_BIT_SIZE_14 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BYTE_SIZE_15() { return static_cast<int32_t>(offsetof(DESTransform_t227128484_StaticFields, ___BLOCK_BYTE_SIZE_15)); }
	inline int32_t get_BLOCK_BYTE_SIZE_15() const { return ___BLOCK_BYTE_SIZE_15; }
	inline int32_t* get_address_of_BLOCK_BYTE_SIZE_15() { return &___BLOCK_BYTE_SIZE_15; }
	inline void set_BLOCK_BYTE_SIZE_15(int32_t value)
	{
		___BLOCK_BYTE_SIZE_15 = value;
	}

	inline static int32_t get_offset_of_spBoxes_19() { return static_cast<int32_t>(offsetof(DESTransform_t227128484_StaticFields, ___spBoxes_19)); }
	inline UInt32U5BU5D_t1751769761* get_spBoxes_19() const { return ___spBoxes_19; }
	inline UInt32U5BU5D_t1751769761** get_address_of_spBoxes_19() { return &___spBoxes_19; }
	inline void set_spBoxes_19(UInt32U5BU5D_t1751769761* value)
	{
		___spBoxes_19 = value;
		Il2CppCodeGenWriteBarrier((&___spBoxes_19), value);
	}

	inline static int32_t get_offset_of_PC1_20() { return static_cast<int32_t>(offsetof(DESTransform_t227128484_StaticFields, ___PC1_20)); }
	inline ByteU5BU5D_t2378657911* get_PC1_20() const { return ___PC1_20; }
	inline ByteU5BU5D_t2378657911** get_address_of_PC1_20() { return &___PC1_20; }
	inline void set_PC1_20(ByteU5BU5D_t2378657911* value)
	{
		___PC1_20 = value;
		Il2CppCodeGenWriteBarrier((&___PC1_20), value);
	}

	inline static int32_t get_offset_of_leftRotTotal_21() { return static_cast<int32_t>(offsetof(DESTransform_t227128484_StaticFields, ___leftRotTotal_21)); }
	inline ByteU5BU5D_t2378657911* get_leftRotTotal_21() const { return ___leftRotTotal_21; }
	inline ByteU5BU5D_t2378657911** get_address_of_leftRotTotal_21() { return &___leftRotTotal_21; }
	inline void set_leftRotTotal_21(ByteU5BU5D_t2378657911* value)
	{
		___leftRotTotal_21 = value;
		Il2CppCodeGenWriteBarrier((&___leftRotTotal_21), value);
	}

	inline static int32_t get_offset_of_PC2_22() { return static_cast<int32_t>(offsetof(DESTransform_t227128484_StaticFields, ___PC2_22)); }
	inline ByteU5BU5D_t2378657911* get_PC2_22() const { return ___PC2_22; }
	inline ByteU5BU5D_t2378657911** get_address_of_PC2_22() { return &___PC2_22; }
	inline void set_PC2_22(ByteU5BU5D_t2378657911* value)
	{
		___PC2_22 = value;
		Il2CppCodeGenWriteBarrier((&___PC2_22), value);
	}

	inline static int32_t get_offset_of_ipTab_23() { return static_cast<int32_t>(offsetof(DESTransform_t227128484_StaticFields, ___ipTab_23)); }
	inline UInt32U5BU5D_t1751769761* get_ipTab_23() const { return ___ipTab_23; }
	inline UInt32U5BU5D_t1751769761** get_address_of_ipTab_23() { return &___ipTab_23; }
	inline void set_ipTab_23(UInt32U5BU5D_t1751769761* value)
	{
		___ipTab_23 = value;
		Il2CppCodeGenWriteBarrier((&___ipTab_23), value);
	}

	inline static int32_t get_offset_of_fpTab_24() { return static_cast<int32_t>(offsetof(DESTransform_t227128484_StaticFields, ___fpTab_24)); }
	inline UInt32U5BU5D_t1751769761* get_fpTab_24() const { return ___fpTab_24; }
	inline UInt32U5BU5D_t1751769761** get_address_of_fpTab_24() { return &___fpTab_24; }
	inline void set_fpTab_24(UInt32U5BU5D_t1751769761* value)
	{
		___fpTab_24 = value;
		Il2CppCodeGenWriteBarrier((&___fpTab_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTRANSFORM_T227128484_H
#ifndef ONSERIALIZEDATTRIBUTE_T3291642057_H
#define ONSERIALIZEDATTRIBUTE_T3291642057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnSerializedAttribute
struct  OnSerializedAttribute_t3291642057  : public Attribute_t2136411158
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSERIALIZEDATTRIBUTE_T3291642057_H
#ifndef DSAPARAMETERS_T1902175948_H
#define DSAPARAMETERS_T1902175948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSAParameters
struct  DSAParameters_t1902175948 
{
public:
	// System.Int32 System.Security.Cryptography.DSAParameters::Counter
	int32_t ___Counter_0;
	// System.Byte[] System.Security.Cryptography.DSAParameters::G
	ByteU5BU5D_t2378657911* ___G_1;
	// System.Byte[] System.Security.Cryptography.DSAParameters::J
	ByteU5BU5D_t2378657911* ___J_2;
	// System.Byte[] System.Security.Cryptography.DSAParameters::P
	ByteU5BU5D_t2378657911* ___P_3;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Q
	ByteU5BU5D_t2378657911* ___Q_4;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Seed
	ByteU5BU5D_t2378657911* ___Seed_5;
	// System.Byte[] System.Security.Cryptography.DSAParameters::X
	ByteU5BU5D_t2378657911* ___X_6;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Y
	ByteU5BU5D_t2378657911* ___Y_7;

public:
	inline static int32_t get_offset_of_Counter_0() { return static_cast<int32_t>(offsetof(DSAParameters_t1902175948, ___Counter_0)); }
	inline int32_t get_Counter_0() const { return ___Counter_0; }
	inline int32_t* get_address_of_Counter_0() { return &___Counter_0; }
	inline void set_Counter_0(int32_t value)
	{
		___Counter_0 = value;
	}

	inline static int32_t get_offset_of_G_1() { return static_cast<int32_t>(offsetof(DSAParameters_t1902175948, ___G_1)); }
	inline ByteU5BU5D_t2378657911* get_G_1() const { return ___G_1; }
	inline ByteU5BU5D_t2378657911** get_address_of_G_1() { return &___G_1; }
	inline void set_G_1(ByteU5BU5D_t2378657911* value)
	{
		___G_1 = value;
		Il2CppCodeGenWriteBarrier((&___G_1), value);
	}

	inline static int32_t get_offset_of_J_2() { return static_cast<int32_t>(offsetof(DSAParameters_t1902175948, ___J_2)); }
	inline ByteU5BU5D_t2378657911* get_J_2() const { return ___J_2; }
	inline ByteU5BU5D_t2378657911** get_address_of_J_2() { return &___J_2; }
	inline void set_J_2(ByteU5BU5D_t2378657911* value)
	{
		___J_2 = value;
		Il2CppCodeGenWriteBarrier((&___J_2), value);
	}

	inline static int32_t get_offset_of_P_3() { return static_cast<int32_t>(offsetof(DSAParameters_t1902175948, ___P_3)); }
	inline ByteU5BU5D_t2378657911* get_P_3() const { return ___P_3; }
	inline ByteU5BU5D_t2378657911** get_address_of_P_3() { return &___P_3; }
	inline void set_P_3(ByteU5BU5D_t2378657911* value)
	{
		___P_3 = value;
		Il2CppCodeGenWriteBarrier((&___P_3), value);
	}

	inline static int32_t get_offset_of_Q_4() { return static_cast<int32_t>(offsetof(DSAParameters_t1902175948, ___Q_4)); }
	inline ByteU5BU5D_t2378657911* get_Q_4() const { return ___Q_4; }
	inline ByteU5BU5D_t2378657911** get_address_of_Q_4() { return &___Q_4; }
	inline void set_Q_4(ByteU5BU5D_t2378657911* value)
	{
		___Q_4 = value;
		Il2CppCodeGenWriteBarrier((&___Q_4), value);
	}

	inline static int32_t get_offset_of_Seed_5() { return static_cast<int32_t>(offsetof(DSAParameters_t1902175948, ___Seed_5)); }
	inline ByteU5BU5D_t2378657911* get_Seed_5() const { return ___Seed_5; }
	inline ByteU5BU5D_t2378657911** get_address_of_Seed_5() { return &___Seed_5; }
	inline void set_Seed_5(ByteU5BU5D_t2378657911* value)
	{
		___Seed_5 = value;
		Il2CppCodeGenWriteBarrier((&___Seed_5), value);
	}

	inline static int32_t get_offset_of_X_6() { return static_cast<int32_t>(offsetof(DSAParameters_t1902175948, ___X_6)); }
	inline ByteU5BU5D_t2378657911* get_X_6() const { return ___X_6; }
	inline ByteU5BU5D_t2378657911** get_address_of_X_6() { return &___X_6; }
	inline void set_X_6(ByteU5BU5D_t2378657911* value)
	{
		___X_6 = value;
		Il2CppCodeGenWriteBarrier((&___X_6), value);
	}

	inline static int32_t get_offset_of_Y_7() { return static_cast<int32_t>(offsetof(DSAParameters_t1902175948, ___Y_7)); }
	inline ByteU5BU5D_t2378657911* get_Y_7() const { return ___Y_7; }
	inline ByteU5BU5D_t2378657911** get_address_of_Y_7() { return &___Y_7; }
	inline void set_Y_7(ByteU5BU5D_t2378657911* value)
	{
		___Y_7 = value;
		Il2CppCodeGenWriteBarrier((&___Y_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t1902175948_marshaled_pinvoke
{
	int32_t ___Counter_0;
	uint8_t* ___G_1;
	uint8_t* ___J_2;
	uint8_t* ___P_3;
	uint8_t* ___Q_4;
	uint8_t* ___Seed_5;
	uint8_t* ___X_6;
	uint8_t* ___Y_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t1902175948_marshaled_com
{
	int32_t ___Counter_0;
	uint8_t* ___G_1;
	uint8_t* ___J_2;
	uint8_t* ___P_3;
	uint8_t* ___Q_4;
	uint8_t* ___Seed_5;
	uint8_t* ___X_6;
	uint8_t* ___Y_7;
};
#endif // DSAPARAMETERS_T1902175948_H
#ifndef DSASIGNATUREDEFORMATTER_T2463393796_H
#define DSASIGNATUREDEFORMATTER_T2463393796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDeformatter
struct  DSASignatureDeformatter_t2463393796  : public AsymmetricSignatureDeformatter_t3228332467
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureDeformatter::dsa
	DSA_t2257449250 * ___dsa_0;

public:
	inline static int32_t get_offset_of_dsa_0() { return static_cast<int32_t>(offsetof(DSASignatureDeformatter_t2463393796, ___dsa_0)); }
	inline DSA_t2257449250 * get_dsa_0() const { return ___dsa_0; }
	inline DSA_t2257449250 ** get_address_of_dsa_0() { return &___dsa_0; }
	inline void set_dsa_0(DSA_t2257449250 * value)
	{
		___dsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDEFORMATTER_T2463393796_H
#ifndef DSASIGNATUREFORMATTER_T2453457595_H
#define DSASIGNATUREFORMATTER_T2453457595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureFormatter
struct  DSASignatureFormatter_t2453457595  : public AsymmetricSignatureFormatter_t3931539935
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureFormatter::dsa
	DSA_t2257449250 * ___dsa_0;

public:
	inline static int32_t get_offset_of_dsa_0() { return static_cast<int32_t>(offsetof(DSASignatureFormatter_t2453457595, ___dsa_0)); }
	inline DSA_t2257449250 * get_dsa_0() const { return ___dsa_0; }
	inline DSA_t2257449250 ** get_address_of_dsa_0() { return &___dsa_0; }
	inline void set_dsa_0(DSA_t2257449250 * value)
	{
		___dsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREFORMATTER_T2453457595_H
#ifndef MD5_T1506454198_H
#define MD5_T1506454198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5
struct  MD5_t1506454198  : public HashAlgorithm_t3908565528
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5_T1506454198_H
#ifndef SERIALIZABLETYPEMETADATA_T4294662340_H
#define SERIALIZABLETYPEMETADATA_T4294662340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata
struct  SerializableTypeMetadata_t4294662340  : public TypeMetadata_t802614987
{
public:
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::types
	TypeU5BU5D_t259536267* ___types_2;
	// System.String[] System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::names
	StringU5BU5D_t1002137567* ___names_3;

public:
	inline static int32_t get_offset_of_types_2() { return static_cast<int32_t>(offsetof(SerializableTypeMetadata_t4294662340, ___types_2)); }
	inline TypeU5BU5D_t259536267* get_types_2() const { return ___types_2; }
	inline TypeU5BU5D_t259536267** get_address_of_types_2() { return &___types_2; }
	inline void set_types_2(TypeU5BU5D_t259536267* value)
	{
		___types_2 = value;
		Il2CppCodeGenWriteBarrier((&___types_2), value);
	}

	inline static int32_t get_offset_of_names_3() { return static_cast<int32_t>(offsetof(SerializableTypeMetadata_t4294662340, ___names_3)); }
	inline StringU5BU5D_t1002137567* get_names_3() const { return ___names_3; }
	inline StringU5BU5D_t1002137567** get_address_of_names_3() { return &___names_3; }
	inline void set_names_3(StringU5BU5D_t1002137567* value)
	{
		___names_3 = value;
		Il2CppCodeGenWriteBarrier((&___names_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLETYPEMETADATA_T4294662340_H
#ifndef PKCS1MASKGENERATIONMETHOD_T2373244323_H
#define PKCS1MASKGENERATIONMETHOD_T2373244323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PKCS1MaskGenerationMethod
struct  PKCS1MaskGenerationMethod_t2373244323  : public MaskGenerationMethod_t154787205
{
public:
	// System.String System.Security.Cryptography.PKCS1MaskGenerationMethod::hashName
	String_t* ___hashName_0;

public:
	inline static int32_t get_offset_of_hashName_0() { return static_cast<int32_t>(offsetof(PKCS1MaskGenerationMethod_t2373244323, ___hashName_0)); }
	inline String_t* get_hashName_0() const { return ___hashName_0; }
	inline String_t** get_address_of_hashName_0() { return &___hashName_0; }
	inline void set_hashName_0(String_t* value)
	{
		___hashName_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS1MASKGENERATIONMETHOD_T2373244323_H
#ifndef PASSWORDDERIVEBYTES_T2385803505_H
#define PASSWORDDERIVEBYTES_T2385803505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PasswordDeriveBytes
struct  PasswordDeriveBytes_t2385803505  : public DeriveBytes_t708730207
{
public:
	// System.String System.Security.Cryptography.PasswordDeriveBytes::HashNameValue
	String_t* ___HashNameValue_0;
	// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::SaltValue
	ByteU5BU5D_t2378657911* ___SaltValue_1;
	// System.Int32 System.Security.Cryptography.PasswordDeriveBytes::IterationsValue
	int32_t ___IterationsValue_2;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.PasswordDeriveBytes::hash
	HashAlgorithm_t3908565528 * ___hash_3;
	// System.Int32 System.Security.Cryptography.PasswordDeriveBytes::state
	int32_t ___state_4;
	// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::password
	ByteU5BU5D_t2378657911* ___password_5;
	// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::initial
	ByteU5BU5D_t2378657911* ___initial_6;
	// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::output
	ByteU5BU5D_t2378657911* ___output_7;
	// System.Int32 System.Security.Cryptography.PasswordDeriveBytes::position
	int32_t ___position_8;
	// System.Int32 System.Security.Cryptography.PasswordDeriveBytes::hashnumber
	int32_t ___hashnumber_9;

public:
	inline static int32_t get_offset_of_HashNameValue_0() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2385803505, ___HashNameValue_0)); }
	inline String_t* get_HashNameValue_0() const { return ___HashNameValue_0; }
	inline String_t** get_address_of_HashNameValue_0() { return &___HashNameValue_0; }
	inline void set_HashNameValue_0(String_t* value)
	{
		___HashNameValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashNameValue_0), value);
	}

	inline static int32_t get_offset_of_SaltValue_1() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2385803505, ___SaltValue_1)); }
	inline ByteU5BU5D_t2378657911* get_SaltValue_1() const { return ___SaltValue_1; }
	inline ByteU5BU5D_t2378657911** get_address_of_SaltValue_1() { return &___SaltValue_1; }
	inline void set_SaltValue_1(ByteU5BU5D_t2378657911* value)
	{
		___SaltValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___SaltValue_1), value);
	}

	inline static int32_t get_offset_of_IterationsValue_2() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2385803505, ___IterationsValue_2)); }
	inline int32_t get_IterationsValue_2() const { return ___IterationsValue_2; }
	inline int32_t* get_address_of_IterationsValue_2() { return &___IterationsValue_2; }
	inline void set_IterationsValue_2(int32_t value)
	{
		___IterationsValue_2 = value;
	}

	inline static int32_t get_offset_of_hash_3() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2385803505, ___hash_3)); }
	inline HashAlgorithm_t3908565528 * get_hash_3() const { return ___hash_3; }
	inline HashAlgorithm_t3908565528 ** get_address_of_hash_3() { return &___hash_3; }
	inline void set_hash_3(HashAlgorithm_t3908565528 * value)
	{
		___hash_3 = value;
		Il2CppCodeGenWriteBarrier((&___hash_3), value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2385803505, ___state_4)); }
	inline int32_t get_state_4() const { return ___state_4; }
	inline int32_t* get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(int32_t value)
	{
		___state_4 = value;
	}

	inline static int32_t get_offset_of_password_5() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2385803505, ___password_5)); }
	inline ByteU5BU5D_t2378657911* get_password_5() const { return ___password_5; }
	inline ByteU5BU5D_t2378657911** get_address_of_password_5() { return &___password_5; }
	inline void set_password_5(ByteU5BU5D_t2378657911* value)
	{
		___password_5 = value;
		Il2CppCodeGenWriteBarrier((&___password_5), value);
	}

	inline static int32_t get_offset_of_initial_6() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2385803505, ___initial_6)); }
	inline ByteU5BU5D_t2378657911* get_initial_6() const { return ___initial_6; }
	inline ByteU5BU5D_t2378657911** get_address_of_initial_6() { return &___initial_6; }
	inline void set_initial_6(ByteU5BU5D_t2378657911* value)
	{
		___initial_6 = value;
		Il2CppCodeGenWriteBarrier((&___initial_6), value);
	}

	inline static int32_t get_offset_of_output_7() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2385803505, ___output_7)); }
	inline ByteU5BU5D_t2378657911* get_output_7() const { return ___output_7; }
	inline ByteU5BU5D_t2378657911** get_address_of_output_7() { return &___output_7; }
	inline void set_output_7(ByteU5BU5D_t2378657911* value)
	{
		___output_7 = value;
		Il2CppCodeGenWriteBarrier((&___output_7), value);
	}

	inline static int32_t get_offset_of_position_8() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2385803505, ___position_8)); }
	inline int32_t get_position_8() const { return ___position_8; }
	inline int32_t* get_address_of_position_8() { return &___position_8; }
	inline void set_position_8(int32_t value)
	{
		___position_8 = value;
	}

	inline static int32_t get_offset_of_hashnumber_9() { return static_cast<int32_t>(offsetof(PasswordDeriveBytes_t2385803505, ___hashnumber_9)); }
	inline int32_t get_hashnumber_9() const { return ___hashnumber_9; }
	inline int32_t* get_address_of_hashnumber_9() { return &___hashnumber_9; }
	inline void set_hashnumber_9(int32_t value)
	{
		___hashnumber_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PASSWORDDERIVEBYTES_T2385803505_H
#ifndef CLRTYPEMETADATA_T3503630550_H
#define CLRTYPEMETADATA_T3503630550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ClrTypeMetadata
struct  ClrTypeMetadata_t3503630550  : public TypeMetadata_t802614987
{
public:
	// System.Type System.Runtime.Serialization.Formatters.Binary.ClrTypeMetadata::InstanceType
	Type_t * ___InstanceType_2;

public:
	inline static int32_t get_offset_of_InstanceType_2() { return static_cast<int32_t>(offsetof(ClrTypeMetadata_t3503630550, ___InstanceType_2)); }
	inline Type_t * get_InstanceType_2() const { return ___InstanceType_2; }
	inline Type_t ** get_address_of_InstanceType_2() { return &___InstanceType_2; }
	inline void set_InstanceType_2(Type_t * value)
	{
		___InstanceType_2 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceType_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLRTYPEMETADATA_T3503630550_H
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
#ifndef KEYEDHASHALGORITHM_T3290128499_H
#define KEYEDHASHALGORITHM_T3290128499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyedHashAlgorithm
struct  KeyedHashAlgorithm_t3290128499  : public HashAlgorithm_t3908565528
{
public:
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_t2378657911* ___KeyValue_4;

public:
	inline static int32_t get_offset_of_KeyValue_4() { return static_cast<int32_t>(offsetof(KeyedHashAlgorithm_t3290128499, ___KeyValue_4)); }
	inline ByteU5BU5D_t2378657911* get_KeyValue_4() const { return ___KeyValue_4; }
	inline ByteU5BU5D_t2378657911** get_address_of_KeyValue_4() { return &___KeyValue_4; }
	inline void set_KeyValue_4(ByteU5BU5D_t2378657911* value)
	{
		___KeyValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEDHASHALGORITHM_T3290128499_H
#ifndef ONSERIALIZINGATTRIBUTE_T2683944146_H
#define ONSERIALIZINGATTRIBUTE_T2683944146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnSerializingAttribute
struct  OnSerializingAttribute_t2683944146  : public Attribute_t2136411158
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSERIALIZINGATTRIBUTE_T2683944146_H
#ifndef DSA_T2257449250_H
#define DSA_T2257449250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSA
struct  DSA_t2257449250  : public AsymmetricAlgorithm_t4121483336
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSA_T2257449250_H
#ifndef ONDESERIALIZINGATTRIBUTE_T1748548149_H
#define ONDESERIALIZINGATTRIBUTE_T1748548149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnDeserializingAttribute
struct  OnDeserializingAttribute_t1748548149  : public Attribute_t2136411158
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONDESERIALIZINGATTRIBUTE_T1748548149_H
#ifndef ONDESERIALIZEDATTRIBUTE_T1868594340_H
#define ONDESERIALIZEDATTRIBUTE_T1868594340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnDeserializedAttribute
struct  OnDeserializedAttribute_t1868594340  : public Attribute_t2136411158
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONDESERIALIZEDATTRIBUTE_T1868594340_H
#ifndef SERIALIZATIONENTRY_T3101791053_H
#define SERIALIZATIONENTRY_T3101791053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationEntry
struct  SerializationEntry_t3101791053 
{
public:
	// System.String System.Runtime.Serialization.SerializationEntry::name
	String_t* ___name_0;
	// System.Type System.Runtime.Serialization.SerializationEntry::objectType
	Type_t * ___objectType_1;
	// System.Object System.Runtime.Serialization.SerializationEntry::value
	RuntimeObject * ___value_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SerializationEntry_t3101791053, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_objectType_1() { return static_cast<int32_t>(offsetof(SerializationEntry_t3101791053, ___objectType_1)); }
	inline Type_t * get_objectType_1() const { return ___objectType_1; }
	inline Type_t ** get_address_of_objectType_1() { return &___objectType_1; }
	inline void set_objectType_1(Type_t * value)
	{
		___objectType_1 = value;
		Il2CppCodeGenWriteBarrier((&___objectType_1), value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(SerializationEntry_t3101791053, ___value_2)); }
	inline RuntimeObject * get_value_2() const { return ___value_2; }
	inline RuntimeObject ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(RuntimeObject * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((&___value_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t3101791053_marshaled_pinvoke
{
	char* ___name_0;
	Type_t * ___objectType_1;
	Il2CppIUnknown* ___value_2;
};
// Native definition for COM marshalling of System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t3101791053_marshaled_com
{
	Il2CppChar* ___name_0;
	Type_t * ___objectType_1;
	Il2CppIUnknown* ___value_2;
};
#endif // SERIALIZATIONENTRY_T3101791053_H
#ifndef FIXUPRECORD_T3467462069_H
#define FIXUPRECORD_T3467462069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FixupRecord
struct  FixupRecord_t3467462069  : public BaseFixupRecord_t3407680861
{
public:
	// System.Reflection.MemberInfo System.Runtime.Serialization.FixupRecord::_member
	MemberInfo_t * ____member_4;

public:
	inline static int32_t get_offset_of__member_4() { return static_cast<int32_t>(offsetof(FixupRecord_t3467462069, ____member_4)); }
	inline MemberInfo_t * get__member_4() const { return ____member_4; }
	inline MemberInfo_t ** get_address_of__member_4() { return &____member_4; }
	inline void set__member_4(MemberInfo_t * value)
	{
		____member_4 = value;
		Il2CppCodeGenWriteBarrier((&____member_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXUPRECORD_T3467462069_H
#ifndef MULTIARRAYFIXUPRECORD_T1674627828_H
#define MULTIARRAYFIXUPRECORD_T1674627828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.MultiArrayFixupRecord
struct  MultiArrayFixupRecord_t1674627828  : public BaseFixupRecord_t3407680861
{
public:
	// System.Int32[] System.Runtime.Serialization.MultiArrayFixupRecord::_indices
	Int32U5BU5D_t1719863841* ____indices_4;

public:
	inline static int32_t get_offset_of__indices_4() { return static_cast<int32_t>(offsetof(MultiArrayFixupRecord_t1674627828, ____indices_4)); }
	inline Int32U5BU5D_t1719863841* get__indices_4() const { return ____indices_4; }
	inline Int32U5BU5D_t1719863841** get_address_of__indices_4() { return &____indices_4; }
	inline void set__indices_4(Int32U5BU5D_t1719863841* value)
	{
		____indices_4 = value;
		Il2CppCodeGenWriteBarrier((&____indices_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTIARRAYFIXUPRECORD_T1674627828_H
#ifndef DELAYEDFIXUPRECORD_T3602491532_H
#define DELAYEDFIXUPRECORD_T3602491532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.DelayedFixupRecord
struct  DelayedFixupRecord_t3602491532  : public BaseFixupRecord_t3407680861
{
public:
	// System.String System.Runtime.Serialization.DelayedFixupRecord::_memberName
	String_t* ____memberName_4;

public:
	inline static int32_t get_offset_of__memberName_4() { return static_cast<int32_t>(offsetof(DelayedFixupRecord_t3602491532, ____memberName_4)); }
	inline String_t* get__memberName_4() const { return ____memberName_4; }
	inline String_t** get_address_of__memberName_4() { return &____memberName_4; }
	inline void set__memberName_4(String_t* value)
	{
		____memberName_4 = value;
		Il2CppCodeGenWriteBarrier((&____memberName_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELAYEDFIXUPRECORD_T3602491532_H
#ifndef ARRAYFIXUPRECORD_T2187969465_H
#define ARRAYFIXUPRECORD_T2187969465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ArrayFixupRecord
struct  ArrayFixupRecord_t2187969465  : public BaseFixupRecord_t3407680861
{
public:
	// System.Int32 System.Runtime.Serialization.ArrayFixupRecord::_index
	int32_t ____index_4;

public:
	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(ArrayFixupRecord_t2187969465, ____index_4)); }
	inline int32_t get__index_4() const { return ____index_4; }
	inline int32_t* get_address_of__index_4() { return &____index_4; }
	inline void set__index_4(int32_t value)
	{
		____index_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYFIXUPRECORD_T2187969465_H
#ifndef COMMONOBJECTSECURITY_T2253155613_H
#define COMMONOBJECTSECURITY_T2253155613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AccessControl.CommonObjectSecurity
struct  CommonObjectSecurity_t2253155613  : public ObjectSecurity_t1763213511
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMONOBJECTSECURITY_T2253155613_H
#ifndef TYPEFILTERLEVEL_T3574329576_H
#define TYPEFILTERLEVEL_T3574329576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.TypeFilterLevel
struct  TypeFilterLevel_t3574329576 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.TypeFilterLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeFilterLevel_t3574329576, ___value___1)); }
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
#endif // TYPEFILTERLEVEL_T3574329576_H
#ifndef KEYNUMBER_T3108683201_H
#define KEYNUMBER_T3108683201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyNumber
struct  KeyNumber_t3108683201 
{
public:
	// System.Int32 System.Security.Cryptography.KeyNumber::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyNumber_t3108683201, ___value___1)); }
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
#endif // KEYNUMBER_T3108683201_H
#ifndef MEMBERTYPEMETADATA_T3019576140_H
#define MEMBERTYPEMETADATA_T3019576140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata
struct  MemberTypeMetadata_t3019576140  : public ClrTypeMetadata_t3503630550
{
public:
	// System.Reflection.MemberInfo[] System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::members
	MemberInfoU5BU5D_t3506361754* ___members_3;

public:
	inline static int32_t get_offset_of_members_3() { return static_cast<int32_t>(offsetof(MemberTypeMetadata_t3019576140, ___members_3)); }
	inline MemberInfoU5BU5D_t3506361754* get_members_3() const { return ___members_3; }
	inline MemberInfoU5BU5D_t3506361754** get_address_of_members_3() { return &___members_3; }
	inline void set_members_3(MemberInfoU5BU5D_t3506361754* value)
	{
		___members_3 = value;
		Il2CppCodeGenWriteBarrier((&___members_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERTYPEMETADATA_T3019576140_H
#ifndef MD5CRYPTOSERVICEPROVIDER_T1964479865_H
#define MD5CRYPTOSERVICEPROVIDER_T1964479865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5CryptoServiceProvider
struct  MD5CryptoServiceProvider_t1964479865  : public MD5_t1506454198
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_t1751769761* ____H_6;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_t1751769761* ___buff_7;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count_8;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_t2378657911* ____ProcessingBuffer_9;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_10;

public:
	inline static int32_t get_offset_of__H_6() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t1964479865, ____H_6)); }
	inline UInt32U5BU5D_t1751769761* get__H_6() const { return ____H_6; }
	inline UInt32U5BU5D_t1751769761** get_address_of__H_6() { return &____H_6; }
	inline void set__H_6(UInt32U5BU5D_t1751769761* value)
	{
		____H_6 = value;
		Il2CppCodeGenWriteBarrier((&____H_6), value);
	}

	inline static int32_t get_offset_of_buff_7() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t1964479865, ___buff_7)); }
	inline UInt32U5BU5D_t1751769761* get_buff_7() const { return ___buff_7; }
	inline UInt32U5BU5D_t1751769761** get_address_of_buff_7() { return &___buff_7; }
	inline void set_buff_7(UInt32U5BU5D_t1751769761* value)
	{
		___buff_7 = value;
		Il2CppCodeGenWriteBarrier((&___buff_7), value);
	}

	inline static int32_t get_offset_of_count_8() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t1964479865, ___count_8)); }
	inline uint64_t get_count_8() const { return ___count_8; }
	inline uint64_t* get_address_of_count_8() { return &___count_8; }
	inline void set_count_8(uint64_t value)
	{
		___count_8 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_9() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t1964479865, ____ProcessingBuffer_9)); }
	inline ByteU5BU5D_t2378657911* get__ProcessingBuffer_9() const { return ____ProcessingBuffer_9; }
	inline ByteU5BU5D_t2378657911** get_address_of__ProcessingBuffer_9() { return &____ProcessingBuffer_9; }
	inline void set__ProcessingBuffer_9(ByteU5BU5D_t2378657911* value)
	{
		____ProcessingBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_9), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_10() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t1964479865, ____ProcessingBufferCount_10)); }
	inline int32_t get__ProcessingBufferCount_10() const { return ____ProcessingBufferCount_10; }
	inline int32_t* get_address_of__ProcessingBufferCount_10() { return &____ProcessingBufferCount_10; }
	inline void set__ProcessingBufferCount_10(int32_t value)
	{
		____ProcessingBufferCount_10 = value;
	}
};

struct MD5CryptoServiceProvider_t1964479865_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_t1751769761* ___K_11;

public:
	inline static int32_t get_offset_of_K_11() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t1964479865_StaticFields, ___K_11)); }
	inline UInt32U5BU5D_t1751769761* get_K_11() const { return ___K_11; }
	inline UInt32U5BU5D_t1751769761** get_address_of_K_11() { return &___K_11; }
	inline void set_K_11(UInt32U5BU5D_t1751769761* value)
	{
		___K_11 = value;
		Il2CppCodeGenWriteBarrier((&___K_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5CRYPTOSERVICEPROVIDER_T1964479865_H
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
#ifndef STREAMINGCONTEXTSTATES_T595459671_H
#define STREAMINGCONTEXTSTATES_T595459671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t595459671 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t595459671, ___value___1)); }
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
#endif // STREAMINGCONTEXTSTATES_T595459671_H
#ifndef PADDINGMODE_T2720849367_H
#define PADDINGMODE_T2720849367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t2720849367 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t2720849367, ___value___1)); }
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
#endif // PADDINGMODE_T2720849367_H
#ifndef OBJECTRECORDSTATUS_T2625527896_H
#define OBJECTRECORDSTATUS_T2625527896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectRecordStatus
struct  ObjectRecordStatus_t2625527896 
{
public:
	// System.Byte System.Runtime.Serialization.ObjectRecordStatus::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ObjectRecordStatus_t2625527896, ___value___1)); }
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
#endif // OBJECTRECORDSTATUS_T2625527896_H
#ifndef SERIALIZATIONEXCEPTION_T2768988190_H
#define SERIALIZATIONEXCEPTION_T2768988190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationException
struct  SerializationException_t2768988190  : public SystemException_t1160535744
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONEXCEPTION_T2768988190_H
#ifndef MACTRIPLEDES_T3065070158_H
#define MACTRIPLEDES_T3065070158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MACTripleDES
struct  MACTripleDES_t3065070158  : public KeyedHashAlgorithm_t3290128499
{
public:
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::tdes
	TripleDES_t2204016143 * ___tdes_5;
	// Mono.Security.Cryptography.MACAlgorithm System.Security.Cryptography.MACTripleDES::mac
	MACAlgorithm_t1667991735 * ___mac_6;
	// System.Boolean System.Security.Cryptography.MACTripleDES::m_disposed
	bool ___m_disposed_7;

public:
	inline static int32_t get_offset_of_tdes_5() { return static_cast<int32_t>(offsetof(MACTripleDES_t3065070158, ___tdes_5)); }
	inline TripleDES_t2204016143 * get_tdes_5() const { return ___tdes_5; }
	inline TripleDES_t2204016143 ** get_address_of_tdes_5() { return &___tdes_5; }
	inline void set_tdes_5(TripleDES_t2204016143 * value)
	{
		___tdes_5 = value;
		Il2CppCodeGenWriteBarrier((&___tdes_5), value);
	}

	inline static int32_t get_offset_of_mac_6() { return static_cast<int32_t>(offsetof(MACTripleDES_t3065070158, ___mac_6)); }
	inline MACAlgorithm_t1667991735 * get_mac_6() const { return ___mac_6; }
	inline MACAlgorithm_t1667991735 ** get_address_of_mac_6() { return &___mac_6; }
	inline void set_mac_6(MACAlgorithm_t1667991735 * value)
	{
		___mac_6 = value;
		Il2CppCodeGenWriteBarrier((&___mac_6), value);
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(MACTripleDES_t3065070158, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACTRIPLEDES_T3065070158_H
#ifndef HMAC_T2760015152_H
#define HMAC_T2760015152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMAC
struct  HMAC_t2760015152  : public KeyedHashAlgorithm_t3290128499
{
public:
	// System.Boolean System.Security.Cryptography.HMAC::_disposed
	bool ____disposed_5;
	// System.String System.Security.Cryptography.HMAC::_hashName
	String_t* ____hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::_algo
	HashAlgorithm_t3908565528 * ____algo_7;
	// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::_block
	BlockProcessor_t2165077239 * ____block_8;
	// System.Int32 System.Security.Cryptography.HMAC::_blockSizeValue
	int32_t ____blockSizeValue_9;

public:
	inline static int32_t get_offset_of__disposed_5() { return static_cast<int32_t>(offsetof(HMAC_t2760015152, ____disposed_5)); }
	inline bool get__disposed_5() const { return ____disposed_5; }
	inline bool* get_address_of__disposed_5() { return &____disposed_5; }
	inline void set__disposed_5(bool value)
	{
		____disposed_5 = value;
	}

	inline static int32_t get_offset_of__hashName_6() { return static_cast<int32_t>(offsetof(HMAC_t2760015152, ____hashName_6)); }
	inline String_t* get__hashName_6() const { return ____hashName_6; }
	inline String_t** get_address_of__hashName_6() { return &____hashName_6; }
	inline void set__hashName_6(String_t* value)
	{
		____hashName_6 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_6), value);
	}

	inline static int32_t get_offset_of__algo_7() { return static_cast<int32_t>(offsetof(HMAC_t2760015152, ____algo_7)); }
	inline HashAlgorithm_t3908565528 * get__algo_7() const { return ____algo_7; }
	inline HashAlgorithm_t3908565528 ** get_address_of__algo_7() { return &____algo_7; }
	inline void set__algo_7(HashAlgorithm_t3908565528 * value)
	{
		____algo_7 = value;
		Il2CppCodeGenWriteBarrier((&____algo_7), value);
	}

	inline static int32_t get_offset_of__block_8() { return static_cast<int32_t>(offsetof(HMAC_t2760015152, ____block_8)); }
	inline BlockProcessor_t2165077239 * get__block_8() const { return ____block_8; }
	inline BlockProcessor_t2165077239 ** get_address_of__block_8() { return &____block_8; }
	inline void set__block_8(BlockProcessor_t2165077239 * value)
	{
		____block_8 = value;
		Il2CppCodeGenWriteBarrier((&____block_8), value);
	}

	inline static int32_t get_offset_of__blockSizeValue_9() { return static_cast<int32_t>(offsetof(HMAC_t2760015152, ____blockSizeValue_9)); }
	inline int32_t get__blockSizeValue_9() const { return ____blockSizeValue_9; }
	inline int32_t* get_address_of__blockSizeValue_9() { return &____blockSizeValue_9; }
	inline void set__blockSizeValue_9(int32_t value)
	{
		____blockSizeValue_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMAC_T2760015152_H
#ifndef CIPHERMODE_T1449587351_H
#define CIPHERMODE_T1449587351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t1449587351 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t1449587351, ___value___1)); }
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
#endif // CIPHERMODE_T1449587351_H
#ifndef FROMBASE64TRANSFORMMODE_T1177306793_H
#define FROMBASE64TRANSFORMMODE_T1177306793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.FromBase64TransformMode
struct  FromBase64TransformMode_t1177306793 
{
public:
	// System.Int32 System.Security.Cryptography.FromBase64TransformMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FromBase64TransformMode_t1177306793, ___value___1)); }
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
#endif // FROMBASE64TRANSFORMMODE_T1177306793_H
#ifndef FORMATTERTYPESTYLE_T1340126395_H
#define FORMATTERTYPESTYLE_T1340126395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct  FormatterTypeStyle_t1340126395 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_t1340126395, ___value___1)); }
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
#endif // FORMATTERTYPESTYLE_T1340126395_H
#ifndef CRYPTOSTREAMMODE_T3021435620_H
#define CRYPTOSTREAMMODE_T3021435620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStreamMode
struct  CryptoStreamMode_t3021435620 
{
public:
	// System.Int32 System.Security.Cryptography.CryptoStreamMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CryptoStreamMode_t3021435620, ___value___1)); }
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
#endif // CRYPTOSTREAMMODE_T3021435620_H
#ifndef NATIVEOBJECTSECURITY_T3802221355_H
#define NATIVEOBJECTSECURITY_T3802221355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AccessControl.NativeObjectSecurity
struct  NativeObjectSecurity_t3802221355  : public CommonObjectSecurity_t2253155613
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEOBJECTSECURITY_T3802221355_H
#ifndef CRYPTOGRAPHICEXCEPTION_T3497875048_H
#define CRYPTOGRAPHICEXCEPTION_T3497875048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicException
struct  CryptographicException_t3497875048  : public SystemException_t1160535744
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICEXCEPTION_T3497875048_H
#ifndef X509KEYSTORAGEFLAGS_T290244664_H
#define X509KEYSTORAGEFLAGS_T290244664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
struct  X509KeyStorageFlags_t290244664 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509KeyStorageFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509KeyStorageFlags_t290244664, ___value___1)); }
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
#endif // X509KEYSTORAGEFLAGS_T290244664_H
#ifndef DSACRYPTOSERVICEPROVIDER_T489806399_H
#define DSACRYPTOSERVICEPROVIDER_T489806399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSACryptoServiceProvider
struct  DSACryptoServiceProvider_t489806399  : public DSA_t2257449250
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.DSACryptoServiceProvider::store
	KeyPairPersistence_t2171626949 * ___store_3;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persistKey
	bool ___persistKey_4;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persisted
	bool ___persisted_5;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_6;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::m_disposed
	bool ___m_disposed_7;
	// Mono.Security.Cryptography.DSAManaged System.Security.Cryptography.DSACryptoServiceProvider::dsa
	DSAManaged_t1882898536 * ___dsa_8;

public:
	inline static int32_t get_offset_of_store_3() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t489806399, ___store_3)); }
	inline KeyPairPersistence_t2171626949 * get_store_3() const { return ___store_3; }
	inline KeyPairPersistence_t2171626949 ** get_address_of_store_3() { return &___store_3; }
	inline void set_store_3(KeyPairPersistence_t2171626949 * value)
	{
		___store_3 = value;
		Il2CppCodeGenWriteBarrier((&___store_3), value);
	}

	inline static int32_t get_offset_of_persistKey_4() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t489806399, ___persistKey_4)); }
	inline bool get_persistKey_4() const { return ___persistKey_4; }
	inline bool* get_address_of_persistKey_4() { return &___persistKey_4; }
	inline void set_persistKey_4(bool value)
	{
		___persistKey_4 = value;
	}

	inline static int32_t get_offset_of_persisted_5() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t489806399, ___persisted_5)); }
	inline bool get_persisted_5() const { return ___persisted_5; }
	inline bool* get_address_of_persisted_5() { return &___persisted_5; }
	inline void set_persisted_5(bool value)
	{
		___persisted_5 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_6() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t489806399, ___privateKeyExportable_6)); }
	inline bool get_privateKeyExportable_6() const { return ___privateKeyExportable_6; }
	inline bool* get_address_of_privateKeyExportable_6() { return &___privateKeyExportable_6; }
	inline void set_privateKeyExportable_6(bool value)
	{
		___privateKeyExportable_6 = value;
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t489806399, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}

	inline static int32_t get_offset_of_dsa_8() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t489806399, ___dsa_8)); }
	inline DSAManaged_t1882898536 * get_dsa_8() const { return ___dsa_8; }
	inline DSAManaged_t1882898536 ** get_address_of_dsa_8() { return &___dsa_8; }
	inline void set_dsa_8(DSAManaged_t1882898536 * value)
	{
		___dsa_8 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_8), value);
	}
};

struct DSACryptoServiceProvider_t489806399_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_9;

public:
	inline static int32_t get_offset_of_useMachineKeyStore_9() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t489806399_StaticFields, ___useMachineKeyStore_9)); }
	inline bool get_useMachineKeyStore_9() const { return ___useMachineKeyStore_9; }
	inline bool* get_address_of_useMachineKeyStore_9() { return &___useMachineKeyStore_9; }
	inline void set_useMachineKeyStore_9(bool value)
	{
		___useMachineKeyStore_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSACRYPTOSERVICEPROVIDER_T489806399_H
#ifndef FORMATTERASSEMBLYSTYLE_T4051758444_H
#define FORMATTERASSEMBLYSTYLE_T4051758444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_t4051758444 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t4051758444, ___value___1)); }
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
#endif // FORMATTERASSEMBLYSTYLE_T4051758444_H
#ifndef CSPPROVIDERFLAGS_T1809880806_H
#define CSPPROVIDERFLAGS_T1809880806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspProviderFlags
struct  CspProviderFlags_t1809880806 
{
public:
	// System.Int32 System.Security.Cryptography.CspProviderFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CspProviderFlags_t1809880806, ___value___1)); }
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
#endif // CSPPROVIDERFLAGS_T1809880806_H
#ifndef SYMMETRICALGORITHM_T2761455344_H
#define SYMMETRICALGORITHM_T2761455344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t2761455344  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t2378657911* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t2378657911* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t2604602054* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t2604602054* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2761455344, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2761455344, ___IVValue_1)); }
	inline ByteU5BU5D_t2378657911* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t2378657911** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t2378657911* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2761455344, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2761455344, ___KeyValue_3)); }
	inline ByteU5BU5D_t2378657911* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t2378657911** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t2378657911* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2761455344, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t2604602054* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t2604602054** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t2604602054* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2761455344, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t2604602054* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t2604602054** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t2604602054* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2761455344, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2761455344, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2761455344, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2761455344, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T2761455344_H
#ifndef CRYPTOSTREAM_T3318160134_H
#define CRYPTOSTREAM_T3318160134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStream
struct  CryptoStream_t3318160134  : public Stream_t2967449720
{
public:
	// System.IO.Stream System.Security.Cryptography.CryptoStream::_stream
	Stream_t2967449720 * ____stream_1;
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.CryptoStream::_transform
	RuntimeObject* ____transform_2;
	// System.Security.Cryptography.CryptoStreamMode System.Security.Cryptography.CryptoStream::_mode
	int32_t ____mode_3;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_currentBlock
	ByteU5BU5D_t2378657911* ____currentBlock_4;
	// System.Boolean System.Security.Cryptography.CryptoStream::_disposed
	bool ____disposed_5;
	// System.Boolean System.Security.Cryptography.CryptoStream::_flushedFinalBlock
	bool ____flushedFinalBlock_6;
	// System.Int32 System.Security.Cryptography.CryptoStream::_partialCount
	int32_t ____partialCount_7;
	// System.Boolean System.Security.Cryptography.CryptoStream::_endOfStream
	bool ____endOfStream_8;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_waitingBlock
	ByteU5BU5D_t2378657911* ____waitingBlock_9;
	// System.Int32 System.Security.Cryptography.CryptoStream::_waitingCount
	int32_t ____waitingCount_10;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_transformedBlock
	ByteU5BU5D_t2378657911* ____transformedBlock_11;
	// System.Int32 System.Security.Cryptography.CryptoStream::_transformedPos
	int32_t ____transformedPos_12;
	// System.Int32 System.Security.Cryptography.CryptoStream::_transformedCount
	int32_t ____transformedCount_13;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_workingBlock
	ByteU5BU5D_t2378657911* ____workingBlock_14;
	// System.Int32 System.Security.Cryptography.CryptoStream::_workingCount
	int32_t ____workingCount_15;

public:
	inline static int32_t get_offset_of__stream_1() { return static_cast<int32_t>(offsetof(CryptoStream_t3318160134, ____stream_1)); }
	inline Stream_t2967449720 * get__stream_1() const { return ____stream_1; }
	inline Stream_t2967449720 ** get_address_of__stream_1() { return &____stream_1; }
	inline void set__stream_1(Stream_t2967449720 * value)
	{
		____stream_1 = value;
		Il2CppCodeGenWriteBarrier((&____stream_1), value);
	}

	inline static int32_t get_offset_of__transform_2() { return static_cast<int32_t>(offsetof(CryptoStream_t3318160134, ____transform_2)); }
	inline RuntimeObject* get__transform_2() const { return ____transform_2; }
	inline RuntimeObject** get_address_of__transform_2() { return &____transform_2; }
	inline void set__transform_2(RuntimeObject* value)
	{
		____transform_2 = value;
		Il2CppCodeGenWriteBarrier((&____transform_2), value);
	}

	inline static int32_t get_offset_of__mode_3() { return static_cast<int32_t>(offsetof(CryptoStream_t3318160134, ____mode_3)); }
	inline int32_t get__mode_3() const { return ____mode_3; }
	inline int32_t* get_address_of__mode_3() { return &____mode_3; }
	inline void set__mode_3(int32_t value)
	{
		____mode_3 = value;
	}

	inline static int32_t get_offset_of__currentBlock_4() { return static_cast<int32_t>(offsetof(CryptoStream_t3318160134, ____currentBlock_4)); }
	inline ByteU5BU5D_t2378657911* get__currentBlock_4() const { return ____currentBlock_4; }
	inline ByteU5BU5D_t2378657911** get_address_of__currentBlock_4() { return &____currentBlock_4; }
	inline void set__currentBlock_4(ByteU5BU5D_t2378657911* value)
	{
		____currentBlock_4 = value;
		Il2CppCodeGenWriteBarrier((&____currentBlock_4), value);
	}

	inline static int32_t get_offset_of__disposed_5() { return static_cast<int32_t>(offsetof(CryptoStream_t3318160134, ____disposed_5)); }
	inline bool get__disposed_5() const { return ____disposed_5; }
	inline bool* get_address_of__disposed_5() { return &____disposed_5; }
	inline void set__disposed_5(bool value)
	{
		____disposed_5 = value;
	}

	inline static int32_t get_offset_of__flushedFinalBlock_6() { return static_cast<int32_t>(offsetof(CryptoStream_t3318160134, ____flushedFinalBlock_6)); }
	inline bool get__flushedFinalBlock_6() const { return ____flushedFinalBlock_6; }
	inline bool* get_address_of__flushedFinalBlock_6() { return &____flushedFinalBlock_6; }
	inline void set__flushedFinalBlock_6(bool value)
	{
		____flushedFinalBlock_6 = value;
	}

	inline static int32_t get_offset_of__partialCount_7() { return static_cast<int32_t>(offsetof(CryptoStream_t3318160134, ____partialCount_7)); }
	inline int32_t get__partialCount_7() const { return ____partialCount_7; }
	inline int32_t* get_address_of__partialCount_7() { return &____partialCount_7; }
	inline void set__partialCount_7(int32_t value)
	{
		____partialCount_7 = value;
	}

	inline static int32_t get_offset_of__endOfStream_8() { return static_cast<int32_t>(offsetof(CryptoStream_t3318160134, ____endOfStream_8)); }
	inline bool get__endOfStream_8() const { return ____endOfStream_8; }
	inline bool* get_address_of__endOfStream_8() { return &____endOfStream_8; }
	inline void set__endOfStream_8(bool value)
	{
		____endOfStream_8 = value;
	}

	inline static int32_t get_offset_of__waitingBlock_9() { return static_cast<int32_t>(offsetof(CryptoStream_t3318160134, ____waitingBlock_9)); }
	inline ByteU5BU5D_t2378657911* get__waitingBlock_9() const { return ____waitingBlock_9; }
	inline ByteU5BU5D_t2378657911** get_address_of__waitingBlock_9() { return &____waitingBlock_9; }
	inline void set__waitingBlock_9(ByteU5BU5D_t2378657911* value)
	{
		____waitingBlock_9 = value;
		Il2CppCodeGenWriteBarrier((&____waitingBlock_9), value);
	}

	inline static int32_t get_offset_of__waitingCount_10() { return static_cast<int32_t>(offsetof(CryptoStream_t3318160134, ____waitingCount_10)); }
	inline int32_t get__waitingCount_10() const { return ____waitingCount_10; }
	inline int32_t* get_address_of__waitingCount_10() { return &____waitingCount_10; }
	inline void set__waitingCount_10(int32_t value)
	{
		____waitingCount_10 = value;
	}

	inline static int32_t get_offset_of__transformedBlock_11() { return static_cast<int32_t>(offsetof(CryptoStream_t3318160134, ____transformedBlock_11)); }
	inline ByteU5BU5D_t2378657911* get__transformedBlock_11() const { return ____transformedBlock_11; }
	inline ByteU5BU5D_t2378657911** get_address_of__transformedBlock_11() { return &____transformedBlock_11; }
	inline void set__transformedBlock_11(ByteU5BU5D_t2378657911* value)
	{
		____transformedBlock_11 = value;
		Il2CppCodeGenWriteBarrier((&____transformedBlock_11), value);
	}

	inline static int32_t get_offset_of__transformedPos_12() { return static_cast<int32_t>(offsetof(CryptoStream_t3318160134, ____transformedPos_12)); }
	inline int32_t get__transformedPos_12() const { return ____transformedPos_12; }
	inline int32_t* get_address_of__transformedPos_12() { return &____transformedPos_12; }
	inline void set__transformedPos_12(int32_t value)
	{
		____transformedPos_12 = value;
	}

	inline static int32_t get_offset_of__transformedCount_13() { return static_cast<int32_t>(offsetof(CryptoStream_t3318160134, ____transformedCount_13)); }
	inline int32_t get__transformedCount_13() const { return ____transformedCount_13; }
	inline int32_t* get_address_of__transformedCount_13() { return &____transformedCount_13; }
	inline void set__transformedCount_13(int32_t value)
	{
		____transformedCount_13 = value;
	}

	inline static int32_t get_offset_of__workingBlock_14() { return static_cast<int32_t>(offsetof(CryptoStream_t3318160134, ____workingBlock_14)); }
	inline ByteU5BU5D_t2378657911* get__workingBlock_14() const { return ____workingBlock_14; }
	inline ByteU5BU5D_t2378657911** get_address_of__workingBlock_14() { return &____workingBlock_14; }
	inline void set__workingBlock_14(ByteU5BU5D_t2378657911* value)
	{
		____workingBlock_14 = value;
		Il2CppCodeGenWriteBarrier((&____workingBlock_14), value);
	}

	inline static int32_t get_offset_of__workingCount_15() { return static_cast<int32_t>(offsetof(CryptoStream_t3318160134, ____workingCount_15)); }
	inline int32_t get__workingCount_15() const { return ____workingCount_15; }
	inline int32_t* get_address_of__workingCount_15() { return &____workingCount_15; }
	inline void set__workingCount_15(int32_t value)
	{
		____workingCount_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOSTREAM_T3318160134_H
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
#ifndef OBJECTRECORD_T3588703597_H
#define OBJECTRECORD_T3588703597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectRecord
struct  ObjectRecord_t3588703597  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecordStatus System.Runtime.Serialization.ObjectRecord::Status
	uint8_t ___Status_0;
	// System.Object System.Runtime.Serialization.ObjectRecord::OriginalObject
	RuntimeObject * ___OriginalObject_1;
	// System.Object System.Runtime.Serialization.ObjectRecord::ObjectInstance
	RuntimeObject * ___ObjectInstance_2;
	// System.Int64 System.Runtime.Serialization.ObjectRecord::ObjectID
	int64_t ___ObjectID_3;
	// System.Runtime.Serialization.SerializationInfo System.Runtime.Serialization.ObjectRecord::Info
	SerializationInfo_t214215410 * ___Info_4;
	// System.Int64 System.Runtime.Serialization.ObjectRecord::IdOfContainingObj
	int64_t ___IdOfContainingObj_5;
	// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ObjectRecord::Surrogate
	RuntimeObject* ___Surrogate_6;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.ObjectRecord::SurrogateSelector
	RuntimeObject* ___SurrogateSelector_7;
	// System.Reflection.MemberInfo System.Runtime.Serialization.ObjectRecord::Member
	MemberInfo_t * ___Member_8;
	// System.Int32[] System.Runtime.Serialization.ObjectRecord::ArrayIndex
	Int32U5BU5D_t1719863841* ___ArrayIndex_9;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.ObjectRecord::FixupChainAsContainer
	BaseFixupRecord_t3407680861 * ___FixupChainAsContainer_10;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.ObjectRecord::FixupChainAsRequired
	BaseFixupRecord_t3407680861 * ___FixupChainAsRequired_11;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectRecord::Next
	ObjectRecord_t3588703597 * ___Next_12;

public:
	inline static int32_t get_offset_of_Status_0() { return static_cast<int32_t>(offsetof(ObjectRecord_t3588703597, ___Status_0)); }
	inline uint8_t get_Status_0() const { return ___Status_0; }
	inline uint8_t* get_address_of_Status_0() { return &___Status_0; }
	inline void set_Status_0(uint8_t value)
	{
		___Status_0 = value;
	}

	inline static int32_t get_offset_of_OriginalObject_1() { return static_cast<int32_t>(offsetof(ObjectRecord_t3588703597, ___OriginalObject_1)); }
	inline RuntimeObject * get_OriginalObject_1() const { return ___OriginalObject_1; }
	inline RuntimeObject ** get_address_of_OriginalObject_1() { return &___OriginalObject_1; }
	inline void set_OriginalObject_1(RuntimeObject * value)
	{
		___OriginalObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalObject_1), value);
	}

	inline static int32_t get_offset_of_ObjectInstance_2() { return static_cast<int32_t>(offsetof(ObjectRecord_t3588703597, ___ObjectInstance_2)); }
	inline RuntimeObject * get_ObjectInstance_2() const { return ___ObjectInstance_2; }
	inline RuntimeObject ** get_address_of_ObjectInstance_2() { return &___ObjectInstance_2; }
	inline void set_ObjectInstance_2(RuntimeObject * value)
	{
		___ObjectInstance_2 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectInstance_2), value);
	}

	inline static int32_t get_offset_of_ObjectID_3() { return static_cast<int32_t>(offsetof(ObjectRecord_t3588703597, ___ObjectID_3)); }
	inline int64_t get_ObjectID_3() const { return ___ObjectID_3; }
	inline int64_t* get_address_of_ObjectID_3() { return &___ObjectID_3; }
	inline void set_ObjectID_3(int64_t value)
	{
		___ObjectID_3 = value;
	}

	inline static int32_t get_offset_of_Info_4() { return static_cast<int32_t>(offsetof(ObjectRecord_t3588703597, ___Info_4)); }
	inline SerializationInfo_t214215410 * get_Info_4() const { return ___Info_4; }
	inline SerializationInfo_t214215410 ** get_address_of_Info_4() { return &___Info_4; }
	inline void set_Info_4(SerializationInfo_t214215410 * value)
	{
		___Info_4 = value;
		Il2CppCodeGenWriteBarrier((&___Info_4), value);
	}

	inline static int32_t get_offset_of_IdOfContainingObj_5() { return static_cast<int32_t>(offsetof(ObjectRecord_t3588703597, ___IdOfContainingObj_5)); }
	inline int64_t get_IdOfContainingObj_5() const { return ___IdOfContainingObj_5; }
	inline int64_t* get_address_of_IdOfContainingObj_5() { return &___IdOfContainingObj_5; }
	inline void set_IdOfContainingObj_5(int64_t value)
	{
		___IdOfContainingObj_5 = value;
	}

	inline static int32_t get_offset_of_Surrogate_6() { return static_cast<int32_t>(offsetof(ObjectRecord_t3588703597, ___Surrogate_6)); }
	inline RuntimeObject* get_Surrogate_6() const { return ___Surrogate_6; }
	inline RuntimeObject** get_address_of_Surrogate_6() { return &___Surrogate_6; }
	inline void set_Surrogate_6(RuntimeObject* value)
	{
		___Surrogate_6 = value;
		Il2CppCodeGenWriteBarrier((&___Surrogate_6), value);
	}

	inline static int32_t get_offset_of_SurrogateSelector_7() { return static_cast<int32_t>(offsetof(ObjectRecord_t3588703597, ___SurrogateSelector_7)); }
	inline RuntimeObject* get_SurrogateSelector_7() const { return ___SurrogateSelector_7; }
	inline RuntimeObject** get_address_of_SurrogateSelector_7() { return &___SurrogateSelector_7; }
	inline void set_SurrogateSelector_7(RuntimeObject* value)
	{
		___SurrogateSelector_7 = value;
		Il2CppCodeGenWriteBarrier((&___SurrogateSelector_7), value);
	}

	inline static int32_t get_offset_of_Member_8() { return static_cast<int32_t>(offsetof(ObjectRecord_t3588703597, ___Member_8)); }
	inline MemberInfo_t * get_Member_8() const { return ___Member_8; }
	inline MemberInfo_t ** get_address_of_Member_8() { return &___Member_8; }
	inline void set_Member_8(MemberInfo_t * value)
	{
		___Member_8 = value;
		Il2CppCodeGenWriteBarrier((&___Member_8), value);
	}

	inline static int32_t get_offset_of_ArrayIndex_9() { return static_cast<int32_t>(offsetof(ObjectRecord_t3588703597, ___ArrayIndex_9)); }
	inline Int32U5BU5D_t1719863841* get_ArrayIndex_9() const { return ___ArrayIndex_9; }
	inline Int32U5BU5D_t1719863841** get_address_of_ArrayIndex_9() { return &___ArrayIndex_9; }
	inline void set_ArrayIndex_9(Int32U5BU5D_t1719863841* value)
	{
		___ArrayIndex_9 = value;
		Il2CppCodeGenWriteBarrier((&___ArrayIndex_9), value);
	}

	inline static int32_t get_offset_of_FixupChainAsContainer_10() { return static_cast<int32_t>(offsetof(ObjectRecord_t3588703597, ___FixupChainAsContainer_10)); }
	inline BaseFixupRecord_t3407680861 * get_FixupChainAsContainer_10() const { return ___FixupChainAsContainer_10; }
	inline BaseFixupRecord_t3407680861 ** get_address_of_FixupChainAsContainer_10() { return &___FixupChainAsContainer_10; }
	inline void set_FixupChainAsContainer_10(BaseFixupRecord_t3407680861 * value)
	{
		___FixupChainAsContainer_10 = value;
		Il2CppCodeGenWriteBarrier((&___FixupChainAsContainer_10), value);
	}

	inline static int32_t get_offset_of_FixupChainAsRequired_11() { return static_cast<int32_t>(offsetof(ObjectRecord_t3588703597, ___FixupChainAsRequired_11)); }
	inline BaseFixupRecord_t3407680861 * get_FixupChainAsRequired_11() const { return ___FixupChainAsRequired_11; }
	inline BaseFixupRecord_t3407680861 ** get_address_of_FixupChainAsRequired_11() { return &___FixupChainAsRequired_11; }
	inline void set_FixupChainAsRequired_11(BaseFixupRecord_t3407680861 * value)
	{
		___FixupChainAsRequired_11 = value;
		Il2CppCodeGenWriteBarrier((&___FixupChainAsRequired_11), value);
	}

	inline static int32_t get_offset_of_Next_12() { return static_cast<int32_t>(offsetof(ObjectRecord_t3588703597, ___Next_12)); }
	inline ObjectRecord_t3588703597 * get_Next_12() const { return ___Next_12; }
	inline ObjectRecord_t3588703597 ** get_address_of_Next_12() { return &___Next_12; }
	inline void set_Next_12(ObjectRecord_t3588703597 * value)
	{
		___Next_12 = value;
		Il2CppCodeGenWriteBarrier((&___Next_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTRECORD_T3588703597_H
#ifndef CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T3406904946_H
#define CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T3406904946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicUnexpectedOperationException
struct  CryptographicUnexpectedOperationException_t3406904946  : public CryptographicException_t3497875048
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T3406904946_H
#ifndef CSPPARAMETERS_T4291407971_H
#define CSPPARAMETERS_T4291407971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspParameters
struct  CspParameters_t4291407971  : public RuntimeObject
{
public:
	// System.Security.Cryptography.CspProviderFlags System.Security.Cryptography.CspParameters::_Flags
	int32_t ____Flags_0;
	// System.String System.Security.Cryptography.CspParameters::KeyContainerName
	String_t* ___KeyContainerName_1;
	// System.Int32 System.Security.Cryptography.CspParameters::KeyNumber
	int32_t ___KeyNumber_2;
	// System.String System.Security.Cryptography.CspParameters::ProviderName
	String_t* ___ProviderName_3;
	// System.Int32 System.Security.Cryptography.CspParameters::ProviderType
	int32_t ___ProviderType_4;
	// System.Security.SecureString System.Security.Cryptography.CspParameters::_password
	SecureString_t2781743094 * ____password_5;
	// System.IntPtr System.Security.Cryptography.CspParameters::_windowHandle
	IntPtr_t ____windowHandle_6;

public:
	inline static int32_t get_offset_of__Flags_0() { return static_cast<int32_t>(offsetof(CspParameters_t4291407971, ____Flags_0)); }
	inline int32_t get__Flags_0() const { return ____Flags_0; }
	inline int32_t* get_address_of__Flags_0() { return &____Flags_0; }
	inline void set__Flags_0(int32_t value)
	{
		____Flags_0 = value;
	}

	inline static int32_t get_offset_of_KeyContainerName_1() { return static_cast<int32_t>(offsetof(CspParameters_t4291407971, ___KeyContainerName_1)); }
	inline String_t* get_KeyContainerName_1() const { return ___KeyContainerName_1; }
	inline String_t** get_address_of_KeyContainerName_1() { return &___KeyContainerName_1; }
	inline void set_KeyContainerName_1(String_t* value)
	{
		___KeyContainerName_1 = value;
		Il2CppCodeGenWriteBarrier((&___KeyContainerName_1), value);
	}

	inline static int32_t get_offset_of_KeyNumber_2() { return static_cast<int32_t>(offsetof(CspParameters_t4291407971, ___KeyNumber_2)); }
	inline int32_t get_KeyNumber_2() const { return ___KeyNumber_2; }
	inline int32_t* get_address_of_KeyNumber_2() { return &___KeyNumber_2; }
	inline void set_KeyNumber_2(int32_t value)
	{
		___KeyNumber_2 = value;
	}

	inline static int32_t get_offset_of_ProviderName_3() { return static_cast<int32_t>(offsetof(CspParameters_t4291407971, ___ProviderName_3)); }
	inline String_t* get_ProviderName_3() const { return ___ProviderName_3; }
	inline String_t** get_address_of_ProviderName_3() { return &___ProviderName_3; }
	inline void set_ProviderName_3(String_t* value)
	{
		___ProviderName_3 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderName_3), value);
	}

	inline static int32_t get_offset_of_ProviderType_4() { return static_cast<int32_t>(offsetof(CspParameters_t4291407971, ___ProviderType_4)); }
	inline int32_t get_ProviderType_4() const { return ___ProviderType_4; }
	inline int32_t* get_address_of_ProviderType_4() { return &___ProviderType_4; }
	inline void set_ProviderType_4(int32_t value)
	{
		___ProviderType_4 = value;
	}

	inline static int32_t get_offset_of__password_5() { return static_cast<int32_t>(offsetof(CspParameters_t4291407971, ____password_5)); }
	inline SecureString_t2781743094 * get__password_5() const { return ____password_5; }
	inline SecureString_t2781743094 ** get_address_of__password_5() { return &____password_5; }
	inline void set__password_5(SecureString_t2781743094 * value)
	{
		____password_5 = value;
		Il2CppCodeGenWriteBarrier((&____password_5), value);
	}

	inline static int32_t get_offset_of__windowHandle_6() { return static_cast<int32_t>(offsetof(CspParameters_t4291407971, ____windowHandle_6)); }
	inline IntPtr_t get__windowHandle_6() const { return ____windowHandle_6; }
	inline IntPtr_t* get_address_of__windowHandle_6() { return &____windowHandle_6; }
	inline void set__windowHandle_6(IntPtr_t value)
	{
		____windowHandle_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPPARAMETERS_T4291407971_H
#ifndef STREAMINGCONTEXT_T8276476_H
#define STREAMINGCONTEXT_T8276476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t8276476 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t8276476, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t8276476, ___additional_1)); }
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
struct StreamingContext_t8276476_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t8276476_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T8276476_H
#ifndef CRYPTOKEYSECURITY_T3532566249_H
#define CRYPTOKEYSECURITY_T3532566249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AccessControl.CryptoKeySecurity
struct  CryptoKeySecurity_t3532566249  : public NativeObjectSecurity_t3802221355
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOKEYSECURITY_T3532566249_H
#ifndef HMACSHA512_T2674362804_H
#define HMACSHA512_T2674362804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA512
struct  HMACSHA512_t2674362804  : public HMAC_t2760015152
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA512::legacy
	bool ___legacy_11;

public:
	inline static int32_t get_offset_of_legacy_11() { return static_cast<int32_t>(offsetof(HMACSHA512_t2674362804, ___legacy_11)); }
	inline bool get_legacy_11() const { return ___legacy_11; }
	inline bool* get_address_of_legacy_11() { return &___legacy_11; }
	inline void set_legacy_11(bool value)
	{
		___legacy_11 = value;
	}
};

struct HMACSHA512_t2674362804_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA512::legacy_mode
	bool ___legacy_mode_10;

public:
	inline static int32_t get_offset_of_legacy_mode_10() { return static_cast<int32_t>(offsetof(HMACSHA512_t2674362804_StaticFields, ___legacy_mode_10)); }
	inline bool get_legacy_mode_10() const { return ___legacy_mode_10; }
	inline bool* get_address_of_legacy_mode_10() { return &___legacy_mode_10; }
	inline void set_legacy_mode_10(bool value)
	{
		___legacy_mode_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA512_T2674362804_H
#ifndef HMACSHA256_T447421352_H
#define HMACSHA256_T447421352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA256
struct  HMACSHA256_t447421352  : public HMAC_t2760015152
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA256_T447421352_H
#ifndef HMACSHA1_T4143740851_H
#define HMACSHA1_T4143740851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA1
struct  HMACSHA1_t4143740851  : public HMAC_t2760015152
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA1_T4143740851_H
#ifndef HMACRIPEMD160_T2135776901_H
#define HMACRIPEMD160_T2135776901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACRIPEMD160
struct  HMACRIPEMD160_t2135776901  : public HMAC_t2760015152
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACRIPEMD160_T2135776901_H
#ifndef HMACMD5_T84639982_H
#define HMACMD5_T84639982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACMD5
struct  HMACMD5_t84639982  : public HMAC_t2760015152
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACMD5_T84639982_H
#ifndef FROMBASE64TRANSFORM_T1927266979_H
#define FROMBASE64TRANSFORM_T1927266979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.FromBase64Transform
struct  FromBase64Transform_t1927266979  : public RuntimeObject
{
public:
	// System.Security.Cryptography.FromBase64TransformMode System.Security.Cryptography.FromBase64Transform::mode
	int32_t ___mode_1;
	// System.Byte[] System.Security.Cryptography.FromBase64Transform::accumulator
	ByteU5BU5D_t2378657911* ___accumulator_2;
	// System.Int32 System.Security.Cryptography.FromBase64Transform::accPtr
	int32_t ___accPtr_3;
	// System.Boolean System.Security.Cryptography.FromBase64Transform::m_disposed
	bool ___m_disposed_4;
	// System.Byte[] System.Security.Cryptography.FromBase64Transform::lookupTable
	ByteU5BU5D_t2378657911* ___lookupTable_5;

public:
	inline static int32_t get_offset_of_mode_1() { return static_cast<int32_t>(offsetof(FromBase64Transform_t1927266979, ___mode_1)); }
	inline int32_t get_mode_1() const { return ___mode_1; }
	inline int32_t* get_address_of_mode_1() { return &___mode_1; }
	inline void set_mode_1(int32_t value)
	{
		___mode_1 = value;
	}

	inline static int32_t get_offset_of_accumulator_2() { return static_cast<int32_t>(offsetof(FromBase64Transform_t1927266979, ___accumulator_2)); }
	inline ByteU5BU5D_t2378657911* get_accumulator_2() const { return ___accumulator_2; }
	inline ByteU5BU5D_t2378657911** get_address_of_accumulator_2() { return &___accumulator_2; }
	inline void set_accumulator_2(ByteU5BU5D_t2378657911* value)
	{
		___accumulator_2 = value;
		Il2CppCodeGenWriteBarrier((&___accumulator_2), value);
	}

	inline static int32_t get_offset_of_accPtr_3() { return static_cast<int32_t>(offsetof(FromBase64Transform_t1927266979, ___accPtr_3)); }
	inline int32_t get_accPtr_3() const { return ___accPtr_3; }
	inline int32_t* get_address_of_accPtr_3() { return &___accPtr_3; }
	inline void set_accPtr_3(int32_t value)
	{
		___accPtr_3 = value;
	}

	inline static int32_t get_offset_of_m_disposed_4() { return static_cast<int32_t>(offsetof(FromBase64Transform_t1927266979, ___m_disposed_4)); }
	inline bool get_m_disposed_4() const { return ___m_disposed_4; }
	inline bool* get_address_of_m_disposed_4() { return &___m_disposed_4; }
	inline void set_m_disposed_4(bool value)
	{
		___m_disposed_4 = value;
	}

	inline static int32_t get_offset_of_lookupTable_5() { return static_cast<int32_t>(offsetof(FromBase64Transform_t1927266979, ___lookupTable_5)); }
	inline ByteU5BU5D_t2378657911* get_lookupTable_5() const { return ___lookupTable_5; }
	inline ByteU5BU5D_t2378657911** get_address_of_lookupTable_5() { return &___lookupTable_5; }
	inline void set_lookupTable_5(ByteU5BU5D_t2378657911* value)
	{
		___lookupTable_5 = value;
		Il2CppCodeGenWriteBarrier((&___lookupTable_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FROMBASE64TRANSFORM_T1927266979_H
#ifndef HMACSHA384_T1257975747_H
#define HMACSHA384_T1257975747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA384
struct  HMACSHA384_t1257975747  : public HMAC_t2760015152
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA384::legacy
	bool ___legacy_11;

public:
	inline static int32_t get_offset_of_legacy_11() { return static_cast<int32_t>(offsetof(HMACSHA384_t1257975747, ___legacy_11)); }
	inline bool get_legacy_11() const { return ___legacy_11; }
	inline bool* get_address_of_legacy_11() { return &___legacy_11; }
	inline void set_legacy_11(bool value)
	{
		___legacy_11 = value;
	}
};

struct HMACSHA384_t1257975747_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA384::legacy_mode
	bool ___legacy_mode_10;

public:
	inline static int32_t get_offset_of_legacy_mode_10() { return static_cast<int32_t>(offsetof(HMACSHA384_t1257975747_StaticFields, ___legacy_mode_10)); }
	inline bool get_legacy_mode_10() const { return ___legacy_mode_10; }
	inline bool* get_address_of_legacy_mode_10() { return &___legacy_mode_10; }
	inline void set_legacy_mode_10(bool value)
	{
		___legacy_mode_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA384_T1257975747_H
#ifndef DES_T3723361735_H
#define DES_T3723361735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DES
struct  DES_t3723361735  : public SymmetricAlgorithm_t2761455344
{
public:

public:
};

struct DES_t3723361735_StaticFields
{
public:
	// System.Byte[,] System.Security.Cryptography.DES::weakKeys
	ByteU5BU2CU5D_t2378657912* ___weakKeys_11;
	// System.Byte[,] System.Security.Cryptography.DES::semiWeakKeys
	ByteU5BU2CU5D_t2378657912* ___semiWeakKeys_12;

public:
	inline static int32_t get_offset_of_weakKeys_11() { return static_cast<int32_t>(offsetof(DES_t3723361735_StaticFields, ___weakKeys_11)); }
	inline ByteU5BU2CU5D_t2378657912* get_weakKeys_11() const { return ___weakKeys_11; }
	inline ByteU5BU2CU5D_t2378657912** get_address_of_weakKeys_11() { return &___weakKeys_11; }
	inline void set_weakKeys_11(ByteU5BU2CU5D_t2378657912* value)
	{
		___weakKeys_11 = value;
		Il2CppCodeGenWriteBarrier((&___weakKeys_11), value);
	}

	inline static int32_t get_offset_of_semiWeakKeys_12() { return static_cast<int32_t>(offsetof(DES_t3723361735_StaticFields, ___semiWeakKeys_12)); }
	inline ByteU5BU2CU5D_t2378657912* get_semiWeakKeys_12() const { return ___semiWeakKeys_12; }
	inline ByteU5BU2CU5D_t2378657912** get_address_of_semiWeakKeys_12() { return &___semiWeakKeys_12; }
	inline void set_semiWeakKeys_12(ByteU5BU2CU5D_t2378657912* value)
	{
		___semiWeakKeys_12 = value;
		Il2CppCodeGenWriteBarrier((&___semiWeakKeys_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DES_T3723361735_H
#ifndef OBJECTMANAGER_T2395696821_H
#define OBJECTMANAGER_T2395696821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectManager
struct  ObjectManager_t2395696821  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::_objectRecordChain
	ObjectRecord_t3588703597 * ____objectRecordChain_0;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::_lastObjectRecord
	ObjectRecord_t3588703597 * ____lastObjectRecord_1;
	// System.Collections.ArrayList System.Runtime.Serialization.ObjectManager::_deserializedRecords
	ArrayList_t1090370772 * ____deserializedRecords_2;
	// System.Collections.ArrayList System.Runtime.Serialization.ObjectManager::_onDeserializedCallbackRecords
	ArrayList_t1090370772 * ____onDeserializedCallbackRecords_3;
	// System.Collections.Hashtable System.Runtime.Serialization.ObjectManager::_objectRecords
	Hashtable_t188184851 * ____objectRecords_4;
	// System.Boolean System.Runtime.Serialization.ObjectManager::_finalFixup
	bool ____finalFixup_5;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.ObjectManager::_selector
	RuntimeObject* ____selector_6;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.ObjectManager::_context
	StreamingContext_t8276476  ____context_7;
	// System.Int32 System.Runtime.Serialization.ObjectManager::_registeredObjectsCount
	int32_t ____registeredObjectsCount_8;

public:
	inline static int32_t get_offset_of__objectRecordChain_0() { return static_cast<int32_t>(offsetof(ObjectManager_t2395696821, ____objectRecordChain_0)); }
	inline ObjectRecord_t3588703597 * get__objectRecordChain_0() const { return ____objectRecordChain_0; }
	inline ObjectRecord_t3588703597 ** get_address_of__objectRecordChain_0() { return &____objectRecordChain_0; }
	inline void set__objectRecordChain_0(ObjectRecord_t3588703597 * value)
	{
		____objectRecordChain_0 = value;
		Il2CppCodeGenWriteBarrier((&____objectRecordChain_0), value);
	}

	inline static int32_t get_offset_of__lastObjectRecord_1() { return static_cast<int32_t>(offsetof(ObjectManager_t2395696821, ____lastObjectRecord_1)); }
	inline ObjectRecord_t3588703597 * get__lastObjectRecord_1() const { return ____lastObjectRecord_1; }
	inline ObjectRecord_t3588703597 ** get_address_of__lastObjectRecord_1() { return &____lastObjectRecord_1; }
	inline void set__lastObjectRecord_1(ObjectRecord_t3588703597 * value)
	{
		____lastObjectRecord_1 = value;
		Il2CppCodeGenWriteBarrier((&____lastObjectRecord_1), value);
	}

	inline static int32_t get_offset_of__deserializedRecords_2() { return static_cast<int32_t>(offsetof(ObjectManager_t2395696821, ____deserializedRecords_2)); }
	inline ArrayList_t1090370772 * get__deserializedRecords_2() const { return ____deserializedRecords_2; }
	inline ArrayList_t1090370772 ** get_address_of__deserializedRecords_2() { return &____deserializedRecords_2; }
	inline void set__deserializedRecords_2(ArrayList_t1090370772 * value)
	{
		____deserializedRecords_2 = value;
		Il2CppCodeGenWriteBarrier((&____deserializedRecords_2), value);
	}

	inline static int32_t get_offset_of__onDeserializedCallbackRecords_3() { return static_cast<int32_t>(offsetof(ObjectManager_t2395696821, ____onDeserializedCallbackRecords_3)); }
	inline ArrayList_t1090370772 * get__onDeserializedCallbackRecords_3() const { return ____onDeserializedCallbackRecords_3; }
	inline ArrayList_t1090370772 ** get_address_of__onDeserializedCallbackRecords_3() { return &____onDeserializedCallbackRecords_3; }
	inline void set__onDeserializedCallbackRecords_3(ArrayList_t1090370772 * value)
	{
		____onDeserializedCallbackRecords_3 = value;
		Il2CppCodeGenWriteBarrier((&____onDeserializedCallbackRecords_3), value);
	}

	inline static int32_t get_offset_of__objectRecords_4() { return static_cast<int32_t>(offsetof(ObjectManager_t2395696821, ____objectRecords_4)); }
	inline Hashtable_t188184851 * get__objectRecords_4() const { return ____objectRecords_4; }
	inline Hashtable_t188184851 ** get_address_of__objectRecords_4() { return &____objectRecords_4; }
	inline void set__objectRecords_4(Hashtable_t188184851 * value)
	{
		____objectRecords_4 = value;
		Il2CppCodeGenWriteBarrier((&____objectRecords_4), value);
	}

	inline static int32_t get_offset_of__finalFixup_5() { return static_cast<int32_t>(offsetof(ObjectManager_t2395696821, ____finalFixup_5)); }
	inline bool get__finalFixup_5() const { return ____finalFixup_5; }
	inline bool* get_address_of__finalFixup_5() { return &____finalFixup_5; }
	inline void set__finalFixup_5(bool value)
	{
		____finalFixup_5 = value;
	}

	inline static int32_t get_offset_of__selector_6() { return static_cast<int32_t>(offsetof(ObjectManager_t2395696821, ____selector_6)); }
	inline RuntimeObject* get__selector_6() const { return ____selector_6; }
	inline RuntimeObject** get_address_of__selector_6() { return &____selector_6; }
	inline void set__selector_6(RuntimeObject* value)
	{
		____selector_6 = value;
		Il2CppCodeGenWriteBarrier((&____selector_6), value);
	}

	inline static int32_t get_offset_of__context_7() { return static_cast<int32_t>(offsetof(ObjectManager_t2395696821, ____context_7)); }
	inline StreamingContext_t8276476  get__context_7() const { return ____context_7; }
	inline StreamingContext_t8276476 * get_address_of__context_7() { return &____context_7; }
	inline void set__context_7(StreamingContext_t8276476  value)
	{
		____context_7 = value;
	}

	inline static int32_t get_offset_of__registeredObjectsCount_8() { return static_cast<int32_t>(offsetof(ObjectManager_t2395696821, ____registeredObjectsCount_8)); }
	inline int32_t get__registeredObjectsCount_8() const { return ____registeredObjectsCount_8; }
	inline int32_t* get_address_of__registeredObjectsCount_8() { return &____registeredObjectsCount_8; }
	inline void set__registeredObjectsCount_8(int32_t value)
	{
		____registeredObjectsCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTMANAGER_T2395696821_H
#ifndef SERIALIZATIONOBJECTMANAGER_T104510113_H
#define SERIALIZATIONOBJECTMANAGER_T104510113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationObjectManager
struct  SerializationObjectManager_t104510113  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.SerializationObjectManager::context
	StreamingContext_t8276476  ___context_0;
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationObjectManager::seen
	Hashtable_t188184851 * ___seen_1;
	// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler System.Runtime.Serialization.SerializationObjectManager::callbacks
	CallbackHandler_t4077992800 * ___callbacks_2;

public:
	inline static int32_t get_offset_of_context_0() { return static_cast<int32_t>(offsetof(SerializationObjectManager_t104510113, ___context_0)); }
	inline StreamingContext_t8276476  get_context_0() const { return ___context_0; }
	inline StreamingContext_t8276476 * get_address_of_context_0() { return &___context_0; }
	inline void set_context_0(StreamingContext_t8276476  value)
	{
		___context_0 = value;
	}

	inline static int32_t get_offset_of_seen_1() { return static_cast<int32_t>(offsetof(SerializationObjectManager_t104510113, ___seen_1)); }
	inline Hashtable_t188184851 * get_seen_1() const { return ___seen_1; }
	inline Hashtable_t188184851 ** get_address_of_seen_1() { return &___seen_1; }
	inline void set_seen_1(Hashtable_t188184851 * value)
	{
		___seen_1 = value;
		Il2CppCodeGenWriteBarrier((&___seen_1), value);
	}

	inline static int32_t get_offset_of_callbacks_2() { return static_cast<int32_t>(offsetof(SerializationObjectManager_t104510113, ___callbacks_2)); }
	inline CallbackHandler_t4077992800 * get_callbacks_2() const { return ___callbacks_2; }
	inline CallbackHandler_t4077992800 ** get_address_of_callbacks_2() { return &___callbacks_2; }
	inline void set_callbacks_2(CallbackHandler_t4077992800 * value)
	{
		___callbacks_2 = value;
		Il2CppCodeGenWriteBarrier((&___callbacks_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONOBJECTMANAGER_T104510113_H
#ifndef OBJECTWRITER_T1078461557_H
#define OBJECTWRITER_T1078461557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct  ObjectWriter_t1078461557  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectIDGenerator System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_idGenerator
	ObjectIDGenerator_t220037371 * ____idGenerator_0;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_cachedMetadata
	Hashtable_t188184851 * ____cachedMetadata_1;
	// System.Collections.Queue System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_pendingObjects
	Queue_t1728721708 * ____pendingObjects_2;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_assemblyCache
	Hashtable_t188184851 * ____assemblyCache_3;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_surrogateSelector
	RuntimeObject* ____surrogateSelector_7;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_context
	StreamingContext_t8276476  ____context_8;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_assemblyFormat
	int32_t ____assemblyFormat_9;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_typeFormat
	int32_t ____typeFormat_10;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.ObjectWriter::arrayBuffer
	ByteU5BU5D_t2378657911* ___arrayBuffer_11;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::ArrayBufferLength
	int32_t ___ArrayBufferLength_12;
	// System.Runtime.Serialization.SerializationObjectManager System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_manager
	SerializationObjectManager_t104510113 * ____manager_13;

public:
	inline static int32_t get_offset_of__idGenerator_0() { return static_cast<int32_t>(offsetof(ObjectWriter_t1078461557, ____idGenerator_0)); }
	inline ObjectIDGenerator_t220037371 * get__idGenerator_0() const { return ____idGenerator_0; }
	inline ObjectIDGenerator_t220037371 ** get_address_of__idGenerator_0() { return &____idGenerator_0; }
	inline void set__idGenerator_0(ObjectIDGenerator_t220037371 * value)
	{
		____idGenerator_0 = value;
		Il2CppCodeGenWriteBarrier((&____idGenerator_0), value);
	}

	inline static int32_t get_offset_of__cachedMetadata_1() { return static_cast<int32_t>(offsetof(ObjectWriter_t1078461557, ____cachedMetadata_1)); }
	inline Hashtable_t188184851 * get__cachedMetadata_1() const { return ____cachedMetadata_1; }
	inline Hashtable_t188184851 ** get_address_of__cachedMetadata_1() { return &____cachedMetadata_1; }
	inline void set__cachedMetadata_1(Hashtable_t188184851 * value)
	{
		____cachedMetadata_1 = value;
		Il2CppCodeGenWriteBarrier((&____cachedMetadata_1), value);
	}

	inline static int32_t get_offset_of__pendingObjects_2() { return static_cast<int32_t>(offsetof(ObjectWriter_t1078461557, ____pendingObjects_2)); }
	inline Queue_t1728721708 * get__pendingObjects_2() const { return ____pendingObjects_2; }
	inline Queue_t1728721708 ** get_address_of__pendingObjects_2() { return &____pendingObjects_2; }
	inline void set__pendingObjects_2(Queue_t1728721708 * value)
	{
		____pendingObjects_2 = value;
		Il2CppCodeGenWriteBarrier((&____pendingObjects_2), value);
	}

	inline static int32_t get_offset_of__assemblyCache_3() { return static_cast<int32_t>(offsetof(ObjectWriter_t1078461557, ____assemblyCache_3)); }
	inline Hashtable_t188184851 * get__assemblyCache_3() const { return ____assemblyCache_3; }
	inline Hashtable_t188184851 ** get_address_of__assemblyCache_3() { return &____assemblyCache_3; }
	inline void set__assemblyCache_3(Hashtable_t188184851 * value)
	{
		____assemblyCache_3 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyCache_3), value);
	}

	inline static int32_t get_offset_of__surrogateSelector_7() { return static_cast<int32_t>(offsetof(ObjectWriter_t1078461557, ____surrogateSelector_7)); }
	inline RuntimeObject* get__surrogateSelector_7() const { return ____surrogateSelector_7; }
	inline RuntimeObject** get_address_of__surrogateSelector_7() { return &____surrogateSelector_7; }
	inline void set__surrogateSelector_7(RuntimeObject* value)
	{
		____surrogateSelector_7 = value;
		Il2CppCodeGenWriteBarrier((&____surrogateSelector_7), value);
	}

	inline static int32_t get_offset_of__context_8() { return static_cast<int32_t>(offsetof(ObjectWriter_t1078461557, ____context_8)); }
	inline StreamingContext_t8276476  get__context_8() const { return ____context_8; }
	inline StreamingContext_t8276476 * get_address_of__context_8() { return &____context_8; }
	inline void set__context_8(StreamingContext_t8276476  value)
	{
		____context_8 = value;
	}

	inline static int32_t get_offset_of__assemblyFormat_9() { return static_cast<int32_t>(offsetof(ObjectWriter_t1078461557, ____assemblyFormat_9)); }
	inline int32_t get__assemblyFormat_9() const { return ____assemblyFormat_9; }
	inline int32_t* get_address_of__assemblyFormat_9() { return &____assemblyFormat_9; }
	inline void set__assemblyFormat_9(int32_t value)
	{
		____assemblyFormat_9 = value;
	}

	inline static int32_t get_offset_of__typeFormat_10() { return static_cast<int32_t>(offsetof(ObjectWriter_t1078461557, ____typeFormat_10)); }
	inline int32_t get__typeFormat_10() const { return ____typeFormat_10; }
	inline int32_t* get_address_of__typeFormat_10() { return &____typeFormat_10; }
	inline void set__typeFormat_10(int32_t value)
	{
		____typeFormat_10 = value;
	}

	inline static int32_t get_offset_of_arrayBuffer_11() { return static_cast<int32_t>(offsetof(ObjectWriter_t1078461557, ___arrayBuffer_11)); }
	inline ByteU5BU5D_t2378657911* get_arrayBuffer_11() const { return ___arrayBuffer_11; }
	inline ByteU5BU5D_t2378657911** get_address_of_arrayBuffer_11() { return &___arrayBuffer_11; }
	inline void set_arrayBuffer_11(ByteU5BU5D_t2378657911* value)
	{
		___arrayBuffer_11 = value;
		Il2CppCodeGenWriteBarrier((&___arrayBuffer_11), value);
	}

	inline static int32_t get_offset_of_ArrayBufferLength_12() { return static_cast<int32_t>(offsetof(ObjectWriter_t1078461557, ___ArrayBufferLength_12)); }
	inline int32_t get_ArrayBufferLength_12() const { return ___ArrayBufferLength_12; }
	inline int32_t* get_address_of_ArrayBufferLength_12() { return &___ArrayBufferLength_12; }
	inline void set_ArrayBufferLength_12(int32_t value)
	{
		___ArrayBufferLength_12 = value;
	}

	inline static int32_t get_offset_of__manager_13() { return static_cast<int32_t>(offsetof(ObjectWriter_t1078461557, ____manager_13)); }
	inline SerializationObjectManager_t104510113 * get__manager_13() const { return ____manager_13; }
	inline SerializationObjectManager_t104510113 ** get_address_of__manager_13() { return &____manager_13; }
	inline void set__manager_13(SerializationObjectManager_t104510113 * value)
	{
		____manager_13 = value;
		Il2CppCodeGenWriteBarrier((&____manager_13), value);
	}
};

struct ObjectWriter_t1078461557_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_cachedTypes
	Hashtable_t188184851 * ____cachedTypes_4;
	// System.Reflection.Assembly System.Runtime.Serialization.Formatters.Binary.ObjectWriter::CorlibAssembly
	Assembly_t2048463656 * ___CorlibAssembly_5;
	// System.String System.Runtime.Serialization.Formatters.Binary.ObjectWriter::CorlibAssemblyName
	String_t* ___CorlibAssemblyName_6;

public:
	inline static int32_t get_offset_of__cachedTypes_4() { return static_cast<int32_t>(offsetof(ObjectWriter_t1078461557_StaticFields, ____cachedTypes_4)); }
	inline Hashtable_t188184851 * get__cachedTypes_4() const { return ____cachedTypes_4; }
	inline Hashtable_t188184851 ** get_address_of__cachedTypes_4() { return &____cachedTypes_4; }
	inline void set__cachedTypes_4(Hashtable_t188184851 * value)
	{
		____cachedTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&____cachedTypes_4), value);
	}

	inline static int32_t get_offset_of_CorlibAssembly_5() { return static_cast<int32_t>(offsetof(ObjectWriter_t1078461557_StaticFields, ___CorlibAssembly_5)); }
	inline Assembly_t2048463656 * get_CorlibAssembly_5() const { return ___CorlibAssembly_5; }
	inline Assembly_t2048463656 ** get_address_of_CorlibAssembly_5() { return &___CorlibAssembly_5; }
	inline void set_CorlibAssembly_5(Assembly_t2048463656 * value)
	{
		___CorlibAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___CorlibAssembly_5), value);
	}

	inline static int32_t get_offset_of_CorlibAssemblyName_6() { return static_cast<int32_t>(offsetof(ObjectWriter_t1078461557_StaticFields, ___CorlibAssemblyName_6)); }
	inline String_t* get_CorlibAssemblyName_6() const { return ___CorlibAssemblyName_6; }
	inline String_t** get_address_of_CorlibAssemblyName_6() { return &___CorlibAssemblyName_6; }
	inline void set_CorlibAssemblyName_6(String_t* value)
	{
		___CorlibAssemblyName_6 = value;
		Il2CppCodeGenWriteBarrier((&___CorlibAssemblyName_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTWRITER_T1078461557_H
#ifndef CALLBACKHANDLER_T4077992800_H
#define CALLBACKHANDLER_T4077992800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct  CallbackHandler_t4077992800  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACKHANDLER_T4077992800_H
#ifndef OBJECTREADER_T3738950956_H
#define OBJECTREADER_T3738950956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader
struct  ObjectReader_t3738950956  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.ObjectReader::_surrogateSelector
	RuntimeObject* ____surrogateSelector_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.ObjectReader::_context
	StreamingContext_t8276476  ____context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.ObjectReader::_binder
	SerializationBinder_t534173557 * ____binder_2;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.ObjectReader::_filterLevel
	int32_t ____filterLevel_3;
	// System.Runtime.Serialization.ObjectManager System.Runtime.Serialization.Formatters.Binary.ObjectReader::_manager
	ObjectManager_t2395696821 * ____manager_4;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectReader::_registeredAssemblies
	Hashtable_t188184851 * ____registeredAssemblies_5;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectReader::_typeMetadataCache
	Hashtable_t188184851 * ____typeMetadataCache_6;
	// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::_lastObject
	RuntimeObject * ____lastObject_7;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectReader::_lastObjectID
	int64_t ____lastObjectID_8;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectReader::_rootObjectID
	int64_t ____rootObjectID_9;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.ObjectReader::arrayBuffer
	ByteU5BU5D_t2378657911* ___arrayBuffer_10;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader::ArrayBufferLength
	int32_t ___ArrayBufferLength_11;

public:
	inline static int32_t get_offset_of__surrogateSelector_0() { return static_cast<int32_t>(offsetof(ObjectReader_t3738950956, ____surrogateSelector_0)); }
	inline RuntimeObject* get__surrogateSelector_0() const { return ____surrogateSelector_0; }
	inline RuntimeObject** get_address_of__surrogateSelector_0() { return &____surrogateSelector_0; }
	inline void set__surrogateSelector_0(RuntimeObject* value)
	{
		____surrogateSelector_0 = value;
		Il2CppCodeGenWriteBarrier((&____surrogateSelector_0), value);
	}

	inline static int32_t get_offset_of__context_1() { return static_cast<int32_t>(offsetof(ObjectReader_t3738950956, ____context_1)); }
	inline StreamingContext_t8276476  get__context_1() const { return ____context_1; }
	inline StreamingContext_t8276476 * get_address_of__context_1() { return &____context_1; }
	inline void set__context_1(StreamingContext_t8276476  value)
	{
		____context_1 = value;
	}

	inline static int32_t get_offset_of__binder_2() { return static_cast<int32_t>(offsetof(ObjectReader_t3738950956, ____binder_2)); }
	inline SerializationBinder_t534173557 * get__binder_2() const { return ____binder_2; }
	inline SerializationBinder_t534173557 ** get_address_of__binder_2() { return &____binder_2; }
	inline void set__binder_2(SerializationBinder_t534173557 * value)
	{
		____binder_2 = value;
		Il2CppCodeGenWriteBarrier((&____binder_2), value);
	}

	inline static int32_t get_offset_of__filterLevel_3() { return static_cast<int32_t>(offsetof(ObjectReader_t3738950956, ____filterLevel_3)); }
	inline int32_t get__filterLevel_3() const { return ____filterLevel_3; }
	inline int32_t* get_address_of__filterLevel_3() { return &____filterLevel_3; }
	inline void set__filterLevel_3(int32_t value)
	{
		____filterLevel_3 = value;
	}

	inline static int32_t get_offset_of__manager_4() { return static_cast<int32_t>(offsetof(ObjectReader_t3738950956, ____manager_4)); }
	inline ObjectManager_t2395696821 * get__manager_4() const { return ____manager_4; }
	inline ObjectManager_t2395696821 ** get_address_of__manager_4() { return &____manager_4; }
	inline void set__manager_4(ObjectManager_t2395696821 * value)
	{
		____manager_4 = value;
		Il2CppCodeGenWriteBarrier((&____manager_4), value);
	}

	inline static int32_t get_offset_of__registeredAssemblies_5() { return static_cast<int32_t>(offsetof(ObjectReader_t3738950956, ____registeredAssemblies_5)); }
	inline Hashtable_t188184851 * get__registeredAssemblies_5() const { return ____registeredAssemblies_5; }
	inline Hashtable_t188184851 ** get_address_of__registeredAssemblies_5() { return &____registeredAssemblies_5; }
	inline void set__registeredAssemblies_5(Hashtable_t188184851 * value)
	{
		____registeredAssemblies_5 = value;
		Il2CppCodeGenWriteBarrier((&____registeredAssemblies_5), value);
	}

	inline static int32_t get_offset_of__typeMetadataCache_6() { return static_cast<int32_t>(offsetof(ObjectReader_t3738950956, ____typeMetadataCache_6)); }
	inline Hashtable_t188184851 * get__typeMetadataCache_6() const { return ____typeMetadataCache_6; }
	inline Hashtable_t188184851 ** get_address_of__typeMetadataCache_6() { return &____typeMetadataCache_6; }
	inline void set__typeMetadataCache_6(Hashtable_t188184851 * value)
	{
		____typeMetadataCache_6 = value;
		Il2CppCodeGenWriteBarrier((&____typeMetadataCache_6), value);
	}

	inline static int32_t get_offset_of__lastObject_7() { return static_cast<int32_t>(offsetof(ObjectReader_t3738950956, ____lastObject_7)); }
	inline RuntimeObject * get__lastObject_7() const { return ____lastObject_7; }
	inline RuntimeObject ** get_address_of__lastObject_7() { return &____lastObject_7; }
	inline void set__lastObject_7(RuntimeObject * value)
	{
		____lastObject_7 = value;
		Il2CppCodeGenWriteBarrier((&____lastObject_7), value);
	}

	inline static int32_t get_offset_of__lastObjectID_8() { return static_cast<int32_t>(offsetof(ObjectReader_t3738950956, ____lastObjectID_8)); }
	inline int64_t get__lastObjectID_8() const { return ____lastObjectID_8; }
	inline int64_t* get_address_of__lastObjectID_8() { return &____lastObjectID_8; }
	inline void set__lastObjectID_8(int64_t value)
	{
		____lastObjectID_8 = value;
	}

	inline static int32_t get_offset_of__rootObjectID_9() { return static_cast<int32_t>(offsetof(ObjectReader_t3738950956, ____rootObjectID_9)); }
	inline int64_t get__rootObjectID_9() const { return ____rootObjectID_9; }
	inline int64_t* get_address_of__rootObjectID_9() { return &____rootObjectID_9; }
	inline void set__rootObjectID_9(int64_t value)
	{
		____rootObjectID_9 = value;
	}

	inline static int32_t get_offset_of_arrayBuffer_10() { return static_cast<int32_t>(offsetof(ObjectReader_t3738950956, ___arrayBuffer_10)); }
	inline ByteU5BU5D_t2378657911* get_arrayBuffer_10() const { return ___arrayBuffer_10; }
	inline ByteU5BU5D_t2378657911** get_address_of_arrayBuffer_10() { return &___arrayBuffer_10; }
	inline void set_arrayBuffer_10(ByteU5BU5D_t2378657911* value)
	{
		___arrayBuffer_10 = value;
		Il2CppCodeGenWriteBarrier((&___arrayBuffer_10), value);
	}

	inline static int32_t get_offset_of_ArrayBufferLength_11() { return static_cast<int32_t>(offsetof(ObjectReader_t3738950956, ___ArrayBufferLength_11)); }
	inline int32_t get_ArrayBufferLength_11() const { return ___ArrayBufferLength_11; }
	inline int32_t* get_address_of_ArrayBufferLength_11() { return &___ArrayBufferLength_11; }
	inline void set_ArrayBufferLength_11(int32_t value)
	{
		___ArrayBufferLength_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTREADER_T3738950956_H
#ifndef DESCRYPTOSERVICEPROVIDER_T1239363205_H
#define DESCRYPTOSERVICEPROVIDER_T1239363205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESCryptoServiceProvider
struct  DESCryptoServiceProvider_t1239363205  : public DES_t3723361735
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRYPTOSERVICEPROVIDER_T1239363205_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize600 = { sizeof (MessageFormatter_t1553117616), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize601 = { sizeof (ObjectReader_t3738950956), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable601[12] = 
{
	ObjectReader_t3738950956::get_offset_of__surrogateSelector_0(),
	ObjectReader_t3738950956::get_offset_of__context_1(),
	ObjectReader_t3738950956::get_offset_of__binder_2(),
	ObjectReader_t3738950956::get_offset_of__filterLevel_3(),
	ObjectReader_t3738950956::get_offset_of__manager_4(),
	ObjectReader_t3738950956::get_offset_of__registeredAssemblies_5(),
	ObjectReader_t3738950956::get_offset_of__typeMetadataCache_6(),
	ObjectReader_t3738950956::get_offset_of__lastObject_7(),
	ObjectReader_t3738950956::get_offset_of__lastObjectID_8(),
	ObjectReader_t3738950956::get_offset_of__rootObjectID_9(),
	ObjectReader_t3738950956::get_offset_of_arrayBuffer_10(),
	ObjectReader_t3738950956::get_offset_of_ArrayBufferLength_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize602 = { sizeof (TypeMetadata_t2838334036), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable602[6] = 
{
	TypeMetadata_t2838334036::get_offset_of_Type_0(),
	TypeMetadata_t2838334036::get_offset_of_MemberTypes_1(),
	TypeMetadata_t2838334036::get_offset_of_MemberNames_2(),
	TypeMetadata_t2838334036::get_offset_of_MemberInfos_3(),
	TypeMetadata_t2838334036::get_offset_of_FieldCount_4(),
	TypeMetadata_t2838334036::get_offset_of_NeedsSerializationInfo_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize603 = { sizeof (ArrayNullFiller_t790178463), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable603[1] = 
{
	ArrayNullFiller_t790178463::get_offset_of_NullCount_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize604 = { sizeof (TypeMetadata_t802614987), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable604[2] = 
{
	TypeMetadata_t802614987::get_offset_of_TypeAssemblyName_0(),
	TypeMetadata_t802614987::get_offset_of_InstanceTypeName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize605 = { sizeof (ClrTypeMetadata_t3503630550), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable605[1] = 
{
	ClrTypeMetadata_t3503630550::get_offset_of_InstanceType_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize606 = { sizeof (SerializableTypeMetadata_t4294662340), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable606[2] = 
{
	SerializableTypeMetadata_t4294662340::get_offset_of_types_2(),
	SerializableTypeMetadata_t4294662340::get_offset_of_names_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize607 = { sizeof (MemberTypeMetadata_t3019576140), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable607[1] = 
{
	MemberTypeMetadata_t3019576140::get_offset_of_members_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize608 = { sizeof (ObjectWriter_t1078461557), -1, sizeof(ObjectWriter_t1078461557_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable608[14] = 
{
	ObjectWriter_t1078461557::get_offset_of__idGenerator_0(),
	ObjectWriter_t1078461557::get_offset_of__cachedMetadata_1(),
	ObjectWriter_t1078461557::get_offset_of__pendingObjects_2(),
	ObjectWriter_t1078461557::get_offset_of__assemblyCache_3(),
	ObjectWriter_t1078461557_StaticFields::get_offset_of__cachedTypes_4(),
	ObjectWriter_t1078461557_StaticFields::get_offset_of_CorlibAssembly_5(),
	ObjectWriter_t1078461557_StaticFields::get_offset_of_CorlibAssemblyName_6(),
	ObjectWriter_t1078461557::get_offset_of__surrogateSelector_7(),
	ObjectWriter_t1078461557::get_offset_of__context_8(),
	ObjectWriter_t1078461557::get_offset_of__assemblyFormat_9(),
	ObjectWriter_t1078461557::get_offset_of__typeFormat_10(),
	ObjectWriter_t1078461557::get_offset_of_arrayBuffer_11(),
	ObjectWriter_t1078461557::get_offset_of_ArrayBufferLength_12(),
	ObjectWriter_t1078461557::get_offset_of__manager_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize609 = { sizeof (MetadataReference_t857703378), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable609[2] = 
{
	MetadataReference_t857703378::get_offset_of_Metadata_0(),
	MetadataReference_t857703378::get_offset_of_ObjectID_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize610 = { sizeof (FormatterAssemblyStyle_t4051758444)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable610[3] = 
{
	FormatterAssemblyStyle_t4051758444::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize611 = { sizeof (FormatterTypeStyle_t1340126395)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable611[4] = 
{
	FormatterTypeStyle_t1340126395::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize612 = { sizeof (TypeFilterLevel_t3574329576)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable612[3] = 
{
	TypeFilterLevel_t3574329576::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize613 = { sizeof (FormatterConverter_t1229115976), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize614 = { sizeof (FormatterServices_t2899463638), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize615 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize616 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize617 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize618 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize619 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize620 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize621 = { sizeof (ObjectIDGenerator_t220037371), -1, sizeof(ObjectIDGenerator_t220037371_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable621[3] = 
{
	ObjectIDGenerator_t220037371::get_offset_of_table_0(),
	ObjectIDGenerator_t220037371::get_offset_of_current_1(),
	ObjectIDGenerator_t220037371_StaticFields::get_offset_of_comparer_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize622 = { sizeof (InstanceComparer_t87733426), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize623 = { sizeof (ObjectManager_t2395696821), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable623[9] = 
{
	ObjectManager_t2395696821::get_offset_of__objectRecordChain_0(),
	ObjectManager_t2395696821::get_offset_of__lastObjectRecord_1(),
	ObjectManager_t2395696821::get_offset_of__deserializedRecords_2(),
	ObjectManager_t2395696821::get_offset_of__onDeserializedCallbackRecords_3(),
	ObjectManager_t2395696821::get_offset_of__objectRecords_4(),
	ObjectManager_t2395696821::get_offset_of__finalFixup_5(),
	ObjectManager_t2395696821::get_offset_of__selector_6(),
	ObjectManager_t2395696821::get_offset_of__context_7(),
	ObjectManager_t2395696821::get_offset_of__registeredObjectsCount_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize624 = { sizeof (BaseFixupRecord_t3407680861), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable624[4] = 
{
	BaseFixupRecord_t3407680861::get_offset_of_ObjectToBeFixed_0(),
	BaseFixupRecord_t3407680861::get_offset_of_ObjectRequired_1(),
	BaseFixupRecord_t3407680861::get_offset_of_NextSameContainer_2(),
	BaseFixupRecord_t3407680861::get_offset_of_NextSameRequired_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize625 = { sizeof (ArrayFixupRecord_t2187969465), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable625[1] = 
{
	ArrayFixupRecord_t2187969465::get_offset_of__index_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize626 = { sizeof (MultiArrayFixupRecord_t1674627828), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable626[1] = 
{
	MultiArrayFixupRecord_t1674627828::get_offset_of__indices_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize627 = { sizeof (FixupRecord_t3467462069), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable627[1] = 
{
	FixupRecord_t3467462069::get_offset_of__member_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize628 = { sizeof (DelayedFixupRecord_t3602491532), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable628[1] = 
{
	DelayedFixupRecord_t3602491532::get_offset_of__memberName_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize629 = { sizeof (ObjectRecordStatus_t2625527896)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable629[5] = 
{
	ObjectRecordStatus_t2625527896::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize630 = { sizeof (ObjectRecord_t3588703597), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable630[13] = 
{
	ObjectRecord_t3588703597::get_offset_of_Status_0(),
	ObjectRecord_t3588703597::get_offset_of_OriginalObject_1(),
	ObjectRecord_t3588703597::get_offset_of_ObjectInstance_2(),
	ObjectRecord_t3588703597::get_offset_of_ObjectID_3(),
	ObjectRecord_t3588703597::get_offset_of_Info_4(),
	ObjectRecord_t3588703597::get_offset_of_IdOfContainingObj_5(),
	ObjectRecord_t3588703597::get_offset_of_Surrogate_6(),
	ObjectRecord_t3588703597::get_offset_of_SurrogateSelector_7(),
	ObjectRecord_t3588703597::get_offset_of_Member_8(),
	ObjectRecord_t3588703597::get_offset_of_ArrayIndex_9(),
	ObjectRecord_t3588703597::get_offset_of_FixupChainAsContainer_10(),
	ObjectRecord_t3588703597::get_offset_of_FixupChainAsRequired_11(),
	ObjectRecord_t3588703597::get_offset_of_Next_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize631 = { sizeof (OnDeserializedAttribute_t1868594340), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize632 = { sizeof (OnDeserializingAttribute_t1748548149), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize633 = { sizeof (OnSerializedAttribute_t3291642057), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize634 = { sizeof (OnSerializingAttribute_t2683944146), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize635 = { sizeof (SerializationBinder_t534173557), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize636 = { sizeof (SerializationCallbacks_t742565834), -1, sizeof(SerializationCallbacks_t742565834_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable636[6] = 
{
	SerializationCallbacks_t742565834::get_offset_of_onSerializingList_0(),
	SerializationCallbacks_t742565834::get_offset_of_onSerializedList_1(),
	SerializationCallbacks_t742565834::get_offset_of_onDeserializingList_2(),
	SerializationCallbacks_t742565834::get_offset_of_onDeserializedList_3(),
	SerializationCallbacks_t742565834_StaticFields::get_offset_of_cache_4(),
	SerializationCallbacks_t742565834_StaticFields::get_offset_of_cache_lock_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize637 = { sizeof (CallbackHandler_t4077992800), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize638 = { sizeof (SerializationEntry_t3101791053)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable638[3] = 
{
	SerializationEntry_t3101791053::get_offset_of_name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SerializationEntry_t3101791053::get_offset_of_objectType_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SerializationEntry_t3101791053::get_offset_of_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize639 = { sizeof (SerializationException_t2768988190), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize640 = { sizeof (SerializationInfo_t214215410), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable640[5] = 
{
	SerializationInfo_t214215410::get_offset_of_serialized_0(),
	SerializationInfo_t214215410::get_offset_of_values_1(),
	SerializationInfo_t214215410::get_offset_of_assemblyName_2(),
	SerializationInfo_t214215410::get_offset_of_fullTypeName_3(),
	SerializationInfo_t214215410::get_offset_of_converter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize641 = { sizeof (SerializationInfoEnumerator_t906076048), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable641[1] = 
{
	SerializationInfoEnumerator_t906076048::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize642 = { sizeof (SerializationObjectManager_t104510113), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable642[3] = 
{
	SerializationObjectManager_t104510113::get_offset_of_context_0(),
	SerializationObjectManager_t104510113::get_offset_of_seen_1(),
	SerializationObjectManager_t104510113::get_offset_of_callbacks_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize643 = { sizeof (U3CRegisterObjectU3Ec__AnonStorey3_t3621939586), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable643[2] = 
{
	U3CRegisterObjectU3Ec__AnonStorey3_t3621939586::get_offset_of_sc_0(),
	U3CRegisterObjectU3Ec__AnonStorey3_t3621939586::get_offset_of_obj_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize644 = { sizeof (StreamingContext_t8276476)+ sizeof (RuntimeObject), sizeof(StreamingContext_t8276476_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable644[2] = 
{
	StreamingContext_t8276476::get_offset_of_state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	StreamingContext_t8276476::get_offset_of_additional_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize645 = { sizeof (StreamingContextStates_t595459671)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable645[10] = 
{
	StreamingContextStates_t595459671::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize646 = { sizeof (CommonObjectSecurity_t2253155613), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize647 = { sizeof (CryptoKeySecurity_t3532566249), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize648 = { sizeof (NativeObjectSecurity_t3802221355), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize649 = { sizeof (ObjectSecurity_t1763213511), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize650 = { sizeof (X509Certificate_t3183509327), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable650[5] = 
{
	X509Certificate_t3183509327::get_offset_of_x509_0(),
	X509Certificate_t3183509327::get_offset_of_hideDates_1(),
	X509Certificate_t3183509327::get_offset_of_cachedCertificateHash_2(),
	X509Certificate_t3183509327::get_offset_of_issuer_name_3(),
	X509Certificate_t3183509327::get_offset_of_subject_name_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize651 = { sizeof (X509KeyStorageFlags_t290244664)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable651[7] = 
{
	X509KeyStorageFlags_t290244664::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize652 = { sizeof (AsymmetricAlgorithm_t4121483336), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable652[2] = 
{
	AsymmetricAlgorithm_t4121483336::get_offset_of_KeySizeValue_0(),
	AsymmetricAlgorithm_t4121483336::get_offset_of_LegalKeySizesValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize653 = { sizeof (AsymmetricKeyExchangeDeformatter_t3440597542), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize654 = { sizeof (AsymmetricKeyExchangeFormatter_t71173349), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize655 = { sizeof (AsymmetricSignatureDeformatter_t3228332467), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize656 = { sizeof (AsymmetricSignatureFormatter_t3931539935), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize657 = { sizeof (Base64Constants_t1932035648), -1, sizeof(Base64Constants_t1932035648_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable657[2] = 
{
	Base64Constants_t1932035648_StaticFields::get_offset_of_EncodeTable_0(),
	Base64Constants_t1932035648_StaticFields::get_offset_of_DecodeTable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize658 = { sizeof (CipherMode_t1449587351)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable658[6] = 
{
	CipherMode_t1449587351::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize659 = { sizeof (CryptoAPITransform_t2783517362), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable659[1] = 
{
	CryptoAPITransform_t2783517362::get_offset_of_m_disposed_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize660 = { sizeof (CryptoConfig_t2211454577), -1, sizeof(CryptoConfig_t2211454577_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable660[139] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	CryptoConfig_t2211454577_StaticFields::get_offset_of_lockObject_136(),
	CryptoConfig_t2211454577_StaticFields::get_offset_of_algorithms_137(),
	CryptoConfig_t2211454577_StaticFields::get_offset_of_oid_138(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize661 = { sizeof (CryptoHandler_t2970555817), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable661[5] = 
{
	CryptoHandler_t2970555817::get_offset_of_algorithms_0(),
	CryptoHandler_t2970555817::get_offset_of_oid_1(),
	CryptoHandler_t2970555817::get_offset_of_names_2(),
	CryptoHandler_t2970555817::get_offset_of_classnames_3(),
	CryptoHandler_t2970555817::get_offset_of_level_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize662 = { sizeof (CryptoStream_t3318160134), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable662[15] = 
{
	CryptoStream_t3318160134::get_offset_of__stream_1(),
	CryptoStream_t3318160134::get_offset_of__transform_2(),
	CryptoStream_t3318160134::get_offset_of__mode_3(),
	CryptoStream_t3318160134::get_offset_of__currentBlock_4(),
	CryptoStream_t3318160134::get_offset_of__disposed_5(),
	CryptoStream_t3318160134::get_offset_of__flushedFinalBlock_6(),
	CryptoStream_t3318160134::get_offset_of__partialCount_7(),
	CryptoStream_t3318160134::get_offset_of__endOfStream_8(),
	CryptoStream_t3318160134::get_offset_of__waitingBlock_9(),
	CryptoStream_t3318160134::get_offset_of__waitingCount_10(),
	CryptoStream_t3318160134::get_offset_of__transformedBlock_11(),
	CryptoStream_t3318160134::get_offset_of__transformedPos_12(),
	CryptoStream_t3318160134::get_offset_of__transformedCount_13(),
	CryptoStream_t3318160134::get_offset_of__workingBlock_14(),
	CryptoStream_t3318160134::get_offset_of__workingCount_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize663 = { sizeof (CryptoStreamMode_t3021435620)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable663[3] = 
{
	CryptoStreamMode_t3021435620::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize664 = { sizeof (CryptographicException_t3497875048), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize665 = { sizeof (CryptographicUnexpectedOperationException_t3406904946), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize666 = { sizeof (CspKeyContainerInfo_t142824498), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable666[2] = 
{
	CspKeyContainerInfo_t142824498::get_offset_of__params_0(),
	CspKeyContainerInfo_t142824498::get_offset_of__random_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize667 = { sizeof (CspParameters_t4291407971), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable667[7] = 
{
	CspParameters_t4291407971::get_offset_of__Flags_0(),
	CspParameters_t4291407971::get_offset_of_KeyContainerName_1(),
	CspParameters_t4291407971::get_offset_of_KeyNumber_2(),
	CspParameters_t4291407971::get_offset_of_ProviderName_3(),
	CspParameters_t4291407971::get_offset_of_ProviderType_4(),
	CspParameters_t4291407971::get_offset_of__password_5(),
	CspParameters_t4291407971::get_offset_of__windowHandle_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize668 = { sizeof (CspProviderFlags_t1809880806)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable668[9] = 
{
	CspProviderFlags_t1809880806::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize669 = { sizeof (DES_t3723361735), -1, sizeof(DES_t3723361735_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable669[3] = 
{
	0,
	DES_t3723361735_StaticFields::get_offset_of_weakKeys_11(),
	DES_t3723361735_StaticFields::get_offset_of_semiWeakKeys_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize670 = { sizeof (DESTransform_t227128484), -1, sizeof(DESTransform_t227128484_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable670[13] = 
{
	DESTransform_t227128484_StaticFields::get_offset_of_KEY_BIT_SIZE_12(),
	DESTransform_t227128484_StaticFields::get_offset_of_KEY_BYTE_SIZE_13(),
	DESTransform_t227128484_StaticFields::get_offset_of_BLOCK_BIT_SIZE_14(),
	DESTransform_t227128484_StaticFields::get_offset_of_BLOCK_BYTE_SIZE_15(),
	DESTransform_t227128484::get_offset_of_keySchedule_16(),
	DESTransform_t227128484::get_offset_of_byteBuff_17(),
	DESTransform_t227128484::get_offset_of_dwordBuff_18(),
	DESTransform_t227128484_StaticFields::get_offset_of_spBoxes_19(),
	DESTransform_t227128484_StaticFields::get_offset_of_PC1_20(),
	DESTransform_t227128484_StaticFields::get_offset_of_leftRotTotal_21(),
	DESTransform_t227128484_StaticFields::get_offset_of_PC2_22(),
	DESTransform_t227128484_StaticFields::get_offset_of_ipTab_23(),
	DESTransform_t227128484_StaticFields::get_offset_of_fpTab_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize671 = { sizeof (DESCryptoServiceProvider_t1239363205), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize672 = { sizeof (DSA_t2257449250), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize673 = { sizeof (DSACryptoServiceProvider_t489806399), -1, sizeof(DSACryptoServiceProvider_t489806399_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable673[8] = 
{
	0,
	DSACryptoServiceProvider_t489806399::get_offset_of_store_3(),
	DSACryptoServiceProvider_t489806399::get_offset_of_persistKey_4(),
	DSACryptoServiceProvider_t489806399::get_offset_of_persisted_5(),
	DSACryptoServiceProvider_t489806399::get_offset_of_privateKeyExportable_6(),
	DSACryptoServiceProvider_t489806399::get_offset_of_m_disposed_7(),
	DSACryptoServiceProvider_t489806399::get_offset_of_dsa_8(),
	DSACryptoServiceProvider_t489806399_StaticFields::get_offset_of_useMachineKeyStore_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize674 = { sizeof (DSAParameters_t1902175948)+ sizeof (RuntimeObject), sizeof(DSAParameters_t1902175948_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable674[8] = 
{
	DSAParameters_t1902175948::get_offset_of_Counter_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1902175948::get_offset_of_G_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1902175948::get_offset_of_J_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1902175948::get_offset_of_P_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1902175948::get_offset_of_Q_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1902175948::get_offset_of_Seed_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1902175948::get_offset_of_X_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1902175948::get_offset_of_Y_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize675 = { sizeof (DSASignatureDeformatter_t2463393796), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable675[1] = 
{
	DSASignatureDeformatter_t2463393796::get_offset_of_dsa_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize676 = { sizeof (DSASignatureFormatter_t2453457595), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable676[1] = 
{
	DSASignatureFormatter_t2453457595::get_offset_of_dsa_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize677 = { sizeof (DeriveBytes_t708730207), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize678 = { sizeof (FromBase64TransformMode_t1177306793)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable678[3] = 
{
	FromBase64TransformMode_t1177306793::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize679 = { sizeof (FromBase64Transform_t1927266979), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable679[6] = 
{
	0,
	FromBase64Transform_t1927266979::get_offset_of_mode_1(),
	FromBase64Transform_t1927266979::get_offset_of_accumulator_2(),
	FromBase64Transform_t1927266979::get_offset_of_accPtr_3(),
	FromBase64Transform_t1927266979::get_offset_of_m_disposed_4(),
	FromBase64Transform_t1927266979::get_offset_of_lookupTable_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize680 = { sizeof (HMAC_t2760015152), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable680[5] = 
{
	HMAC_t2760015152::get_offset_of__disposed_5(),
	HMAC_t2760015152::get_offset_of__hashName_6(),
	HMAC_t2760015152::get_offset_of__algo_7(),
	HMAC_t2760015152::get_offset_of__block_8(),
	HMAC_t2760015152::get_offset_of__blockSizeValue_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize681 = { sizeof (HMACMD5_t84639982), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize682 = { sizeof (HMACRIPEMD160_t2135776901), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize683 = { sizeof (HMACSHA1_t4143740851), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize684 = { sizeof (HMACSHA256_t447421352), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize685 = { sizeof (HMACSHA384_t1257975747), -1, sizeof(HMACSHA384_t1257975747_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable685[2] = 
{
	HMACSHA384_t1257975747_StaticFields::get_offset_of_legacy_mode_10(),
	HMACSHA384_t1257975747::get_offset_of_legacy_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize686 = { sizeof (HMACSHA512_t2674362804), -1, sizeof(HMACSHA512_t2674362804_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable686[2] = 
{
	HMACSHA512_t2674362804_StaticFields::get_offset_of_legacy_mode_10(),
	HMACSHA512_t2674362804::get_offset_of_legacy_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize687 = { sizeof (HashAlgorithm_t3908565528), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable687[4] = 
{
	HashAlgorithm_t3908565528::get_offset_of_HashValue_0(),
	HashAlgorithm_t3908565528::get_offset_of_HashSizeValue_1(),
	HashAlgorithm_t3908565528::get_offset_of_State_2(),
	HashAlgorithm_t3908565528::get_offset_of_disposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize688 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize689 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize690 = { sizeof (KeyNumber_t3108683201)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable690[3] = 
{
	KeyNumber_t3108683201::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize691 = { sizeof (KeySizes_t740852447), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable691[3] = 
{
	KeySizes_t740852447::get_offset_of__maxSize_0(),
	KeySizes_t740852447::get_offset_of__minSize_1(),
	KeySizes_t740852447::get_offset_of__skipSize_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize692 = { sizeof (KeyedHashAlgorithm_t3290128499), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable692[1] = 
{
	KeyedHashAlgorithm_t3290128499::get_offset_of_KeyValue_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize693 = { sizeof (MACTripleDES_t3065070158), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable693[3] = 
{
	MACTripleDES_t3065070158::get_offset_of_tdes_5(),
	MACTripleDES_t3065070158::get_offset_of_mac_6(),
	MACTripleDES_t3065070158::get_offset_of_m_disposed_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize694 = { sizeof (MD5_t1506454198), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize695 = { sizeof (MD5CryptoServiceProvider_t1964479865), -1, sizeof(MD5CryptoServiceProvider_t1964479865_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable695[8] = 
{
	0,
	0,
	MD5CryptoServiceProvider_t1964479865::get_offset_of__H_6(),
	MD5CryptoServiceProvider_t1964479865::get_offset_of_buff_7(),
	MD5CryptoServiceProvider_t1964479865::get_offset_of_count_8(),
	MD5CryptoServiceProvider_t1964479865::get_offset_of__ProcessingBuffer_9(),
	MD5CryptoServiceProvider_t1964479865::get_offset_of__ProcessingBufferCount_10(),
	MD5CryptoServiceProvider_t1964479865_StaticFields::get_offset_of_K_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize696 = { sizeof (MaskGenerationMethod_t154787205), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize697 = { sizeof (PKCS1MaskGenerationMethod_t2373244323), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable697[1] = 
{
	PKCS1MaskGenerationMethod_t2373244323::get_offset_of_hashName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize698 = { sizeof (PaddingMode_t2720849367)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable698[6] = 
{
	PaddingMode_t2720849367::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize699 = { sizeof (PasswordDeriveBytes_t2385803505), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable699[10] = 
{
	PasswordDeriveBytes_t2385803505::get_offset_of_HashNameValue_0(),
	PasswordDeriveBytes_t2385803505::get_offset_of_SaltValue_1(),
	PasswordDeriveBytes_t2385803505::get_offset_of_IterationsValue_2(),
	PasswordDeriveBytes_t2385803505::get_offset_of_hash_3(),
	PasswordDeriveBytes_t2385803505::get_offset_of_state_4(),
	PasswordDeriveBytes_t2385803505::get_offset_of_password_5(),
	PasswordDeriveBytes_t2385803505::get_offset_of_initial_6(),
	PasswordDeriveBytes_t2385803505::get_offset_of_output_7(),
	PasswordDeriveBytes_t2385803505::get_offset_of_position_8(),
	PasswordDeriveBytes_t2385803505::get_offset_of_hashnumber_9(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
