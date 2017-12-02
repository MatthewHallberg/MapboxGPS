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

// System.Byte[]
struct ByteU5BU5D_t2896786162;
// System.Collections.ArrayList
struct ArrayList_t844188058;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3485169016;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t2577231953;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t800481449;
// Mono.Security.ASN1
struct ASN1_t3076133810;
// System.AsyncCallback
struct AsyncCallback_t3881358540;
// System.Exception
struct Exception_t3144957912;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t3617874605;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t934843692;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3350127351;
// Mono.Security.X509.X509Stores
struct X509Stores_t3496914816;
// Mono.Security.X509.X509Store
struct X509Store_t55481204;
// System.IO.Stream
struct Stream_t3580315789;
// Mono.Security.Protocol.Tls.Context
struct Context_t3052937665;
// System.Collections.Hashtable
struct Hashtable_t2604207785;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2194148873;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t2630045085;
// System.Security.Cryptography.RSA
struct RSA_t3446211033;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t2824063359;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t788180480;
// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t2583028647;
// System.Char[]
struct CharU5BU5D_t1565992178;
// System.Void
struct Void_t3045135636;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1857717760;
// System.UInt32[]
struct UInt32U5BU5D_t1190422219;
// Mono.Math.BigInteger
struct BigInteger_t4080557799;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t1721427477;
// System.IO.MemoryStream
struct MemoryStream_t3321880770;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t2436280827;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t2715187709;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t2041376707;
// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t11759951;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t488459878;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t3259247178;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t2720362418;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t2335861944;
// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t1536610037;
// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t475553206;
// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t2105378483;
// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t3539135286;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t1700644566;
// System.String[]
struct StringU5BU5D_t3162382152;
// System.Int32[]
struct Int32U5BU5D_t3325461767;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2519639597;
// System.EventArgs
struct EventArgs_t2070024930;
// System.IAsyncResult
struct IAsyncResult_t1380204350;
// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t849171934;
// System.Security.Cryptography.DSA
struct DSA_t3302464558;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1986057146;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3351604210;
// System.Net.HttpWebRequest
struct HttpWebRequest_t360432576;




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
#ifndef ASN1_T3076133810_H
#define ASN1_T3076133810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct  ASN1_t3076133810  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_t2896786162* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t844188058 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t3076133810, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t3076133810, ___m_aValue_1)); }
	inline ByteU5BU5D_t2896786162* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_t2896786162** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_t2896786162* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_aValue_1), value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t3076133810, ___elist_2)); }
	inline ArrayList_t844188058 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t844188058 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t844188058 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((&___elist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1_T3076133810_H
#ifndef X501_T3738592435_H
#define X501_T3738592435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X501
struct  X501_t3738592435  : public RuntimeObject
{
public:

public:
};

struct X501_t3738592435_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.X501::countryName
	ByteU5BU5D_t2896786162* ___countryName_0;
	// System.Byte[] Mono.Security.X509.X501::organizationName
	ByteU5BU5D_t2896786162* ___organizationName_1;
	// System.Byte[] Mono.Security.X509.X501::organizationalUnitName
	ByteU5BU5D_t2896786162* ___organizationalUnitName_2;
	// System.Byte[] Mono.Security.X509.X501::commonName
	ByteU5BU5D_t2896786162* ___commonName_3;
	// System.Byte[] Mono.Security.X509.X501::localityName
	ByteU5BU5D_t2896786162* ___localityName_4;
	// System.Byte[] Mono.Security.X509.X501::stateOrProvinceName
	ByteU5BU5D_t2896786162* ___stateOrProvinceName_5;
	// System.Byte[] Mono.Security.X509.X501::streetAddress
	ByteU5BU5D_t2896786162* ___streetAddress_6;
	// System.Byte[] Mono.Security.X509.X501::domainComponent
	ByteU5BU5D_t2896786162* ___domainComponent_7;
	// System.Byte[] Mono.Security.X509.X501::userid
	ByteU5BU5D_t2896786162* ___userid_8;
	// System.Byte[] Mono.Security.X509.X501::email
	ByteU5BU5D_t2896786162* ___email_9;
	// System.Byte[] Mono.Security.X509.X501::dnQualifier
	ByteU5BU5D_t2896786162* ___dnQualifier_10;
	// System.Byte[] Mono.Security.X509.X501::title
	ByteU5BU5D_t2896786162* ___title_11;
	// System.Byte[] Mono.Security.X509.X501::surname
	ByteU5BU5D_t2896786162* ___surname_12;
	// System.Byte[] Mono.Security.X509.X501::givenName
	ByteU5BU5D_t2896786162* ___givenName_13;
	// System.Byte[] Mono.Security.X509.X501::initial
	ByteU5BU5D_t2896786162* ___initial_14;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X501::<>f__switch$mapD
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24mapD_15;

public:
	inline static int32_t get_offset_of_countryName_0() { return static_cast<int32_t>(offsetof(X501_t3738592435_StaticFields, ___countryName_0)); }
	inline ByteU5BU5D_t2896786162* get_countryName_0() const { return ___countryName_0; }
	inline ByteU5BU5D_t2896786162** get_address_of_countryName_0() { return &___countryName_0; }
	inline void set_countryName_0(ByteU5BU5D_t2896786162* value)
	{
		___countryName_0 = value;
		Il2CppCodeGenWriteBarrier((&___countryName_0), value);
	}

	inline static int32_t get_offset_of_organizationName_1() { return static_cast<int32_t>(offsetof(X501_t3738592435_StaticFields, ___organizationName_1)); }
	inline ByteU5BU5D_t2896786162* get_organizationName_1() const { return ___organizationName_1; }
	inline ByteU5BU5D_t2896786162** get_address_of_organizationName_1() { return &___organizationName_1; }
	inline void set_organizationName_1(ByteU5BU5D_t2896786162* value)
	{
		___organizationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___organizationName_1), value);
	}

	inline static int32_t get_offset_of_organizationalUnitName_2() { return static_cast<int32_t>(offsetof(X501_t3738592435_StaticFields, ___organizationalUnitName_2)); }
	inline ByteU5BU5D_t2896786162* get_organizationalUnitName_2() const { return ___organizationalUnitName_2; }
	inline ByteU5BU5D_t2896786162** get_address_of_organizationalUnitName_2() { return &___organizationalUnitName_2; }
	inline void set_organizationalUnitName_2(ByteU5BU5D_t2896786162* value)
	{
		___organizationalUnitName_2 = value;
		Il2CppCodeGenWriteBarrier((&___organizationalUnitName_2), value);
	}

	inline static int32_t get_offset_of_commonName_3() { return static_cast<int32_t>(offsetof(X501_t3738592435_StaticFields, ___commonName_3)); }
	inline ByteU5BU5D_t2896786162* get_commonName_3() const { return ___commonName_3; }
	inline ByteU5BU5D_t2896786162** get_address_of_commonName_3() { return &___commonName_3; }
	inline void set_commonName_3(ByteU5BU5D_t2896786162* value)
	{
		___commonName_3 = value;
		Il2CppCodeGenWriteBarrier((&___commonName_3), value);
	}

	inline static int32_t get_offset_of_localityName_4() { return static_cast<int32_t>(offsetof(X501_t3738592435_StaticFields, ___localityName_4)); }
	inline ByteU5BU5D_t2896786162* get_localityName_4() const { return ___localityName_4; }
	inline ByteU5BU5D_t2896786162** get_address_of_localityName_4() { return &___localityName_4; }
	inline void set_localityName_4(ByteU5BU5D_t2896786162* value)
	{
		___localityName_4 = value;
		Il2CppCodeGenWriteBarrier((&___localityName_4), value);
	}

	inline static int32_t get_offset_of_stateOrProvinceName_5() { return static_cast<int32_t>(offsetof(X501_t3738592435_StaticFields, ___stateOrProvinceName_5)); }
	inline ByteU5BU5D_t2896786162* get_stateOrProvinceName_5() const { return ___stateOrProvinceName_5; }
	inline ByteU5BU5D_t2896786162** get_address_of_stateOrProvinceName_5() { return &___stateOrProvinceName_5; }
	inline void set_stateOrProvinceName_5(ByteU5BU5D_t2896786162* value)
	{
		___stateOrProvinceName_5 = value;
		Il2CppCodeGenWriteBarrier((&___stateOrProvinceName_5), value);
	}

	inline static int32_t get_offset_of_streetAddress_6() { return static_cast<int32_t>(offsetof(X501_t3738592435_StaticFields, ___streetAddress_6)); }
	inline ByteU5BU5D_t2896786162* get_streetAddress_6() const { return ___streetAddress_6; }
	inline ByteU5BU5D_t2896786162** get_address_of_streetAddress_6() { return &___streetAddress_6; }
	inline void set_streetAddress_6(ByteU5BU5D_t2896786162* value)
	{
		___streetAddress_6 = value;
		Il2CppCodeGenWriteBarrier((&___streetAddress_6), value);
	}

	inline static int32_t get_offset_of_domainComponent_7() { return static_cast<int32_t>(offsetof(X501_t3738592435_StaticFields, ___domainComponent_7)); }
	inline ByteU5BU5D_t2896786162* get_domainComponent_7() const { return ___domainComponent_7; }
	inline ByteU5BU5D_t2896786162** get_address_of_domainComponent_7() { return &___domainComponent_7; }
	inline void set_domainComponent_7(ByteU5BU5D_t2896786162* value)
	{
		___domainComponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___domainComponent_7), value);
	}

	inline static int32_t get_offset_of_userid_8() { return static_cast<int32_t>(offsetof(X501_t3738592435_StaticFields, ___userid_8)); }
	inline ByteU5BU5D_t2896786162* get_userid_8() const { return ___userid_8; }
	inline ByteU5BU5D_t2896786162** get_address_of_userid_8() { return &___userid_8; }
	inline void set_userid_8(ByteU5BU5D_t2896786162* value)
	{
		___userid_8 = value;
		Il2CppCodeGenWriteBarrier((&___userid_8), value);
	}

	inline static int32_t get_offset_of_email_9() { return static_cast<int32_t>(offsetof(X501_t3738592435_StaticFields, ___email_9)); }
	inline ByteU5BU5D_t2896786162* get_email_9() const { return ___email_9; }
	inline ByteU5BU5D_t2896786162** get_address_of_email_9() { return &___email_9; }
	inline void set_email_9(ByteU5BU5D_t2896786162* value)
	{
		___email_9 = value;
		Il2CppCodeGenWriteBarrier((&___email_9), value);
	}

	inline static int32_t get_offset_of_dnQualifier_10() { return static_cast<int32_t>(offsetof(X501_t3738592435_StaticFields, ___dnQualifier_10)); }
	inline ByteU5BU5D_t2896786162* get_dnQualifier_10() const { return ___dnQualifier_10; }
	inline ByteU5BU5D_t2896786162** get_address_of_dnQualifier_10() { return &___dnQualifier_10; }
	inline void set_dnQualifier_10(ByteU5BU5D_t2896786162* value)
	{
		___dnQualifier_10 = value;
		Il2CppCodeGenWriteBarrier((&___dnQualifier_10), value);
	}

	inline static int32_t get_offset_of_title_11() { return static_cast<int32_t>(offsetof(X501_t3738592435_StaticFields, ___title_11)); }
	inline ByteU5BU5D_t2896786162* get_title_11() const { return ___title_11; }
	inline ByteU5BU5D_t2896786162** get_address_of_title_11() { return &___title_11; }
	inline void set_title_11(ByteU5BU5D_t2896786162* value)
	{
		___title_11 = value;
		Il2CppCodeGenWriteBarrier((&___title_11), value);
	}

	inline static int32_t get_offset_of_surname_12() { return static_cast<int32_t>(offsetof(X501_t3738592435_StaticFields, ___surname_12)); }
	inline ByteU5BU5D_t2896786162* get_surname_12() const { return ___surname_12; }
	inline ByteU5BU5D_t2896786162** get_address_of_surname_12() { return &___surname_12; }
	inline void set_surname_12(ByteU5BU5D_t2896786162* value)
	{
		___surname_12 = value;
		Il2CppCodeGenWriteBarrier((&___surname_12), value);
	}

	inline static int32_t get_offset_of_givenName_13() { return static_cast<int32_t>(offsetof(X501_t3738592435_StaticFields, ___givenName_13)); }
	inline ByteU5BU5D_t2896786162* get_givenName_13() const { return ___givenName_13; }
	inline ByteU5BU5D_t2896786162** get_address_of_givenName_13() { return &___givenName_13; }
	inline void set_givenName_13(ByteU5BU5D_t2896786162* value)
	{
		___givenName_13 = value;
		Il2CppCodeGenWriteBarrier((&___givenName_13), value);
	}

	inline static int32_t get_offset_of_initial_14() { return static_cast<int32_t>(offsetof(X501_t3738592435_StaticFields, ___initial_14)); }
	inline ByteU5BU5D_t2896786162* get_initial_14() const { return ___initial_14; }
	inline ByteU5BU5D_t2896786162** get_address_of_initial_14() { return &___initial_14; }
	inline void set_initial_14(ByteU5BU5D_t2896786162* value)
	{
		___initial_14 = value;
		Il2CppCodeGenWriteBarrier((&___initial_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapD_15() { return static_cast<int32_t>(offsetof(X501_t3738592435_StaticFields, ___U3CU3Ef__switchU24mapD_15)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24mapD_15() const { return ___U3CU3Ef__switchU24mapD_15; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24mapD_15() { return &___U3CU3Ef__switchU24mapD_15; }
	inline void set_U3CU3Ef__switchU24mapD_15(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24mapD_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapD_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X501_T3738592435_H
#ifndef X509BUILDER_T3328382317_H
#define X509BUILDER_T3328382317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Builder
struct  X509Builder_t3328382317  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Builder::hashName
	String_t* ___hashName_1;

public:
	inline static int32_t get_offset_of_hashName_1() { return static_cast<int32_t>(offsetof(X509Builder_t3328382317, ___hashName_1)); }
	inline String_t* get_hashName_1() const { return ___hashName_1; }
	inline String_t** get_address_of_hashName_1() { return &___hashName_1; }
	inline void set_hashName_1(String_t* value)
	{
		___hashName_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashName_1), value);
	}
};

struct X509Builder_t3328382317_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Builder::<>f__switch$mapE
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24mapE_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapE_2() { return static_cast<int32_t>(offsetof(X509Builder_t3328382317_StaticFields, ___U3CU3Ef__switchU24mapE_2)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24mapE_2() const { return ___U3CU3Ef__switchU24mapE_2; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24mapE_2() { return &___U3CU3Ef__switchU24mapE_2; }
	inline void set_U3CU3Ef__switchU24mapE_2(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24mapE_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapE_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509BUILDER_T3328382317_H
#ifndef STREAM_T3580315789_H
#define STREAM_T3580315789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t3580315789  : public RuntimeObject
{
public:

public:
};

struct Stream_t3580315789_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t3580315789 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t3580315789_StaticFields, ___Null_0)); }
	inline Stream_t3580315789 * get_Null_0() const { return ___Null_0; }
	inline Stream_t3580315789 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t3580315789 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T3580315789_H
#ifndef X509CERTIFICATEENUMERATOR_T1179802508_H
#define X509CERTIFICATEENUMERATOR_T1179802508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct  X509CertificateEnumerator_t1179802508  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_t1179802508, ___enumerator_0)); }
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
#endif // X509CERTIFICATEENUMERATOR_T1179802508_H
#ifndef HASHALGORITHM_T788180480_H
#define HASHALGORITHM_T788180480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t788180480  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t2896786162* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t788180480, ___HashValue_0)); }
	inline ByteU5BU5D_t2896786162* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t2896786162** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t2896786162* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t788180480, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t788180480, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t788180480, ___disposed_3)); }
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
#endif // HASHALGORITHM_T788180480_H
#ifndef SECURITYPARAMETERS_T2105378483_H
#define SECURITYPARAMETERS_T2105378483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SecurityParameters
struct  SecurityParameters_t2105378483  : public RuntimeObject
{
public:
	// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.SecurityParameters::cipher
	CipherSuite_t800481449 * ___cipher_0;
	// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::clientWriteMAC
	ByteU5BU5D_t2896786162* ___clientWriteMAC_1;
	// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::serverWriteMAC
	ByteU5BU5D_t2896786162* ___serverWriteMAC_2;

public:
	inline static int32_t get_offset_of_cipher_0() { return static_cast<int32_t>(offsetof(SecurityParameters_t2105378483, ___cipher_0)); }
	inline CipherSuite_t800481449 * get_cipher_0() const { return ___cipher_0; }
	inline CipherSuite_t800481449 ** get_address_of_cipher_0() { return &___cipher_0; }
	inline void set_cipher_0(CipherSuite_t800481449 * value)
	{
		___cipher_0 = value;
		Il2CppCodeGenWriteBarrier((&___cipher_0), value);
	}

	inline static int32_t get_offset_of_clientWriteMAC_1() { return static_cast<int32_t>(offsetof(SecurityParameters_t2105378483, ___clientWriteMAC_1)); }
	inline ByteU5BU5D_t2896786162* get_clientWriteMAC_1() const { return ___clientWriteMAC_1; }
	inline ByteU5BU5D_t2896786162** get_address_of_clientWriteMAC_1() { return &___clientWriteMAC_1; }
	inline void set_clientWriteMAC_1(ByteU5BU5D_t2896786162* value)
	{
		___clientWriteMAC_1 = value;
		Il2CppCodeGenWriteBarrier((&___clientWriteMAC_1), value);
	}

	inline static int32_t get_offset_of_serverWriteMAC_2() { return static_cast<int32_t>(offsetof(SecurityParameters_t2105378483, ___serverWriteMAC_2)); }
	inline ByteU5BU5D_t2896786162* get_serverWriteMAC_2() const { return ___serverWriteMAC_2; }
	inline ByteU5BU5D_t2896786162** get_address_of_serverWriteMAC_2() { return &___serverWriteMAC_2; }
	inline void set_serverWriteMAC_2(ByteU5BU5D_t2896786162* value)
	{
		___serverWriteMAC_2 = value;
		Il2CppCodeGenWriteBarrier((&___serverWriteMAC_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPARAMETERS_T2105378483_H
#ifndef X509EXTENSION_T786769929_H
#define X509EXTENSION_T786769929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Extension
struct  X509Extension_t786769929  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Extension::extnOid
	String_t* ___extnOid_0;
	// System.Boolean Mono.Security.X509.X509Extension::extnCritical
	bool ___extnCritical_1;
	// Mono.Security.ASN1 Mono.Security.X509.X509Extension::extnValue
	ASN1_t3076133810 * ___extnValue_2;

public:
	inline static int32_t get_offset_of_extnOid_0() { return static_cast<int32_t>(offsetof(X509Extension_t786769929, ___extnOid_0)); }
	inline String_t* get_extnOid_0() const { return ___extnOid_0; }
	inline String_t** get_address_of_extnOid_0() { return &___extnOid_0; }
	inline void set_extnOid_0(String_t* value)
	{
		___extnOid_0 = value;
		Il2CppCodeGenWriteBarrier((&___extnOid_0), value);
	}

	inline static int32_t get_offset_of_extnCritical_1() { return static_cast<int32_t>(offsetof(X509Extension_t786769929, ___extnCritical_1)); }
	inline bool get_extnCritical_1() const { return ___extnCritical_1; }
	inline bool* get_address_of_extnCritical_1() { return &___extnCritical_1; }
	inline void set_extnCritical_1(bool value)
	{
		___extnCritical_1 = value;
	}

	inline static int32_t get_offset_of_extnValue_2() { return static_cast<int32_t>(offsetof(X509Extension_t786769929, ___extnValue_2)); }
	inline ASN1_t3076133810 * get_extnValue_2() const { return ___extnValue_2; }
	inline ASN1_t3076133810 ** get_address_of_extnValue_2() { return &___extnValue_2; }
	inline void set_extnValue_2(ASN1_t3076133810 * value)
	{
		___extnValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___extnValue_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSION_T786769929_H
#ifndef SENDRECORDASYNCRESULT_T2771687265_H
#define SENDRECORDASYNCRESULT_T2771687265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult
struct  SendRecordAsyncResult_t2771687265  : public RuntimeObject
{
public:
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::locker
	RuntimeObject * ___locker_0;
	// System.AsyncCallback Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_userCallback
	AsyncCallback_t3881358540 * ____userCallback_1;
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_userState
	RuntimeObject * ____userState_2;
	// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_asyncException
	Exception_t3144957912 * ____asyncException_3;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::handle
	ManualResetEvent_t3617874605 * ___handle_4;
	// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_message
	HandshakeMessage_t934843692 * ____message_5;
	// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::completed
	bool ___completed_6;

public:
	inline static int32_t get_offset_of_locker_0() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t2771687265, ___locker_0)); }
	inline RuntimeObject * get_locker_0() const { return ___locker_0; }
	inline RuntimeObject ** get_address_of_locker_0() { return &___locker_0; }
	inline void set_locker_0(RuntimeObject * value)
	{
		___locker_0 = value;
		Il2CppCodeGenWriteBarrier((&___locker_0), value);
	}

	inline static int32_t get_offset_of__userCallback_1() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t2771687265, ____userCallback_1)); }
	inline AsyncCallback_t3881358540 * get__userCallback_1() const { return ____userCallback_1; }
	inline AsyncCallback_t3881358540 ** get_address_of__userCallback_1() { return &____userCallback_1; }
	inline void set__userCallback_1(AsyncCallback_t3881358540 * value)
	{
		____userCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&____userCallback_1), value);
	}

	inline static int32_t get_offset_of__userState_2() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t2771687265, ____userState_2)); }
	inline RuntimeObject * get__userState_2() const { return ____userState_2; }
	inline RuntimeObject ** get_address_of__userState_2() { return &____userState_2; }
	inline void set__userState_2(RuntimeObject * value)
	{
		____userState_2 = value;
		Il2CppCodeGenWriteBarrier((&____userState_2), value);
	}

	inline static int32_t get_offset_of__asyncException_3() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t2771687265, ____asyncException_3)); }
	inline Exception_t3144957912 * get__asyncException_3() const { return ____asyncException_3; }
	inline Exception_t3144957912 ** get_address_of__asyncException_3() { return &____asyncException_3; }
	inline void set__asyncException_3(Exception_t3144957912 * value)
	{
		____asyncException_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncException_3), value);
	}

	inline static int32_t get_offset_of_handle_4() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t2771687265, ___handle_4)); }
	inline ManualResetEvent_t3617874605 * get_handle_4() const { return ___handle_4; }
	inline ManualResetEvent_t3617874605 ** get_address_of_handle_4() { return &___handle_4; }
	inline void set_handle_4(ManualResetEvent_t3617874605 * value)
	{
		___handle_4 = value;
		Il2CppCodeGenWriteBarrier((&___handle_4), value);
	}

	inline static int32_t get_offset_of__message_5() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t2771687265, ____message_5)); }
	inline HandshakeMessage_t934843692 * get__message_5() const { return ____message_5; }
	inline HandshakeMessage_t934843692 ** get_address_of__message_5() { return &____message_5; }
	inline void set__message_5(HandshakeMessage_t934843692 * value)
	{
		____message_5 = value;
		Il2CppCodeGenWriteBarrier((&____message_5), value);
	}

	inline static int32_t get_offset_of_completed_6() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t2771687265, ___completed_6)); }
	inline bool get_completed_6() const { return ___completed_6; }
	inline bool* get_address_of_completed_6() { return &___completed_6; }
	inline void set_completed_6(bool value)
	{
		___completed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDRECORDASYNCRESULT_T2771687265_H
#ifndef X509STORE_T55481204_H
#define X509STORE_T55481204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Store
struct  X509Store_t55481204  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Store::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::_certificates
	X509CertificateCollection_t3350127351 * ____certificates_1;
	// System.Collections.ArrayList Mono.Security.X509.X509Store::_crls
	ArrayList_t844188058 * ____crls_2;
	// System.Boolean Mono.Security.X509.X509Store::_crl
	bool ____crl_3;
	// System.String Mono.Security.X509.X509Store::_name
	String_t* ____name_4;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Store_t55481204, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((&____storePath_0), value);
	}

	inline static int32_t get_offset_of__certificates_1() { return static_cast<int32_t>(offsetof(X509Store_t55481204, ____certificates_1)); }
	inline X509CertificateCollection_t3350127351 * get__certificates_1() const { return ____certificates_1; }
	inline X509CertificateCollection_t3350127351 ** get_address_of__certificates_1() { return &____certificates_1; }
	inline void set__certificates_1(X509CertificateCollection_t3350127351 * value)
	{
		____certificates_1 = value;
		Il2CppCodeGenWriteBarrier((&____certificates_1), value);
	}

	inline static int32_t get_offset_of__crls_2() { return static_cast<int32_t>(offsetof(X509Store_t55481204, ____crls_2)); }
	inline ArrayList_t844188058 * get__crls_2() const { return ____crls_2; }
	inline ArrayList_t844188058 ** get_address_of__crls_2() { return &____crls_2; }
	inline void set__crls_2(ArrayList_t844188058 * value)
	{
		____crls_2 = value;
		Il2CppCodeGenWriteBarrier((&____crls_2), value);
	}

	inline static int32_t get_offset_of__crl_3() { return static_cast<int32_t>(offsetof(X509Store_t55481204, ____crl_3)); }
	inline bool get__crl_3() const { return ____crl_3; }
	inline bool* get_address_of__crl_3() { return &____crl_3; }
	inline void set__crl_3(bool value)
	{
		____crl_3 = value;
	}

	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(X509Store_t55481204, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier((&____name_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORE_T55481204_H
#ifndef X509STOREMANAGER_T3300342847_H
#define X509STOREMANAGER_T3300342847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509StoreManager
struct  X509StoreManager_t3300342847  : public RuntimeObject
{
public:

public:
};

struct X509StoreManager_t3300342847_StaticFields
{
public:
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_userStore
	X509Stores_t3496914816 * ____userStore_0;
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_machineStore
	X509Stores_t3496914816 * ____machineStore_1;

public:
	inline static int32_t get_offset_of__userStore_0() { return static_cast<int32_t>(offsetof(X509StoreManager_t3300342847_StaticFields, ____userStore_0)); }
	inline X509Stores_t3496914816 * get__userStore_0() const { return ____userStore_0; }
	inline X509Stores_t3496914816 ** get_address_of__userStore_0() { return &____userStore_0; }
	inline void set__userStore_0(X509Stores_t3496914816 * value)
	{
		____userStore_0 = value;
		Il2CppCodeGenWriteBarrier((&____userStore_0), value);
	}

	inline static int32_t get_offset_of__machineStore_1() { return static_cast<int32_t>(offsetof(X509StoreManager_t3300342847_StaticFields, ____machineStore_1)); }
	inline X509Stores_t3496914816 * get__machineStore_1() const { return ____machineStore_1; }
	inline X509Stores_t3496914816 ** get_address_of__machineStore_1() { return &____machineStore_1; }
	inline void set__machineStore_1(X509Stores_t3496914816 * value)
	{
		____machineStore_1 = value;
		Il2CppCodeGenWriteBarrier((&____machineStore_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STOREMANAGER_T3300342847_H
#ifndef X509STORES_T3496914816_H
#define X509STORES_T3496914816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Stores
struct  X509Stores_t3496914816  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Stores::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_personal
	X509Store_t55481204 * ____personal_1;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_other
	X509Store_t55481204 * ____other_2;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_intermediate
	X509Store_t55481204 * ____intermediate_3;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_trusted
	X509Store_t55481204 * ____trusted_4;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_untrusted
	X509Store_t55481204 * ____untrusted_5;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Stores_t3496914816, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((&____storePath_0), value);
	}

	inline static int32_t get_offset_of__personal_1() { return static_cast<int32_t>(offsetof(X509Stores_t3496914816, ____personal_1)); }
	inline X509Store_t55481204 * get__personal_1() const { return ____personal_1; }
	inline X509Store_t55481204 ** get_address_of__personal_1() { return &____personal_1; }
	inline void set__personal_1(X509Store_t55481204 * value)
	{
		____personal_1 = value;
		Il2CppCodeGenWriteBarrier((&____personal_1), value);
	}

	inline static int32_t get_offset_of__other_2() { return static_cast<int32_t>(offsetof(X509Stores_t3496914816, ____other_2)); }
	inline X509Store_t55481204 * get__other_2() const { return ____other_2; }
	inline X509Store_t55481204 ** get_address_of__other_2() { return &____other_2; }
	inline void set__other_2(X509Store_t55481204 * value)
	{
		____other_2 = value;
		Il2CppCodeGenWriteBarrier((&____other_2), value);
	}

	inline static int32_t get_offset_of__intermediate_3() { return static_cast<int32_t>(offsetof(X509Stores_t3496914816, ____intermediate_3)); }
	inline X509Store_t55481204 * get__intermediate_3() const { return ____intermediate_3; }
	inline X509Store_t55481204 ** get_address_of__intermediate_3() { return &____intermediate_3; }
	inline void set__intermediate_3(X509Store_t55481204 * value)
	{
		____intermediate_3 = value;
		Il2CppCodeGenWriteBarrier((&____intermediate_3), value);
	}

	inline static int32_t get_offset_of__trusted_4() { return static_cast<int32_t>(offsetof(X509Stores_t3496914816, ____trusted_4)); }
	inline X509Store_t55481204 * get__trusted_4() const { return ____trusted_4; }
	inline X509Store_t55481204 ** get_address_of__trusted_4() { return &____trusted_4; }
	inline void set__trusted_4(X509Store_t55481204 * value)
	{
		____trusted_4 = value;
		Il2CppCodeGenWriteBarrier((&____trusted_4), value);
	}

	inline static int32_t get_offset_of__untrusted_5() { return static_cast<int32_t>(offsetof(X509Stores_t3496914816, ____untrusted_5)); }
	inline X509Store_t55481204 * get__untrusted_5() const { return ____untrusted_5; }
	inline X509Store_t55481204 ** get_address_of__untrusted_5() { return &____untrusted_5; }
	inline void set__untrusted_5(X509Store_t55481204 * value)
	{
		____untrusted_5 = value;
		Il2CppCodeGenWriteBarrier((&____untrusted_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORES_T3496914816_H
#ifndef NAMES_T3687131391_H
#define NAMES_T3687131391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Stores/Names
struct  Names_t3687131391  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMES_T3687131391_H
#ifndef X520_T1653928645_H
#define X520_T1653928645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520
struct  X520_t1653928645  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X520_T1653928645_H
#ifndef ATTRIBUTETYPEANDVALUE_T4188943397_H
#define ATTRIBUTETYPEANDVALUE_T4188943397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/AttributeTypeAndValue
struct  AttributeTypeAndValue_t4188943397  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X520/AttributeTypeAndValue::oid
	String_t* ___oid_0;
	// System.String Mono.Security.X509.X520/AttributeTypeAndValue::attrValue
	String_t* ___attrValue_1;
	// System.Int32 Mono.Security.X509.X520/AttributeTypeAndValue::upperBound
	int32_t ___upperBound_2;
	// System.Byte Mono.Security.X509.X520/AttributeTypeAndValue::encoding
	uint8_t ___encoding_3;

public:
	inline static int32_t get_offset_of_oid_0() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_t4188943397, ___oid_0)); }
	inline String_t* get_oid_0() const { return ___oid_0; }
	inline String_t** get_address_of_oid_0() { return &___oid_0; }
	inline void set_oid_0(String_t* value)
	{
		___oid_0 = value;
		Il2CppCodeGenWriteBarrier((&___oid_0), value);
	}

	inline static int32_t get_offset_of_attrValue_1() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_t4188943397, ___attrValue_1)); }
	inline String_t* get_attrValue_1() const { return ___attrValue_1; }
	inline String_t** get_address_of_attrValue_1() { return &___attrValue_1; }
	inline void set_attrValue_1(String_t* value)
	{
		___attrValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrValue_1), value);
	}

	inline static int32_t get_offset_of_upperBound_2() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_t4188943397, ___upperBound_2)); }
	inline int32_t get_upperBound_2() const { return ___upperBound_2; }
	inline int32_t* get_address_of_upperBound_2() { return &___upperBound_2; }
	inline void set_upperBound_2(int32_t value)
	{
		___upperBound_2 = value;
	}

	inline static int32_t get_offset_of_encoding_3() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_t4188943397, ___encoding_3)); }
	inline uint8_t get_encoding_3() const { return ___encoding_3; }
	inline uint8_t* get_address_of_encoding_3() { return &___encoding_3; }
	inline void set_encoding_3(uint8_t value)
	{
		___encoding_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTETYPEANDVALUE_T4188943397_H
#ifndef RECEIVERECORDASYNCRESULT_T2608081800_H
#define RECEIVERECORDASYNCRESULT_T2608081800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct  ReceiveRecordAsyncResult_t2608081800  : public RuntimeObject
{
public:
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::locker
	RuntimeObject * ___locker_0;
	// System.AsyncCallback Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_userCallback
	AsyncCallback_t3881358540 * ____userCallback_1;
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_userState
	RuntimeObject * ____userState_2;
	// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_asyncException
	Exception_t3144957912 * ____asyncException_3;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::handle
	ManualResetEvent_t3617874605 * ___handle_4;
	// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_resultingBuffer
	ByteU5BU5D_t2896786162* ____resultingBuffer_5;
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_record
	Stream_t3580315789 * ____record_6;
	// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::completed
	bool ___completed_7;
	// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_initialBuffer
	ByteU5BU5D_t2896786162* ____initialBuffer_8;

public:
	inline static int32_t get_offset_of_locker_0() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t2608081800, ___locker_0)); }
	inline RuntimeObject * get_locker_0() const { return ___locker_0; }
	inline RuntimeObject ** get_address_of_locker_0() { return &___locker_0; }
	inline void set_locker_0(RuntimeObject * value)
	{
		___locker_0 = value;
		Il2CppCodeGenWriteBarrier((&___locker_0), value);
	}

	inline static int32_t get_offset_of__userCallback_1() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t2608081800, ____userCallback_1)); }
	inline AsyncCallback_t3881358540 * get__userCallback_1() const { return ____userCallback_1; }
	inline AsyncCallback_t3881358540 ** get_address_of__userCallback_1() { return &____userCallback_1; }
	inline void set__userCallback_1(AsyncCallback_t3881358540 * value)
	{
		____userCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&____userCallback_1), value);
	}

	inline static int32_t get_offset_of__userState_2() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t2608081800, ____userState_2)); }
	inline RuntimeObject * get__userState_2() const { return ____userState_2; }
	inline RuntimeObject ** get_address_of__userState_2() { return &____userState_2; }
	inline void set__userState_2(RuntimeObject * value)
	{
		____userState_2 = value;
		Il2CppCodeGenWriteBarrier((&____userState_2), value);
	}

	inline static int32_t get_offset_of__asyncException_3() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t2608081800, ____asyncException_3)); }
	inline Exception_t3144957912 * get__asyncException_3() const { return ____asyncException_3; }
	inline Exception_t3144957912 ** get_address_of__asyncException_3() { return &____asyncException_3; }
	inline void set__asyncException_3(Exception_t3144957912 * value)
	{
		____asyncException_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncException_3), value);
	}

	inline static int32_t get_offset_of_handle_4() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t2608081800, ___handle_4)); }
	inline ManualResetEvent_t3617874605 * get_handle_4() const { return ___handle_4; }
	inline ManualResetEvent_t3617874605 ** get_address_of_handle_4() { return &___handle_4; }
	inline void set_handle_4(ManualResetEvent_t3617874605 * value)
	{
		___handle_4 = value;
		Il2CppCodeGenWriteBarrier((&___handle_4), value);
	}

	inline static int32_t get_offset_of__resultingBuffer_5() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t2608081800, ____resultingBuffer_5)); }
	inline ByteU5BU5D_t2896786162* get__resultingBuffer_5() const { return ____resultingBuffer_5; }
	inline ByteU5BU5D_t2896786162** get_address_of__resultingBuffer_5() { return &____resultingBuffer_5; }
	inline void set__resultingBuffer_5(ByteU5BU5D_t2896786162* value)
	{
		____resultingBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&____resultingBuffer_5), value);
	}

	inline static int32_t get_offset_of__record_6() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t2608081800, ____record_6)); }
	inline Stream_t3580315789 * get__record_6() const { return ____record_6; }
	inline Stream_t3580315789 ** get_address_of__record_6() { return &____record_6; }
	inline void set__record_6(Stream_t3580315789 * value)
	{
		____record_6 = value;
		Il2CppCodeGenWriteBarrier((&____record_6), value);
	}

	inline static int32_t get_offset_of_completed_7() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t2608081800, ___completed_7)); }
	inline bool get_completed_7() const { return ___completed_7; }
	inline bool* get_address_of_completed_7() { return &___completed_7; }
	inline void set_completed_7(bool value)
	{
		___completed_7 = value;
	}

	inline static int32_t get_offset_of__initialBuffer_8() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t2608081800, ____initialBuffer_8)); }
	inline ByteU5BU5D_t2896786162* get__initialBuffer_8() const { return ____initialBuffer_8; }
	inline ByteU5BU5D_t2896786162** get_address_of__initialBuffer_8() { return &____initialBuffer_8; }
	inline void set__initialBuffer_8(ByteU5BU5D_t2896786162* value)
	{
		____initialBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((&____initialBuffer_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECEIVERECORDASYNCRESULT_T2608081800_H
#ifndef RECORDPROTOCOL_T2436280827_H
#define RECORDPROTOCOL_T2436280827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RecordProtocol
struct  RecordProtocol_t2436280827  : public RuntimeObject
{
public:
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol::innerStream
	Stream_t3580315789 * ___innerStream_1;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::context
	Context_t3052937665 * ___context_2;

public:
	inline static int32_t get_offset_of_innerStream_1() { return static_cast<int32_t>(offsetof(RecordProtocol_t2436280827, ___innerStream_1)); }
	inline Stream_t3580315789 * get_innerStream_1() const { return ___innerStream_1; }
	inline Stream_t3580315789 ** get_address_of_innerStream_1() { return &___innerStream_1; }
	inline void set_innerStream_1(Stream_t3580315789 * value)
	{
		___innerStream_1 = value;
		Il2CppCodeGenWriteBarrier((&___innerStream_1), value);
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(RecordProtocol_t2436280827, ___context_2)); }
	inline Context_t3052937665 * get_context_2() const { return ___context_2; }
	inline Context_t3052937665 ** get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(Context_t3052937665 * value)
	{
		___context_2 = value;
		Il2CppCodeGenWriteBarrier((&___context_2), value);
	}
};

struct RecordProtocol_t2436280827_StaticFields
{
public:
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol::record_processing
	ManualResetEvent_t3617874605 * ___record_processing_0;

public:
	inline static int32_t get_offset_of_record_processing_0() { return static_cast<int32_t>(offsetof(RecordProtocol_t2436280827_StaticFields, ___record_processing_0)); }
	inline ManualResetEvent_t3617874605 * get_record_processing_0() const { return ___record_processing_0; }
	inline ManualResetEvent_t3617874605 ** get_address_of_record_processing_0() { return &___record_processing_0; }
	inline void set_record_processing_0(ManualResetEvent_t3617874605 * value)
	{
		___record_processing_0 = value;
		Il2CppCodeGenWriteBarrier((&___record_processing_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECORDPROTOCOL_T2436280827_H
#ifndef DEBUGHELPER_T2573288699_H
#define DEBUGHELPER_T2573288699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.DebugHelper
struct  DebugHelper_t2573288699  : public RuntimeObject
{
public:

public:
};

struct DebugHelper_t2573288699_StaticFields
{
public:
	// System.Boolean Mono.Security.Protocol.Tls.DebugHelper::isInitialized
	bool ___isInitialized_0;

public:
	inline static int32_t get_offset_of_isInitialized_0() { return static_cast<int32_t>(offsetof(DebugHelper_t2573288699_StaticFields, ___isInitialized_0)); }
	inline bool get_isInitialized_0() const { return ___isInitialized_0; }
	inline bool* get_address_of_isInitialized_0() { return &___isInitialized_0; }
	inline void set_isInitialized_0(bool value)
	{
		___isInitialized_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGHELPER_T2573288699_H
#ifndef CLIENTSESSIONCACHE_T675933560_H
#define CLIENTSESSIONCACHE_T675933560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ClientSessionCache
struct  ClientSessionCache_t675933560  : public RuntimeObject
{
public:

public:
};

struct ClientSessionCache_t675933560_StaticFields
{
public:
	// System.Collections.Hashtable Mono.Security.Protocol.Tls.ClientSessionCache::cache
	Hashtable_t2604207785 * ___cache_0;
	// System.Object Mono.Security.Protocol.Tls.ClientSessionCache::locker
	RuntimeObject * ___locker_1;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(ClientSessionCache_t675933560_StaticFields, ___cache_0)); }
	inline Hashtable_t2604207785 * get_cache_0() const { return ___cache_0; }
	inline Hashtable_t2604207785 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(Hashtable_t2604207785 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier((&___cache_0), value);
	}

	inline static int32_t get_offset_of_locker_1() { return static_cast<int32_t>(offsetof(ClientSessionCache_t675933560_StaticFields, ___locker_1)); }
	inline RuntimeObject * get_locker_1() const { return ___locker_1; }
	inline RuntimeObject ** get_address_of_locker_1() { return &___locker_1; }
	inline void set_locker_1(RuntimeObject * value)
	{
		___locker_1 = value;
		Il2CppCodeGenWriteBarrier((&___locker_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTSESSIONCACHE_T675933560_H
#ifndef PKCS12_T2714915916_H
#define PKCS12_T2714915916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12
struct  PKCS12_t2714915916  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12::_password
	ByteU5BU5D_t2896786162* ____password_17;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_keyBags
	ArrayList_t844188058 * ____keyBags_18;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_secretBags
	ArrayList_t844188058 * ____secretBags_19;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::_certs
	X509CertificateCollection_t3350127351 * ____certs_20;
	// System.Boolean Mono.Security.X509.PKCS12::_keyBagsChanged
	bool ____keyBagsChanged_21;
	// System.Boolean Mono.Security.X509.PKCS12::_secretBagsChanged
	bool ____secretBagsChanged_22;
	// System.Boolean Mono.Security.X509.PKCS12::_certsChanged
	bool ____certsChanged_23;
	// System.Int32 Mono.Security.X509.PKCS12::_iterations
	int32_t ____iterations_24;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_safeBags
	ArrayList_t844188058 * ____safeBags_25;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::_rng
	RandomNumberGenerator_t2194148873 * ____rng_26;

public:
	inline static int32_t get_offset_of__password_17() { return static_cast<int32_t>(offsetof(PKCS12_t2714915916, ____password_17)); }
	inline ByteU5BU5D_t2896786162* get__password_17() const { return ____password_17; }
	inline ByteU5BU5D_t2896786162** get_address_of__password_17() { return &____password_17; }
	inline void set__password_17(ByteU5BU5D_t2896786162* value)
	{
		____password_17 = value;
		Il2CppCodeGenWriteBarrier((&____password_17), value);
	}

	inline static int32_t get_offset_of__keyBags_18() { return static_cast<int32_t>(offsetof(PKCS12_t2714915916, ____keyBags_18)); }
	inline ArrayList_t844188058 * get__keyBags_18() const { return ____keyBags_18; }
	inline ArrayList_t844188058 ** get_address_of__keyBags_18() { return &____keyBags_18; }
	inline void set__keyBags_18(ArrayList_t844188058 * value)
	{
		____keyBags_18 = value;
		Il2CppCodeGenWriteBarrier((&____keyBags_18), value);
	}

	inline static int32_t get_offset_of__secretBags_19() { return static_cast<int32_t>(offsetof(PKCS12_t2714915916, ____secretBags_19)); }
	inline ArrayList_t844188058 * get__secretBags_19() const { return ____secretBags_19; }
	inline ArrayList_t844188058 ** get_address_of__secretBags_19() { return &____secretBags_19; }
	inline void set__secretBags_19(ArrayList_t844188058 * value)
	{
		____secretBags_19 = value;
		Il2CppCodeGenWriteBarrier((&____secretBags_19), value);
	}

	inline static int32_t get_offset_of__certs_20() { return static_cast<int32_t>(offsetof(PKCS12_t2714915916, ____certs_20)); }
	inline X509CertificateCollection_t3350127351 * get__certs_20() const { return ____certs_20; }
	inline X509CertificateCollection_t3350127351 ** get_address_of__certs_20() { return &____certs_20; }
	inline void set__certs_20(X509CertificateCollection_t3350127351 * value)
	{
		____certs_20 = value;
		Il2CppCodeGenWriteBarrier((&____certs_20), value);
	}

	inline static int32_t get_offset_of__keyBagsChanged_21() { return static_cast<int32_t>(offsetof(PKCS12_t2714915916, ____keyBagsChanged_21)); }
	inline bool get__keyBagsChanged_21() const { return ____keyBagsChanged_21; }
	inline bool* get_address_of__keyBagsChanged_21() { return &____keyBagsChanged_21; }
	inline void set__keyBagsChanged_21(bool value)
	{
		____keyBagsChanged_21 = value;
	}

	inline static int32_t get_offset_of__secretBagsChanged_22() { return static_cast<int32_t>(offsetof(PKCS12_t2714915916, ____secretBagsChanged_22)); }
	inline bool get__secretBagsChanged_22() const { return ____secretBagsChanged_22; }
	inline bool* get_address_of__secretBagsChanged_22() { return &____secretBagsChanged_22; }
	inline void set__secretBagsChanged_22(bool value)
	{
		____secretBagsChanged_22 = value;
	}

	inline static int32_t get_offset_of__certsChanged_23() { return static_cast<int32_t>(offsetof(PKCS12_t2714915916, ____certsChanged_23)); }
	inline bool get__certsChanged_23() const { return ____certsChanged_23; }
	inline bool* get_address_of__certsChanged_23() { return &____certsChanged_23; }
	inline void set__certsChanged_23(bool value)
	{
		____certsChanged_23 = value;
	}

	inline static int32_t get_offset_of__iterations_24() { return static_cast<int32_t>(offsetof(PKCS12_t2714915916, ____iterations_24)); }
	inline int32_t get__iterations_24() const { return ____iterations_24; }
	inline int32_t* get_address_of__iterations_24() { return &____iterations_24; }
	inline void set__iterations_24(int32_t value)
	{
		____iterations_24 = value;
	}

	inline static int32_t get_offset_of__safeBags_25() { return static_cast<int32_t>(offsetof(PKCS12_t2714915916, ____safeBags_25)); }
	inline ArrayList_t844188058 * get__safeBags_25() const { return ____safeBags_25; }
	inline ArrayList_t844188058 ** get_address_of__safeBags_25() { return &____safeBags_25; }
	inline void set__safeBags_25(ArrayList_t844188058 * value)
	{
		____safeBags_25 = value;
		Il2CppCodeGenWriteBarrier((&____safeBags_25), value);
	}

	inline static int32_t get_offset_of__rng_26() { return static_cast<int32_t>(offsetof(PKCS12_t2714915916, ____rng_26)); }
	inline RandomNumberGenerator_t2194148873 * get__rng_26() const { return ____rng_26; }
	inline RandomNumberGenerator_t2194148873 ** get_address_of__rng_26() { return &____rng_26; }
	inline void set__rng_26(RandomNumberGenerator_t2194148873 * value)
	{
		____rng_26 = value;
		Il2CppCodeGenWriteBarrier((&____rng_26), value);
	}
};

struct PKCS12_t2714915916_StaticFields
{
public:
	// System.Int32 Mono.Security.X509.PKCS12::recommendedIterationCount
	int32_t ___recommendedIterationCount_16;
	// System.Int32 Mono.Security.X509.PKCS12::password_max_length
	int32_t ___password_max_length_27;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map5
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24map5_28;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map6
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24map6_29;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map7
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24map7_30;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map8
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24map8_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map9
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24map9_32;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapA
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24mapA_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapB
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24mapB_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapC
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24mapC_35;

public:
	inline static int32_t get_offset_of_recommendedIterationCount_16() { return static_cast<int32_t>(offsetof(PKCS12_t2714915916_StaticFields, ___recommendedIterationCount_16)); }
	inline int32_t get_recommendedIterationCount_16() const { return ___recommendedIterationCount_16; }
	inline int32_t* get_address_of_recommendedIterationCount_16() { return &___recommendedIterationCount_16; }
	inline void set_recommendedIterationCount_16(int32_t value)
	{
		___recommendedIterationCount_16 = value;
	}

	inline static int32_t get_offset_of_password_max_length_27() { return static_cast<int32_t>(offsetof(PKCS12_t2714915916_StaticFields, ___password_max_length_27)); }
	inline int32_t get_password_max_length_27() const { return ___password_max_length_27; }
	inline int32_t* get_address_of_password_max_length_27() { return &___password_max_length_27; }
	inline void set_password_max_length_27(int32_t value)
	{
		___password_max_length_27 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_28() { return static_cast<int32_t>(offsetof(PKCS12_t2714915916_StaticFields, ___U3CU3Ef__switchU24map5_28)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24map5_28() const { return ___U3CU3Ef__switchU24map5_28; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24map5_28() { return &___U3CU3Ef__switchU24map5_28; }
	inline void set_U3CU3Ef__switchU24map5_28(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24map5_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map5_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map6_29() { return static_cast<int32_t>(offsetof(PKCS12_t2714915916_StaticFields, ___U3CU3Ef__switchU24map6_29)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24map6_29() const { return ___U3CU3Ef__switchU24map6_29; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24map6_29() { return &___U3CU3Ef__switchU24map6_29; }
	inline void set_U3CU3Ef__switchU24map6_29(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24map6_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map6_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map7_30() { return static_cast<int32_t>(offsetof(PKCS12_t2714915916_StaticFields, ___U3CU3Ef__switchU24map7_30)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24map7_30() const { return ___U3CU3Ef__switchU24map7_30; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24map7_30() { return &___U3CU3Ef__switchU24map7_30; }
	inline void set_U3CU3Ef__switchU24map7_30(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24map7_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map7_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map8_31() { return static_cast<int32_t>(offsetof(PKCS12_t2714915916_StaticFields, ___U3CU3Ef__switchU24map8_31)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24map8_31() const { return ___U3CU3Ef__switchU24map8_31; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24map8_31() { return &___U3CU3Ef__switchU24map8_31; }
	inline void set_U3CU3Ef__switchU24map8_31(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24map8_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map8_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map9_32() { return static_cast<int32_t>(offsetof(PKCS12_t2714915916_StaticFields, ___U3CU3Ef__switchU24map9_32)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24map9_32() const { return ___U3CU3Ef__switchU24map9_32; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24map9_32() { return &___U3CU3Ef__switchU24map9_32; }
	inline void set_U3CU3Ef__switchU24map9_32(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24map9_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map9_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapA_33() { return static_cast<int32_t>(offsetof(PKCS12_t2714915916_StaticFields, ___U3CU3Ef__switchU24mapA_33)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24mapA_33() const { return ___U3CU3Ef__switchU24mapA_33; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24mapA_33() { return &___U3CU3Ef__switchU24mapA_33; }
	inline void set_U3CU3Ef__switchU24mapA_33(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24mapA_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapA_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapB_34() { return static_cast<int32_t>(offsetof(PKCS12_t2714915916_StaticFields, ___U3CU3Ef__switchU24mapB_34)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24mapB_34() const { return ___U3CU3Ef__switchU24mapB_34; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24mapB_34() { return &___U3CU3Ef__switchU24mapB_34; }
	inline void set_U3CU3Ef__switchU24mapB_34(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24mapB_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapB_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapC_35() { return static_cast<int32_t>(offsetof(PKCS12_t2714915916_StaticFields, ___U3CU3Ef__switchU24mapC_35)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24mapC_35() const { return ___U3CU3Ef__switchU24mapC_35; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24mapC_35() { return &___U3CU3Ef__switchU24mapC_35; }
	inline void set_U3CU3Ef__switchU24mapC_35(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24mapC_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapC_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS12_T2714915916_H
#ifndef SAFEBAG_T2054482692_H
#define SAFEBAG_T2054482692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.SafeBag
struct  SafeBag_t2054482692  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.SafeBag::_bagOID
	String_t* ____bagOID_0;
	// Mono.Security.ASN1 Mono.Security.X509.SafeBag::_asn1
	ASN1_t3076133810 * ____asn1_1;

public:
	inline static int32_t get_offset_of__bagOID_0() { return static_cast<int32_t>(offsetof(SafeBag_t2054482692, ____bagOID_0)); }
	inline String_t* get__bagOID_0() const { return ____bagOID_0; }
	inline String_t** get_address_of__bagOID_0() { return &____bagOID_0; }
	inline void set__bagOID_0(String_t* value)
	{
		____bagOID_0 = value;
		Il2CppCodeGenWriteBarrier((&____bagOID_0), value);
	}

	inline static int32_t get_offset_of__asn1_1() { return static_cast<int32_t>(offsetof(SafeBag_t2054482692, ____asn1_1)); }
	inline ASN1_t3076133810 * get__asn1_1() const { return ____asn1_1; }
	inline ASN1_t3076133810 ** get_address_of__asn1_1() { return &____asn1_1; }
	inline void set__asn1_1(ASN1_t3076133810 * value)
	{
		____asn1_1 = value;
		Il2CppCodeGenWriteBarrier((&____asn1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEBAG_T2054482692_H
#ifndef DERIVEBYTES_T1147558369_H
#define DERIVEBYTES_T1147558369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12/DeriveBytes
struct  DeriveBytes_t1147558369  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.PKCS12/DeriveBytes::_hashName
	String_t* ____hashName_3;
	// System.Int32 Mono.Security.X509.PKCS12/DeriveBytes::_iterations
	int32_t ____iterations_4;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_password
	ByteU5BU5D_t2896786162* ____password_5;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_salt
	ByteU5BU5D_t2896786162* ____salt_6;

public:
	inline static int32_t get_offset_of__hashName_3() { return static_cast<int32_t>(offsetof(DeriveBytes_t1147558369, ____hashName_3)); }
	inline String_t* get__hashName_3() const { return ____hashName_3; }
	inline String_t** get_address_of__hashName_3() { return &____hashName_3; }
	inline void set__hashName_3(String_t* value)
	{
		____hashName_3 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_3), value);
	}

	inline static int32_t get_offset_of__iterations_4() { return static_cast<int32_t>(offsetof(DeriveBytes_t1147558369, ____iterations_4)); }
	inline int32_t get__iterations_4() const { return ____iterations_4; }
	inline int32_t* get_address_of__iterations_4() { return &____iterations_4; }
	inline void set__iterations_4(int32_t value)
	{
		____iterations_4 = value;
	}

	inline static int32_t get_offset_of__password_5() { return static_cast<int32_t>(offsetof(DeriveBytes_t1147558369, ____password_5)); }
	inline ByteU5BU5D_t2896786162* get__password_5() const { return ____password_5; }
	inline ByteU5BU5D_t2896786162** get_address_of__password_5() { return &____password_5; }
	inline void set__password_5(ByteU5BU5D_t2896786162* value)
	{
		____password_5 = value;
		Il2CppCodeGenWriteBarrier((&____password_5), value);
	}

	inline static int32_t get_offset_of__salt_6() { return static_cast<int32_t>(offsetof(DeriveBytes_t1147558369, ____salt_6)); }
	inline ByteU5BU5D_t2896786162* get__salt_6() const { return ____salt_6; }
	inline ByteU5BU5D_t2896786162** get_address_of__salt_6() { return &____salt_6; }
	inline void set__salt_6(ByteU5BU5D_t2896786162* value)
	{
		____salt_6 = value;
		Il2CppCodeGenWriteBarrier((&____salt_6), value);
	}
};

struct DeriveBytes_t1147558369_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::keyDiversifier
	ByteU5BU5D_t2896786162* ___keyDiversifier_0;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::ivDiversifier
	ByteU5BU5D_t2896786162* ___ivDiversifier_1;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::macDiversifier
	ByteU5BU5D_t2896786162* ___macDiversifier_2;

public:
	inline static int32_t get_offset_of_keyDiversifier_0() { return static_cast<int32_t>(offsetof(DeriveBytes_t1147558369_StaticFields, ___keyDiversifier_0)); }
	inline ByteU5BU5D_t2896786162* get_keyDiversifier_0() const { return ___keyDiversifier_0; }
	inline ByteU5BU5D_t2896786162** get_address_of_keyDiversifier_0() { return &___keyDiversifier_0; }
	inline void set_keyDiversifier_0(ByteU5BU5D_t2896786162* value)
	{
		___keyDiversifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyDiversifier_0), value);
	}

	inline static int32_t get_offset_of_ivDiversifier_1() { return static_cast<int32_t>(offsetof(DeriveBytes_t1147558369_StaticFields, ___ivDiversifier_1)); }
	inline ByteU5BU5D_t2896786162* get_ivDiversifier_1() const { return ___ivDiversifier_1; }
	inline ByteU5BU5D_t2896786162** get_address_of_ivDiversifier_1() { return &___ivDiversifier_1; }
	inline void set_ivDiversifier_1(ByteU5BU5D_t2896786162* value)
	{
		___ivDiversifier_1 = value;
		Il2CppCodeGenWriteBarrier((&___ivDiversifier_1), value);
	}

	inline static int32_t get_offset_of_macDiversifier_2() { return static_cast<int32_t>(offsetof(DeriveBytes_t1147558369_StaticFields, ___macDiversifier_2)); }
	inline ByteU5BU5D_t2896786162* get_macDiversifier_2() const { return ___macDiversifier_2; }
	inline ByteU5BU5D_t2896786162** get_address_of_macDiversifier_2() { return &___macDiversifier_2; }
	inline void set_macDiversifier_2(ByteU5BU5D_t2896786162* value)
	{
		___macDiversifier_2 = value;
		Il2CppCodeGenWriteBarrier((&___macDiversifier_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEBYTES_T1147558369_H
#ifndef PKCS5_T2334596146_H
#define PKCS5_T2334596146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS5
struct  PKCS5_t2334596146  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS5_T2334596146_H
#ifndef ASN1CONVERT_T2257899623_H
#define ASN1CONVERT_T2257899623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1Convert
struct  ASN1Convert_t2257899623  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1CONVERT_T2257899623_H
#ifndef BITCONVERTERLE_T2753887046_H
#define BITCONVERTERLE_T2753887046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.BitConverterLE
struct  BitConverterLE_t2753887046  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTERLE_T2753887046_H
#ifndef PKCS7_T3722591256_H
#define PKCS7_T3722591256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7
struct  PKCS7_t3722591256  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS7_T3722591256_H
#ifndef CONTENTINFO_T2630045085_H
#define CONTENTINFO_T2630045085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/ContentInfo
struct  ContentInfo_t2630045085  : public RuntimeObject
{
public:
	// System.String Mono.Security.PKCS7/ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::content
	ASN1_t3076133810 * ___content_1;

public:
	inline static int32_t get_offset_of_contentType_0() { return static_cast<int32_t>(offsetof(ContentInfo_t2630045085, ___contentType_0)); }
	inline String_t* get_contentType_0() const { return ___contentType_0; }
	inline String_t** get_address_of_contentType_0() { return &___contentType_0; }
	inline void set_contentType_0(String_t* value)
	{
		___contentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___contentType_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(ContentInfo_t2630045085, ___content_1)); }
	inline ASN1_t3076133810 * get_content_1() const { return ___content_1; }
	inline ASN1_t3076133810 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(ASN1_t3076133810 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTINFO_T2630045085_H
#ifndef ENCRYPTEDDATA_T731562437_H
#define ENCRYPTEDDATA_T731562437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/EncryptedData
struct  EncryptedData_t731562437  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/EncryptedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_content
	ContentInfo_t2630045085 * ____content_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_encryptionAlgorithm
	ContentInfo_t2630045085 * ____encryptionAlgorithm_2;
	// System.Byte[] Mono.Security.PKCS7/EncryptedData::_encrypted
	ByteU5BU5D_t2896786162* ____encrypted_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(EncryptedData_t731562437, ____version_0)); }
	inline uint8_t get__version_0() const { return ____version_0; }
	inline uint8_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(uint8_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__content_1() { return static_cast<int32_t>(offsetof(EncryptedData_t731562437, ____content_1)); }
	inline ContentInfo_t2630045085 * get__content_1() const { return ____content_1; }
	inline ContentInfo_t2630045085 ** get_address_of__content_1() { return &____content_1; }
	inline void set__content_1(ContentInfo_t2630045085 * value)
	{
		____content_1 = value;
		Il2CppCodeGenWriteBarrier((&____content_1), value);
	}

	inline static int32_t get_offset_of__encryptionAlgorithm_2() { return static_cast<int32_t>(offsetof(EncryptedData_t731562437, ____encryptionAlgorithm_2)); }
	inline ContentInfo_t2630045085 * get__encryptionAlgorithm_2() const { return ____encryptionAlgorithm_2; }
	inline ContentInfo_t2630045085 ** get_address_of__encryptionAlgorithm_2() { return &____encryptionAlgorithm_2; }
	inline void set__encryptionAlgorithm_2(ContentInfo_t2630045085 * value)
	{
		____encryptionAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____encryptionAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__encrypted_3() { return static_cast<int32_t>(offsetof(EncryptedData_t731562437, ____encrypted_3)); }
	inline ByteU5BU5D_t2896786162* get__encrypted_3() const { return ____encrypted_3; }
	inline ByteU5BU5D_t2896786162** get_address_of__encrypted_3() { return &____encrypted_3; }
	inline void set__encrypted_3(ByteU5BU5D_t2896786162* value)
	{
		____encrypted_3 = value;
		Il2CppCodeGenWriteBarrier((&____encrypted_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDDATA_T731562437_H
#ifndef PRIVATEKEY_T89766747_H
#define PRIVATEKEY_T89766747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Authenticode.PrivateKey
struct  PrivateKey_t89766747  : public RuntimeObject
{
public:
	// System.Boolean Mono.Security.Authenticode.PrivateKey::encrypted
	bool ___encrypted_0;
	// System.Security.Cryptography.RSA Mono.Security.Authenticode.PrivateKey::rsa
	RSA_t3446211033 * ___rsa_1;
	// System.Boolean Mono.Security.Authenticode.PrivateKey::weak
	bool ___weak_2;
	// System.Int32 Mono.Security.Authenticode.PrivateKey::keyType
	int32_t ___keyType_3;

public:
	inline static int32_t get_offset_of_encrypted_0() { return static_cast<int32_t>(offsetof(PrivateKey_t89766747, ___encrypted_0)); }
	inline bool get_encrypted_0() const { return ___encrypted_0; }
	inline bool* get_address_of_encrypted_0() { return &___encrypted_0; }
	inline void set_encrypted_0(bool value)
	{
		___encrypted_0 = value;
	}

	inline static int32_t get_offset_of_rsa_1() { return static_cast<int32_t>(offsetof(PrivateKey_t89766747, ___rsa_1)); }
	inline RSA_t3446211033 * get_rsa_1() const { return ___rsa_1; }
	inline RSA_t3446211033 ** get_address_of_rsa_1() { return &___rsa_1; }
	inline void set_rsa_1(RSA_t3446211033 * value)
	{
		___rsa_1 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_1), value);
	}

	inline static int32_t get_offset_of_weak_2() { return static_cast<int32_t>(offsetof(PrivateKey_t89766747, ___weak_2)); }
	inline bool get_weak_2() const { return ___weak_2; }
	inline bool* get_address_of_weak_2() { return &___weak_2; }
	inline void set_weak_2(bool value)
	{
		___weak_2 = value;
	}

	inline static int32_t get_offset_of_keyType_3() { return static_cast<int32_t>(offsetof(PrivateKey_t89766747, ___keyType_3)); }
	inline int32_t get_keyType_3() const { return ___keyType_3; }
	inline int32_t* get_address_of_keyType_3() { return &___keyType_3; }
	inline void set_keyType_3(int32_t value)
	{
		___keyType_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVATEKEY_T89766747_H
#ifndef CRYPTOCONVERT_T4095853900_H
#define CRYPTOCONVERT_T4095853900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.CryptoConvert
struct  CryptoConvert_t4095853900  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONVERT_T4095853900_H
#ifndef KEYBUILDER_T4133786034_H
#define KEYBUILDER_T4133786034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t4133786034  : public RuntimeObject
{
public:

public:
};

struct KeyBuilder_t4133786034_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t2194148873 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t4133786034_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t2194148873 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t2194148873 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t2194148873 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier((&___rng_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBUILDER_T4133786034_H
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
#ifndef ASYMMETRICALGORITHM_T3351604210_H
#define ASYMMETRICALGORITHM_T3351604210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t3351604210  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t2824063359* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t3351604210, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t3351604210, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t2824063359* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t2824063359** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t2824063359* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T3351604210_H
#ifndef PKCS9_T538309545_H
#define PKCS9_T538309545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS9
struct  PKCS9_t538309545  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS9_T538309545_H
#ifndef CIPHERSUITEFACTORY_T1356910814_H
#define CIPHERSUITEFACTORY_T1356910814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.CipherSuiteFactory
struct  CipherSuiteFactory_t1356910814  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERSUITEFACTORY_T1356910814_H
#ifndef ASYMMETRICSIGNATUREFORMATTER_T1866603944_H
#define ASYMMETRICSIGNATUREFORMATTER_T1866603944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct  AsymmetricSignatureFormatter_t1866603944  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREFORMATTER_T1866603944_H
#ifndef PKCS1_T2385744855_H
#define PKCS1_T2385744855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS1
struct  PKCS1_t2385744855  : public RuntimeObject
{
public:

public:
};

struct PKCS1_t2385744855_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA1
	ByteU5BU5D_t2896786162* ___emptySHA1_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA256
	ByteU5BU5D_t2896786162* ___emptySHA256_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA384
	ByteU5BU5D_t2896786162* ___emptySHA384_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA512
	ByteU5BU5D_t2896786162* ___emptySHA512_3;

public:
	inline static int32_t get_offset_of_emptySHA1_0() { return static_cast<int32_t>(offsetof(PKCS1_t2385744855_StaticFields, ___emptySHA1_0)); }
	inline ByteU5BU5D_t2896786162* get_emptySHA1_0() const { return ___emptySHA1_0; }
	inline ByteU5BU5D_t2896786162** get_address_of_emptySHA1_0() { return &___emptySHA1_0; }
	inline void set_emptySHA1_0(ByteU5BU5D_t2896786162* value)
	{
		___emptySHA1_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA1_0), value);
	}

	inline static int32_t get_offset_of_emptySHA256_1() { return static_cast<int32_t>(offsetof(PKCS1_t2385744855_StaticFields, ___emptySHA256_1)); }
	inline ByteU5BU5D_t2896786162* get_emptySHA256_1() const { return ___emptySHA256_1; }
	inline ByteU5BU5D_t2896786162** get_address_of_emptySHA256_1() { return &___emptySHA256_1; }
	inline void set_emptySHA256_1(ByteU5BU5D_t2896786162* value)
	{
		___emptySHA256_1 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA256_1), value);
	}

	inline static int32_t get_offset_of_emptySHA384_2() { return static_cast<int32_t>(offsetof(PKCS1_t2385744855_StaticFields, ___emptySHA384_2)); }
	inline ByteU5BU5D_t2896786162* get_emptySHA384_2() const { return ___emptySHA384_2; }
	inline ByteU5BU5D_t2896786162** get_address_of_emptySHA384_2() { return &___emptySHA384_2; }
	inline void set_emptySHA384_2(ByteU5BU5D_t2896786162* value)
	{
		___emptySHA384_2 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA384_2), value);
	}

	inline static int32_t get_offset_of_emptySHA512_3() { return static_cast<int32_t>(offsetof(PKCS1_t2385744855_StaticFields, ___emptySHA512_3)); }
	inline ByteU5BU5D_t2896786162* get_emptySHA512_3() const { return ___emptySHA512_3; }
	inline ByteU5BU5D_t2896786162** get_address_of_emptySHA512_3() { return &___emptySHA512_3; }
	inline void set_emptySHA512_3(ByteU5BU5D_t2896786162* value)
	{
		___emptySHA512_3 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA512_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS1_T2385744855_H
#ifndef PKCS8_T3711986861_H
#define PKCS8_T3711986861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8
struct  PKCS8_t3711986861  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS8_T3711986861_H
#ifndef PRIVATEKEYINFO_T2574271106_H
#define PRIVATEKEYINFO_T2574271106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct  PrivateKeyInfo_t2574271106  : public RuntimeObject
{
public:
	// System.Int32 Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_version
	int32_t ____version_0;
	// System.String Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_algorithm
	String_t* ____algorithm_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_key
	ByteU5BU5D_t2896786162* ____key_2;
	// System.Collections.ArrayList Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_list
	ArrayList_t844188058 * ____list_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t2574271106, ____version_0)); }
	inline int32_t get__version_0() const { return ____version_0; }
	inline int32_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(int32_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__algorithm_1() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t2574271106, ____algorithm_1)); }
	inline String_t* get__algorithm_1() const { return ____algorithm_1; }
	inline String_t** get_address_of__algorithm_1() { return &____algorithm_1; }
	inline void set__algorithm_1(String_t* value)
	{
		____algorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_1), value);
	}

	inline static int32_t get_offset_of__key_2() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t2574271106, ____key_2)); }
	inline ByteU5BU5D_t2896786162* get__key_2() const { return ____key_2; }
	inline ByteU5BU5D_t2896786162** get_address_of__key_2() { return &____key_2; }
	inline void set__key_2(ByteU5BU5D_t2896786162* value)
	{
		____key_2 = value;
		Il2CppCodeGenWriteBarrier((&____key_2), value);
	}

	inline static int32_t get_offset_of__list_3() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t2574271106, ____list_3)); }
	inline ArrayList_t844188058 * get__list_3() const { return ____list_3; }
	inline ArrayList_t844188058 ** get_address_of__list_3() { return &____list_3; }
	inline void set__list_3(ArrayList_t844188058 * value)
	{
		____list_3 = value;
		Il2CppCodeGenWriteBarrier((&____list_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVATEKEYINFO_T2574271106_H
#ifndef ENCRYPTEDPRIVATEKEYINFO_T2547763484_H
#define ENCRYPTEDPRIVATEKEYINFO_T2547763484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct  EncryptedPrivateKeyInfo_t2547763484  : public RuntimeObject
{
public:
	// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_algorithm
	String_t* ____algorithm_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_salt
	ByteU5BU5D_t2896786162* ____salt_1;
	// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_iterations
	int32_t ____iterations_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_data
	ByteU5BU5D_t2896786162* ____data_3;

public:
	inline static int32_t get_offset_of__algorithm_0() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t2547763484, ____algorithm_0)); }
	inline String_t* get__algorithm_0() const { return ____algorithm_0; }
	inline String_t** get_address_of__algorithm_0() { return &____algorithm_0; }
	inline void set__algorithm_0(String_t* value)
	{
		____algorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_0), value);
	}

	inline static int32_t get_offset_of__salt_1() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t2547763484, ____salt_1)); }
	inline ByteU5BU5D_t2896786162* get__salt_1() const { return ____salt_1; }
	inline ByteU5BU5D_t2896786162** get_address_of__salt_1() { return &____salt_1; }
	inline void set__salt_1(ByteU5BU5D_t2896786162* value)
	{
		____salt_1 = value;
		Il2CppCodeGenWriteBarrier((&____salt_1), value);
	}

	inline static int32_t get_offset_of__iterations_2() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t2547763484, ____iterations_2)); }
	inline int32_t get__iterations_2() const { return ____iterations_2; }
	inline int32_t* get_address_of__iterations_2() { return &____iterations_2; }
	inline void set__iterations_2(int32_t value)
	{
		____iterations_2 = value;
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t2547763484, ____data_3)); }
	inline ByteU5BU5D_t2896786162* get__data_3() const { return ____data_3; }
	inline ByteU5BU5D_t2896786162** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(ByteU5BU5D_t2896786162* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDPRIVATEKEYINFO_T2547763484_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T2001689901_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T2001689901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t2001689901  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T2001689901_H
#ifndef GENERALNAMES_T2583028647_H
#define GENERALNAMES_T2583028647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.GeneralNames
struct  GeneralNames_t2583028647  : public RuntimeObject
{
public:
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::rfc822Name
	ArrayList_t844188058 * ___rfc822Name_0;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::dnsName
	ArrayList_t844188058 * ___dnsName_1;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::directoryNames
	ArrayList_t844188058 * ___directoryNames_2;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::uris
	ArrayList_t844188058 * ___uris_3;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::ipAddr
	ArrayList_t844188058 * ___ipAddr_4;

public:
	inline static int32_t get_offset_of_rfc822Name_0() { return static_cast<int32_t>(offsetof(GeneralNames_t2583028647, ___rfc822Name_0)); }
	inline ArrayList_t844188058 * get_rfc822Name_0() const { return ___rfc822Name_0; }
	inline ArrayList_t844188058 ** get_address_of_rfc822Name_0() { return &___rfc822Name_0; }
	inline void set_rfc822Name_0(ArrayList_t844188058 * value)
	{
		___rfc822Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___rfc822Name_0), value);
	}

	inline static int32_t get_offset_of_dnsName_1() { return static_cast<int32_t>(offsetof(GeneralNames_t2583028647, ___dnsName_1)); }
	inline ArrayList_t844188058 * get_dnsName_1() const { return ___dnsName_1; }
	inline ArrayList_t844188058 ** get_address_of_dnsName_1() { return &___dnsName_1; }
	inline void set_dnsName_1(ArrayList_t844188058 * value)
	{
		___dnsName_1 = value;
		Il2CppCodeGenWriteBarrier((&___dnsName_1), value);
	}

	inline static int32_t get_offset_of_directoryNames_2() { return static_cast<int32_t>(offsetof(GeneralNames_t2583028647, ___directoryNames_2)); }
	inline ArrayList_t844188058 * get_directoryNames_2() const { return ___directoryNames_2; }
	inline ArrayList_t844188058 ** get_address_of_directoryNames_2() { return &___directoryNames_2; }
	inline void set_directoryNames_2(ArrayList_t844188058 * value)
	{
		___directoryNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___directoryNames_2), value);
	}

	inline static int32_t get_offset_of_uris_3() { return static_cast<int32_t>(offsetof(GeneralNames_t2583028647, ___uris_3)); }
	inline ArrayList_t844188058 * get_uris_3() const { return ___uris_3; }
	inline ArrayList_t844188058 ** get_address_of_uris_3() { return &___uris_3; }
	inline void set_uris_3(ArrayList_t844188058 * value)
	{
		___uris_3 = value;
		Il2CppCodeGenWriteBarrier((&___uris_3), value);
	}

	inline static int32_t get_offset_of_ipAddr_4() { return static_cast<int32_t>(offsetof(GeneralNames_t2583028647, ___ipAddr_4)); }
	inline ArrayList_t844188058 * get_ipAddr_4() const { return ___ipAddr_4; }
	inline ArrayList_t844188058 ** get_address_of_ipAddr_4() { return &___ipAddr_4; }
	inline void set_ipAddr_4(ArrayList_t844188058 * value)
	{
		___ipAddr_4 = value;
		Il2CppCodeGenWriteBarrier((&___ipAddr_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERALNAMES_T2583028647_H
#ifndef COLLECTIONBASE_T3997710455_H
#define COLLECTIONBASE_T3997710455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t3997710455  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t844188058 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t3997710455, ___list_0)); }
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
#endif // COLLECTIONBASE_T3997710455_H
#ifndef EXTENDEDKEYUSAGEEXTENSION_T585747629_H
#define EXTENDEDKEYUSAGEEXTENSION_T585747629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
struct  ExtendedKeyUsageExtension_t585747629  : public X509Extension_t786769929
{
public:
	// System.Collections.ArrayList Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::keyPurpose
	ArrayList_t844188058 * ___keyPurpose_3;

public:
	inline static int32_t get_offset_of_keyPurpose_3() { return static_cast<int32_t>(offsetof(ExtendedKeyUsageExtension_t585747629, ___keyPurpose_3)); }
	inline ArrayList_t844188058 * get_keyPurpose_3() const { return ___keyPurpose_3; }
	inline ArrayList_t844188058 ** get_address_of_keyPurpose_3() { return &___keyPurpose_3; }
	inline void set_keyPurpose_3(ArrayList_t844188058 * value)
	{
		___keyPurpose_3 = value;
		Il2CppCodeGenWriteBarrier((&___keyPurpose_3), value);
	}
};

struct ExtendedKeyUsageExtension_t585747629_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::<>f__switch$map14
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24map14_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_4() { return static_cast<int32_t>(offsetof(ExtendedKeyUsageExtension_t585747629_StaticFields, ___U3CU3Ef__switchU24map14_4)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24map14_4() const { return ___U3CU3Ef__switchU24map14_4; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24map14_4() { return &___U3CU3Ef__switchU24map14_4; }
	inline void set_U3CU3Ef__switchU24map14_4(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24map14_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENDEDKEYUSAGEEXTENSION_T585747629_H
#ifndef BASICCONSTRAINTSEXTENSION_T3558454155_H
#define BASICCONSTRAINTSEXTENSION_T3558454155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.BasicConstraintsExtension
struct  BasicConstraintsExtension_t3558454155  : public X509Extension_t786769929
{
public:
	// System.Boolean Mono.Security.X509.Extensions.BasicConstraintsExtension::cA
	bool ___cA_3;
	// System.Int32 Mono.Security.X509.Extensions.BasicConstraintsExtension::pathLenConstraint
	int32_t ___pathLenConstraint_4;

public:
	inline static int32_t get_offset_of_cA_3() { return static_cast<int32_t>(offsetof(BasicConstraintsExtension_t3558454155, ___cA_3)); }
	inline bool get_cA_3() const { return ___cA_3; }
	inline bool* get_address_of_cA_3() { return &___cA_3; }
	inline void set_cA_3(bool value)
	{
		___cA_3 = value;
	}

	inline static int32_t get_offset_of_pathLenConstraint_4() { return static_cast<int32_t>(offsetof(BasicConstraintsExtension_t3558454155, ___pathLenConstraint_4)); }
	inline int32_t get_pathLenConstraint_4() const { return ___pathLenConstraint_4; }
	inline int32_t* get_address_of_pathLenConstraint_4() { return &___pathLenConstraint_4; }
	inline void set_pathLenConstraint_4(int32_t value)
	{
		___pathLenConstraint_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASICCONSTRAINTSEXTENSION_T3558454155_H
#ifndef NETSCAPECERTTYPEEXTENSION_T423618241_H
#define NETSCAPECERTTYPEEXTENSION_T423618241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
struct  NetscapeCertTypeExtension_t423618241  : public X509Extension_t786769929
{
public:
	// System.Int32 Mono.Security.X509.Extensions.NetscapeCertTypeExtension::ctbits
	int32_t ___ctbits_3;

public:
	inline static int32_t get_offset_of_ctbits_3() { return static_cast<int32_t>(offsetof(NetscapeCertTypeExtension_t423618241, ___ctbits_3)); }
	inline int32_t get_ctbits_3() const { return ___ctbits_3; }
	inline int32_t* get_address_of_ctbits_3() { return &___ctbits_3; }
	inline void set_ctbits_3(int32_t value)
	{
		___ctbits_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETSCAPECERTTYPEEXTENSION_T423618241_H
#ifndef KEYUSAGEEXTENSION_T156710593_H
#define KEYUSAGEEXTENSION_T156710593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.KeyUsageExtension
struct  KeyUsageExtension_t156710593  : public X509Extension_t786769929
{
public:
	// System.Int32 Mono.Security.X509.Extensions.KeyUsageExtension::kubits
	int32_t ___kubits_3;

public:
	inline static int32_t get_offset_of_kubits_3() { return static_cast<int32_t>(offsetof(KeyUsageExtension_t156710593, ___kubits_3)); }
	inline int32_t get_kubits_3() const { return ___kubits_3; }
	inline int32_t* get_address_of_kubits_3() { return &___kubits_3; }
	inline void set_kubits_3(int32_t value)
	{
		___kubits_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYUSAGEEXTENSION_T156710593_H
#ifndef MD5SHA1_T3416895185_H
#define MD5SHA1_T3416895185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD5SHA1
struct  MD5SHA1_t3416895185  : public HashAlgorithm_t788180480
{
public:
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.MD5SHA1::md5
	HashAlgorithm_t788180480 * ___md5_4;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.MD5SHA1::sha
	HashAlgorithm_t788180480 * ___sha_5;
	// System.Boolean Mono.Security.Cryptography.MD5SHA1::hashing
	bool ___hashing_6;

public:
	inline static int32_t get_offset_of_md5_4() { return static_cast<int32_t>(offsetof(MD5SHA1_t3416895185, ___md5_4)); }
	inline HashAlgorithm_t788180480 * get_md5_4() const { return ___md5_4; }
	inline HashAlgorithm_t788180480 ** get_address_of_md5_4() { return &___md5_4; }
	inline void set_md5_4(HashAlgorithm_t788180480 * value)
	{
		___md5_4 = value;
		Il2CppCodeGenWriteBarrier((&___md5_4), value);
	}

	inline static int32_t get_offset_of_sha_5() { return static_cast<int32_t>(offsetof(MD5SHA1_t3416895185, ___sha_5)); }
	inline HashAlgorithm_t788180480 * get_sha_5() const { return ___sha_5; }
	inline HashAlgorithm_t788180480 ** get_address_of_sha_5() { return &___sha_5; }
	inline void set_sha_5(HashAlgorithm_t788180480 * value)
	{
		___sha_5 = value;
		Il2CppCodeGenWriteBarrier((&___sha_5), value);
	}

	inline static int32_t get_offset_of_hashing_6() { return static_cast<int32_t>(offsetof(MD5SHA1_t3416895185, ___hashing_6)); }
	inline bool get_hashing_6() const { return ___hashing_6; }
	inline bool* get_address_of_hashing_6() { return &___hashing_6; }
	inline void set_hashing_6(bool value)
	{
		___hashing_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5SHA1_T3416895185_H
#ifndef SUBJECTALTNAMEEXTENSION_T3230982250_H
#define SUBJECTALTNAMEEXTENSION_T3230982250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.SubjectAltNameExtension
struct  SubjectAltNameExtension_t3230982250  : public X509Extension_t786769929
{
public:
	// Mono.Security.X509.Extensions.GeneralNames Mono.Security.X509.Extensions.SubjectAltNameExtension::_names
	GeneralNames_t2583028647 * ____names_3;

public:
	inline static int32_t get_offset_of__names_3() { return static_cast<int32_t>(offsetof(SubjectAltNameExtension_t3230982250, ____names_3)); }
	inline GeneralNames_t2583028647 * get__names_3() const { return ____names_3; }
	inline GeneralNames_t2583028647 ** get_address_of__names_3() { return &____names_3; }
	inline void set__names_3(GeneralNames_t2583028647 * value)
	{
		____names_3 = value;
		Il2CppCodeGenWriteBarrier((&____names_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBJECTALTNAMEEXTENSION_T3230982250_H
#ifndef SUBJECTKEYIDENTIFIEREXTENSION_T6894402_H
#define SUBJECTKEYIDENTIFIEREXTENSION_T6894402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension
struct  SubjectKeyIdentifierExtension_t6894402  : public X509Extension_t786769929
{
public:
	// System.Byte[] Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension::ski
	ByteU5BU5D_t2896786162* ___ski_3;

public:
	inline static int32_t get_offset_of_ski_3() { return static_cast<int32_t>(offsetof(SubjectKeyIdentifierExtension_t6894402, ___ski_3)); }
	inline ByteU5BU5D_t2896786162* get_ski_3() const { return ___ski_3; }
	inline ByteU5BU5D_t2896786162** get_address_of_ski_3() { return &___ski_3; }
	inline void set_ski_3(ByteU5BU5D_t2896786162* value)
	{
		___ski_3 = value;
		Il2CppCodeGenWriteBarrier((&___ski_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBJECTKEYIDENTIFIEREXTENSION_T6894402_H
#ifndef RSA_T3446211033_H
#define RSA_T3446211033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t3446211033  : public AsymmetricAlgorithm_t3351604210
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T3446211033_H
#ifndef RSASSLSIGNATUREDEFORMATTER_T1399155387_H
#define RSASSLSIGNATUREDEFORMATTER_T1399155387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct  RSASslSignatureDeformatter_t1399155387  : public AsymmetricSignatureDeformatter_t2001689901
{
public:
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::key
	RSA_t3446211033 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::hash
	HashAlgorithm_t788180480 * ___hash_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(RSASslSignatureDeformatter_t1399155387, ___key_0)); }
	inline RSA_t3446211033 * get_key_0() const { return ___key_0; }
	inline RSA_t3446211033 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RSA_t3446211033 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(RSASslSignatureDeformatter_t1399155387, ___hash_1)); }
	inline HashAlgorithm_t788180480 * get_hash_1() const { return ___hash_1; }
	inline HashAlgorithm_t788180480 ** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(HashAlgorithm_t788180480 * value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier((&___hash_1), value);
	}
};

struct RSASslSignatureDeformatter_t1399155387_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::<>f__switch$map15
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24map15_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_2() { return static_cast<int32_t>(offsetof(RSASslSignatureDeformatter_t1399155387_StaticFields, ___U3CU3Ef__switchU24map15_2)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24map15_2() const { return ___U3CU3Ef__switchU24map15_2; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24map15_2() { return &___U3CU3Ef__switchU24map15_2; }
	inline void set_U3CU3Ef__switchU24map15_2(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24map15_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSASSLSIGNATUREDEFORMATTER_T1399155387_H
#ifndef RSASSLSIGNATUREFORMATTER_T3648027450_H
#define RSASSLSIGNATUREFORMATTER_T3648027450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct  RSASslSignatureFormatter_t3648027450  : public AsymmetricSignatureFormatter_t1866603944
{
public:
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureFormatter::key
	RSA_t3446211033 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureFormatter::hash
	HashAlgorithm_t788180480 * ___hash_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(RSASslSignatureFormatter_t3648027450, ___key_0)); }
	inline RSA_t3446211033 * get_key_0() const { return ___key_0; }
	inline RSA_t3446211033 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RSA_t3446211033 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(RSASslSignatureFormatter_t3648027450, ___hash_1)); }
	inline HashAlgorithm_t788180480 * get_hash_1() const { return ___hash_1; }
	inline HashAlgorithm_t788180480 ** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(HashAlgorithm_t788180480 * value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier((&___hash_1), value);
	}
};

struct RSASslSignatureFormatter_t3648027450_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureFormatter::<>f__switch$map16
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24map16_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_2() { return static_cast<int32_t>(offsetof(RSASslSignatureFormatter_t3648027450_StaticFields, ___U3CU3Ef__switchU24map16_2)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24map16_2() const { return ___U3CU3Ef__switchU24map16_2; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24map16_2() { return &___U3CU3Ef__switchU24map16_2; }
	inline void set_U3CU3Ef__switchU24map16_2(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24map16_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSASSLSIGNATUREFORMATTER_T3648027450_H
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
#ifndef KEYEDHASHALGORITHM_T11759951_H
#define KEYEDHASHALGORITHM_T11759951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyedHashAlgorithm
struct  KeyedHashAlgorithm_t11759951  : public HashAlgorithm_t788180480
{
public:
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_t2896786162* ___KeyValue_4;

public:
	inline static int32_t get_offset_of_KeyValue_4() { return static_cast<int32_t>(offsetof(KeyedHashAlgorithm_t11759951, ___KeyValue_4)); }
	inline ByteU5BU5D_t2896786162* get_KeyValue_4() const { return ___KeyValue_4; }
	inline ByteU5BU5D_t2896786162** get_address_of_KeyValue_4() { return &___KeyValue_4; }
	inline void set_KeyValue_4(ByteU5BU5D_t2896786162* value)
	{
		___KeyValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEDHASHALGORITHM_T11759951_H
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
#ifndef CLIENTRECORDPROTOCOL_T2286315280_H
#define CLIENTRECORDPROTOCOL_T2286315280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct  ClientRecordProtocol_t2286315280  : public RecordProtocol_t2436280827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTRECORDPROTOCOL_T2286315280_H
#ifndef INITIAL_T645502975_H
#define INITIAL_T645502975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/Initial
struct  Initial_t645502975  : public AttributeTypeAndValue_t4188943397
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITIAL_T645502975_H
#ifndef AUTHORITYKEYIDENTIFIEREXTENSION_T953487578_H
#define AUTHORITYKEYIDENTIFIEREXTENSION_T953487578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension
struct  AuthorityKeyIdentifierExtension_t953487578  : public X509Extension_t786769929
{
public:
	// System.Byte[] Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension::aki
	ByteU5BU5D_t2896786162* ___aki_3;

public:
	inline static int32_t get_offset_of_aki_3() { return static_cast<int32_t>(offsetof(AuthorityKeyIdentifierExtension_t953487578, ___aki_3)); }
	inline ByteU5BU5D_t2896786162* get_aki_3() const { return ___aki_3; }
	inline ByteU5BU5D_t2896786162** get_address_of_aki_3() { return &___aki_3; }
	inline void set_aki_3(ByteU5BU5D_t2896786162* value)
	{
		___aki_3 = value;
		Il2CppCodeGenWriteBarrier((&___aki_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHORITYKEYIDENTIFIEREXTENSION_T953487578_H
#ifndef SURNAME_T337299391_H
#define SURNAME_T337299391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/Surname
struct  Surname_t337299391  : public AttributeTypeAndValue_t4188943397
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURNAME_T337299391_H
#ifndef MD2_T1461088812_H
#define MD2_T1461088812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2
struct  MD2_t1461088812  : public HashAlgorithm_t788180480
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2_T1461088812_H
#ifndef MD4_T4179650026_H
#define MD4_T4179650026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4
struct  MD4_t4179650026  : public HashAlgorithm_t788180480
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4_T4179650026_H
#ifndef X509CERTIFICATECOLLECTION_T3350127351_H
#define X509CERTIFICATECOLLECTION_T3350127351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection
struct  X509CertificateCollection_t3350127351  : public CollectionBase_t3997710455
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATECOLLECTION_T3350127351_H
#ifndef X509EXTENSIONCOLLECTION_T1986057146_H
#define X509EXTENSIONCOLLECTION_T1986057146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ExtensionCollection
struct  X509ExtensionCollection_t1986057146  : public CollectionBase_t3997710455
{
public:
	// System.Boolean Mono.Security.X509.X509ExtensionCollection::readOnly
	bool ___readOnly_1;

public:
	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t1986057146, ___readOnly_1)); }
	inline bool get_readOnly_1() const { return ___readOnly_1; }
	inline bool* get_address_of_readOnly_1() { return &___readOnly_1; }
	inline void set_readOnly_1(bool value)
	{
		___readOnly_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONCOLLECTION_T1986057146_H
#ifndef GIVENNAME_T1069979674_H
#define GIVENNAME_T1069979674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/GivenName
struct  GivenName_t1069979674  : public AttributeTypeAndValue_t4188943397
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GIVENNAME_T1069979674_H
#ifndef COMMONNAME_T1411299575_H
#define COMMONNAME_T1411299575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/CommonName
struct  CommonName_t1411299575  : public AttributeTypeAndValue_t4188943397
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMONNAME_T1411299575_H
#ifndef SERIALNUMBER_T2516684520_H
#define SERIALNUMBER_T2516684520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/SerialNumber
struct  SerialNumber_t2516684520  : public AttributeTypeAndValue_t4188943397
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALNUMBER_T2516684520_H
#ifndef LOCALITYNAME_T3582879449_H
#define LOCALITYNAME_T3582879449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/LocalityName
struct  LocalityName_t3582879449  : public AttributeTypeAndValue_t4188943397
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALITYNAME_T3582879449_H
#ifndef STATEORPROVINCENAME_T2759608467_H
#define STATEORPROVINCENAME_T2759608467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/StateOrProvinceName
struct  StateOrProvinceName_t2759608467  : public AttributeTypeAndValue_t4188943397
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEORPROVINCENAME_T2759608467_H
#ifndef ORGANIZATIONNAME_T2338681062_H
#define ORGANIZATIONNAME_T2338681062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/OrganizationName
struct  OrganizationName_t2338681062  : public AttributeTypeAndValue_t4188943397
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORGANIZATIONNAME_T2338681062_H
#ifndef NAME_T769215850_H
#define NAME_T769215850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/Name
struct  Name_t769215850  : public AttributeTypeAndValue_t4188943397
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAME_T769215850_H
#ifndef BOOLEAN_T3859917295_H
#define BOOLEAN_T3859917295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3859917295 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3859917295, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3859917295_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3859917295_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3859917295_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3859917295_H
#ifndef USERID_T1002876411_H
#define USERID_T1002876411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/UserId
struct  UserId_t1002876411  : public AttributeTypeAndValue_t4188943397
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERID_T1002876411_H
#ifndef ORGANIZATIONALUNITNAME_T1287012153_H
#define ORGANIZATIONALUNITNAME_T1287012153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/OrganizationalUnitName
struct  OrganizationalUnitName_t1287012153  : public AttributeTypeAndValue_t4188943397
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORGANIZATIONALUNITNAME_T1287012153_H
#ifndef TITLE_T3304315450_H
#define TITLE_T3304315450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/Title
struct  Title_t3304315450  : public AttributeTypeAndValue_t4188943397
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLE_T3304315450_H
#ifndef OID_T877789995_H
#define OID_T877789995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/Oid
struct  Oid_t877789995  : public AttributeTypeAndValue_t4188943397
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OID_T877789995_H
#ifndef EMAILADDRESS_T2765105999_H
#define EMAILADDRESS_T2765105999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/EmailAddress
struct  EmailAddress_t2765105999  : public AttributeTypeAndValue_t4188943397
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMAILADDRESS_T2765105999_H
#ifndef DOMAINCOMPONENT_T1883465871_H
#define DOMAINCOMPONENT_T1883465871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/DomainComponent
struct  DomainComponent_t1883465871  : public AttributeTypeAndValue_t4188943397
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOMAINCOMPONENT_T1883465871_H
#ifndef DNQUALIFIER_T1948864316_H
#define DNQUALIFIER_T1948864316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/DnQualifier
struct  DnQualifier_t1948864316  : public AttributeTypeAndValue_t4188943397
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DNQUALIFIER_T1948864316_H
#ifndef COUNTRYNAME_T493238855_H
#define COUNTRYNAME_T493238855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/CountryName
struct  CountryName_t493238855  : public AttributeTypeAndValue_t4188943397
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COUNTRYNAME_T493238855_H
#ifndef PADDINGMODE_T2098981411_H
#define PADDINGMODE_T2098981411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t2098981411 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t2098981411, ___value___1)); }
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
#endif // PADDINGMODE_T2098981411_H
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
#ifndef MD4MANAGED_T2263605487_H
#define MD4MANAGED_T2263605487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4Managed
struct  MD4Managed_t2263605487  : public MD4_t4179650026
{
public:
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::state
	UInt32U5BU5D_t1190422219* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::buffer
	ByteU5BU5D_t2896786162* ___buffer_5;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::count
	UInt32U5BU5D_t1190422219* ___count_6;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::x
	UInt32U5BU5D_t1190422219* ___x_7;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::digest
	ByteU5BU5D_t2896786162* ___digest_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD4Managed_t2263605487, ___state_4)); }
	inline UInt32U5BU5D_t1190422219* get_state_4() const { return ___state_4; }
	inline UInt32U5BU5D_t1190422219** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(UInt32U5BU5D_t1190422219* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(MD4Managed_t2263605487, ___buffer_5)); }
	inline ByteU5BU5D_t2896786162* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_t2896786162** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_t2896786162* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD4Managed_t2263605487, ___count_6)); }
	inline UInt32U5BU5D_t1190422219* get_count_6() const { return ___count_6; }
	inline UInt32U5BU5D_t1190422219** get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(UInt32U5BU5D_t1190422219* value)
	{
		___count_6 = value;
		Il2CppCodeGenWriteBarrier((&___count_6), value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(MD4Managed_t2263605487, ___x_7)); }
	inline UInt32U5BU5D_t1190422219* get_x_7() const { return ___x_7; }
	inline UInt32U5BU5D_t1190422219** get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(UInt32U5BU5D_t1190422219* value)
	{
		___x_7 = value;
		Il2CppCodeGenWriteBarrier((&___x_7), value);
	}

	inline static int32_t get_offset_of_digest_8() { return static_cast<int32_t>(offsetof(MD4Managed_t2263605487, ___digest_8)); }
	inline ByteU5BU5D_t2896786162* get_digest_8() const { return ___digest_8; }
	inline ByteU5BU5D_t2896786162** get_address_of_digest_8() { return &___digest_8; }
	inline void set_digest_8(ByteU5BU5D_t2896786162* value)
	{
		___digest_8 = value;
		Il2CppCodeGenWriteBarrier((&___digest_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4MANAGED_T2263605487_H
#ifndef MD2MANAGED_T118478446_H
#define MD2MANAGED_T118478446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2Managed
struct  MD2Managed_t118478446  : public MD2_t1461088812
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::state
	ByteU5BU5D_t2896786162* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::checksum
	ByteU5BU5D_t2896786162* ___checksum_5;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::buffer
	ByteU5BU5D_t2896786162* ___buffer_6;
	// System.Int32 Mono.Security.Cryptography.MD2Managed::count
	int32_t ___count_7;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::x
	ByteU5BU5D_t2896786162* ___x_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD2Managed_t118478446, ___state_4)); }
	inline ByteU5BU5D_t2896786162* get_state_4() const { return ___state_4; }
	inline ByteU5BU5D_t2896786162** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(ByteU5BU5D_t2896786162* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_checksum_5() { return static_cast<int32_t>(offsetof(MD2Managed_t118478446, ___checksum_5)); }
	inline ByteU5BU5D_t2896786162* get_checksum_5() const { return ___checksum_5; }
	inline ByteU5BU5D_t2896786162** get_address_of_checksum_5() { return &___checksum_5; }
	inline void set_checksum_5(ByteU5BU5D_t2896786162* value)
	{
		___checksum_5 = value;
		Il2CppCodeGenWriteBarrier((&___checksum_5), value);
	}

	inline static int32_t get_offset_of_buffer_6() { return static_cast<int32_t>(offsetof(MD2Managed_t118478446, ___buffer_6)); }
	inline ByteU5BU5D_t2896786162* get_buffer_6() const { return ___buffer_6; }
	inline ByteU5BU5D_t2896786162** get_address_of_buffer_6() { return &___buffer_6; }
	inline void set_buffer_6(ByteU5BU5D_t2896786162* value)
	{
		___buffer_6 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_6), value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(MD2Managed_t118478446, ___count_7)); }
	inline int32_t get_count_7() const { return ___count_7; }
	inline int32_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(int32_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(MD2Managed_t118478446, ___x_8)); }
	inline ByteU5BU5D_t2896786162* get_x_8() const { return ___x_8; }
	inline ByteU5BU5D_t2896786162** get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(ByteU5BU5D_t2896786162* value)
	{
		___x_8 = value;
		Il2CppCodeGenWriteBarrier((&___x_8), value);
	}
};

struct MD2Managed_t118478446_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::PI_SUBST
	ByteU5BU5D_t2896786162* ___PI_SUBST_9;

public:
	inline static int32_t get_offset_of_PI_SUBST_9() { return static_cast<int32_t>(offsetof(MD2Managed_t118478446_StaticFields, ___PI_SUBST_9)); }
	inline ByteU5BU5D_t2896786162* get_PI_SUBST_9() const { return ___PI_SUBST_9; }
	inline ByteU5BU5D_t2896786162** get_address_of_PI_SUBST_9() { return &___PI_SUBST_9; }
	inline void set_PI_SUBST_9(ByteU5BU5D_t2896786162* value)
	{
		___PI_SUBST_9 = value;
		Il2CppCodeGenWriteBarrier((&___PI_SUBST_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2MANAGED_T118478446_H
#ifndef HANDSHAKETYPE_T1313109523_H
#define HANDSHAKETYPE_T1313109523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.HandshakeType
struct  HandshakeType_t1313109523 
{
public:
	// System.Byte Mono.Security.Protocol.Tls.Handshake.HandshakeType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HandshakeType_t1313109523, ___value___1)); }
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
#endif // HANDSHAKETYPE_T1313109523_H
#ifndef CIPHERMODE_T3634499658_H
#define CIPHERMODE_T3634499658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t3634499658 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t3634499658, ___value___1)); }
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
#endif // CIPHERMODE_T3634499658_H
#ifndef RSAMANAGED_T3776782966_H
#define RSAMANAGED_T3776782966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged
struct  RSAManaged_t3776782966  : public RSA_t3446211033
{
public:
	// System.Boolean Mono.Security.Cryptography.RSAManaged::isCRTpossible
	bool ___isCRTpossible_2;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keyBlinding
	bool ___keyBlinding_3;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keypairGenerated
	bool ___keypairGenerated_4;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::m_disposed
	bool ___m_disposed_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::d
	BigInteger_t4080557799 * ___d_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::p
	BigInteger_t4080557799 * ___p_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::q
	BigInteger_t4080557799 * ___q_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dp
	BigInteger_t4080557799 * ___dp_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dq
	BigInteger_t4080557799 * ___dq_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::qInv
	BigInteger_t4080557799 * ___qInv_11;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::n
	BigInteger_t4080557799 * ___n_12;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::e
	BigInteger_t4080557799 * ___e_13;
	// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.RSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t1721427477 * ___KeyGenerated_14;

public:
	inline static int32_t get_offset_of_isCRTpossible_2() { return static_cast<int32_t>(offsetof(RSAManaged_t3776782966, ___isCRTpossible_2)); }
	inline bool get_isCRTpossible_2() const { return ___isCRTpossible_2; }
	inline bool* get_address_of_isCRTpossible_2() { return &___isCRTpossible_2; }
	inline void set_isCRTpossible_2(bool value)
	{
		___isCRTpossible_2 = value;
	}

	inline static int32_t get_offset_of_keyBlinding_3() { return static_cast<int32_t>(offsetof(RSAManaged_t3776782966, ___keyBlinding_3)); }
	inline bool get_keyBlinding_3() const { return ___keyBlinding_3; }
	inline bool* get_address_of_keyBlinding_3() { return &___keyBlinding_3; }
	inline void set_keyBlinding_3(bool value)
	{
		___keyBlinding_3 = value;
	}

	inline static int32_t get_offset_of_keypairGenerated_4() { return static_cast<int32_t>(offsetof(RSAManaged_t3776782966, ___keypairGenerated_4)); }
	inline bool get_keypairGenerated_4() const { return ___keypairGenerated_4; }
	inline bool* get_address_of_keypairGenerated_4() { return &___keypairGenerated_4; }
	inline void set_keypairGenerated_4(bool value)
	{
		___keypairGenerated_4 = value;
	}

	inline static int32_t get_offset_of_m_disposed_5() { return static_cast<int32_t>(offsetof(RSAManaged_t3776782966, ___m_disposed_5)); }
	inline bool get_m_disposed_5() const { return ___m_disposed_5; }
	inline bool* get_address_of_m_disposed_5() { return &___m_disposed_5; }
	inline void set_m_disposed_5(bool value)
	{
		___m_disposed_5 = value;
	}

	inline static int32_t get_offset_of_d_6() { return static_cast<int32_t>(offsetof(RSAManaged_t3776782966, ___d_6)); }
	inline BigInteger_t4080557799 * get_d_6() const { return ___d_6; }
	inline BigInteger_t4080557799 ** get_address_of_d_6() { return &___d_6; }
	inline void set_d_6(BigInteger_t4080557799 * value)
	{
		___d_6 = value;
		Il2CppCodeGenWriteBarrier((&___d_6), value);
	}

	inline static int32_t get_offset_of_p_7() { return static_cast<int32_t>(offsetof(RSAManaged_t3776782966, ___p_7)); }
	inline BigInteger_t4080557799 * get_p_7() const { return ___p_7; }
	inline BigInteger_t4080557799 ** get_address_of_p_7() { return &___p_7; }
	inline void set_p_7(BigInteger_t4080557799 * value)
	{
		___p_7 = value;
		Il2CppCodeGenWriteBarrier((&___p_7), value);
	}

	inline static int32_t get_offset_of_q_8() { return static_cast<int32_t>(offsetof(RSAManaged_t3776782966, ___q_8)); }
	inline BigInteger_t4080557799 * get_q_8() const { return ___q_8; }
	inline BigInteger_t4080557799 ** get_address_of_q_8() { return &___q_8; }
	inline void set_q_8(BigInteger_t4080557799 * value)
	{
		___q_8 = value;
		Il2CppCodeGenWriteBarrier((&___q_8), value);
	}

	inline static int32_t get_offset_of_dp_9() { return static_cast<int32_t>(offsetof(RSAManaged_t3776782966, ___dp_9)); }
	inline BigInteger_t4080557799 * get_dp_9() const { return ___dp_9; }
	inline BigInteger_t4080557799 ** get_address_of_dp_9() { return &___dp_9; }
	inline void set_dp_9(BigInteger_t4080557799 * value)
	{
		___dp_9 = value;
		Il2CppCodeGenWriteBarrier((&___dp_9), value);
	}

	inline static int32_t get_offset_of_dq_10() { return static_cast<int32_t>(offsetof(RSAManaged_t3776782966, ___dq_10)); }
	inline BigInteger_t4080557799 * get_dq_10() const { return ___dq_10; }
	inline BigInteger_t4080557799 ** get_address_of_dq_10() { return &___dq_10; }
	inline void set_dq_10(BigInteger_t4080557799 * value)
	{
		___dq_10 = value;
		Il2CppCodeGenWriteBarrier((&___dq_10), value);
	}

	inline static int32_t get_offset_of_qInv_11() { return static_cast<int32_t>(offsetof(RSAManaged_t3776782966, ___qInv_11)); }
	inline BigInteger_t4080557799 * get_qInv_11() const { return ___qInv_11; }
	inline BigInteger_t4080557799 ** get_address_of_qInv_11() { return &___qInv_11; }
	inline void set_qInv_11(BigInteger_t4080557799 * value)
	{
		___qInv_11 = value;
		Il2CppCodeGenWriteBarrier((&___qInv_11), value);
	}

	inline static int32_t get_offset_of_n_12() { return static_cast<int32_t>(offsetof(RSAManaged_t3776782966, ___n_12)); }
	inline BigInteger_t4080557799 * get_n_12() const { return ___n_12; }
	inline BigInteger_t4080557799 ** get_address_of_n_12() { return &___n_12; }
	inline void set_n_12(BigInteger_t4080557799 * value)
	{
		___n_12 = value;
		Il2CppCodeGenWriteBarrier((&___n_12), value);
	}

	inline static int32_t get_offset_of_e_13() { return static_cast<int32_t>(offsetof(RSAManaged_t3776782966, ___e_13)); }
	inline BigInteger_t4080557799 * get_e_13() const { return ___e_13; }
	inline BigInteger_t4080557799 ** get_address_of_e_13() { return &___e_13; }
	inline void set_e_13(BigInteger_t4080557799 * value)
	{
		___e_13 = value;
		Il2CppCodeGenWriteBarrier((&___e_13), value);
	}

	inline static int32_t get_offset_of_KeyGenerated_14() { return static_cast<int32_t>(offsetof(RSAManaged_t3776782966, ___KeyGenerated_14)); }
	inline KeyGeneratedEventHandler_t1721427477 * get_KeyGenerated_14() const { return ___KeyGenerated_14; }
	inline KeyGeneratedEventHandler_t1721427477 ** get_address_of_KeyGenerated_14() { return &___KeyGenerated_14; }
	inline void set_KeyGenerated_14(KeyGeneratedEventHandler_t1721427477 * value)
	{
		___KeyGenerated_14 = value;
		Il2CppCodeGenWriteBarrier((&___KeyGenerated_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAMANAGED_T3776782966_H
#ifndef PURPOSE_T3716508019_H
#define PURPOSE_T3716508019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12/DeriveBytes/Purpose
struct  Purpose_t3716508019 
{
public:
	// System.Int32 Mono.Security.X509.PKCS12/DeriveBytes/Purpose::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Purpose_t3716508019, ___value___1)); }
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
#endif // PURPOSE_T3716508019_H
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
#ifndef X509CHAINSTATUSFLAGS_T931623156_H
#define X509CHAINSTATUSFLAGS_T931623156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ChainStatusFlags
struct  X509ChainStatusFlags_t931623156 
{
public:
	// System.Int32 Mono.Security.X509.X509ChainStatusFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t931623156, ___value___1)); }
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
#endif // X509CHAINSTATUSFLAGS_T931623156_H
#ifndef SSLSTREAMBASE_T3345248287_H
#define SSLSTREAMBASE_T3345248287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SslStreamBase
struct  SslStreamBase_t3345248287  : public Stream_t3580315789
{
public:
	// System.IO.Stream Mono.Security.Protocol.Tls.SslStreamBase::innerStream
	Stream_t3580315789 * ___innerStream_3;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::inputBuffer
	MemoryStream_t3321880770 * ___inputBuffer_4;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.SslStreamBase::context
	Context_t3052937665 * ___context_5;
	// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.SslStreamBase::protocol
	RecordProtocol_t2436280827 * ___protocol_6;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::ownsStream
	bool ___ownsStream_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Mono.Security.Protocol.Tls.SslStreamBase::disposed
	bool ___disposed_8;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::checkCertRevocationStatus
	bool ___checkCertRevocationStatus_9;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::negotiate
	RuntimeObject * ___negotiate_10;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::read
	RuntimeObject * ___read_11;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::write
	RuntimeObject * ___write_12;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::negotiationComplete
	ManualResetEvent_t3617874605 * ___negotiationComplete_13;
	// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase::recbuf
	ByteU5BU5D_t2896786162* ___recbuf_14;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::recordStream
	MemoryStream_t3321880770 * ___recordStream_15;

public:
	inline static int32_t get_offset_of_innerStream_3() { return static_cast<int32_t>(offsetof(SslStreamBase_t3345248287, ___innerStream_3)); }
	inline Stream_t3580315789 * get_innerStream_3() const { return ___innerStream_3; }
	inline Stream_t3580315789 ** get_address_of_innerStream_3() { return &___innerStream_3; }
	inline void set_innerStream_3(Stream_t3580315789 * value)
	{
		___innerStream_3 = value;
		Il2CppCodeGenWriteBarrier((&___innerStream_3), value);
	}

	inline static int32_t get_offset_of_inputBuffer_4() { return static_cast<int32_t>(offsetof(SslStreamBase_t3345248287, ___inputBuffer_4)); }
	inline MemoryStream_t3321880770 * get_inputBuffer_4() const { return ___inputBuffer_4; }
	inline MemoryStream_t3321880770 ** get_address_of_inputBuffer_4() { return &___inputBuffer_4; }
	inline void set_inputBuffer_4(MemoryStream_t3321880770 * value)
	{
		___inputBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&___inputBuffer_4), value);
	}

	inline static int32_t get_offset_of_context_5() { return static_cast<int32_t>(offsetof(SslStreamBase_t3345248287, ___context_5)); }
	inline Context_t3052937665 * get_context_5() const { return ___context_5; }
	inline Context_t3052937665 ** get_address_of_context_5() { return &___context_5; }
	inline void set_context_5(Context_t3052937665 * value)
	{
		___context_5 = value;
		Il2CppCodeGenWriteBarrier((&___context_5), value);
	}

	inline static int32_t get_offset_of_protocol_6() { return static_cast<int32_t>(offsetof(SslStreamBase_t3345248287, ___protocol_6)); }
	inline RecordProtocol_t2436280827 * get_protocol_6() const { return ___protocol_6; }
	inline RecordProtocol_t2436280827 ** get_address_of_protocol_6() { return &___protocol_6; }
	inline void set_protocol_6(RecordProtocol_t2436280827 * value)
	{
		___protocol_6 = value;
		Il2CppCodeGenWriteBarrier((&___protocol_6), value);
	}

	inline static int32_t get_offset_of_ownsStream_7() { return static_cast<int32_t>(offsetof(SslStreamBase_t3345248287, ___ownsStream_7)); }
	inline bool get_ownsStream_7() const { return ___ownsStream_7; }
	inline bool* get_address_of_ownsStream_7() { return &___ownsStream_7; }
	inline void set_ownsStream_7(bool value)
	{
		___ownsStream_7 = value;
	}

	inline static int32_t get_offset_of_disposed_8() { return static_cast<int32_t>(offsetof(SslStreamBase_t3345248287, ___disposed_8)); }
	inline bool get_disposed_8() const { return ___disposed_8; }
	inline bool* get_address_of_disposed_8() { return &___disposed_8; }
	inline void set_disposed_8(bool value)
	{
		___disposed_8 = value;
	}

	inline static int32_t get_offset_of_checkCertRevocationStatus_9() { return static_cast<int32_t>(offsetof(SslStreamBase_t3345248287, ___checkCertRevocationStatus_9)); }
	inline bool get_checkCertRevocationStatus_9() const { return ___checkCertRevocationStatus_9; }
	inline bool* get_address_of_checkCertRevocationStatus_9() { return &___checkCertRevocationStatus_9; }
	inline void set_checkCertRevocationStatus_9(bool value)
	{
		___checkCertRevocationStatus_9 = value;
	}

	inline static int32_t get_offset_of_negotiate_10() { return static_cast<int32_t>(offsetof(SslStreamBase_t3345248287, ___negotiate_10)); }
	inline RuntimeObject * get_negotiate_10() const { return ___negotiate_10; }
	inline RuntimeObject ** get_address_of_negotiate_10() { return &___negotiate_10; }
	inline void set_negotiate_10(RuntimeObject * value)
	{
		___negotiate_10 = value;
		Il2CppCodeGenWriteBarrier((&___negotiate_10), value);
	}

	inline static int32_t get_offset_of_read_11() { return static_cast<int32_t>(offsetof(SslStreamBase_t3345248287, ___read_11)); }
	inline RuntimeObject * get_read_11() const { return ___read_11; }
	inline RuntimeObject ** get_address_of_read_11() { return &___read_11; }
	inline void set_read_11(RuntimeObject * value)
	{
		___read_11 = value;
		Il2CppCodeGenWriteBarrier((&___read_11), value);
	}

	inline static int32_t get_offset_of_write_12() { return static_cast<int32_t>(offsetof(SslStreamBase_t3345248287, ___write_12)); }
	inline RuntimeObject * get_write_12() const { return ___write_12; }
	inline RuntimeObject ** get_address_of_write_12() { return &___write_12; }
	inline void set_write_12(RuntimeObject * value)
	{
		___write_12 = value;
		Il2CppCodeGenWriteBarrier((&___write_12), value);
	}

	inline static int32_t get_offset_of_negotiationComplete_13() { return static_cast<int32_t>(offsetof(SslStreamBase_t3345248287, ___negotiationComplete_13)); }
	inline ManualResetEvent_t3617874605 * get_negotiationComplete_13() const { return ___negotiationComplete_13; }
	inline ManualResetEvent_t3617874605 ** get_address_of_negotiationComplete_13() { return &___negotiationComplete_13; }
	inline void set_negotiationComplete_13(ManualResetEvent_t3617874605 * value)
	{
		___negotiationComplete_13 = value;
		Il2CppCodeGenWriteBarrier((&___negotiationComplete_13), value);
	}

	inline static int32_t get_offset_of_recbuf_14() { return static_cast<int32_t>(offsetof(SslStreamBase_t3345248287, ___recbuf_14)); }
	inline ByteU5BU5D_t2896786162* get_recbuf_14() const { return ___recbuf_14; }
	inline ByteU5BU5D_t2896786162** get_address_of_recbuf_14() { return &___recbuf_14; }
	inline void set_recbuf_14(ByteU5BU5D_t2896786162* value)
	{
		___recbuf_14 = value;
		Il2CppCodeGenWriteBarrier((&___recbuf_14), value);
	}

	inline static int32_t get_offset_of_recordStream_15() { return static_cast<int32_t>(offsetof(SslStreamBase_t3345248287, ___recordStream_15)); }
	inline MemoryStream_t3321880770 * get_recordStream_15() const { return ___recordStream_15; }
	inline MemoryStream_t3321880770 ** get_address_of_recordStream_15() { return &___recordStream_15; }
	inline void set_recordStream_15(MemoryStream_t3321880770 * value)
	{
		___recordStream_15 = value;
		Il2CppCodeGenWriteBarrier((&___recordStream_15), value);
	}
};

struct SslStreamBase_t3345248287_StaticFields
{
public:
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::record_processing
	ManualResetEvent_t3617874605 * ___record_processing_2;

public:
	inline static int32_t get_offset_of_record_processing_2() { return static_cast<int32_t>(offsetof(SslStreamBase_t3345248287_StaticFields, ___record_processing_2)); }
	inline ManualResetEvent_t3617874605 * get_record_processing_2() const { return ___record_processing_2; }
	inline ManualResetEvent_t3617874605 ** get_address_of_record_processing_2() { return &___record_processing_2; }
	inline void set_record_processing_2(ManualResetEvent_t3617874605 * value)
	{
		___record_processing_2 = value;
		Il2CppCodeGenWriteBarrier((&___record_processing_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSLSTREAMBASE_T3345248287_H
#ifndef SECURITYCOMPRESSIONTYPE_T2477734254_H
#define SECURITYCOMPRESSIONTYPE_T2477734254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SecurityCompressionType
struct  SecurityCompressionType_t2477734254 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.SecurityCompressionType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityCompressionType_t2477734254, ___value___1)); }
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
#endif // SECURITYCOMPRESSIONTYPE_T2477734254_H
#ifndef SECURITYPROTOCOLTYPE_T2127794434_H
#define SECURITYPROTOCOLTYPE_T2127794434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SecurityProtocolType
struct  SecurityProtocolType_t2127794434 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.SecurityProtocolType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityProtocolType_t2127794434, ___value___1)); }
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
#endif // SECURITYPROTOCOLTYPE_T2127794434_H
#ifndef ALERTLEVEL_T443372511_H
#define ALERTLEVEL_T443372511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.AlertLevel
struct  AlertLevel_t443372511 
{
public:
	// System.Byte Mono.Security.Protocol.Tls.AlertLevel::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AlertLevel_t443372511, ___value___1)); }
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
#endif // ALERTLEVEL_T443372511_H
#ifndef KEYUSAGES_T3616177619_H
#define KEYUSAGES_T3616177619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.KeyUsages
struct  KeyUsages_t3616177619 
{
public:
	// System.Int32 Mono.Security.X509.Extensions.KeyUsages::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyUsages_t3616177619, ___value___1)); }
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
#endif // KEYUSAGES_T3616177619_H
#ifndef ALERTDESCRIPTION_T1098935959_H
#define ALERTDESCRIPTION_T1098935959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.AlertDescription
struct  AlertDescription_t1098935959 
{
public:
	// System.Byte Mono.Security.Protocol.Tls.AlertDescription::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AlertDescription_t1098935959, ___value___1)); }
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
#endif // ALERTDESCRIPTION_T1098935959_H
#ifndef HASHALGORITHMTYPE_T2530508586_H
#define HASHALGORITHMTYPE_T2530508586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.HashAlgorithmType
struct  HashAlgorithmType_t2530508586 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.HashAlgorithmType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HashAlgorithmType_t2530508586, ___value___1)); }
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
#endif // HASHALGORITHMTYPE_T2530508586_H
#ifndef CIPHERALGORITHMTYPE_T1047906436_H
#define CIPHERALGORITHMTYPE_T1047906436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.CipherAlgorithmType
struct  CipherAlgorithmType_t1047906436 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.CipherAlgorithmType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherAlgorithmType_t1047906436, ___value___1)); }
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
#endif // CIPHERALGORITHMTYPE_T1047906436_H
#ifndef HANDSHAKESTATE_T2137331817_H
#define HANDSHAKESTATE_T2137331817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.HandshakeState
struct  HandshakeState_t2137331817 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.HandshakeState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HandshakeState_t2137331817, ___value___1)); }
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
#endif // HANDSHAKESTATE_T2137331817_H
#ifndef HMAC_T3098683303_H
#define HMAC_T3098683303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.HMAC
struct  HMAC_t3098683303  : public KeyedHashAlgorithm_t11759951
{
public:
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.HMAC::hash
	HashAlgorithm_t788180480 * ___hash_5;
	// System.Boolean Mono.Security.Cryptography.HMAC::hashing
	bool ___hashing_6;
	// System.Byte[] Mono.Security.Cryptography.HMAC::innerPad
	ByteU5BU5D_t2896786162* ___innerPad_7;
	// System.Byte[] Mono.Security.Cryptography.HMAC::outerPad
	ByteU5BU5D_t2896786162* ___outerPad_8;

public:
	inline static int32_t get_offset_of_hash_5() { return static_cast<int32_t>(offsetof(HMAC_t3098683303, ___hash_5)); }
	inline HashAlgorithm_t788180480 * get_hash_5() const { return ___hash_5; }
	inline HashAlgorithm_t788180480 ** get_address_of_hash_5() { return &___hash_5; }
	inline void set_hash_5(HashAlgorithm_t788180480 * value)
	{
		___hash_5 = value;
		Il2CppCodeGenWriteBarrier((&___hash_5), value);
	}

	inline static int32_t get_offset_of_hashing_6() { return static_cast<int32_t>(offsetof(HMAC_t3098683303, ___hashing_6)); }
	inline bool get_hashing_6() const { return ___hashing_6; }
	inline bool* get_address_of_hashing_6() { return &___hashing_6; }
	inline void set_hashing_6(bool value)
	{
		___hashing_6 = value;
	}

	inline static int32_t get_offset_of_innerPad_7() { return static_cast<int32_t>(offsetof(HMAC_t3098683303, ___innerPad_7)); }
	inline ByteU5BU5D_t2896786162* get_innerPad_7() const { return ___innerPad_7; }
	inline ByteU5BU5D_t2896786162** get_address_of_innerPad_7() { return &___innerPad_7; }
	inline void set_innerPad_7(ByteU5BU5D_t2896786162* value)
	{
		___innerPad_7 = value;
		Il2CppCodeGenWriteBarrier((&___innerPad_7), value);
	}

	inline static int32_t get_offset_of_outerPad_8() { return static_cast<int32_t>(offsetof(HMAC_t3098683303, ___outerPad_8)); }
	inline ByteU5BU5D_t2896786162* get_outerPad_8() const { return ___outerPad_8; }
	inline ByteU5BU5D_t2896786162** get_address_of_outerPad_8() { return &___outerPad_8; }
	inline void set_outerPad_8(ByteU5BU5D_t2896786162* value)
	{
		___outerPad_8 = value;
		Il2CppCodeGenWriteBarrier((&___outerPad_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMAC_T3098683303_H
#ifndef EXCHANGEALGORITHMTYPE_T1431563147_H
#define EXCHANGEALGORITHMTYPE_T1431563147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
struct  ExchangeAlgorithmType_t1431563147 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.ExchangeAlgorithmType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExchangeAlgorithmType_t1431563147, ___value___1)); }
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
#endif // EXCHANGEALGORITHMTYPE_T1431563147_H
#ifndef CONTENTTYPE_T2674657885_H
#define CONTENTTYPE_T2674657885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ContentType
struct  ContentType_t2674657885 
{
public:
	// System.Byte Mono.Security.Protocol.Tls.ContentType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ContentType_t2674657885, ___value___1)); }
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
#endif // CONTENTTYPE_T2674657885_H
#ifndef CERTTYPES_T3845881161_H
#define CERTTYPES_T3845881161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes
struct  CertTypes_t3845881161 
{
public:
	// System.Int32 Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CertTypes_t3845881161, ___value___1)); }
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
#endif // CERTTYPES_T3845881161_H
#ifndef ALERT_T2861173177_H
#define ALERT_T2861173177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Alert
struct  Alert_t2861173177  : public RuntimeObject
{
public:
	// Mono.Security.Protocol.Tls.AlertLevel Mono.Security.Protocol.Tls.Alert::level
	uint8_t ___level_0;
	// Mono.Security.Protocol.Tls.AlertDescription Mono.Security.Protocol.Tls.Alert::description
	uint8_t ___description_1;

public:
	inline static int32_t get_offset_of_level_0() { return static_cast<int32_t>(offsetof(Alert_t2861173177, ___level_0)); }
	inline uint8_t get_level_0() const { return ___level_0; }
	inline uint8_t* get_address_of_level_0() { return &___level_0; }
	inline void set_level_0(uint8_t value)
	{
		___level_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(Alert_t2861173177, ___description_1)); }
	inline uint8_t get_description_1() const { return ___description_1; }
	inline uint8_t* get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(uint8_t value)
	{
		___description_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALERT_T2861173177_H
#ifndef CIPHERSUITE_T800481449_H
#define CIPHERSUITE_T800481449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.CipherSuite
struct  CipherSuite_t800481449  : public RuntimeObject
{
public:
	// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::code
	int16_t ___code_1;
	// System.String Mono.Security.Protocol.Tls.CipherSuite::name
	String_t* ___name_2;
	// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::cipherAlgorithmType
	int32_t ___cipherAlgorithmType_3;
	// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::hashAlgorithmType
	int32_t ___hashAlgorithmType_4;
	// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::exchangeAlgorithmType
	int32_t ___exchangeAlgorithmType_5;
	// System.Boolean Mono.Security.Protocol.Tls.CipherSuite::isExportable
	bool ___isExportable_6;
	// System.Security.Cryptography.CipherMode Mono.Security.Protocol.Tls.CipherSuite::cipherMode
	int32_t ___cipherMode_7;
	// System.Byte Mono.Security.Protocol.Tls.CipherSuite::keyMaterialSize
	uint8_t ___keyMaterialSize_8;
	// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::keyBlockSize
	int32_t ___keyBlockSize_9;
	// System.Byte Mono.Security.Protocol.Tls.CipherSuite::expandedKeyMaterialSize
	uint8_t ___expandedKeyMaterialSize_10;
	// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::effectiveKeyBits
	int16_t ___effectiveKeyBits_11;
	// System.Byte Mono.Security.Protocol.Tls.CipherSuite::ivSize
	uint8_t ___ivSize_12;
	// System.Byte Mono.Security.Protocol.Tls.CipherSuite::blockSize
	uint8_t ___blockSize_13;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.CipherSuite::context
	Context_t3052937665 * ___context_14;
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Protocol.Tls.CipherSuite::encryptionAlgorithm
	SymmetricAlgorithm_t2715187709 * ___encryptionAlgorithm_15;
	// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::encryptionCipher
	RuntimeObject* ___encryptionCipher_16;
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Protocol.Tls.CipherSuite::decryptionAlgorithm
	SymmetricAlgorithm_t2715187709 * ___decryptionAlgorithm_17;
	// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::decryptionCipher
	RuntimeObject* ___decryptionCipher_18;
	// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::clientHMAC
	KeyedHashAlgorithm_t11759951 * ___clientHMAC_19;
	// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::serverHMAC
	KeyedHashAlgorithm_t11759951 * ___serverHMAC_20;

public:
	inline static int32_t get_offset_of_code_1() { return static_cast<int32_t>(offsetof(CipherSuite_t800481449, ___code_1)); }
	inline int16_t get_code_1() const { return ___code_1; }
	inline int16_t* get_address_of_code_1() { return &___code_1; }
	inline void set_code_1(int16_t value)
	{
		___code_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(CipherSuite_t800481449, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_cipherAlgorithmType_3() { return static_cast<int32_t>(offsetof(CipherSuite_t800481449, ___cipherAlgorithmType_3)); }
	inline int32_t get_cipherAlgorithmType_3() const { return ___cipherAlgorithmType_3; }
	inline int32_t* get_address_of_cipherAlgorithmType_3() { return &___cipherAlgorithmType_3; }
	inline void set_cipherAlgorithmType_3(int32_t value)
	{
		___cipherAlgorithmType_3 = value;
	}

	inline static int32_t get_offset_of_hashAlgorithmType_4() { return static_cast<int32_t>(offsetof(CipherSuite_t800481449, ___hashAlgorithmType_4)); }
	inline int32_t get_hashAlgorithmType_4() const { return ___hashAlgorithmType_4; }
	inline int32_t* get_address_of_hashAlgorithmType_4() { return &___hashAlgorithmType_4; }
	inline void set_hashAlgorithmType_4(int32_t value)
	{
		___hashAlgorithmType_4 = value;
	}

	inline static int32_t get_offset_of_exchangeAlgorithmType_5() { return static_cast<int32_t>(offsetof(CipherSuite_t800481449, ___exchangeAlgorithmType_5)); }
	inline int32_t get_exchangeAlgorithmType_5() const { return ___exchangeAlgorithmType_5; }
	inline int32_t* get_address_of_exchangeAlgorithmType_5() { return &___exchangeAlgorithmType_5; }
	inline void set_exchangeAlgorithmType_5(int32_t value)
	{
		___exchangeAlgorithmType_5 = value;
	}

	inline static int32_t get_offset_of_isExportable_6() { return static_cast<int32_t>(offsetof(CipherSuite_t800481449, ___isExportable_6)); }
	inline bool get_isExportable_6() const { return ___isExportable_6; }
	inline bool* get_address_of_isExportable_6() { return &___isExportable_6; }
	inline void set_isExportable_6(bool value)
	{
		___isExportable_6 = value;
	}

	inline static int32_t get_offset_of_cipherMode_7() { return static_cast<int32_t>(offsetof(CipherSuite_t800481449, ___cipherMode_7)); }
	inline int32_t get_cipherMode_7() const { return ___cipherMode_7; }
	inline int32_t* get_address_of_cipherMode_7() { return &___cipherMode_7; }
	inline void set_cipherMode_7(int32_t value)
	{
		___cipherMode_7 = value;
	}

	inline static int32_t get_offset_of_keyMaterialSize_8() { return static_cast<int32_t>(offsetof(CipherSuite_t800481449, ___keyMaterialSize_8)); }
	inline uint8_t get_keyMaterialSize_8() const { return ___keyMaterialSize_8; }
	inline uint8_t* get_address_of_keyMaterialSize_8() { return &___keyMaterialSize_8; }
	inline void set_keyMaterialSize_8(uint8_t value)
	{
		___keyMaterialSize_8 = value;
	}

	inline static int32_t get_offset_of_keyBlockSize_9() { return static_cast<int32_t>(offsetof(CipherSuite_t800481449, ___keyBlockSize_9)); }
	inline int32_t get_keyBlockSize_9() const { return ___keyBlockSize_9; }
	inline int32_t* get_address_of_keyBlockSize_9() { return &___keyBlockSize_9; }
	inline void set_keyBlockSize_9(int32_t value)
	{
		___keyBlockSize_9 = value;
	}

	inline static int32_t get_offset_of_expandedKeyMaterialSize_10() { return static_cast<int32_t>(offsetof(CipherSuite_t800481449, ___expandedKeyMaterialSize_10)); }
	inline uint8_t get_expandedKeyMaterialSize_10() const { return ___expandedKeyMaterialSize_10; }
	inline uint8_t* get_address_of_expandedKeyMaterialSize_10() { return &___expandedKeyMaterialSize_10; }
	inline void set_expandedKeyMaterialSize_10(uint8_t value)
	{
		___expandedKeyMaterialSize_10 = value;
	}

	inline static int32_t get_offset_of_effectiveKeyBits_11() { return static_cast<int32_t>(offsetof(CipherSuite_t800481449, ___effectiveKeyBits_11)); }
	inline int16_t get_effectiveKeyBits_11() const { return ___effectiveKeyBits_11; }
	inline int16_t* get_address_of_effectiveKeyBits_11() { return &___effectiveKeyBits_11; }
	inline void set_effectiveKeyBits_11(int16_t value)
	{
		___effectiveKeyBits_11 = value;
	}

	inline static int32_t get_offset_of_ivSize_12() { return static_cast<int32_t>(offsetof(CipherSuite_t800481449, ___ivSize_12)); }
	inline uint8_t get_ivSize_12() const { return ___ivSize_12; }
	inline uint8_t* get_address_of_ivSize_12() { return &___ivSize_12; }
	inline void set_ivSize_12(uint8_t value)
	{
		___ivSize_12 = value;
	}

	inline static int32_t get_offset_of_blockSize_13() { return static_cast<int32_t>(offsetof(CipherSuite_t800481449, ___blockSize_13)); }
	inline uint8_t get_blockSize_13() const { return ___blockSize_13; }
	inline uint8_t* get_address_of_blockSize_13() { return &___blockSize_13; }
	inline void set_blockSize_13(uint8_t value)
	{
		___blockSize_13 = value;
	}

	inline static int32_t get_offset_of_context_14() { return static_cast<int32_t>(offsetof(CipherSuite_t800481449, ___context_14)); }
	inline Context_t3052937665 * get_context_14() const { return ___context_14; }
	inline Context_t3052937665 ** get_address_of_context_14() { return &___context_14; }
	inline void set_context_14(Context_t3052937665 * value)
	{
		___context_14 = value;
		Il2CppCodeGenWriteBarrier((&___context_14), value);
	}

	inline static int32_t get_offset_of_encryptionAlgorithm_15() { return static_cast<int32_t>(offsetof(CipherSuite_t800481449, ___encryptionAlgorithm_15)); }
	inline SymmetricAlgorithm_t2715187709 * get_encryptionAlgorithm_15() const { return ___encryptionAlgorithm_15; }
	inline SymmetricAlgorithm_t2715187709 ** get_address_of_encryptionAlgorithm_15() { return &___encryptionAlgorithm_15; }
	inline void set_encryptionAlgorithm_15(SymmetricAlgorithm_t2715187709 * value)
	{
		___encryptionAlgorithm_15 = value;
		Il2CppCodeGenWriteBarrier((&___encryptionAlgorithm_15), value);
	}

	inline static int32_t get_offset_of_encryptionCipher_16() { return static_cast<int32_t>(offsetof(CipherSuite_t800481449, ___encryptionCipher_16)); }
	inline RuntimeObject* get_encryptionCipher_16() const { return ___encryptionCipher_16; }
	inline RuntimeObject** get_address_of_encryptionCipher_16() { return &___encryptionCipher_16; }
	inline void set_encryptionCipher_16(RuntimeObject* value)
	{
		___encryptionCipher_16 = value;
		Il2CppCodeGenWriteBarrier((&___encryptionCipher_16), value);
	}

	inline static int32_t get_offset_of_decryptionAlgorithm_17() { return static_cast<int32_t>(offsetof(CipherSuite_t800481449, ___decryptionAlgorithm_17)); }
	inline SymmetricAlgorithm_t2715187709 * get_decryptionAlgorithm_17() const { return ___decryptionAlgorithm_17; }
	inline SymmetricAlgorithm_t2715187709 ** get_address_of_decryptionAlgorithm_17() { return &___decryptionAlgorithm_17; }
	inline void set_decryptionAlgorithm_17(SymmetricAlgorithm_t2715187709 * value)
	{
		___decryptionAlgorithm_17 = value;
		Il2CppCodeGenWriteBarrier((&___decryptionAlgorithm_17), value);
	}

	inline static int32_t get_offset_of_decryptionCipher_18() { return static_cast<int32_t>(offsetof(CipherSuite_t800481449, ___decryptionCipher_18)); }
	inline RuntimeObject* get_decryptionCipher_18() const { return ___decryptionCipher_18; }
	inline RuntimeObject** get_address_of_decryptionCipher_18() { return &___decryptionCipher_18; }
	inline void set_decryptionCipher_18(RuntimeObject* value)
	{
		___decryptionCipher_18 = value;
		Il2CppCodeGenWriteBarrier((&___decryptionCipher_18), value);
	}

	inline static int32_t get_offset_of_clientHMAC_19() { return static_cast<int32_t>(offsetof(CipherSuite_t800481449, ___clientHMAC_19)); }
	inline KeyedHashAlgorithm_t11759951 * get_clientHMAC_19() const { return ___clientHMAC_19; }
	inline KeyedHashAlgorithm_t11759951 ** get_address_of_clientHMAC_19() { return &___clientHMAC_19; }
	inline void set_clientHMAC_19(KeyedHashAlgorithm_t11759951 * value)
	{
		___clientHMAC_19 = value;
		Il2CppCodeGenWriteBarrier((&___clientHMAC_19), value);
	}

	inline static int32_t get_offset_of_serverHMAC_20() { return static_cast<int32_t>(offsetof(CipherSuite_t800481449, ___serverHMAC_20)); }
	inline KeyedHashAlgorithm_t11759951 * get_serverHMAC_20() const { return ___serverHMAC_20; }
	inline KeyedHashAlgorithm_t11759951 ** get_address_of_serverHMAC_20() { return &___serverHMAC_20; }
	inline void set_serverHMAC_20(KeyedHashAlgorithm_t11759951 * value)
	{
		___serverHMAC_20 = value;
		Il2CppCodeGenWriteBarrier((&___serverHMAC_20), value);
	}
};

struct CipherSuite_t800481449_StaticFields
{
public:
	// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::EmptyArray
	ByteU5BU5D_t2896786162* ___EmptyArray_0;

public:
	inline static int32_t get_offset_of_EmptyArray_0() { return static_cast<int32_t>(offsetof(CipherSuite_t800481449_StaticFields, ___EmptyArray_0)); }
	inline ByteU5BU5D_t2896786162* get_EmptyArray_0() const { return ___EmptyArray_0; }
	inline ByteU5BU5D_t2896786162** get_address_of_EmptyArray_0() { return &___EmptyArray_0; }
	inline void set_EmptyArray_0(ByteU5BU5D_t2896786162* value)
	{
		___EmptyArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERSUITE_T800481449_H
#ifndef CIPHERSUITECOLLECTION_T3539135286_H
#define CIPHERSUITECOLLECTION_T3539135286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct  CipherSuiteCollection_t3539135286  : public RuntimeObject
{
public:
	// System.Collections.ArrayList Mono.Security.Protocol.Tls.CipherSuiteCollection::cipherSuites
	ArrayList_t844188058 * ___cipherSuites_0;
	// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.CipherSuiteCollection::protocol
	int32_t ___protocol_1;

public:
	inline static int32_t get_offset_of_cipherSuites_0() { return static_cast<int32_t>(offsetof(CipherSuiteCollection_t3539135286, ___cipherSuites_0)); }
	inline ArrayList_t844188058 * get_cipherSuites_0() const { return ___cipherSuites_0; }
	inline ArrayList_t844188058 ** get_address_of_cipherSuites_0() { return &___cipherSuites_0; }
	inline void set_cipherSuites_0(ArrayList_t844188058 * value)
	{
		___cipherSuites_0 = value;
		Il2CppCodeGenWriteBarrier((&___cipherSuites_0), value);
	}

	inline static int32_t get_offset_of_protocol_1() { return static_cast<int32_t>(offsetof(CipherSuiteCollection_t3539135286, ___protocol_1)); }
	inline int32_t get_protocol_1() const { return ___protocol_1; }
	inline int32_t* get_address_of_protocol_1() { return &___protocol_1; }
	inline void set_protocol_1(int32_t value)
	{
		___protocol_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERSUITECOLLECTION_T3539135286_H
#ifndef SSLCLIENTSTREAM_T849171934_H
#define SSLCLIENTSTREAM_T849171934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SslClientStream
struct  SslClientStream_t849171934  : public SslStreamBase_t3345248287
{
public:
	// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslClientStream::ServerCertValidation
	CertificateValidationCallback_t488459878 * ___ServerCertValidation_16;
	// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.SslClientStream::ClientCertSelection
	CertificateSelectionCallback_t3259247178 * ___ClientCertSelection_17;
	// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslClientStream::PrivateKeySelection
	PrivateKeySelectionCallback_t2720362418 * ___PrivateKeySelection_18;
	// Mono.Security.Protocol.Tls.CertificateValidationCallback2 Mono.Security.Protocol.Tls.SslClientStream::ServerCertValidation2
	CertificateValidationCallback2_t2335861944 * ___ServerCertValidation2_19;

public:
	inline static int32_t get_offset_of_ServerCertValidation_16() { return static_cast<int32_t>(offsetof(SslClientStream_t849171934, ___ServerCertValidation_16)); }
	inline CertificateValidationCallback_t488459878 * get_ServerCertValidation_16() const { return ___ServerCertValidation_16; }
	inline CertificateValidationCallback_t488459878 ** get_address_of_ServerCertValidation_16() { return &___ServerCertValidation_16; }
	inline void set_ServerCertValidation_16(CertificateValidationCallback_t488459878 * value)
	{
		___ServerCertValidation_16 = value;
		Il2CppCodeGenWriteBarrier((&___ServerCertValidation_16), value);
	}

	inline static int32_t get_offset_of_ClientCertSelection_17() { return static_cast<int32_t>(offsetof(SslClientStream_t849171934, ___ClientCertSelection_17)); }
	inline CertificateSelectionCallback_t3259247178 * get_ClientCertSelection_17() const { return ___ClientCertSelection_17; }
	inline CertificateSelectionCallback_t3259247178 ** get_address_of_ClientCertSelection_17() { return &___ClientCertSelection_17; }
	inline void set_ClientCertSelection_17(CertificateSelectionCallback_t3259247178 * value)
	{
		___ClientCertSelection_17 = value;
		Il2CppCodeGenWriteBarrier((&___ClientCertSelection_17), value);
	}

	inline static int32_t get_offset_of_PrivateKeySelection_18() { return static_cast<int32_t>(offsetof(SslClientStream_t849171934, ___PrivateKeySelection_18)); }
	inline PrivateKeySelectionCallback_t2720362418 * get_PrivateKeySelection_18() const { return ___PrivateKeySelection_18; }
	inline PrivateKeySelectionCallback_t2720362418 ** get_address_of_PrivateKeySelection_18() { return &___PrivateKeySelection_18; }
	inline void set_PrivateKeySelection_18(PrivateKeySelectionCallback_t2720362418 * value)
	{
		___PrivateKeySelection_18 = value;
		Il2CppCodeGenWriteBarrier((&___PrivateKeySelection_18), value);
	}

	inline static int32_t get_offset_of_ServerCertValidation2_19() { return static_cast<int32_t>(offsetof(SslClientStream_t849171934, ___ServerCertValidation2_19)); }
	inline CertificateValidationCallback2_t2335861944 * get_ServerCertValidation2_19() const { return ___ServerCertValidation2_19; }
	inline CertificateValidationCallback2_t2335861944 ** get_address_of_ServerCertValidation2_19() { return &___ServerCertValidation2_19; }
	inline void set_ServerCertValidation2_19(CertificateValidationCallback2_t2335861944 * value)
	{
		___ServerCertValidation2_19 = value;
		Il2CppCodeGenWriteBarrier((&___ServerCertValidation2_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSLCLIENTSTREAM_T849171934_H
#ifndef CONTEXT_T3052937665_H
#define CONTEXT_T3052937665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Context
struct  Context_t3052937665  : public RuntimeObject
{
public:
	// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::securityProtocol
	int32_t ___securityProtocol_4;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::sessionId
	ByteU5BU5D_t2896786162* ___sessionId_5;
	// Mono.Security.Protocol.Tls.SecurityCompressionType Mono.Security.Protocol.Tls.Context::compressionMethod
	int32_t ___compressionMethod_6;
	// Mono.Security.Protocol.Tls.TlsServerSettings Mono.Security.Protocol.Tls.Context::serverSettings
	TlsServerSettings_t1536610037 * ___serverSettings_7;
	// Mono.Security.Protocol.Tls.TlsClientSettings Mono.Security.Protocol.Tls.Context::clientSettings
	TlsClientSettings_t475553206 * ___clientSettings_8;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::current
	SecurityParameters_t2105378483 * ___current_9;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::negotiating
	SecurityParameters_t2105378483 * ___negotiating_10;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::read
	SecurityParameters_t2105378483 * ___read_11;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::write
	SecurityParameters_t2105378483 * ___write_12;
	// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.Context::supportedCiphers
	CipherSuiteCollection_t3539135286 * ___supportedCiphers_13;
	// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Context::lastHandshakeMsg
	uint8_t ___lastHandshakeMsg_14;
	// Mono.Security.Protocol.Tls.HandshakeState Mono.Security.Protocol.Tls.Context::handshakeState
	int32_t ___handshakeState_15;
	// System.Boolean Mono.Security.Protocol.Tls.Context::abbreviatedHandshake
	bool ___abbreviatedHandshake_16;
	// System.Boolean Mono.Security.Protocol.Tls.Context::receivedConnectionEnd
	bool ___receivedConnectionEnd_17;
	// System.Boolean Mono.Security.Protocol.Tls.Context::sentConnectionEnd
	bool ___sentConnectionEnd_18;
	// System.Boolean Mono.Security.Protocol.Tls.Context::protocolNegotiated
	bool ___protocolNegotiated_19;
	// System.UInt64 Mono.Security.Protocol.Tls.Context::writeSequenceNumber
	uint64_t ___writeSequenceNumber_20;
	// System.UInt64 Mono.Security.Protocol.Tls.Context::readSequenceNumber
	uint64_t ___readSequenceNumber_21;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::clientRandom
	ByteU5BU5D_t2896786162* ___clientRandom_22;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::serverRandom
	ByteU5BU5D_t2896786162* ___serverRandom_23;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::randomCS
	ByteU5BU5D_t2896786162* ___randomCS_24;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::randomSC
	ByteU5BU5D_t2896786162* ___randomSC_25;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::masterSecret
	ByteU5BU5D_t2896786162* ___masterSecret_26;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::clientWriteKey
	ByteU5BU5D_t2896786162* ___clientWriteKey_27;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::serverWriteKey
	ByteU5BU5D_t2896786162* ___serverWriteKey_28;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::clientWriteIV
	ByteU5BU5D_t2896786162* ___clientWriteIV_29;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::serverWriteIV
	ByteU5BU5D_t2896786162* ___serverWriteIV_30;
	// Mono.Security.Protocol.Tls.TlsStream Mono.Security.Protocol.Tls.Context::handshakeMessages
	TlsStream_t1700644566 * ___handshakeMessages_31;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Protocol.Tls.Context::random
	RandomNumberGenerator_t2194148873 * ___random_32;
	// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.Context::recordProtocol
	RecordProtocol_t2436280827 * ___recordProtocol_33;

public:
	inline static int32_t get_offset_of_securityProtocol_4() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___securityProtocol_4)); }
	inline int32_t get_securityProtocol_4() const { return ___securityProtocol_4; }
	inline int32_t* get_address_of_securityProtocol_4() { return &___securityProtocol_4; }
	inline void set_securityProtocol_4(int32_t value)
	{
		___securityProtocol_4 = value;
	}

	inline static int32_t get_offset_of_sessionId_5() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___sessionId_5)); }
	inline ByteU5BU5D_t2896786162* get_sessionId_5() const { return ___sessionId_5; }
	inline ByteU5BU5D_t2896786162** get_address_of_sessionId_5() { return &___sessionId_5; }
	inline void set_sessionId_5(ByteU5BU5D_t2896786162* value)
	{
		___sessionId_5 = value;
		Il2CppCodeGenWriteBarrier((&___sessionId_5), value);
	}

	inline static int32_t get_offset_of_compressionMethod_6() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___compressionMethod_6)); }
	inline int32_t get_compressionMethod_6() const { return ___compressionMethod_6; }
	inline int32_t* get_address_of_compressionMethod_6() { return &___compressionMethod_6; }
	inline void set_compressionMethod_6(int32_t value)
	{
		___compressionMethod_6 = value;
	}

	inline static int32_t get_offset_of_serverSettings_7() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___serverSettings_7)); }
	inline TlsServerSettings_t1536610037 * get_serverSettings_7() const { return ___serverSettings_7; }
	inline TlsServerSettings_t1536610037 ** get_address_of_serverSettings_7() { return &___serverSettings_7; }
	inline void set_serverSettings_7(TlsServerSettings_t1536610037 * value)
	{
		___serverSettings_7 = value;
		Il2CppCodeGenWriteBarrier((&___serverSettings_7), value);
	}

	inline static int32_t get_offset_of_clientSettings_8() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___clientSettings_8)); }
	inline TlsClientSettings_t475553206 * get_clientSettings_8() const { return ___clientSettings_8; }
	inline TlsClientSettings_t475553206 ** get_address_of_clientSettings_8() { return &___clientSettings_8; }
	inline void set_clientSettings_8(TlsClientSettings_t475553206 * value)
	{
		___clientSettings_8 = value;
		Il2CppCodeGenWriteBarrier((&___clientSettings_8), value);
	}

	inline static int32_t get_offset_of_current_9() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___current_9)); }
	inline SecurityParameters_t2105378483 * get_current_9() const { return ___current_9; }
	inline SecurityParameters_t2105378483 ** get_address_of_current_9() { return &___current_9; }
	inline void set_current_9(SecurityParameters_t2105378483 * value)
	{
		___current_9 = value;
		Il2CppCodeGenWriteBarrier((&___current_9), value);
	}

	inline static int32_t get_offset_of_negotiating_10() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___negotiating_10)); }
	inline SecurityParameters_t2105378483 * get_negotiating_10() const { return ___negotiating_10; }
	inline SecurityParameters_t2105378483 ** get_address_of_negotiating_10() { return &___negotiating_10; }
	inline void set_negotiating_10(SecurityParameters_t2105378483 * value)
	{
		___negotiating_10 = value;
		Il2CppCodeGenWriteBarrier((&___negotiating_10), value);
	}

	inline static int32_t get_offset_of_read_11() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___read_11)); }
	inline SecurityParameters_t2105378483 * get_read_11() const { return ___read_11; }
	inline SecurityParameters_t2105378483 ** get_address_of_read_11() { return &___read_11; }
	inline void set_read_11(SecurityParameters_t2105378483 * value)
	{
		___read_11 = value;
		Il2CppCodeGenWriteBarrier((&___read_11), value);
	}

	inline static int32_t get_offset_of_write_12() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___write_12)); }
	inline SecurityParameters_t2105378483 * get_write_12() const { return ___write_12; }
	inline SecurityParameters_t2105378483 ** get_address_of_write_12() { return &___write_12; }
	inline void set_write_12(SecurityParameters_t2105378483 * value)
	{
		___write_12 = value;
		Il2CppCodeGenWriteBarrier((&___write_12), value);
	}

	inline static int32_t get_offset_of_supportedCiphers_13() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___supportedCiphers_13)); }
	inline CipherSuiteCollection_t3539135286 * get_supportedCiphers_13() const { return ___supportedCiphers_13; }
	inline CipherSuiteCollection_t3539135286 ** get_address_of_supportedCiphers_13() { return &___supportedCiphers_13; }
	inline void set_supportedCiphers_13(CipherSuiteCollection_t3539135286 * value)
	{
		___supportedCiphers_13 = value;
		Il2CppCodeGenWriteBarrier((&___supportedCiphers_13), value);
	}

	inline static int32_t get_offset_of_lastHandshakeMsg_14() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___lastHandshakeMsg_14)); }
	inline uint8_t get_lastHandshakeMsg_14() const { return ___lastHandshakeMsg_14; }
	inline uint8_t* get_address_of_lastHandshakeMsg_14() { return &___lastHandshakeMsg_14; }
	inline void set_lastHandshakeMsg_14(uint8_t value)
	{
		___lastHandshakeMsg_14 = value;
	}

	inline static int32_t get_offset_of_handshakeState_15() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___handshakeState_15)); }
	inline int32_t get_handshakeState_15() const { return ___handshakeState_15; }
	inline int32_t* get_address_of_handshakeState_15() { return &___handshakeState_15; }
	inline void set_handshakeState_15(int32_t value)
	{
		___handshakeState_15 = value;
	}

	inline static int32_t get_offset_of_abbreviatedHandshake_16() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___abbreviatedHandshake_16)); }
	inline bool get_abbreviatedHandshake_16() const { return ___abbreviatedHandshake_16; }
	inline bool* get_address_of_abbreviatedHandshake_16() { return &___abbreviatedHandshake_16; }
	inline void set_abbreviatedHandshake_16(bool value)
	{
		___abbreviatedHandshake_16 = value;
	}

	inline static int32_t get_offset_of_receivedConnectionEnd_17() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___receivedConnectionEnd_17)); }
	inline bool get_receivedConnectionEnd_17() const { return ___receivedConnectionEnd_17; }
	inline bool* get_address_of_receivedConnectionEnd_17() { return &___receivedConnectionEnd_17; }
	inline void set_receivedConnectionEnd_17(bool value)
	{
		___receivedConnectionEnd_17 = value;
	}

	inline static int32_t get_offset_of_sentConnectionEnd_18() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___sentConnectionEnd_18)); }
	inline bool get_sentConnectionEnd_18() const { return ___sentConnectionEnd_18; }
	inline bool* get_address_of_sentConnectionEnd_18() { return &___sentConnectionEnd_18; }
	inline void set_sentConnectionEnd_18(bool value)
	{
		___sentConnectionEnd_18 = value;
	}

	inline static int32_t get_offset_of_protocolNegotiated_19() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___protocolNegotiated_19)); }
	inline bool get_protocolNegotiated_19() const { return ___protocolNegotiated_19; }
	inline bool* get_address_of_protocolNegotiated_19() { return &___protocolNegotiated_19; }
	inline void set_protocolNegotiated_19(bool value)
	{
		___protocolNegotiated_19 = value;
	}

	inline static int32_t get_offset_of_writeSequenceNumber_20() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___writeSequenceNumber_20)); }
	inline uint64_t get_writeSequenceNumber_20() const { return ___writeSequenceNumber_20; }
	inline uint64_t* get_address_of_writeSequenceNumber_20() { return &___writeSequenceNumber_20; }
	inline void set_writeSequenceNumber_20(uint64_t value)
	{
		___writeSequenceNumber_20 = value;
	}

	inline static int32_t get_offset_of_readSequenceNumber_21() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___readSequenceNumber_21)); }
	inline uint64_t get_readSequenceNumber_21() const { return ___readSequenceNumber_21; }
	inline uint64_t* get_address_of_readSequenceNumber_21() { return &___readSequenceNumber_21; }
	inline void set_readSequenceNumber_21(uint64_t value)
	{
		___readSequenceNumber_21 = value;
	}

	inline static int32_t get_offset_of_clientRandom_22() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___clientRandom_22)); }
	inline ByteU5BU5D_t2896786162* get_clientRandom_22() const { return ___clientRandom_22; }
	inline ByteU5BU5D_t2896786162** get_address_of_clientRandom_22() { return &___clientRandom_22; }
	inline void set_clientRandom_22(ByteU5BU5D_t2896786162* value)
	{
		___clientRandom_22 = value;
		Il2CppCodeGenWriteBarrier((&___clientRandom_22), value);
	}

	inline static int32_t get_offset_of_serverRandom_23() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___serverRandom_23)); }
	inline ByteU5BU5D_t2896786162* get_serverRandom_23() const { return ___serverRandom_23; }
	inline ByteU5BU5D_t2896786162** get_address_of_serverRandom_23() { return &___serverRandom_23; }
	inline void set_serverRandom_23(ByteU5BU5D_t2896786162* value)
	{
		___serverRandom_23 = value;
		Il2CppCodeGenWriteBarrier((&___serverRandom_23), value);
	}

	inline static int32_t get_offset_of_randomCS_24() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___randomCS_24)); }
	inline ByteU5BU5D_t2896786162* get_randomCS_24() const { return ___randomCS_24; }
	inline ByteU5BU5D_t2896786162** get_address_of_randomCS_24() { return &___randomCS_24; }
	inline void set_randomCS_24(ByteU5BU5D_t2896786162* value)
	{
		___randomCS_24 = value;
		Il2CppCodeGenWriteBarrier((&___randomCS_24), value);
	}

	inline static int32_t get_offset_of_randomSC_25() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___randomSC_25)); }
	inline ByteU5BU5D_t2896786162* get_randomSC_25() const { return ___randomSC_25; }
	inline ByteU5BU5D_t2896786162** get_address_of_randomSC_25() { return &___randomSC_25; }
	inline void set_randomSC_25(ByteU5BU5D_t2896786162* value)
	{
		___randomSC_25 = value;
		Il2CppCodeGenWriteBarrier((&___randomSC_25), value);
	}

	inline static int32_t get_offset_of_masterSecret_26() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___masterSecret_26)); }
	inline ByteU5BU5D_t2896786162* get_masterSecret_26() const { return ___masterSecret_26; }
	inline ByteU5BU5D_t2896786162** get_address_of_masterSecret_26() { return &___masterSecret_26; }
	inline void set_masterSecret_26(ByteU5BU5D_t2896786162* value)
	{
		___masterSecret_26 = value;
		Il2CppCodeGenWriteBarrier((&___masterSecret_26), value);
	}

	inline static int32_t get_offset_of_clientWriteKey_27() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___clientWriteKey_27)); }
	inline ByteU5BU5D_t2896786162* get_clientWriteKey_27() const { return ___clientWriteKey_27; }
	inline ByteU5BU5D_t2896786162** get_address_of_clientWriteKey_27() { return &___clientWriteKey_27; }
	inline void set_clientWriteKey_27(ByteU5BU5D_t2896786162* value)
	{
		___clientWriteKey_27 = value;
		Il2CppCodeGenWriteBarrier((&___clientWriteKey_27), value);
	}

	inline static int32_t get_offset_of_serverWriteKey_28() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___serverWriteKey_28)); }
	inline ByteU5BU5D_t2896786162* get_serverWriteKey_28() const { return ___serverWriteKey_28; }
	inline ByteU5BU5D_t2896786162** get_address_of_serverWriteKey_28() { return &___serverWriteKey_28; }
	inline void set_serverWriteKey_28(ByteU5BU5D_t2896786162* value)
	{
		___serverWriteKey_28 = value;
		Il2CppCodeGenWriteBarrier((&___serverWriteKey_28), value);
	}

	inline static int32_t get_offset_of_clientWriteIV_29() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___clientWriteIV_29)); }
	inline ByteU5BU5D_t2896786162* get_clientWriteIV_29() const { return ___clientWriteIV_29; }
	inline ByteU5BU5D_t2896786162** get_address_of_clientWriteIV_29() { return &___clientWriteIV_29; }
	inline void set_clientWriteIV_29(ByteU5BU5D_t2896786162* value)
	{
		___clientWriteIV_29 = value;
		Il2CppCodeGenWriteBarrier((&___clientWriteIV_29), value);
	}

	inline static int32_t get_offset_of_serverWriteIV_30() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___serverWriteIV_30)); }
	inline ByteU5BU5D_t2896786162* get_serverWriteIV_30() const { return ___serverWriteIV_30; }
	inline ByteU5BU5D_t2896786162** get_address_of_serverWriteIV_30() { return &___serverWriteIV_30; }
	inline void set_serverWriteIV_30(ByteU5BU5D_t2896786162* value)
	{
		___serverWriteIV_30 = value;
		Il2CppCodeGenWriteBarrier((&___serverWriteIV_30), value);
	}

	inline static int32_t get_offset_of_handshakeMessages_31() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___handshakeMessages_31)); }
	inline TlsStream_t1700644566 * get_handshakeMessages_31() const { return ___handshakeMessages_31; }
	inline TlsStream_t1700644566 ** get_address_of_handshakeMessages_31() { return &___handshakeMessages_31; }
	inline void set_handshakeMessages_31(TlsStream_t1700644566 * value)
	{
		___handshakeMessages_31 = value;
		Il2CppCodeGenWriteBarrier((&___handshakeMessages_31), value);
	}

	inline static int32_t get_offset_of_random_32() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___random_32)); }
	inline RandomNumberGenerator_t2194148873 * get_random_32() const { return ___random_32; }
	inline RandomNumberGenerator_t2194148873 ** get_address_of_random_32() { return &___random_32; }
	inline void set_random_32(RandomNumberGenerator_t2194148873 * value)
	{
		___random_32 = value;
		Il2CppCodeGenWriteBarrier((&___random_32), value);
	}

	inline static int32_t get_offset_of_recordProtocol_33() { return static_cast<int32_t>(offsetof(Context_t3052937665, ___recordProtocol_33)); }
	inline RecordProtocol_t2436280827 * get_recordProtocol_33() const { return ___recordProtocol_33; }
	inline RecordProtocol_t2436280827 ** get_address_of_recordProtocol_33() { return &___recordProtocol_33; }
	inline void set_recordProtocol_33(RecordProtocol_t2436280827 * value)
	{
		___recordProtocol_33 = value;
		Il2CppCodeGenWriteBarrier((&___recordProtocol_33), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXT_T3052937665_H
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
#ifndef SYMMETRICALGORITHM_T2715187709_H
#define SYMMETRICALGORITHM_T2715187709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t2715187709  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t2896786162* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t2896786162* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t2824063359* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t2824063359* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2715187709, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2715187709, ___IVValue_1)); }
	inline ByteU5BU5D_t2896786162* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t2896786162** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t2896786162* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2715187709, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2715187709, ___KeyValue_3)); }
	inline ByteU5BU5D_t2896786162* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t2896786162** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t2896786162* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2715187709, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t2824063359* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t2824063359** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t2824063359* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2715187709, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t2824063359* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t2824063359** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t2824063359* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2715187709, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2715187709, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2715187709, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2715187709, ___m_disposed_9)); }
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
#endif // SYMMETRICALGORITHM_T2715187709_H
#ifndef X509CHAIN_T2367535042_H
#define X509CHAIN_T2367535042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Chain
struct  X509Chain_t2367535042  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::roots
	X509CertificateCollection_t3350127351 * ___roots_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::certs
	X509CertificateCollection_t3350127351 * ___certs_1;
	// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::_root
	X509Certificate_t2519639597 * ____root_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::_chain
	X509CertificateCollection_t3350127351 * ____chain_3;
	// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::_status
	int32_t ____status_4;

public:
	inline static int32_t get_offset_of_roots_0() { return static_cast<int32_t>(offsetof(X509Chain_t2367535042, ___roots_0)); }
	inline X509CertificateCollection_t3350127351 * get_roots_0() const { return ___roots_0; }
	inline X509CertificateCollection_t3350127351 ** get_address_of_roots_0() { return &___roots_0; }
	inline void set_roots_0(X509CertificateCollection_t3350127351 * value)
	{
		___roots_0 = value;
		Il2CppCodeGenWriteBarrier((&___roots_0), value);
	}

	inline static int32_t get_offset_of_certs_1() { return static_cast<int32_t>(offsetof(X509Chain_t2367535042, ___certs_1)); }
	inline X509CertificateCollection_t3350127351 * get_certs_1() const { return ___certs_1; }
	inline X509CertificateCollection_t3350127351 ** get_address_of_certs_1() { return &___certs_1; }
	inline void set_certs_1(X509CertificateCollection_t3350127351 * value)
	{
		___certs_1 = value;
		Il2CppCodeGenWriteBarrier((&___certs_1), value);
	}

	inline static int32_t get_offset_of__root_2() { return static_cast<int32_t>(offsetof(X509Chain_t2367535042, ____root_2)); }
	inline X509Certificate_t2519639597 * get__root_2() const { return ____root_2; }
	inline X509Certificate_t2519639597 ** get_address_of__root_2() { return &____root_2; }
	inline void set__root_2(X509Certificate_t2519639597 * value)
	{
		____root_2 = value;
		Il2CppCodeGenWriteBarrier((&____root_2), value);
	}

	inline static int32_t get_offset_of__chain_3() { return static_cast<int32_t>(offsetof(X509Chain_t2367535042, ____chain_3)); }
	inline X509CertificateCollection_t3350127351 * get__chain_3() const { return ____chain_3; }
	inline X509CertificateCollection_t3350127351 ** get_address_of__chain_3() { return &____chain_3; }
	inline void set__chain_3(X509CertificateCollection_t3350127351 * value)
	{
		____chain_3 = value;
		Il2CppCodeGenWriteBarrier((&____chain_3), value);
	}

	inline static int32_t get_offset_of__status_4() { return static_cast<int32_t>(offsetof(X509Chain_t2367535042, ____status_4)); }
	inline int32_t get__status_4() const { return ____status_4; }
	inline int32_t* get_address_of__status_4() { return &____status_4; }
	inline void set__status_4(int32_t value)
	{
		____status_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAIN_T2367535042_H
#ifndef KEYGENERATEDEVENTHANDLER_T1721427477_H
#define KEYGENERATEDEVENTHANDLER_T1721427477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct  KeyGeneratedEventHandler_t1721427477  : public MulticastDelegate_t3965931391
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYGENERATEDEVENTHANDLER_T1721427477_H
#ifndef RC4_T1429304582_H
#define RC4_T1429304582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RC4
struct  RC4_t1429304582  : public SymmetricAlgorithm_t2715187709
{
public:

public:
};

struct RC4_t1429304582_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalBlockSizes
	KeySizesU5BU5D_t2824063359* ___s_legalBlockSizes_10;
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalKeySizes
	KeySizesU5BU5D_t2824063359* ___s_legalKeySizes_11;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_10() { return static_cast<int32_t>(offsetof(RC4_t1429304582_StaticFields, ___s_legalBlockSizes_10)); }
	inline KeySizesU5BU5D_t2824063359* get_s_legalBlockSizes_10() const { return ___s_legalBlockSizes_10; }
	inline KeySizesU5BU5D_t2824063359** get_address_of_s_legalBlockSizes_10() { return &___s_legalBlockSizes_10; }
	inline void set_s_legalBlockSizes_10(KeySizesU5BU5D_t2824063359* value)
	{
		___s_legalBlockSizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_10), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_11() { return static_cast<int32_t>(offsetof(RC4_t1429304582_StaticFields, ___s_legalKeySizes_11)); }
	inline KeySizesU5BU5D_t2824063359* get_s_legalKeySizes_11() const { return ___s_legalKeySizes_11; }
	inline KeySizesU5BU5D_t2824063359** get_address_of_s_legalKeySizes_11() { return &___s_legalKeySizes_11; }
	inline void set_s_legalKeySizes_11(KeySizesU5BU5D_t2824063359* value)
	{
		___s_legalKeySizes_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC4_T1429304582_H
#ifndef CLIENTSESSIONINFO_T4230569266_H
#define CLIENTSESSIONINFO_T4230569266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ClientSessionInfo
struct  ClientSessionInfo_t4230569266  : public RuntimeObject
{
public:
	// System.Boolean Mono.Security.Protocol.Tls.ClientSessionInfo::disposed
	bool ___disposed_2;
	// System.DateTime Mono.Security.Protocol.Tls.ClientSessionInfo::validuntil
	DateTime_t547944966  ___validuntil_3;
	// System.String Mono.Security.Protocol.Tls.ClientSessionInfo::host
	String_t* ___host_4;
	// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionInfo::sid
	ByteU5BU5D_t2896786162* ___sid_5;
	// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionInfo::masterSecret
	ByteU5BU5D_t2896786162* ___masterSecret_6;

public:
	inline static int32_t get_offset_of_disposed_2() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t4230569266, ___disposed_2)); }
	inline bool get_disposed_2() const { return ___disposed_2; }
	inline bool* get_address_of_disposed_2() { return &___disposed_2; }
	inline void set_disposed_2(bool value)
	{
		___disposed_2 = value;
	}

	inline static int32_t get_offset_of_validuntil_3() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t4230569266, ___validuntil_3)); }
	inline DateTime_t547944966  get_validuntil_3() const { return ___validuntil_3; }
	inline DateTime_t547944966 * get_address_of_validuntil_3() { return &___validuntil_3; }
	inline void set_validuntil_3(DateTime_t547944966  value)
	{
		___validuntil_3 = value;
	}

	inline static int32_t get_offset_of_host_4() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t4230569266, ___host_4)); }
	inline String_t* get_host_4() const { return ___host_4; }
	inline String_t** get_address_of_host_4() { return &___host_4; }
	inline void set_host_4(String_t* value)
	{
		___host_4 = value;
		Il2CppCodeGenWriteBarrier((&___host_4), value);
	}

	inline static int32_t get_offset_of_sid_5() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t4230569266, ___sid_5)); }
	inline ByteU5BU5D_t2896786162* get_sid_5() const { return ___sid_5; }
	inline ByteU5BU5D_t2896786162** get_address_of_sid_5() { return &___sid_5; }
	inline void set_sid_5(ByteU5BU5D_t2896786162* value)
	{
		___sid_5 = value;
		Il2CppCodeGenWriteBarrier((&___sid_5), value);
	}

	inline static int32_t get_offset_of_masterSecret_6() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t4230569266, ___masterSecret_6)); }
	inline ByteU5BU5D_t2896786162* get_masterSecret_6() const { return ___masterSecret_6; }
	inline ByteU5BU5D_t2896786162** get_address_of_masterSecret_6() { return &___masterSecret_6; }
	inline void set_masterSecret_6(ByteU5BU5D_t2896786162* value)
	{
		___masterSecret_6 = value;
		Il2CppCodeGenWriteBarrier((&___masterSecret_6), value);
	}
};

struct ClientSessionInfo_t4230569266_StaticFields
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.ClientSessionInfo::ValidityInterval
	int32_t ___ValidityInterval_1;

public:
	inline static int32_t get_offset_of_ValidityInterval_1() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t4230569266_StaticFields, ___ValidityInterval_1)); }
	inline int32_t get_ValidityInterval_1() const { return ___ValidityInterval_1; }
	inline int32_t* get_address_of_ValidityInterval_1() { return &___ValidityInterval_1; }
	inline void set_ValidityInterval_1(int32_t value)
	{
		___ValidityInterval_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTSESSIONINFO_T4230569266_H
#ifndef CLIENTCONTEXT_T2303782598_H
#define CLIENTCONTEXT_T2303782598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ClientContext
struct  ClientContext_t2303782598  : public Context_t3052937665
{
public:
	// Mono.Security.Protocol.Tls.SslClientStream Mono.Security.Protocol.Tls.ClientContext::sslStream
	SslClientStream_t849171934 * ___sslStream_34;
	// System.Int16 Mono.Security.Protocol.Tls.ClientContext::clientHelloProtocol
	int16_t ___clientHelloProtocol_35;

public:
	inline static int32_t get_offset_of_sslStream_34() { return static_cast<int32_t>(offsetof(ClientContext_t2303782598, ___sslStream_34)); }
	inline SslClientStream_t849171934 * get_sslStream_34() const { return ___sslStream_34; }
	inline SslClientStream_t849171934 ** get_address_of_sslStream_34() { return &___sslStream_34; }
	inline void set_sslStream_34(SslClientStream_t849171934 * value)
	{
		___sslStream_34 = value;
		Il2CppCodeGenWriteBarrier((&___sslStream_34), value);
	}

	inline static int32_t get_offset_of_clientHelloProtocol_35() { return static_cast<int32_t>(offsetof(ClientContext_t2303782598, ___clientHelloProtocol_35)); }
	inline int16_t get_clientHelloProtocol_35() const { return ___clientHelloProtocol_35; }
	inline int16_t* get_address_of_clientHelloProtocol_35() { return &___clientHelloProtocol_35; }
	inline void set_clientHelloProtocol_35(int16_t value)
	{
		___clientHelloProtocol_35 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTCONTEXT_T2303782598_H
#ifndef X509CERTIFICATE_T2519639597_H
#define X509CERTIFICATE_T2519639597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Certificate
struct  X509Certificate_t2519639597  : public RuntimeObject
{
public:
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_t3076133810 * ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_t2896786162* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_t547944966  ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_t547944966  ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_t3076133810 * ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_t2896786162* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_t3076133810 * ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_t2896786162* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_t2896786162* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_t2896786162* ___m_signaturealgoparams_13;
	// System.Byte[] Mono.Security.X509.X509Certificate::certhash
	ByteU5BU5D_t2896786162* ___certhash_14;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_t3446211033 * ____rsa_15;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_t3302464558 * ____dsa_16;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_17;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_t2896786162* ___serialnumber_18;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_t2896786162* ___issuerUniqueID_19;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_t2896786162* ___subjectUniqueID_20;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t1986057146 * ___extensions_21;

public:
	inline static int32_t get_offset_of_decoder_0() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597, ___decoder_0)); }
	inline ASN1_t3076133810 * get_decoder_0() const { return ___decoder_0; }
	inline ASN1_t3076133810 ** get_address_of_decoder_0() { return &___decoder_0; }
	inline void set_decoder_0(ASN1_t3076133810 * value)
	{
		___decoder_0 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_0), value);
	}

	inline static int32_t get_offset_of_m_encodedcert_1() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597, ___m_encodedcert_1)); }
	inline ByteU5BU5D_t2896786162* get_m_encodedcert_1() const { return ___m_encodedcert_1; }
	inline ByteU5BU5D_t2896786162** get_address_of_m_encodedcert_1() { return &___m_encodedcert_1; }
	inline void set_m_encodedcert_1(ByteU5BU5D_t2896786162* value)
	{
		___m_encodedcert_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_encodedcert_1), value);
	}

	inline static int32_t get_offset_of_m_from_2() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597, ___m_from_2)); }
	inline DateTime_t547944966  get_m_from_2() const { return ___m_from_2; }
	inline DateTime_t547944966 * get_address_of_m_from_2() { return &___m_from_2; }
	inline void set_m_from_2(DateTime_t547944966  value)
	{
		___m_from_2 = value;
	}

	inline static int32_t get_offset_of_m_until_3() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597, ___m_until_3)); }
	inline DateTime_t547944966  get_m_until_3() const { return ___m_until_3; }
	inline DateTime_t547944966 * get_address_of_m_until_3() { return &___m_until_3; }
	inline void set_m_until_3(DateTime_t547944966  value)
	{
		___m_until_3 = value;
	}

	inline static int32_t get_offset_of_issuer_4() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597, ___issuer_4)); }
	inline ASN1_t3076133810 * get_issuer_4() const { return ___issuer_4; }
	inline ASN1_t3076133810 ** get_address_of_issuer_4() { return &___issuer_4; }
	inline void set_issuer_4(ASN1_t3076133810 * value)
	{
		___issuer_4 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_4), value);
	}

	inline static int32_t get_offset_of_m_issuername_5() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597, ___m_issuername_5)); }
	inline String_t* get_m_issuername_5() const { return ___m_issuername_5; }
	inline String_t** get_address_of_m_issuername_5() { return &___m_issuername_5; }
	inline void set_m_issuername_5(String_t* value)
	{
		___m_issuername_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_issuername_5), value);
	}

	inline static int32_t get_offset_of_m_keyalgo_6() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597, ___m_keyalgo_6)); }
	inline String_t* get_m_keyalgo_6() const { return ___m_keyalgo_6; }
	inline String_t** get_address_of_m_keyalgo_6() { return &___m_keyalgo_6; }
	inline void set_m_keyalgo_6(String_t* value)
	{
		___m_keyalgo_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgo_6), value);
	}

	inline static int32_t get_offset_of_m_keyalgoparams_7() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597, ___m_keyalgoparams_7)); }
	inline ByteU5BU5D_t2896786162* get_m_keyalgoparams_7() const { return ___m_keyalgoparams_7; }
	inline ByteU5BU5D_t2896786162** get_address_of_m_keyalgoparams_7() { return &___m_keyalgoparams_7; }
	inline void set_m_keyalgoparams_7(ByteU5BU5D_t2896786162* value)
	{
		___m_keyalgoparams_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgoparams_7), value);
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597, ___subject_8)); }
	inline ASN1_t3076133810 * get_subject_8() const { return ___subject_8; }
	inline ASN1_t3076133810 ** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(ASN1_t3076133810 * value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((&___subject_8), value);
	}

	inline static int32_t get_offset_of_m_subject_9() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597, ___m_subject_9)); }
	inline String_t* get_m_subject_9() const { return ___m_subject_9; }
	inline String_t** get_address_of_m_subject_9() { return &___m_subject_9; }
	inline void set_m_subject_9(String_t* value)
	{
		___m_subject_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_subject_9), value);
	}

	inline static int32_t get_offset_of_m_publickey_10() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597, ___m_publickey_10)); }
	inline ByteU5BU5D_t2896786162* get_m_publickey_10() const { return ___m_publickey_10; }
	inline ByteU5BU5D_t2896786162** get_address_of_m_publickey_10() { return &___m_publickey_10; }
	inline void set_m_publickey_10(ByteU5BU5D_t2896786162* value)
	{
		___m_publickey_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_publickey_10), value);
	}

	inline static int32_t get_offset_of_signature_11() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597, ___signature_11)); }
	inline ByteU5BU5D_t2896786162* get_signature_11() const { return ___signature_11; }
	inline ByteU5BU5D_t2896786162** get_address_of_signature_11() { return &___signature_11; }
	inline void set_signature_11(ByteU5BU5D_t2896786162* value)
	{
		___signature_11 = value;
		Il2CppCodeGenWriteBarrier((&___signature_11), value);
	}

	inline static int32_t get_offset_of_m_signaturealgo_12() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597, ___m_signaturealgo_12)); }
	inline String_t* get_m_signaturealgo_12() const { return ___m_signaturealgo_12; }
	inline String_t** get_address_of_m_signaturealgo_12() { return &___m_signaturealgo_12; }
	inline void set_m_signaturealgo_12(String_t* value)
	{
		___m_signaturealgo_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgo_12), value);
	}

	inline static int32_t get_offset_of_m_signaturealgoparams_13() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597, ___m_signaturealgoparams_13)); }
	inline ByteU5BU5D_t2896786162* get_m_signaturealgoparams_13() const { return ___m_signaturealgoparams_13; }
	inline ByteU5BU5D_t2896786162** get_address_of_m_signaturealgoparams_13() { return &___m_signaturealgoparams_13; }
	inline void set_m_signaturealgoparams_13(ByteU5BU5D_t2896786162* value)
	{
		___m_signaturealgoparams_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgoparams_13), value);
	}

	inline static int32_t get_offset_of_certhash_14() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597, ___certhash_14)); }
	inline ByteU5BU5D_t2896786162* get_certhash_14() const { return ___certhash_14; }
	inline ByteU5BU5D_t2896786162** get_address_of_certhash_14() { return &___certhash_14; }
	inline void set_certhash_14(ByteU5BU5D_t2896786162* value)
	{
		___certhash_14 = value;
		Il2CppCodeGenWriteBarrier((&___certhash_14), value);
	}

	inline static int32_t get_offset_of__rsa_15() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597, ____rsa_15)); }
	inline RSA_t3446211033 * get__rsa_15() const { return ____rsa_15; }
	inline RSA_t3446211033 ** get_address_of__rsa_15() { return &____rsa_15; }
	inline void set__rsa_15(RSA_t3446211033 * value)
	{
		____rsa_15 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_15), value);
	}

	inline static int32_t get_offset_of__dsa_16() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597, ____dsa_16)); }
	inline DSA_t3302464558 * get__dsa_16() const { return ____dsa_16; }
	inline DSA_t3302464558 ** get_address_of__dsa_16() { return &____dsa_16; }
	inline void set__dsa_16(DSA_t3302464558 * value)
	{
		____dsa_16 = value;
		Il2CppCodeGenWriteBarrier((&____dsa_16), value);
	}

	inline static int32_t get_offset_of_version_17() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597, ___version_17)); }
	inline int32_t get_version_17() const { return ___version_17; }
	inline int32_t* get_address_of_version_17() { return &___version_17; }
	inline void set_version_17(int32_t value)
	{
		___version_17 = value;
	}

	inline static int32_t get_offset_of_serialnumber_18() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597, ___serialnumber_18)); }
	inline ByteU5BU5D_t2896786162* get_serialnumber_18() const { return ___serialnumber_18; }
	inline ByteU5BU5D_t2896786162** get_address_of_serialnumber_18() { return &___serialnumber_18; }
	inline void set_serialnumber_18(ByteU5BU5D_t2896786162* value)
	{
		___serialnumber_18 = value;
		Il2CppCodeGenWriteBarrier((&___serialnumber_18), value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_19() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597, ___issuerUniqueID_19)); }
	inline ByteU5BU5D_t2896786162* get_issuerUniqueID_19() const { return ___issuerUniqueID_19; }
	inline ByteU5BU5D_t2896786162** get_address_of_issuerUniqueID_19() { return &___issuerUniqueID_19; }
	inline void set_issuerUniqueID_19(ByteU5BU5D_t2896786162* value)
	{
		___issuerUniqueID_19 = value;
		Il2CppCodeGenWriteBarrier((&___issuerUniqueID_19), value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_20() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597, ___subjectUniqueID_20)); }
	inline ByteU5BU5D_t2896786162* get_subjectUniqueID_20() const { return ___subjectUniqueID_20; }
	inline ByteU5BU5D_t2896786162** get_address_of_subjectUniqueID_20() { return &___subjectUniqueID_20; }
	inline void set_subjectUniqueID_20(ByteU5BU5D_t2896786162* value)
	{
		___subjectUniqueID_20 = value;
		Il2CppCodeGenWriteBarrier((&___subjectUniqueID_20), value);
	}

	inline static int32_t get_offset_of_extensions_21() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597, ___extensions_21)); }
	inline X509ExtensionCollection_t1986057146 * get_extensions_21() const { return ___extensions_21; }
	inline X509ExtensionCollection_t1986057146 ** get_address_of_extensions_21() { return &___extensions_21; }
	inline void set_extensions_21(X509ExtensionCollection_t1986057146 * value)
	{
		___extensions_21 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_21), value);
	}
};

struct X509Certificate_t2519639597_StaticFields
{
public:
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$mapF
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24mapF_23;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map10
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24map10_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map11
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24map11_25;

public:
	inline static int32_t get_offset_of_encoding_error_22() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597_StaticFields, ___encoding_error_22)); }
	inline String_t* get_encoding_error_22() const { return ___encoding_error_22; }
	inline String_t** get_address_of_encoding_error_22() { return &___encoding_error_22; }
	inline void set_encoding_error_22(String_t* value)
	{
		___encoding_error_22 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_error_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapF_23() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597_StaticFields, ___U3CU3Ef__switchU24mapF_23)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24mapF_23() const { return ___U3CU3Ef__switchU24mapF_23; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24mapF_23() { return &___U3CU3Ef__switchU24mapF_23; }
	inline void set_U3CU3Ef__switchU24mapF_23(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24mapF_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapF_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map10_24() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597_StaticFields, ___U3CU3Ef__switchU24map10_24)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24map10_24() const { return ___U3CU3Ef__switchU24map10_24; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24map10_24() { return &___U3CU3Ef__switchU24map10_24; }
	inline void set_U3CU3Ef__switchU24map10_24(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24map10_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map10_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map11_25() { return static_cast<int32_t>(offsetof(X509Certificate_t2519639597_StaticFields, ___U3CU3Ef__switchU24map11_25)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24map11_25() const { return ___U3CU3Ef__switchU24map11_25; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24map11_25() { return &___U3CU3Ef__switchU24map11_25; }
	inline void set_U3CU3Ef__switchU24map11_25(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24map11_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map11_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T2519639597_H
#ifndef X509CERTIFICATEBUILDER_T2708928491_H
#define X509CERTIFICATEBUILDER_T2708928491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateBuilder
struct  X509CertificateBuilder_t2708928491  : public X509Builder_t3328382317
{
public:
	// System.Byte Mono.Security.X509.X509CertificateBuilder::version
	uint8_t ___version_3;
	// System.Byte[] Mono.Security.X509.X509CertificateBuilder::sn
	ByteU5BU5D_t2896786162* ___sn_4;
	// System.String Mono.Security.X509.X509CertificateBuilder::issuer
	String_t* ___issuer_5;
	// System.DateTime Mono.Security.X509.X509CertificateBuilder::notBefore
	DateTime_t547944966  ___notBefore_6;
	// System.DateTime Mono.Security.X509.X509CertificateBuilder::notAfter
	DateTime_t547944966  ___notAfter_7;
	// System.String Mono.Security.X509.X509CertificateBuilder::subject
	String_t* ___subject_8;
	// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.X509.X509CertificateBuilder::aa
	AsymmetricAlgorithm_t3351604210 * ___aa_9;
	// System.Byte[] Mono.Security.X509.X509CertificateBuilder::issuerUniqueID
	ByteU5BU5D_t2896786162* ___issuerUniqueID_10;
	// System.Byte[] Mono.Security.X509.X509CertificateBuilder::subjectUniqueID
	ByteU5BU5D_t2896786162* ___subjectUniqueID_11;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509CertificateBuilder::extensions
	X509ExtensionCollection_t1986057146 * ___extensions_12;

public:
	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t2708928491, ___version_3)); }
	inline uint8_t get_version_3() const { return ___version_3; }
	inline uint8_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(uint8_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_sn_4() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t2708928491, ___sn_4)); }
	inline ByteU5BU5D_t2896786162* get_sn_4() const { return ___sn_4; }
	inline ByteU5BU5D_t2896786162** get_address_of_sn_4() { return &___sn_4; }
	inline void set_sn_4(ByteU5BU5D_t2896786162* value)
	{
		___sn_4 = value;
		Il2CppCodeGenWriteBarrier((&___sn_4), value);
	}

	inline static int32_t get_offset_of_issuer_5() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t2708928491, ___issuer_5)); }
	inline String_t* get_issuer_5() const { return ___issuer_5; }
	inline String_t** get_address_of_issuer_5() { return &___issuer_5; }
	inline void set_issuer_5(String_t* value)
	{
		___issuer_5 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_5), value);
	}

	inline static int32_t get_offset_of_notBefore_6() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t2708928491, ___notBefore_6)); }
	inline DateTime_t547944966  get_notBefore_6() const { return ___notBefore_6; }
	inline DateTime_t547944966 * get_address_of_notBefore_6() { return &___notBefore_6; }
	inline void set_notBefore_6(DateTime_t547944966  value)
	{
		___notBefore_6 = value;
	}

	inline static int32_t get_offset_of_notAfter_7() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t2708928491, ___notAfter_7)); }
	inline DateTime_t547944966  get_notAfter_7() const { return ___notAfter_7; }
	inline DateTime_t547944966 * get_address_of_notAfter_7() { return &___notAfter_7; }
	inline void set_notAfter_7(DateTime_t547944966  value)
	{
		___notAfter_7 = value;
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t2708928491, ___subject_8)); }
	inline String_t* get_subject_8() const { return ___subject_8; }
	inline String_t** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(String_t* value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((&___subject_8), value);
	}

	inline static int32_t get_offset_of_aa_9() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t2708928491, ___aa_9)); }
	inline AsymmetricAlgorithm_t3351604210 * get_aa_9() const { return ___aa_9; }
	inline AsymmetricAlgorithm_t3351604210 ** get_address_of_aa_9() { return &___aa_9; }
	inline void set_aa_9(AsymmetricAlgorithm_t3351604210 * value)
	{
		___aa_9 = value;
		Il2CppCodeGenWriteBarrier((&___aa_9), value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_10() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t2708928491, ___issuerUniqueID_10)); }
	inline ByteU5BU5D_t2896786162* get_issuerUniqueID_10() const { return ___issuerUniqueID_10; }
	inline ByteU5BU5D_t2896786162** get_address_of_issuerUniqueID_10() { return &___issuerUniqueID_10; }
	inline void set_issuerUniqueID_10(ByteU5BU5D_t2896786162* value)
	{
		___issuerUniqueID_10 = value;
		Il2CppCodeGenWriteBarrier((&___issuerUniqueID_10), value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_11() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t2708928491, ___subjectUniqueID_11)); }
	inline ByteU5BU5D_t2896786162* get_subjectUniqueID_11() const { return ___subjectUniqueID_11; }
	inline ByteU5BU5D_t2896786162** get_address_of_subjectUniqueID_11() { return &___subjectUniqueID_11; }
	inline void set_subjectUniqueID_11(ByteU5BU5D_t2896786162* value)
	{
		___subjectUniqueID_11 = value;
		Il2CppCodeGenWriteBarrier((&___subjectUniqueID_11), value);
	}

	inline static int32_t get_offset_of_extensions_12() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t2708928491, ___extensions_12)); }
	inline X509ExtensionCollection_t1986057146 * get_extensions_12() const { return ___extensions_12; }
	inline X509ExtensionCollection_t1986057146 ** get_address_of_extensions_12() { return &___extensions_12; }
	inline void set_extensions_12(X509ExtensionCollection_t1986057146 * value)
	{
		___extensions_12 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEBUILDER_T2708928491_H
#ifndef HTTPSCLIENTSTREAM_T2505106011_H
#define HTTPSCLIENTSTREAM_T2505106011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.HttpsClientStream
struct  HttpsClientStream_t2505106011  : public SslClientStream_t849171934
{
public:
	// System.Net.HttpWebRequest Mono.Security.Protocol.Tls.HttpsClientStream::_request
	HttpWebRequest_t360432576 * ____request_20;
	// System.Int32 Mono.Security.Protocol.Tls.HttpsClientStream::_status
	int32_t ____status_21;

public:
	inline static int32_t get_offset_of__request_20() { return static_cast<int32_t>(offsetof(HttpsClientStream_t2505106011, ____request_20)); }
	inline HttpWebRequest_t360432576 * get__request_20() const { return ____request_20; }
	inline HttpWebRequest_t360432576 ** get_address_of__request_20() { return &____request_20; }
	inline void set__request_20(HttpWebRequest_t360432576 * value)
	{
		____request_20 = value;
		Il2CppCodeGenWriteBarrier((&____request_20), value);
	}

	inline static int32_t get_offset_of__status_21() { return static_cast<int32_t>(offsetof(HttpsClientStream_t2505106011, ____status_21)); }
	inline int32_t get__status_21() const { return ____status_21; }
	inline int32_t* get_address_of__status_21() { return &____status_21; }
	inline void set__status_21(int32_t value)
	{
		____status_21 = value;
	}
};

struct HttpsClientStream_t2505106011_StaticFields
{
public:
	// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.HttpsClientStream::<>f__am$cache2
	CertificateSelectionCallback_t3259247178 * ___U3CU3Ef__amU24cache2_22;
	// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.HttpsClientStream::<>f__am$cache3
	PrivateKeySelectionCallback_t2720362418 * ___U3CU3Ef__amU24cache3_23;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_22() { return static_cast<int32_t>(offsetof(HttpsClientStream_t2505106011_StaticFields, ___U3CU3Ef__amU24cache2_22)); }
	inline CertificateSelectionCallback_t3259247178 * get_U3CU3Ef__amU24cache2_22() const { return ___U3CU3Ef__amU24cache2_22; }
	inline CertificateSelectionCallback_t3259247178 ** get_address_of_U3CU3Ef__amU24cache2_22() { return &___U3CU3Ef__amU24cache2_22; }
	inline void set_U3CU3Ef__amU24cache2_22(CertificateSelectionCallback_t3259247178 * value)
	{
		___U3CU3Ef__amU24cache2_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_23() { return static_cast<int32_t>(offsetof(HttpsClientStream_t2505106011_StaticFields, ___U3CU3Ef__amU24cache3_23)); }
	inline PrivateKeySelectionCallback_t2720362418 * get_U3CU3Ef__amU24cache3_23() const { return ___U3CU3Ef__amU24cache3_23; }
	inline PrivateKeySelectionCallback_t2720362418 ** get_address_of_U3CU3Ef__amU24cache3_23() { return &___U3CU3Ef__amU24cache3_23; }
	inline void set_U3CU3Ef__amU24cache3_23(PrivateKeySelectionCallback_t2720362418 * value)
	{
		___U3CU3Ef__amU24cache3_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPSCLIENTSTREAM_T2505106011_H
#ifndef X509CRLENTRY_T1722970593_H
#define X509CRLENTRY_T1722970593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Crl/X509CrlEntry
struct  X509CrlEntry_t1722970593  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::sn
	ByteU5BU5D_t2896786162* ___sn_0;
	// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::revocationDate
	DateTime_t547944966  ___revocationDate_1;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::extensions
	X509ExtensionCollection_t1986057146 * ___extensions_2;

public:
	inline static int32_t get_offset_of_sn_0() { return static_cast<int32_t>(offsetof(X509CrlEntry_t1722970593, ___sn_0)); }
	inline ByteU5BU5D_t2896786162* get_sn_0() const { return ___sn_0; }
	inline ByteU5BU5D_t2896786162** get_address_of_sn_0() { return &___sn_0; }
	inline void set_sn_0(ByteU5BU5D_t2896786162* value)
	{
		___sn_0 = value;
		Il2CppCodeGenWriteBarrier((&___sn_0), value);
	}

	inline static int32_t get_offset_of_revocationDate_1() { return static_cast<int32_t>(offsetof(X509CrlEntry_t1722970593, ___revocationDate_1)); }
	inline DateTime_t547944966  get_revocationDate_1() const { return ___revocationDate_1; }
	inline DateTime_t547944966 * get_address_of_revocationDate_1() { return &___revocationDate_1; }
	inline void set_revocationDate_1(DateTime_t547944966  value)
	{
		___revocationDate_1 = value;
	}

	inline static int32_t get_offset_of_extensions_2() { return static_cast<int32_t>(offsetof(X509CrlEntry_t1722970593, ___extensions_2)); }
	inline X509ExtensionCollection_t1986057146 * get_extensions_2() const { return ___extensions_2; }
	inline X509ExtensionCollection_t1986057146 ** get_address_of_extensions_2() { return &___extensions_2; }
	inline void set_extensions_2(X509ExtensionCollection_t1986057146 * value)
	{
		___extensions_2 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CRLENTRY_T1722970593_H
#ifndef X509CRL_T229501803_H
#define X509CRL_T229501803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Crl
struct  X509Crl_t229501803  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Crl::issuer
	String_t* ___issuer_0;
	// System.Byte Mono.Security.X509.X509Crl::version
	uint8_t ___version_1;
	// System.DateTime Mono.Security.X509.X509Crl::thisUpdate
	DateTime_t547944966  ___thisUpdate_2;
	// System.DateTime Mono.Security.X509.X509Crl::nextUpdate
	DateTime_t547944966  ___nextUpdate_3;
	// System.Collections.ArrayList Mono.Security.X509.X509Crl::entries
	ArrayList_t844188058 * ___entries_4;
	// System.String Mono.Security.X509.X509Crl::signatureOID
	String_t* ___signatureOID_5;
	// System.Byte[] Mono.Security.X509.X509Crl::signature
	ByteU5BU5D_t2896786162* ___signature_6;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::extensions
	X509ExtensionCollection_t1986057146 * ___extensions_7;
	// System.Byte[] Mono.Security.X509.X509Crl::encoded
	ByteU5BU5D_t2896786162* ___encoded_8;
	// System.Byte[] Mono.Security.X509.X509Crl::hash_value
	ByteU5BU5D_t2896786162* ___hash_value_9;

public:
	inline static int32_t get_offset_of_issuer_0() { return static_cast<int32_t>(offsetof(X509Crl_t229501803, ___issuer_0)); }
	inline String_t* get_issuer_0() const { return ___issuer_0; }
	inline String_t** get_address_of_issuer_0() { return &___issuer_0; }
	inline void set_issuer_0(String_t* value)
	{
		___issuer_0 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(X509Crl_t229501803, ___version_1)); }
	inline uint8_t get_version_1() const { return ___version_1; }
	inline uint8_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(uint8_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_thisUpdate_2() { return static_cast<int32_t>(offsetof(X509Crl_t229501803, ___thisUpdate_2)); }
	inline DateTime_t547944966  get_thisUpdate_2() const { return ___thisUpdate_2; }
	inline DateTime_t547944966 * get_address_of_thisUpdate_2() { return &___thisUpdate_2; }
	inline void set_thisUpdate_2(DateTime_t547944966  value)
	{
		___thisUpdate_2 = value;
	}

	inline static int32_t get_offset_of_nextUpdate_3() { return static_cast<int32_t>(offsetof(X509Crl_t229501803, ___nextUpdate_3)); }
	inline DateTime_t547944966  get_nextUpdate_3() const { return ___nextUpdate_3; }
	inline DateTime_t547944966 * get_address_of_nextUpdate_3() { return &___nextUpdate_3; }
	inline void set_nextUpdate_3(DateTime_t547944966  value)
	{
		___nextUpdate_3 = value;
	}

	inline static int32_t get_offset_of_entries_4() { return static_cast<int32_t>(offsetof(X509Crl_t229501803, ___entries_4)); }
	inline ArrayList_t844188058 * get_entries_4() const { return ___entries_4; }
	inline ArrayList_t844188058 ** get_address_of_entries_4() { return &___entries_4; }
	inline void set_entries_4(ArrayList_t844188058 * value)
	{
		___entries_4 = value;
		Il2CppCodeGenWriteBarrier((&___entries_4), value);
	}

	inline static int32_t get_offset_of_signatureOID_5() { return static_cast<int32_t>(offsetof(X509Crl_t229501803, ___signatureOID_5)); }
	inline String_t* get_signatureOID_5() const { return ___signatureOID_5; }
	inline String_t** get_address_of_signatureOID_5() { return &___signatureOID_5; }
	inline void set_signatureOID_5(String_t* value)
	{
		___signatureOID_5 = value;
		Il2CppCodeGenWriteBarrier((&___signatureOID_5), value);
	}

	inline static int32_t get_offset_of_signature_6() { return static_cast<int32_t>(offsetof(X509Crl_t229501803, ___signature_6)); }
	inline ByteU5BU5D_t2896786162* get_signature_6() const { return ___signature_6; }
	inline ByteU5BU5D_t2896786162** get_address_of_signature_6() { return &___signature_6; }
	inline void set_signature_6(ByteU5BU5D_t2896786162* value)
	{
		___signature_6 = value;
		Il2CppCodeGenWriteBarrier((&___signature_6), value);
	}

	inline static int32_t get_offset_of_extensions_7() { return static_cast<int32_t>(offsetof(X509Crl_t229501803, ___extensions_7)); }
	inline X509ExtensionCollection_t1986057146 * get_extensions_7() const { return ___extensions_7; }
	inline X509ExtensionCollection_t1986057146 ** get_address_of_extensions_7() { return &___extensions_7; }
	inline void set_extensions_7(X509ExtensionCollection_t1986057146 * value)
	{
		___extensions_7 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_7), value);
	}

	inline static int32_t get_offset_of_encoded_8() { return static_cast<int32_t>(offsetof(X509Crl_t229501803, ___encoded_8)); }
	inline ByteU5BU5D_t2896786162* get_encoded_8() const { return ___encoded_8; }
	inline ByteU5BU5D_t2896786162** get_address_of_encoded_8() { return &___encoded_8; }
	inline void set_encoded_8(ByteU5BU5D_t2896786162* value)
	{
		___encoded_8 = value;
		Il2CppCodeGenWriteBarrier((&___encoded_8), value);
	}

	inline static int32_t get_offset_of_hash_value_9() { return static_cast<int32_t>(offsetof(X509Crl_t229501803, ___hash_value_9)); }
	inline ByteU5BU5D_t2896786162* get_hash_value_9() const { return ___hash_value_9; }
	inline ByteU5BU5D_t2896786162** get_address_of_hash_value_9() { return &___hash_value_9; }
	inline void set_hash_value_9(ByteU5BU5D_t2896786162* value)
	{
		___hash_value_9 = value;
		Il2CppCodeGenWriteBarrier((&___hash_value_9), value);
	}
};

struct X509Crl_t229501803_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Crl::<>f__switch$map12
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24map12_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Crl::<>f__switch$map13
	Dictionary_2_t3485169016 * ___U3CU3Ef__switchU24map13_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_10() { return static_cast<int32_t>(offsetof(X509Crl_t229501803_StaticFields, ___U3CU3Ef__switchU24map12_10)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24map12_10() const { return ___U3CU3Ef__switchU24map12_10; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24map12_10() { return &___U3CU3Ef__switchU24map12_10; }
	inline void set_U3CU3Ef__switchU24map12_10(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24map12_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_11() { return static_cast<int32_t>(offsetof(X509Crl_t229501803_StaticFields, ___U3CU3Ef__switchU24map13_11)); }
	inline Dictionary_2_t3485169016 * get_U3CU3Ef__switchU24map13_11() const { return ___U3CU3Ef__switchU24map13_11; }
	inline Dictionary_2_t3485169016 ** get_address_of_U3CU3Ef__switchU24map13_11() { return &___U3CU3Ef__switchU24map13_11; }
	inline void set_U3CU3Ef__switchU24map13_11(Dictionary_2_t3485169016 * value)
	{
		___U3CU3Ef__switchU24map13_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CRL_T229501803_H
#ifndef ARC4MANAGED_T2913691324_H
#define ARC4MANAGED_T2913691324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.ARC4Managed
struct  ARC4Managed_t2913691324  : public RC4_t1429304582
{
public:
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::key
	ByteU5BU5D_t2896786162* ___key_12;
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::state
	ByteU5BU5D_t2896786162* ___state_13;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::x
	uint8_t ___x_14;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::y
	uint8_t ___y_15;
	// System.Boolean Mono.Security.Cryptography.ARC4Managed::m_disposed
	bool ___m_disposed_16;

public:
	inline static int32_t get_offset_of_key_12() { return static_cast<int32_t>(offsetof(ARC4Managed_t2913691324, ___key_12)); }
	inline ByteU5BU5D_t2896786162* get_key_12() const { return ___key_12; }
	inline ByteU5BU5D_t2896786162** get_address_of_key_12() { return &___key_12; }
	inline void set_key_12(ByteU5BU5D_t2896786162* value)
	{
		___key_12 = value;
		Il2CppCodeGenWriteBarrier((&___key_12), value);
	}

	inline static int32_t get_offset_of_state_13() { return static_cast<int32_t>(offsetof(ARC4Managed_t2913691324, ___state_13)); }
	inline ByteU5BU5D_t2896786162* get_state_13() const { return ___state_13; }
	inline ByteU5BU5D_t2896786162** get_address_of_state_13() { return &___state_13; }
	inline void set_state_13(ByteU5BU5D_t2896786162* value)
	{
		___state_13 = value;
		Il2CppCodeGenWriteBarrier((&___state_13), value);
	}

	inline static int32_t get_offset_of_x_14() { return static_cast<int32_t>(offsetof(ARC4Managed_t2913691324, ___x_14)); }
	inline uint8_t get_x_14() const { return ___x_14; }
	inline uint8_t* get_address_of_x_14() { return &___x_14; }
	inline void set_x_14(uint8_t value)
	{
		___x_14 = value;
	}

	inline static int32_t get_offset_of_y_15() { return static_cast<int32_t>(offsetof(ARC4Managed_t2913691324, ___y_15)); }
	inline uint8_t get_y_15() const { return ___y_15; }
	inline uint8_t* get_address_of_y_15() { return &___y_15; }
	inline void set_y_15(uint8_t value)
	{
		___y_15 = value;
	}

	inline static int32_t get_offset_of_m_disposed_16() { return static_cast<int32_t>(offsetof(ARC4Managed_t2913691324, ___m_disposed_16)); }
	inline bool get_m_disposed_16() const { return ___m_disposed_16; }
	inline bool* get_address_of_m_disposed_16() { return &___m_disposed_16; }
	inline void set_m_disposed_16(bool value)
	{
		___m_disposed_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARC4MANAGED_T2913691324_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1000 = { sizeof (ASN1_t3076133810), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1000[3] = 
{
	ASN1_t3076133810::get_offset_of_m_nTag_0(),
	ASN1_t3076133810::get_offset_of_m_aValue_1(),
	ASN1_t3076133810::get_offset_of_elist_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1001 = { sizeof (ASN1Convert_t2257899623), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1002 = { sizeof (BitConverterLE_t2753887046), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1003 = { sizeof (PKCS7_t3722591256), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1004 = { sizeof (ContentInfo_t2630045085), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1004[2] = 
{
	ContentInfo_t2630045085::get_offset_of_contentType_0(),
	ContentInfo_t2630045085::get_offset_of_content_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1005 = { sizeof (EncryptedData_t731562437), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1005[4] = 
{
	EncryptedData_t731562437::get_offset_of__version_0(),
	EncryptedData_t731562437::get_offset_of__content_1(),
	EncryptedData_t731562437::get_offset_of__encryptionAlgorithm_2(),
	EncryptedData_t731562437::get_offset_of__encrypted_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1006 = { sizeof (PrivateKey_t89766747), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1006[4] = 
{
	PrivateKey_t89766747::get_offset_of_encrypted_0(),
	PrivateKey_t89766747::get_offset_of_rsa_1(),
	PrivateKey_t89766747::get_offset_of_weak_2(),
	PrivateKey_t89766747::get_offset_of_keyType_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1007 = { sizeof (ARC4Managed_t2913691324), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1007[5] = 
{
	ARC4Managed_t2913691324::get_offset_of_key_12(),
	ARC4Managed_t2913691324::get_offset_of_state_13(),
	ARC4Managed_t2913691324::get_offset_of_x_14(),
	ARC4Managed_t2913691324::get_offset_of_y_15(),
	ARC4Managed_t2913691324::get_offset_of_m_disposed_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1008 = { sizeof (CryptoConvert_t4095853900), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1009 = { sizeof (KeyBuilder_t4133786034), -1, sizeof(KeyBuilder_t4133786034_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1009[1] = 
{
	KeyBuilder_t4133786034_StaticFields::get_offset_of_rng_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1010 = { sizeof (MD2_t1461088812), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1011 = { sizeof (MD2Managed_t118478446), -1, sizeof(MD2Managed_t118478446_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1011[6] = 
{
	MD2Managed_t118478446::get_offset_of_state_4(),
	MD2Managed_t118478446::get_offset_of_checksum_5(),
	MD2Managed_t118478446::get_offset_of_buffer_6(),
	MD2Managed_t118478446::get_offset_of_count_7(),
	MD2Managed_t118478446::get_offset_of_x_8(),
	MD2Managed_t118478446_StaticFields::get_offset_of_PI_SUBST_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1012 = { sizeof (MD4_t4179650026), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1013 = { sizeof (MD4Managed_t2263605487), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1013[5] = 
{
	MD4Managed_t2263605487::get_offset_of_state_4(),
	MD4Managed_t2263605487::get_offset_of_buffer_5(),
	MD4Managed_t2263605487::get_offset_of_count_6(),
	MD4Managed_t2263605487::get_offset_of_x_7(),
	MD4Managed_t2263605487::get_offset_of_digest_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1014 = { sizeof (PKCS1_t2385744855), -1, sizeof(PKCS1_t2385744855_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1014[4] = 
{
	PKCS1_t2385744855_StaticFields::get_offset_of_emptySHA1_0(),
	PKCS1_t2385744855_StaticFields::get_offset_of_emptySHA256_1(),
	PKCS1_t2385744855_StaticFields::get_offset_of_emptySHA384_2(),
	PKCS1_t2385744855_StaticFields::get_offset_of_emptySHA512_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1015 = { sizeof (PKCS8_t3711986861), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1016 = { sizeof (PrivateKeyInfo_t2574271106), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1016[4] = 
{
	PrivateKeyInfo_t2574271106::get_offset_of__version_0(),
	PrivateKeyInfo_t2574271106::get_offset_of__algorithm_1(),
	PrivateKeyInfo_t2574271106::get_offset_of__key_2(),
	PrivateKeyInfo_t2574271106::get_offset_of__list_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1017 = { sizeof (EncryptedPrivateKeyInfo_t2547763484), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1017[4] = 
{
	EncryptedPrivateKeyInfo_t2547763484::get_offset_of__algorithm_0(),
	EncryptedPrivateKeyInfo_t2547763484::get_offset_of__salt_1(),
	EncryptedPrivateKeyInfo_t2547763484::get_offset_of__iterations_2(),
	EncryptedPrivateKeyInfo_t2547763484::get_offset_of__data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1018 = { sizeof (RC4_t1429304582), -1, sizeof(RC4_t1429304582_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1018[2] = 
{
	RC4_t1429304582_StaticFields::get_offset_of_s_legalBlockSizes_10(),
	RC4_t1429304582_StaticFields::get_offset_of_s_legalKeySizes_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1019 = { sizeof (RSAManaged_t3776782966), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1019[13] = 
{
	RSAManaged_t3776782966::get_offset_of_isCRTpossible_2(),
	RSAManaged_t3776782966::get_offset_of_keyBlinding_3(),
	RSAManaged_t3776782966::get_offset_of_keypairGenerated_4(),
	RSAManaged_t3776782966::get_offset_of_m_disposed_5(),
	RSAManaged_t3776782966::get_offset_of_d_6(),
	RSAManaged_t3776782966::get_offset_of_p_7(),
	RSAManaged_t3776782966::get_offset_of_q_8(),
	RSAManaged_t3776782966::get_offset_of_dp_9(),
	RSAManaged_t3776782966::get_offset_of_dq_10(),
	RSAManaged_t3776782966::get_offset_of_qInv_11(),
	RSAManaged_t3776782966::get_offset_of_n_12(),
	RSAManaged_t3776782966::get_offset_of_e_13(),
	RSAManaged_t3776782966::get_offset_of_KeyGenerated_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1020 = { sizeof (KeyGeneratedEventHandler_t1721427477), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1021 = { sizeof (PKCS5_t2334596146), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1021[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1022 = { sizeof (PKCS9_t538309545), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1022[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1023 = { sizeof (SafeBag_t2054482692), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1023[2] = 
{
	SafeBag_t2054482692::get_offset_of__bagOID_0(),
	SafeBag_t2054482692::get_offset_of__asn1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1024 = { sizeof (PKCS12_t2714915916), -1, sizeof(PKCS12_t2714915916_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1024[36] = 
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
	PKCS12_t2714915916_StaticFields::get_offset_of_recommendedIterationCount_16(),
	PKCS12_t2714915916::get_offset_of__password_17(),
	PKCS12_t2714915916::get_offset_of__keyBags_18(),
	PKCS12_t2714915916::get_offset_of__secretBags_19(),
	PKCS12_t2714915916::get_offset_of__certs_20(),
	PKCS12_t2714915916::get_offset_of__keyBagsChanged_21(),
	PKCS12_t2714915916::get_offset_of__secretBagsChanged_22(),
	PKCS12_t2714915916::get_offset_of__certsChanged_23(),
	PKCS12_t2714915916::get_offset_of__iterations_24(),
	PKCS12_t2714915916::get_offset_of__safeBags_25(),
	PKCS12_t2714915916::get_offset_of__rng_26(),
	PKCS12_t2714915916_StaticFields::get_offset_of_password_max_length_27(),
	PKCS12_t2714915916_StaticFields::get_offset_of_U3CU3Ef__switchU24map5_28(),
	PKCS12_t2714915916_StaticFields::get_offset_of_U3CU3Ef__switchU24map6_29(),
	PKCS12_t2714915916_StaticFields::get_offset_of_U3CU3Ef__switchU24map7_30(),
	PKCS12_t2714915916_StaticFields::get_offset_of_U3CU3Ef__switchU24map8_31(),
	PKCS12_t2714915916_StaticFields::get_offset_of_U3CU3Ef__switchU24map9_32(),
	PKCS12_t2714915916_StaticFields::get_offset_of_U3CU3Ef__switchU24mapA_33(),
	PKCS12_t2714915916_StaticFields::get_offset_of_U3CU3Ef__switchU24mapB_34(),
	PKCS12_t2714915916_StaticFields::get_offset_of_U3CU3Ef__switchU24mapC_35(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1025 = { sizeof (DeriveBytes_t1147558369), -1, sizeof(DeriveBytes_t1147558369_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1025[7] = 
{
	DeriveBytes_t1147558369_StaticFields::get_offset_of_keyDiversifier_0(),
	DeriveBytes_t1147558369_StaticFields::get_offset_of_ivDiversifier_1(),
	DeriveBytes_t1147558369_StaticFields::get_offset_of_macDiversifier_2(),
	DeriveBytes_t1147558369::get_offset_of__hashName_3(),
	DeriveBytes_t1147558369::get_offset_of__iterations_4(),
	DeriveBytes_t1147558369::get_offset_of__password_5(),
	DeriveBytes_t1147558369::get_offset_of__salt_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1026 = { sizeof (Purpose_t3716508019)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1026[4] = 
{
	Purpose_t3716508019::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1027 = { sizeof (X501_t3738592435), -1, sizeof(X501_t3738592435_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1027[16] = 
{
	X501_t3738592435_StaticFields::get_offset_of_countryName_0(),
	X501_t3738592435_StaticFields::get_offset_of_organizationName_1(),
	X501_t3738592435_StaticFields::get_offset_of_organizationalUnitName_2(),
	X501_t3738592435_StaticFields::get_offset_of_commonName_3(),
	X501_t3738592435_StaticFields::get_offset_of_localityName_4(),
	X501_t3738592435_StaticFields::get_offset_of_stateOrProvinceName_5(),
	X501_t3738592435_StaticFields::get_offset_of_streetAddress_6(),
	X501_t3738592435_StaticFields::get_offset_of_domainComponent_7(),
	X501_t3738592435_StaticFields::get_offset_of_userid_8(),
	X501_t3738592435_StaticFields::get_offset_of_email_9(),
	X501_t3738592435_StaticFields::get_offset_of_dnQualifier_10(),
	X501_t3738592435_StaticFields::get_offset_of_title_11(),
	X501_t3738592435_StaticFields::get_offset_of_surname_12(),
	X501_t3738592435_StaticFields::get_offset_of_givenName_13(),
	X501_t3738592435_StaticFields::get_offset_of_initial_14(),
	X501_t3738592435_StaticFields::get_offset_of_U3CU3Ef__switchU24mapD_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1028 = { sizeof (X509Builder_t3328382317), -1, sizeof(X509Builder_t3328382317_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1028[3] = 
{
	0,
	X509Builder_t3328382317::get_offset_of_hashName_1(),
	X509Builder_t3328382317_StaticFields::get_offset_of_U3CU3Ef__switchU24mapE_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1029 = { sizeof (X509Certificate_t2519639597), -1, sizeof(X509Certificate_t2519639597_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1029[26] = 
{
	X509Certificate_t2519639597::get_offset_of_decoder_0(),
	X509Certificate_t2519639597::get_offset_of_m_encodedcert_1(),
	X509Certificate_t2519639597::get_offset_of_m_from_2(),
	X509Certificate_t2519639597::get_offset_of_m_until_3(),
	X509Certificate_t2519639597::get_offset_of_issuer_4(),
	X509Certificate_t2519639597::get_offset_of_m_issuername_5(),
	X509Certificate_t2519639597::get_offset_of_m_keyalgo_6(),
	X509Certificate_t2519639597::get_offset_of_m_keyalgoparams_7(),
	X509Certificate_t2519639597::get_offset_of_subject_8(),
	X509Certificate_t2519639597::get_offset_of_m_subject_9(),
	X509Certificate_t2519639597::get_offset_of_m_publickey_10(),
	X509Certificate_t2519639597::get_offset_of_signature_11(),
	X509Certificate_t2519639597::get_offset_of_m_signaturealgo_12(),
	X509Certificate_t2519639597::get_offset_of_m_signaturealgoparams_13(),
	X509Certificate_t2519639597::get_offset_of_certhash_14(),
	X509Certificate_t2519639597::get_offset_of__rsa_15(),
	X509Certificate_t2519639597::get_offset_of__dsa_16(),
	X509Certificate_t2519639597::get_offset_of_version_17(),
	X509Certificate_t2519639597::get_offset_of_serialnumber_18(),
	X509Certificate_t2519639597::get_offset_of_issuerUniqueID_19(),
	X509Certificate_t2519639597::get_offset_of_subjectUniqueID_20(),
	X509Certificate_t2519639597::get_offset_of_extensions_21(),
	X509Certificate_t2519639597_StaticFields::get_offset_of_encoding_error_22(),
	X509Certificate_t2519639597_StaticFields::get_offset_of_U3CU3Ef__switchU24mapF_23(),
	X509Certificate_t2519639597_StaticFields::get_offset_of_U3CU3Ef__switchU24map10_24(),
	X509Certificate_t2519639597_StaticFields::get_offset_of_U3CU3Ef__switchU24map11_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1030 = { sizeof (X509CertificateCollection_t3350127351), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1031 = { sizeof (X509CertificateEnumerator_t1179802508), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1031[1] = 
{
	X509CertificateEnumerator_t1179802508::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1032 = { sizeof (X509CertificateBuilder_t2708928491), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1032[10] = 
{
	X509CertificateBuilder_t2708928491::get_offset_of_version_3(),
	X509CertificateBuilder_t2708928491::get_offset_of_sn_4(),
	X509CertificateBuilder_t2708928491::get_offset_of_issuer_5(),
	X509CertificateBuilder_t2708928491::get_offset_of_notBefore_6(),
	X509CertificateBuilder_t2708928491::get_offset_of_notAfter_7(),
	X509CertificateBuilder_t2708928491::get_offset_of_subject_8(),
	X509CertificateBuilder_t2708928491::get_offset_of_aa_9(),
	X509CertificateBuilder_t2708928491::get_offset_of_issuerUniqueID_10(),
	X509CertificateBuilder_t2708928491::get_offset_of_subjectUniqueID_11(),
	X509CertificateBuilder_t2708928491::get_offset_of_extensions_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1033 = { sizeof (X509Chain_t2367535042), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1033[5] = 
{
	X509Chain_t2367535042::get_offset_of_roots_0(),
	X509Chain_t2367535042::get_offset_of_certs_1(),
	X509Chain_t2367535042::get_offset_of__root_2(),
	X509Chain_t2367535042::get_offset_of__chain_3(),
	X509Chain_t2367535042::get_offset_of__status_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1034 = { sizeof (X509ChainStatusFlags_t931623156)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1034[8] = 
{
	X509ChainStatusFlags_t931623156::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1035 = { sizeof (X509Crl_t229501803), -1, sizeof(X509Crl_t229501803_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1035[12] = 
{
	X509Crl_t229501803::get_offset_of_issuer_0(),
	X509Crl_t229501803::get_offset_of_version_1(),
	X509Crl_t229501803::get_offset_of_thisUpdate_2(),
	X509Crl_t229501803::get_offset_of_nextUpdate_3(),
	X509Crl_t229501803::get_offset_of_entries_4(),
	X509Crl_t229501803::get_offset_of_signatureOID_5(),
	X509Crl_t229501803::get_offset_of_signature_6(),
	X509Crl_t229501803::get_offset_of_extensions_7(),
	X509Crl_t229501803::get_offset_of_encoded_8(),
	X509Crl_t229501803::get_offset_of_hash_value_9(),
	X509Crl_t229501803_StaticFields::get_offset_of_U3CU3Ef__switchU24map12_10(),
	X509Crl_t229501803_StaticFields::get_offset_of_U3CU3Ef__switchU24map13_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1036 = { sizeof (X509CrlEntry_t1722970593), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1036[3] = 
{
	X509CrlEntry_t1722970593::get_offset_of_sn_0(),
	X509CrlEntry_t1722970593::get_offset_of_revocationDate_1(),
	X509CrlEntry_t1722970593::get_offset_of_extensions_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1037 = { sizeof (X509Extension_t786769929), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1037[3] = 
{
	X509Extension_t786769929::get_offset_of_extnOid_0(),
	X509Extension_t786769929::get_offset_of_extnCritical_1(),
	X509Extension_t786769929::get_offset_of_extnValue_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1038 = { sizeof (X509ExtensionCollection_t1986057146), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1038[1] = 
{
	X509ExtensionCollection_t1986057146::get_offset_of_readOnly_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1039 = { sizeof (X509Store_t55481204), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1039[5] = 
{
	X509Store_t55481204::get_offset_of__storePath_0(),
	X509Store_t55481204::get_offset_of__certificates_1(),
	X509Store_t55481204::get_offset_of__crls_2(),
	X509Store_t55481204::get_offset_of__crl_3(),
	X509Store_t55481204::get_offset_of__name_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1040 = { sizeof (X509StoreManager_t3300342847), -1, sizeof(X509StoreManager_t3300342847_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1040[2] = 
{
	X509StoreManager_t3300342847_StaticFields::get_offset_of__userStore_0(),
	X509StoreManager_t3300342847_StaticFields::get_offset_of__machineStore_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1041 = { sizeof (X509Stores_t3496914816), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1041[6] = 
{
	X509Stores_t3496914816::get_offset_of__storePath_0(),
	X509Stores_t3496914816::get_offset_of__personal_1(),
	X509Stores_t3496914816::get_offset_of__other_2(),
	X509Stores_t3496914816::get_offset_of__intermediate_3(),
	X509Stores_t3496914816::get_offset_of__trusted_4(),
	X509Stores_t3496914816::get_offset_of__untrusted_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1042 = { sizeof (Names_t3687131391), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1042[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1043 = { sizeof (X520_t1653928645), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1044 = { sizeof (AttributeTypeAndValue_t4188943397), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1044[4] = 
{
	AttributeTypeAndValue_t4188943397::get_offset_of_oid_0(),
	AttributeTypeAndValue_t4188943397::get_offset_of_attrValue_1(),
	AttributeTypeAndValue_t4188943397::get_offset_of_upperBound_2(),
	AttributeTypeAndValue_t4188943397::get_offset_of_encoding_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1045 = { sizeof (Name_t769215850), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1046 = { sizeof (CommonName_t1411299575), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1047 = { sizeof (SerialNumber_t2516684520), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1048 = { sizeof (LocalityName_t3582879449), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1049 = { sizeof (StateOrProvinceName_t2759608467), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1050 = { sizeof (OrganizationName_t2338681062), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1051 = { sizeof (OrganizationalUnitName_t1287012153), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1052 = { sizeof (EmailAddress_t2765105999), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1053 = { sizeof (DomainComponent_t1883465871), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1054 = { sizeof (UserId_t1002876411), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1055 = { sizeof (Oid_t877789995), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1056 = { sizeof (Title_t3304315450), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1057 = { sizeof (CountryName_t493238855), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1058 = { sizeof (DnQualifier_t1948864316), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1059 = { sizeof (Surname_t337299391), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1060 = { sizeof (GivenName_t1069979674), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1061 = { sizeof (Initial_t645502975), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1062 = { sizeof (AuthorityKeyIdentifierExtension_t953487578), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1062[1] = 
{
	AuthorityKeyIdentifierExtension_t953487578::get_offset_of_aki_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1063 = { sizeof (BasicConstraintsExtension_t3558454155), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1063[2] = 
{
	BasicConstraintsExtension_t3558454155::get_offset_of_cA_3(),
	BasicConstraintsExtension_t3558454155::get_offset_of_pathLenConstraint_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1064 = { sizeof (ExtendedKeyUsageExtension_t585747629), -1, sizeof(ExtendedKeyUsageExtension_t585747629_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1064[2] = 
{
	ExtendedKeyUsageExtension_t585747629::get_offset_of_keyPurpose_3(),
	ExtendedKeyUsageExtension_t585747629_StaticFields::get_offset_of_U3CU3Ef__switchU24map14_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1065 = { sizeof (GeneralNames_t2583028647), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1065[5] = 
{
	GeneralNames_t2583028647::get_offset_of_rfc822Name_0(),
	GeneralNames_t2583028647::get_offset_of_dnsName_1(),
	GeneralNames_t2583028647::get_offset_of_directoryNames_2(),
	GeneralNames_t2583028647::get_offset_of_uris_3(),
	GeneralNames_t2583028647::get_offset_of_ipAddr_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1066 = { sizeof (KeyUsages_t3616177619)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1066[11] = 
{
	KeyUsages_t3616177619::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1067 = { sizeof (KeyUsageExtension_t156710593), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1067[1] = 
{
	KeyUsageExtension_t156710593::get_offset_of_kubits_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1068 = { sizeof (NetscapeCertTypeExtension_t423618241), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1068[1] = 
{
	NetscapeCertTypeExtension_t423618241::get_offset_of_ctbits_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1069 = { sizeof (CertTypes_t3845881161)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1069[8] = 
{
	CertTypes_t3845881161::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1070 = { sizeof (SubjectAltNameExtension_t3230982250), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1070[1] = 
{
	SubjectAltNameExtension_t3230982250::get_offset_of__names_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1071 = { sizeof (SubjectKeyIdentifierExtension_t6894402), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1071[1] = 
{
	SubjectKeyIdentifierExtension_t6894402::get_offset_of_ski_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1072 = { sizeof (HMAC_t3098683303), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1072[4] = 
{
	HMAC_t3098683303::get_offset_of_hash_5(),
	HMAC_t3098683303::get_offset_of_hashing_6(),
	HMAC_t3098683303::get_offset_of_innerPad_7(),
	HMAC_t3098683303::get_offset_of_outerPad_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1073 = { sizeof (MD5SHA1_t3416895185), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1073[3] = 
{
	MD5SHA1_t3416895185::get_offset_of_md5_4(),
	MD5SHA1_t3416895185::get_offset_of_sha_5(),
	MD5SHA1_t3416895185::get_offset_of_hashing_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1074 = { sizeof (AlertLevel_t443372511)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1074[3] = 
{
	AlertLevel_t443372511::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1075 = { sizeof (AlertDescription_t1098935959)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1075[25] = 
{
	AlertDescription_t1098935959::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1076 = { sizeof (Alert_t2861173177), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1076[2] = 
{
	Alert_t2861173177::get_offset_of_level_0(),
	Alert_t2861173177::get_offset_of_description_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1077 = { sizeof (CipherAlgorithmType_t1047906436)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1077[8] = 
{
	CipherAlgorithmType_t1047906436::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1078 = { sizeof (CipherSuite_t800481449), -1, sizeof(CipherSuite_t800481449_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1078[21] = 
{
	CipherSuite_t800481449_StaticFields::get_offset_of_EmptyArray_0(),
	CipherSuite_t800481449::get_offset_of_code_1(),
	CipherSuite_t800481449::get_offset_of_name_2(),
	CipherSuite_t800481449::get_offset_of_cipherAlgorithmType_3(),
	CipherSuite_t800481449::get_offset_of_hashAlgorithmType_4(),
	CipherSuite_t800481449::get_offset_of_exchangeAlgorithmType_5(),
	CipherSuite_t800481449::get_offset_of_isExportable_6(),
	CipherSuite_t800481449::get_offset_of_cipherMode_7(),
	CipherSuite_t800481449::get_offset_of_keyMaterialSize_8(),
	CipherSuite_t800481449::get_offset_of_keyBlockSize_9(),
	CipherSuite_t800481449::get_offset_of_expandedKeyMaterialSize_10(),
	CipherSuite_t800481449::get_offset_of_effectiveKeyBits_11(),
	CipherSuite_t800481449::get_offset_of_ivSize_12(),
	CipherSuite_t800481449::get_offset_of_blockSize_13(),
	CipherSuite_t800481449::get_offset_of_context_14(),
	CipherSuite_t800481449::get_offset_of_encryptionAlgorithm_15(),
	CipherSuite_t800481449::get_offset_of_encryptionCipher_16(),
	CipherSuite_t800481449::get_offset_of_decryptionAlgorithm_17(),
	CipherSuite_t800481449::get_offset_of_decryptionCipher_18(),
	CipherSuite_t800481449::get_offset_of_clientHMAC_19(),
	CipherSuite_t800481449::get_offset_of_serverHMAC_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1079 = { sizeof (CipherSuiteCollection_t3539135286), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1079[2] = 
{
	CipherSuiteCollection_t3539135286::get_offset_of_cipherSuites_0(),
	CipherSuiteCollection_t3539135286::get_offset_of_protocol_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1080 = { sizeof (CipherSuiteFactory_t1356910814), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1081 = { sizeof (ClientContext_t2303782598), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1081[2] = 
{
	ClientContext_t2303782598::get_offset_of_sslStream_34(),
	ClientContext_t2303782598::get_offset_of_clientHelloProtocol_35(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1082 = { sizeof (ClientRecordProtocol_t2286315280), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1083 = { sizeof (ClientSessionInfo_t4230569266), -1, sizeof(ClientSessionInfo_t4230569266_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1083[7] = 
{
	0,
	ClientSessionInfo_t4230569266_StaticFields::get_offset_of_ValidityInterval_1(),
	ClientSessionInfo_t4230569266::get_offset_of_disposed_2(),
	ClientSessionInfo_t4230569266::get_offset_of_validuntil_3(),
	ClientSessionInfo_t4230569266::get_offset_of_host_4(),
	ClientSessionInfo_t4230569266::get_offset_of_sid_5(),
	ClientSessionInfo_t4230569266::get_offset_of_masterSecret_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1084 = { sizeof (ClientSessionCache_t675933560), -1, sizeof(ClientSessionCache_t675933560_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1084[2] = 
{
	ClientSessionCache_t675933560_StaticFields::get_offset_of_cache_0(),
	ClientSessionCache_t675933560_StaticFields::get_offset_of_locker_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1085 = { sizeof (ContentType_t2674657885)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1085[5] = 
{
	ContentType_t2674657885::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1086 = { sizeof (Context_t3052937665), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1086[34] = 
{
	0,
	0,
	0,
	0,
	Context_t3052937665::get_offset_of_securityProtocol_4(),
	Context_t3052937665::get_offset_of_sessionId_5(),
	Context_t3052937665::get_offset_of_compressionMethod_6(),
	Context_t3052937665::get_offset_of_serverSettings_7(),
	Context_t3052937665::get_offset_of_clientSettings_8(),
	Context_t3052937665::get_offset_of_current_9(),
	Context_t3052937665::get_offset_of_negotiating_10(),
	Context_t3052937665::get_offset_of_read_11(),
	Context_t3052937665::get_offset_of_write_12(),
	Context_t3052937665::get_offset_of_supportedCiphers_13(),
	Context_t3052937665::get_offset_of_lastHandshakeMsg_14(),
	Context_t3052937665::get_offset_of_handshakeState_15(),
	Context_t3052937665::get_offset_of_abbreviatedHandshake_16(),
	Context_t3052937665::get_offset_of_receivedConnectionEnd_17(),
	Context_t3052937665::get_offset_of_sentConnectionEnd_18(),
	Context_t3052937665::get_offset_of_protocolNegotiated_19(),
	Context_t3052937665::get_offset_of_writeSequenceNumber_20(),
	Context_t3052937665::get_offset_of_readSequenceNumber_21(),
	Context_t3052937665::get_offset_of_clientRandom_22(),
	Context_t3052937665::get_offset_of_serverRandom_23(),
	Context_t3052937665::get_offset_of_randomCS_24(),
	Context_t3052937665::get_offset_of_randomSC_25(),
	Context_t3052937665::get_offset_of_masterSecret_26(),
	Context_t3052937665::get_offset_of_clientWriteKey_27(),
	Context_t3052937665::get_offset_of_serverWriteKey_28(),
	Context_t3052937665::get_offset_of_clientWriteIV_29(),
	Context_t3052937665::get_offset_of_serverWriteIV_30(),
	Context_t3052937665::get_offset_of_handshakeMessages_31(),
	Context_t3052937665::get_offset_of_random_32(),
	Context_t3052937665::get_offset_of_recordProtocol_33(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1087 = { sizeof (DebugHelper_t2573288699), -1, sizeof(DebugHelper_t2573288699_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1087[1] = 
{
	DebugHelper_t2573288699_StaticFields::get_offset_of_isInitialized_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1088 = { sizeof (ExchangeAlgorithmType_t1431563147)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1088[6] = 
{
	ExchangeAlgorithmType_t1431563147::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1089 = { sizeof (HandshakeState_t2137331817)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1089[4] = 
{
	HandshakeState_t2137331817::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1090 = { sizeof (HashAlgorithmType_t2530508586)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1090[4] = 
{
	HashAlgorithmType_t2530508586::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1091 = { sizeof (HttpsClientStream_t2505106011), -1, sizeof(HttpsClientStream_t2505106011_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1091[4] = 
{
	HttpsClientStream_t2505106011::get_offset_of__request_20(),
	HttpsClientStream_t2505106011::get_offset_of__status_21(),
	HttpsClientStream_t2505106011_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_22(),
	HttpsClientStream_t2505106011_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1092 = { sizeof (RecordProtocol_t2436280827), -1, sizeof(RecordProtocol_t2436280827_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1092[3] = 
{
	RecordProtocol_t2436280827_StaticFields::get_offset_of_record_processing_0(),
	RecordProtocol_t2436280827::get_offset_of_innerStream_1(),
	RecordProtocol_t2436280827::get_offset_of_context_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1093 = { sizeof (ReceiveRecordAsyncResult_t2608081800), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1093[9] = 
{
	ReceiveRecordAsyncResult_t2608081800::get_offset_of_locker_0(),
	ReceiveRecordAsyncResult_t2608081800::get_offset_of__userCallback_1(),
	ReceiveRecordAsyncResult_t2608081800::get_offset_of__userState_2(),
	ReceiveRecordAsyncResult_t2608081800::get_offset_of__asyncException_3(),
	ReceiveRecordAsyncResult_t2608081800::get_offset_of_handle_4(),
	ReceiveRecordAsyncResult_t2608081800::get_offset_of__resultingBuffer_5(),
	ReceiveRecordAsyncResult_t2608081800::get_offset_of__record_6(),
	ReceiveRecordAsyncResult_t2608081800::get_offset_of_completed_7(),
	ReceiveRecordAsyncResult_t2608081800::get_offset_of__initialBuffer_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1094 = { sizeof (SendRecordAsyncResult_t2771687265), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1094[7] = 
{
	SendRecordAsyncResult_t2771687265::get_offset_of_locker_0(),
	SendRecordAsyncResult_t2771687265::get_offset_of__userCallback_1(),
	SendRecordAsyncResult_t2771687265::get_offset_of__userState_2(),
	SendRecordAsyncResult_t2771687265::get_offset_of__asyncException_3(),
	SendRecordAsyncResult_t2771687265::get_offset_of_handle_4(),
	SendRecordAsyncResult_t2771687265::get_offset_of__message_5(),
	SendRecordAsyncResult_t2771687265::get_offset_of_completed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1095 = { sizeof (RSASslSignatureDeformatter_t1399155387), -1, sizeof(RSASslSignatureDeformatter_t1399155387_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1095[3] = 
{
	RSASslSignatureDeformatter_t1399155387::get_offset_of_key_0(),
	RSASslSignatureDeformatter_t1399155387::get_offset_of_hash_1(),
	RSASslSignatureDeformatter_t1399155387_StaticFields::get_offset_of_U3CU3Ef__switchU24map15_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1096 = { sizeof (RSASslSignatureFormatter_t3648027450), -1, sizeof(RSASslSignatureFormatter_t3648027450_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1096[3] = 
{
	RSASslSignatureFormatter_t3648027450::get_offset_of_key_0(),
	RSASslSignatureFormatter_t3648027450::get_offset_of_hash_1(),
	RSASslSignatureFormatter_t3648027450_StaticFields::get_offset_of_U3CU3Ef__switchU24map16_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1097 = { sizeof (SecurityCompressionType_t2477734254)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1097[3] = 
{
	SecurityCompressionType_t2477734254::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1098 = { sizeof (SecurityParameters_t2105378483), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1098[3] = 
{
	SecurityParameters_t2105378483::get_offset_of_cipher_0(),
	SecurityParameters_t2105378483::get_offset_of_clientWriteMAC_1(),
	SecurityParameters_t2105378483::get_offset_of_serverWriteMAC_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1099 = { sizeof (SecurityProtocolType_t2127794434)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1099[5] = 
{
	SecurityProtocolType_t2127794434::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
