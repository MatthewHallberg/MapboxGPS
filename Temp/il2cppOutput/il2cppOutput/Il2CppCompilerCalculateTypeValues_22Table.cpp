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

// Org.BouncyCastle.Math.EC.ECFieldElement[]
struct ECFieldElementU5BU5D_t1723222585;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t1909311897;
// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t2319583272;
// System.Collections.IDictionary
struct IDictionary_t1279208843;
// System.Byte[]
struct ByteU5BU5D_t2378657911;
// Org.BouncyCastle.Utilities.Encoders.IEncoder
struct IEncoder_t945708175;
// System.Globalization.CompareInfo
struct CompareInfo_t4004371;
// System.String
struct String_t;
// Org.BouncyCastle.Utilities.Zlib.Deflate/Config[]
struct ConfigU5BU5D_t1051254441;
// System.String[]
struct StringU5BU5D_t1002137567;
// Org.BouncyCastle.Utilities.Zlib.ZStream
struct ZStream_t370990292;
// System.Int16[]
struct Int16U5BU5D_t1343800226;
// Org.BouncyCastle.Utilities.Zlib.Tree
struct Tree_t1635919820;
// System.Int32[]
struct Int32U5BU5D_t1719863841;
// System.IntPtr[]
struct IntPtrU5BU5D_t271461801;
// Org.BouncyCastle.X509.PemParser
struct PemParser_t1463922308;
// Org.BouncyCastle.Asn1.Asn1Set
struct Asn1Set_t1950059424;
// System.IO.Stream
struct Stream_t2967449720;
// Org.BouncyCastle.Utilities.Zlib.StaticTree
struct StaticTree_t1221227804;
// System.Int64[]
struct Int64U5BU5D_t1142497760;
// Org.BouncyCastle.Utilities.Zlib.InfBlocks
struct InfBlocks_t745228855;
// Org.BouncyCastle.Utilities.Zlib.InfCodes
struct InfCodes_t3614527456;
// Org.BouncyCastle.Utilities.Zlib.InfTree
struct InfTree_t2955799804;
// Org.BouncyCastle.Utilities.Zlib.Deflate
struct Deflate_t512577057;
// Org.BouncyCastle.Utilities.Zlib.Inflate
struct Inflate_t3588891804;
// Org.BouncyCastle.Utilities.Zlib.Adler32
struct Adler32_t1236584662;
// System.Collections.IEnumerable
struct IEnumerable_t1867816334;
// Org.BouncyCastle.Math.Field.IFiniteField
struct IFiniteField_t2945783868;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t389431677;
// Org.BouncyCastle.Math.EC.Endo.ECEndomorphism
struct ECEndomorphism_t653874695;
// Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier
struct ECMultiplier_t643611822;
// Org.BouncyCastle.Math.Field.IPolynomial
struct IPolynomial_t2203100065;
// Org.BouncyCastle.Math.EC.ECPoint[]
struct ECPointU5BU5D_t1088474823;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t383189042;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t1090558902;
// Org.BouncyCastle.Math.BigInteger[]
struct BigIntegerU5BU5D_t3505201136;
// Org.BouncyCastle.Math.EC.AbstractF2mPoint[]
struct AbstractF2mPointU5BU5D_t1020976720;
// Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters
struct GlvTypeBParameters_t4145277670;
// Org.BouncyCastle.Math.EC.ECPointMap
struct ECPointMap_t3771611548;
// System.Char[]
struct CharU5BU5D_t3282355116;
// Org.BouncyCastle.Crypto.Prng.IRandomGenerator
struct IRandomGenerator_t973814961;
// Org.BouncyCastle.Math.EC.Endo.GlvEndomorphism
struct GlvEndomorphism_t3632509985;
// Org.BouncyCastle.Asn1.X509.X509CertificateStructure
struct X509CertificateStructure_t3936362538;
// Org.BouncyCastle.Asn1.X509.BasicConstraints
struct BasicConstraints_t3630830410;
// System.Boolean[]
struct BooleanU5BU5D_t2673653913;
// Org.BouncyCastle.Math.EC.Custom.Sec.SecT571R1Point
struct SecT571R1Point_t1182715444;
// Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement
struct SecT571FieldElement_t2379021916;
// Org.BouncyCastle.Math.EC.Custom.Sec.SecT571K1Point
struct SecT571K1Point_t2027530234;




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
#ifndef ECPOINT_T383189042_H
#define ECPOINT_T383189042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.EC.ECPoint
struct  ECPoint_t383189042  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Math.EC.ECPoint::m_curve
	ECCurve_t1909311897 * ___m_curve_1;
	// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECPoint::m_x
	ECFieldElement_t2319583272 * ___m_x_2;
	// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECPoint::m_y
	ECFieldElement_t2319583272 * ___m_y_3;
	// Org.BouncyCastle.Math.EC.ECFieldElement[] Org.BouncyCastle.Math.EC.ECPoint::m_zs
	ECFieldElementU5BU5D_t1723222585* ___m_zs_4;
	// System.Boolean Org.BouncyCastle.Math.EC.ECPoint::m_withCompression
	bool ___m_withCompression_5;
	// System.Collections.IDictionary Org.BouncyCastle.Math.EC.ECPoint::m_preCompTable
	RuntimeObject* ___m_preCompTable_6;

public:
	inline static int32_t get_offset_of_m_curve_1() { return static_cast<int32_t>(offsetof(ECPoint_t383189042, ___m_curve_1)); }
	inline ECCurve_t1909311897 * get_m_curve_1() const { return ___m_curve_1; }
	inline ECCurve_t1909311897 ** get_address_of_m_curve_1() { return &___m_curve_1; }
	inline void set_m_curve_1(ECCurve_t1909311897 * value)
	{
		___m_curve_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_curve_1), value);
	}

	inline static int32_t get_offset_of_m_x_2() { return static_cast<int32_t>(offsetof(ECPoint_t383189042, ___m_x_2)); }
	inline ECFieldElement_t2319583272 * get_m_x_2() const { return ___m_x_2; }
	inline ECFieldElement_t2319583272 ** get_address_of_m_x_2() { return &___m_x_2; }
	inline void set_m_x_2(ECFieldElement_t2319583272 * value)
	{
		___m_x_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_x_2), value);
	}

	inline static int32_t get_offset_of_m_y_3() { return static_cast<int32_t>(offsetof(ECPoint_t383189042, ___m_y_3)); }
	inline ECFieldElement_t2319583272 * get_m_y_3() const { return ___m_y_3; }
	inline ECFieldElement_t2319583272 ** get_address_of_m_y_3() { return &___m_y_3; }
	inline void set_m_y_3(ECFieldElement_t2319583272 * value)
	{
		___m_y_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_y_3), value);
	}

	inline static int32_t get_offset_of_m_zs_4() { return static_cast<int32_t>(offsetof(ECPoint_t383189042, ___m_zs_4)); }
	inline ECFieldElementU5BU5D_t1723222585* get_m_zs_4() const { return ___m_zs_4; }
	inline ECFieldElementU5BU5D_t1723222585** get_address_of_m_zs_4() { return &___m_zs_4; }
	inline void set_m_zs_4(ECFieldElementU5BU5D_t1723222585* value)
	{
		___m_zs_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_zs_4), value);
	}

	inline static int32_t get_offset_of_m_withCompression_5() { return static_cast<int32_t>(offsetof(ECPoint_t383189042, ___m_withCompression_5)); }
	inline bool get_m_withCompression_5() const { return ___m_withCompression_5; }
	inline bool* get_address_of_m_withCompression_5() { return &___m_withCompression_5; }
	inline void set_m_withCompression_5(bool value)
	{
		___m_withCompression_5 = value;
	}

	inline static int32_t get_offset_of_m_preCompTable_6() { return static_cast<int32_t>(offsetof(ECPoint_t383189042, ___m_preCompTable_6)); }
	inline RuntimeObject* get_m_preCompTable_6() const { return ___m_preCompTable_6; }
	inline RuntimeObject** get_address_of_m_preCompTable_6() { return &___m_preCompTable_6; }
	inline void set_m_preCompTable_6(RuntimeObject* value)
	{
		___m_preCompTable_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_preCompTable_6), value);
	}
};

struct ECPoint_t383189042_StaticFields
{
public:
	// Org.BouncyCastle.Math.EC.ECFieldElement[] Org.BouncyCastle.Math.EC.ECPoint::EMPTY_ZS
	ECFieldElementU5BU5D_t1723222585* ___EMPTY_ZS_0;

public:
	inline static int32_t get_offset_of_EMPTY_ZS_0() { return static_cast<int32_t>(offsetof(ECPoint_t383189042_StaticFields, ___EMPTY_ZS_0)); }
	inline ECFieldElementU5BU5D_t1723222585* get_EMPTY_ZS_0() const { return ___EMPTY_ZS_0; }
	inline ECFieldElementU5BU5D_t1723222585** get_address_of_EMPTY_ZS_0() { return &___EMPTY_ZS_0; }
	inline void set_EMPTY_ZS_0(ECFieldElementU5BU5D_t1723222585* value)
	{
		___EMPTY_ZS_0 = value;
		Il2CppCodeGenWriteBarrier((&___EMPTY_ZS_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ECPOINT_T383189042_H
#ifndef HEXENCODER_T3090843519_H
#define HEXENCODER_T3090843519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Encoders.HexEncoder
struct  HexEncoder_t3090843519  : public RuntimeObject
{
public:
	// System.Byte[] Org.BouncyCastle.Utilities.Encoders.HexEncoder::encodingTable
	ByteU5BU5D_t2378657911* ___encodingTable_0;
	// System.Byte[] Org.BouncyCastle.Utilities.Encoders.HexEncoder::decodingTable
	ByteU5BU5D_t2378657911* ___decodingTable_1;

public:
	inline static int32_t get_offset_of_encodingTable_0() { return static_cast<int32_t>(offsetof(HexEncoder_t3090843519, ___encodingTable_0)); }
	inline ByteU5BU5D_t2378657911* get_encodingTable_0() const { return ___encodingTable_0; }
	inline ByteU5BU5D_t2378657911** get_address_of_encodingTable_0() { return &___encodingTable_0; }
	inline void set_encodingTable_0(ByteU5BU5D_t2378657911* value)
	{
		___encodingTable_0 = value;
		Il2CppCodeGenWriteBarrier((&___encodingTable_0), value);
	}

	inline static int32_t get_offset_of_decodingTable_1() { return static_cast<int32_t>(offsetof(HexEncoder_t3090843519, ___decodingTable_1)); }
	inline ByteU5BU5D_t2378657911* get_decodingTable_1() const { return ___decodingTable_1; }
	inline ByteU5BU5D_t2378657911** get_address_of_decodingTable_1() { return &___decodingTable_1; }
	inline void set_decodingTable_1(ByteU5BU5D_t2378657911* value)
	{
		___decodingTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___decodingTable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEXENCODER_T3090843519_H
#ifndef HEX_T2479858326_H
#define HEX_T2479858326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Encoders.Hex
struct  Hex_t2479858326  : public RuntimeObject
{
public:

public:
};

struct Hex_t2479858326_StaticFields
{
public:
	// Org.BouncyCastle.Utilities.Encoders.IEncoder Org.BouncyCastle.Utilities.Encoders.Hex::encoder
	RuntimeObject* ___encoder_0;

public:
	inline static int32_t get_offset_of_encoder_0() { return static_cast<int32_t>(offsetof(Hex_t2479858326_StaticFields, ___encoder_0)); }
	inline RuntimeObject* get_encoder_0() const { return ___encoder_0; }
	inline RuntimeObject** get_address_of_encoder_0() { return &___encoder_0; }
	inline void set_encoder_0(RuntimeObject* value)
	{
		___encoder_0 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEX_T2479858326_H
#ifndef BASE64_T2556288384_H
#define BASE64_T2556288384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Encoders.Base64
struct  Base64_t2556288384  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASE64_T2556288384_H
#ifndef COLLECTIONUTILITIES_T2538981481_H
#define COLLECTIONUTILITIES_T2538981481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Collections.CollectionUtilities
struct  CollectionUtilities_t2538981481  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONUTILITIES_T2538981481_H
#ifndef TIMES_T795609876_H
#define TIMES_T795609876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Times
struct  Times_t795609876  : public RuntimeObject
{
public:

public:
};

struct Times_t795609876_StaticFields
{
public:
	// System.Int64 Org.BouncyCastle.Utilities.Times::NanosecondsPerTick
	int64_t ___NanosecondsPerTick_0;

public:
	inline static int32_t get_offset_of_NanosecondsPerTick_0() { return static_cast<int32_t>(offsetof(Times_t795609876_StaticFields, ___NanosecondsPerTick_0)); }
	inline int64_t get_NanosecondsPerTick_0() const { return ___NanosecondsPerTick_0; }
	inline int64_t* get_address_of_NanosecondsPerTick_0() { return &___NanosecondsPerTick_0; }
	inline void set_NanosecondsPerTick_0(int64_t value)
	{
		___NanosecondsPerTick_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMES_T795609876_H
#ifndef STRINGS_T26489371_H
#define STRINGS_T26489371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Strings
struct  Strings_t26489371  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGS_T26489371_H
#ifndef PLATFORM_T2826890647_H
#define PLATFORM_T2826890647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Platform
struct  Platform_t2826890647  : public RuntimeObject
{
public:

public:
};

struct Platform_t2826890647_StaticFields
{
public:
	// System.Globalization.CompareInfo Org.BouncyCastle.Utilities.Platform::InvariantCompareInfo
	CompareInfo_t4004371 * ___InvariantCompareInfo_0;
	// System.String Org.BouncyCastle.Utilities.Platform::NewLine
	String_t* ___NewLine_1;

public:
	inline static int32_t get_offset_of_InvariantCompareInfo_0() { return static_cast<int32_t>(offsetof(Platform_t2826890647_StaticFields, ___InvariantCompareInfo_0)); }
	inline CompareInfo_t4004371 * get_InvariantCompareInfo_0() const { return ___InvariantCompareInfo_0; }
	inline CompareInfo_t4004371 ** get_address_of_InvariantCompareInfo_0() { return &___InvariantCompareInfo_0; }
	inline void set_InvariantCompareInfo_0(CompareInfo_t4004371 * value)
	{
		___InvariantCompareInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___InvariantCompareInfo_0), value);
	}

	inline static int32_t get_offset_of_NewLine_1() { return static_cast<int32_t>(offsetof(Platform_t2826890647_StaticFields, ___NewLine_1)); }
	inline String_t* get_NewLine_1() const { return ___NewLine_1; }
	inline String_t** get_address_of_NewLine_1() { return &___NewLine_1; }
	inline void set_NewLine_1(String_t* value)
	{
		___NewLine_1 = value;
		Il2CppCodeGenWriteBarrier((&___NewLine_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORM_T2826890647_H
#ifndef INTEGERS_T883066998_H
#define INTEGERS_T883066998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Integers
struct  Integers_t883066998  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTEGERS_T883066998_H
#ifndef ENUMS_T1897671248_H
#define ENUMS_T1897671248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Enums
struct  Enums_t1897671248  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMS_T1897671248_H
#ifndef BIGINTEGERS_T3326020171_H
#define BIGINTEGERS_T3326020171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.BigIntegers
struct  BigIntegers_t3326020171  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGINTEGERS_T3326020171_H
#ifndef ARRAYS_T929923650_H
#define ARRAYS_T929923650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Arrays
struct  Arrays_t929923650  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYS_T929923650_H
#ifndef SIGNERUTILITIES_T3629792166_H
#define SIGNERUTILITIES_T3629792166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Security.SignerUtilities
struct  SignerUtilities_t3629792166  : public RuntimeObject
{
public:

public:
};

struct SignerUtilities_t3629792166_StaticFields
{
public:
	// System.Collections.IDictionary Org.BouncyCastle.Security.SignerUtilities::algorithms
	RuntimeObject* ___algorithms_0;
	// System.Collections.IDictionary Org.BouncyCastle.Security.SignerUtilities::oids
	RuntimeObject* ___oids_1;

public:
	inline static int32_t get_offset_of_algorithms_0() { return static_cast<int32_t>(offsetof(SignerUtilities_t3629792166_StaticFields, ___algorithms_0)); }
	inline RuntimeObject* get_algorithms_0() const { return ___algorithms_0; }
	inline RuntimeObject** get_address_of_algorithms_0() { return &___algorithms_0; }
	inline void set_algorithms_0(RuntimeObject* value)
	{
		___algorithms_0 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_0), value);
	}

	inline static int32_t get_offset_of_oids_1() { return static_cast<int32_t>(offsetof(SignerUtilities_t3629792166_StaticFields, ___oids_1)); }
	inline RuntimeObject* get_oids_1() const { return ___oids_1; }
	inline RuntimeObject** get_address_of_oids_1() { return &___oids_1; }
	inline void set_oids_1(RuntimeObject* value)
	{
		___oids_1 = value;
		Il2CppCodeGenWriteBarrier((&___oids_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNERUTILITIES_T3629792166_H
#ifndef PUBLICKEYFACTORY_T3701280238_H
#define PUBLICKEYFACTORY_T3701280238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Security.PublicKeyFactory
struct  PublicKeyFactory_t3701280238  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUBLICKEYFACTORY_T3701280238_H
#ifndef STREAMS_T2238297570_H
#define STREAMS_T2238297570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.IO.Streams
struct  Streams_t2238297570  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMS_T2238297570_H
#ifndef ADLER32_T1236584662_H
#define ADLER32_T1236584662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Zlib.Adler32
struct  Adler32_t1236584662  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADLER32_T1236584662_H
#ifndef DEFLATE_T512577057_H
#define DEFLATE_T512577057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Zlib.Deflate
struct  Deflate_t512577057  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Utilities.Zlib.ZStream Org.BouncyCastle.Utilities.Zlib.Deflate::strm
	ZStream_t370990292 * ___strm_2;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::status
	int32_t ___status_3;
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.Deflate::pending_buf
	ByteU5BU5D_t2378657911* ___pending_buf_4;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::pending_buf_size
	int32_t ___pending_buf_size_5;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::pending_out
	int32_t ___pending_out_6;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::pending
	int32_t ___pending_7;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::noheader
	int32_t ___noheader_8;
	// System.Byte Org.BouncyCastle.Utilities.Zlib.Deflate::data_type
	uint8_t ___data_type_9;
	// System.Byte Org.BouncyCastle.Utilities.Zlib.Deflate::method
	uint8_t ___method_10;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::last_flush
	int32_t ___last_flush_11;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::w_size
	int32_t ___w_size_12;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::w_bits
	int32_t ___w_bits_13;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::w_mask
	int32_t ___w_mask_14;
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.Deflate::window
	ByteU5BU5D_t2378657911* ___window_15;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::window_size
	int32_t ___window_size_16;
	// System.Int16[] Org.BouncyCastle.Utilities.Zlib.Deflate::prev
	Int16U5BU5D_t1343800226* ___prev_17;
	// System.Int16[] Org.BouncyCastle.Utilities.Zlib.Deflate::head
	Int16U5BU5D_t1343800226* ___head_18;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::ins_h
	int32_t ___ins_h_19;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::hash_size
	int32_t ___hash_size_20;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::hash_bits
	int32_t ___hash_bits_21;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::hash_mask
	int32_t ___hash_mask_22;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::hash_shift
	int32_t ___hash_shift_23;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::block_start
	int32_t ___block_start_24;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::match_length
	int32_t ___match_length_25;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::prev_match
	int32_t ___prev_match_26;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::match_available
	int32_t ___match_available_27;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::strstart
	int32_t ___strstart_28;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::match_start
	int32_t ___match_start_29;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::lookahead
	int32_t ___lookahead_30;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::prev_length
	int32_t ___prev_length_31;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::max_chain_length
	int32_t ___max_chain_length_32;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::max_lazy_match
	int32_t ___max_lazy_match_33;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::level
	int32_t ___level_34;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::strategy
	int32_t ___strategy_35;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::good_match
	int32_t ___good_match_36;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::nice_match
	int32_t ___nice_match_37;
	// System.Int16[] Org.BouncyCastle.Utilities.Zlib.Deflate::dyn_ltree
	Int16U5BU5D_t1343800226* ___dyn_ltree_38;
	// System.Int16[] Org.BouncyCastle.Utilities.Zlib.Deflate::dyn_dtree
	Int16U5BU5D_t1343800226* ___dyn_dtree_39;
	// System.Int16[] Org.BouncyCastle.Utilities.Zlib.Deflate::bl_tree
	Int16U5BU5D_t1343800226* ___bl_tree_40;
	// Org.BouncyCastle.Utilities.Zlib.Tree Org.BouncyCastle.Utilities.Zlib.Deflate::l_desc
	Tree_t1635919820 * ___l_desc_41;
	// Org.BouncyCastle.Utilities.Zlib.Tree Org.BouncyCastle.Utilities.Zlib.Deflate::d_desc
	Tree_t1635919820 * ___d_desc_42;
	// Org.BouncyCastle.Utilities.Zlib.Tree Org.BouncyCastle.Utilities.Zlib.Deflate::bl_desc
	Tree_t1635919820 * ___bl_desc_43;
	// System.Int16[] Org.BouncyCastle.Utilities.Zlib.Deflate::bl_count
	Int16U5BU5D_t1343800226* ___bl_count_44;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.Deflate::heap
	Int32U5BU5D_t1719863841* ___heap_45;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::heap_len
	int32_t ___heap_len_46;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::heap_max
	int32_t ___heap_max_47;
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.Deflate::depth
	ByteU5BU5D_t2378657911* ___depth_48;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::l_buf
	int32_t ___l_buf_49;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::lit_bufsize
	int32_t ___lit_bufsize_50;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::last_lit
	int32_t ___last_lit_51;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::d_buf
	int32_t ___d_buf_52;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::opt_len
	int32_t ___opt_len_53;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::static_len
	int32_t ___static_len_54;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::matches
	int32_t ___matches_55;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::last_eob_len
	int32_t ___last_eob_len_56;
	// System.UInt32 Org.BouncyCastle.Utilities.Zlib.Deflate::bi_buf
	uint32_t ___bi_buf_57;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::bi_valid
	int32_t ___bi_valid_58;

public:
	inline static int32_t get_offset_of_strm_2() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___strm_2)); }
	inline ZStream_t370990292 * get_strm_2() const { return ___strm_2; }
	inline ZStream_t370990292 ** get_address_of_strm_2() { return &___strm_2; }
	inline void set_strm_2(ZStream_t370990292 * value)
	{
		___strm_2 = value;
		Il2CppCodeGenWriteBarrier((&___strm_2), value);
	}

	inline static int32_t get_offset_of_status_3() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___status_3)); }
	inline int32_t get_status_3() const { return ___status_3; }
	inline int32_t* get_address_of_status_3() { return &___status_3; }
	inline void set_status_3(int32_t value)
	{
		___status_3 = value;
	}

	inline static int32_t get_offset_of_pending_buf_4() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___pending_buf_4)); }
	inline ByteU5BU5D_t2378657911* get_pending_buf_4() const { return ___pending_buf_4; }
	inline ByteU5BU5D_t2378657911** get_address_of_pending_buf_4() { return &___pending_buf_4; }
	inline void set_pending_buf_4(ByteU5BU5D_t2378657911* value)
	{
		___pending_buf_4 = value;
		Il2CppCodeGenWriteBarrier((&___pending_buf_4), value);
	}

	inline static int32_t get_offset_of_pending_buf_size_5() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___pending_buf_size_5)); }
	inline int32_t get_pending_buf_size_5() const { return ___pending_buf_size_5; }
	inline int32_t* get_address_of_pending_buf_size_5() { return &___pending_buf_size_5; }
	inline void set_pending_buf_size_5(int32_t value)
	{
		___pending_buf_size_5 = value;
	}

	inline static int32_t get_offset_of_pending_out_6() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___pending_out_6)); }
	inline int32_t get_pending_out_6() const { return ___pending_out_6; }
	inline int32_t* get_address_of_pending_out_6() { return &___pending_out_6; }
	inline void set_pending_out_6(int32_t value)
	{
		___pending_out_6 = value;
	}

	inline static int32_t get_offset_of_pending_7() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___pending_7)); }
	inline int32_t get_pending_7() const { return ___pending_7; }
	inline int32_t* get_address_of_pending_7() { return &___pending_7; }
	inline void set_pending_7(int32_t value)
	{
		___pending_7 = value;
	}

	inline static int32_t get_offset_of_noheader_8() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___noheader_8)); }
	inline int32_t get_noheader_8() const { return ___noheader_8; }
	inline int32_t* get_address_of_noheader_8() { return &___noheader_8; }
	inline void set_noheader_8(int32_t value)
	{
		___noheader_8 = value;
	}

	inline static int32_t get_offset_of_data_type_9() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___data_type_9)); }
	inline uint8_t get_data_type_9() const { return ___data_type_9; }
	inline uint8_t* get_address_of_data_type_9() { return &___data_type_9; }
	inline void set_data_type_9(uint8_t value)
	{
		___data_type_9 = value;
	}

	inline static int32_t get_offset_of_method_10() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___method_10)); }
	inline uint8_t get_method_10() const { return ___method_10; }
	inline uint8_t* get_address_of_method_10() { return &___method_10; }
	inline void set_method_10(uint8_t value)
	{
		___method_10 = value;
	}

	inline static int32_t get_offset_of_last_flush_11() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___last_flush_11)); }
	inline int32_t get_last_flush_11() const { return ___last_flush_11; }
	inline int32_t* get_address_of_last_flush_11() { return &___last_flush_11; }
	inline void set_last_flush_11(int32_t value)
	{
		___last_flush_11 = value;
	}

	inline static int32_t get_offset_of_w_size_12() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___w_size_12)); }
	inline int32_t get_w_size_12() const { return ___w_size_12; }
	inline int32_t* get_address_of_w_size_12() { return &___w_size_12; }
	inline void set_w_size_12(int32_t value)
	{
		___w_size_12 = value;
	}

	inline static int32_t get_offset_of_w_bits_13() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___w_bits_13)); }
	inline int32_t get_w_bits_13() const { return ___w_bits_13; }
	inline int32_t* get_address_of_w_bits_13() { return &___w_bits_13; }
	inline void set_w_bits_13(int32_t value)
	{
		___w_bits_13 = value;
	}

	inline static int32_t get_offset_of_w_mask_14() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___w_mask_14)); }
	inline int32_t get_w_mask_14() const { return ___w_mask_14; }
	inline int32_t* get_address_of_w_mask_14() { return &___w_mask_14; }
	inline void set_w_mask_14(int32_t value)
	{
		___w_mask_14 = value;
	}

	inline static int32_t get_offset_of_window_15() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___window_15)); }
	inline ByteU5BU5D_t2378657911* get_window_15() const { return ___window_15; }
	inline ByteU5BU5D_t2378657911** get_address_of_window_15() { return &___window_15; }
	inline void set_window_15(ByteU5BU5D_t2378657911* value)
	{
		___window_15 = value;
		Il2CppCodeGenWriteBarrier((&___window_15), value);
	}

	inline static int32_t get_offset_of_window_size_16() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___window_size_16)); }
	inline int32_t get_window_size_16() const { return ___window_size_16; }
	inline int32_t* get_address_of_window_size_16() { return &___window_size_16; }
	inline void set_window_size_16(int32_t value)
	{
		___window_size_16 = value;
	}

	inline static int32_t get_offset_of_prev_17() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___prev_17)); }
	inline Int16U5BU5D_t1343800226* get_prev_17() const { return ___prev_17; }
	inline Int16U5BU5D_t1343800226** get_address_of_prev_17() { return &___prev_17; }
	inline void set_prev_17(Int16U5BU5D_t1343800226* value)
	{
		___prev_17 = value;
		Il2CppCodeGenWriteBarrier((&___prev_17), value);
	}

	inline static int32_t get_offset_of_head_18() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___head_18)); }
	inline Int16U5BU5D_t1343800226* get_head_18() const { return ___head_18; }
	inline Int16U5BU5D_t1343800226** get_address_of_head_18() { return &___head_18; }
	inline void set_head_18(Int16U5BU5D_t1343800226* value)
	{
		___head_18 = value;
		Il2CppCodeGenWriteBarrier((&___head_18), value);
	}

	inline static int32_t get_offset_of_ins_h_19() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___ins_h_19)); }
	inline int32_t get_ins_h_19() const { return ___ins_h_19; }
	inline int32_t* get_address_of_ins_h_19() { return &___ins_h_19; }
	inline void set_ins_h_19(int32_t value)
	{
		___ins_h_19 = value;
	}

	inline static int32_t get_offset_of_hash_size_20() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___hash_size_20)); }
	inline int32_t get_hash_size_20() const { return ___hash_size_20; }
	inline int32_t* get_address_of_hash_size_20() { return &___hash_size_20; }
	inline void set_hash_size_20(int32_t value)
	{
		___hash_size_20 = value;
	}

	inline static int32_t get_offset_of_hash_bits_21() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___hash_bits_21)); }
	inline int32_t get_hash_bits_21() const { return ___hash_bits_21; }
	inline int32_t* get_address_of_hash_bits_21() { return &___hash_bits_21; }
	inline void set_hash_bits_21(int32_t value)
	{
		___hash_bits_21 = value;
	}

	inline static int32_t get_offset_of_hash_mask_22() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___hash_mask_22)); }
	inline int32_t get_hash_mask_22() const { return ___hash_mask_22; }
	inline int32_t* get_address_of_hash_mask_22() { return &___hash_mask_22; }
	inline void set_hash_mask_22(int32_t value)
	{
		___hash_mask_22 = value;
	}

	inline static int32_t get_offset_of_hash_shift_23() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___hash_shift_23)); }
	inline int32_t get_hash_shift_23() const { return ___hash_shift_23; }
	inline int32_t* get_address_of_hash_shift_23() { return &___hash_shift_23; }
	inline void set_hash_shift_23(int32_t value)
	{
		___hash_shift_23 = value;
	}

	inline static int32_t get_offset_of_block_start_24() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___block_start_24)); }
	inline int32_t get_block_start_24() const { return ___block_start_24; }
	inline int32_t* get_address_of_block_start_24() { return &___block_start_24; }
	inline void set_block_start_24(int32_t value)
	{
		___block_start_24 = value;
	}

	inline static int32_t get_offset_of_match_length_25() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___match_length_25)); }
	inline int32_t get_match_length_25() const { return ___match_length_25; }
	inline int32_t* get_address_of_match_length_25() { return &___match_length_25; }
	inline void set_match_length_25(int32_t value)
	{
		___match_length_25 = value;
	}

	inline static int32_t get_offset_of_prev_match_26() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___prev_match_26)); }
	inline int32_t get_prev_match_26() const { return ___prev_match_26; }
	inline int32_t* get_address_of_prev_match_26() { return &___prev_match_26; }
	inline void set_prev_match_26(int32_t value)
	{
		___prev_match_26 = value;
	}

	inline static int32_t get_offset_of_match_available_27() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___match_available_27)); }
	inline int32_t get_match_available_27() const { return ___match_available_27; }
	inline int32_t* get_address_of_match_available_27() { return &___match_available_27; }
	inline void set_match_available_27(int32_t value)
	{
		___match_available_27 = value;
	}

	inline static int32_t get_offset_of_strstart_28() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___strstart_28)); }
	inline int32_t get_strstart_28() const { return ___strstart_28; }
	inline int32_t* get_address_of_strstart_28() { return &___strstart_28; }
	inline void set_strstart_28(int32_t value)
	{
		___strstart_28 = value;
	}

	inline static int32_t get_offset_of_match_start_29() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___match_start_29)); }
	inline int32_t get_match_start_29() const { return ___match_start_29; }
	inline int32_t* get_address_of_match_start_29() { return &___match_start_29; }
	inline void set_match_start_29(int32_t value)
	{
		___match_start_29 = value;
	}

	inline static int32_t get_offset_of_lookahead_30() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___lookahead_30)); }
	inline int32_t get_lookahead_30() const { return ___lookahead_30; }
	inline int32_t* get_address_of_lookahead_30() { return &___lookahead_30; }
	inline void set_lookahead_30(int32_t value)
	{
		___lookahead_30 = value;
	}

	inline static int32_t get_offset_of_prev_length_31() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___prev_length_31)); }
	inline int32_t get_prev_length_31() const { return ___prev_length_31; }
	inline int32_t* get_address_of_prev_length_31() { return &___prev_length_31; }
	inline void set_prev_length_31(int32_t value)
	{
		___prev_length_31 = value;
	}

	inline static int32_t get_offset_of_max_chain_length_32() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___max_chain_length_32)); }
	inline int32_t get_max_chain_length_32() const { return ___max_chain_length_32; }
	inline int32_t* get_address_of_max_chain_length_32() { return &___max_chain_length_32; }
	inline void set_max_chain_length_32(int32_t value)
	{
		___max_chain_length_32 = value;
	}

	inline static int32_t get_offset_of_max_lazy_match_33() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___max_lazy_match_33)); }
	inline int32_t get_max_lazy_match_33() const { return ___max_lazy_match_33; }
	inline int32_t* get_address_of_max_lazy_match_33() { return &___max_lazy_match_33; }
	inline void set_max_lazy_match_33(int32_t value)
	{
		___max_lazy_match_33 = value;
	}

	inline static int32_t get_offset_of_level_34() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___level_34)); }
	inline int32_t get_level_34() const { return ___level_34; }
	inline int32_t* get_address_of_level_34() { return &___level_34; }
	inline void set_level_34(int32_t value)
	{
		___level_34 = value;
	}

	inline static int32_t get_offset_of_strategy_35() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___strategy_35)); }
	inline int32_t get_strategy_35() const { return ___strategy_35; }
	inline int32_t* get_address_of_strategy_35() { return &___strategy_35; }
	inline void set_strategy_35(int32_t value)
	{
		___strategy_35 = value;
	}

	inline static int32_t get_offset_of_good_match_36() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___good_match_36)); }
	inline int32_t get_good_match_36() const { return ___good_match_36; }
	inline int32_t* get_address_of_good_match_36() { return &___good_match_36; }
	inline void set_good_match_36(int32_t value)
	{
		___good_match_36 = value;
	}

	inline static int32_t get_offset_of_nice_match_37() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___nice_match_37)); }
	inline int32_t get_nice_match_37() const { return ___nice_match_37; }
	inline int32_t* get_address_of_nice_match_37() { return &___nice_match_37; }
	inline void set_nice_match_37(int32_t value)
	{
		___nice_match_37 = value;
	}

	inline static int32_t get_offset_of_dyn_ltree_38() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___dyn_ltree_38)); }
	inline Int16U5BU5D_t1343800226* get_dyn_ltree_38() const { return ___dyn_ltree_38; }
	inline Int16U5BU5D_t1343800226** get_address_of_dyn_ltree_38() { return &___dyn_ltree_38; }
	inline void set_dyn_ltree_38(Int16U5BU5D_t1343800226* value)
	{
		___dyn_ltree_38 = value;
		Il2CppCodeGenWriteBarrier((&___dyn_ltree_38), value);
	}

	inline static int32_t get_offset_of_dyn_dtree_39() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___dyn_dtree_39)); }
	inline Int16U5BU5D_t1343800226* get_dyn_dtree_39() const { return ___dyn_dtree_39; }
	inline Int16U5BU5D_t1343800226** get_address_of_dyn_dtree_39() { return &___dyn_dtree_39; }
	inline void set_dyn_dtree_39(Int16U5BU5D_t1343800226* value)
	{
		___dyn_dtree_39 = value;
		Il2CppCodeGenWriteBarrier((&___dyn_dtree_39), value);
	}

	inline static int32_t get_offset_of_bl_tree_40() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___bl_tree_40)); }
	inline Int16U5BU5D_t1343800226* get_bl_tree_40() const { return ___bl_tree_40; }
	inline Int16U5BU5D_t1343800226** get_address_of_bl_tree_40() { return &___bl_tree_40; }
	inline void set_bl_tree_40(Int16U5BU5D_t1343800226* value)
	{
		___bl_tree_40 = value;
		Il2CppCodeGenWriteBarrier((&___bl_tree_40), value);
	}

	inline static int32_t get_offset_of_l_desc_41() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___l_desc_41)); }
	inline Tree_t1635919820 * get_l_desc_41() const { return ___l_desc_41; }
	inline Tree_t1635919820 ** get_address_of_l_desc_41() { return &___l_desc_41; }
	inline void set_l_desc_41(Tree_t1635919820 * value)
	{
		___l_desc_41 = value;
		Il2CppCodeGenWriteBarrier((&___l_desc_41), value);
	}

	inline static int32_t get_offset_of_d_desc_42() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___d_desc_42)); }
	inline Tree_t1635919820 * get_d_desc_42() const { return ___d_desc_42; }
	inline Tree_t1635919820 ** get_address_of_d_desc_42() { return &___d_desc_42; }
	inline void set_d_desc_42(Tree_t1635919820 * value)
	{
		___d_desc_42 = value;
		Il2CppCodeGenWriteBarrier((&___d_desc_42), value);
	}

	inline static int32_t get_offset_of_bl_desc_43() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___bl_desc_43)); }
	inline Tree_t1635919820 * get_bl_desc_43() const { return ___bl_desc_43; }
	inline Tree_t1635919820 ** get_address_of_bl_desc_43() { return &___bl_desc_43; }
	inline void set_bl_desc_43(Tree_t1635919820 * value)
	{
		___bl_desc_43 = value;
		Il2CppCodeGenWriteBarrier((&___bl_desc_43), value);
	}

	inline static int32_t get_offset_of_bl_count_44() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___bl_count_44)); }
	inline Int16U5BU5D_t1343800226* get_bl_count_44() const { return ___bl_count_44; }
	inline Int16U5BU5D_t1343800226** get_address_of_bl_count_44() { return &___bl_count_44; }
	inline void set_bl_count_44(Int16U5BU5D_t1343800226* value)
	{
		___bl_count_44 = value;
		Il2CppCodeGenWriteBarrier((&___bl_count_44), value);
	}

	inline static int32_t get_offset_of_heap_45() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___heap_45)); }
	inline Int32U5BU5D_t1719863841* get_heap_45() const { return ___heap_45; }
	inline Int32U5BU5D_t1719863841** get_address_of_heap_45() { return &___heap_45; }
	inline void set_heap_45(Int32U5BU5D_t1719863841* value)
	{
		___heap_45 = value;
		Il2CppCodeGenWriteBarrier((&___heap_45), value);
	}

	inline static int32_t get_offset_of_heap_len_46() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___heap_len_46)); }
	inline int32_t get_heap_len_46() const { return ___heap_len_46; }
	inline int32_t* get_address_of_heap_len_46() { return &___heap_len_46; }
	inline void set_heap_len_46(int32_t value)
	{
		___heap_len_46 = value;
	}

	inline static int32_t get_offset_of_heap_max_47() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___heap_max_47)); }
	inline int32_t get_heap_max_47() const { return ___heap_max_47; }
	inline int32_t* get_address_of_heap_max_47() { return &___heap_max_47; }
	inline void set_heap_max_47(int32_t value)
	{
		___heap_max_47 = value;
	}

	inline static int32_t get_offset_of_depth_48() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___depth_48)); }
	inline ByteU5BU5D_t2378657911* get_depth_48() const { return ___depth_48; }
	inline ByteU5BU5D_t2378657911** get_address_of_depth_48() { return &___depth_48; }
	inline void set_depth_48(ByteU5BU5D_t2378657911* value)
	{
		___depth_48 = value;
		Il2CppCodeGenWriteBarrier((&___depth_48), value);
	}

	inline static int32_t get_offset_of_l_buf_49() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___l_buf_49)); }
	inline int32_t get_l_buf_49() const { return ___l_buf_49; }
	inline int32_t* get_address_of_l_buf_49() { return &___l_buf_49; }
	inline void set_l_buf_49(int32_t value)
	{
		___l_buf_49 = value;
	}

	inline static int32_t get_offset_of_lit_bufsize_50() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___lit_bufsize_50)); }
	inline int32_t get_lit_bufsize_50() const { return ___lit_bufsize_50; }
	inline int32_t* get_address_of_lit_bufsize_50() { return &___lit_bufsize_50; }
	inline void set_lit_bufsize_50(int32_t value)
	{
		___lit_bufsize_50 = value;
	}

	inline static int32_t get_offset_of_last_lit_51() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___last_lit_51)); }
	inline int32_t get_last_lit_51() const { return ___last_lit_51; }
	inline int32_t* get_address_of_last_lit_51() { return &___last_lit_51; }
	inline void set_last_lit_51(int32_t value)
	{
		___last_lit_51 = value;
	}

	inline static int32_t get_offset_of_d_buf_52() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___d_buf_52)); }
	inline int32_t get_d_buf_52() const { return ___d_buf_52; }
	inline int32_t* get_address_of_d_buf_52() { return &___d_buf_52; }
	inline void set_d_buf_52(int32_t value)
	{
		___d_buf_52 = value;
	}

	inline static int32_t get_offset_of_opt_len_53() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___opt_len_53)); }
	inline int32_t get_opt_len_53() const { return ___opt_len_53; }
	inline int32_t* get_address_of_opt_len_53() { return &___opt_len_53; }
	inline void set_opt_len_53(int32_t value)
	{
		___opt_len_53 = value;
	}

	inline static int32_t get_offset_of_static_len_54() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___static_len_54)); }
	inline int32_t get_static_len_54() const { return ___static_len_54; }
	inline int32_t* get_address_of_static_len_54() { return &___static_len_54; }
	inline void set_static_len_54(int32_t value)
	{
		___static_len_54 = value;
	}

	inline static int32_t get_offset_of_matches_55() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___matches_55)); }
	inline int32_t get_matches_55() const { return ___matches_55; }
	inline int32_t* get_address_of_matches_55() { return &___matches_55; }
	inline void set_matches_55(int32_t value)
	{
		___matches_55 = value;
	}

	inline static int32_t get_offset_of_last_eob_len_56() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___last_eob_len_56)); }
	inline int32_t get_last_eob_len_56() const { return ___last_eob_len_56; }
	inline int32_t* get_address_of_last_eob_len_56() { return &___last_eob_len_56; }
	inline void set_last_eob_len_56(int32_t value)
	{
		___last_eob_len_56 = value;
	}

	inline static int32_t get_offset_of_bi_buf_57() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___bi_buf_57)); }
	inline uint32_t get_bi_buf_57() const { return ___bi_buf_57; }
	inline uint32_t* get_address_of_bi_buf_57() { return &___bi_buf_57; }
	inline void set_bi_buf_57(uint32_t value)
	{
		___bi_buf_57 = value;
	}

	inline static int32_t get_offset_of_bi_valid_58() { return static_cast<int32_t>(offsetof(Deflate_t512577057, ___bi_valid_58)); }
	inline int32_t get_bi_valid_58() const { return ___bi_valid_58; }
	inline int32_t* get_address_of_bi_valid_58() { return &___bi_valid_58; }
	inline void set_bi_valid_58(int32_t value)
	{
		___bi_valid_58 = value;
	}
};

struct Deflate_t512577057_StaticFields
{
public:
	// Org.BouncyCastle.Utilities.Zlib.Deflate/Config[] Org.BouncyCastle.Utilities.Zlib.Deflate::config_table
	ConfigU5BU5D_t1051254441* ___config_table_0;
	// System.String[] Org.BouncyCastle.Utilities.Zlib.Deflate::z_errmsg
	StringU5BU5D_t1002137567* ___z_errmsg_1;

public:
	inline static int32_t get_offset_of_config_table_0() { return static_cast<int32_t>(offsetof(Deflate_t512577057_StaticFields, ___config_table_0)); }
	inline ConfigU5BU5D_t1051254441* get_config_table_0() const { return ___config_table_0; }
	inline ConfigU5BU5D_t1051254441** get_address_of_config_table_0() { return &___config_table_0; }
	inline void set_config_table_0(ConfigU5BU5D_t1051254441* value)
	{
		___config_table_0 = value;
		Il2CppCodeGenWriteBarrier((&___config_table_0), value);
	}

	inline static int32_t get_offset_of_z_errmsg_1() { return static_cast<int32_t>(offsetof(Deflate_t512577057_StaticFields, ___z_errmsg_1)); }
	inline StringU5BU5D_t1002137567* get_z_errmsg_1() const { return ___z_errmsg_1; }
	inline StringU5BU5D_t1002137567** get_address_of_z_errmsg_1() { return &___z_errmsg_1; }
	inline void set_z_errmsg_1(StringU5BU5D_t1002137567* value)
	{
		___z_errmsg_1 = value;
		Il2CppCodeGenWriteBarrier((&___z_errmsg_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFLATE_T512577057_H
#ifndef CONFIG_T3191347320_H
#define CONFIG_T3191347320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Zlib.Deflate/Config
struct  Config_t3191347320  : public RuntimeObject
{
public:
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate/Config::good_length
	int32_t ___good_length_0;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate/Config::max_lazy
	int32_t ___max_lazy_1;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate/Config::nice_length
	int32_t ___nice_length_2;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate/Config::max_chain
	int32_t ___max_chain_3;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate/Config::func
	int32_t ___func_4;

public:
	inline static int32_t get_offset_of_good_length_0() { return static_cast<int32_t>(offsetof(Config_t3191347320, ___good_length_0)); }
	inline int32_t get_good_length_0() const { return ___good_length_0; }
	inline int32_t* get_address_of_good_length_0() { return &___good_length_0; }
	inline void set_good_length_0(int32_t value)
	{
		___good_length_0 = value;
	}

	inline static int32_t get_offset_of_max_lazy_1() { return static_cast<int32_t>(offsetof(Config_t3191347320, ___max_lazy_1)); }
	inline int32_t get_max_lazy_1() const { return ___max_lazy_1; }
	inline int32_t* get_address_of_max_lazy_1() { return &___max_lazy_1; }
	inline void set_max_lazy_1(int32_t value)
	{
		___max_lazy_1 = value;
	}

	inline static int32_t get_offset_of_nice_length_2() { return static_cast<int32_t>(offsetof(Config_t3191347320, ___nice_length_2)); }
	inline int32_t get_nice_length_2() const { return ___nice_length_2; }
	inline int32_t* get_address_of_nice_length_2() { return &___nice_length_2; }
	inline void set_nice_length_2(int32_t value)
	{
		___nice_length_2 = value;
	}

	inline static int32_t get_offset_of_max_chain_3() { return static_cast<int32_t>(offsetof(Config_t3191347320, ___max_chain_3)); }
	inline int32_t get_max_chain_3() const { return ___max_chain_3; }
	inline int32_t* get_address_of_max_chain_3() { return &___max_chain_3; }
	inline void set_max_chain_3(int32_t value)
	{
		___max_chain_3 = value;
	}

	inline static int32_t get_offset_of_func_4() { return static_cast<int32_t>(offsetof(Config_t3191347320, ___func_4)); }
	inline int32_t get_func_4() const { return ___func_4; }
	inline int32_t* get_address_of_func_4() { return &___func_4; }
	inline void set_func_4(int32_t value)
	{
		___func_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIG_T3191347320_H
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
#ifndef RANDOM_T3721886259_H
#define RANDOM_T3721886259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t3721886259  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t1719863841* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t3721886259, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t3721886259, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t3721886259, ___SeedArray_2)); }
	inline Int32U5BU5D_t1719863841* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t1719863841** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t1719863841* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T3721886259_H
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
#ifndef X509EXTENSIONUTILITIES_T3871847780_H
#define X509EXTENSIONUTILITIES_T3871847780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.X509.Extension.X509ExtensionUtilities
struct  X509ExtensionUtilities_t3871847780  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONUTILITIES_T3871847780_H
#ifndef X509EXTENSIONBASE_T4169967820_H
#define X509EXTENSIONBASE_T4169967820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.X509.X509ExtensionBase
struct  X509ExtensionBase_t4169967820  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONBASE_T4169967820_H
#ifndef X509CERTIFICATEPARSER_T2496535579_H
#define X509CERTIFICATEPARSER_T2496535579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.X509.X509CertificateParser
struct  X509CertificateParser_t2496535579  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Asn1.Asn1Set Org.BouncyCastle.X509.X509CertificateParser::sData
	Asn1Set_t1950059424 * ___sData_1;
	// System.Int32 Org.BouncyCastle.X509.X509CertificateParser::sDataObjectCount
	int32_t ___sDataObjectCount_2;
	// System.IO.Stream Org.BouncyCastle.X509.X509CertificateParser::currentStream
	Stream_t2967449720 * ___currentStream_3;

public:
	inline static int32_t get_offset_of_sData_1() { return static_cast<int32_t>(offsetof(X509CertificateParser_t2496535579, ___sData_1)); }
	inline Asn1Set_t1950059424 * get_sData_1() const { return ___sData_1; }
	inline Asn1Set_t1950059424 ** get_address_of_sData_1() { return &___sData_1; }
	inline void set_sData_1(Asn1Set_t1950059424 * value)
	{
		___sData_1 = value;
		Il2CppCodeGenWriteBarrier((&___sData_1), value);
	}

	inline static int32_t get_offset_of_sDataObjectCount_2() { return static_cast<int32_t>(offsetof(X509CertificateParser_t2496535579, ___sDataObjectCount_2)); }
	inline int32_t get_sDataObjectCount_2() const { return ___sDataObjectCount_2; }
	inline int32_t* get_address_of_sDataObjectCount_2() { return &___sDataObjectCount_2; }
	inline void set_sDataObjectCount_2(int32_t value)
	{
		___sDataObjectCount_2 = value;
	}

	inline static int32_t get_offset_of_currentStream_3() { return static_cast<int32_t>(offsetof(X509CertificateParser_t2496535579, ___currentStream_3)); }
	inline Stream_t2967449720 * get_currentStream_3() const { return ___currentStream_3; }
	inline Stream_t2967449720 ** get_address_of_currentStream_3() { return &___currentStream_3; }
	inline void set_currentStream_3(Stream_t2967449720 * value)
	{
		___currentStream_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentStream_3), value);
	}
};

struct X509CertificateParser_t2496535579_StaticFields
{
public:
	// Org.BouncyCastle.X509.PemParser Org.BouncyCastle.X509.X509CertificateParser::PemCertParser
	PemParser_t1463922308 * ___PemCertParser_0;

public:
	inline static int32_t get_offset_of_PemCertParser_0() { return static_cast<int32_t>(offsetof(X509CertificateParser_t2496535579_StaticFields, ___PemCertParser_0)); }
	inline PemParser_t1463922308 * get_PemCertParser_0() const { return ___PemCertParser_0; }
	inline PemParser_t1463922308 ** get_address_of_PemCertParser_0() { return &___PemCertParser_0; }
	inline void set_PemCertParser_0(PemParser_t1463922308 * value)
	{
		___PemCertParser_0 = value;
		Il2CppCodeGenWriteBarrier((&___PemCertParser_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEPARSER_T2496535579_H
#ifndef MACUTILITIES_T2928012953_H
#define MACUTILITIES_T2928012953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Security.MacUtilities
struct  MacUtilities_t2928012953  : public RuntimeObject
{
public:

public:
};

struct MacUtilities_t2928012953_StaticFields
{
public:
	// System.Collections.IDictionary Org.BouncyCastle.Security.MacUtilities::algorithms
	RuntimeObject* ___algorithms_0;

public:
	inline static int32_t get_offset_of_algorithms_0() { return static_cast<int32_t>(offsetof(MacUtilities_t2928012953_StaticFields, ___algorithms_0)); }
	inline RuntimeObject* get_algorithms_0() const { return ___algorithms_0; }
	inline RuntimeObject** get_address_of_algorithms_0() { return &___algorithms_0; }
	inline void set_algorithms_0(RuntimeObject* value)
	{
		___algorithms_0 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACUTILITIES_T2928012953_H
#ifndef PEMPARSER_T1463922308_H
#define PEMPARSER_T1463922308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.X509.PemParser
struct  PemParser_t1463922308  : public RuntimeObject
{
public:
	// System.String Org.BouncyCastle.X509.PemParser::_header1
	String_t* ____header1_0;
	// System.String Org.BouncyCastle.X509.PemParser::_header2
	String_t* ____header2_1;
	// System.String Org.BouncyCastle.X509.PemParser::_footer1
	String_t* ____footer1_2;
	// System.String Org.BouncyCastle.X509.PemParser::_footer2
	String_t* ____footer2_3;

public:
	inline static int32_t get_offset_of__header1_0() { return static_cast<int32_t>(offsetof(PemParser_t1463922308, ____header1_0)); }
	inline String_t* get__header1_0() const { return ____header1_0; }
	inline String_t** get_address_of__header1_0() { return &____header1_0; }
	inline void set__header1_0(String_t* value)
	{
		____header1_0 = value;
		Il2CppCodeGenWriteBarrier((&____header1_0), value);
	}

	inline static int32_t get_offset_of__header2_1() { return static_cast<int32_t>(offsetof(PemParser_t1463922308, ____header2_1)); }
	inline String_t* get__header2_1() const { return ____header2_1; }
	inline String_t** get_address_of__header2_1() { return &____header2_1; }
	inline void set__header2_1(String_t* value)
	{
		____header2_1 = value;
		Il2CppCodeGenWriteBarrier((&____header2_1), value);
	}

	inline static int32_t get_offset_of__footer1_2() { return static_cast<int32_t>(offsetof(PemParser_t1463922308, ____footer1_2)); }
	inline String_t* get__footer1_2() const { return ____footer1_2; }
	inline String_t** get_address_of__footer1_2() { return &____footer1_2; }
	inline void set__footer1_2(String_t* value)
	{
		____footer1_2 = value;
		Il2CppCodeGenWriteBarrier((&____footer1_2), value);
	}

	inline static int32_t get_offset_of__footer2_3() { return static_cast<int32_t>(offsetof(PemParser_t1463922308, ____footer2_3)); }
	inline String_t* get__footer2_3() const { return ____footer2_3; }
	inline String_t** get_address_of__footer2_3() { return &____footer2_3; }
	inline void set__footer2_3(String_t* value)
	{
		____footer2_3 = value;
		Il2CppCodeGenWriteBarrier((&____footer2_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PEMPARSER_T1463922308_H
#ifndef TREE_T1635919820_H
#define TREE_T1635919820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Zlib.Tree
struct  Tree_t1635919820  : public RuntimeObject
{
public:
	// System.Int16[] Org.BouncyCastle.Utilities.Zlib.Tree::dyn_tree
	Int16U5BU5D_t1343800226* ___dyn_tree_8;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Tree::max_code
	int32_t ___max_code_9;
	// Org.BouncyCastle.Utilities.Zlib.StaticTree Org.BouncyCastle.Utilities.Zlib.Tree::stat_desc
	StaticTree_t1221227804 * ___stat_desc_10;

public:
	inline static int32_t get_offset_of_dyn_tree_8() { return static_cast<int32_t>(offsetof(Tree_t1635919820, ___dyn_tree_8)); }
	inline Int16U5BU5D_t1343800226* get_dyn_tree_8() const { return ___dyn_tree_8; }
	inline Int16U5BU5D_t1343800226** get_address_of_dyn_tree_8() { return &___dyn_tree_8; }
	inline void set_dyn_tree_8(Int16U5BU5D_t1343800226* value)
	{
		___dyn_tree_8 = value;
		Il2CppCodeGenWriteBarrier((&___dyn_tree_8), value);
	}

	inline static int32_t get_offset_of_max_code_9() { return static_cast<int32_t>(offsetof(Tree_t1635919820, ___max_code_9)); }
	inline int32_t get_max_code_9() const { return ___max_code_9; }
	inline int32_t* get_address_of_max_code_9() { return &___max_code_9; }
	inline void set_max_code_9(int32_t value)
	{
		___max_code_9 = value;
	}

	inline static int32_t get_offset_of_stat_desc_10() { return static_cast<int32_t>(offsetof(Tree_t1635919820, ___stat_desc_10)); }
	inline StaticTree_t1221227804 * get_stat_desc_10() const { return ___stat_desc_10; }
	inline StaticTree_t1221227804 ** get_address_of_stat_desc_10() { return &___stat_desc_10; }
	inline void set_stat_desc_10(StaticTree_t1221227804 * value)
	{
		___stat_desc_10 = value;
		Il2CppCodeGenWriteBarrier((&___stat_desc_10), value);
	}
};

struct Tree_t1635919820_StaticFields
{
public:
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.Tree::extra_lbits
	Int32U5BU5D_t1719863841* ___extra_lbits_0;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.Tree::extra_dbits
	Int32U5BU5D_t1719863841* ___extra_dbits_1;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.Tree::extra_blbits
	Int32U5BU5D_t1719863841* ___extra_blbits_2;
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.Tree::bl_order
	ByteU5BU5D_t2378657911* ___bl_order_3;
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.Tree::_dist_code
	ByteU5BU5D_t2378657911* ____dist_code_4;
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.Tree::_length_code
	ByteU5BU5D_t2378657911* ____length_code_5;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.Tree::base_length
	Int32U5BU5D_t1719863841* ___base_length_6;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.Tree::base_dist
	Int32U5BU5D_t1719863841* ___base_dist_7;

public:
	inline static int32_t get_offset_of_extra_lbits_0() { return static_cast<int32_t>(offsetof(Tree_t1635919820_StaticFields, ___extra_lbits_0)); }
	inline Int32U5BU5D_t1719863841* get_extra_lbits_0() const { return ___extra_lbits_0; }
	inline Int32U5BU5D_t1719863841** get_address_of_extra_lbits_0() { return &___extra_lbits_0; }
	inline void set_extra_lbits_0(Int32U5BU5D_t1719863841* value)
	{
		___extra_lbits_0 = value;
		Il2CppCodeGenWriteBarrier((&___extra_lbits_0), value);
	}

	inline static int32_t get_offset_of_extra_dbits_1() { return static_cast<int32_t>(offsetof(Tree_t1635919820_StaticFields, ___extra_dbits_1)); }
	inline Int32U5BU5D_t1719863841* get_extra_dbits_1() const { return ___extra_dbits_1; }
	inline Int32U5BU5D_t1719863841** get_address_of_extra_dbits_1() { return &___extra_dbits_1; }
	inline void set_extra_dbits_1(Int32U5BU5D_t1719863841* value)
	{
		___extra_dbits_1 = value;
		Il2CppCodeGenWriteBarrier((&___extra_dbits_1), value);
	}

	inline static int32_t get_offset_of_extra_blbits_2() { return static_cast<int32_t>(offsetof(Tree_t1635919820_StaticFields, ___extra_blbits_2)); }
	inline Int32U5BU5D_t1719863841* get_extra_blbits_2() const { return ___extra_blbits_2; }
	inline Int32U5BU5D_t1719863841** get_address_of_extra_blbits_2() { return &___extra_blbits_2; }
	inline void set_extra_blbits_2(Int32U5BU5D_t1719863841* value)
	{
		___extra_blbits_2 = value;
		Il2CppCodeGenWriteBarrier((&___extra_blbits_2), value);
	}

	inline static int32_t get_offset_of_bl_order_3() { return static_cast<int32_t>(offsetof(Tree_t1635919820_StaticFields, ___bl_order_3)); }
	inline ByteU5BU5D_t2378657911* get_bl_order_3() const { return ___bl_order_3; }
	inline ByteU5BU5D_t2378657911** get_address_of_bl_order_3() { return &___bl_order_3; }
	inline void set_bl_order_3(ByteU5BU5D_t2378657911* value)
	{
		___bl_order_3 = value;
		Il2CppCodeGenWriteBarrier((&___bl_order_3), value);
	}

	inline static int32_t get_offset_of__dist_code_4() { return static_cast<int32_t>(offsetof(Tree_t1635919820_StaticFields, ____dist_code_4)); }
	inline ByteU5BU5D_t2378657911* get__dist_code_4() const { return ____dist_code_4; }
	inline ByteU5BU5D_t2378657911** get_address_of__dist_code_4() { return &____dist_code_4; }
	inline void set__dist_code_4(ByteU5BU5D_t2378657911* value)
	{
		____dist_code_4 = value;
		Il2CppCodeGenWriteBarrier((&____dist_code_4), value);
	}

	inline static int32_t get_offset_of__length_code_5() { return static_cast<int32_t>(offsetof(Tree_t1635919820_StaticFields, ____length_code_5)); }
	inline ByteU5BU5D_t2378657911* get__length_code_5() const { return ____length_code_5; }
	inline ByteU5BU5D_t2378657911** get_address_of__length_code_5() { return &____length_code_5; }
	inline void set__length_code_5(ByteU5BU5D_t2378657911* value)
	{
		____length_code_5 = value;
		Il2CppCodeGenWriteBarrier((&____length_code_5), value);
	}

	inline static int32_t get_offset_of_base_length_6() { return static_cast<int32_t>(offsetof(Tree_t1635919820_StaticFields, ___base_length_6)); }
	inline Int32U5BU5D_t1719863841* get_base_length_6() const { return ___base_length_6; }
	inline Int32U5BU5D_t1719863841** get_address_of_base_length_6() { return &___base_length_6; }
	inline void set_base_length_6(Int32U5BU5D_t1719863841* value)
	{
		___base_length_6 = value;
		Il2CppCodeGenWriteBarrier((&___base_length_6), value);
	}

	inline static int32_t get_offset_of_base_dist_7() { return static_cast<int32_t>(offsetof(Tree_t1635919820_StaticFields, ___base_dist_7)); }
	inline Int32U5BU5D_t1719863841* get_base_dist_7() const { return ___base_dist_7; }
	inline Int32U5BU5D_t1719863841** get_address_of_base_dist_7() { return &___base_dist_7; }
	inline void set_base_dist_7(Int32U5BU5D_t1719863841* value)
	{
		___base_dist_7 = value;
		Il2CppCodeGenWriteBarrier((&___base_dist_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TREE_T1635919820_H
#ifndef STATICTREE_T1221227804_H
#define STATICTREE_T1221227804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Zlib.StaticTree
struct  StaticTree_t1221227804  : public RuntimeObject
{
public:
	// System.Int16[] Org.BouncyCastle.Utilities.Zlib.StaticTree::static_tree
	Int16U5BU5D_t1343800226* ___static_tree_5;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.StaticTree::extra_bits
	Int32U5BU5D_t1719863841* ___extra_bits_6;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.StaticTree::extra_base
	int32_t ___extra_base_7;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.StaticTree::elems
	int32_t ___elems_8;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.StaticTree::max_length
	int32_t ___max_length_9;

public:
	inline static int32_t get_offset_of_static_tree_5() { return static_cast<int32_t>(offsetof(StaticTree_t1221227804, ___static_tree_5)); }
	inline Int16U5BU5D_t1343800226* get_static_tree_5() const { return ___static_tree_5; }
	inline Int16U5BU5D_t1343800226** get_address_of_static_tree_5() { return &___static_tree_5; }
	inline void set_static_tree_5(Int16U5BU5D_t1343800226* value)
	{
		___static_tree_5 = value;
		Il2CppCodeGenWriteBarrier((&___static_tree_5), value);
	}

	inline static int32_t get_offset_of_extra_bits_6() { return static_cast<int32_t>(offsetof(StaticTree_t1221227804, ___extra_bits_6)); }
	inline Int32U5BU5D_t1719863841* get_extra_bits_6() const { return ___extra_bits_6; }
	inline Int32U5BU5D_t1719863841** get_address_of_extra_bits_6() { return &___extra_bits_6; }
	inline void set_extra_bits_6(Int32U5BU5D_t1719863841* value)
	{
		___extra_bits_6 = value;
		Il2CppCodeGenWriteBarrier((&___extra_bits_6), value);
	}

	inline static int32_t get_offset_of_extra_base_7() { return static_cast<int32_t>(offsetof(StaticTree_t1221227804, ___extra_base_7)); }
	inline int32_t get_extra_base_7() const { return ___extra_base_7; }
	inline int32_t* get_address_of_extra_base_7() { return &___extra_base_7; }
	inline void set_extra_base_7(int32_t value)
	{
		___extra_base_7 = value;
	}

	inline static int32_t get_offset_of_elems_8() { return static_cast<int32_t>(offsetof(StaticTree_t1221227804, ___elems_8)); }
	inline int32_t get_elems_8() const { return ___elems_8; }
	inline int32_t* get_address_of_elems_8() { return &___elems_8; }
	inline void set_elems_8(int32_t value)
	{
		___elems_8 = value;
	}

	inline static int32_t get_offset_of_max_length_9() { return static_cast<int32_t>(offsetof(StaticTree_t1221227804, ___max_length_9)); }
	inline int32_t get_max_length_9() const { return ___max_length_9; }
	inline int32_t* get_address_of_max_length_9() { return &___max_length_9; }
	inline void set_max_length_9(int32_t value)
	{
		___max_length_9 = value;
	}
};

struct StaticTree_t1221227804_StaticFields
{
public:
	// System.Int16[] Org.BouncyCastle.Utilities.Zlib.StaticTree::static_ltree
	Int16U5BU5D_t1343800226* ___static_ltree_0;
	// System.Int16[] Org.BouncyCastle.Utilities.Zlib.StaticTree::static_dtree
	Int16U5BU5D_t1343800226* ___static_dtree_1;
	// Org.BouncyCastle.Utilities.Zlib.StaticTree Org.BouncyCastle.Utilities.Zlib.StaticTree::static_l_desc
	StaticTree_t1221227804 * ___static_l_desc_2;
	// Org.BouncyCastle.Utilities.Zlib.StaticTree Org.BouncyCastle.Utilities.Zlib.StaticTree::static_d_desc
	StaticTree_t1221227804 * ___static_d_desc_3;
	// Org.BouncyCastle.Utilities.Zlib.StaticTree Org.BouncyCastle.Utilities.Zlib.StaticTree::static_bl_desc
	StaticTree_t1221227804 * ___static_bl_desc_4;

public:
	inline static int32_t get_offset_of_static_ltree_0() { return static_cast<int32_t>(offsetof(StaticTree_t1221227804_StaticFields, ___static_ltree_0)); }
	inline Int16U5BU5D_t1343800226* get_static_ltree_0() const { return ___static_ltree_0; }
	inline Int16U5BU5D_t1343800226** get_address_of_static_ltree_0() { return &___static_ltree_0; }
	inline void set_static_ltree_0(Int16U5BU5D_t1343800226* value)
	{
		___static_ltree_0 = value;
		Il2CppCodeGenWriteBarrier((&___static_ltree_0), value);
	}

	inline static int32_t get_offset_of_static_dtree_1() { return static_cast<int32_t>(offsetof(StaticTree_t1221227804_StaticFields, ___static_dtree_1)); }
	inline Int16U5BU5D_t1343800226* get_static_dtree_1() const { return ___static_dtree_1; }
	inline Int16U5BU5D_t1343800226** get_address_of_static_dtree_1() { return &___static_dtree_1; }
	inline void set_static_dtree_1(Int16U5BU5D_t1343800226* value)
	{
		___static_dtree_1 = value;
		Il2CppCodeGenWriteBarrier((&___static_dtree_1), value);
	}

	inline static int32_t get_offset_of_static_l_desc_2() { return static_cast<int32_t>(offsetof(StaticTree_t1221227804_StaticFields, ___static_l_desc_2)); }
	inline StaticTree_t1221227804 * get_static_l_desc_2() const { return ___static_l_desc_2; }
	inline StaticTree_t1221227804 ** get_address_of_static_l_desc_2() { return &___static_l_desc_2; }
	inline void set_static_l_desc_2(StaticTree_t1221227804 * value)
	{
		___static_l_desc_2 = value;
		Il2CppCodeGenWriteBarrier((&___static_l_desc_2), value);
	}

	inline static int32_t get_offset_of_static_d_desc_3() { return static_cast<int32_t>(offsetof(StaticTree_t1221227804_StaticFields, ___static_d_desc_3)); }
	inline StaticTree_t1221227804 * get_static_d_desc_3() const { return ___static_d_desc_3; }
	inline StaticTree_t1221227804 ** get_address_of_static_d_desc_3() { return &___static_d_desc_3; }
	inline void set_static_d_desc_3(StaticTree_t1221227804 * value)
	{
		___static_d_desc_3 = value;
		Il2CppCodeGenWriteBarrier((&___static_d_desc_3), value);
	}

	inline static int32_t get_offset_of_static_bl_desc_4() { return static_cast<int32_t>(offsetof(StaticTree_t1221227804_StaticFields, ___static_bl_desc_4)); }
	inline StaticTree_t1221227804 * get_static_bl_desc_4() const { return ___static_bl_desc_4; }
	inline StaticTree_t1221227804 ** get_address_of_static_bl_desc_4() { return &___static_bl_desc_4; }
	inline void set_static_bl_desc_4(StaticTree_t1221227804 * value)
	{
		___static_bl_desc_4 = value;
		Il2CppCodeGenWriteBarrier((&___static_bl_desc_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATICTREE_T1221227804_H
#ifndef INFLATE_T3588891804_H
#define INFLATE_T3588891804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Zlib.Inflate
struct  Inflate_t3588891804  : public RuntimeObject
{
public:
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::mode
	int32_t ___mode_0;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::method
	int32_t ___method_1;
	// System.Int64[] Org.BouncyCastle.Utilities.Zlib.Inflate::was
	Int64U5BU5D_t1142497760* ___was_2;
	// System.Int64 Org.BouncyCastle.Utilities.Zlib.Inflate::need
	int64_t ___need_3;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::marker
	int32_t ___marker_4;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::nowrap
	int32_t ___nowrap_5;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::wbits
	int32_t ___wbits_6;
	// Org.BouncyCastle.Utilities.Zlib.InfBlocks Org.BouncyCastle.Utilities.Zlib.Inflate::blocks
	InfBlocks_t745228855 * ___blocks_7;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(Inflate_t3588891804, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(Inflate_t3588891804, ___method_1)); }
	inline int32_t get_method_1() const { return ___method_1; }
	inline int32_t* get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(int32_t value)
	{
		___method_1 = value;
	}

	inline static int32_t get_offset_of_was_2() { return static_cast<int32_t>(offsetof(Inflate_t3588891804, ___was_2)); }
	inline Int64U5BU5D_t1142497760* get_was_2() const { return ___was_2; }
	inline Int64U5BU5D_t1142497760** get_address_of_was_2() { return &___was_2; }
	inline void set_was_2(Int64U5BU5D_t1142497760* value)
	{
		___was_2 = value;
		Il2CppCodeGenWriteBarrier((&___was_2), value);
	}

	inline static int32_t get_offset_of_need_3() { return static_cast<int32_t>(offsetof(Inflate_t3588891804, ___need_3)); }
	inline int64_t get_need_3() const { return ___need_3; }
	inline int64_t* get_address_of_need_3() { return &___need_3; }
	inline void set_need_3(int64_t value)
	{
		___need_3 = value;
	}

	inline static int32_t get_offset_of_marker_4() { return static_cast<int32_t>(offsetof(Inflate_t3588891804, ___marker_4)); }
	inline int32_t get_marker_4() const { return ___marker_4; }
	inline int32_t* get_address_of_marker_4() { return &___marker_4; }
	inline void set_marker_4(int32_t value)
	{
		___marker_4 = value;
	}

	inline static int32_t get_offset_of_nowrap_5() { return static_cast<int32_t>(offsetof(Inflate_t3588891804, ___nowrap_5)); }
	inline int32_t get_nowrap_5() const { return ___nowrap_5; }
	inline int32_t* get_address_of_nowrap_5() { return &___nowrap_5; }
	inline void set_nowrap_5(int32_t value)
	{
		___nowrap_5 = value;
	}

	inline static int32_t get_offset_of_wbits_6() { return static_cast<int32_t>(offsetof(Inflate_t3588891804, ___wbits_6)); }
	inline int32_t get_wbits_6() const { return ___wbits_6; }
	inline int32_t* get_address_of_wbits_6() { return &___wbits_6; }
	inline void set_wbits_6(int32_t value)
	{
		___wbits_6 = value;
	}

	inline static int32_t get_offset_of_blocks_7() { return static_cast<int32_t>(offsetof(Inflate_t3588891804, ___blocks_7)); }
	inline InfBlocks_t745228855 * get_blocks_7() const { return ___blocks_7; }
	inline InfBlocks_t745228855 ** get_address_of_blocks_7() { return &___blocks_7; }
	inline void set_blocks_7(InfBlocks_t745228855 * value)
	{
		___blocks_7 = value;
		Il2CppCodeGenWriteBarrier((&___blocks_7), value);
	}
};

struct Inflate_t3588891804_StaticFields
{
public:
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.Inflate::mark
	ByteU5BU5D_t2378657911* ___mark_8;

public:
	inline static int32_t get_offset_of_mark_8() { return static_cast<int32_t>(offsetof(Inflate_t3588891804_StaticFields, ___mark_8)); }
	inline ByteU5BU5D_t2378657911* get_mark_8() const { return ___mark_8; }
	inline ByteU5BU5D_t2378657911** get_address_of_mark_8() { return &___mark_8; }
	inline void set_mark_8(ByteU5BU5D_t2378657911* value)
	{
		___mark_8 = value;
		Il2CppCodeGenWriteBarrier((&___mark_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFLATE_T3588891804_H
#ifndef INFTREE_T2955799804_H
#define INFTREE_T2955799804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Zlib.InfTree
struct  InfTree_t2955799804  : public RuntimeObject
{
public:
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::hn
	Int32U5BU5D_t1719863841* ___hn_6;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::v
	Int32U5BU5D_t1719863841* ___v_7;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::c
	Int32U5BU5D_t1719863841* ___c_8;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::r
	Int32U5BU5D_t1719863841* ___r_9;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::u
	Int32U5BU5D_t1719863841* ___u_10;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::x
	Int32U5BU5D_t1719863841* ___x_11;

public:
	inline static int32_t get_offset_of_hn_6() { return static_cast<int32_t>(offsetof(InfTree_t2955799804, ___hn_6)); }
	inline Int32U5BU5D_t1719863841* get_hn_6() const { return ___hn_6; }
	inline Int32U5BU5D_t1719863841** get_address_of_hn_6() { return &___hn_6; }
	inline void set_hn_6(Int32U5BU5D_t1719863841* value)
	{
		___hn_6 = value;
		Il2CppCodeGenWriteBarrier((&___hn_6), value);
	}

	inline static int32_t get_offset_of_v_7() { return static_cast<int32_t>(offsetof(InfTree_t2955799804, ___v_7)); }
	inline Int32U5BU5D_t1719863841* get_v_7() const { return ___v_7; }
	inline Int32U5BU5D_t1719863841** get_address_of_v_7() { return &___v_7; }
	inline void set_v_7(Int32U5BU5D_t1719863841* value)
	{
		___v_7 = value;
		Il2CppCodeGenWriteBarrier((&___v_7), value);
	}

	inline static int32_t get_offset_of_c_8() { return static_cast<int32_t>(offsetof(InfTree_t2955799804, ___c_8)); }
	inline Int32U5BU5D_t1719863841* get_c_8() const { return ___c_8; }
	inline Int32U5BU5D_t1719863841** get_address_of_c_8() { return &___c_8; }
	inline void set_c_8(Int32U5BU5D_t1719863841* value)
	{
		___c_8 = value;
		Il2CppCodeGenWriteBarrier((&___c_8), value);
	}

	inline static int32_t get_offset_of_r_9() { return static_cast<int32_t>(offsetof(InfTree_t2955799804, ___r_9)); }
	inline Int32U5BU5D_t1719863841* get_r_9() const { return ___r_9; }
	inline Int32U5BU5D_t1719863841** get_address_of_r_9() { return &___r_9; }
	inline void set_r_9(Int32U5BU5D_t1719863841* value)
	{
		___r_9 = value;
		Il2CppCodeGenWriteBarrier((&___r_9), value);
	}

	inline static int32_t get_offset_of_u_10() { return static_cast<int32_t>(offsetof(InfTree_t2955799804, ___u_10)); }
	inline Int32U5BU5D_t1719863841* get_u_10() const { return ___u_10; }
	inline Int32U5BU5D_t1719863841** get_address_of_u_10() { return &___u_10; }
	inline void set_u_10(Int32U5BU5D_t1719863841* value)
	{
		___u_10 = value;
		Il2CppCodeGenWriteBarrier((&___u_10), value);
	}

	inline static int32_t get_offset_of_x_11() { return static_cast<int32_t>(offsetof(InfTree_t2955799804, ___x_11)); }
	inline Int32U5BU5D_t1719863841* get_x_11() const { return ___x_11; }
	inline Int32U5BU5D_t1719863841** get_address_of_x_11() { return &___x_11; }
	inline void set_x_11(Int32U5BU5D_t1719863841* value)
	{
		___x_11 = value;
		Il2CppCodeGenWriteBarrier((&___x_11), value);
	}
};

struct InfTree_t2955799804_StaticFields
{
public:
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::fixed_tl
	Int32U5BU5D_t1719863841* ___fixed_tl_0;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::fixed_td
	Int32U5BU5D_t1719863841* ___fixed_td_1;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::cplens
	Int32U5BU5D_t1719863841* ___cplens_2;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::cplext
	Int32U5BU5D_t1719863841* ___cplext_3;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::cpdist
	Int32U5BU5D_t1719863841* ___cpdist_4;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::cpdext
	Int32U5BU5D_t1719863841* ___cpdext_5;

public:
	inline static int32_t get_offset_of_fixed_tl_0() { return static_cast<int32_t>(offsetof(InfTree_t2955799804_StaticFields, ___fixed_tl_0)); }
	inline Int32U5BU5D_t1719863841* get_fixed_tl_0() const { return ___fixed_tl_0; }
	inline Int32U5BU5D_t1719863841** get_address_of_fixed_tl_0() { return &___fixed_tl_0; }
	inline void set_fixed_tl_0(Int32U5BU5D_t1719863841* value)
	{
		___fixed_tl_0 = value;
		Il2CppCodeGenWriteBarrier((&___fixed_tl_0), value);
	}

	inline static int32_t get_offset_of_fixed_td_1() { return static_cast<int32_t>(offsetof(InfTree_t2955799804_StaticFields, ___fixed_td_1)); }
	inline Int32U5BU5D_t1719863841* get_fixed_td_1() const { return ___fixed_td_1; }
	inline Int32U5BU5D_t1719863841** get_address_of_fixed_td_1() { return &___fixed_td_1; }
	inline void set_fixed_td_1(Int32U5BU5D_t1719863841* value)
	{
		___fixed_td_1 = value;
		Il2CppCodeGenWriteBarrier((&___fixed_td_1), value);
	}

	inline static int32_t get_offset_of_cplens_2() { return static_cast<int32_t>(offsetof(InfTree_t2955799804_StaticFields, ___cplens_2)); }
	inline Int32U5BU5D_t1719863841* get_cplens_2() const { return ___cplens_2; }
	inline Int32U5BU5D_t1719863841** get_address_of_cplens_2() { return &___cplens_2; }
	inline void set_cplens_2(Int32U5BU5D_t1719863841* value)
	{
		___cplens_2 = value;
		Il2CppCodeGenWriteBarrier((&___cplens_2), value);
	}

	inline static int32_t get_offset_of_cplext_3() { return static_cast<int32_t>(offsetof(InfTree_t2955799804_StaticFields, ___cplext_3)); }
	inline Int32U5BU5D_t1719863841* get_cplext_3() const { return ___cplext_3; }
	inline Int32U5BU5D_t1719863841** get_address_of_cplext_3() { return &___cplext_3; }
	inline void set_cplext_3(Int32U5BU5D_t1719863841* value)
	{
		___cplext_3 = value;
		Il2CppCodeGenWriteBarrier((&___cplext_3), value);
	}

	inline static int32_t get_offset_of_cpdist_4() { return static_cast<int32_t>(offsetof(InfTree_t2955799804_StaticFields, ___cpdist_4)); }
	inline Int32U5BU5D_t1719863841* get_cpdist_4() const { return ___cpdist_4; }
	inline Int32U5BU5D_t1719863841** get_address_of_cpdist_4() { return &___cpdist_4; }
	inline void set_cpdist_4(Int32U5BU5D_t1719863841* value)
	{
		___cpdist_4 = value;
		Il2CppCodeGenWriteBarrier((&___cpdist_4), value);
	}

	inline static int32_t get_offset_of_cpdext_5() { return static_cast<int32_t>(offsetof(InfTree_t2955799804_StaticFields, ___cpdext_5)); }
	inline Int32U5BU5D_t1719863841* get_cpdext_5() const { return ___cpdext_5; }
	inline Int32U5BU5D_t1719863841** get_address_of_cpdext_5() { return &___cpdext_5; }
	inline void set_cpdext_5(Int32U5BU5D_t1719863841* value)
	{
		___cpdext_5 = value;
		Il2CppCodeGenWriteBarrier((&___cpdext_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFTREE_T2955799804_H
#ifndef INFCODES_T3614527456_H
#define INFCODES_T3614527456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Zlib.InfCodes
struct  InfCodes_t3614527456  : public RuntimeObject
{
public:
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::mode
	int32_t ___mode_1;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::len
	int32_t ___len_2;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfCodes::tree
	Int32U5BU5D_t1719863841* ___tree_3;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::tree_index
	int32_t ___tree_index_4;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::need
	int32_t ___need_5;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::lit
	int32_t ___lit_6;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::get
	int32_t ___get_7;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::dist
	int32_t ___dist_8;
	// System.Byte Org.BouncyCastle.Utilities.Zlib.InfCodes::lbits
	uint8_t ___lbits_9;
	// System.Byte Org.BouncyCastle.Utilities.Zlib.InfCodes::dbits
	uint8_t ___dbits_10;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfCodes::ltree
	Int32U5BU5D_t1719863841* ___ltree_11;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::ltree_index
	int32_t ___ltree_index_12;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfCodes::dtree
	Int32U5BU5D_t1719863841* ___dtree_13;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::dtree_index
	int32_t ___dtree_index_14;

public:
	inline static int32_t get_offset_of_mode_1() { return static_cast<int32_t>(offsetof(InfCodes_t3614527456, ___mode_1)); }
	inline int32_t get_mode_1() const { return ___mode_1; }
	inline int32_t* get_address_of_mode_1() { return &___mode_1; }
	inline void set_mode_1(int32_t value)
	{
		___mode_1 = value;
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(InfCodes_t3614527456, ___len_2)); }
	inline int32_t get_len_2() const { return ___len_2; }
	inline int32_t* get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(int32_t value)
	{
		___len_2 = value;
	}

	inline static int32_t get_offset_of_tree_3() { return static_cast<int32_t>(offsetof(InfCodes_t3614527456, ___tree_3)); }
	inline Int32U5BU5D_t1719863841* get_tree_3() const { return ___tree_3; }
	inline Int32U5BU5D_t1719863841** get_address_of_tree_3() { return &___tree_3; }
	inline void set_tree_3(Int32U5BU5D_t1719863841* value)
	{
		___tree_3 = value;
		Il2CppCodeGenWriteBarrier((&___tree_3), value);
	}

	inline static int32_t get_offset_of_tree_index_4() { return static_cast<int32_t>(offsetof(InfCodes_t3614527456, ___tree_index_4)); }
	inline int32_t get_tree_index_4() const { return ___tree_index_4; }
	inline int32_t* get_address_of_tree_index_4() { return &___tree_index_4; }
	inline void set_tree_index_4(int32_t value)
	{
		___tree_index_4 = value;
	}

	inline static int32_t get_offset_of_need_5() { return static_cast<int32_t>(offsetof(InfCodes_t3614527456, ___need_5)); }
	inline int32_t get_need_5() const { return ___need_5; }
	inline int32_t* get_address_of_need_5() { return &___need_5; }
	inline void set_need_5(int32_t value)
	{
		___need_5 = value;
	}

	inline static int32_t get_offset_of_lit_6() { return static_cast<int32_t>(offsetof(InfCodes_t3614527456, ___lit_6)); }
	inline int32_t get_lit_6() const { return ___lit_6; }
	inline int32_t* get_address_of_lit_6() { return &___lit_6; }
	inline void set_lit_6(int32_t value)
	{
		___lit_6 = value;
	}

	inline static int32_t get_offset_of_get_7() { return static_cast<int32_t>(offsetof(InfCodes_t3614527456, ___get_7)); }
	inline int32_t get_get_7() const { return ___get_7; }
	inline int32_t* get_address_of_get_7() { return &___get_7; }
	inline void set_get_7(int32_t value)
	{
		___get_7 = value;
	}

	inline static int32_t get_offset_of_dist_8() { return static_cast<int32_t>(offsetof(InfCodes_t3614527456, ___dist_8)); }
	inline int32_t get_dist_8() const { return ___dist_8; }
	inline int32_t* get_address_of_dist_8() { return &___dist_8; }
	inline void set_dist_8(int32_t value)
	{
		___dist_8 = value;
	}

	inline static int32_t get_offset_of_lbits_9() { return static_cast<int32_t>(offsetof(InfCodes_t3614527456, ___lbits_9)); }
	inline uint8_t get_lbits_9() const { return ___lbits_9; }
	inline uint8_t* get_address_of_lbits_9() { return &___lbits_9; }
	inline void set_lbits_9(uint8_t value)
	{
		___lbits_9 = value;
	}

	inline static int32_t get_offset_of_dbits_10() { return static_cast<int32_t>(offsetof(InfCodes_t3614527456, ___dbits_10)); }
	inline uint8_t get_dbits_10() const { return ___dbits_10; }
	inline uint8_t* get_address_of_dbits_10() { return &___dbits_10; }
	inline void set_dbits_10(uint8_t value)
	{
		___dbits_10 = value;
	}

	inline static int32_t get_offset_of_ltree_11() { return static_cast<int32_t>(offsetof(InfCodes_t3614527456, ___ltree_11)); }
	inline Int32U5BU5D_t1719863841* get_ltree_11() const { return ___ltree_11; }
	inline Int32U5BU5D_t1719863841** get_address_of_ltree_11() { return &___ltree_11; }
	inline void set_ltree_11(Int32U5BU5D_t1719863841* value)
	{
		___ltree_11 = value;
		Il2CppCodeGenWriteBarrier((&___ltree_11), value);
	}

	inline static int32_t get_offset_of_ltree_index_12() { return static_cast<int32_t>(offsetof(InfCodes_t3614527456, ___ltree_index_12)); }
	inline int32_t get_ltree_index_12() const { return ___ltree_index_12; }
	inline int32_t* get_address_of_ltree_index_12() { return &___ltree_index_12; }
	inline void set_ltree_index_12(int32_t value)
	{
		___ltree_index_12 = value;
	}

	inline static int32_t get_offset_of_dtree_13() { return static_cast<int32_t>(offsetof(InfCodes_t3614527456, ___dtree_13)); }
	inline Int32U5BU5D_t1719863841* get_dtree_13() const { return ___dtree_13; }
	inline Int32U5BU5D_t1719863841** get_address_of_dtree_13() { return &___dtree_13; }
	inline void set_dtree_13(Int32U5BU5D_t1719863841* value)
	{
		___dtree_13 = value;
		Il2CppCodeGenWriteBarrier((&___dtree_13), value);
	}

	inline static int32_t get_offset_of_dtree_index_14() { return static_cast<int32_t>(offsetof(InfCodes_t3614527456, ___dtree_index_14)); }
	inline int32_t get_dtree_index_14() const { return ___dtree_index_14; }
	inline int32_t* get_address_of_dtree_index_14() { return &___dtree_index_14; }
	inline void set_dtree_index_14(int32_t value)
	{
		___dtree_index_14 = value;
	}
};

struct InfCodes_t3614527456_StaticFields
{
public:
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfCodes::inflate_mask
	Int32U5BU5D_t1719863841* ___inflate_mask_0;

public:
	inline static int32_t get_offset_of_inflate_mask_0() { return static_cast<int32_t>(offsetof(InfCodes_t3614527456_StaticFields, ___inflate_mask_0)); }
	inline Int32U5BU5D_t1719863841* get_inflate_mask_0() const { return ___inflate_mask_0; }
	inline Int32U5BU5D_t1719863841** get_address_of_inflate_mask_0() { return &___inflate_mask_0; }
	inline void set_inflate_mask_0(Int32U5BU5D_t1719863841* value)
	{
		___inflate_mask_0 = value;
		Il2CppCodeGenWriteBarrier((&___inflate_mask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFCODES_T3614527456_H
#ifndef INFBLOCKS_T745228855_H
#define INFBLOCKS_T745228855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Zlib.InfBlocks
struct  InfBlocks_t745228855  : public RuntimeObject
{
public:
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::mode
	int32_t ___mode_2;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::left
	int32_t ___left_3;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::table
	int32_t ___table_4;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::index
	int32_t ___index_5;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfBlocks::blens
	Int32U5BU5D_t1719863841* ___blens_6;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfBlocks::bb
	Int32U5BU5D_t1719863841* ___bb_7;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfBlocks::tb
	Int32U5BU5D_t1719863841* ___tb_8;
	// Org.BouncyCastle.Utilities.Zlib.InfCodes Org.BouncyCastle.Utilities.Zlib.InfBlocks::codes
	InfCodes_t3614527456 * ___codes_9;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::last
	int32_t ___last_10;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::bitk
	int32_t ___bitk_11;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::bitb
	int32_t ___bitb_12;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfBlocks::hufts
	Int32U5BU5D_t1719863841* ___hufts_13;
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.InfBlocks::window
	ByteU5BU5D_t2378657911* ___window_14;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::end
	int32_t ___end_15;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::read
	int32_t ___read_16;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::write
	int32_t ___write_17;
	// System.Object Org.BouncyCastle.Utilities.Zlib.InfBlocks::checkfn
	RuntimeObject * ___checkfn_18;
	// System.Int64 Org.BouncyCastle.Utilities.Zlib.InfBlocks::check
	int64_t ___check_19;
	// Org.BouncyCastle.Utilities.Zlib.InfTree Org.BouncyCastle.Utilities.Zlib.InfBlocks::inftree
	InfTree_t2955799804 * ___inftree_20;

public:
	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(InfBlocks_t745228855, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_left_3() { return static_cast<int32_t>(offsetof(InfBlocks_t745228855, ___left_3)); }
	inline int32_t get_left_3() const { return ___left_3; }
	inline int32_t* get_address_of_left_3() { return &___left_3; }
	inline void set_left_3(int32_t value)
	{
		___left_3 = value;
	}

	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(InfBlocks_t745228855, ___table_4)); }
	inline int32_t get_table_4() const { return ___table_4; }
	inline int32_t* get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(int32_t value)
	{
		___table_4 = value;
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(InfBlocks_t745228855, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}

	inline static int32_t get_offset_of_blens_6() { return static_cast<int32_t>(offsetof(InfBlocks_t745228855, ___blens_6)); }
	inline Int32U5BU5D_t1719863841* get_blens_6() const { return ___blens_6; }
	inline Int32U5BU5D_t1719863841** get_address_of_blens_6() { return &___blens_6; }
	inline void set_blens_6(Int32U5BU5D_t1719863841* value)
	{
		___blens_6 = value;
		Il2CppCodeGenWriteBarrier((&___blens_6), value);
	}

	inline static int32_t get_offset_of_bb_7() { return static_cast<int32_t>(offsetof(InfBlocks_t745228855, ___bb_7)); }
	inline Int32U5BU5D_t1719863841* get_bb_7() const { return ___bb_7; }
	inline Int32U5BU5D_t1719863841** get_address_of_bb_7() { return &___bb_7; }
	inline void set_bb_7(Int32U5BU5D_t1719863841* value)
	{
		___bb_7 = value;
		Il2CppCodeGenWriteBarrier((&___bb_7), value);
	}

	inline static int32_t get_offset_of_tb_8() { return static_cast<int32_t>(offsetof(InfBlocks_t745228855, ___tb_8)); }
	inline Int32U5BU5D_t1719863841* get_tb_8() const { return ___tb_8; }
	inline Int32U5BU5D_t1719863841** get_address_of_tb_8() { return &___tb_8; }
	inline void set_tb_8(Int32U5BU5D_t1719863841* value)
	{
		___tb_8 = value;
		Il2CppCodeGenWriteBarrier((&___tb_8), value);
	}

	inline static int32_t get_offset_of_codes_9() { return static_cast<int32_t>(offsetof(InfBlocks_t745228855, ___codes_9)); }
	inline InfCodes_t3614527456 * get_codes_9() const { return ___codes_9; }
	inline InfCodes_t3614527456 ** get_address_of_codes_9() { return &___codes_9; }
	inline void set_codes_9(InfCodes_t3614527456 * value)
	{
		___codes_9 = value;
		Il2CppCodeGenWriteBarrier((&___codes_9), value);
	}

	inline static int32_t get_offset_of_last_10() { return static_cast<int32_t>(offsetof(InfBlocks_t745228855, ___last_10)); }
	inline int32_t get_last_10() const { return ___last_10; }
	inline int32_t* get_address_of_last_10() { return &___last_10; }
	inline void set_last_10(int32_t value)
	{
		___last_10 = value;
	}

	inline static int32_t get_offset_of_bitk_11() { return static_cast<int32_t>(offsetof(InfBlocks_t745228855, ___bitk_11)); }
	inline int32_t get_bitk_11() const { return ___bitk_11; }
	inline int32_t* get_address_of_bitk_11() { return &___bitk_11; }
	inline void set_bitk_11(int32_t value)
	{
		___bitk_11 = value;
	}

	inline static int32_t get_offset_of_bitb_12() { return static_cast<int32_t>(offsetof(InfBlocks_t745228855, ___bitb_12)); }
	inline int32_t get_bitb_12() const { return ___bitb_12; }
	inline int32_t* get_address_of_bitb_12() { return &___bitb_12; }
	inline void set_bitb_12(int32_t value)
	{
		___bitb_12 = value;
	}

	inline static int32_t get_offset_of_hufts_13() { return static_cast<int32_t>(offsetof(InfBlocks_t745228855, ___hufts_13)); }
	inline Int32U5BU5D_t1719863841* get_hufts_13() const { return ___hufts_13; }
	inline Int32U5BU5D_t1719863841** get_address_of_hufts_13() { return &___hufts_13; }
	inline void set_hufts_13(Int32U5BU5D_t1719863841* value)
	{
		___hufts_13 = value;
		Il2CppCodeGenWriteBarrier((&___hufts_13), value);
	}

	inline static int32_t get_offset_of_window_14() { return static_cast<int32_t>(offsetof(InfBlocks_t745228855, ___window_14)); }
	inline ByteU5BU5D_t2378657911* get_window_14() const { return ___window_14; }
	inline ByteU5BU5D_t2378657911** get_address_of_window_14() { return &___window_14; }
	inline void set_window_14(ByteU5BU5D_t2378657911* value)
	{
		___window_14 = value;
		Il2CppCodeGenWriteBarrier((&___window_14), value);
	}

	inline static int32_t get_offset_of_end_15() { return static_cast<int32_t>(offsetof(InfBlocks_t745228855, ___end_15)); }
	inline int32_t get_end_15() const { return ___end_15; }
	inline int32_t* get_address_of_end_15() { return &___end_15; }
	inline void set_end_15(int32_t value)
	{
		___end_15 = value;
	}

	inline static int32_t get_offset_of_read_16() { return static_cast<int32_t>(offsetof(InfBlocks_t745228855, ___read_16)); }
	inline int32_t get_read_16() const { return ___read_16; }
	inline int32_t* get_address_of_read_16() { return &___read_16; }
	inline void set_read_16(int32_t value)
	{
		___read_16 = value;
	}

	inline static int32_t get_offset_of_write_17() { return static_cast<int32_t>(offsetof(InfBlocks_t745228855, ___write_17)); }
	inline int32_t get_write_17() const { return ___write_17; }
	inline int32_t* get_address_of_write_17() { return &___write_17; }
	inline void set_write_17(int32_t value)
	{
		___write_17 = value;
	}

	inline static int32_t get_offset_of_checkfn_18() { return static_cast<int32_t>(offsetof(InfBlocks_t745228855, ___checkfn_18)); }
	inline RuntimeObject * get_checkfn_18() const { return ___checkfn_18; }
	inline RuntimeObject ** get_address_of_checkfn_18() { return &___checkfn_18; }
	inline void set_checkfn_18(RuntimeObject * value)
	{
		___checkfn_18 = value;
		Il2CppCodeGenWriteBarrier((&___checkfn_18), value);
	}

	inline static int32_t get_offset_of_check_19() { return static_cast<int32_t>(offsetof(InfBlocks_t745228855, ___check_19)); }
	inline int64_t get_check_19() const { return ___check_19; }
	inline int64_t* get_address_of_check_19() { return &___check_19; }
	inline void set_check_19(int64_t value)
	{
		___check_19 = value;
	}

	inline static int32_t get_offset_of_inftree_20() { return static_cast<int32_t>(offsetof(InfBlocks_t745228855, ___inftree_20)); }
	inline InfTree_t2955799804 * get_inftree_20() const { return ___inftree_20; }
	inline InfTree_t2955799804 ** get_address_of_inftree_20() { return &___inftree_20; }
	inline void set_inftree_20(InfTree_t2955799804 * value)
	{
		___inftree_20 = value;
		Il2CppCodeGenWriteBarrier((&___inftree_20), value);
	}
};

struct InfBlocks_t745228855_StaticFields
{
public:
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfBlocks::inflate_mask
	Int32U5BU5D_t1719863841* ___inflate_mask_0;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfBlocks::border
	Int32U5BU5D_t1719863841* ___border_1;

public:
	inline static int32_t get_offset_of_inflate_mask_0() { return static_cast<int32_t>(offsetof(InfBlocks_t745228855_StaticFields, ___inflate_mask_0)); }
	inline Int32U5BU5D_t1719863841* get_inflate_mask_0() const { return ___inflate_mask_0; }
	inline Int32U5BU5D_t1719863841** get_address_of_inflate_mask_0() { return &___inflate_mask_0; }
	inline void set_inflate_mask_0(Int32U5BU5D_t1719863841* value)
	{
		___inflate_mask_0 = value;
		Il2CppCodeGenWriteBarrier((&___inflate_mask_0), value);
	}

	inline static int32_t get_offset_of_border_1() { return static_cast<int32_t>(offsetof(InfBlocks_t745228855_StaticFields, ___border_1)); }
	inline Int32U5BU5D_t1719863841* get_border_1() const { return ___border_1; }
	inline Int32U5BU5D_t1719863841** get_address_of_border_1() { return &___border_1; }
	inline void set_border_1(Int32U5BU5D_t1719863841* value)
	{
		___border_1 = value;
		Il2CppCodeGenWriteBarrier((&___border_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFBLOCKS_T745228855_H
#ifndef ZSTREAM_T370990292_H
#define ZSTREAM_T370990292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Zlib.ZStream
struct  ZStream_t370990292  : public RuntimeObject
{
public:
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.ZStream::next_in
	ByteU5BU5D_t2378657911* ___next_in_0;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::next_in_index
	int32_t ___next_in_index_1;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::avail_in
	int32_t ___avail_in_2;
	// System.Int64 Org.BouncyCastle.Utilities.Zlib.ZStream::total_in
	int64_t ___total_in_3;
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.ZStream::next_out
	ByteU5BU5D_t2378657911* ___next_out_4;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::next_out_index
	int32_t ___next_out_index_5;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::avail_out
	int32_t ___avail_out_6;
	// System.Int64 Org.BouncyCastle.Utilities.Zlib.ZStream::total_out
	int64_t ___total_out_7;
	// System.String Org.BouncyCastle.Utilities.Zlib.ZStream::msg
	String_t* ___msg_8;
	// Org.BouncyCastle.Utilities.Zlib.Deflate Org.BouncyCastle.Utilities.Zlib.ZStream::dstate
	Deflate_t512577057 * ___dstate_9;
	// Org.BouncyCastle.Utilities.Zlib.Inflate Org.BouncyCastle.Utilities.Zlib.ZStream::istate
	Inflate_t3588891804 * ___istate_10;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::data_type
	int32_t ___data_type_11;
	// System.Int64 Org.BouncyCastle.Utilities.Zlib.ZStream::adler
	int64_t ___adler_12;
	// Org.BouncyCastle.Utilities.Zlib.Adler32 Org.BouncyCastle.Utilities.Zlib.ZStream::_adler
	Adler32_t1236584662 * ____adler_13;

public:
	inline static int32_t get_offset_of_next_in_0() { return static_cast<int32_t>(offsetof(ZStream_t370990292, ___next_in_0)); }
	inline ByteU5BU5D_t2378657911* get_next_in_0() const { return ___next_in_0; }
	inline ByteU5BU5D_t2378657911** get_address_of_next_in_0() { return &___next_in_0; }
	inline void set_next_in_0(ByteU5BU5D_t2378657911* value)
	{
		___next_in_0 = value;
		Il2CppCodeGenWriteBarrier((&___next_in_0), value);
	}

	inline static int32_t get_offset_of_next_in_index_1() { return static_cast<int32_t>(offsetof(ZStream_t370990292, ___next_in_index_1)); }
	inline int32_t get_next_in_index_1() const { return ___next_in_index_1; }
	inline int32_t* get_address_of_next_in_index_1() { return &___next_in_index_1; }
	inline void set_next_in_index_1(int32_t value)
	{
		___next_in_index_1 = value;
	}

	inline static int32_t get_offset_of_avail_in_2() { return static_cast<int32_t>(offsetof(ZStream_t370990292, ___avail_in_2)); }
	inline int32_t get_avail_in_2() const { return ___avail_in_2; }
	inline int32_t* get_address_of_avail_in_2() { return &___avail_in_2; }
	inline void set_avail_in_2(int32_t value)
	{
		___avail_in_2 = value;
	}

	inline static int32_t get_offset_of_total_in_3() { return static_cast<int32_t>(offsetof(ZStream_t370990292, ___total_in_3)); }
	inline int64_t get_total_in_3() const { return ___total_in_3; }
	inline int64_t* get_address_of_total_in_3() { return &___total_in_3; }
	inline void set_total_in_3(int64_t value)
	{
		___total_in_3 = value;
	}

	inline static int32_t get_offset_of_next_out_4() { return static_cast<int32_t>(offsetof(ZStream_t370990292, ___next_out_4)); }
	inline ByteU5BU5D_t2378657911* get_next_out_4() const { return ___next_out_4; }
	inline ByteU5BU5D_t2378657911** get_address_of_next_out_4() { return &___next_out_4; }
	inline void set_next_out_4(ByteU5BU5D_t2378657911* value)
	{
		___next_out_4 = value;
		Il2CppCodeGenWriteBarrier((&___next_out_4), value);
	}

	inline static int32_t get_offset_of_next_out_index_5() { return static_cast<int32_t>(offsetof(ZStream_t370990292, ___next_out_index_5)); }
	inline int32_t get_next_out_index_5() const { return ___next_out_index_5; }
	inline int32_t* get_address_of_next_out_index_5() { return &___next_out_index_5; }
	inline void set_next_out_index_5(int32_t value)
	{
		___next_out_index_5 = value;
	}

	inline static int32_t get_offset_of_avail_out_6() { return static_cast<int32_t>(offsetof(ZStream_t370990292, ___avail_out_6)); }
	inline int32_t get_avail_out_6() const { return ___avail_out_6; }
	inline int32_t* get_address_of_avail_out_6() { return &___avail_out_6; }
	inline void set_avail_out_6(int32_t value)
	{
		___avail_out_6 = value;
	}

	inline static int32_t get_offset_of_total_out_7() { return static_cast<int32_t>(offsetof(ZStream_t370990292, ___total_out_7)); }
	inline int64_t get_total_out_7() const { return ___total_out_7; }
	inline int64_t* get_address_of_total_out_7() { return &___total_out_7; }
	inline void set_total_out_7(int64_t value)
	{
		___total_out_7 = value;
	}

	inline static int32_t get_offset_of_msg_8() { return static_cast<int32_t>(offsetof(ZStream_t370990292, ___msg_8)); }
	inline String_t* get_msg_8() const { return ___msg_8; }
	inline String_t** get_address_of_msg_8() { return &___msg_8; }
	inline void set_msg_8(String_t* value)
	{
		___msg_8 = value;
		Il2CppCodeGenWriteBarrier((&___msg_8), value);
	}

	inline static int32_t get_offset_of_dstate_9() { return static_cast<int32_t>(offsetof(ZStream_t370990292, ___dstate_9)); }
	inline Deflate_t512577057 * get_dstate_9() const { return ___dstate_9; }
	inline Deflate_t512577057 ** get_address_of_dstate_9() { return &___dstate_9; }
	inline void set_dstate_9(Deflate_t512577057 * value)
	{
		___dstate_9 = value;
		Il2CppCodeGenWriteBarrier((&___dstate_9), value);
	}

	inline static int32_t get_offset_of_istate_10() { return static_cast<int32_t>(offsetof(ZStream_t370990292, ___istate_10)); }
	inline Inflate_t3588891804 * get_istate_10() const { return ___istate_10; }
	inline Inflate_t3588891804 ** get_address_of_istate_10() { return &___istate_10; }
	inline void set_istate_10(Inflate_t3588891804 * value)
	{
		___istate_10 = value;
		Il2CppCodeGenWriteBarrier((&___istate_10), value);
	}

	inline static int32_t get_offset_of_data_type_11() { return static_cast<int32_t>(offsetof(ZStream_t370990292, ___data_type_11)); }
	inline int32_t get_data_type_11() const { return ___data_type_11; }
	inline int32_t* get_address_of_data_type_11() { return &___data_type_11; }
	inline void set_data_type_11(int32_t value)
	{
		___data_type_11 = value;
	}

	inline static int32_t get_offset_of_adler_12() { return static_cast<int32_t>(offsetof(ZStream_t370990292, ___adler_12)); }
	inline int64_t get_adler_12() const { return ___adler_12; }
	inline int64_t* get_address_of_adler_12() { return &___adler_12; }
	inline void set_adler_12(int64_t value)
	{
		___adler_12 = value;
	}

	inline static int32_t get_offset_of__adler_13() { return static_cast<int32_t>(offsetof(ZStream_t370990292, ____adler_13)); }
	inline Adler32_t1236584662 * get__adler_13() const { return ____adler_13; }
	inline Adler32_t1236584662 ** get_address_of__adler_13() { return &____adler_13; }
	inline void set__adler_13(Adler32_t1236584662 * value)
	{
		____adler_13 = value;
		Il2CppCodeGenWriteBarrier((&____adler_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZSTREAM_T370990292_H
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
#ifndef ENUMERABLEPROXY_T3706571488_H
#define ENUMERABLEPROXY_T3706571488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Collections.EnumerableProxy
struct  EnumerableProxy_t3706571488  : public RuntimeObject
{
public:
	// System.Collections.IEnumerable Org.BouncyCastle.Utilities.Collections.EnumerableProxy::inner
	RuntimeObject* ___inner_0;

public:
	inline static int32_t get_offset_of_inner_0() { return static_cast<int32_t>(offsetof(EnumerableProxy_t3706571488, ___inner_0)); }
	inline RuntimeObject* get_inner_0() const { return ___inner_0; }
	inline RuntimeObject** get_address_of_inner_0() { return &___inner_0; }
	inline void set_inner_0(RuntimeObject* value)
	{
		___inner_0 = value;
		Il2CppCodeGenWriteBarrier((&___inner_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLEPROXY_T3706571488_H
#ifndef ECCURVE_T1909311897_H
#define ECCURVE_T1909311897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.EC.ECCurve
struct  ECCurve_t1909311897  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Math.Field.IFiniteField Org.BouncyCastle.Math.EC.ECCurve::m_field
	RuntimeObject* ___m_field_0;
	// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECCurve::m_a
	ECFieldElement_t2319583272 * ___m_a_1;
	// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECCurve::m_b
	ECFieldElement_t2319583272 * ___m_b_2;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.ECCurve::m_order
	BigInteger_t389431677 * ___m_order_3;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.ECCurve::m_cofactor
	BigInteger_t389431677 * ___m_cofactor_4;
	// System.Int32 Org.BouncyCastle.Math.EC.ECCurve::m_coord
	int32_t ___m_coord_5;
	// Org.BouncyCastle.Math.EC.Endo.ECEndomorphism Org.BouncyCastle.Math.EC.ECCurve::m_endomorphism
	RuntimeObject* ___m_endomorphism_6;
	// Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier Org.BouncyCastle.Math.EC.ECCurve::m_multiplier
	RuntimeObject* ___m_multiplier_7;

public:
	inline static int32_t get_offset_of_m_field_0() { return static_cast<int32_t>(offsetof(ECCurve_t1909311897, ___m_field_0)); }
	inline RuntimeObject* get_m_field_0() const { return ___m_field_0; }
	inline RuntimeObject** get_address_of_m_field_0() { return &___m_field_0; }
	inline void set_m_field_0(RuntimeObject* value)
	{
		___m_field_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_field_0), value);
	}

	inline static int32_t get_offset_of_m_a_1() { return static_cast<int32_t>(offsetof(ECCurve_t1909311897, ___m_a_1)); }
	inline ECFieldElement_t2319583272 * get_m_a_1() const { return ___m_a_1; }
	inline ECFieldElement_t2319583272 ** get_address_of_m_a_1() { return &___m_a_1; }
	inline void set_m_a_1(ECFieldElement_t2319583272 * value)
	{
		___m_a_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_a_1), value);
	}

	inline static int32_t get_offset_of_m_b_2() { return static_cast<int32_t>(offsetof(ECCurve_t1909311897, ___m_b_2)); }
	inline ECFieldElement_t2319583272 * get_m_b_2() const { return ___m_b_2; }
	inline ECFieldElement_t2319583272 ** get_address_of_m_b_2() { return &___m_b_2; }
	inline void set_m_b_2(ECFieldElement_t2319583272 * value)
	{
		___m_b_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_b_2), value);
	}

	inline static int32_t get_offset_of_m_order_3() { return static_cast<int32_t>(offsetof(ECCurve_t1909311897, ___m_order_3)); }
	inline BigInteger_t389431677 * get_m_order_3() const { return ___m_order_3; }
	inline BigInteger_t389431677 ** get_address_of_m_order_3() { return &___m_order_3; }
	inline void set_m_order_3(BigInteger_t389431677 * value)
	{
		___m_order_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_order_3), value);
	}

	inline static int32_t get_offset_of_m_cofactor_4() { return static_cast<int32_t>(offsetof(ECCurve_t1909311897, ___m_cofactor_4)); }
	inline BigInteger_t389431677 * get_m_cofactor_4() const { return ___m_cofactor_4; }
	inline BigInteger_t389431677 ** get_address_of_m_cofactor_4() { return &___m_cofactor_4; }
	inline void set_m_cofactor_4(BigInteger_t389431677 * value)
	{
		___m_cofactor_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_cofactor_4), value);
	}

	inline static int32_t get_offset_of_m_coord_5() { return static_cast<int32_t>(offsetof(ECCurve_t1909311897, ___m_coord_5)); }
	inline int32_t get_m_coord_5() const { return ___m_coord_5; }
	inline int32_t* get_address_of_m_coord_5() { return &___m_coord_5; }
	inline void set_m_coord_5(int32_t value)
	{
		___m_coord_5 = value;
	}

	inline static int32_t get_offset_of_m_endomorphism_6() { return static_cast<int32_t>(offsetof(ECCurve_t1909311897, ___m_endomorphism_6)); }
	inline RuntimeObject* get_m_endomorphism_6() const { return ___m_endomorphism_6; }
	inline RuntimeObject** get_address_of_m_endomorphism_6() { return &___m_endomorphism_6; }
	inline void set_m_endomorphism_6(RuntimeObject* value)
	{
		___m_endomorphism_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_endomorphism_6), value);
	}

	inline static int32_t get_offset_of_m_multiplier_7() { return static_cast<int32_t>(offsetof(ECCurve_t1909311897, ___m_multiplier_7)); }
	inline RuntimeObject* get_m_multiplier_7() const { return ___m_multiplier_7; }
	inline RuntimeObject** get_address_of_m_multiplier_7() { return &___m_multiplier_7; }
	inline void set_m_multiplier_7(RuntimeObject* value)
	{
		___m_multiplier_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_multiplier_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ECCURVE_T1909311897_H
#ifndef GF2POLYNOMIAL_T308023256_H
#define GF2POLYNOMIAL_T308023256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.Field.GF2Polynomial
struct  GF2Polynomial_t308023256  : public RuntimeObject
{
public:
	// System.Int32[] Org.BouncyCastle.Math.Field.GF2Polynomial::exponents
	Int32U5BU5D_t1719863841* ___exponents_0;

public:
	inline static int32_t get_offset_of_exponents_0() { return static_cast<int32_t>(offsetof(GF2Polynomial_t308023256, ___exponents_0)); }
	inline Int32U5BU5D_t1719863841* get_exponents_0() const { return ___exponents_0; }
	inline Int32U5BU5D_t1719863841** get_address_of_exponents_0() { return &___exponents_0; }
	inline void set_exponents_0(Int32U5BU5D_t1719863841* value)
	{
		___exponents_0 = value;
		Il2CppCodeGenWriteBarrier((&___exponents_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GF2POLYNOMIAL_T308023256_H
#ifndef GENERICPOLYNOMIALEXTENSIONFIELD_T4197029887_H
#define GENERICPOLYNOMIALEXTENSIONFIELD_T4197029887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.Field.GenericPolynomialExtensionField
struct  GenericPolynomialExtensionField_t4197029887  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Math.Field.IFiniteField Org.BouncyCastle.Math.Field.GenericPolynomialExtensionField::subfield
	RuntimeObject* ___subfield_0;
	// Org.BouncyCastle.Math.Field.IPolynomial Org.BouncyCastle.Math.Field.GenericPolynomialExtensionField::minimalPolynomial
	RuntimeObject* ___minimalPolynomial_1;

public:
	inline static int32_t get_offset_of_subfield_0() { return static_cast<int32_t>(offsetof(GenericPolynomialExtensionField_t4197029887, ___subfield_0)); }
	inline RuntimeObject* get_subfield_0() const { return ___subfield_0; }
	inline RuntimeObject** get_address_of_subfield_0() { return &___subfield_0; }
	inline void set_subfield_0(RuntimeObject* value)
	{
		___subfield_0 = value;
		Il2CppCodeGenWriteBarrier((&___subfield_0), value);
	}

	inline static int32_t get_offset_of_minimalPolynomial_1() { return static_cast<int32_t>(offsetof(GenericPolynomialExtensionField_t4197029887, ___minimalPolynomial_1)); }
	inline RuntimeObject* get_minimalPolynomial_1() const { return ___minimalPolynomial_1; }
	inline RuntimeObject** get_address_of_minimalPolynomial_1() { return &___minimalPolynomial_1; }
	inline void set_minimalPolynomial_1(RuntimeObject* value)
	{
		___minimalPolynomial_1 = value;
		Il2CppCodeGenWriteBarrier((&___minimalPolynomial_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICPOLYNOMIALEXTENSIONFIELD_T4197029887_H
#ifndef PRIMEFIELD_T1819012201_H
#define PRIMEFIELD_T1819012201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.Field.PrimeField
struct  PrimeField_t1819012201  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.Field.PrimeField::characteristic
	BigInteger_t389431677 * ___characteristic_0;

public:
	inline static int32_t get_offset_of_characteristic_0() { return static_cast<int32_t>(offsetof(PrimeField_t1819012201, ___characteristic_0)); }
	inline BigInteger_t389431677 * get_characteristic_0() const { return ___characteristic_0; }
	inline BigInteger_t389431677 ** get_address_of_characteristic_0() { return &___characteristic_0; }
	inline void set_characteristic_0(BigInteger_t389431677 * value)
	{
		___characteristic_0 = value;
		Il2CppCodeGenWriteBarrier((&___characteristic_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMEFIELD_T1819012201_H
#ifndef WNAFUTILITIES_T1281464128_H
#define WNAFUTILITIES_T1281464128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities
struct  WNafUtilities_t1281464128  : public RuntimeObject
{
public:

public:
};

struct WNafUtilities_t1281464128_StaticFields
{
public:
	// System.String Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::PRECOMP_NAME
	String_t* ___PRECOMP_NAME_0;
	// System.Int32[] Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::DEFAULT_WINDOW_SIZE_CUTOFFS
	Int32U5BU5D_t1719863841* ___DEFAULT_WINDOW_SIZE_CUTOFFS_1;
	// System.Byte[] Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::EMPTY_BYTES
	ByteU5BU5D_t2378657911* ___EMPTY_BYTES_2;
	// System.Int32[] Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::EMPTY_INTS
	Int32U5BU5D_t1719863841* ___EMPTY_INTS_3;
	// Org.BouncyCastle.Math.EC.ECPoint[] Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::EMPTY_POINTS
	ECPointU5BU5D_t1088474823* ___EMPTY_POINTS_4;

public:
	inline static int32_t get_offset_of_PRECOMP_NAME_0() { return static_cast<int32_t>(offsetof(WNafUtilities_t1281464128_StaticFields, ___PRECOMP_NAME_0)); }
	inline String_t* get_PRECOMP_NAME_0() const { return ___PRECOMP_NAME_0; }
	inline String_t** get_address_of_PRECOMP_NAME_0() { return &___PRECOMP_NAME_0; }
	inline void set_PRECOMP_NAME_0(String_t* value)
	{
		___PRECOMP_NAME_0 = value;
		Il2CppCodeGenWriteBarrier((&___PRECOMP_NAME_0), value);
	}

	inline static int32_t get_offset_of_DEFAULT_WINDOW_SIZE_CUTOFFS_1() { return static_cast<int32_t>(offsetof(WNafUtilities_t1281464128_StaticFields, ___DEFAULT_WINDOW_SIZE_CUTOFFS_1)); }
	inline Int32U5BU5D_t1719863841* get_DEFAULT_WINDOW_SIZE_CUTOFFS_1() const { return ___DEFAULT_WINDOW_SIZE_CUTOFFS_1; }
	inline Int32U5BU5D_t1719863841** get_address_of_DEFAULT_WINDOW_SIZE_CUTOFFS_1() { return &___DEFAULT_WINDOW_SIZE_CUTOFFS_1; }
	inline void set_DEFAULT_WINDOW_SIZE_CUTOFFS_1(Int32U5BU5D_t1719863841* value)
	{
		___DEFAULT_WINDOW_SIZE_CUTOFFS_1 = value;
		Il2CppCodeGenWriteBarrier((&___DEFAULT_WINDOW_SIZE_CUTOFFS_1), value);
	}

	inline static int32_t get_offset_of_EMPTY_BYTES_2() { return static_cast<int32_t>(offsetof(WNafUtilities_t1281464128_StaticFields, ___EMPTY_BYTES_2)); }
	inline ByteU5BU5D_t2378657911* get_EMPTY_BYTES_2() const { return ___EMPTY_BYTES_2; }
	inline ByteU5BU5D_t2378657911** get_address_of_EMPTY_BYTES_2() { return &___EMPTY_BYTES_2; }
	inline void set_EMPTY_BYTES_2(ByteU5BU5D_t2378657911* value)
	{
		___EMPTY_BYTES_2 = value;
		Il2CppCodeGenWriteBarrier((&___EMPTY_BYTES_2), value);
	}

	inline static int32_t get_offset_of_EMPTY_INTS_3() { return static_cast<int32_t>(offsetof(WNafUtilities_t1281464128_StaticFields, ___EMPTY_INTS_3)); }
	inline Int32U5BU5D_t1719863841* get_EMPTY_INTS_3() const { return ___EMPTY_INTS_3; }
	inline Int32U5BU5D_t1719863841** get_address_of_EMPTY_INTS_3() { return &___EMPTY_INTS_3; }
	inline void set_EMPTY_INTS_3(Int32U5BU5D_t1719863841* value)
	{
		___EMPTY_INTS_3 = value;
		Il2CppCodeGenWriteBarrier((&___EMPTY_INTS_3), value);
	}

	inline static int32_t get_offset_of_EMPTY_POINTS_4() { return static_cast<int32_t>(offsetof(WNafUtilities_t1281464128_StaticFields, ___EMPTY_POINTS_4)); }
	inline ECPointU5BU5D_t1088474823* get_EMPTY_POINTS_4() const { return ___EMPTY_POINTS_4; }
	inline ECPointU5BU5D_t1088474823** get_address_of_EMPTY_POINTS_4() { return &___EMPTY_POINTS_4; }
	inline void set_EMPTY_POINTS_4(ECPointU5BU5D_t1088474823* value)
	{
		___EMPTY_POINTS_4 = value;
		Il2CppCodeGenWriteBarrier((&___EMPTY_POINTS_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WNAFUTILITIES_T1281464128_H
#ifndef WNAFPRECOMPINFO_T1051308630_H
#define WNAFPRECOMPINFO_T1051308630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo
struct  WNafPreCompInfo_t1051308630  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Math.EC.ECPoint[] Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo::m_preComp
	ECPointU5BU5D_t1088474823* ___m_preComp_0;
	// Org.BouncyCastle.Math.EC.ECPoint[] Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo::m_preCompNeg
	ECPointU5BU5D_t1088474823* ___m_preCompNeg_1;
	// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo::m_twice
	ECPoint_t383189042 * ___m_twice_2;

public:
	inline static int32_t get_offset_of_m_preComp_0() { return static_cast<int32_t>(offsetof(WNafPreCompInfo_t1051308630, ___m_preComp_0)); }
	inline ECPointU5BU5D_t1088474823* get_m_preComp_0() const { return ___m_preComp_0; }
	inline ECPointU5BU5D_t1088474823** get_address_of_m_preComp_0() { return &___m_preComp_0; }
	inline void set_m_preComp_0(ECPointU5BU5D_t1088474823* value)
	{
		___m_preComp_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_preComp_0), value);
	}

	inline static int32_t get_offset_of_m_preCompNeg_1() { return static_cast<int32_t>(offsetof(WNafPreCompInfo_t1051308630, ___m_preCompNeg_1)); }
	inline ECPointU5BU5D_t1088474823* get_m_preCompNeg_1() const { return ___m_preCompNeg_1; }
	inline ECPointU5BU5D_t1088474823** get_address_of_m_preCompNeg_1() { return &___m_preCompNeg_1; }
	inline void set_m_preCompNeg_1(ECPointU5BU5D_t1088474823* value)
	{
		___m_preCompNeg_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_preCompNeg_1), value);
	}

	inline static int32_t get_offset_of_m_twice_2() { return static_cast<int32_t>(offsetof(WNafPreCompInfo_t1051308630, ___m_twice_2)); }
	inline ECPoint_t383189042 * get_m_twice_2() const { return ___m_twice_2; }
	inline ECPoint_t383189042 ** get_address_of_m_twice_2() { return &___m_twice_2; }
	inline void set_m_twice_2(ECPoint_t383189042 * value)
	{
		___m_twice_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_twice_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WNAFPRECOMPINFO_T1051308630_H
#ifndef INTERLEAVE_T1689061622_H
#define INTERLEAVE_T1689061622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.Raw.Interleave
struct  Interleave_t1689061622  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERLEAVE_T1689061622_H
#ifndef MOD_T1384582199_H
#define MOD_T1384582199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.Raw.Mod
struct  Mod_t1384582199  : public RuntimeObject
{
public:

public:
};

struct Mod_t1384582199_StaticFields
{
public:
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Math.Raw.Mod::RandomSource
	SecureRandom_t1090558902 * ___RandomSource_0;

public:
	inline static int32_t get_offset_of_RandomSource_0() { return static_cast<int32_t>(offsetof(Mod_t1384582199_StaticFields, ___RandomSource_0)); }
	inline SecureRandom_t1090558902 * get_RandomSource_0() const { return ___RandomSource_0; }
	inline SecureRandom_t1090558902 ** get_address_of_RandomSource_0() { return &___RandomSource_0; }
	inline void set_RandomSource_0(SecureRandom_t1090558902 * value)
	{
		___RandomSource_0 = value;
		Il2CppCodeGenWriteBarrier((&___RandomSource_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOD_T1384582199_H
#ifndef NAT_T3840610752_H
#define NAT_T3840610752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.Raw.Nat
struct  Nat_t3840610752  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAT_T3840610752_H
#ifndef FIXEDPOINTUTILITIES_T1606525610_H
#define FIXEDPOINTUTILITIES_T1606525610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.EC.Multiplier.FixedPointUtilities
struct  FixedPointUtilities_t1606525610  : public RuntimeObject
{
public:

public:
};

struct FixedPointUtilities_t1606525610_StaticFields
{
public:
	// System.String Org.BouncyCastle.Math.EC.Multiplier.FixedPointUtilities::PRECOMP_NAME
	String_t* ___PRECOMP_NAME_0;

public:
	inline static int32_t get_offset_of_PRECOMP_NAME_0() { return static_cast<int32_t>(offsetof(FixedPointUtilities_t1606525610_StaticFields, ___PRECOMP_NAME_0)); }
	inline String_t* get_PRECOMP_NAME_0() const { return ___PRECOMP_NAME_0; }
	inline String_t** get_address_of_PRECOMP_NAME_0() { return &___PRECOMP_NAME_0; }
	inline void set_PRECOMP_NAME_0(String_t* value)
	{
		___PRECOMP_NAME_0 = value;
		Il2CppCodeGenWriteBarrier((&___PRECOMP_NAME_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDPOINTUTILITIES_T1606525610_H
#ifndef NAT128_T1339270807_H
#define NAT128_T1339270807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.Raw.Nat128
struct  Nat128_t1339270807  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAT128_T1339270807_H
#ifndef NAT160_T1571466854_H
#define NAT160_T1571466854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.Raw.Nat160
struct  Nat160_t1571466854  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAT160_T1571466854_H
#ifndef FINITEFIELDS_T2170135078_H
#define FINITEFIELDS_T2170135078_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.Field.FiniteFields
struct  FiniteFields_t2170135078  : public RuntimeObject
{
public:

public:
};

struct FiniteFields_t2170135078_StaticFields
{
public:
	// Org.BouncyCastle.Math.Field.IFiniteField Org.BouncyCastle.Math.Field.FiniteFields::GF_2
	RuntimeObject* ___GF_2_0;
	// Org.BouncyCastle.Math.Field.IFiniteField Org.BouncyCastle.Math.Field.FiniteFields::GF_3
	RuntimeObject* ___GF_3_1;

public:
	inline static int32_t get_offset_of_GF_2_0() { return static_cast<int32_t>(offsetof(FiniteFields_t2170135078_StaticFields, ___GF_2_0)); }
	inline RuntimeObject* get_GF_2_0() const { return ___GF_2_0; }
	inline RuntimeObject** get_address_of_GF_2_0() { return &___GF_2_0; }
	inline void set_GF_2_0(RuntimeObject* value)
	{
		___GF_2_0 = value;
		Il2CppCodeGenWriteBarrier((&___GF_2_0), value);
	}

	inline static int32_t get_offset_of_GF_3_1() { return static_cast<int32_t>(offsetof(FiniteFields_t2170135078_StaticFields, ___GF_3_1)); }
	inline RuntimeObject* get_GF_3_1() const { return ___GF_3_1; }
	inline RuntimeObject** get_address_of_GF_3_1() { return &___GF_3_1; }
	inline void set_GF_3_1(RuntimeObject* value)
	{
		___GF_3_1 = value;
		Il2CppCodeGenWriteBarrier((&___GF_3_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FINITEFIELDS_T2170135078_H
#ifndef NAT224_T1222151187_H
#define NAT224_T1222151187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.Raw.Nat224
struct  Nat224_t1222151187  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAT224_T1222151187_H
#ifndef NAT192_T2336480941_H
#define NAT192_T2336480941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.Raw.Nat192
struct  Nat192_t2336480941  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAT192_T2336480941_H
#ifndef NAT256_T3838535535_H
#define NAT256_T3838535535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.Raw.Nat256
struct  Nat256_t3838535535  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAT256_T3838535535_H
#ifndef DIGESTUTILITIES_T348511742_H
#define DIGESTUTILITIES_T348511742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Security.DigestUtilities
struct  DigestUtilities_t348511742  : public RuntimeObject
{
public:

public:
};

struct DigestUtilities_t348511742_StaticFields
{
public:
	// System.Collections.IDictionary Org.BouncyCastle.Security.DigestUtilities::algorithms
	RuntimeObject* ___algorithms_0;
	// System.Collections.IDictionary Org.BouncyCastle.Security.DigestUtilities::oids
	RuntimeObject* ___oids_1;

public:
	inline static int32_t get_offset_of_algorithms_0() { return static_cast<int32_t>(offsetof(DigestUtilities_t348511742_StaticFields, ___algorithms_0)); }
	inline RuntimeObject* get_algorithms_0() const { return ___algorithms_0; }
	inline RuntimeObject** get_address_of_algorithms_0() { return &___algorithms_0; }
	inline void set_algorithms_0(RuntimeObject* value)
	{
		___algorithms_0 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_0), value);
	}

	inline static int32_t get_offset_of_oids_1() { return static_cast<int32_t>(offsetof(DigestUtilities_t348511742_StaticFields, ___oids_1)); }
	inline RuntimeObject* get_oids_1() const { return ___oids_1; }
	inline RuntimeObject** get_address_of_oids_1() { return &___oids_1; }
	inline void set_oids_1(RuntimeObject* value)
	{
		___oids_1 = value;
		Il2CppCodeGenWriteBarrier((&___oids_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIGESTUTILITIES_T348511742_H
#ifndef NAT576_T290428460_H
#define NAT576_T290428460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.Raw.Nat576
struct  Nat576_t290428460  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAT576_T290428460_H
#ifndef GLVTYPEBPARAMETERS_T4145277670_H
#define GLVTYPEBPARAMETERS_T4145277670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters
struct  GlvTypeBParameters_t4145277670  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters::m_beta
	BigInteger_t389431677 * ___m_beta_0;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters::m_lambda
	BigInteger_t389431677 * ___m_lambda_1;
	// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters::m_v1
	BigIntegerU5BU5D_t3505201136* ___m_v1_2;
	// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters::m_v2
	BigIntegerU5BU5D_t3505201136* ___m_v2_3;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters::m_g1
	BigInteger_t389431677 * ___m_g1_4;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters::m_g2
	BigInteger_t389431677 * ___m_g2_5;
	// System.Int32 Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters::m_bits
	int32_t ___m_bits_6;

public:
	inline static int32_t get_offset_of_m_beta_0() { return static_cast<int32_t>(offsetof(GlvTypeBParameters_t4145277670, ___m_beta_0)); }
	inline BigInteger_t389431677 * get_m_beta_0() const { return ___m_beta_0; }
	inline BigInteger_t389431677 ** get_address_of_m_beta_0() { return &___m_beta_0; }
	inline void set_m_beta_0(BigInteger_t389431677 * value)
	{
		___m_beta_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_beta_0), value);
	}

	inline static int32_t get_offset_of_m_lambda_1() { return static_cast<int32_t>(offsetof(GlvTypeBParameters_t4145277670, ___m_lambda_1)); }
	inline BigInteger_t389431677 * get_m_lambda_1() const { return ___m_lambda_1; }
	inline BigInteger_t389431677 ** get_address_of_m_lambda_1() { return &___m_lambda_1; }
	inline void set_m_lambda_1(BigInteger_t389431677 * value)
	{
		___m_lambda_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_lambda_1), value);
	}

	inline static int32_t get_offset_of_m_v1_2() { return static_cast<int32_t>(offsetof(GlvTypeBParameters_t4145277670, ___m_v1_2)); }
	inline BigIntegerU5BU5D_t3505201136* get_m_v1_2() const { return ___m_v1_2; }
	inline BigIntegerU5BU5D_t3505201136** get_address_of_m_v1_2() { return &___m_v1_2; }
	inline void set_m_v1_2(BigIntegerU5BU5D_t3505201136* value)
	{
		___m_v1_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_v1_2), value);
	}

	inline static int32_t get_offset_of_m_v2_3() { return static_cast<int32_t>(offsetof(GlvTypeBParameters_t4145277670, ___m_v2_3)); }
	inline BigIntegerU5BU5D_t3505201136* get_m_v2_3() const { return ___m_v2_3; }
	inline BigIntegerU5BU5D_t3505201136** get_address_of_m_v2_3() { return &___m_v2_3; }
	inline void set_m_v2_3(BigIntegerU5BU5D_t3505201136* value)
	{
		___m_v2_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_v2_3), value);
	}

	inline static int32_t get_offset_of_m_g1_4() { return static_cast<int32_t>(offsetof(GlvTypeBParameters_t4145277670, ___m_g1_4)); }
	inline BigInteger_t389431677 * get_m_g1_4() const { return ___m_g1_4; }
	inline BigInteger_t389431677 ** get_address_of_m_g1_4() { return &___m_g1_4; }
	inline void set_m_g1_4(BigInteger_t389431677 * value)
	{
		___m_g1_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_g1_4), value);
	}

	inline static int32_t get_offset_of_m_g2_5() { return static_cast<int32_t>(offsetof(GlvTypeBParameters_t4145277670, ___m_g2_5)); }
	inline BigInteger_t389431677 * get_m_g2_5() const { return ___m_g2_5; }
	inline BigInteger_t389431677 ** get_address_of_m_g2_5() { return &___m_g2_5; }
	inline void set_m_g2_5(BigInteger_t389431677 * value)
	{
		___m_g2_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_g2_5), value);
	}

	inline static int32_t get_offset_of_m_bits_6() { return static_cast<int32_t>(offsetof(GlvTypeBParameters_t4145277670, ___m_bits_6)); }
	inline int32_t get_m_bits_6() const { return ___m_bits_6; }
	inline int32_t* get_address_of_m_bits_6() { return &___m_bits_6; }
	inline void set_m_bits_6(int32_t value)
	{
		___m_bits_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLVTYPEBPARAMETERS_T4145277670_H
#ifndef FIXEDPOINTPRECOMPINFO_T2924576709_H
#define FIXEDPOINTPRECOMPINFO_T2924576709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.EC.Multiplier.FixedPointPreCompInfo
struct  FixedPointPreCompInfo_t2924576709  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Math.EC.ECPoint[] Org.BouncyCastle.Math.EC.Multiplier.FixedPointPreCompInfo::m_preComp
	ECPointU5BU5D_t1088474823* ___m_preComp_0;
	// System.Int32 Org.BouncyCastle.Math.EC.Multiplier.FixedPointPreCompInfo::m_width
	int32_t ___m_width_1;

public:
	inline static int32_t get_offset_of_m_preComp_0() { return static_cast<int32_t>(offsetof(FixedPointPreCompInfo_t2924576709, ___m_preComp_0)); }
	inline ECPointU5BU5D_t1088474823* get_m_preComp_0() const { return ___m_preComp_0; }
	inline ECPointU5BU5D_t1088474823** get_address_of_m_preComp_0() { return &___m_preComp_0; }
	inline void set_m_preComp_0(ECPointU5BU5D_t1088474823* value)
	{
		___m_preComp_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_preComp_0), value);
	}

	inline static int32_t get_offset_of_m_width_1() { return static_cast<int32_t>(offsetof(FixedPointPreCompInfo_t2924576709, ___m_width_1)); }
	inline int32_t get_m_width_1() const { return ___m_width_1; }
	inline int32_t* get_address_of_m_width_1() { return &___m_width_1; }
	inline void set_m_width_1(int32_t value)
	{
		___m_width_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDPOINTPRECOMPINFO_T2924576709_H
#ifndef ABSTRACTECMULTIPLIER_T3481008734_H
#define ABSTRACTECMULTIPLIER_T3481008734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
struct  AbstractECMultiplier_t3481008734  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTECMULTIPLIER_T3481008734_H
#ifndef NAT512_T825407916_H
#define NAT512_T825407916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.Raw.Nat512
struct  Nat512_t825407916  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAT512_T825407916_H
#ifndef WTAUNAFPRECOMPINFO_T1588627001_H
#define WTAUNAFPRECOMPINFO_T1588627001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.EC.Multiplier.WTauNafPreCompInfo
struct  WTauNafPreCompInfo_t1588627001  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Math.EC.AbstractF2mPoint[] Org.BouncyCastle.Math.EC.Multiplier.WTauNafPreCompInfo::m_preComp
	AbstractF2mPointU5BU5D_t1020976720* ___m_preComp_0;

public:
	inline static int32_t get_offset_of_m_preComp_0() { return static_cast<int32_t>(offsetof(WTauNafPreCompInfo_t1588627001, ___m_preComp_0)); }
	inline AbstractF2mPointU5BU5D_t1020976720* get_m_preComp_0() const { return ___m_preComp_0; }
	inline AbstractF2mPointU5BU5D_t1020976720** get_address_of_m_preComp_0() { return &___m_preComp_0; }
	inline void set_m_preComp_0(AbstractF2mPointU5BU5D_t1020976720* value)
	{
		___m_preComp_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_preComp_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WTAUNAFPRECOMPINFO_T1588627001_H
#ifndef GLVTYPEBENDOMORPHISM_T1435272081_H
#define GLVTYPEBENDOMORPHISM_T1435272081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism
struct  GlvTypeBEndomorphism_t1435272081  : public RuntimeObject
{
public:
	// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism::m_curve
	ECCurve_t1909311897 * ___m_curve_0;
	// Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism::m_parameters
	GlvTypeBParameters_t4145277670 * ___m_parameters_1;
	// Org.BouncyCastle.Math.EC.ECPointMap Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism::m_pointMap
	RuntimeObject* ___m_pointMap_2;

public:
	inline static int32_t get_offset_of_m_curve_0() { return static_cast<int32_t>(offsetof(GlvTypeBEndomorphism_t1435272081, ___m_curve_0)); }
	inline ECCurve_t1909311897 * get_m_curve_0() const { return ___m_curve_0; }
	inline ECCurve_t1909311897 ** get_address_of_m_curve_0() { return &___m_curve_0; }
	inline void set_m_curve_0(ECCurve_t1909311897 * value)
	{
		___m_curve_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_curve_0), value);
	}

	inline static int32_t get_offset_of_m_parameters_1() { return static_cast<int32_t>(offsetof(GlvTypeBEndomorphism_t1435272081, ___m_parameters_1)); }
	inline GlvTypeBParameters_t4145277670 * get_m_parameters_1() const { return ___m_parameters_1; }
	inline GlvTypeBParameters_t4145277670 ** get_address_of_m_parameters_1() { return &___m_parameters_1; }
	inline void set_m_parameters_1(GlvTypeBParameters_t4145277670 * value)
	{
		___m_parameters_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_parameters_1), value);
	}

	inline static int32_t get_offset_of_m_pointMap_2() { return static_cast<int32_t>(offsetof(GlvTypeBEndomorphism_t1435272081, ___m_pointMap_2)); }
	inline RuntimeObject* get_m_pointMap_2() const { return ___m_pointMap_2; }
	inline RuntimeObject** get_address_of_m_pointMap_2() { return &___m_pointMap_2; }
	inline void set_m_pointMap_2(RuntimeObject* value)
	{
		___m_pointMap_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_pointMap_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLVTYPEBENDOMORPHISM_T1435272081_H
#ifndef NAT448_T1551068302_H
#define NAT448_T1551068302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.Raw.Nat448
struct  Nat448_t1551068302  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAT448_T1551068302_H
#ifndef NAT384_T2154386974_H
#define NAT384_T2154386974_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.Raw.Nat384
struct  Nat384_t2154386974  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAT384_T2154386974_H
#ifndef NAT320_T1376605315_H
#define NAT320_T1376605315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.Raw.Nat320
struct  Nat320_t1376605315  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAT320_T1376605315_H
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
#ifndef U24ARRAYTYPEU3D36_T3644008270_H
#define U24ARRAYTYPEU3D36_T3644008270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=36
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D36_t3644008270 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D36_t3644008270__padding[36];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D36_T3644008270_H
#ifndef ABSTRACTF2MCURVE_T2458057526_H
#define ABSTRACTF2MCURVE_T2458057526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.EC.AbstractF2mCurve
struct  AbstractF2mCurve_t2458057526  : public ECCurve_t1909311897
{
public:
	// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Math.EC.AbstractF2mCurve::si
	BigIntegerU5BU5D_t3505201136* ___si_8;

public:
	inline static int32_t get_offset_of_si_8() { return static_cast<int32_t>(offsetof(AbstractF2mCurve_t2458057526, ___si_8)); }
	inline BigIntegerU5BU5D_t3505201136* get_si_8() const { return ___si_8; }
	inline BigIntegerU5BU5D_t3505201136** get_address_of_si_8() { return &___si_8; }
	inline void set_si_8(BigIntegerU5BU5D_t3505201136* value)
	{
		___si_8 = value;
		Il2CppCodeGenWriteBarrier((&___si_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTF2MCURVE_T2458057526_H
#ifndef U24ARRAYTYPEU3D640_T4120940673_H
#define U24ARRAYTYPEU3D640_T4120940673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=640
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D640_t4120940673 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D640_t4120940673__padding[640];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D640_T4120940673_H
#ifndef U24ARRAYTYPEU3D44_T447450017_H
#define U24ARRAYTYPEU3D44_T447450017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=44
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D44_t447450017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D44_t447450017__padding[44];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D44_T447450017_H
#ifndef ECPOINTBASE_T3813182729_H
#define ECPOINTBASE_T3813182729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.EC.ECPointBase
struct  ECPointBase_t3813182729  : public ECPoint_t383189042
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ECPOINTBASE_T3813182729_H
#ifndef U24ARRAYTYPEU3D16_T2289608776_H
#define U24ARRAYTYPEU3D16_T2289608776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=16
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D16_t2289608776 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D16_t2289608776__padding[16];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D16_T2289608776_H
#ifndef TIMESPAN_T4050686296_H
#define TIMESPAN_T4050686296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t4050686296 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4050686296, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4050686296_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4050686296  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4050686296  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4050686296  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4050686296_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t4050686296  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t4050686296 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t4050686296  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4050686296_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t4050686296  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t4050686296 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t4050686296  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4050686296_StaticFields, ___Zero_2)); }
	inline TimeSpan_t4050686296  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t4050686296 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t4050686296  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T4050686296_H
#ifndef U24ARRAYTYPEU3D256_T1189136629_H
#define U24ARRAYTYPEU3D256_T1189136629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=256
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D256_t1189136629 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D256_t1189136629__padding[256];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D256_T1189136629_H
#ifndef U24ARRAYTYPEU3D48_T3687564119_H
#define U24ARRAYTYPEU3D48_T3687564119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=48
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D48_t3687564119 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D48_t3687564119__padding[48];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D48_T3687564119_H
#ifndef U24ARRAYTYPEU3D512_T2137770118_H
#define U24ARRAYTYPEU3D512_T2137770118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=512
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D512_t2137770118 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D512_t2137770118__padding[512];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D512_T2137770118_H
#ifndef U24ARRAYTYPEU3D96_T881291273_H
#define U24ARRAYTYPEU3D96_T881291273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=96
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D96_t881291273 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D96_t881291273__padding[96];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D96_T881291273_H
#ifndef U24ARRAYTYPEU3D128_T2571979752_H
#define U24ARRAYTYPEU3D128_T2571979752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=128
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D128_t2571979752 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D128_t2571979752__padding[128];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D128_T2571979752_H
#ifndef U24ARRAYTYPEU3D64_T4078931961_H
#define U24ARRAYTYPEU3D64_T4078931961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=64
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D64_t4078931961 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D64_t4078931961__padding[64];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D64_T4078931961_H
#ifndef U24ARRAYTYPEU3D60_T956196824_H
#define U24ARRAYTYPEU3D60_T956196824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=60
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D60_t956196824 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D60_t956196824__padding[60];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D60_T956196824_H
#ifndef U24ARRAYTYPEU3D8_T3476260243_H
#define U24ARRAYTYPEU3D8_T3476260243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=8
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D8_t3476260243 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D8_t3476260243__padding[8];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D8_T3476260243_H
#ifndef U24ARRAYTYPEU3D4_T1881604839_H
#define U24ARRAYTYPEU3D4_T1881604839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=4
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D4_t1881604839 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D4_t1881604839__padding[4];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D4_T1881604839_H
#ifndef U24ARRAYTYPEU3D20_T2271475897_H
#define U24ARRAYTYPEU3D20_T2271475897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=20
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D20_t2271475897 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D20_t2271475897__padding[20];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D20_T2271475897_H
#ifndef U24ARRAYTYPEU3D12_T37505501_H
#define U24ARRAYTYPEU3D12_T37505501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=12
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D12_t37505501 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D12_t37505501__padding[12];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D12_T37505501_H
#ifndef U24ARRAYTYPEU3D4096_T818062559_H
#define U24ARRAYTYPEU3D4096_T818062559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=4096
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D4096_t818062559 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D4096_t818062559__padding[4096];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D4096_T818062559_H
#ifndef U24ARRAYTYPEU3D24_T1113226219_H
#define U24ARRAYTYPEU3D24_T1113226219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=24
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D24_t1113226219 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D24_t1113226219__padding[24];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D24_T1113226219_H
#ifndef U24ARRAYTYPEU3D32_T4145487141_H
#define U24ARRAYTYPEU3D32_T4145487141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=32
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D32_t4145487141 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D32_t4145487141__padding[32];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D32_T4145487141_H
#ifndef WNAFL2RMULTIPLIER_T3323258795_H
#define WNAFL2RMULTIPLIER_T3323258795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.EC.Multiplier.WNafL2RMultiplier
struct  WNafL2RMultiplier_t3323258795  : public AbstractECMultiplier_t3481008734
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WNAFL2RMULTIPLIER_T3323258795_H
#ifndef U24ARRAYTYPEU3D56_T1391226737_H
#define U24ARRAYTYPEU3D56_T1391226737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=56
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D56_t1391226737 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D56_t1391226737__padding[56];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D56_T1391226737_H
#ifndef U24ARRAYTYPEU3D116_T541649237_H
#define U24ARRAYTYPEU3D116_T541649237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=116
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D116_t541649237 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D116_t541649237__padding[116];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D116_T541649237_H
#ifndef U24ARRAYTYPEU3D1152_T3632293663_H
#define U24ARRAYTYPEU3D1152_T3632293663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=1152
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D1152_t3632293663 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D1152_t3632293663__padding[1152];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D1152_T3632293663_H
#ifndef SECURERANDOM_T1090558902_H
#define SECURERANDOM_T1090558902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Security.SecureRandom
struct  SecureRandom_t1090558902  : public Random_t3721886259
{
public:
	// Org.BouncyCastle.Crypto.Prng.IRandomGenerator Org.BouncyCastle.Security.SecureRandom::generator
	RuntimeObject* ___generator_5;

public:
	inline static int32_t get_offset_of_generator_5() { return static_cast<int32_t>(offsetof(SecureRandom_t1090558902, ___generator_5)); }
	inline RuntimeObject* get_generator_5() const { return ___generator_5; }
	inline RuntimeObject** get_address_of_generator_5() { return &___generator_5; }
	inline void set_generator_5(RuntimeObject* value)
	{
		___generator_5 = value;
		Il2CppCodeGenWriteBarrier((&___generator_5), value);
	}
};

struct SecureRandom_t1090558902_StaticFields
{
public:
	// System.Int64 Org.BouncyCastle.Security.SecureRandom::counter
	int64_t ___counter_3;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Security.SecureRandom::master
	SecureRandom_t1090558902 * ___master_4;
	// System.Double Org.BouncyCastle.Security.SecureRandom::DoubleScale
	double ___DoubleScale_6;

public:
	inline static int32_t get_offset_of_counter_3() { return static_cast<int32_t>(offsetof(SecureRandom_t1090558902_StaticFields, ___counter_3)); }
	inline int64_t get_counter_3() const { return ___counter_3; }
	inline int64_t* get_address_of_counter_3() { return &___counter_3; }
	inline void set_counter_3(int64_t value)
	{
		___counter_3 = value;
	}

	inline static int32_t get_offset_of_master_4() { return static_cast<int32_t>(offsetof(SecureRandom_t1090558902_StaticFields, ___master_4)); }
	inline SecureRandom_t1090558902 * get_master_4() const { return ___master_4; }
	inline SecureRandom_t1090558902 ** get_address_of_master_4() { return &___master_4; }
	inline void set_master_4(SecureRandom_t1090558902 * value)
	{
		___master_4 = value;
		Il2CppCodeGenWriteBarrier((&___master_4), value);
	}

	inline static int32_t get_offset_of_DoubleScale_6() { return static_cast<int32_t>(offsetof(SecureRandom_t1090558902_StaticFields, ___DoubleScale_6)); }
	inline double get_DoubleScale_6() const { return ___DoubleScale_6; }
	inline double* get_address_of_DoubleScale_6() { return &___DoubleScale_6; }
	inline void set_DoubleScale_6(double value)
	{
		___DoubleScale_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURERANDOM_T1090558902_H
#ifndef SECURITYUTILITYEXCEPTION_T2113723784_H
#define SECURITYUTILITYEXCEPTION_T2113723784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Security.SecurityUtilityException
struct  SecurityUtilityException_t2113723784  : public Exception_t76254738
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYUTILITYEXCEPTION_T2113723784_H
#ifndef U24ARRAYTYPEU3D120_T3304934490_H
#define U24ARRAYTYPEU3D120_T3304934490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=120
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D120_t3304934490 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D120_t3304934490__padding[120];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D120_T3304934490_H
#ifndef U24ARRAYTYPEU3D124_T2081813596_H
#define U24ARRAYTYPEU3D124_T2081813596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=124
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D124_t2081813596 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D124_t2081813596__padding[124];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D124_T2081813596_H
#ifndef U24ARRAYTYPEU3D384_T2781497336_H
#define U24ARRAYTYPEU3D384_T2781497336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=384
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D384_t2781497336 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D384_t2781497336__padding[384];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D384_T2781497336_H
#ifndef U24ARRAYTYPEU3D40_T1983424417_H
#define U24ARRAYTYPEU3D40_T1983424417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=40
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D40_t1983424417 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D40_t1983424417__padding[40];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D40_T1983424417_H
#ifndef U24ARRAYTYPEU3D6144_T3211423560_H
#define U24ARRAYTYPEU3D6144_T3211423560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=6144
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D6144_t3211423560 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D6144_t3211423560__padding[6144];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D6144_T3211423560_H
#ifndef BASEINPUTSTREAM_T2580678134_H
#define BASEINPUTSTREAM_T2580678134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.IO.BaseInputStream
struct  BaseInputStream_t2580678134  : public Stream_t2967449720
{
public:
	// System.Boolean Org.BouncyCastle.Utilities.IO.BaseInputStream::closed
	bool ___closed_1;

public:
	inline static int32_t get_offset_of_closed_1() { return static_cast<int32_t>(offsetof(BaseInputStream_t2580678134, ___closed_1)); }
	inline bool get_closed_1() const { return ___closed_1; }
	inline bool* get_address_of_closed_1() { return &___closed_1; }
	inline void set_closed_1(bool value)
	{
		___closed_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINPUTSTREAM_T2580678134_H
#ifndef U24ARRAYTYPEU3D1024_T1496239055_H
#define U24ARRAYTYPEU3D1024_T1496239055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=1024
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D1024_t1496239055 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D1024_t1496239055__padding[1024];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D1024_T1496239055_H
#ifndef BASEOUTPUTSTREAM_T1893271902_H
#define BASEOUTPUTSTREAM_T1893271902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.IO.BaseOutputStream
struct  BaseOutputStream_t1893271902  : public Stream_t2967449720
{
public:
	// System.Boolean Org.BouncyCastle.Utilities.IO.BaseOutputStream::closed
	bool ___closed_1;

public:
	inline static int32_t get_offset_of_closed_1() { return static_cast<int32_t>(offsetof(BaseOutputStream_t1893271902, ___closed_1)); }
	inline bool get_closed_1() const { return ___closed_1; }
	inline bool* get_address_of_closed_1() { return &___closed_1; }
	inline void set_closed_1(bool value)
	{
		___closed_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEOUTPUTSTREAM_T1893271902_H
#ifndef U24ARRAYTYPEU3D76_T315395832_H
#define U24ARRAYTYPEU3D76_T315395832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=76
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D76_t315395832 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D76_t315395832__padding[76];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D76_T315395832_H
#ifndef U24ARRAYTYPEU3D72_T1634360518_H
#define U24ARRAYTYPEU3D72_T1634360518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=72
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D72_t1634360518 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D72_t1634360518__padding[72];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D72_T1634360518_H
#ifndef WTAUNAFMULTIPLIER_T73358994_H
#define WTAUNAFMULTIPLIER_T73358994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier
struct  WTauNafMultiplier_t73358994  : public AbstractECMultiplier_t3481008734
{
public:

public:
};

struct WTauNafMultiplier_t73358994_StaticFields
{
public:
	// System.String Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier::PRECOMP_NAME
	String_t* ___PRECOMP_NAME_0;

public:
	inline static int32_t get_offset_of_PRECOMP_NAME_0() { return static_cast<int32_t>(offsetof(WTauNafMultiplier_t73358994_StaticFields, ___PRECOMP_NAME_0)); }
	inline String_t* get_PRECOMP_NAME_0() const { return ___PRECOMP_NAME_0; }
	inline String_t** get_address_of_PRECOMP_NAME_0() { return &___PRECOMP_NAME_0; }
	inline void set_PRECOMP_NAME_0(String_t* value)
	{
		___PRECOMP_NAME_0 = value;
		Il2CppCodeGenWriteBarrier((&___PRECOMP_NAME_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WTAUNAFMULTIPLIER_T73358994_H
#ifndef GENERALSECURITYEXCEPTION_T1453638351_H
#define GENERALSECURITYEXCEPTION_T1453638351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Security.GeneralSecurityException
struct  GeneralSecurityException_t1453638351  : public Exception_t76254738
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERALSECURITYEXCEPTION_T1453638351_H
#ifndef GLVMULTIPLIER_T2514843099_H
#define GLVMULTIPLIER_T2514843099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.EC.Multiplier.GlvMultiplier
struct  GlvMultiplier_t2514843099  : public AbstractECMultiplier_t3481008734
{
public:
	// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Math.EC.Multiplier.GlvMultiplier::curve
	ECCurve_t1909311897 * ___curve_0;
	// Org.BouncyCastle.Math.EC.Endo.GlvEndomorphism Org.BouncyCastle.Math.EC.Multiplier.GlvMultiplier::glvEndomorphism
	RuntimeObject* ___glvEndomorphism_1;

public:
	inline static int32_t get_offset_of_curve_0() { return static_cast<int32_t>(offsetof(GlvMultiplier_t2514843099, ___curve_0)); }
	inline ECCurve_t1909311897 * get_curve_0() const { return ___curve_0; }
	inline ECCurve_t1909311897 ** get_address_of_curve_0() { return &___curve_0; }
	inline void set_curve_0(ECCurve_t1909311897 * value)
	{
		___curve_0 = value;
		Il2CppCodeGenWriteBarrier((&___curve_0), value);
	}

	inline static int32_t get_offset_of_glvEndomorphism_1() { return static_cast<int32_t>(offsetof(GlvMultiplier_t2514843099, ___glvEndomorphism_1)); }
	inline RuntimeObject* get_glvEndomorphism_1() const { return ___glvEndomorphism_1; }
	inline RuntimeObject** get_address_of_glvEndomorphism_1() { return &___glvEndomorphism_1; }
	inline void set_glvEndomorphism_1(RuntimeObject* value)
	{
		___glvEndomorphism_1 = value;
		Il2CppCodeGenWriteBarrier((&___glvEndomorphism_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLVMULTIPLIER_T2514843099_H
#ifndef ZOUTPUTSTREAM_T3907303743_H
#define ZOUTPUTSTREAM_T3907303743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Zlib.ZOutputStream
struct  ZOutputStream_t3907303743  : public Stream_t2967449720
{
public:
	// Org.BouncyCastle.Utilities.Zlib.ZStream Org.BouncyCastle.Utilities.Zlib.ZOutputStream::z
	ZStream_t370990292 * ___z_1;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZOutputStream::flushLevel
	int32_t ___flushLevel_2;
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.ZOutputStream::buf
	ByteU5BU5D_t2378657911* ___buf_3;
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.ZOutputStream::buf1
	ByteU5BU5D_t2378657911* ___buf1_4;
	// System.Boolean Org.BouncyCastle.Utilities.Zlib.ZOutputStream::compress
	bool ___compress_5;
	// System.IO.Stream Org.BouncyCastle.Utilities.Zlib.ZOutputStream::output
	Stream_t2967449720 * ___output_6;
	// System.Boolean Org.BouncyCastle.Utilities.Zlib.ZOutputStream::closed
	bool ___closed_7;

public:
	inline static int32_t get_offset_of_z_1() { return static_cast<int32_t>(offsetof(ZOutputStream_t3907303743, ___z_1)); }
	inline ZStream_t370990292 * get_z_1() const { return ___z_1; }
	inline ZStream_t370990292 ** get_address_of_z_1() { return &___z_1; }
	inline void set_z_1(ZStream_t370990292 * value)
	{
		___z_1 = value;
		Il2CppCodeGenWriteBarrier((&___z_1), value);
	}

	inline static int32_t get_offset_of_flushLevel_2() { return static_cast<int32_t>(offsetof(ZOutputStream_t3907303743, ___flushLevel_2)); }
	inline int32_t get_flushLevel_2() const { return ___flushLevel_2; }
	inline int32_t* get_address_of_flushLevel_2() { return &___flushLevel_2; }
	inline void set_flushLevel_2(int32_t value)
	{
		___flushLevel_2 = value;
	}

	inline static int32_t get_offset_of_buf_3() { return static_cast<int32_t>(offsetof(ZOutputStream_t3907303743, ___buf_3)); }
	inline ByteU5BU5D_t2378657911* get_buf_3() const { return ___buf_3; }
	inline ByteU5BU5D_t2378657911** get_address_of_buf_3() { return &___buf_3; }
	inline void set_buf_3(ByteU5BU5D_t2378657911* value)
	{
		___buf_3 = value;
		Il2CppCodeGenWriteBarrier((&___buf_3), value);
	}

	inline static int32_t get_offset_of_buf1_4() { return static_cast<int32_t>(offsetof(ZOutputStream_t3907303743, ___buf1_4)); }
	inline ByteU5BU5D_t2378657911* get_buf1_4() const { return ___buf1_4; }
	inline ByteU5BU5D_t2378657911** get_address_of_buf1_4() { return &___buf1_4; }
	inline void set_buf1_4(ByteU5BU5D_t2378657911* value)
	{
		___buf1_4 = value;
		Il2CppCodeGenWriteBarrier((&___buf1_4), value);
	}

	inline static int32_t get_offset_of_compress_5() { return static_cast<int32_t>(offsetof(ZOutputStream_t3907303743, ___compress_5)); }
	inline bool get_compress_5() const { return ___compress_5; }
	inline bool* get_address_of_compress_5() { return &___compress_5; }
	inline void set_compress_5(bool value)
	{
		___compress_5 = value;
	}

	inline static int32_t get_offset_of_output_6() { return static_cast<int32_t>(offsetof(ZOutputStream_t3907303743, ___output_6)); }
	inline Stream_t2967449720 * get_output_6() const { return ___output_6; }
	inline Stream_t2967449720 ** get_address_of_output_6() { return &___output_6; }
	inline void set_output_6(Stream_t2967449720 * value)
	{
		___output_6 = value;
		Il2CppCodeGenWriteBarrier((&___output_6), value);
	}

	inline static int32_t get_offset_of_closed_7() { return static_cast<int32_t>(offsetof(ZOutputStream_t3907303743, ___closed_7)); }
	inline bool get_closed_7() const { return ___closed_7; }
	inline bool* get_address_of_closed_7() { return &___closed_7; }
	inline void set_closed_7(bool value)
	{
		___closed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZOUTPUTSTREAM_T3907303743_H
#ifndef X509CERTIFICATE_T1325241131_H
#define X509CERTIFICATE_T1325241131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.X509.X509Certificate
struct  X509Certificate_t1325241131  : public X509ExtensionBase_t4169967820
{
public:
	// Org.BouncyCastle.Asn1.X509.X509CertificateStructure Org.BouncyCastle.X509.X509Certificate::c
	X509CertificateStructure_t3936362538 * ___c_0;
	// Org.BouncyCastle.Asn1.X509.BasicConstraints Org.BouncyCastle.X509.X509Certificate::basicConstraints
	BasicConstraints_t3630830410 * ___basicConstraints_1;
	// System.Boolean[] Org.BouncyCastle.X509.X509Certificate::keyUsage
	BooleanU5BU5D_t2673653913* ___keyUsage_2;
	// System.Boolean Org.BouncyCastle.X509.X509Certificate::hashValueSet
	bool ___hashValueSet_3;
	// System.Int32 Org.BouncyCastle.X509.X509Certificate::hashValue
	int32_t ___hashValue_4;

public:
	inline static int32_t get_offset_of_c_0() { return static_cast<int32_t>(offsetof(X509Certificate_t1325241131, ___c_0)); }
	inline X509CertificateStructure_t3936362538 * get_c_0() const { return ___c_0; }
	inline X509CertificateStructure_t3936362538 ** get_address_of_c_0() { return &___c_0; }
	inline void set_c_0(X509CertificateStructure_t3936362538 * value)
	{
		___c_0 = value;
		Il2CppCodeGenWriteBarrier((&___c_0), value);
	}

	inline static int32_t get_offset_of_basicConstraints_1() { return static_cast<int32_t>(offsetof(X509Certificate_t1325241131, ___basicConstraints_1)); }
	inline BasicConstraints_t3630830410 * get_basicConstraints_1() const { return ___basicConstraints_1; }
	inline BasicConstraints_t3630830410 ** get_address_of_basicConstraints_1() { return &___basicConstraints_1; }
	inline void set_basicConstraints_1(BasicConstraints_t3630830410 * value)
	{
		___basicConstraints_1 = value;
		Il2CppCodeGenWriteBarrier((&___basicConstraints_1), value);
	}

	inline static int32_t get_offset_of_keyUsage_2() { return static_cast<int32_t>(offsetof(X509Certificate_t1325241131, ___keyUsage_2)); }
	inline BooleanU5BU5D_t2673653913* get_keyUsage_2() const { return ___keyUsage_2; }
	inline BooleanU5BU5D_t2673653913** get_address_of_keyUsage_2() { return &___keyUsage_2; }
	inline void set_keyUsage_2(BooleanU5BU5D_t2673653913* value)
	{
		___keyUsage_2 = value;
		Il2CppCodeGenWriteBarrier((&___keyUsage_2), value);
	}

	inline static int32_t get_offset_of_hashValueSet_3() { return static_cast<int32_t>(offsetof(X509Certificate_t1325241131, ___hashValueSet_3)); }
	inline bool get_hashValueSet_3() const { return ___hashValueSet_3; }
	inline bool* get_address_of_hashValueSet_3() { return &___hashValueSet_3; }
	inline void set_hashValueSet_3(bool value)
	{
		___hashValueSet_3 = value;
	}

	inline static int32_t get_offset_of_hashValue_4() { return static_cast<int32_t>(offsetof(X509Certificate_t1325241131, ___hashValue_4)); }
	inline int32_t get_hashValue_4() const { return ___hashValue_4; }
	inline int32_t* get_address_of_hashValue_4() { return &___hashValue_4; }
	inline void set_hashValue_4(int32_t value)
	{
		___hashValue_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T1325241131_H
#ifndef FIXEDPOINTCOMBMULTIPLIER_T1264162032_H
#define FIXEDPOINTCOMBMULTIPLIER_T1264162032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.EC.Multiplier.FixedPointCombMultiplier
struct  FixedPointCombMultiplier_t1264162032  : public AbstractECMultiplier_t3481008734
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDPOINTCOMBMULTIPLIER_T1264162032_H
#ifndef U24ARRAYTYPEU3D68_T2740126159_H
#define U24ARRAYTYPEU3D68_T2740126159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=68
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D68_t2740126159 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D68_t2740126159__padding[68];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D68_T2740126159_H
#ifndef U24ARRAYTYPEU3D2048_T1779509621_H
#define U24ARRAYTYPEU3D2048_T1779509621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=2048
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D2048_t1779509621 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D2048_t1779509621__padding[2048];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D2048_T1779509621_H
#ifndef FILTERSTREAM_T2090595676_H
#define FILTERSTREAM_T2090595676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.IO.FilterStream
struct  FilterStream_t2090595676  : public Stream_t2967449720
{
public:
	// System.IO.Stream Org.BouncyCastle.Utilities.IO.FilterStream::s
	Stream_t2967449720 * ___s_1;

public:
	inline static int32_t get_offset_of_s_1() { return static_cast<int32_t>(offsetof(FilterStream_t2090595676, ___s_1)); }
	inline Stream_t2967449720 * get_s_1() const { return ___s_1; }
	inline Stream_t2967449720 ** get_address_of_s_1() { return &___s_1; }
	inline void set_s_1(Stream_t2967449720 * value)
	{
		___s_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILTERSTREAM_T2090595676_H
#ifndef U24ARRAYTYPEU3D28_T1104879214_H
#define U24ARRAYTYPEU3D28_T1104879214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=28
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D28_t1104879214 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D28_t1104879214__padding[28];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D28_T1104879214_H
#ifndef TEEINPUTSTREAM_T3074304943_H
#define TEEINPUTSTREAM_T3074304943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.IO.TeeInputStream
struct  TeeInputStream_t3074304943  : public BaseInputStream_t2580678134
{
public:
	// System.IO.Stream Org.BouncyCastle.Utilities.IO.TeeInputStream::input
	Stream_t2967449720 * ___input_2;
	// System.IO.Stream Org.BouncyCastle.Utilities.IO.TeeInputStream::tee
	Stream_t2967449720 * ___tee_3;

public:
	inline static int32_t get_offset_of_input_2() { return static_cast<int32_t>(offsetof(TeeInputStream_t3074304943, ___input_2)); }
	inline Stream_t2967449720 * get_input_2() const { return ___input_2; }
	inline Stream_t2967449720 ** get_address_of_input_2() { return &___input_2; }
	inline void set_input_2(Stream_t2967449720 * value)
	{
		___input_2 = value;
		Il2CppCodeGenWriteBarrier((&___input_2), value);
	}

	inline static int32_t get_offset_of_tee_3() { return static_cast<int32_t>(offsetof(TeeInputStream_t3074304943, ___tee_3)); }
	inline Stream_t2967449720 * get_tee_3() const { return ___tee_3; }
	inline Stream_t2967449720 ** get_address_of_tee_3() { return &___tee_3; }
	inline void set_tee_3(Stream_t2967449720 * value)
	{
		___tee_3 = value;
		Il2CppCodeGenWriteBarrier((&___tee_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEEINPUTSTREAM_T3074304943_H
#ifndef INVALIDCASTEXCEPTION_T1985870089_H
#define INVALIDCASTEXCEPTION_T1985870089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t1985870089  : public SystemException_t1160535744
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T1985870089_H
#ifndef SECT571R1CURVE_T2377237098_H
#define SECT571R1CURVE_T2377237098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.EC.Custom.Sec.SecT571R1Curve
struct  SecT571R1Curve_t2377237098  : public AbstractF2mCurve_t2458057526
{
public:
	// Org.BouncyCastle.Math.EC.Custom.Sec.SecT571R1Point Org.BouncyCastle.Math.EC.Custom.Sec.SecT571R1Curve::m_infinity
	SecT571R1Point_t1182715444 * ___m_infinity_9;

public:
	inline static int32_t get_offset_of_m_infinity_9() { return static_cast<int32_t>(offsetof(SecT571R1Curve_t2377237098, ___m_infinity_9)); }
	inline SecT571R1Point_t1182715444 * get_m_infinity_9() const { return ___m_infinity_9; }
	inline SecT571R1Point_t1182715444 ** get_address_of_m_infinity_9() { return &___m_infinity_9; }
	inline void set_m_infinity_9(SecT571R1Point_t1182715444 * value)
	{
		___m_infinity_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_infinity_9), value);
	}
};

struct SecT571R1Curve_t2377237098_StaticFields
{
public:
	// Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT571R1Curve::SecT571R1_B
	SecT571FieldElement_t2379021916 * ___SecT571R1_B_10;
	// Org.BouncyCastle.Math.EC.Custom.Sec.SecT571FieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT571R1Curve::SecT571R1_B_SQRT
	SecT571FieldElement_t2379021916 * ___SecT571R1_B_SQRT_11;

public:
	inline static int32_t get_offset_of_SecT571R1_B_10() { return static_cast<int32_t>(offsetof(SecT571R1Curve_t2377237098_StaticFields, ___SecT571R1_B_10)); }
	inline SecT571FieldElement_t2379021916 * get_SecT571R1_B_10() const { return ___SecT571R1_B_10; }
	inline SecT571FieldElement_t2379021916 ** get_address_of_SecT571R1_B_10() { return &___SecT571R1_B_10; }
	inline void set_SecT571R1_B_10(SecT571FieldElement_t2379021916 * value)
	{
		___SecT571R1_B_10 = value;
		Il2CppCodeGenWriteBarrier((&___SecT571R1_B_10), value);
	}

	inline static int32_t get_offset_of_SecT571R1_B_SQRT_11() { return static_cast<int32_t>(offsetof(SecT571R1Curve_t2377237098_StaticFields, ___SecT571R1_B_SQRT_11)); }
	inline SecT571FieldElement_t2379021916 * get_SecT571R1_B_SQRT_11() const { return ___SecT571R1_B_SQRT_11; }
	inline SecT571FieldElement_t2379021916 ** get_address_of_SecT571R1_B_SQRT_11() { return &___SecT571R1_B_SQRT_11; }
	inline void set_SecT571R1_B_SQRT_11(SecT571FieldElement_t2379021916 * value)
	{
		___SecT571R1_B_SQRT_11 = value;
		Il2CppCodeGenWriteBarrier((&___SecT571R1_B_SQRT_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECT571R1CURVE_T2377237098_H
#ifndef DIGESTALGORITHM_T1305324616_H
#define DIGESTALGORITHM_T1305324616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Security.DigestUtilities/DigestAlgorithm
struct  DigestAlgorithm_t1305324616 
{
public:
	// System.Int32 Org.BouncyCastle.Security.DigestUtilities/DigestAlgorithm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DigestAlgorithm_t1305324616, ___value___1)); }
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
#endif // DIGESTALGORITHM_T1305324616_H
#ifndef KEYEXCEPTION_T4264436802_H
#define KEYEXCEPTION_T4264436802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Security.KeyException
struct  KeyException_t4264436802  : public GeneralSecurityException_t1453638351
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEXCEPTION_T4264436802_H
#ifndef CERTIFICATEEXCEPTION_T2093635285_H
#define CERTIFICATEEXCEPTION_T2093635285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Security.Certificates.CertificateException
struct  CertificateException_t2093635285  : public GeneralSecurityException_t1453638351
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CERTIFICATEEXCEPTION_T2093635285_H
#ifndef DATETIMEKIND_T701546220_H
#define DATETIMEKIND_T701546220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t701546220 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t701546220, ___value___1)); }
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
#endif // DATETIMEKIND_T701546220_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1698564603_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1698564603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t1698564603  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-59F5BD34B6C013DEACC784F69C67E95150033A84
	U24ArrayTypeU3D32_t4145487141  ___U24fieldU2D59F5BD34B6C013DEACC784F69C67E95150033A84_0;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-CC5B8B6FA17DA57B26C3ACA4DA8B2A477C609D63
	U24ArrayTypeU3D32_t4145487141  ___U24fieldU2DCC5B8B6FA17DA57B26C3ACA4DA8B2A477C609D63_1;
	// <PrivateImplementationDetails>/$ArrayType=640 <PrivateImplementationDetails>::$field-90A0542282A011472F94E97CEAE59F8B3B1A3291
	U24ArrayTypeU3D640_t4120940673  ___U24fieldU2D90A0542282A011472F94E97CEAE59F8B3B1A3291_2;
	// <PrivateImplementationDetails>/$ArrayType=256 <PrivateImplementationDetails>::$field-D2C5BAE967587C6F3D9F2C4551911E0575A1101F
	U24ArrayTypeU3D256_t1189136629  ___U24fieldU2DD2C5BAE967587C6F3D9F2C4551911E0575A1101F_3;
	// <PrivateImplementationDetails>/$ArrayType=256 <PrivateImplementationDetails>::$field-433175D38B13FFE177FDD661A309F1B528B3F6E2
	U24ArrayTypeU3D256_t1189136629  ___U24fieldU2D433175D38B13FFE177FDD661A309F1B528B3F6E2_4;
	// <PrivateImplementationDetails>/$ArrayType=2048 <PrivateImplementationDetails>::$field-A0FABB8173BA247898A9FA267D0CE05500B667A0
	U24ArrayTypeU3D2048_t1779509621  ___U24fieldU2DA0FABB8173BA247898A9FA267D0CE05500B667A0_5;
	// <PrivateImplementationDetails>/$ArrayType=2048 <PrivateImplementationDetails>::$field-467C6758F235D3193618192A64129CBB602C9067
	U24ArrayTypeU3D2048_t1779509621  ___U24fieldU2D467C6758F235D3193618192A64129CBB602C9067_6;
	// <PrivateImplementationDetails>/$ArrayType=2048 <PrivateImplementationDetails>::$field-1648F737A4CFFDA4E6C83A3D742109BF9DBC2446
	U24ArrayTypeU3D2048_t1779509621  ___U24fieldU2D1648F737A4CFFDA4E6C83A3D742109BF9DBC2446_7;
	// <PrivateImplementationDetails>/$ArrayType=2048 <PrivateImplementationDetails>::$field-C079C42AC966756C902EC38C4D7989F3C20D3625
	U24ArrayTypeU3D2048_t1779509621  ___U24fieldU2DC079C42AC966756C902EC38C4D7989F3C20D3625_8;
	// <PrivateImplementationDetails>/$ArrayType=1024 <PrivateImplementationDetails>::$field-840B3A53AAF3595FDF3313D46FFD246A7EA6E89E
	U24ArrayTypeU3D1024_t1496239055  ___U24fieldU2D840B3A53AAF3595FDF3313D46FFD246A7EA6E89E_9;
	// <PrivateImplementationDetails>/$ArrayType=256 <PrivateImplementationDetails>::$field-8F22C9ECE1331718CBD268A9BBFD2F5E451441E3
	U24ArrayTypeU3D256_t1189136629  ___U24fieldU2D8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_10;
	// <PrivateImplementationDetails>/$ArrayType=256 <PrivateImplementationDetails>::$field-0C4110BC17D746F018F47B49E0EB0D6590F69939
	U24ArrayTypeU3D256_t1189136629  ___U24fieldU2D0C4110BC17D746F018F47B49E0EB0D6590F69939_11;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-F83C7B497B14628C1D0DB3FA2FD89BD5C0D5138A
	U24ArrayTypeU3D32_t4145487141  ___U24fieldU2DF83C7B497B14628C1D0DB3FA2FD89BD5C0D5138A_12;
	// <PrivateImplementationDetails>/$ArrayType=1024 <PrivateImplementationDetails>::$field-B68637EF60D499620B99E336C59E4865FFC4C5D7
	U24ArrayTypeU3D1024_t1496239055  ___U24fieldU2DB68637EF60D499620B99E336C59E4865FFC4C5D7_13;
	// <PrivateImplementationDetails>/$ArrayType=1024 <PrivateImplementationDetails>::$field-1AFB455399A50580CF1039188ABA6BE82F309543
	U24ArrayTypeU3D1024_t1496239055  ___U24fieldU2D1AFB455399A50580CF1039188ABA6BE82F309543_14;
	// <PrivateImplementationDetails>/$ArrayType=48 <PrivateImplementationDetails>::$field-AE843E1C1136C908565A6D4E04E8564B69465B3B
	U24ArrayTypeU3D48_t3687564119  ___U24fieldU2DAE843E1C1136C908565A6D4E04E8564B69465B3B_15;
	// <PrivateImplementationDetails>/$ArrayType=1024 <PrivateImplementationDetails>::$field-B1108EE6609DB783B2EC606B3BFDD544A7D4C2B3
	U24ArrayTypeU3D1024_t1496239055  ___U24fieldU2DB1108EE6609DB783B2EC606B3BFDD544A7D4C2B3_16;
	// <PrivateImplementationDetails>/$ArrayType=1024 <PrivateImplementationDetails>::$field-14F6FAB1B4065EBADBBA4A3661ADE689FF444EDD
	U24ArrayTypeU3D1024_t1496239055  ___U24fieldU2D14F6FAB1B4065EBADBBA4A3661ADE689FF444EDD_17;
	// <PrivateImplementationDetails>/$ArrayType=1024 <PrivateImplementationDetails>::$field-B718C95C87C6B65DFA29D58A10442CEC9EBBDF1F
	U24ArrayTypeU3D1024_t1496239055  ___U24fieldU2DB718C95C87C6B65DFA29D58A10442CEC9EBBDF1F_18;
	// <PrivateImplementationDetails>/$ArrayType=1024 <PrivateImplementationDetails>::$field-124B1C35B19149213F8F7D40AA8E0ABA15DD70EC
	U24ArrayTypeU3D1024_t1496239055  ___U24fieldU2D124B1C35B19149213F8F7D40AA8E0ABA15DD70EC_19;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-4FFC8339E09825A68B861995F9C660EB11DBF13D
	U24ArrayTypeU3D16_t2289608776  ___U24fieldU2D4FFC8339E09825A68B861995F9C660EB11DBF13D_20;
	// <PrivateImplementationDetails>/$ArrayType=96 <PrivateImplementationDetails>::$field-C105B70BED997DB5D36E1D2E84C1EFCB445A428C
	U24ArrayTypeU3D96_t881291273  ___U24fieldU2DC105B70BED997DB5D36E1D2E84C1EFCB445A428C_21;
	// <PrivateImplementationDetails>/$ArrayType=56 <PrivateImplementationDetails>::$field-DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82
	U24ArrayTypeU3D56_t1391226737  ___U24fieldU2DDC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_22;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D
	U24ArrayTypeU3D16_t2289608776  ___U24fieldU2DB4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_23;
	// <PrivateImplementationDetails>/$ArrayType=48 <PrivateImplementationDetails>::$field-62BAB0F245E66C3EB982CF5A7015F0A7C3382283
	U24ArrayTypeU3D48_t3687564119  ___U24fieldU2D62BAB0F245E66C3EB982CF5A7015F0A7C3382283_24;
	// <PrivateImplementationDetails>/$ArrayType=256 <PrivateImplementationDetails>::$field-04B9E6B1364BBA4125AE2866E09C57C9E8CD6DA6
	U24ArrayTypeU3D256_t1189136629  ___U24fieldU2D04B9E6B1364BBA4125AE2866E09C57C9E8CD6DA6_25;
	// <PrivateImplementationDetails>/$ArrayType=256 <PrivateImplementationDetails>::$field-3D6EB645BC212077C1B37A3A32CA2A62F7B39018
	U24ArrayTypeU3D256_t1189136629  ___U24fieldU2D3D6EB645BC212077C1B37A3A32CA2A62F7B39018_26;
	// <PrivateImplementationDetails>/$ArrayType=256 <PrivateImplementationDetails>::$field-821D1E62CD072AE9EC73D238C7DE19C5C5F3A7D8
	U24ArrayTypeU3D256_t1189136629  ___U24fieldU2D821D1E62CD072AE9EC73D238C7DE19C5C5F3A7D8_27;
	// <PrivateImplementationDetails>/$ArrayType=256 <PrivateImplementationDetails>::$field-64354464C9074B5BB4369689AAA131961CD1EF19
	U24ArrayTypeU3D256_t1189136629  ___U24fieldU2D64354464C9074B5BB4369689AAA131961CD1EF19_28;
	// <PrivateImplementationDetails>/$ArrayType=256 <PrivateImplementationDetails>::$field-3F653EBF39CFCB2FD7FF335DC96E82F3CDFDF0C7
	U24ArrayTypeU3D256_t1189136629  ___U24fieldU2D3F653EBF39CFCB2FD7FF335DC96E82F3CDFDF0C7_29;
	// <PrivateImplementationDetails>/$ArrayType=256 <PrivateImplementationDetails>::$field-6D7292FF64ED402BBFFF5E7534C0980BEBF0EEB1
	U24ArrayTypeU3D256_t1189136629  ___U24fieldU2D6D7292FF64ED402BBFFF5E7534C0980BEBF0EEB1_30;
	// <PrivateImplementationDetails>/$ArrayType=256 <PrivateImplementationDetails>::$field-FC9EEBC457831129D4AF4FF84333B481F4BED60E
	U24ArrayTypeU3D256_t1189136629  ___U24fieldU2DFC9EEBC457831129D4AF4FF84333B481F4BED60E_31;
	// <PrivateImplementationDetails>/$ArrayType=256 <PrivateImplementationDetails>::$field-4C44594E2C603D85EC6195B1A7A6C5876CBB58E2
	U24ArrayTypeU3D256_t1189136629  ___U24fieldU2D4C44594E2C603D85EC6195B1A7A6C5876CBB58E2_32;
	// <PrivateImplementationDetails>/$ArrayType=128 <PrivateImplementationDetails>::$field-D3BA31FA2132E3CD69D057D38B3E3ACF0A6C8A13
	U24ArrayTypeU3D128_t2571979752  ___U24fieldU2DD3BA31FA2132E3CD69D057D38B3E3ACF0A6C8A13_33;
	// <PrivateImplementationDetails>/$ArrayType=128 <PrivateImplementationDetails>::$field-CC53D7FE00E6AC1385AF09521629229467BCCC86
	U24ArrayTypeU3D128_t2571979752  ___U24fieldU2DCC53D7FE00E6AC1385AF09521629229467BCCC86_34;
	// <PrivateImplementationDetails>/$ArrayType=128 <PrivateImplementationDetails>::$field-2BA9E4B370D477F8C7FE286262D7ADC69CAF290E
	U24ArrayTypeU3D128_t2571979752  ___U24fieldU2D2BA9E4B370D477F8C7FE286262D7ADC69CAF290E_35;
	// <PrivateImplementationDetails>/$ArrayType=128 <PrivateImplementationDetails>::$field-1005BA20F99323E3F050E781BB81D1A4479AB037
	U24ArrayTypeU3D128_t2571979752  ___U24fieldU2D1005BA20F99323E3F050E781BB81D1A4479AB037_36;
	// <PrivateImplementationDetails>/$ArrayType=128 <PrivateImplementationDetails>::$field-E17D18DCD8392C99D47823F8CB9F43896D115FB8
	U24ArrayTypeU3D128_t2571979752  ___U24fieldU2DE17D18DCD8392C99D47823F8CB9F43896D115FB8_37;
	// <PrivateImplementationDetails>/$ArrayType=128 <PrivateImplementationDetails>::$field-7CFF7A50C8F8981091791CDB210243E8F465BC80
	U24ArrayTypeU3D128_t2571979752  ___U24fieldU2D7CFF7A50C8F8981091791CDB210243E8F465BC80_38;
	// <PrivateImplementationDetails>/$ArrayType=128 <PrivateImplementationDetails>::$field-3A38ADC6BCFB84DE23160C1E50212DACBCD25A11
	U24ArrayTypeU3D128_t2571979752  ___U24fieldU2D3A38ADC6BCFB84DE23160C1E50212DACBCD25A11_39;
	// <PrivateImplementationDetails>/$ArrayType=1024 <PrivateImplementationDetails>::$field-D9642D3FF9879EC5C4BB28AE7001CEE3D43956AB
	U24ArrayTypeU3D1024_t1496239055  ___U24fieldU2DD9642D3FF9879EC5C4BB28AE7001CEE3D43956AB_40;
	// <PrivateImplementationDetails>/$ArrayType=1024 <PrivateImplementationDetails>::$field-8C7FEE53346CDB1B119FCAD8D605F476400A03CE
	U24ArrayTypeU3D1024_t1496239055  ___U24fieldU2D8C7FEE53346CDB1B119FCAD8D605F476400A03CE_41;
	// <PrivateImplementationDetails>/$ArrayType=1024 <PrivateImplementationDetails>::$field-EEDBCB52C67688DE5F5FD9209E8A25BC786A2430
	U24ArrayTypeU3D1024_t1496239055  ___U24fieldU2DEEDBCB52C67688DE5F5FD9209E8A25BC786A2430_42;
	// <PrivateImplementationDetails>/$ArrayType=1024 <PrivateImplementationDetails>::$field-F8AB5CA414AD9084F3E8B8D887217E6DFC32C62C
	U24ArrayTypeU3D1024_t1496239055  ___U24fieldU2DF8AB5CA414AD9084F3E8B8D887217E6DFC32C62C_43;
	// <PrivateImplementationDetails>/$ArrayType=64 <PrivateImplementationDetails>::$field-641D0D9E9CE6DDAC3F12536417A6A64C8DDD4776
	U24ArrayTypeU3D64_t4078931961  ___U24fieldU2D641D0D9E9CE6DDAC3F12536417A6A64C8DDD4776_44;
	// <PrivateImplementationDetails>/$ArrayType=60 <PrivateImplementationDetails>::$field-55BCCC431843040DD1427CB495B2FD469C4D4D20
	U24ArrayTypeU3D60_t956196824  ___U24fieldU2D55BCCC431843040DD1427CB495B2FD469C4D4D20_45;
	// <PrivateImplementationDetails>/$ArrayType=8 <PrivateImplementationDetails>::$field-3C3A13E15C81AD114ECBA973C706DCD985BF18D6
	U24ArrayTypeU3D8_t3476260243  ___U24fieldU2D3C3A13E15C81AD114ECBA973C706DCD985BF18D6_46;
	// <PrivateImplementationDetails>/$ArrayType=4 <PrivateImplementationDetails>::$field-07B35CC0531C638EA1581B73756B3A11272C1D91
	U24ArrayTypeU3D4_t1881604839  ___U24fieldU2D07B35CC0531C638EA1581B73756B3A11272C1D91_47;
	// <PrivateImplementationDetails>/$ArrayType=4 <PrivateImplementationDetails>::$field-31D8729F7377B44017C0A2395A582C9CA4163277
	U24ArrayTypeU3D4_t1881604839  ___U24fieldU2D31D8729F7377B44017C0A2395A582C9CA4163277_48;
	// <PrivateImplementationDetails>/$ArrayType=4 <PrivateImplementationDetails>::$field-1397D288BDA63B8D4B5F30CFFB9FF5A965AA7A1C
	U24ArrayTypeU3D4_t1881604839  ___U24fieldU2D1397D288BDA63B8D4B5F30CFFB9FF5A965AA7A1C_49;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-EE0F12B14397A7DF4588BEA8AA9B022754F4DA1B
	U24ArrayTypeU3D32_t4145487141  ___U24fieldU2DEE0F12B14397A7DF4588BEA8AA9B022754F4DA1B_50;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-D7231C06B1D6276752359120E26EAE206A7F74F9
	U24ArrayTypeU3D20_t2271475897  ___U24fieldU2DD7231C06B1D6276752359120E26EAE206A7F74F9_51;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-AA7973F07CDE1E6AA10B6970B0072D05F38F0AB2
	U24ArrayTypeU3D20_t2271475897  ___U24fieldU2DAA7973F07CDE1E6AA10B6970B0072D05F38F0AB2_52;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-2FCBB2FC4E672ED0607DD7827BA69B7E6C9EB6BD
	U24ArrayTypeU3D16_t2289608776  ___U24fieldU2D2FCBB2FC4E672ED0607DD7827BA69B7E6C9EB6BD_53;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-6277CE8FE3A9156D3455749B453AC88191D3C6D6
	U24ArrayTypeU3D16_t2289608776  ___U24fieldU2D6277CE8FE3A9156D3455749B453AC88191D3C6D6_54;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-9FC36EB698A900B5D2EF5E3B1ABA28CB6A217738
	U24ArrayTypeU3D16_t2289608776  ___U24fieldU2D9FC36EB698A900B5D2EF5E3B1ABA28CB6A217738_55;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-714A94F3805E05CA6C00F9A46489427ABEB25D60
	U24ArrayTypeU3D16_t2289608776  ___U24fieldU2D714A94F3805E05CA6C00F9A46489427ABEB25D60_56;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-F128744756EEB38C3EAD4A7E8536EC5D3FA430FF
	U24ArrayTypeU3D16_t2289608776  ___U24fieldU2DF128744756EEB38C3EAD4A7E8536EC5D3FA430FF_57;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-5AB421AC76CECB8E84025172585CB97DE8BECD65
	U24ArrayTypeU3D16_t2289608776  ___U24fieldU2D5AB421AC76CECB8E84025172585CB97DE8BECD65_58;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-6BBD3A22A185224EE0EBAB0784455E9E245376B7
	U24ArrayTypeU3D16_t2289608776  ___U24fieldU2D6BBD3A22A185224EE0EBAB0784455E9E245376B7_59;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-7B22115C45C6AD570AFBAB744FA1058DF97CDBC1
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D7B22115C45C6AD570AFBAB744FA1058DF97CDBC1_60;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-460C77B94933562DE2E0E5B4FD72B431DFAEB5B6
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D460C77B94933562DE2E0E5B4FD72B431DFAEB5B6_61;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-CE2B1D9E3E16F8A9B2ADFD296846C7C91AB27B86
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DCE2B1D9E3E16F8A9B2ADFD296846C7C91AB27B86_62;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-A471AF3330805980C7041F978D3CFF8838054E14
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DA471AF3330805980C7041F978D3CFF8838054E14_63;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-C0F40F05DBD4B7C8F77A1A55F3C5B9525FB5E124
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DC0F40F05DBD4B7C8F77A1A55F3C5B9525FB5E124_64;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-AD4075598ACA56EC39C5E575771BBB0CFBCE24EE
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DAD4075598ACA56EC39C5E575771BBB0CFBCE24EE_65;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-9AEFA90D8E67EBAE069B4B6C071A8E867B108B31
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D9AEFA90D8E67EBAE069B4B6C071A8E867B108B31_66;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-A5981DCAA364B0DC9E0385D893A31C2022364075
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DA5981DCAA364B0DC9E0385D893A31C2022364075_67;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-4435D44E1091E6624ED6B6E4FA3C9A8C5C996098
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D4435D44E1091E6624ED6B6E4FA3C9A8C5C996098_68;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-F5AEFD834ADB72DAA720930140E9ECC087FCF389
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DF5AEFD834ADB72DAA720930140E9ECC087FCF389_69;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-0D4B2069E2C1085C37B7AD86C9D0C59E4CED879B
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D0D4B2069E2C1085C37B7AD86C9D0C59E4CED879B_70;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-1A43D7FEEED03520E11C4A8996F149705D99C6BB
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D1A43D7FEEED03520E11C4A8996F149705D99C6BB_71;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-4B411385A36907D25D8088AE39AB6AAFA46B0642
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D4B411385A36907D25D8088AE39AB6AAFA46B0642_72;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-29F7A0217340B5682E7DDF98ADAD952E2A360E65
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D29F7A0217340B5682E7DDF98ADAD952E2A360E65_73;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-68178023585F1F782745740AA583CDC778DB31B3
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D68178023585F1F782745740AA583CDC778DB31B3_74;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-E53E13AFB95C5C24DF50875117B7DDCE12937B2E
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DE53E13AFB95C5C24DF50875117B7DDCE12937B2E_75;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-6F39BC29A161CAE5394821B1FDE160EB5229AE71
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D6F39BC29A161CAE5394821B1FDE160EB5229AE71_76;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-D99006A6CB3C75EEC7BB6ABEA6AA9C413D59F015
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DD99006A6CB3C75EEC7BB6ABEA6AA9C413D59F015_77;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-50AA269217736906D8469B9191F420DC6B13A36A
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D50AA269217736906D8469B9191F420DC6B13A36A_78;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-C3EE470FCBE9ED2CB4A9FE76CA81B438F69F0C62
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DC3EE470FCBE9ED2CB4A9FE76CA81B438F69F0C62_79;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-B997A0149EBF3CDD050D72AE1784E375A413B128
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DB997A0149EBF3CDD050D72AE1784E375A413B128_80;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-9597ECF10274DDDBFD265D4F66B70BAA9EAA83BD
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D9597ECF10274DDDBFD265D4F66B70BAA9EAA83BD_81;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-9FAE1C8A9B3D68DAE1EEE8A0946441D7078E2021
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D9FAE1C8A9B3D68DAE1EEE8A0946441D7078E2021_82;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-AD19F20EECB80A2079F504CB928A26FDE10E8C47
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DAD19F20EECB80A2079F504CB928A26FDE10E8C47_83;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-D129FBC67222EA7D73E90E51E4DCFCA8C7497D67
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DD129FBC67222EA7D73E90E51E4DCFCA8C7497D67_84;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-B3A60EC240A886DA5AFD600CC73AE12514A881E8
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DB3A60EC240A886DA5AFD600CC73AE12514A881E8_85;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-512F92F4041B190727A330E2A6CC39E5D9EA06E6
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D512F92F4041B190727A330E2A6CC39E5D9EA06E6_86;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-AD200F5E49BD2E5038FA7BD229E2B4429ECA8CDE
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DAD200F5E49BD2E5038FA7BD229E2B4429ECA8CDE_87;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-03D9F1A66AED1E059B1609A09E435B708A88C8B8
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D03D9F1A66AED1E059B1609A09E435B708A88C8B8_88;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-26853A2C322BBAD5BBD886C60A32BBBCFE847F00
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D26853A2C322BBAD5BBD886C60A32BBBCFE847F00_89;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-D31171F7904EB3247DD4834E43B47B1E2DCB97AC
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DD31171F7904EB3247DD4834E43B47B1E2DCB97AC_90;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-5EF7F909EFC731E811E21521A43A80FB5AC0B229
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D5EF7F909EFC731E811E21521A43A80FB5AC0B229_91;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-372040F482ABADADF58EF0C31A6A8BE386AF8A50
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D372040F482ABADADF58EF0C31A6A8BE386AF8A50_92;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-7878E9E7126B2BDF365429C31842AE1903CD2DFF
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D7878E9E7126B2BDF365429C31842AE1903CD2DFF_93;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-882888781BC0DC17021FB4F11BA783038C83B313
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D882888781BC0DC17021FB4F11BA783038C83B313_94;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-F3BF6F581A24C57F2FFF3D2FD3290FD102BB8566
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DF3BF6F581A24C57F2FFF3D2FD3290FD102BB8566_95;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-C2FEEB3C521ADDD49A534A0876BA97FF5894476E
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DC2FEEB3C521ADDD49A534A0876BA97FF5894476E_96;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-C991C784E7697AD0F91A159F03727BF4621A5AB8
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DC991C784E7697AD0F91A159F03727BF4621A5AB8_97;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-D860D5BD327368D1D4174620FE2E4A91FE9AADEC
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DD860D5BD327368D1D4174620FE2E4A91FE9AADEC_98;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-A696E1EE8632C559732B81052E4D2993B8783877
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DA696E1EE8632C559732B81052E4D2993B8783877_99;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-672385C1D6A6C84A1AC3588540B09C4AE3B87DDC
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D672385C1D6A6C84A1AC3588540B09C4AE3B87DDC_100;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-71F2B0A8153A60BA8F96A7159B5B92F4CCD7AFA7
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D71F2B0A8153A60BA8F96A7159B5B92F4CCD7AFA7_101;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-42C3E89412F11AA94E57C09EFB4B2B415C1AAB58
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D42C3E89412F11AA94E57C09EFB4B2B415C1AAB58_102;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-C2D514B39C8DFA25365195A0759A5AE28D9F2A87
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DC2D514B39C8DFA25365195A0759A5AE28D9F2A87_103;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-613CFAEE025A3AF3C6D13DEB22E298C1925C31B5
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D613CFAEE025A3AF3C6D13DEB22E298C1925C31B5_104;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-B5E8BA68953A5283AD953094F0F391FA4502A3FA
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DB5E8BA68953A5283AD953094F0F391FA4502A3FA_105;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-35E6464339FFAE0D3777B12A371F82D2D1F668CA
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D35E6464339FFAE0D3777B12A371F82D2D1F668CA_106;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-6DEB7F74818574642B0B824B9C08B366C962A360
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D6DEB7F74818574642B0B824B9C08B366C962A360_107;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-BEFC5B901D2D4EE83CB9EB422EFE470C4BF76C6B
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DBEFC5B901D2D4EE83CB9EB422EFE470C4BF76C6B_108;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-5D41C56232C500092E99AC044D3C5C442B1C834F
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D5D41C56232C500092E99AC044D3C5C442B1C834F_109;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-F63639527E877A2CBCB26FFD41D4A59470BFF8C8
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DF63639527E877A2CBCB26FFD41D4A59470BFF8C8_110;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-A72FDF28F8C2336EEEF4D5913F57EECDA0A2D3F6
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DA72FDF28F8C2336EEEF4D5913F57EECDA0A2D3F6_111;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-C4B266E68FA20D0D222D86ADAD31EBB55118CD21
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DC4B266E68FA20D0D222D86ADAD31EBB55118CD21_112;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-6AE5F51BDA53455ED8257137D6E6FF2E5A7ECF16
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2D6AE5F51BDA53455ED8257137D6E6FF2E5A7ECF16_113;
	// <PrivateImplementationDetails>/$ArrayType=256 <PrivateImplementationDetails>::$field-C95356610D5583976B69017BED7048EB50121B90
	U24ArrayTypeU3D256_t1189136629  ___U24fieldU2DC95356610D5583976B69017BED7048EB50121B90_114;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-A4313AAA146ACFCA88681B7BFC3D644005F3792B
	U24ArrayTypeU3D32_t4145487141  ___U24fieldU2DA4313AAA146ACFCA88681B7BFC3D644005F3792B_115;
	// <PrivateImplementationDetails>/$ArrayType=512 <PrivateImplementationDetails>::$field-CA1986CBA4E4F0DFA3BF6A654EF8A36E6077AD99
	U24ArrayTypeU3D512_t2137770118  ___U24fieldU2DCA1986CBA4E4F0DFA3BF6A654EF8A36E6077AD99_116;
	// <PrivateImplementationDetails>/$ArrayType=512 <PrivateImplementationDetails>::$field-239B59488F1CE7EBE225785FDC22A8E3102A2E82
	U24ArrayTypeU3D512_t2137770118  ___U24fieldU2D239B59488F1CE7EBE225785FDC22A8E3102A2E82_117;
	// <PrivateImplementationDetails>/$ArrayType=1024 <PrivateImplementationDetails>::$field-310EFB639F3C7677A2A82B54EEED1124ED69E9A3
	U24ArrayTypeU3D1024_t1496239055  ___U24fieldU2D310EFB639F3C7677A2A82B54EEED1124ED69E9A3_118;
	// <PrivateImplementationDetails>/$ArrayType=512 <PrivateImplementationDetails>::$field-428007959831954B0C2DCFAF9DD641D629B00DBF
	U24ArrayTypeU3D512_t2137770118  ___U24fieldU2D428007959831954B0C2DCFAF9DD641D629B00DBF_119;
	// <PrivateImplementationDetails>/$ArrayType=4096 <PrivateImplementationDetails>::$field-FA5B1C8B2F287078ED719C15595DB729BDB85911
	U24ArrayTypeU3D4096_t818062559  ___U24fieldU2DFA5B1C8B2F287078ED719C15595DB729BDB85911_120;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-86B0F85AC13B58F88DEFFD8FD6EE095438B98F10
	U24ArrayTypeU3D32_t4145487141  ___U24fieldU2D86B0F85AC13B58F88DEFFD8FD6EE095438B98F10_121;
	// <PrivateImplementationDetails>/$ArrayType=64 <PrivateImplementationDetails>::$field-EAEB85AB6D40E0AB7CE0F65EF7EDF588A4DD81C9
	U24ArrayTypeU3D64_t4078931961  ___U24fieldU2DEAEB85AB6D40E0AB7CE0F65EF7EDF588A4DD81C9_122;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-6AAC0DB543C50F09E879F5B9F757319773564CE1
	U24ArrayTypeU3D32_t4145487141  ___U24fieldU2D6AAC0DB543C50F09E879F5B9F757319773564CE1_123;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-FAF70E8DF6971D7BABBCE9FEF83EDA1D5D095D05
	U24ArrayTypeU3D16_t2289608776  ___U24fieldU2DFAF70E8DF6971D7BABBCE9FEF83EDA1D5D095D05_124;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-068B2E17352B5B9FF693CAE83421B679E0342A5C
	U24ArrayTypeU3D32_t4145487141  ___U24fieldU2D068B2E17352B5B9FF693CAE83421B679E0342A5C_125;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-F2842E2653F6C5E55959B5EC5E07ABAFC0191FB0
	U24ArrayTypeU3D32_t4145487141  ___U24fieldU2DF2842E2653F6C5E55959B5EC5E07ABAFC0191FB0_126;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-35D6BB00E88996CA4CA6EEB743BE1820C59C5FAD
	U24ArrayTypeU3D20_t2271475897  ___U24fieldU2D35D6BB00E88996CA4CA6EEB743BE1820C59C5FAD_127;
	// <PrivateImplementationDetails>/$ArrayType=40 <PrivateImplementationDetails>::$field-310FB325A3EA3EA527B55C2F08544D1CB92C19F4
	U24ArrayTypeU3D40_t1983424417  ___U24fieldU2D310FB325A3EA3EA527B55C2F08544D1CB92C19F4_128;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-C132685022CE310ACFD3A883E0A57033A482A959
	U24ArrayTypeU3D28_t1104879214  ___U24fieldU2DC132685022CE310ACFD3A883E0A57033A482A959_129;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-27FED0F92A97C41B08D3115553BBDC064F417B6E
	U24ArrayTypeU3D20_t2271475897  ___U24fieldU2D27FED0F92A97C41B08D3115553BBDC064F417B6E_130;
	// <PrivateImplementationDetails>/$ArrayType=40 <PrivateImplementationDetails>::$field-60A08108A32C9D3F263B2F42095A2694B7C1C1EF
	U24ArrayTypeU3D40_t1983424417  ___U24fieldU2D60A08108A32C9D3F263B2F42095A2694B7C1C1EF_131;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-32ECB35FF8400B4E56FF5E09588FB20DD60350E7
	U24ArrayTypeU3D28_t1104879214  ___U24fieldU2D32ECB35FF8400B4E56FF5E09588FB20DD60350E7_132;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-FB3C663794DD23F500825FF78450D198FE338938
	U24ArrayTypeU3D24_t1113226219  ___U24fieldU2DFB3C663794DD23F500825FF78450D198FE338938_133;
	// <PrivateImplementationDetails>/$ArrayType=48 <PrivateImplementationDetails>::$field-C5515C87D04DC0D00C7984096F5E35B4944C1CB6
	U24ArrayTypeU3D48_t3687564119  ___U24fieldU2DC5515C87D04DC0D00C7984096F5E35B4944C1CB6_134;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-8330271815E046D369E0B1F7673D308739FDCC07
	U24ArrayTypeU3D32_t4145487141  ___U24fieldU2D8330271815E046D369E0B1F7673D308739FDCC07_135;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-D6898715AE96BC2F82A7BBA76E2BFC7100E282C3
	U24ArrayTypeU3D24_t1113226219  ___U24fieldU2DD6898715AE96BC2F82A7BBA76E2BFC7100E282C3_136;
	// <PrivateImplementationDetails>/$ArrayType=48 <PrivateImplementationDetails>::$field-A53306F44DF494A019EA1487807B59CA336BF024
	U24ArrayTypeU3D48_t3687564119  ___U24fieldU2DA53306F44DF494A019EA1487807B59CA336BF024_137;
	// <PrivateImplementationDetails>/$ArrayType=36 <PrivateImplementationDetails>::$field-0982B1B45B764F2694ABC3DE57204AC898651429
	U24ArrayTypeU3D36_t3644008270  ___U24fieldU2D0982B1B45B764F2694ABC3DE57204AC898651429_138;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-126589410FF9CA1510B9950BF0E79E5BFD60000B
	U24ArrayTypeU3D28_t1104879214  ___U24fieldU2D126589410FF9CA1510B9950BF0E79E5BFD60000B_139;
	// <PrivateImplementationDetails>/$ArrayType=56 <PrivateImplementationDetails>::$field-E647D32D165F3510693DF9787DC98E0A0B63C5C2
	U24ArrayTypeU3D56_t1391226737  ___U24fieldU2DE647D32D165F3510693DF9787DC98E0A0B63C5C2_140;
	// <PrivateImplementationDetails>/$ArrayType=36 <PrivateImplementationDetails>::$field-66961AC9ADD7C27DCD1BCA65FCD5C02B74B62F47
	U24ArrayTypeU3D36_t3644008270  ___U24fieldU2D66961AC9ADD7C27DCD1BCA65FCD5C02B74B62F47_141;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-059FFAA29C8FCAA8FDB47FBFDE6FB74F5A43E5C0
	U24ArrayTypeU3D28_t1104879214  ___U24fieldU2D059FFAA29C8FCAA8FDB47FBFDE6FB74F5A43E5C0_142;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-1E3842329C5294DBE1DF588A77C68B35C6AF83BF
	U24ArrayTypeU3D28_t1104879214  ___U24fieldU2D1E3842329C5294DBE1DF588A77C68B35C6AF83BF_143;
	// <PrivateImplementationDetails>/$ArrayType=56 <PrivateImplementationDetails>::$field-8C9BE3C02B5604C5CBF6A03E8032549588A6ED54
	U24ArrayTypeU3D56_t1391226737  ___U24fieldU2D8C9BE3C02B5604C5CBF6A03E8032549588A6ED54_144;
	// <PrivateImplementationDetails>/$ArrayType=44 <PrivateImplementationDetails>::$field-EBE167F7962841FA83451C9C1663416D69AA5294
	U24ArrayTypeU3D44_t447450017  ___U24fieldU2DEBE167F7962841FA83451C9C1663416D69AA5294_145;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-2CABEB86D5B3D362822AF2E5D136A10A17AD85DA
	U24ArrayTypeU3D32_t4145487141  ___U24fieldU2D2CABEB86D5B3D362822AF2E5D136A10A17AD85DA_146;
	// <PrivateImplementationDetails>/$ArrayType=64 <PrivateImplementationDetails>::$field-79A213B796D2AD7A89C2071B0732B78207F5CE01
	U24ArrayTypeU3D64_t4078931961  ___U24fieldU2D79A213B796D2AD7A89C2071B0732B78207F5CE01_147;
	// <PrivateImplementationDetails>/$ArrayType=40 <PrivateImplementationDetails>::$field-BE8E2513259482B6F307AC07F23F5D9FB4841EAA
	U24ArrayTypeU3D40_t1983424417  ___U24fieldU2DBE8E2513259482B6F307AC07F23F5D9FB4841EAA_148;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-083DE622A9A685DC50D8D5653CB388A41343C8EC
	U24ArrayTypeU3D32_t4145487141  ___U24fieldU2D083DE622A9A685DC50D8D5653CB388A41343C8EC_149;
	// <PrivateImplementationDetails>/$ArrayType=64 <PrivateImplementationDetails>::$field-214F93D9222D60794CE1EA0A10389885C5CA9824
	U24ArrayTypeU3D64_t4078931961  ___U24fieldU2D214F93D9222D60794CE1EA0A10389885C5CA9824_150;
	// <PrivateImplementationDetails>/$ArrayType=48 <PrivateImplementationDetails>::$field-095B351FE2104237B032546280C98C9804D331C5
	U24ArrayTypeU3D48_t3687564119  ___U24fieldU2D095B351FE2104237B032546280C98C9804D331C5_151;
	// <PrivateImplementationDetails>/$ArrayType=96 <PrivateImplementationDetails>::$field-CE39574ADC95015A9B5E0475EB65EE8F32353FD4
	U24ArrayTypeU3D96_t881291273  ___U24fieldU2DCE39574ADC95015A9B5E0475EB65EE8F32353FD4_152;
	// <PrivateImplementationDetails>/$ArrayType=68 <PrivateImplementationDetails>::$field-EF2680899DD1FCA444AE6B8B3B0CC6C7DD40894B
	U24ArrayTypeU3D68_t2740126159  ___U24fieldU2DEF2680899DD1FCA444AE6B8B3B0CC6C7DD40894B_153;
	// <PrivateImplementationDetails>/$ArrayType=68 <PrivateImplementationDetails>::$field-96ADC3934F8492C827987DFEE3B4DD4EF1738E78
	U24ArrayTypeU3D68_t2740126159  ___U24fieldU2D96ADC3934F8492C827987DFEE3B4DD4EF1738E78_154;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-CBF7F8D48ACC5EB9048CB8F1FCFAF93B33516965
	U24ArrayTypeU3D24_t1113226219  ___U24fieldU2DCBF7F8D48ACC5EB9048CB8F1FCFAF93B33516965_155;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-BCE617693C33CE2C76FE00F449CA910E4C6E117E
	U24ArrayTypeU3D24_t1113226219  ___U24fieldU2DBCE617693C33CE2C76FE00F449CA910E4C6E117E_156;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-E0219F11D9EECC43022AA94967780250AC270D4B
	U24ArrayTypeU3D12_t37505501  ___U24fieldU2DE0219F11D9EECC43022AA94967780250AC270D4B_157;
	// <PrivateImplementationDetails>/$ArrayType=40 <PrivateImplementationDetails>::$field-5E7F55149EC07597C76E6E3CD9F62274214061E6
	U24ArrayTypeU3D40_t1983424417  ___U24fieldU2D5E7F55149EC07597C76E6E3CD9F62274214061E6_158;
	// <PrivateImplementationDetails>/$ArrayType=72 <PrivateImplementationDetails>::$field-0D0825E62E82DBEBFAD598623694129548E24C9C
	U24ArrayTypeU3D72_t1634360518  ___U24fieldU2D0D0825E62E82DBEBFAD598623694129548E24C9C_159;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-17E54FCA28103DF892BBB946DDEED4B061D7F5C7
	U24ArrayTypeU3D24_t1113226219  ___U24fieldU2D17E54FCA28103DF892BBB946DDEED4B061D7F5C7_160;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-FE5567E8D769550852182CDF69D74BB16DFF8E29
	U24ArrayTypeU3D16_t2289608776  ___U24fieldU2DFE5567E8D769550852182CDF69D74BB16DFF8E29_161;
	// <PrivateImplementationDetails>/$ArrayType=68 <PrivateImplementationDetails>::$field-F584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF
	U24ArrayTypeU3D68_t2740126159  ___U24fieldU2DF584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF_162;
	// <PrivateImplementationDetails>/$ArrayType=76 <PrivateImplementationDetails>::$field-1FDC8DB567F5AAA7068D0D2A601CD71657CBDF38
	U24ArrayTypeU3D76_t315395832  ___U24fieldU2D1FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_163;
	// <PrivateImplementationDetails>/$ArrayType=6144 <PrivateImplementationDetails>::$field-A474A0BEC4E2CE8491839502AE85F6EA8504C6BD
	U24ArrayTypeU3D6144_t3211423560  ___U24fieldU2DA474A0BEC4E2CE8491839502AE85F6EA8504C6BD_164;
	// <PrivateImplementationDetails>/$ArrayType=384 <PrivateImplementationDetails>::$field-1B180C6E41F096D53222F5E8EF558B78182CA401
	U24ArrayTypeU3D384_t2781497336  ___U24fieldU2D1B180C6E41F096D53222F5E8EF558B78182CA401_165;
	// <PrivateImplementationDetails>/$ArrayType=124 <PrivateImplementationDetails>::$field-8ED8F61DAA454B49CD5059AE4486C59174324E9E
	U24ArrayTypeU3D124_t2081813596  ___U24fieldU2D8ED8F61DAA454B49CD5059AE4486C59174324E9E_166;
	// <PrivateImplementationDetails>/$ArrayType=124 <PrivateImplementationDetails>::$field-DACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A
	U24ArrayTypeU3D124_t2081813596  ___U24fieldU2DDACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A_167;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-D068832E6B13A623916709C1E0E25ADCBE7B455F
	U24ArrayTypeU3D120_t3304934490  ___U24fieldU2DD068832E6B13A623916709C1E0E25ADCBE7B455F_168;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-79D521E6E3E55103005E9CC3FA43B3174FAF090F
	U24ArrayTypeU3D120_t3304934490  ___U24fieldU2D79D521E6E3E55103005E9CC3FA43B3174FAF090F_169;
	// <PrivateImplementationDetails>/$ArrayType=1152 <PrivateImplementationDetails>::$field-EB6F545AEF284339D25594F900E7A395212460EB
	U24ArrayTypeU3D1152_t3632293663  ___U24fieldU2DEB6F545AEF284339D25594F900E7A395212460EB_170;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-850D4DC092689E1F0D8A70B6281848B27DEC0014
	U24ArrayTypeU3D120_t3304934490  ___U24fieldU2D850D4DC092689E1F0D8A70B6281848B27DEC0014_171;
	// <PrivateImplementationDetails>/$ArrayType=116 <PrivateImplementationDetails>::$field-67C0E784F3654B008A81E2988588CF4956CCF3DA
	U24ArrayTypeU3D116_t541649237  ___U24fieldU2D67C0E784F3654B008A81E2988588CF4956CCF3DA_172;
	// <PrivateImplementationDetails>/$ArrayType=76 <PrivateImplementationDetails>::$field-8457F44B035C9073EE2D1F132D0A8AF5631DCDC8
	U24ArrayTypeU3D76_t315395832  ___U24fieldU2D8457F44B035C9073EE2D1F132D0A8AF5631DCDC8_173;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-AE6B2897A8B88E297D61124152931A88D5D977F4
	U24ArrayTypeU3D20_t2271475897  ___U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_174;
	// <PrivateImplementationDetails>/$ArrayType=512 <PrivateImplementationDetails>::$field-3544182260B8A15D332367E48C7530FC0E901FD3
	U24ArrayTypeU3D512_t2137770118  ___U24fieldU2D3544182260B8A15D332367E48C7530FC0E901FD3_175;
	// <PrivateImplementationDetails>/$ArrayType=256 <PrivateImplementationDetails>::$field-6A316789EED01119DE92841832701A40AB0CABD6
	U24ArrayTypeU3D256_t1189136629  ___U24fieldU2D6A316789EED01119DE92841832701A40AB0CABD6_176;
	// <PrivateImplementationDetails>/$ArrayType=116 <PrivateImplementationDetails>::$field-2E868D9F2085DF93F11F58DE61C05E0D8A8F4A71
	U24ArrayTypeU3D116_t541649237  ___U24fieldU2D2E868D9F2085DF93F11F58DE61C05E0D8A8F4A71_177;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-5581A70566F03554D8048EDBFC6E6B399AF9BCB1
	U24ArrayTypeU3D120_t3304934490  ___U24fieldU2D5581A70566F03554D8048EDBFC6E6B399AF9BCB1_178;

public:
	inline static int32_t get_offset_of_U24fieldU2D59F5BD34B6C013DEACC784F69C67E95150033A84_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D59F5BD34B6C013DEACC784F69C67E95150033A84_0)); }
	inline U24ArrayTypeU3D32_t4145487141  get_U24fieldU2D59F5BD34B6C013DEACC784F69C67E95150033A84_0() const { return ___U24fieldU2D59F5BD34B6C013DEACC784F69C67E95150033A84_0; }
	inline U24ArrayTypeU3D32_t4145487141 * get_address_of_U24fieldU2D59F5BD34B6C013DEACC784F69C67E95150033A84_0() { return &___U24fieldU2D59F5BD34B6C013DEACC784F69C67E95150033A84_0; }
	inline void set_U24fieldU2D59F5BD34B6C013DEACC784F69C67E95150033A84_0(U24ArrayTypeU3D32_t4145487141  value)
	{
		___U24fieldU2D59F5BD34B6C013DEACC784F69C67E95150033A84_0 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DCC5B8B6FA17DA57B26C3ACA4DA8B2A477C609D63_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DCC5B8B6FA17DA57B26C3ACA4DA8B2A477C609D63_1)); }
	inline U24ArrayTypeU3D32_t4145487141  get_U24fieldU2DCC5B8B6FA17DA57B26C3ACA4DA8B2A477C609D63_1() const { return ___U24fieldU2DCC5B8B6FA17DA57B26C3ACA4DA8B2A477C609D63_1; }
	inline U24ArrayTypeU3D32_t4145487141 * get_address_of_U24fieldU2DCC5B8B6FA17DA57B26C3ACA4DA8B2A477C609D63_1() { return &___U24fieldU2DCC5B8B6FA17DA57B26C3ACA4DA8B2A477C609D63_1; }
	inline void set_U24fieldU2DCC5B8B6FA17DA57B26C3ACA4DA8B2A477C609D63_1(U24ArrayTypeU3D32_t4145487141  value)
	{
		___U24fieldU2DCC5B8B6FA17DA57B26C3ACA4DA8B2A477C609D63_1 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D90A0542282A011472F94E97CEAE59F8B3B1A3291_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D90A0542282A011472F94E97CEAE59F8B3B1A3291_2)); }
	inline U24ArrayTypeU3D640_t4120940673  get_U24fieldU2D90A0542282A011472F94E97CEAE59F8B3B1A3291_2() const { return ___U24fieldU2D90A0542282A011472F94E97CEAE59F8B3B1A3291_2; }
	inline U24ArrayTypeU3D640_t4120940673 * get_address_of_U24fieldU2D90A0542282A011472F94E97CEAE59F8B3B1A3291_2() { return &___U24fieldU2D90A0542282A011472F94E97CEAE59F8B3B1A3291_2; }
	inline void set_U24fieldU2D90A0542282A011472F94E97CEAE59F8B3B1A3291_2(U24ArrayTypeU3D640_t4120940673  value)
	{
		___U24fieldU2D90A0542282A011472F94E97CEAE59F8B3B1A3291_2 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DD2C5BAE967587C6F3D9F2C4551911E0575A1101F_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DD2C5BAE967587C6F3D9F2C4551911E0575A1101F_3)); }
	inline U24ArrayTypeU3D256_t1189136629  get_U24fieldU2DD2C5BAE967587C6F3D9F2C4551911E0575A1101F_3() const { return ___U24fieldU2DD2C5BAE967587C6F3D9F2C4551911E0575A1101F_3; }
	inline U24ArrayTypeU3D256_t1189136629 * get_address_of_U24fieldU2DD2C5BAE967587C6F3D9F2C4551911E0575A1101F_3() { return &___U24fieldU2DD2C5BAE967587C6F3D9F2C4551911E0575A1101F_3; }
	inline void set_U24fieldU2DD2C5BAE967587C6F3D9F2C4551911E0575A1101F_3(U24ArrayTypeU3D256_t1189136629  value)
	{
		___U24fieldU2DD2C5BAE967587C6F3D9F2C4551911E0575A1101F_3 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D433175D38B13FFE177FDD661A309F1B528B3F6E2_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D433175D38B13FFE177FDD661A309F1B528B3F6E2_4)); }
	inline U24ArrayTypeU3D256_t1189136629  get_U24fieldU2D433175D38B13FFE177FDD661A309F1B528B3F6E2_4() const { return ___U24fieldU2D433175D38B13FFE177FDD661A309F1B528B3F6E2_4; }
	inline U24ArrayTypeU3D256_t1189136629 * get_address_of_U24fieldU2D433175D38B13FFE177FDD661A309F1B528B3F6E2_4() { return &___U24fieldU2D433175D38B13FFE177FDD661A309F1B528B3F6E2_4; }
	inline void set_U24fieldU2D433175D38B13FFE177FDD661A309F1B528B3F6E2_4(U24ArrayTypeU3D256_t1189136629  value)
	{
		___U24fieldU2D433175D38B13FFE177FDD661A309F1B528B3F6E2_4 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DA0FABB8173BA247898A9FA267D0CE05500B667A0_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DA0FABB8173BA247898A9FA267D0CE05500B667A0_5)); }
	inline U24ArrayTypeU3D2048_t1779509621  get_U24fieldU2DA0FABB8173BA247898A9FA267D0CE05500B667A0_5() const { return ___U24fieldU2DA0FABB8173BA247898A9FA267D0CE05500B667A0_5; }
	inline U24ArrayTypeU3D2048_t1779509621 * get_address_of_U24fieldU2DA0FABB8173BA247898A9FA267D0CE05500B667A0_5() { return &___U24fieldU2DA0FABB8173BA247898A9FA267D0CE05500B667A0_5; }
	inline void set_U24fieldU2DA0FABB8173BA247898A9FA267D0CE05500B667A0_5(U24ArrayTypeU3D2048_t1779509621  value)
	{
		___U24fieldU2DA0FABB8173BA247898A9FA267D0CE05500B667A0_5 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D467C6758F235D3193618192A64129CBB602C9067_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D467C6758F235D3193618192A64129CBB602C9067_6)); }
	inline U24ArrayTypeU3D2048_t1779509621  get_U24fieldU2D467C6758F235D3193618192A64129CBB602C9067_6() const { return ___U24fieldU2D467C6758F235D3193618192A64129CBB602C9067_6; }
	inline U24ArrayTypeU3D2048_t1779509621 * get_address_of_U24fieldU2D467C6758F235D3193618192A64129CBB602C9067_6() { return &___U24fieldU2D467C6758F235D3193618192A64129CBB602C9067_6; }
	inline void set_U24fieldU2D467C6758F235D3193618192A64129CBB602C9067_6(U24ArrayTypeU3D2048_t1779509621  value)
	{
		___U24fieldU2D467C6758F235D3193618192A64129CBB602C9067_6 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D1648F737A4CFFDA4E6C83A3D742109BF9DBC2446_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D1648F737A4CFFDA4E6C83A3D742109BF9DBC2446_7)); }
	inline U24ArrayTypeU3D2048_t1779509621  get_U24fieldU2D1648F737A4CFFDA4E6C83A3D742109BF9DBC2446_7() const { return ___U24fieldU2D1648F737A4CFFDA4E6C83A3D742109BF9DBC2446_7; }
	inline U24ArrayTypeU3D2048_t1779509621 * get_address_of_U24fieldU2D1648F737A4CFFDA4E6C83A3D742109BF9DBC2446_7() { return &___U24fieldU2D1648F737A4CFFDA4E6C83A3D742109BF9DBC2446_7; }
	inline void set_U24fieldU2D1648F737A4CFFDA4E6C83A3D742109BF9DBC2446_7(U24ArrayTypeU3D2048_t1779509621  value)
	{
		___U24fieldU2D1648F737A4CFFDA4E6C83A3D742109BF9DBC2446_7 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DC079C42AC966756C902EC38C4D7989F3C20D3625_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DC079C42AC966756C902EC38C4D7989F3C20D3625_8)); }
	inline U24ArrayTypeU3D2048_t1779509621  get_U24fieldU2DC079C42AC966756C902EC38C4D7989F3C20D3625_8() const { return ___U24fieldU2DC079C42AC966756C902EC38C4D7989F3C20D3625_8; }
	inline U24ArrayTypeU3D2048_t1779509621 * get_address_of_U24fieldU2DC079C42AC966756C902EC38C4D7989F3C20D3625_8() { return &___U24fieldU2DC079C42AC966756C902EC38C4D7989F3C20D3625_8; }
	inline void set_U24fieldU2DC079C42AC966756C902EC38C4D7989F3C20D3625_8(U24ArrayTypeU3D2048_t1779509621  value)
	{
		___U24fieldU2DC079C42AC966756C902EC38C4D7989F3C20D3625_8 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D840B3A53AAF3595FDF3313D46FFD246A7EA6E89E_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D840B3A53AAF3595FDF3313D46FFD246A7EA6E89E_9)); }
	inline U24ArrayTypeU3D1024_t1496239055  get_U24fieldU2D840B3A53AAF3595FDF3313D46FFD246A7EA6E89E_9() const { return ___U24fieldU2D840B3A53AAF3595FDF3313D46FFD246A7EA6E89E_9; }
	inline U24ArrayTypeU3D1024_t1496239055 * get_address_of_U24fieldU2D840B3A53AAF3595FDF3313D46FFD246A7EA6E89E_9() { return &___U24fieldU2D840B3A53AAF3595FDF3313D46FFD246A7EA6E89E_9; }
	inline void set_U24fieldU2D840B3A53AAF3595FDF3313D46FFD246A7EA6E89E_9(U24ArrayTypeU3D1024_t1496239055  value)
	{
		___U24fieldU2D840B3A53AAF3595FDF3313D46FFD246A7EA6E89E_9 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_10)); }
	inline U24ArrayTypeU3D256_t1189136629  get_U24fieldU2D8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_10() const { return ___U24fieldU2D8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_10; }
	inline U24ArrayTypeU3D256_t1189136629 * get_address_of_U24fieldU2D8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_10() { return &___U24fieldU2D8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_10; }
	inline void set_U24fieldU2D8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_10(U24ArrayTypeU3D256_t1189136629  value)
	{
		___U24fieldU2D8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_10 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D0C4110BC17D746F018F47B49E0EB0D6590F69939_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D0C4110BC17D746F018F47B49E0EB0D6590F69939_11)); }
	inline U24ArrayTypeU3D256_t1189136629  get_U24fieldU2D0C4110BC17D746F018F47B49E0EB0D6590F69939_11() const { return ___U24fieldU2D0C4110BC17D746F018F47B49E0EB0D6590F69939_11; }
	inline U24ArrayTypeU3D256_t1189136629 * get_address_of_U24fieldU2D0C4110BC17D746F018F47B49E0EB0D6590F69939_11() { return &___U24fieldU2D0C4110BC17D746F018F47B49E0EB0D6590F69939_11; }
	inline void set_U24fieldU2D0C4110BC17D746F018F47B49E0EB0D6590F69939_11(U24ArrayTypeU3D256_t1189136629  value)
	{
		___U24fieldU2D0C4110BC17D746F018F47B49E0EB0D6590F69939_11 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DF83C7B497B14628C1D0DB3FA2FD89BD5C0D5138A_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DF83C7B497B14628C1D0DB3FA2FD89BD5C0D5138A_12)); }
	inline U24ArrayTypeU3D32_t4145487141  get_U24fieldU2DF83C7B497B14628C1D0DB3FA2FD89BD5C0D5138A_12() const { return ___U24fieldU2DF83C7B497B14628C1D0DB3FA2FD89BD5C0D5138A_12; }
	inline U24ArrayTypeU3D32_t4145487141 * get_address_of_U24fieldU2DF83C7B497B14628C1D0DB3FA2FD89BD5C0D5138A_12() { return &___U24fieldU2DF83C7B497B14628C1D0DB3FA2FD89BD5C0D5138A_12; }
	inline void set_U24fieldU2DF83C7B497B14628C1D0DB3FA2FD89BD5C0D5138A_12(U24ArrayTypeU3D32_t4145487141  value)
	{
		___U24fieldU2DF83C7B497B14628C1D0DB3FA2FD89BD5C0D5138A_12 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DB68637EF60D499620B99E336C59E4865FFC4C5D7_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DB68637EF60D499620B99E336C59E4865FFC4C5D7_13)); }
	inline U24ArrayTypeU3D1024_t1496239055  get_U24fieldU2DB68637EF60D499620B99E336C59E4865FFC4C5D7_13() const { return ___U24fieldU2DB68637EF60D499620B99E336C59E4865FFC4C5D7_13; }
	inline U24ArrayTypeU3D1024_t1496239055 * get_address_of_U24fieldU2DB68637EF60D499620B99E336C59E4865FFC4C5D7_13() { return &___U24fieldU2DB68637EF60D499620B99E336C59E4865FFC4C5D7_13; }
	inline void set_U24fieldU2DB68637EF60D499620B99E336C59E4865FFC4C5D7_13(U24ArrayTypeU3D1024_t1496239055  value)
	{
		___U24fieldU2DB68637EF60D499620B99E336C59E4865FFC4C5D7_13 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D1AFB455399A50580CF1039188ABA6BE82F309543_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D1AFB455399A50580CF1039188ABA6BE82F309543_14)); }
	inline U24ArrayTypeU3D1024_t1496239055  get_U24fieldU2D1AFB455399A50580CF1039188ABA6BE82F309543_14() const { return ___U24fieldU2D1AFB455399A50580CF1039188ABA6BE82F309543_14; }
	inline U24ArrayTypeU3D1024_t1496239055 * get_address_of_U24fieldU2D1AFB455399A50580CF1039188ABA6BE82F309543_14() { return &___U24fieldU2D1AFB455399A50580CF1039188ABA6BE82F309543_14; }
	inline void set_U24fieldU2D1AFB455399A50580CF1039188ABA6BE82F309543_14(U24ArrayTypeU3D1024_t1496239055  value)
	{
		___U24fieldU2D1AFB455399A50580CF1039188ABA6BE82F309543_14 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DAE843E1C1136C908565A6D4E04E8564B69465B3B_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DAE843E1C1136C908565A6D4E04E8564B69465B3B_15)); }
	inline U24ArrayTypeU3D48_t3687564119  get_U24fieldU2DAE843E1C1136C908565A6D4E04E8564B69465B3B_15() const { return ___U24fieldU2DAE843E1C1136C908565A6D4E04E8564B69465B3B_15; }
	inline U24ArrayTypeU3D48_t3687564119 * get_address_of_U24fieldU2DAE843E1C1136C908565A6D4E04E8564B69465B3B_15() { return &___U24fieldU2DAE843E1C1136C908565A6D4E04E8564B69465B3B_15; }
	inline void set_U24fieldU2DAE843E1C1136C908565A6D4E04E8564B69465B3B_15(U24ArrayTypeU3D48_t3687564119  value)
	{
		___U24fieldU2DAE843E1C1136C908565A6D4E04E8564B69465B3B_15 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DB1108EE6609DB783B2EC606B3BFDD544A7D4C2B3_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DB1108EE6609DB783B2EC606B3BFDD544A7D4C2B3_16)); }
	inline U24ArrayTypeU3D1024_t1496239055  get_U24fieldU2DB1108EE6609DB783B2EC606B3BFDD544A7D4C2B3_16() const { return ___U24fieldU2DB1108EE6609DB783B2EC606B3BFDD544A7D4C2B3_16; }
	inline U24ArrayTypeU3D1024_t1496239055 * get_address_of_U24fieldU2DB1108EE6609DB783B2EC606B3BFDD544A7D4C2B3_16() { return &___U24fieldU2DB1108EE6609DB783B2EC606B3BFDD544A7D4C2B3_16; }
	inline void set_U24fieldU2DB1108EE6609DB783B2EC606B3BFDD544A7D4C2B3_16(U24ArrayTypeU3D1024_t1496239055  value)
	{
		___U24fieldU2DB1108EE6609DB783B2EC606B3BFDD544A7D4C2B3_16 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D14F6FAB1B4065EBADBBA4A3661ADE689FF444EDD_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D14F6FAB1B4065EBADBBA4A3661ADE689FF444EDD_17)); }
	inline U24ArrayTypeU3D1024_t1496239055  get_U24fieldU2D14F6FAB1B4065EBADBBA4A3661ADE689FF444EDD_17() const { return ___U24fieldU2D14F6FAB1B4065EBADBBA4A3661ADE689FF444EDD_17; }
	inline U24ArrayTypeU3D1024_t1496239055 * get_address_of_U24fieldU2D14F6FAB1B4065EBADBBA4A3661ADE689FF444EDD_17() { return &___U24fieldU2D14F6FAB1B4065EBADBBA4A3661ADE689FF444EDD_17; }
	inline void set_U24fieldU2D14F6FAB1B4065EBADBBA4A3661ADE689FF444EDD_17(U24ArrayTypeU3D1024_t1496239055  value)
	{
		___U24fieldU2D14F6FAB1B4065EBADBBA4A3661ADE689FF444EDD_17 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DB718C95C87C6B65DFA29D58A10442CEC9EBBDF1F_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DB718C95C87C6B65DFA29D58A10442CEC9EBBDF1F_18)); }
	inline U24ArrayTypeU3D1024_t1496239055  get_U24fieldU2DB718C95C87C6B65DFA29D58A10442CEC9EBBDF1F_18() const { return ___U24fieldU2DB718C95C87C6B65DFA29D58A10442CEC9EBBDF1F_18; }
	inline U24ArrayTypeU3D1024_t1496239055 * get_address_of_U24fieldU2DB718C95C87C6B65DFA29D58A10442CEC9EBBDF1F_18() { return &___U24fieldU2DB718C95C87C6B65DFA29D58A10442CEC9EBBDF1F_18; }
	inline void set_U24fieldU2DB718C95C87C6B65DFA29D58A10442CEC9EBBDF1F_18(U24ArrayTypeU3D1024_t1496239055  value)
	{
		___U24fieldU2DB718C95C87C6B65DFA29D58A10442CEC9EBBDF1F_18 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D124B1C35B19149213F8F7D40AA8E0ABA15DD70EC_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D124B1C35B19149213F8F7D40AA8E0ABA15DD70EC_19)); }
	inline U24ArrayTypeU3D1024_t1496239055  get_U24fieldU2D124B1C35B19149213F8F7D40AA8E0ABA15DD70EC_19() const { return ___U24fieldU2D124B1C35B19149213F8F7D40AA8E0ABA15DD70EC_19; }
	inline U24ArrayTypeU3D1024_t1496239055 * get_address_of_U24fieldU2D124B1C35B19149213F8F7D40AA8E0ABA15DD70EC_19() { return &___U24fieldU2D124B1C35B19149213F8F7D40AA8E0ABA15DD70EC_19; }
	inline void set_U24fieldU2D124B1C35B19149213F8F7D40AA8E0ABA15DD70EC_19(U24ArrayTypeU3D1024_t1496239055  value)
	{
		___U24fieldU2D124B1C35B19149213F8F7D40AA8E0ABA15DD70EC_19 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D4FFC8339E09825A68B861995F9C660EB11DBF13D_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D4FFC8339E09825A68B861995F9C660EB11DBF13D_20)); }
	inline U24ArrayTypeU3D16_t2289608776  get_U24fieldU2D4FFC8339E09825A68B861995F9C660EB11DBF13D_20() const { return ___U24fieldU2D4FFC8339E09825A68B861995F9C660EB11DBF13D_20; }
	inline U24ArrayTypeU3D16_t2289608776 * get_address_of_U24fieldU2D4FFC8339E09825A68B861995F9C660EB11DBF13D_20() { return &___U24fieldU2D4FFC8339E09825A68B861995F9C660EB11DBF13D_20; }
	inline void set_U24fieldU2D4FFC8339E09825A68B861995F9C660EB11DBF13D_20(U24ArrayTypeU3D16_t2289608776  value)
	{
		___U24fieldU2D4FFC8339E09825A68B861995F9C660EB11DBF13D_20 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DC105B70BED997DB5D36E1D2E84C1EFCB445A428C_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DC105B70BED997DB5D36E1D2E84C1EFCB445A428C_21)); }
	inline U24ArrayTypeU3D96_t881291273  get_U24fieldU2DC105B70BED997DB5D36E1D2E84C1EFCB445A428C_21() const { return ___U24fieldU2DC105B70BED997DB5D36E1D2E84C1EFCB445A428C_21; }
	inline U24ArrayTypeU3D96_t881291273 * get_address_of_U24fieldU2DC105B70BED997DB5D36E1D2E84C1EFCB445A428C_21() { return &___U24fieldU2DC105B70BED997DB5D36E1D2E84C1EFCB445A428C_21; }
	inline void set_U24fieldU2DC105B70BED997DB5D36E1D2E84C1EFCB445A428C_21(U24ArrayTypeU3D96_t881291273  value)
	{
		___U24fieldU2DC105B70BED997DB5D36E1D2E84C1EFCB445A428C_21 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DDC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DDC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_22)); }
	inline U24ArrayTypeU3D56_t1391226737  get_U24fieldU2DDC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_22() const { return ___U24fieldU2DDC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_22; }
	inline U24ArrayTypeU3D56_t1391226737 * get_address_of_U24fieldU2DDC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_22() { return &___U24fieldU2DDC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_22; }
	inline void set_U24fieldU2DDC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_22(U24ArrayTypeU3D56_t1391226737  value)
	{
		___U24fieldU2DDC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_22 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DB4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DB4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_23)); }
	inline U24ArrayTypeU3D16_t2289608776  get_U24fieldU2DB4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_23() const { return ___U24fieldU2DB4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_23; }
	inline U24ArrayTypeU3D16_t2289608776 * get_address_of_U24fieldU2DB4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_23() { return &___U24fieldU2DB4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_23; }
	inline void set_U24fieldU2DB4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_23(U24ArrayTypeU3D16_t2289608776  value)
	{
		___U24fieldU2DB4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_23 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D62BAB0F245E66C3EB982CF5A7015F0A7C3382283_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D62BAB0F245E66C3EB982CF5A7015F0A7C3382283_24)); }
	inline U24ArrayTypeU3D48_t3687564119  get_U24fieldU2D62BAB0F245E66C3EB982CF5A7015F0A7C3382283_24() const { return ___U24fieldU2D62BAB0F245E66C3EB982CF5A7015F0A7C3382283_24; }
	inline U24ArrayTypeU3D48_t3687564119 * get_address_of_U24fieldU2D62BAB0F245E66C3EB982CF5A7015F0A7C3382283_24() { return &___U24fieldU2D62BAB0F245E66C3EB982CF5A7015F0A7C3382283_24; }
	inline void set_U24fieldU2D62BAB0F245E66C3EB982CF5A7015F0A7C3382283_24(U24ArrayTypeU3D48_t3687564119  value)
	{
		___U24fieldU2D62BAB0F245E66C3EB982CF5A7015F0A7C3382283_24 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D04B9E6B1364BBA4125AE2866E09C57C9E8CD6DA6_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D04B9E6B1364BBA4125AE2866E09C57C9E8CD6DA6_25)); }
	inline U24ArrayTypeU3D256_t1189136629  get_U24fieldU2D04B9E6B1364BBA4125AE2866E09C57C9E8CD6DA6_25() const { return ___U24fieldU2D04B9E6B1364BBA4125AE2866E09C57C9E8CD6DA6_25; }
	inline U24ArrayTypeU3D256_t1189136629 * get_address_of_U24fieldU2D04B9E6B1364BBA4125AE2866E09C57C9E8CD6DA6_25() { return &___U24fieldU2D04B9E6B1364BBA4125AE2866E09C57C9E8CD6DA6_25; }
	inline void set_U24fieldU2D04B9E6B1364BBA4125AE2866E09C57C9E8CD6DA6_25(U24ArrayTypeU3D256_t1189136629  value)
	{
		___U24fieldU2D04B9E6B1364BBA4125AE2866E09C57C9E8CD6DA6_25 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D3D6EB645BC212077C1B37A3A32CA2A62F7B39018_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D3D6EB645BC212077C1B37A3A32CA2A62F7B39018_26)); }
	inline U24ArrayTypeU3D256_t1189136629  get_U24fieldU2D3D6EB645BC212077C1B37A3A32CA2A62F7B39018_26() const { return ___U24fieldU2D3D6EB645BC212077C1B37A3A32CA2A62F7B39018_26; }
	inline U24ArrayTypeU3D256_t1189136629 * get_address_of_U24fieldU2D3D6EB645BC212077C1B37A3A32CA2A62F7B39018_26() { return &___U24fieldU2D3D6EB645BC212077C1B37A3A32CA2A62F7B39018_26; }
	inline void set_U24fieldU2D3D6EB645BC212077C1B37A3A32CA2A62F7B39018_26(U24ArrayTypeU3D256_t1189136629  value)
	{
		___U24fieldU2D3D6EB645BC212077C1B37A3A32CA2A62F7B39018_26 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D821D1E62CD072AE9EC73D238C7DE19C5C5F3A7D8_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D821D1E62CD072AE9EC73D238C7DE19C5C5F3A7D8_27)); }
	inline U24ArrayTypeU3D256_t1189136629  get_U24fieldU2D821D1E62CD072AE9EC73D238C7DE19C5C5F3A7D8_27() const { return ___U24fieldU2D821D1E62CD072AE9EC73D238C7DE19C5C5F3A7D8_27; }
	inline U24ArrayTypeU3D256_t1189136629 * get_address_of_U24fieldU2D821D1E62CD072AE9EC73D238C7DE19C5C5F3A7D8_27() { return &___U24fieldU2D821D1E62CD072AE9EC73D238C7DE19C5C5F3A7D8_27; }
	inline void set_U24fieldU2D821D1E62CD072AE9EC73D238C7DE19C5C5F3A7D8_27(U24ArrayTypeU3D256_t1189136629  value)
	{
		___U24fieldU2D821D1E62CD072AE9EC73D238C7DE19C5C5F3A7D8_27 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D64354464C9074B5BB4369689AAA131961CD1EF19_28() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D64354464C9074B5BB4369689AAA131961CD1EF19_28)); }
	inline U24ArrayTypeU3D256_t1189136629  get_U24fieldU2D64354464C9074B5BB4369689AAA131961CD1EF19_28() const { return ___U24fieldU2D64354464C9074B5BB4369689AAA131961CD1EF19_28; }
	inline U24ArrayTypeU3D256_t1189136629 * get_address_of_U24fieldU2D64354464C9074B5BB4369689AAA131961CD1EF19_28() { return &___U24fieldU2D64354464C9074B5BB4369689AAA131961CD1EF19_28; }
	inline void set_U24fieldU2D64354464C9074B5BB4369689AAA131961CD1EF19_28(U24ArrayTypeU3D256_t1189136629  value)
	{
		___U24fieldU2D64354464C9074B5BB4369689AAA131961CD1EF19_28 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D3F653EBF39CFCB2FD7FF335DC96E82F3CDFDF0C7_29() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D3F653EBF39CFCB2FD7FF335DC96E82F3CDFDF0C7_29)); }
	inline U24ArrayTypeU3D256_t1189136629  get_U24fieldU2D3F653EBF39CFCB2FD7FF335DC96E82F3CDFDF0C7_29() const { return ___U24fieldU2D3F653EBF39CFCB2FD7FF335DC96E82F3CDFDF0C7_29; }
	inline U24ArrayTypeU3D256_t1189136629 * get_address_of_U24fieldU2D3F653EBF39CFCB2FD7FF335DC96E82F3CDFDF0C7_29() { return &___U24fieldU2D3F653EBF39CFCB2FD7FF335DC96E82F3CDFDF0C7_29; }
	inline void set_U24fieldU2D3F653EBF39CFCB2FD7FF335DC96E82F3CDFDF0C7_29(U24ArrayTypeU3D256_t1189136629  value)
	{
		___U24fieldU2D3F653EBF39CFCB2FD7FF335DC96E82F3CDFDF0C7_29 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D6D7292FF64ED402BBFFF5E7534C0980BEBF0EEB1_30() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D6D7292FF64ED402BBFFF5E7534C0980BEBF0EEB1_30)); }
	inline U24ArrayTypeU3D256_t1189136629  get_U24fieldU2D6D7292FF64ED402BBFFF5E7534C0980BEBF0EEB1_30() const { return ___U24fieldU2D6D7292FF64ED402BBFFF5E7534C0980BEBF0EEB1_30; }
	inline U24ArrayTypeU3D256_t1189136629 * get_address_of_U24fieldU2D6D7292FF64ED402BBFFF5E7534C0980BEBF0EEB1_30() { return &___U24fieldU2D6D7292FF64ED402BBFFF5E7534C0980BEBF0EEB1_30; }
	inline void set_U24fieldU2D6D7292FF64ED402BBFFF5E7534C0980BEBF0EEB1_30(U24ArrayTypeU3D256_t1189136629  value)
	{
		___U24fieldU2D6D7292FF64ED402BBFFF5E7534C0980BEBF0EEB1_30 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DFC9EEBC457831129D4AF4FF84333B481F4BED60E_31() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DFC9EEBC457831129D4AF4FF84333B481F4BED60E_31)); }
	inline U24ArrayTypeU3D256_t1189136629  get_U24fieldU2DFC9EEBC457831129D4AF4FF84333B481F4BED60E_31() const { return ___U24fieldU2DFC9EEBC457831129D4AF4FF84333B481F4BED60E_31; }
	inline U24ArrayTypeU3D256_t1189136629 * get_address_of_U24fieldU2DFC9EEBC457831129D4AF4FF84333B481F4BED60E_31() { return &___U24fieldU2DFC9EEBC457831129D4AF4FF84333B481F4BED60E_31; }
	inline void set_U24fieldU2DFC9EEBC457831129D4AF4FF84333B481F4BED60E_31(U24ArrayTypeU3D256_t1189136629  value)
	{
		___U24fieldU2DFC9EEBC457831129D4AF4FF84333B481F4BED60E_31 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D4C44594E2C603D85EC6195B1A7A6C5876CBB58E2_32() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D4C44594E2C603D85EC6195B1A7A6C5876CBB58E2_32)); }
	inline U24ArrayTypeU3D256_t1189136629  get_U24fieldU2D4C44594E2C603D85EC6195B1A7A6C5876CBB58E2_32() const { return ___U24fieldU2D4C44594E2C603D85EC6195B1A7A6C5876CBB58E2_32; }
	inline U24ArrayTypeU3D256_t1189136629 * get_address_of_U24fieldU2D4C44594E2C603D85EC6195B1A7A6C5876CBB58E2_32() { return &___U24fieldU2D4C44594E2C603D85EC6195B1A7A6C5876CBB58E2_32; }
	inline void set_U24fieldU2D4C44594E2C603D85EC6195B1A7A6C5876CBB58E2_32(U24ArrayTypeU3D256_t1189136629  value)
	{
		___U24fieldU2D4C44594E2C603D85EC6195B1A7A6C5876CBB58E2_32 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DD3BA31FA2132E3CD69D057D38B3E3ACF0A6C8A13_33() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DD3BA31FA2132E3CD69D057D38B3E3ACF0A6C8A13_33)); }
	inline U24ArrayTypeU3D128_t2571979752  get_U24fieldU2DD3BA31FA2132E3CD69D057D38B3E3ACF0A6C8A13_33() const { return ___U24fieldU2DD3BA31FA2132E3CD69D057D38B3E3ACF0A6C8A13_33; }
	inline U24ArrayTypeU3D128_t2571979752 * get_address_of_U24fieldU2DD3BA31FA2132E3CD69D057D38B3E3ACF0A6C8A13_33() { return &___U24fieldU2DD3BA31FA2132E3CD69D057D38B3E3ACF0A6C8A13_33; }
	inline void set_U24fieldU2DD3BA31FA2132E3CD69D057D38B3E3ACF0A6C8A13_33(U24ArrayTypeU3D128_t2571979752  value)
	{
		___U24fieldU2DD3BA31FA2132E3CD69D057D38B3E3ACF0A6C8A13_33 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DCC53D7FE00E6AC1385AF09521629229467BCCC86_34() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DCC53D7FE00E6AC1385AF09521629229467BCCC86_34)); }
	inline U24ArrayTypeU3D128_t2571979752  get_U24fieldU2DCC53D7FE00E6AC1385AF09521629229467BCCC86_34() const { return ___U24fieldU2DCC53D7FE00E6AC1385AF09521629229467BCCC86_34; }
	inline U24ArrayTypeU3D128_t2571979752 * get_address_of_U24fieldU2DCC53D7FE00E6AC1385AF09521629229467BCCC86_34() { return &___U24fieldU2DCC53D7FE00E6AC1385AF09521629229467BCCC86_34; }
	inline void set_U24fieldU2DCC53D7FE00E6AC1385AF09521629229467BCCC86_34(U24ArrayTypeU3D128_t2571979752  value)
	{
		___U24fieldU2DCC53D7FE00E6AC1385AF09521629229467BCCC86_34 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D2BA9E4B370D477F8C7FE286262D7ADC69CAF290E_35() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D2BA9E4B370D477F8C7FE286262D7ADC69CAF290E_35)); }
	inline U24ArrayTypeU3D128_t2571979752  get_U24fieldU2D2BA9E4B370D477F8C7FE286262D7ADC69CAF290E_35() const { return ___U24fieldU2D2BA9E4B370D477F8C7FE286262D7ADC69CAF290E_35; }
	inline U24ArrayTypeU3D128_t2571979752 * get_address_of_U24fieldU2D2BA9E4B370D477F8C7FE286262D7ADC69CAF290E_35() { return &___U24fieldU2D2BA9E4B370D477F8C7FE286262D7ADC69CAF290E_35; }
	inline void set_U24fieldU2D2BA9E4B370D477F8C7FE286262D7ADC69CAF290E_35(U24ArrayTypeU3D128_t2571979752  value)
	{
		___U24fieldU2D2BA9E4B370D477F8C7FE286262D7ADC69CAF290E_35 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D1005BA20F99323E3F050E781BB81D1A4479AB037_36() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D1005BA20F99323E3F050E781BB81D1A4479AB037_36)); }
	inline U24ArrayTypeU3D128_t2571979752  get_U24fieldU2D1005BA20F99323E3F050E781BB81D1A4479AB037_36() const { return ___U24fieldU2D1005BA20F99323E3F050E781BB81D1A4479AB037_36; }
	inline U24ArrayTypeU3D128_t2571979752 * get_address_of_U24fieldU2D1005BA20F99323E3F050E781BB81D1A4479AB037_36() { return &___U24fieldU2D1005BA20F99323E3F050E781BB81D1A4479AB037_36; }
	inline void set_U24fieldU2D1005BA20F99323E3F050E781BB81D1A4479AB037_36(U24ArrayTypeU3D128_t2571979752  value)
	{
		___U24fieldU2D1005BA20F99323E3F050E781BB81D1A4479AB037_36 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DE17D18DCD8392C99D47823F8CB9F43896D115FB8_37() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DE17D18DCD8392C99D47823F8CB9F43896D115FB8_37)); }
	inline U24ArrayTypeU3D128_t2571979752  get_U24fieldU2DE17D18DCD8392C99D47823F8CB9F43896D115FB8_37() const { return ___U24fieldU2DE17D18DCD8392C99D47823F8CB9F43896D115FB8_37; }
	inline U24ArrayTypeU3D128_t2571979752 * get_address_of_U24fieldU2DE17D18DCD8392C99D47823F8CB9F43896D115FB8_37() { return &___U24fieldU2DE17D18DCD8392C99D47823F8CB9F43896D115FB8_37; }
	inline void set_U24fieldU2DE17D18DCD8392C99D47823F8CB9F43896D115FB8_37(U24ArrayTypeU3D128_t2571979752  value)
	{
		___U24fieldU2DE17D18DCD8392C99D47823F8CB9F43896D115FB8_37 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D7CFF7A50C8F8981091791CDB210243E8F465BC80_38() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D7CFF7A50C8F8981091791CDB210243E8F465BC80_38)); }
	inline U24ArrayTypeU3D128_t2571979752  get_U24fieldU2D7CFF7A50C8F8981091791CDB210243E8F465BC80_38() const { return ___U24fieldU2D7CFF7A50C8F8981091791CDB210243E8F465BC80_38; }
	inline U24ArrayTypeU3D128_t2571979752 * get_address_of_U24fieldU2D7CFF7A50C8F8981091791CDB210243E8F465BC80_38() { return &___U24fieldU2D7CFF7A50C8F8981091791CDB210243E8F465BC80_38; }
	inline void set_U24fieldU2D7CFF7A50C8F8981091791CDB210243E8F465BC80_38(U24ArrayTypeU3D128_t2571979752  value)
	{
		___U24fieldU2D7CFF7A50C8F8981091791CDB210243E8F465BC80_38 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D3A38ADC6BCFB84DE23160C1E50212DACBCD25A11_39() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D3A38ADC6BCFB84DE23160C1E50212DACBCD25A11_39)); }
	inline U24ArrayTypeU3D128_t2571979752  get_U24fieldU2D3A38ADC6BCFB84DE23160C1E50212DACBCD25A11_39() const { return ___U24fieldU2D3A38ADC6BCFB84DE23160C1E50212DACBCD25A11_39; }
	inline U24ArrayTypeU3D128_t2571979752 * get_address_of_U24fieldU2D3A38ADC6BCFB84DE23160C1E50212DACBCD25A11_39() { return &___U24fieldU2D3A38ADC6BCFB84DE23160C1E50212DACBCD25A11_39; }
	inline void set_U24fieldU2D3A38ADC6BCFB84DE23160C1E50212DACBCD25A11_39(U24ArrayTypeU3D128_t2571979752  value)
	{
		___U24fieldU2D3A38ADC6BCFB84DE23160C1E50212DACBCD25A11_39 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DD9642D3FF9879EC5C4BB28AE7001CEE3D43956AB_40() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DD9642D3FF9879EC5C4BB28AE7001CEE3D43956AB_40)); }
	inline U24ArrayTypeU3D1024_t1496239055  get_U24fieldU2DD9642D3FF9879EC5C4BB28AE7001CEE3D43956AB_40() const { return ___U24fieldU2DD9642D3FF9879EC5C4BB28AE7001CEE3D43956AB_40; }
	inline U24ArrayTypeU3D1024_t1496239055 * get_address_of_U24fieldU2DD9642D3FF9879EC5C4BB28AE7001CEE3D43956AB_40() { return &___U24fieldU2DD9642D3FF9879EC5C4BB28AE7001CEE3D43956AB_40; }
	inline void set_U24fieldU2DD9642D3FF9879EC5C4BB28AE7001CEE3D43956AB_40(U24ArrayTypeU3D1024_t1496239055  value)
	{
		___U24fieldU2DD9642D3FF9879EC5C4BB28AE7001CEE3D43956AB_40 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D8C7FEE53346CDB1B119FCAD8D605F476400A03CE_41() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D8C7FEE53346CDB1B119FCAD8D605F476400A03CE_41)); }
	inline U24ArrayTypeU3D1024_t1496239055  get_U24fieldU2D8C7FEE53346CDB1B119FCAD8D605F476400A03CE_41() const { return ___U24fieldU2D8C7FEE53346CDB1B119FCAD8D605F476400A03CE_41; }
	inline U24ArrayTypeU3D1024_t1496239055 * get_address_of_U24fieldU2D8C7FEE53346CDB1B119FCAD8D605F476400A03CE_41() { return &___U24fieldU2D8C7FEE53346CDB1B119FCAD8D605F476400A03CE_41; }
	inline void set_U24fieldU2D8C7FEE53346CDB1B119FCAD8D605F476400A03CE_41(U24ArrayTypeU3D1024_t1496239055  value)
	{
		___U24fieldU2D8C7FEE53346CDB1B119FCAD8D605F476400A03CE_41 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DEEDBCB52C67688DE5F5FD9209E8A25BC786A2430_42() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DEEDBCB52C67688DE5F5FD9209E8A25BC786A2430_42)); }
	inline U24ArrayTypeU3D1024_t1496239055  get_U24fieldU2DEEDBCB52C67688DE5F5FD9209E8A25BC786A2430_42() const { return ___U24fieldU2DEEDBCB52C67688DE5F5FD9209E8A25BC786A2430_42; }
	inline U24ArrayTypeU3D1024_t1496239055 * get_address_of_U24fieldU2DEEDBCB52C67688DE5F5FD9209E8A25BC786A2430_42() { return &___U24fieldU2DEEDBCB52C67688DE5F5FD9209E8A25BC786A2430_42; }
	inline void set_U24fieldU2DEEDBCB52C67688DE5F5FD9209E8A25BC786A2430_42(U24ArrayTypeU3D1024_t1496239055  value)
	{
		___U24fieldU2DEEDBCB52C67688DE5F5FD9209E8A25BC786A2430_42 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DF8AB5CA414AD9084F3E8B8D887217E6DFC32C62C_43() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DF8AB5CA414AD9084F3E8B8D887217E6DFC32C62C_43)); }
	inline U24ArrayTypeU3D1024_t1496239055  get_U24fieldU2DF8AB5CA414AD9084F3E8B8D887217E6DFC32C62C_43() const { return ___U24fieldU2DF8AB5CA414AD9084F3E8B8D887217E6DFC32C62C_43; }
	inline U24ArrayTypeU3D1024_t1496239055 * get_address_of_U24fieldU2DF8AB5CA414AD9084F3E8B8D887217E6DFC32C62C_43() { return &___U24fieldU2DF8AB5CA414AD9084F3E8B8D887217E6DFC32C62C_43; }
	inline void set_U24fieldU2DF8AB5CA414AD9084F3E8B8D887217E6DFC32C62C_43(U24ArrayTypeU3D1024_t1496239055  value)
	{
		___U24fieldU2DF8AB5CA414AD9084F3E8B8D887217E6DFC32C62C_43 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D641D0D9E9CE6DDAC3F12536417A6A64C8DDD4776_44() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D641D0D9E9CE6DDAC3F12536417A6A64C8DDD4776_44)); }
	inline U24ArrayTypeU3D64_t4078931961  get_U24fieldU2D641D0D9E9CE6DDAC3F12536417A6A64C8DDD4776_44() const { return ___U24fieldU2D641D0D9E9CE6DDAC3F12536417A6A64C8DDD4776_44; }
	inline U24ArrayTypeU3D64_t4078931961 * get_address_of_U24fieldU2D641D0D9E9CE6DDAC3F12536417A6A64C8DDD4776_44() { return &___U24fieldU2D641D0D9E9CE6DDAC3F12536417A6A64C8DDD4776_44; }
	inline void set_U24fieldU2D641D0D9E9CE6DDAC3F12536417A6A64C8DDD4776_44(U24ArrayTypeU3D64_t4078931961  value)
	{
		___U24fieldU2D641D0D9E9CE6DDAC3F12536417A6A64C8DDD4776_44 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D55BCCC431843040DD1427CB495B2FD469C4D4D20_45() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D55BCCC431843040DD1427CB495B2FD469C4D4D20_45)); }
	inline U24ArrayTypeU3D60_t956196824  get_U24fieldU2D55BCCC431843040DD1427CB495B2FD469C4D4D20_45() const { return ___U24fieldU2D55BCCC431843040DD1427CB495B2FD469C4D4D20_45; }
	inline U24ArrayTypeU3D60_t956196824 * get_address_of_U24fieldU2D55BCCC431843040DD1427CB495B2FD469C4D4D20_45() { return &___U24fieldU2D55BCCC431843040DD1427CB495B2FD469C4D4D20_45; }
	inline void set_U24fieldU2D55BCCC431843040DD1427CB495B2FD469C4D4D20_45(U24ArrayTypeU3D60_t956196824  value)
	{
		___U24fieldU2D55BCCC431843040DD1427CB495B2FD469C4D4D20_45 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D3C3A13E15C81AD114ECBA973C706DCD985BF18D6_46() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D3C3A13E15C81AD114ECBA973C706DCD985BF18D6_46)); }
	inline U24ArrayTypeU3D8_t3476260243  get_U24fieldU2D3C3A13E15C81AD114ECBA973C706DCD985BF18D6_46() const { return ___U24fieldU2D3C3A13E15C81AD114ECBA973C706DCD985BF18D6_46; }
	inline U24ArrayTypeU3D8_t3476260243 * get_address_of_U24fieldU2D3C3A13E15C81AD114ECBA973C706DCD985BF18D6_46() { return &___U24fieldU2D3C3A13E15C81AD114ECBA973C706DCD985BF18D6_46; }
	inline void set_U24fieldU2D3C3A13E15C81AD114ECBA973C706DCD985BF18D6_46(U24ArrayTypeU3D8_t3476260243  value)
	{
		___U24fieldU2D3C3A13E15C81AD114ECBA973C706DCD985BF18D6_46 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D07B35CC0531C638EA1581B73756B3A11272C1D91_47() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D07B35CC0531C638EA1581B73756B3A11272C1D91_47)); }
	inline U24ArrayTypeU3D4_t1881604839  get_U24fieldU2D07B35CC0531C638EA1581B73756B3A11272C1D91_47() const { return ___U24fieldU2D07B35CC0531C638EA1581B73756B3A11272C1D91_47; }
	inline U24ArrayTypeU3D4_t1881604839 * get_address_of_U24fieldU2D07B35CC0531C638EA1581B73756B3A11272C1D91_47() { return &___U24fieldU2D07B35CC0531C638EA1581B73756B3A11272C1D91_47; }
	inline void set_U24fieldU2D07B35CC0531C638EA1581B73756B3A11272C1D91_47(U24ArrayTypeU3D4_t1881604839  value)
	{
		___U24fieldU2D07B35CC0531C638EA1581B73756B3A11272C1D91_47 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D31D8729F7377B44017C0A2395A582C9CA4163277_48() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D31D8729F7377B44017C0A2395A582C9CA4163277_48)); }
	inline U24ArrayTypeU3D4_t1881604839  get_U24fieldU2D31D8729F7377B44017C0A2395A582C9CA4163277_48() const { return ___U24fieldU2D31D8729F7377B44017C0A2395A582C9CA4163277_48; }
	inline U24ArrayTypeU3D4_t1881604839 * get_address_of_U24fieldU2D31D8729F7377B44017C0A2395A582C9CA4163277_48() { return &___U24fieldU2D31D8729F7377B44017C0A2395A582C9CA4163277_48; }
	inline void set_U24fieldU2D31D8729F7377B44017C0A2395A582C9CA4163277_48(U24ArrayTypeU3D4_t1881604839  value)
	{
		___U24fieldU2D31D8729F7377B44017C0A2395A582C9CA4163277_48 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D1397D288BDA63B8D4B5F30CFFB9FF5A965AA7A1C_49() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D1397D288BDA63B8D4B5F30CFFB9FF5A965AA7A1C_49)); }
	inline U24ArrayTypeU3D4_t1881604839  get_U24fieldU2D1397D288BDA63B8D4B5F30CFFB9FF5A965AA7A1C_49() const { return ___U24fieldU2D1397D288BDA63B8D4B5F30CFFB9FF5A965AA7A1C_49; }
	inline U24ArrayTypeU3D4_t1881604839 * get_address_of_U24fieldU2D1397D288BDA63B8D4B5F30CFFB9FF5A965AA7A1C_49() { return &___U24fieldU2D1397D288BDA63B8D4B5F30CFFB9FF5A965AA7A1C_49; }
	inline void set_U24fieldU2D1397D288BDA63B8D4B5F30CFFB9FF5A965AA7A1C_49(U24ArrayTypeU3D4_t1881604839  value)
	{
		___U24fieldU2D1397D288BDA63B8D4B5F30CFFB9FF5A965AA7A1C_49 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DEE0F12B14397A7DF4588BEA8AA9B022754F4DA1B_50() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DEE0F12B14397A7DF4588BEA8AA9B022754F4DA1B_50)); }
	inline U24ArrayTypeU3D32_t4145487141  get_U24fieldU2DEE0F12B14397A7DF4588BEA8AA9B022754F4DA1B_50() const { return ___U24fieldU2DEE0F12B14397A7DF4588BEA8AA9B022754F4DA1B_50; }
	inline U24ArrayTypeU3D32_t4145487141 * get_address_of_U24fieldU2DEE0F12B14397A7DF4588BEA8AA9B022754F4DA1B_50() { return &___U24fieldU2DEE0F12B14397A7DF4588BEA8AA9B022754F4DA1B_50; }
	inline void set_U24fieldU2DEE0F12B14397A7DF4588BEA8AA9B022754F4DA1B_50(U24ArrayTypeU3D32_t4145487141  value)
	{
		___U24fieldU2DEE0F12B14397A7DF4588BEA8AA9B022754F4DA1B_50 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DD7231C06B1D6276752359120E26EAE206A7F74F9_51() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DD7231C06B1D6276752359120E26EAE206A7F74F9_51)); }
	inline U24ArrayTypeU3D20_t2271475897  get_U24fieldU2DD7231C06B1D6276752359120E26EAE206A7F74F9_51() const { return ___U24fieldU2DD7231C06B1D6276752359120E26EAE206A7F74F9_51; }
	inline U24ArrayTypeU3D20_t2271475897 * get_address_of_U24fieldU2DD7231C06B1D6276752359120E26EAE206A7F74F9_51() { return &___U24fieldU2DD7231C06B1D6276752359120E26EAE206A7F74F9_51; }
	inline void set_U24fieldU2DD7231C06B1D6276752359120E26EAE206A7F74F9_51(U24ArrayTypeU3D20_t2271475897  value)
	{
		___U24fieldU2DD7231C06B1D6276752359120E26EAE206A7F74F9_51 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DAA7973F07CDE1E6AA10B6970B0072D05F38F0AB2_52() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DAA7973F07CDE1E6AA10B6970B0072D05F38F0AB2_52)); }
	inline U24ArrayTypeU3D20_t2271475897  get_U24fieldU2DAA7973F07CDE1E6AA10B6970B0072D05F38F0AB2_52() const { return ___U24fieldU2DAA7973F07CDE1E6AA10B6970B0072D05F38F0AB2_52; }
	inline U24ArrayTypeU3D20_t2271475897 * get_address_of_U24fieldU2DAA7973F07CDE1E6AA10B6970B0072D05F38F0AB2_52() { return &___U24fieldU2DAA7973F07CDE1E6AA10B6970B0072D05F38F0AB2_52; }
	inline void set_U24fieldU2DAA7973F07CDE1E6AA10B6970B0072D05F38F0AB2_52(U24ArrayTypeU3D20_t2271475897  value)
	{
		___U24fieldU2DAA7973F07CDE1E6AA10B6970B0072D05F38F0AB2_52 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D2FCBB2FC4E672ED0607DD7827BA69B7E6C9EB6BD_53() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D2FCBB2FC4E672ED0607DD7827BA69B7E6C9EB6BD_53)); }
	inline U24ArrayTypeU3D16_t2289608776  get_U24fieldU2D2FCBB2FC4E672ED0607DD7827BA69B7E6C9EB6BD_53() const { return ___U24fieldU2D2FCBB2FC4E672ED0607DD7827BA69B7E6C9EB6BD_53; }
	inline U24ArrayTypeU3D16_t2289608776 * get_address_of_U24fieldU2D2FCBB2FC4E672ED0607DD7827BA69B7E6C9EB6BD_53() { return &___U24fieldU2D2FCBB2FC4E672ED0607DD7827BA69B7E6C9EB6BD_53; }
	inline void set_U24fieldU2D2FCBB2FC4E672ED0607DD7827BA69B7E6C9EB6BD_53(U24ArrayTypeU3D16_t2289608776  value)
	{
		___U24fieldU2D2FCBB2FC4E672ED0607DD7827BA69B7E6C9EB6BD_53 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D6277CE8FE3A9156D3455749B453AC88191D3C6D6_54() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D6277CE8FE3A9156D3455749B453AC88191D3C6D6_54)); }
	inline U24ArrayTypeU3D16_t2289608776  get_U24fieldU2D6277CE8FE3A9156D3455749B453AC88191D3C6D6_54() const { return ___U24fieldU2D6277CE8FE3A9156D3455749B453AC88191D3C6D6_54; }
	inline U24ArrayTypeU3D16_t2289608776 * get_address_of_U24fieldU2D6277CE8FE3A9156D3455749B453AC88191D3C6D6_54() { return &___U24fieldU2D6277CE8FE3A9156D3455749B453AC88191D3C6D6_54; }
	inline void set_U24fieldU2D6277CE8FE3A9156D3455749B453AC88191D3C6D6_54(U24ArrayTypeU3D16_t2289608776  value)
	{
		___U24fieldU2D6277CE8FE3A9156D3455749B453AC88191D3C6D6_54 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D9FC36EB698A900B5D2EF5E3B1ABA28CB6A217738_55() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D9FC36EB698A900B5D2EF5E3B1ABA28CB6A217738_55)); }
	inline U24ArrayTypeU3D16_t2289608776  get_U24fieldU2D9FC36EB698A900B5D2EF5E3B1ABA28CB6A217738_55() const { return ___U24fieldU2D9FC36EB698A900B5D2EF5E3B1ABA28CB6A217738_55; }
	inline U24ArrayTypeU3D16_t2289608776 * get_address_of_U24fieldU2D9FC36EB698A900B5D2EF5E3B1ABA28CB6A217738_55() { return &___U24fieldU2D9FC36EB698A900B5D2EF5E3B1ABA28CB6A217738_55; }
	inline void set_U24fieldU2D9FC36EB698A900B5D2EF5E3B1ABA28CB6A217738_55(U24ArrayTypeU3D16_t2289608776  value)
	{
		___U24fieldU2D9FC36EB698A900B5D2EF5E3B1ABA28CB6A217738_55 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D714A94F3805E05CA6C00F9A46489427ABEB25D60_56() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D714A94F3805E05CA6C00F9A46489427ABEB25D60_56)); }
	inline U24ArrayTypeU3D16_t2289608776  get_U24fieldU2D714A94F3805E05CA6C00F9A46489427ABEB25D60_56() const { return ___U24fieldU2D714A94F3805E05CA6C00F9A46489427ABEB25D60_56; }
	inline U24ArrayTypeU3D16_t2289608776 * get_address_of_U24fieldU2D714A94F3805E05CA6C00F9A46489427ABEB25D60_56() { return &___U24fieldU2D714A94F3805E05CA6C00F9A46489427ABEB25D60_56; }
	inline void set_U24fieldU2D714A94F3805E05CA6C00F9A46489427ABEB25D60_56(U24ArrayTypeU3D16_t2289608776  value)
	{
		___U24fieldU2D714A94F3805E05CA6C00F9A46489427ABEB25D60_56 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DF128744756EEB38C3EAD4A7E8536EC5D3FA430FF_57() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DF128744756EEB38C3EAD4A7E8536EC5D3FA430FF_57)); }
	inline U24ArrayTypeU3D16_t2289608776  get_U24fieldU2DF128744756EEB38C3EAD4A7E8536EC5D3FA430FF_57() const { return ___U24fieldU2DF128744756EEB38C3EAD4A7E8536EC5D3FA430FF_57; }
	inline U24ArrayTypeU3D16_t2289608776 * get_address_of_U24fieldU2DF128744756EEB38C3EAD4A7E8536EC5D3FA430FF_57() { return &___U24fieldU2DF128744756EEB38C3EAD4A7E8536EC5D3FA430FF_57; }
	inline void set_U24fieldU2DF128744756EEB38C3EAD4A7E8536EC5D3FA430FF_57(U24ArrayTypeU3D16_t2289608776  value)
	{
		___U24fieldU2DF128744756EEB38C3EAD4A7E8536EC5D3FA430FF_57 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D5AB421AC76CECB8E84025172585CB97DE8BECD65_58() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D5AB421AC76CECB8E84025172585CB97DE8BECD65_58)); }
	inline U24ArrayTypeU3D16_t2289608776  get_U24fieldU2D5AB421AC76CECB8E84025172585CB97DE8BECD65_58() const { return ___U24fieldU2D5AB421AC76CECB8E84025172585CB97DE8BECD65_58; }
	inline U24ArrayTypeU3D16_t2289608776 * get_address_of_U24fieldU2D5AB421AC76CECB8E84025172585CB97DE8BECD65_58() { return &___U24fieldU2D5AB421AC76CECB8E84025172585CB97DE8BECD65_58; }
	inline void set_U24fieldU2D5AB421AC76CECB8E84025172585CB97DE8BECD65_58(U24ArrayTypeU3D16_t2289608776  value)
	{
		___U24fieldU2D5AB421AC76CECB8E84025172585CB97DE8BECD65_58 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D6BBD3A22A185224EE0EBAB0784455E9E245376B7_59() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D6BBD3A22A185224EE0EBAB0784455E9E245376B7_59)); }
	inline U24ArrayTypeU3D16_t2289608776  get_U24fieldU2D6BBD3A22A185224EE0EBAB0784455E9E245376B7_59() const { return ___U24fieldU2D6BBD3A22A185224EE0EBAB0784455E9E245376B7_59; }
	inline U24ArrayTypeU3D16_t2289608776 * get_address_of_U24fieldU2D6BBD3A22A185224EE0EBAB0784455E9E245376B7_59() { return &___U24fieldU2D6BBD3A22A185224EE0EBAB0784455E9E245376B7_59; }
	inline void set_U24fieldU2D6BBD3A22A185224EE0EBAB0784455E9E245376B7_59(U24ArrayTypeU3D16_t2289608776  value)
	{
		___U24fieldU2D6BBD3A22A185224EE0EBAB0784455E9E245376B7_59 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D7B22115C45C6AD570AFBAB744FA1058DF97CDBC1_60() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D7B22115C45C6AD570AFBAB744FA1058DF97CDBC1_60)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D7B22115C45C6AD570AFBAB744FA1058DF97CDBC1_60() const { return ___U24fieldU2D7B22115C45C6AD570AFBAB744FA1058DF97CDBC1_60; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D7B22115C45C6AD570AFBAB744FA1058DF97CDBC1_60() { return &___U24fieldU2D7B22115C45C6AD570AFBAB744FA1058DF97CDBC1_60; }
	inline void set_U24fieldU2D7B22115C45C6AD570AFBAB744FA1058DF97CDBC1_60(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D7B22115C45C6AD570AFBAB744FA1058DF97CDBC1_60 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D460C77B94933562DE2E0E5B4FD72B431DFAEB5B6_61() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D460C77B94933562DE2E0E5B4FD72B431DFAEB5B6_61)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D460C77B94933562DE2E0E5B4FD72B431DFAEB5B6_61() const { return ___U24fieldU2D460C77B94933562DE2E0E5B4FD72B431DFAEB5B6_61; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D460C77B94933562DE2E0E5B4FD72B431DFAEB5B6_61() { return &___U24fieldU2D460C77B94933562DE2E0E5B4FD72B431DFAEB5B6_61; }
	inline void set_U24fieldU2D460C77B94933562DE2E0E5B4FD72B431DFAEB5B6_61(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D460C77B94933562DE2E0E5B4FD72B431DFAEB5B6_61 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DCE2B1D9E3E16F8A9B2ADFD296846C7C91AB27B86_62() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DCE2B1D9E3E16F8A9B2ADFD296846C7C91AB27B86_62)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DCE2B1D9E3E16F8A9B2ADFD296846C7C91AB27B86_62() const { return ___U24fieldU2DCE2B1D9E3E16F8A9B2ADFD296846C7C91AB27B86_62; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DCE2B1D9E3E16F8A9B2ADFD296846C7C91AB27B86_62() { return &___U24fieldU2DCE2B1D9E3E16F8A9B2ADFD296846C7C91AB27B86_62; }
	inline void set_U24fieldU2DCE2B1D9E3E16F8A9B2ADFD296846C7C91AB27B86_62(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DCE2B1D9E3E16F8A9B2ADFD296846C7C91AB27B86_62 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DA471AF3330805980C7041F978D3CFF8838054E14_63() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DA471AF3330805980C7041F978D3CFF8838054E14_63)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DA471AF3330805980C7041F978D3CFF8838054E14_63() const { return ___U24fieldU2DA471AF3330805980C7041F978D3CFF8838054E14_63; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DA471AF3330805980C7041F978D3CFF8838054E14_63() { return &___U24fieldU2DA471AF3330805980C7041F978D3CFF8838054E14_63; }
	inline void set_U24fieldU2DA471AF3330805980C7041F978D3CFF8838054E14_63(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DA471AF3330805980C7041F978D3CFF8838054E14_63 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DC0F40F05DBD4B7C8F77A1A55F3C5B9525FB5E124_64() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DC0F40F05DBD4B7C8F77A1A55F3C5B9525FB5E124_64)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DC0F40F05DBD4B7C8F77A1A55F3C5B9525FB5E124_64() const { return ___U24fieldU2DC0F40F05DBD4B7C8F77A1A55F3C5B9525FB5E124_64; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DC0F40F05DBD4B7C8F77A1A55F3C5B9525FB5E124_64() { return &___U24fieldU2DC0F40F05DBD4B7C8F77A1A55F3C5B9525FB5E124_64; }
	inline void set_U24fieldU2DC0F40F05DBD4B7C8F77A1A55F3C5B9525FB5E124_64(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DC0F40F05DBD4B7C8F77A1A55F3C5B9525FB5E124_64 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DAD4075598ACA56EC39C5E575771BBB0CFBCE24EE_65() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DAD4075598ACA56EC39C5E575771BBB0CFBCE24EE_65)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DAD4075598ACA56EC39C5E575771BBB0CFBCE24EE_65() const { return ___U24fieldU2DAD4075598ACA56EC39C5E575771BBB0CFBCE24EE_65; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DAD4075598ACA56EC39C5E575771BBB0CFBCE24EE_65() { return &___U24fieldU2DAD4075598ACA56EC39C5E575771BBB0CFBCE24EE_65; }
	inline void set_U24fieldU2DAD4075598ACA56EC39C5E575771BBB0CFBCE24EE_65(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DAD4075598ACA56EC39C5E575771BBB0CFBCE24EE_65 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D9AEFA90D8E67EBAE069B4B6C071A8E867B108B31_66() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D9AEFA90D8E67EBAE069B4B6C071A8E867B108B31_66)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D9AEFA90D8E67EBAE069B4B6C071A8E867B108B31_66() const { return ___U24fieldU2D9AEFA90D8E67EBAE069B4B6C071A8E867B108B31_66; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D9AEFA90D8E67EBAE069B4B6C071A8E867B108B31_66() { return &___U24fieldU2D9AEFA90D8E67EBAE069B4B6C071A8E867B108B31_66; }
	inline void set_U24fieldU2D9AEFA90D8E67EBAE069B4B6C071A8E867B108B31_66(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D9AEFA90D8E67EBAE069B4B6C071A8E867B108B31_66 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DA5981DCAA364B0DC9E0385D893A31C2022364075_67() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DA5981DCAA364B0DC9E0385D893A31C2022364075_67)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DA5981DCAA364B0DC9E0385D893A31C2022364075_67() const { return ___U24fieldU2DA5981DCAA364B0DC9E0385D893A31C2022364075_67; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DA5981DCAA364B0DC9E0385D893A31C2022364075_67() { return &___U24fieldU2DA5981DCAA364B0DC9E0385D893A31C2022364075_67; }
	inline void set_U24fieldU2DA5981DCAA364B0DC9E0385D893A31C2022364075_67(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DA5981DCAA364B0DC9E0385D893A31C2022364075_67 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D4435D44E1091E6624ED6B6E4FA3C9A8C5C996098_68() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D4435D44E1091E6624ED6B6E4FA3C9A8C5C996098_68)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D4435D44E1091E6624ED6B6E4FA3C9A8C5C996098_68() const { return ___U24fieldU2D4435D44E1091E6624ED6B6E4FA3C9A8C5C996098_68; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D4435D44E1091E6624ED6B6E4FA3C9A8C5C996098_68() { return &___U24fieldU2D4435D44E1091E6624ED6B6E4FA3C9A8C5C996098_68; }
	inline void set_U24fieldU2D4435D44E1091E6624ED6B6E4FA3C9A8C5C996098_68(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D4435D44E1091E6624ED6B6E4FA3C9A8C5C996098_68 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DF5AEFD834ADB72DAA720930140E9ECC087FCF389_69() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DF5AEFD834ADB72DAA720930140E9ECC087FCF389_69)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DF5AEFD834ADB72DAA720930140E9ECC087FCF389_69() const { return ___U24fieldU2DF5AEFD834ADB72DAA720930140E9ECC087FCF389_69; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DF5AEFD834ADB72DAA720930140E9ECC087FCF389_69() { return &___U24fieldU2DF5AEFD834ADB72DAA720930140E9ECC087FCF389_69; }
	inline void set_U24fieldU2DF5AEFD834ADB72DAA720930140E9ECC087FCF389_69(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DF5AEFD834ADB72DAA720930140E9ECC087FCF389_69 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D0D4B2069E2C1085C37B7AD86C9D0C59E4CED879B_70() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D0D4B2069E2C1085C37B7AD86C9D0C59E4CED879B_70)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D0D4B2069E2C1085C37B7AD86C9D0C59E4CED879B_70() const { return ___U24fieldU2D0D4B2069E2C1085C37B7AD86C9D0C59E4CED879B_70; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D0D4B2069E2C1085C37B7AD86C9D0C59E4CED879B_70() { return &___U24fieldU2D0D4B2069E2C1085C37B7AD86C9D0C59E4CED879B_70; }
	inline void set_U24fieldU2D0D4B2069E2C1085C37B7AD86C9D0C59E4CED879B_70(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D0D4B2069E2C1085C37B7AD86C9D0C59E4CED879B_70 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D1A43D7FEEED03520E11C4A8996F149705D99C6BB_71() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D1A43D7FEEED03520E11C4A8996F149705D99C6BB_71)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D1A43D7FEEED03520E11C4A8996F149705D99C6BB_71() const { return ___U24fieldU2D1A43D7FEEED03520E11C4A8996F149705D99C6BB_71; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D1A43D7FEEED03520E11C4A8996F149705D99C6BB_71() { return &___U24fieldU2D1A43D7FEEED03520E11C4A8996F149705D99C6BB_71; }
	inline void set_U24fieldU2D1A43D7FEEED03520E11C4A8996F149705D99C6BB_71(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D1A43D7FEEED03520E11C4A8996F149705D99C6BB_71 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D4B411385A36907D25D8088AE39AB6AAFA46B0642_72() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D4B411385A36907D25D8088AE39AB6AAFA46B0642_72)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D4B411385A36907D25D8088AE39AB6AAFA46B0642_72() const { return ___U24fieldU2D4B411385A36907D25D8088AE39AB6AAFA46B0642_72; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D4B411385A36907D25D8088AE39AB6AAFA46B0642_72() { return &___U24fieldU2D4B411385A36907D25D8088AE39AB6AAFA46B0642_72; }
	inline void set_U24fieldU2D4B411385A36907D25D8088AE39AB6AAFA46B0642_72(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D4B411385A36907D25D8088AE39AB6AAFA46B0642_72 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D29F7A0217340B5682E7DDF98ADAD952E2A360E65_73() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D29F7A0217340B5682E7DDF98ADAD952E2A360E65_73)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D29F7A0217340B5682E7DDF98ADAD952E2A360E65_73() const { return ___U24fieldU2D29F7A0217340B5682E7DDF98ADAD952E2A360E65_73; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D29F7A0217340B5682E7DDF98ADAD952E2A360E65_73() { return &___U24fieldU2D29F7A0217340B5682E7DDF98ADAD952E2A360E65_73; }
	inline void set_U24fieldU2D29F7A0217340B5682E7DDF98ADAD952E2A360E65_73(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D29F7A0217340B5682E7DDF98ADAD952E2A360E65_73 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D68178023585F1F782745740AA583CDC778DB31B3_74() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D68178023585F1F782745740AA583CDC778DB31B3_74)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D68178023585F1F782745740AA583CDC778DB31B3_74() const { return ___U24fieldU2D68178023585F1F782745740AA583CDC778DB31B3_74; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D68178023585F1F782745740AA583CDC778DB31B3_74() { return &___U24fieldU2D68178023585F1F782745740AA583CDC778DB31B3_74; }
	inline void set_U24fieldU2D68178023585F1F782745740AA583CDC778DB31B3_74(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D68178023585F1F782745740AA583CDC778DB31B3_74 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DE53E13AFB95C5C24DF50875117B7DDCE12937B2E_75() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DE53E13AFB95C5C24DF50875117B7DDCE12937B2E_75)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DE53E13AFB95C5C24DF50875117B7DDCE12937B2E_75() const { return ___U24fieldU2DE53E13AFB95C5C24DF50875117B7DDCE12937B2E_75; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DE53E13AFB95C5C24DF50875117B7DDCE12937B2E_75() { return &___U24fieldU2DE53E13AFB95C5C24DF50875117B7DDCE12937B2E_75; }
	inline void set_U24fieldU2DE53E13AFB95C5C24DF50875117B7DDCE12937B2E_75(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DE53E13AFB95C5C24DF50875117B7DDCE12937B2E_75 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D6F39BC29A161CAE5394821B1FDE160EB5229AE71_76() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D6F39BC29A161CAE5394821B1FDE160EB5229AE71_76)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D6F39BC29A161CAE5394821B1FDE160EB5229AE71_76() const { return ___U24fieldU2D6F39BC29A161CAE5394821B1FDE160EB5229AE71_76; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D6F39BC29A161CAE5394821B1FDE160EB5229AE71_76() { return &___U24fieldU2D6F39BC29A161CAE5394821B1FDE160EB5229AE71_76; }
	inline void set_U24fieldU2D6F39BC29A161CAE5394821B1FDE160EB5229AE71_76(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D6F39BC29A161CAE5394821B1FDE160EB5229AE71_76 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DD99006A6CB3C75EEC7BB6ABEA6AA9C413D59F015_77() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DD99006A6CB3C75EEC7BB6ABEA6AA9C413D59F015_77)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DD99006A6CB3C75EEC7BB6ABEA6AA9C413D59F015_77() const { return ___U24fieldU2DD99006A6CB3C75EEC7BB6ABEA6AA9C413D59F015_77; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DD99006A6CB3C75EEC7BB6ABEA6AA9C413D59F015_77() { return &___U24fieldU2DD99006A6CB3C75EEC7BB6ABEA6AA9C413D59F015_77; }
	inline void set_U24fieldU2DD99006A6CB3C75EEC7BB6ABEA6AA9C413D59F015_77(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DD99006A6CB3C75EEC7BB6ABEA6AA9C413D59F015_77 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D50AA269217736906D8469B9191F420DC6B13A36A_78() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D50AA269217736906D8469B9191F420DC6B13A36A_78)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D50AA269217736906D8469B9191F420DC6B13A36A_78() const { return ___U24fieldU2D50AA269217736906D8469B9191F420DC6B13A36A_78; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D50AA269217736906D8469B9191F420DC6B13A36A_78() { return &___U24fieldU2D50AA269217736906D8469B9191F420DC6B13A36A_78; }
	inline void set_U24fieldU2D50AA269217736906D8469B9191F420DC6B13A36A_78(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D50AA269217736906D8469B9191F420DC6B13A36A_78 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DC3EE470FCBE9ED2CB4A9FE76CA81B438F69F0C62_79() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DC3EE470FCBE9ED2CB4A9FE76CA81B438F69F0C62_79)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DC3EE470FCBE9ED2CB4A9FE76CA81B438F69F0C62_79() const { return ___U24fieldU2DC3EE470FCBE9ED2CB4A9FE76CA81B438F69F0C62_79; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DC3EE470FCBE9ED2CB4A9FE76CA81B438F69F0C62_79() { return &___U24fieldU2DC3EE470FCBE9ED2CB4A9FE76CA81B438F69F0C62_79; }
	inline void set_U24fieldU2DC3EE470FCBE9ED2CB4A9FE76CA81B438F69F0C62_79(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DC3EE470FCBE9ED2CB4A9FE76CA81B438F69F0C62_79 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DB997A0149EBF3CDD050D72AE1784E375A413B128_80() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DB997A0149EBF3CDD050D72AE1784E375A413B128_80)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DB997A0149EBF3CDD050D72AE1784E375A413B128_80() const { return ___U24fieldU2DB997A0149EBF3CDD050D72AE1784E375A413B128_80; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DB997A0149EBF3CDD050D72AE1784E375A413B128_80() { return &___U24fieldU2DB997A0149EBF3CDD050D72AE1784E375A413B128_80; }
	inline void set_U24fieldU2DB997A0149EBF3CDD050D72AE1784E375A413B128_80(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DB997A0149EBF3CDD050D72AE1784E375A413B128_80 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D9597ECF10274DDDBFD265D4F66B70BAA9EAA83BD_81() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D9597ECF10274DDDBFD265D4F66B70BAA9EAA83BD_81)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D9597ECF10274DDDBFD265D4F66B70BAA9EAA83BD_81() const { return ___U24fieldU2D9597ECF10274DDDBFD265D4F66B70BAA9EAA83BD_81; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D9597ECF10274DDDBFD265D4F66B70BAA9EAA83BD_81() { return &___U24fieldU2D9597ECF10274DDDBFD265D4F66B70BAA9EAA83BD_81; }
	inline void set_U24fieldU2D9597ECF10274DDDBFD265D4F66B70BAA9EAA83BD_81(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D9597ECF10274DDDBFD265D4F66B70BAA9EAA83BD_81 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D9FAE1C8A9B3D68DAE1EEE8A0946441D7078E2021_82() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D9FAE1C8A9B3D68DAE1EEE8A0946441D7078E2021_82)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D9FAE1C8A9B3D68DAE1EEE8A0946441D7078E2021_82() const { return ___U24fieldU2D9FAE1C8A9B3D68DAE1EEE8A0946441D7078E2021_82; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D9FAE1C8A9B3D68DAE1EEE8A0946441D7078E2021_82() { return &___U24fieldU2D9FAE1C8A9B3D68DAE1EEE8A0946441D7078E2021_82; }
	inline void set_U24fieldU2D9FAE1C8A9B3D68DAE1EEE8A0946441D7078E2021_82(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D9FAE1C8A9B3D68DAE1EEE8A0946441D7078E2021_82 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DAD19F20EECB80A2079F504CB928A26FDE10E8C47_83() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DAD19F20EECB80A2079F504CB928A26FDE10E8C47_83)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DAD19F20EECB80A2079F504CB928A26FDE10E8C47_83() const { return ___U24fieldU2DAD19F20EECB80A2079F504CB928A26FDE10E8C47_83; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DAD19F20EECB80A2079F504CB928A26FDE10E8C47_83() { return &___U24fieldU2DAD19F20EECB80A2079F504CB928A26FDE10E8C47_83; }
	inline void set_U24fieldU2DAD19F20EECB80A2079F504CB928A26FDE10E8C47_83(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DAD19F20EECB80A2079F504CB928A26FDE10E8C47_83 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DD129FBC67222EA7D73E90E51E4DCFCA8C7497D67_84() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DD129FBC67222EA7D73E90E51E4DCFCA8C7497D67_84)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DD129FBC67222EA7D73E90E51E4DCFCA8C7497D67_84() const { return ___U24fieldU2DD129FBC67222EA7D73E90E51E4DCFCA8C7497D67_84; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DD129FBC67222EA7D73E90E51E4DCFCA8C7497D67_84() { return &___U24fieldU2DD129FBC67222EA7D73E90E51E4DCFCA8C7497D67_84; }
	inline void set_U24fieldU2DD129FBC67222EA7D73E90E51E4DCFCA8C7497D67_84(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DD129FBC67222EA7D73E90E51E4DCFCA8C7497D67_84 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DB3A60EC240A886DA5AFD600CC73AE12514A881E8_85() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DB3A60EC240A886DA5AFD600CC73AE12514A881E8_85)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DB3A60EC240A886DA5AFD600CC73AE12514A881E8_85() const { return ___U24fieldU2DB3A60EC240A886DA5AFD600CC73AE12514A881E8_85; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DB3A60EC240A886DA5AFD600CC73AE12514A881E8_85() { return &___U24fieldU2DB3A60EC240A886DA5AFD600CC73AE12514A881E8_85; }
	inline void set_U24fieldU2DB3A60EC240A886DA5AFD600CC73AE12514A881E8_85(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DB3A60EC240A886DA5AFD600CC73AE12514A881E8_85 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D512F92F4041B190727A330E2A6CC39E5D9EA06E6_86() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D512F92F4041B190727A330E2A6CC39E5D9EA06E6_86)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D512F92F4041B190727A330E2A6CC39E5D9EA06E6_86() const { return ___U24fieldU2D512F92F4041B190727A330E2A6CC39E5D9EA06E6_86; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D512F92F4041B190727A330E2A6CC39E5D9EA06E6_86() { return &___U24fieldU2D512F92F4041B190727A330E2A6CC39E5D9EA06E6_86; }
	inline void set_U24fieldU2D512F92F4041B190727A330E2A6CC39E5D9EA06E6_86(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D512F92F4041B190727A330E2A6CC39E5D9EA06E6_86 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DAD200F5E49BD2E5038FA7BD229E2B4429ECA8CDE_87() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DAD200F5E49BD2E5038FA7BD229E2B4429ECA8CDE_87)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DAD200F5E49BD2E5038FA7BD229E2B4429ECA8CDE_87() const { return ___U24fieldU2DAD200F5E49BD2E5038FA7BD229E2B4429ECA8CDE_87; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DAD200F5E49BD2E5038FA7BD229E2B4429ECA8CDE_87() { return &___U24fieldU2DAD200F5E49BD2E5038FA7BD229E2B4429ECA8CDE_87; }
	inline void set_U24fieldU2DAD200F5E49BD2E5038FA7BD229E2B4429ECA8CDE_87(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DAD200F5E49BD2E5038FA7BD229E2B4429ECA8CDE_87 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D03D9F1A66AED1E059B1609A09E435B708A88C8B8_88() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D03D9F1A66AED1E059B1609A09E435B708A88C8B8_88)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D03D9F1A66AED1E059B1609A09E435B708A88C8B8_88() const { return ___U24fieldU2D03D9F1A66AED1E059B1609A09E435B708A88C8B8_88; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D03D9F1A66AED1E059B1609A09E435B708A88C8B8_88() { return &___U24fieldU2D03D9F1A66AED1E059B1609A09E435B708A88C8B8_88; }
	inline void set_U24fieldU2D03D9F1A66AED1E059B1609A09E435B708A88C8B8_88(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D03D9F1A66AED1E059B1609A09E435B708A88C8B8_88 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D26853A2C322BBAD5BBD886C60A32BBBCFE847F00_89() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D26853A2C322BBAD5BBD886C60A32BBBCFE847F00_89)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D26853A2C322BBAD5BBD886C60A32BBBCFE847F00_89() const { return ___U24fieldU2D26853A2C322BBAD5BBD886C60A32BBBCFE847F00_89; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D26853A2C322BBAD5BBD886C60A32BBBCFE847F00_89() { return &___U24fieldU2D26853A2C322BBAD5BBD886C60A32BBBCFE847F00_89; }
	inline void set_U24fieldU2D26853A2C322BBAD5BBD886C60A32BBBCFE847F00_89(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D26853A2C322BBAD5BBD886C60A32BBBCFE847F00_89 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DD31171F7904EB3247DD4834E43B47B1E2DCB97AC_90() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DD31171F7904EB3247DD4834E43B47B1E2DCB97AC_90)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DD31171F7904EB3247DD4834E43B47B1E2DCB97AC_90() const { return ___U24fieldU2DD31171F7904EB3247DD4834E43B47B1E2DCB97AC_90; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DD31171F7904EB3247DD4834E43B47B1E2DCB97AC_90() { return &___U24fieldU2DD31171F7904EB3247DD4834E43B47B1E2DCB97AC_90; }
	inline void set_U24fieldU2DD31171F7904EB3247DD4834E43B47B1E2DCB97AC_90(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DD31171F7904EB3247DD4834E43B47B1E2DCB97AC_90 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D5EF7F909EFC731E811E21521A43A80FB5AC0B229_91() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D5EF7F909EFC731E811E21521A43A80FB5AC0B229_91)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D5EF7F909EFC731E811E21521A43A80FB5AC0B229_91() const { return ___U24fieldU2D5EF7F909EFC731E811E21521A43A80FB5AC0B229_91; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D5EF7F909EFC731E811E21521A43A80FB5AC0B229_91() { return &___U24fieldU2D5EF7F909EFC731E811E21521A43A80FB5AC0B229_91; }
	inline void set_U24fieldU2D5EF7F909EFC731E811E21521A43A80FB5AC0B229_91(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D5EF7F909EFC731E811E21521A43A80FB5AC0B229_91 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D372040F482ABADADF58EF0C31A6A8BE386AF8A50_92() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D372040F482ABADADF58EF0C31A6A8BE386AF8A50_92)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D372040F482ABADADF58EF0C31A6A8BE386AF8A50_92() const { return ___U24fieldU2D372040F482ABADADF58EF0C31A6A8BE386AF8A50_92; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D372040F482ABADADF58EF0C31A6A8BE386AF8A50_92() { return &___U24fieldU2D372040F482ABADADF58EF0C31A6A8BE386AF8A50_92; }
	inline void set_U24fieldU2D372040F482ABADADF58EF0C31A6A8BE386AF8A50_92(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D372040F482ABADADF58EF0C31A6A8BE386AF8A50_92 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D7878E9E7126B2BDF365429C31842AE1903CD2DFF_93() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D7878E9E7126B2BDF365429C31842AE1903CD2DFF_93)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D7878E9E7126B2BDF365429C31842AE1903CD2DFF_93() const { return ___U24fieldU2D7878E9E7126B2BDF365429C31842AE1903CD2DFF_93; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D7878E9E7126B2BDF365429C31842AE1903CD2DFF_93() { return &___U24fieldU2D7878E9E7126B2BDF365429C31842AE1903CD2DFF_93; }
	inline void set_U24fieldU2D7878E9E7126B2BDF365429C31842AE1903CD2DFF_93(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D7878E9E7126B2BDF365429C31842AE1903CD2DFF_93 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D882888781BC0DC17021FB4F11BA783038C83B313_94() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D882888781BC0DC17021FB4F11BA783038C83B313_94)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D882888781BC0DC17021FB4F11BA783038C83B313_94() const { return ___U24fieldU2D882888781BC0DC17021FB4F11BA783038C83B313_94; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D882888781BC0DC17021FB4F11BA783038C83B313_94() { return &___U24fieldU2D882888781BC0DC17021FB4F11BA783038C83B313_94; }
	inline void set_U24fieldU2D882888781BC0DC17021FB4F11BA783038C83B313_94(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D882888781BC0DC17021FB4F11BA783038C83B313_94 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DF3BF6F581A24C57F2FFF3D2FD3290FD102BB8566_95() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DF3BF6F581A24C57F2FFF3D2FD3290FD102BB8566_95)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DF3BF6F581A24C57F2FFF3D2FD3290FD102BB8566_95() const { return ___U24fieldU2DF3BF6F581A24C57F2FFF3D2FD3290FD102BB8566_95; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DF3BF6F581A24C57F2FFF3D2FD3290FD102BB8566_95() { return &___U24fieldU2DF3BF6F581A24C57F2FFF3D2FD3290FD102BB8566_95; }
	inline void set_U24fieldU2DF3BF6F581A24C57F2FFF3D2FD3290FD102BB8566_95(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DF3BF6F581A24C57F2FFF3D2FD3290FD102BB8566_95 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DC2FEEB3C521ADDD49A534A0876BA97FF5894476E_96() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DC2FEEB3C521ADDD49A534A0876BA97FF5894476E_96)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DC2FEEB3C521ADDD49A534A0876BA97FF5894476E_96() const { return ___U24fieldU2DC2FEEB3C521ADDD49A534A0876BA97FF5894476E_96; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DC2FEEB3C521ADDD49A534A0876BA97FF5894476E_96() { return &___U24fieldU2DC2FEEB3C521ADDD49A534A0876BA97FF5894476E_96; }
	inline void set_U24fieldU2DC2FEEB3C521ADDD49A534A0876BA97FF5894476E_96(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DC2FEEB3C521ADDD49A534A0876BA97FF5894476E_96 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DC991C784E7697AD0F91A159F03727BF4621A5AB8_97() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DC991C784E7697AD0F91A159F03727BF4621A5AB8_97)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DC991C784E7697AD0F91A159F03727BF4621A5AB8_97() const { return ___U24fieldU2DC991C784E7697AD0F91A159F03727BF4621A5AB8_97; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DC991C784E7697AD0F91A159F03727BF4621A5AB8_97() { return &___U24fieldU2DC991C784E7697AD0F91A159F03727BF4621A5AB8_97; }
	inline void set_U24fieldU2DC991C784E7697AD0F91A159F03727BF4621A5AB8_97(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DC991C784E7697AD0F91A159F03727BF4621A5AB8_97 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DD860D5BD327368D1D4174620FE2E4A91FE9AADEC_98() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DD860D5BD327368D1D4174620FE2E4A91FE9AADEC_98)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DD860D5BD327368D1D4174620FE2E4A91FE9AADEC_98() const { return ___U24fieldU2DD860D5BD327368D1D4174620FE2E4A91FE9AADEC_98; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DD860D5BD327368D1D4174620FE2E4A91FE9AADEC_98() { return &___U24fieldU2DD860D5BD327368D1D4174620FE2E4A91FE9AADEC_98; }
	inline void set_U24fieldU2DD860D5BD327368D1D4174620FE2E4A91FE9AADEC_98(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DD860D5BD327368D1D4174620FE2E4A91FE9AADEC_98 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DA696E1EE8632C559732B81052E4D2993B8783877_99() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DA696E1EE8632C559732B81052E4D2993B8783877_99)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DA696E1EE8632C559732B81052E4D2993B8783877_99() const { return ___U24fieldU2DA696E1EE8632C559732B81052E4D2993B8783877_99; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DA696E1EE8632C559732B81052E4D2993B8783877_99() { return &___U24fieldU2DA696E1EE8632C559732B81052E4D2993B8783877_99; }
	inline void set_U24fieldU2DA696E1EE8632C559732B81052E4D2993B8783877_99(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DA696E1EE8632C559732B81052E4D2993B8783877_99 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D672385C1D6A6C84A1AC3588540B09C4AE3B87DDC_100() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D672385C1D6A6C84A1AC3588540B09C4AE3B87DDC_100)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D672385C1D6A6C84A1AC3588540B09C4AE3B87DDC_100() const { return ___U24fieldU2D672385C1D6A6C84A1AC3588540B09C4AE3B87DDC_100; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D672385C1D6A6C84A1AC3588540B09C4AE3B87DDC_100() { return &___U24fieldU2D672385C1D6A6C84A1AC3588540B09C4AE3B87DDC_100; }
	inline void set_U24fieldU2D672385C1D6A6C84A1AC3588540B09C4AE3B87DDC_100(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D672385C1D6A6C84A1AC3588540B09C4AE3B87DDC_100 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D71F2B0A8153A60BA8F96A7159B5B92F4CCD7AFA7_101() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D71F2B0A8153A60BA8F96A7159B5B92F4CCD7AFA7_101)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D71F2B0A8153A60BA8F96A7159B5B92F4CCD7AFA7_101() const { return ___U24fieldU2D71F2B0A8153A60BA8F96A7159B5B92F4CCD7AFA7_101; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D71F2B0A8153A60BA8F96A7159B5B92F4CCD7AFA7_101() { return &___U24fieldU2D71F2B0A8153A60BA8F96A7159B5B92F4CCD7AFA7_101; }
	inline void set_U24fieldU2D71F2B0A8153A60BA8F96A7159B5B92F4CCD7AFA7_101(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D71F2B0A8153A60BA8F96A7159B5B92F4CCD7AFA7_101 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D42C3E89412F11AA94E57C09EFB4B2B415C1AAB58_102() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D42C3E89412F11AA94E57C09EFB4B2B415C1AAB58_102)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D42C3E89412F11AA94E57C09EFB4B2B415C1AAB58_102() const { return ___U24fieldU2D42C3E89412F11AA94E57C09EFB4B2B415C1AAB58_102; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D42C3E89412F11AA94E57C09EFB4B2B415C1AAB58_102() { return &___U24fieldU2D42C3E89412F11AA94E57C09EFB4B2B415C1AAB58_102; }
	inline void set_U24fieldU2D42C3E89412F11AA94E57C09EFB4B2B415C1AAB58_102(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D42C3E89412F11AA94E57C09EFB4B2B415C1AAB58_102 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DC2D514B39C8DFA25365195A0759A5AE28D9F2A87_103() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DC2D514B39C8DFA25365195A0759A5AE28D9F2A87_103)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DC2D514B39C8DFA25365195A0759A5AE28D9F2A87_103() const { return ___U24fieldU2DC2D514B39C8DFA25365195A0759A5AE28D9F2A87_103; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DC2D514B39C8DFA25365195A0759A5AE28D9F2A87_103() { return &___U24fieldU2DC2D514B39C8DFA25365195A0759A5AE28D9F2A87_103; }
	inline void set_U24fieldU2DC2D514B39C8DFA25365195A0759A5AE28D9F2A87_103(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DC2D514B39C8DFA25365195A0759A5AE28D9F2A87_103 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D613CFAEE025A3AF3C6D13DEB22E298C1925C31B5_104() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D613CFAEE025A3AF3C6D13DEB22E298C1925C31B5_104)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D613CFAEE025A3AF3C6D13DEB22E298C1925C31B5_104() const { return ___U24fieldU2D613CFAEE025A3AF3C6D13DEB22E298C1925C31B5_104; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D613CFAEE025A3AF3C6D13DEB22E298C1925C31B5_104() { return &___U24fieldU2D613CFAEE025A3AF3C6D13DEB22E298C1925C31B5_104; }
	inline void set_U24fieldU2D613CFAEE025A3AF3C6D13DEB22E298C1925C31B5_104(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D613CFAEE025A3AF3C6D13DEB22E298C1925C31B5_104 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DB5E8BA68953A5283AD953094F0F391FA4502A3FA_105() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DB5E8BA68953A5283AD953094F0F391FA4502A3FA_105)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DB5E8BA68953A5283AD953094F0F391FA4502A3FA_105() const { return ___U24fieldU2DB5E8BA68953A5283AD953094F0F391FA4502A3FA_105; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DB5E8BA68953A5283AD953094F0F391FA4502A3FA_105() { return &___U24fieldU2DB5E8BA68953A5283AD953094F0F391FA4502A3FA_105; }
	inline void set_U24fieldU2DB5E8BA68953A5283AD953094F0F391FA4502A3FA_105(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DB5E8BA68953A5283AD953094F0F391FA4502A3FA_105 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D35E6464339FFAE0D3777B12A371F82D2D1F668CA_106() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D35E6464339FFAE0D3777B12A371F82D2D1F668CA_106)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D35E6464339FFAE0D3777B12A371F82D2D1F668CA_106() const { return ___U24fieldU2D35E6464339FFAE0D3777B12A371F82D2D1F668CA_106; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D35E6464339FFAE0D3777B12A371F82D2D1F668CA_106() { return &___U24fieldU2D35E6464339FFAE0D3777B12A371F82D2D1F668CA_106; }
	inline void set_U24fieldU2D35E6464339FFAE0D3777B12A371F82D2D1F668CA_106(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D35E6464339FFAE0D3777B12A371F82D2D1F668CA_106 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D6DEB7F74818574642B0B824B9C08B366C962A360_107() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D6DEB7F74818574642B0B824B9C08B366C962A360_107)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D6DEB7F74818574642B0B824B9C08B366C962A360_107() const { return ___U24fieldU2D6DEB7F74818574642B0B824B9C08B366C962A360_107; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D6DEB7F74818574642B0B824B9C08B366C962A360_107() { return &___U24fieldU2D6DEB7F74818574642B0B824B9C08B366C962A360_107; }
	inline void set_U24fieldU2D6DEB7F74818574642B0B824B9C08B366C962A360_107(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D6DEB7F74818574642B0B824B9C08B366C962A360_107 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DBEFC5B901D2D4EE83CB9EB422EFE470C4BF76C6B_108() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DBEFC5B901D2D4EE83CB9EB422EFE470C4BF76C6B_108)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DBEFC5B901D2D4EE83CB9EB422EFE470C4BF76C6B_108() const { return ___U24fieldU2DBEFC5B901D2D4EE83CB9EB422EFE470C4BF76C6B_108; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DBEFC5B901D2D4EE83CB9EB422EFE470C4BF76C6B_108() { return &___U24fieldU2DBEFC5B901D2D4EE83CB9EB422EFE470C4BF76C6B_108; }
	inline void set_U24fieldU2DBEFC5B901D2D4EE83CB9EB422EFE470C4BF76C6B_108(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DBEFC5B901D2D4EE83CB9EB422EFE470C4BF76C6B_108 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D5D41C56232C500092E99AC044D3C5C442B1C834F_109() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D5D41C56232C500092E99AC044D3C5C442B1C834F_109)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D5D41C56232C500092E99AC044D3C5C442B1C834F_109() const { return ___U24fieldU2D5D41C56232C500092E99AC044D3C5C442B1C834F_109; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D5D41C56232C500092E99AC044D3C5C442B1C834F_109() { return &___U24fieldU2D5D41C56232C500092E99AC044D3C5C442B1C834F_109; }
	inline void set_U24fieldU2D5D41C56232C500092E99AC044D3C5C442B1C834F_109(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D5D41C56232C500092E99AC044D3C5C442B1C834F_109 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DF63639527E877A2CBCB26FFD41D4A59470BFF8C8_110() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DF63639527E877A2CBCB26FFD41D4A59470BFF8C8_110)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DF63639527E877A2CBCB26FFD41D4A59470BFF8C8_110() const { return ___U24fieldU2DF63639527E877A2CBCB26FFD41D4A59470BFF8C8_110; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DF63639527E877A2CBCB26FFD41D4A59470BFF8C8_110() { return &___U24fieldU2DF63639527E877A2CBCB26FFD41D4A59470BFF8C8_110; }
	inline void set_U24fieldU2DF63639527E877A2CBCB26FFD41D4A59470BFF8C8_110(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DF63639527E877A2CBCB26FFD41D4A59470BFF8C8_110 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DA72FDF28F8C2336EEEF4D5913F57EECDA0A2D3F6_111() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DA72FDF28F8C2336EEEF4D5913F57EECDA0A2D3F6_111)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DA72FDF28F8C2336EEEF4D5913F57EECDA0A2D3F6_111() const { return ___U24fieldU2DA72FDF28F8C2336EEEF4D5913F57EECDA0A2D3F6_111; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DA72FDF28F8C2336EEEF4D5913F57EECDA0A2D3F6_111() { return &___U24fieldU2DA72FDF28F8C2336EEEF4D5913F57EECDA0A2D3F6_111; }
	inline void set_U24fieldU2DA72FDF28F8C2336EEEF4D5913F57EECDA0A2D3F6_111(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DA72FDF28F8C2336EEEF4D5913F57EECDA0A2D3F6_111 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DC4B266E68FA20D0D222D86ADAD31EBB55118CD21_112() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DC4B266E68FA20D0D222D86ADAD31EBB55118CD21_112)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DC4B266E68FA20D0D222D86ADAD31EBB55118CD21_112() const { return ___U24fieldU2DC4B266E68FA20D0D222D86ADAD31EBB55118CD21_112; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DC4B266E68FA20D0D222D86ADAD31EBB55118CD21_112() { return &___U24fieldU2DC4B266E68FA20D0D222D86ADAD31EBB55118CD21_112; }
	inline void set_U24fieldU2DC4B266E68FA20D0D222D86ADAD31EBB55118CD21_112(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DC4B266E68FA20D0D222D86ADAD31EBB55118CD21_112 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D6AE5F51BDA53455ED8257137D6E6FF2E5A7ECF16_113() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D6AE5F51BDA53455ED8257137D6E6FF2E5A7ECF16_113)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2D6AE5F51BDA53455ED8257137D6E6FF2E5A7ECF16_113() const { return ___U24fieldU2D6AE5F51BDA53455ED8257137D6E6FF2E5A7ECF16_113; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2D6AE5F51BDA53455ED8257137D6E6FF2E5A7ECF16_113() { return &___U24fieldU2D6AE5F51BDA53455ED8257137D6E6FF2E5A7ECF16_113; }
	inline void set_U24fieldU2D6AE5F51BDA53455ED8257137D6E6FF2E5A7ECF16_113(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2D6AE5F51BDA53455ED8257137D6E6FF2E5A7ECF16_113 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DC95356610D5583976B69017BED7048EB50121B90_114() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DC95356610D5583976B69017BED7048EB50121B90_114)); }
	inline U24ArrayTypeU3D256_t1189136629  get_U24fieldU2DC95356610D5583976B69017BED7048EB50121B90_114() const { return ___U24fieldU2DC95356610D5583976B69017BED7048EB50121B90_114; }
	inline U24ArrayTypeU3D256_t1189136629 * get_address_of_U24fieldU2DC95356610D5583976B69017BED7048EB50121B90_114() { return &___U24fieldU2DC95356610D5583976B69017BED7048EB50121B90_114; }
	inline void set_U24fieldU2DC95356610D5583976B69017BED7048EB50121B90_114(U24ArrayTypeU3D256_t1189136629  value)
	{
		___U24fieldU2DC95356610D5583976B69017BED7048EB50121B90_114 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DA4313AAA146ACFCA88681B7BFC3D644005F3792B_115() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DA4313AAA146ACFCA88681B7BFC3D644005F3792B_115)); }
	inline U24ArrayTypeU3D32_t4145487141  get_U24fieldU2DA4313AAA146ACFCA88681B7BFC3D644005F3792B_115() const { return ___U24fieldU2DA4313AAA146ACFCA88681B7BFC3D644005F3792B_115; }
	inline U24ArrayTypeU3D32_t4145487141 * get_address_of_U24fieldU2DA4313AAA146ACFCA88681B7BFC3D644005F3792B_115() { return &___U24fieldU2DA4313AAA146ACFCA88681B7BFC3D644005F3792B_115; }
	inline void set_U24fieldU2DA4313AAA146ACFCA88681B7BFC3D644005F3792B_115(U24ArrayTypeU3D32_t4145487141  value)
	{
		___U24fieldU2DA4313AAA146ACFCA88681B7BFC3D644005F3792B_115 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DCA1986CBA4E4F0DFA3BF6A654EF8A36E6077AD99_116() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DCA1986CBA4E4F0DFA3BF6A654EF8A36E6077AD99_116)); }
	inline U24ArrayTypeU3D512_t2137770118  get_U24fieldU2DCA1986CBA4E4F0DFA3BF6A654EF8A36E6077AD99_116() const { return ___U24fieldU2DCA1986CBA4E4F0DFA3BF6A654EF8A36E6077AD99_116; }
	inline U24ArrayTypeU3D512_t2137770118 * get_address_of_U24fieldU2DCA1986CBA4E4F0DFA3BF6A654EF8A36E6077AD99_116() { return &___U24fieldU2DCA1986CBA4E4F0DFA3BF6A654EF8A36E6077AD99_116; }
	inline void set_U24fieldU2DCA1986CBA4E4F0DFA3BF6A654EF8A36E6077AD99_116(U24ArrayTypeU3D512_t2137770118  value)
	{
		___U24fieldU2DCA1986CBA4E4F0DFA3BF6A654EF8A36E6077AD99_116 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D239B59488F1CE7EBE225785FDC22A8E3102A2E82_117() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D239B59488F1CE7EBE225785FDC22A8E3102A2E82_117)); }
	inline U24ArrayTypeU3D512_t2137770118  get_U24fieldU2D239B59488F1CE7EBE225785FDC22A8E3102A2E82_117() const { return ___U24fieldU2D239B59488F1CE7EBE225785FDC22A8E3102A2E82_117; }
	inline U24ArrayTypeU3D512_t2137770118 * get_address_of_U24fieldU2D239B59488F1CE7EBE225785FDC22A8E3102A2E82_117() { return &___U24fieldU2D239B59488F1CE7EBE225785FDC22A8E3102A2E82_117; }
	inline void set_U24fieldU2D239B59488F1CE7EBE225785FDC22A8E3102A2E82_117(U24ArrayTypeU3D512_t2137770118  value)
	{
		___U24fieldU2D239B59488F1CE7EBE225785FDC22A8E3102A2E82_117 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D310EFB639F3C7677A2A82B54EEED1124ED69E9A3_118() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D310EFB639F3C7677A2A82B54EEED1124ED69E9A3_118)); }
	inline U24ArrayTypeU3D1024_t1496239055  get_U24fieldU2D310EFB639F3C7677A2A82B54EEED1124ED69E9A3_118() const { return ___U24fieldU2D310EFB639F3C7677A2A82B54EEED1124ED69E9A3_118; }
	inline U24ArrayTypeU3D1024_t1496239055 * get_address_of_U24fieldU2D310EFB639F3C7677A2A82B54EEED1124ED69E9A3_118() { return &___U24fieldU2D310EFB639F3C7677A2A82B54EEED1124ED69E9A3_118; }
	inline void set_U24fieldU2D310EFB639F3C7677A2A82B54EEED1124ED69E9A3_118(U24ArrayTypeU3D1024_t1496239055  value)
	{
		___U24fieldU2D310EFB639F3C7677A2A82B54EEED1124ED69E9A3_118 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D428007959831954B0C2DCFAF9DD641D629B00DBF_119() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D428007959831954B0C2DCFAF9DD641D629B00DBF_119)); }
	inline U24ArrayTypeU3D512_t2137770118  get_U24fieldU2D428007959831954B0C2DCFAF9DD641D629B00DBF_119() const { return ___U24fieldU2D428007959831954B0C2DCFAF9DD641D629B00DBF_119; }
	inline U24ArrayTypeU3D512_t2137770118 * get_address_of_U24fieldU2D428007959831954B0C2DCFAF9DD641D629B00DBF_119() { return &___U24fieldU2D428007959831954B0C2DCFAF9DD641D629B00DBF_119; }
	inline void set_U24fieldU2D428007959831954B0C2DCFAF9DD641D629B00DBF_119(U24ArrayTypeU3D512_t2137770118  value)
	{
		___U24fieldU2D428007959831954B0C2DCFAF9DD641D629B00DBF_119 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DFA5B1C8B2F287078ED719C15595DB729BDB85911_120() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DFA5B1C8B2F287078ED719C15595DB729BDB85911_120)); }
	inline U24ArrayTypeU3D4096_t818062559  get_U24fieldU2DFA5B1C8B2F287078ED719C15595DB729BDB85911_120() const { return ___U24fieldU2DFA5B1C8B2F287078ED719C15595DB729BDB85911_120; }
	inline U24ArrayTypeU3D4096_t818062559 * get_address_of_U24fieldU2DFA5B1C8B2F287078ED719C15595DB729BDB85911_120() { return &___U24fieldU2DFA5B1C8B2F287078ED719C15595DB729BDB85911_120; }
	inline void set_U24fieldU2DFA5B1C8B2F287078ED719C15595DB729BDB85911_120(U24ArrayTypeU3D4096_t818062559  value)
	{
		___U24fieldU2DFA5B1C8B2F287078ED719C15595DB729BDB85911_120 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D86B0F85AC13B58F88DEFFD8FD6EE095438B98F10_121() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D86B0F85AC13B58F88DEFFD8FD6EE095438B98F10_121)); }
	inline U24ArrayTypeU3D32_t4145487141  get_U24fieldU2D86B0F85AC13B58F88DEFFD8FD6EE095438B98F10_121() const { return ___U24fieldU2D86B0F85AC13B58F88DEFFD8FD6EE095438B98F10_121; }
	inline U24ArrayTypeU3D32_t4145487141 * get_address_of_U24fieldU2D86B0F85AC13B58F88DEFFD8FD6EE095438B98F10_121() { return &___U24fieldU2D86B0F85AC13B58F88DEFFD8FD6EE095438B98F10_121; }
	inline void set_U24fieldU2D86B0F85AC13B58F88DEFFD8FD6EE095438B98F10_121(U24ArrayTypeU3D32_t4145487141  value)
	{
		___U24fieldU2D86B0F85AC13B58F88DEFFD8FD6EE095438B98F10_121 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DEAEB85AB6D40E0AB7CE0F65EF7EDF588A4DD81C9_122() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DEAEB85AB6D40E0AB7CE0F65EF7EDF588A4DD81C9_122)); }
	inline U24ArrayTypeU3D64_t4078931961  get_U24fieldU2DEAEB85AB6D40E0AB7CE0F65EF7EDF588A4DD81C9_122() const { return ___U24fieldU2DEAEB85AB6D40E0AB7CE0F65EF7EDF588A4DD81C9_122; }
	inline U24ArrayTypeU3D64_t4078931961 * get_address_of_U24fieldU2DEAEB85AB6D40E0AB7CE0F65EF7EDF588A4DD81C9_122() { return &___U24fieldU2DEAEB85AB6D40E0AB7CE0F65EF7EDF588A4DD81C9_122; }
	inline void set_U24fieldU2DEAEB85AB6D40E0AB7CE0F65EF7EDF588A4DD81C9_122(U24ArrayTypeU3D64_t4078931961  value)
	{
		___U24fieldU2DEAEB85AB6D40E0AB7CE0F65EF7EDF588A4DD81C9_122 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D6AAC0DB543C50F09E879F5B9F757319773564CE1_123() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D6AAC0DB543C50F09E879F5B9F757319773564CE1_123)); }
	inline U24ArrayTypeU3D32_t4145487141  get_U24fieldU2D6AAC0DB543C50F09E879F5B9F757319773564CE1_123() const { return ___U24fieldU2D6AAC0DB543C50F09E879F5B9F757319773564CE1_123; }
	inline U24ArrayTypeU3D32_t4145487141 * get_address_of_U24fieldU2D6AAC0DB543C50F09E879F5B9F757319773564CE1_123() { return &___U24fieldU2D6AAC0DB543C50F09E879F5B9F757319773564CE1_123; }
	inline void set_U24fieldU2D6AAC0DB543C50F09E879F5B9F757319773564CE1_123(U24ArrayTypeU3D32_t4145487141  value)
	{
		___U24fieldU2D6AAC0DB543C50F09E879F5B9F757319773564CE1_123 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DFAF70E8DF6971D7BABBCE9FEF83EDA1D5D095D05_124() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DFAF70E8DF6971D7BABBCE9FEF83EDA1D5D095D05_124)); }
	inline U24ArrayTypeU3D16_t2289608776  get_U24fieldU2DFAF70E8DF6971D7BABBCE9FEF83EDA1D5D095D05_124() const { return ___U24fieldU2DFAF70E8DF6971D7BABBCE9FEF83EDA1D5D095D05_124; }
	inline U24ArrayTypeU3D16_t2289608776 * get_address_of_U24fieldU2DFAF70E8DF6971D7BABBCE9FEF83EDA1D5D095D05_124() { return &___U24fieldU2DFAF70E8DF6971D7BABBCE9FEF83EDA1D5D095D05_124; }
	inline void set_U24fieldU2DFAF70E8DF6971D7BABBCE9FEF83EDA1D5D095D05_124(U24ArrayTypeU3D16_t2289608776  value)
	{
		___U24fieldU2DFAF70E8DF6971D7BABBCE9FEF83EDA1D5D095D05_124 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D068B2E17352B5B9FF693CAE83421B679E0342A5C_125() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D068B2E17352B5B9FF693CAE83421B679E0342A5C_125)); }
	inline U24ArrayTypeU3D32_t4145487141  get_U24fieldU2D068B2E17352B5B9FF693CAE83421B679E0342A5C_125() const { return ___U24fieldU2D068B2E17352B5B9FF693CAE83421B679E0342A5C_125; }
	inline U24ArrayTypeU3D32_t4145487141 * get_address_of_U24fieldU2D068B2E17352B5B9FF693CAE83421B679E0342A5C_125() { return &___U24fieldU2D068B2E17352B5B9FF693CAE83421B679E0342A5C_125; }
	inline void set_U24fieldU2D068B2E17352B5B9FF693CAE83421B679E0342A5C_125(U24ArrayTypeU3D32_t4145487141  value)
	{
		___U24fieldU2D068B2E17352B5B9FF693CAE83421B679E0342A5C_125 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DF2842E2653F6C5E55959B5EC5E07ABAFC0191FB0_126() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DF2842E2653F6C5E55959B5EC5E07ABAFC0191FB0_126)); }
	inline U24ArrayTypeU3D32_t4145487141  get_U24fieldU2DF2842E2653F6C5E55959B5EC5E07ABAFC0191FB0_126() const { return ___U24fieldU2DF2842E2653F6C5E55959B5EC5E07ABAFC0191FB0_126; }
	inline U24ArrayTypeU3D32_t4145487141 * get_address_of_U24fieldU2DF2842E2653F6C5E55959B5EC5E07ABAFC0191FB0_126() { return &___U24fieldU2DF2842E2653F6C5E55959B5EC5E07ABAFC0191FB0_126; }
	inline void set_U24fieldU2DF2842E2653F6C5E55959B5EC5E07ABAFC0191FB0_126(U24ArrayTypeU3D32_t4145487141  value)
	{
		___U24fieldU2DF2842E2653F6C5E55959B5EC5E07ABAFC0191FB0_126 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D35D6BB00E88996CA4CA6EEB743BE1820C59C5FAD_127() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D35D6BB00E88996CA4CA6EEB743BE1820C59C5FAD_127)); }
	inline U24ArrayTypeU3D20_t2271475897  get_U24fieldU2D35D6BB00E88996CA4CA6EEB743BE1820C59C5FAD_127() const { return ___U24fieldU2D35D6BB00E88996CA4CA6EEB743BE1820C59C5FAD_127; }
	inline U24ArrayTypeU3D20_t2271475897 * get_address_of_U24fieldU2D35D6BB00E88996CA4CA6EEB743BE1820C59C5FAD_127() { return &___U24fieldU2D35D6BB00E88996CA4CA6EEB743BE1820C59C5FAD_127; }
	inline void set_U24fieldU2D35D6BB00E88996CA4CA6EEB743BE1820C59C5FAD_127(U24ArrayTypeU3D20_t2271475897  value)
	{
		___U24fieldU2D35D6BB00E88996CA4CA6EEB743BE1820C59C5FAD_127 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D310FB325A3EA3EA527B55C2F08544D1CB92C19F4_128() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D310FB325A3EA3EA527B55C2F08544D1CB92C19F4_128)); }
	inline U24ArrayTypeU3D40_t1983424417  get_U24fieldU2D310FB325A3EA3EA527B55C2F08544D1CB92C19F4_128() const { return ___U24fieldU2D310FB325A3EA3EA527B55C2F08544D1CB92C19F4_128; }
	inline U24ArrayTypeU3D40_t1983424417 * get_address_of_U24fieldU2D310FB325A3EA3EA527B55C2F08544D1CB92C19F4_128() { return &___U24fieldU2D310FB325A3EA3EA527B55C2F08544D1CB92C19F4_128; }
	inline void set_U24fieldU2D310FB325A3EA3EA527B55C2F08544D1CB92C19F4_128(U24ArrayTypeU3D40_t1983424417  value)
	{
		___U24fieldU2D310FB325A3EA3EA527B55C2F08544D1CB92C19F4_128 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DC132685022CE310ACFD3A883E0A57033A482A959_129() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DC132685022CE310ACFD3A883E0A57033A482A959_129)); }
	inline U24ArrayTypeU3D28_t1104879214  get_U24fieldU2DC132685022CE310ACFD3A883E0A57033A482A959_129() const { return ___U24fieldU2DC132685022CE310ACFD3A883E0A57033A482A959_129; }
	inline U24ArrayTypeU3D28_t1104879214 * get_address_of_U24fieldU2DC132685022CE310ACFD3A883E0A57033A482A959_129() { return &___U24fieldU2DC132685022CE310ACFD3A883E0A57033A482A959_129; }
	inline void set_U24fieldU2DC132685022CE310ACFD3A883E0A57033A482A959_129(U24ArrayTypeU3D28_t1104879214  value)
	{
		___U24fieldU2DC132685022CE310ACFD3A883E0A57033A482A959_129 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D27FED0F92A97C41B08D3115553BBDC064F417B6E_130() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D27FED0F92A97C41B08D3115553BBDC064F417B6E_130)); }
	inline U24ArrayTypeU3D20_t2271475897  get_U24fieldU2D27FED0F92A97C41B08D3115553BBDC064F417B6E_130() const { return ___U24fieldU2D27FED0F92A97C41B08D3115553BBDC064F417B6E_130; }
	inline U24ArrayTypeU3D20_t2271475897 * get_address_of_U24fieldU2D27FED0F92A97C41B08D3115553BBDC064F417B6E_130() { return &___U24fieldU2D27FED0F92A97C41B08D3115553BBDC064F417B6E_130; }
	inline void set_U24fieldU2D27FED0F92A97C41B08D3115553BBDC064F417B6E_130(U24ArrayTypeU3D20_t2271475897  value)
	{
		___U24fieldU2D27FED0F92A97C41B08D3115553BBDC064F417B6E_130 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D60A08108A32C9D3F263B2F42095A2694B7C1C1EF_131() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D60A08108A32C9D3F263B2F42095A2694B7C1C1EF_131)); }
	inline U24ArrayTypeU3D40_t1983424417  get_U24fieldU2D60A08108A32C9D3F263B2F42095A2694B7C1C1EF_131() const { return ___U24fieldU2D60A08108A32C9D3F263B2F42095A2694B7C1C1EF_131; }
	inline U24ArrayTypeU3D40_t1983424417 * get_address_of_U24fieldU2D60A08108A32C9D3F263B2F42095A2694B7C1C1EF_131() { return &___U24fieldU2D60A08108A32C9D3F263B2F42095A2694B7C1C1EF_131; }
	inline void set_U24fieldU2D60A08108A32C9D3F263B2F42095A2694B7C1C1EF_131(U24ArrayTypeU3D40_t1983424417  value)
	{
		___U24fieldU2D60A08108A32C9D3F263B2F42095A2694B7C1C1EF_131 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D32ECB35FF8400B4E56FF5E09588FB20DD60350E7_132() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D32ECB35FF8400B4E56FF5E09588FB20DD60350E7_132)); }
	inline U24ArrayTypeU3D28_t1104879214  get_U24fieldU2D32ECB35FF8400B4E56FF5E09588FB20DD60350E7_132() const { return ___U24fieldU2D32ECB35FF8400B4E56FF5E09588FB20DD60350E7_132; }
	inline U24ArrayTypeU3D28_t1104879214 * get_address_of_U24fieldU2D32ECB35FF8400B4E56FF5E09588FB20DD60350E7_132() { return &___U24fieldU2D32ECB35FF8400B4E56FF5E09588FB20DD60350E7_132; }
	inline void set_U24fieldU2D32ECB35FF8400B4E56FF5E09588FB20DD60350E7_132(U24ArrayTypeU3D28_t1104879214  value)
	{
		___U24fieldU2D32ECB35FF8400B4E56FF5E09588FB20DD60350E7_132 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DFB3C663794DD23F500825FF78450D198FE338938_133() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DFB3C663794DD23F500825FF78450D198FE338938_133)); }
	inline U24ArrayTypeU3D24_t1113226219  get_U24fieldU2DFB3C663794DD23F500825FF78450D198FE338938_133() const { return ___U24fieldU2DFB3C663794DD23F500825FF78450D198FE338938_133; }
	inline U24ArrayTypeU3D24_t1113226219 * get_address_of_U24fieldU2DFB3C663794DD23F500825FF78450D198FE338938_133() { return &___U24fieldU2DFB3C663794DD23F500825FF78450D198FE338938_133; }
	inline void set_U24fieldU2DFB3C663794DD23F500825FF78450D198FE338938_133(U24ArrayTypeU3D24_t1113226219  value)
	{
		___U24fieldU2DFB3C663794DD23F500825FF78450D198FE338938_133 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DC5515C87D04DC0D00C7984096F5E35B4944C1CB6_134() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DC5515C87D04DC0D00C7984096F5E35B4944C1CB6_134)); }
	inline U24ArrayTypeU3D48_t3687564119  get_U24fieldU2DC5515C87D04DC0D00C7984096F5E35B4944C1CB6_134() const { return ___U24fieldU2DC5515C87D04DC0D00C7984096F5E35B4944C1CB6_134; }
	inline U24ArrayTypeU3D48_t3687564119 * get_address_of_U24fieldU2DC5515C87D04DC0D00C7984096F5E35B4944C1CB6_134() { return &___U24fieldU2DC5515C87D04DC0D00C7984096F5E35B4944C1CB6_134; }
	inline void set_U24fieldU2DC5515C87D04DC0D00C7984096F5E35B4944C1CB6_134(U24ArrayTypeU3D48_t3687564119  value)
	{
		___U24fieldU2DC5515C87D04DC0D00C7984096F5E35B4944C1CB6_134 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D8330271815E046D369E0B1F7673D308739FDCC07_135() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D8330271815E046D369E0B1F7673D308739FDCC07_135)); }
	inline U24ArrayTypeU3D32_t4145487141  get_U24fieldU2D8330271815E046D369E0B1F7673D308739FDCC07_135() const { return ___U24fieldU2D8330271815E046D369E0B1F7673D308739FDCC07_135; }
	inline U24ArrayTypeU3D32_t4145487141 * get_address_of_U24fieldU2D8330271815E046D369E0B1F7673D308739FDCC07_135() { return &___U24fieldU2D8330271815E046D369E0B1F7673D308739FDCC07_135; }
	inline void set_U24fieldU2D8330271815E046D369E0B1F7673D308739FDCC07_135(U24ArrayTypeU3D32_t4145487141  value)
	{
		___U24fieldU2D8330271815E046D369E0B1F7673D308739FDCC07_135 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DD6898715AE96BC2F82A7BBA76E2BFC7100E282C3_136() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DD6898715AE96BC2F82A7BBA76E2BFC7100E282C3_136)); }
	inline U24ArrayTypeU3D24_t1113226219  get_U24fieldU2DD6898715AE96BC2F82A7BBA76E2BFC7100E282C3_136() const { return ___U24fieldU2DD6898715AE96BC2F82A7BBA76E2BFC7100E282C3_136; }
	inline U24ArrayTypeU3D24_t1113226219 * get_address_of_U24fieldU2DD6898715AE96BC2F82A7BBA76E2BFC7100E282C3_136() { return &___U24fieldU2DD6898715AE96BC2F82A7BBA76E2BFC7100E282C3_136; }
	inline void set_U24fieldU2DD6898715AE96BC2F82A7BBA76E2BFC7100E282C3_136(U24ArrayTypeU3D24_t1113226219  value)
	{
		___U24fieldU2DD6898715AE96BC2F82A7BBA76E2BFC7100E282C3_136 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DA53306F44DF494A019EA1487807B59CA336BF024_137() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DA53306F44DF494A019EA1487807B59CA336BF024_137)); }
	inline U24ArrayTypeU3D48_t3687564119  get_U24fieldU2DA53306F44DF494A019EA1487807B59CA336BF024_137() const { return ___U24fieldU2DA53306F44DF494A019EA1487807B59CA336BF024_137; }
	inline U24ArrayTypeU3D48_t3687564119 * get_address_of_U24fieldU2DA53306F44DF494A019EA1487807B59CA336BF024_137() { return &___U24fieldU2DA53306F44DF494A019EA1487807B59CA336BF024_137; }
	inline void set_U24fieldU2DA53306F44DF494A019EA1487807B59CA336BF024_137(U24ArrayTypeU3D48_t3687564119  value)
	{
		___U24fieldU2DA53306F44DF494A019EA1487807B59CA336BF024_137 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D0982B1B45B764F2694ABC3DE57204AC898651429_138() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D0982B1B45B764F2694ABC3DE57204AC898651429_138)); }
	inline U24ArrayTypeU3D36_t3644008270  get_U24fieldU2D0982B1B45B764F2694ABC3DE57204AC898651429_138() const { return ___U24fieldU2D0982B1B45B764F2694ABC3DE57204AC898651429_138; }
	inline U24ArrayTypeU3D36_t3644008270 * get_address_of_U24fieldU2D0982B1B45B764F2694ABC3DE57204AC898651429_138() { return &___U24fieldU2D0982B1B45B764F2694ABC3DE57204AC898651429_138; }
	inline void set_U24fieldU2D0982B1B45B764F2694ABC3DE57204AC898651429_138(U24ArrayTypeU3D36_t3644008270  value)
	{
		___U24fieldU2D0982B1B45B764F2694ABC3DE57204AC898651429_138 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D126589410FF9CA1510B9950BF0E79E5BFD60000B_139() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D126589410FF9CA1510B9950BF0E79E5BFD60000B_139)); }
	inline U24ArrayTypeU3D28_t1104879214  get_U24fieldU2D126589410FF9CA1510B9950BF0E79E5BFD60000B_139() const { return ___U24fieldU2D126589410FF9CA1510B9950BF0E79E5BFD60000B_139; }
	inline U24ArrayTypeU3D28_t1104879214 * get_address_of_U24fieldU2D126589410FF9CA1510B9950BF0E79E5BFD60000B_139() { return &___U24fieldU2D126589410FF9CA1510B9950BF0E79E5BFD60000B_139; }
	inline void set_U24fieldU2D126589410FF9CA1510B9950BF0E79E5BFD60000B_139(U24ArrayTypeU3D28_t1104879214  value)
	{
		___U24fieldU2D126589410FF9CA1510B9950BF0E79E5BFD60000B_139 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DE647D32D165F3510693DF9787DC98E0A0B63C5C2_140() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DE647D32D165F3510693DF9787DC98E0A0B63C5C2_140)); }
	inline U24ArrayTypeU3D56_t1391226737  get_U24fieldU2DE647D32D165F3510693DF9787DC98E0A0B63C5C2_140() const { return ___U24fieldU2DE647D32D165F3510693DF9787DC98E0A0B63C5C2_140; }
	inline U24ArrayTypeU3D56_t1391226737 * get_address_of_U24fieldU2DE647D32D165F3510693DF9787DC98E0A0B63C5C2_140() { return &___U24fieldU2DE647D32D165F3510693DF9787DC98E0A0B63C5C2_140; }
	inline void set_U24fieldU2DE647D32D165F3510693DF9787DC98E0A0B63C5C2_140(U24ArrayTypeU3D56_t1391226737  value)
	{
		___U24fieldU2DE647D32D165F3510693DF9787DC98E0A0B63C5C2_140 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D66961AC9ADD7C27DCD1BCA65FCD5C02B74B62F47_141() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D66961AC9ADD7C27DCD1BCA65FCD5C02B74B62F47_141)); }
	inline U24ArrayTypeU3D36_t3644008270  get_U24fieldU2D66961AC9ADD7C27DCD1BCA65FCD5C02B74B62F47_141() const { return ___U24fieldU2D66961AC9ADD7C27DCD1BCA65FCD5C02B74B62F47_141; }
	inline U24ArrayTypeU3D36_t3644008270 * get_address_of_U24fieldU2D66961AC9ADD7C27DCD1BCA65FCD5C02B74B62F47_141() { return &___U24fieldU2D66961AC9ADD7C27DCD1BCA65FCD5C02B74B62F47_141; }
	inline void set_U24fieldU2D66961AC9ADD7C27DCD1BCA65FCD5C02B74B62F47_141(U24ArrayTypeU3D36_t3644008270  value)
	{
		___U24fieldU2D66961AC9ADD7C27DCD1BCA65FCD5C02B74B62F47_141 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D059FFAA29C8FCAA8FDB47FBFDE6FB74F5A43E5C0_142() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D059FFAA29C8FCAA8FDB47FBFDE6FB74F5A43E5C0_142)); }
	inline U24ArrayTypeU3D28_t1104879214  get_U24fieldU2D059FFAA29C8FCAA8FDB47FBFDE6FB74F5A43E5C0_142() const { return ___U24fieldU2D059FFAA29C8FCAA8FDB47FBFDE6FB74F5A43E5C0_142; }
	inline U24ArrayTypeU3D28_t1104879214 * get_address_of_U24fieldU2D059FFAA29C8FCAA8FDB47FBFDE6FB74F5A43E5C0_142() { return &___U24fieldU2D059FFAA29C8FCAA8FDB47FBFDE6FB74F5A43E5C0_142; }
	inline void set_U24fieldU2D059FFAA29C8FCAA8FDB47FBFDE6FB74F5A43E5C0_142(U24ArrayTypeU3D28_t1104879214  value)
	{
		___U24fieldU2D059FFAA29C8FCAA8FDB47FBFDE6FB74F5A43E5C0_142 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D1E3842329C5294DBE1DF588A77C68B35C6AF83BF_143() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D1E3842329C5294DBE1DF588A77C68B35C6AF83BF_143)); }
	inline U24ArrayTypeU3D28_t1104879214  get_U24fieldU2D1E3842329C5294DBE1DF588A77C68B35C6AF83BF_143() const { return ___U24fieldU2D1E3842329C5294DBE1DF588A77C68B35C6AF83BF_143; }
	inline U24ArrayTypeU3D28_t1104879214 * get_address_of_U24fieldU2D1E3842329C5294DBE1DF588A77C68B35C6AF83BF_143() { return &___U24fieldU2D1E3842329C5294DBE1DF588A77C68B35C6AF83BF_143; }
	inline void set_U24fieldU2D1E3842329C5294DBE1DF588A77C68B35C6AF83BF_143(U24ArrayTypeU3D28_t1104879214  value)
	{
		___U24fieldU2D1E3842329C5294DBE1DF588A77C68B35C6AF83BF_143 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D8C9BE3C02B5604C5CBF6A03E8032549588A6ED54_144() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D8C9BE3C02B5604C5CBF6A03E8032549588A6ED54_144)); }
	inline U24ArrayTypeU3D56_t1391226737  get_U24fieldU2D8C9BE3C02B5604C5CBF6A03E8032549588A6ED54_144() const { return ___U24fieldU2D8C9BE3C02B5604C5CBF6A03E8032549588A6ED54_144; }
	inline U24ArrayTypeU3D56_t1391226737 * get_address_of_U24fieldU2D8C9BE3C02B5604C5CBF6A03E8032549588A6ED54_144() { return &___U24fieldU2D8C9BE3C02B5604C5CBF6A03E8032549588A6ED54_144; }
	inline void set_U24fieldU2D8C9BE3C02B5604C5CBF6A03E8032549588A6ED54_144(U24ArrayTypeU3D56_t1391226737  value)
	{
		___U24fieldU2D8C9BE3C02B5604C5CBF6A03E8032549588A6ED54_144 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DEBE167F7962841FA83451C9C1663416D69AA5294_145() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DEBE167F7962841FA83451C9C1663416D69AA5294_145)); }
	inline U24ArrayTypeU3D44_t447450017  get_U24fieldU2DEBE167F7962841FA83451C9C1663416D69AA5294_145() const { return ___U24fieldU2DEBE167F7962841FA83451C9C1663416D69AA5294_145; }
	inline U24ArrayTypeU3D44_t447450017 * get_address_of_U24fieldU2DEBE167F7962841FA83451C9C1663416D69AA5294_145() { return &___U24fieldU2DEBE167F7962841FA83451C9C1663416D69AA5294_145; }
	inline void set_U24fieldU2DEBE167F7962841FA83451C9C1663416D69AA5294_145(U24ArrayTypeU3D44_t447450017  value)
	{
		___U24fieldU2DEBE167F7962841FA83451C9C1663416D69AA5294_145 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D2CABEB86D5B3D362822AF2E5D136A10A17AD85DA_146() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D2CABEB86D5B3D362822AF2E5D136A10A17AD85DA_146)); }
	inline U24ArrayTypeU3D32_t4145487141  get_U24fieldU2D2CABEB86D5B3D362822AF2E5D136A10A17AD85DA_146() const { return ___U24fieldU2D2CABEB86D5B3D362822AF2E5D136A10A17AD85DA_146; }
	inline U24ArrayTypeU3D32_t4145487141 * get_address_of_U24fieldU2D2CABEB86D5B3D362822AF2E5D136A10A17AD85DA_146() { return &___U24fieldU2D2CABEB86D5B3D362822AF2E5D136A10A17AD85DA_146; }
	inline void set_U24fieldU2D2CABEB86D5B3D362822AF2E5D136A10A17AD85DA_146(U24ArrayTypeU3D32_t4145487141  value)
	{
		___U24fieldU2D2CABEB86D5B3D362822AF2E5D136A10A17AD85DA_146 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D79A213B796D2AD7A89C2071B0732B78207F5CE01_147() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D79A213B796D2AD7A89C2071B0732B78207F5CE01_147)); }
	inline U24ArrayTypeU3D64_t4078931961  get_U24fieldU2D79A213B796D2AD7A89C2071B0732B78207F5CE01_147() const { return ___U24fieldU2D79A213B796D2AD7A89C2071B0732B78207F5CE01_147; }
	inline U24ArrayTypeU3D64_t4078931961 * get_address_of_U24fieldU2D79A213B796D2AD7A89C2071B0732B78207F5CE01_147() { return &___U24fieldU2D79A213B796D2AD7A89C2071B0732B78207F5CE01_147; }
	inline void set_U24fieldU2D79A213B796D2AD7A89C2071B0732B78207F5CE01_147(U24ArrayTypeU3D64_t4078931961  value)
	{
		___U24fieldU2D79A213B796D2AD7A89C2071B0732B78207F5CE01_147 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DBE8E2513259482B6F307AC07F23F5D9FB4841EAA_148() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DBE8E2513259482B6F307AC07F23F5D9FB4841EAA_148)); }
	inline U24ArrayTypeU3D40_t1983424417  get_U24fieldU2DBE8E2513259482B6F307AC07F23F5D9FB4841EAA_148() const { return ___U24fieldU2DBE8E2513259482B6F307AC07F23F5D9FB4841EAA_148; }
	inline U24ArrayTypeU3D40_t1983424417 * get_address_of_U24fieldU2DBE8E2513259482B6F307AC07F23F5D9FB4841EAA_148() { return &___U24fieldU2DBE8E2513259482B6F307AC07F23F5D9FB4841EAA_148; }
	inline void set_U24fieldU2DBE8E2513259482B6F307AC07F23F5D9FB4841EAA_148(U24ArrayTypeU3D40_t1983424417  value)
	{
		___U24fieldU2DBE8E2513259482B6F307AC07F23F5D9FB4841EAA_148 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D083DE622A9A685DC50D8D5653CB388A41343C8EC_149() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D083DE622A9A685DC50D8D5653CB388A41343C8EC_149)); }
	inline U24ArrayTypeU3D32_t4145487141  get_U24fieldU2D083DE622A9A685DC50D8D5653CB388A41343C8EC_149() const { return ___U24fieldU2D083DE622A9A685DC50D8D5653CB388A41343C8EC_149; }
	inline U24ArrayTypeU3D32_t4145487141 * get_address_of_U24fieldU2D083DE622A9A685DC50D8D5653CB388A41343C8EC_149() { return &___U24fieldU2D083DE622A9A685DC50D8D5653CB388A41343C8EC_149; }
	inline void set_U24fieldU2D083DE622A9A685DC50D8D5653CB388A41343C8EC_149(U24ArrayTypeU3D32_t4145487141  value)
	{
		___U24fieldU2D083DE622A9A685DC50D8D5653CB388A41343C8EC_149 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D214F93D9222D60794CE1EA0A10389885C5CA9824_150() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D214F93D9222D60794CE1EA0A10389885C5CA9824_150)); }
	inline U24ArrayTypeU3D64_t4078931961  get_U24fieldU2D214F93D9222D60794CE1EA0A10389885C5CA9824_150() const { return ___U24fieldU2D214F93D9222D60794CE1EA0A10389885C5CA9824_150; }
	inline U24ArrayTypeU3D64_t4078931961 * get_address_of_U24fieldU2D214F93D9222D60794CE1EA0A10389885C5CA9824_150() { return &___U24fieldU2D214F93D9222D60794CE1EA0A10389885C5CA9824_150; }
	inline void set_U24fieldU2D214F93D9222D60794CE1EA0A10389885C5CA9824_150(U24ArrayTypeU3D64_t4078931961  value)
	{
		___U24fieldU2D214F93D9222D60794CE1EA0A10389885C5CA9824_150 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D095B351FE2104237B032546280C98C9804D331C5_151() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D095B351FE2104237B032546280C98C9804D331C5_151)); }
	inline U24ArrayTypeU3D48_t3687564119  get_U24fieldU2D095B351FE2104237B032546280C98C9804D331C5_151() const { return ___U24fieldU2D095B351FE2104237B032546280C98C9804D331C5_151; }
	inline U24ArrayTypeU3D48_t3687564119 * get_address_of_U24fieldU2D095B351FE2104237B032546280C98C9804D331C5_151() { return &___U24fieldU2D095B351FE2104237B032546280C98C9804D331C5_151; }
	inline void set_U24fieldU2D095B351FE2104237B032546280C98C9804D331C5_151(U24ArrayTypeU3D48_t3687564119  value)
	{
		___U24fieldU2D095B351FE2104237B032546280C98C9804D331C5_151 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DCE39574ADC95015A9B5E0475EB65EE8F32353FD4_152() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DCE39574ADC95015A9B5E0475EB65EE8F32353FD4_152)); }
	inline U24ArrayTypeU3D96_t881291273  get_U24fieldU2DCE39574ADC95015A9B5E0475EB65EE8F32353FD4_152() const { return ___U24fieldU2DCE39574ADC95015A9B5E0475EB65EE8F32353FD4_152; }
	inline U24ArrayTypeU3D96_t881291273 * get_address_of_U24fieldU2DCE39574ADC95015A9B5E0475EB65EE8F32353FD4_152() { return &___U24fieldU2DCE39574ADC95015A9B5E0475EB65EE8F32353FD4_152; }
	inline void set_U24fieldU2DCE39574ADC95015A9B5E0475EB65EE8F32353FD4_152(U24ArrayTypeU3D96_t881291273  value)
	{
		___U24fieldU2DCE39574ADC95015A9B5E0475EB65EE8F32353FD4_152 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DEF2680899DD1FCA444AE6B8B3B0CC6C7DD40894B_153() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DEF2680899DD1FCA444AE6B8B3B0CC6C7DD40894B_153)); }
	inline U24ArrayTypeU3D68_t2740126159  get_U24fieldU2DEF2680899DD1FCA444AE6B8B3B0CC6C7DD40894B_153() const { return ___U24fieldU2DEF2680899DD1FCA444AE6B8B3B0CC6C7DD40894B_153; }
	inline U24ArrayTypeU3D68_t2740126159 * get_address_of_U24fieldU2DEF2680899DD1FCA444AE6B8B3B0CC6C7DD40894B_153() { return &___U24fieldU2DEF2680899DD1FCA444AE6B8B3B0CC6C7DD40894B_153; }
	inline void set_U24fieldU2DEF2680899DD1FCA444AE6B8B3B0CC6C7DD40894B_153(U24ArrayTypeU3D68_t2740126159  value)
	{
		___U24fieldU2DEF2680899DD1FCA444AE6B8B3B0CC6C7DD40894B_153 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D96ADC3934F8492C827987DFEE3B4DD4EF1738E78_154() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D96ADC3934F8492C827987DFEE3B4DD4EF1738E78_154)); }
	inline U24ArrayTypeU3D68_t2740126159  get_U24fieldU2D96ADC3934F8492C827987DFEE3B4DD4EF1738E78_154() const { return ___U24fieldU2D96ADC3934F8492C827987DFEE3B4DD4EF1738E78_154; }
	inline U24ArrayTypeU3D68_t2740126159 * get_address_of_U24fieldU2D96ADC3934F8492C827987DFEE3B4DD4EF1738E78_154() { return &___U24fieldU2D96ADC3934F8492C827987DFEE3B4DD4EF1738E78_154; }
	inline void set_U24fieldU2D96ADC3934F8492C827987DFEE3B4DD4EF1738E78_154(U24ArrayTypeU3D68_t2740126159  value)
	{
		___U24fieldU2D96ADC3934F8492C827987DFEE3B4DD4EF1738E78_154 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DCBF7F8D48ACC5EB9048CB8F1FCFAF93B33516965_155() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DCBF7F8D48ACC5EB9048CB8F1FCFAF93B33516965_155)); }
	inline U24ArrayTypeU3D24_t1113226219  get_U24fieldU2DCBF7F8D48ACC5EB9048CB8F1FCFAF93B33516965_155() const { return ___U24fieldU2DCBF7F8D48ACC5EB9048CB8F1FCFAF93B33516965_155; }
	inline U24ArrayTypeU3D24_t1113226219 * get_address_of_U24fieldU2DCBF7F8D48ACC5EB9048CB8F1FCFAF93B33516965_155() { return &___U24fieldU2DCBF7F8D48ACC5EB9048CB8F1FCFAF93B33516965_155; }
	inline void set_U24fieldU2DCBF7F8D48ACC5EB9048CB8F1FCFAF93B33516965_155(U24ArrayTypeU3D24_t1113226219  value)
	{
		___U24fieldU2DCBF7F8D48ACC5EB9048CB8F1FCFAF93B33516965_155 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DBCE617693C33CE2C76FE00F449CA910E4C6E117E_156() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DBCE617693C33CE2C76FE00F449CA910E4C6E117E_156)); }
	inline U24ArrayTypeU3D24_t1113226219  get_U24fieldU2DBCE617693C33CE2C76FE00F449CA910E4C6E117E_156() const { return ___U24fieldU2DBCE617693C33CE2C76FE00F449CA910E4C6E117E_156; }
	inline U24ArrayTypeU3D24_t1113226219 * get_address_of_U24fieldU2DBCE617693C33CE2C76FE00F449CA910E4C6E117E_156() { return &___U24fieldU2DBCE617693C33CE2C76FE00F449CA910E4C6E117E_156; }
	inline void set_U24fieldU2DBCE617693C33CE2C76FE00F449CA910E4C6E117E_156(U24ArrayTypeU3D24_t1113226219  value)
	{
		___U24fieldU2DBCE617693C33CE2C76FE00F449CA910E4C6E117E_156 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DE0219F11D9EECC43022AA94967780250AC270D4B_157() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DE0219F11D9EECC43022AA94967780250AC270D4B_157)); }
	inline U24ArrayTypeU3D12_t37505501  get_U24fieldU2DE0219F11D9EECC43022AA94967780250AC270D4B_157() const { return ___U24fieldU2DE0219F11D9EECC43022AA94967780250AC270D4B_157; }
	inline U24ArrayTypeU3D12_t37505501 * get_address_of_U24fieldU2DE0219F11D9EECC43022AA94967780250AC270D4B_157() { return &___U24fieldU2DE0219F11D9EECC43022AA94967780250AC270D4B_157; }
	inline void set_U24fieldU2DE0219F11D9EECC43022AA94967780250AC270D4B_157(U24ArrayTypeU3D12_t37505501  value)
	{
		___U24fieldU2DE0219F11D9EECC43022AA94967780250AC270D4B_157 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D5E7F55149EC07597C76E6E3CD9F62274214061E6_158() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D5E7F55149EC07597C76E6E3CD9F62274214061E6_158)); }
	inline U24ArrayTypeU3D40_t1983424417  get_U24fieldU2D5E7F55149EC07597C76E6E3CD9F62274214061E6_158() const { return ___U24fieldU2D5E7F55149EC07597C76E6E3CD9F62274214061E6_158; }
	inline U24ArrayTypeU3D40_t1983424417 * get_address_of_U24fieldU2D5E7F55149EC07597C76E6E3CD9F62274214061E6_158() { return &___U24fieldU2D5E7F55149EC07597C76E6E3CD9F62274214061E6_158; }
	inline void set_U24fieldU2D5E7F55149EC07597C76E6E3CD9F62274214061E6_158(U24ArrayTypeU3D40_t1983424417  value)
	{
		___U24fieldU2D5E7F55149EC07597C76E6E3CD9F62274214061E6_158 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D0D0825E62E82DBEBFAD598623694129548E24C9C_159() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D0D0825E62E82DBEBFAD598623694129548E24C9C_159)); }
	inline U24ArrayTypeU3D72_t1634360518  get_U24fieldU2D0D0825E62E82DBEBFAD598623694129548E24C9C_159() const { return ___U24fieldU2D0D0825E62E82DBEBFAD598623694129548E24C9C_159; }
	inline U24ArrayTypeU3D72_t1634360518 * get_address_of_U24fieldU2D0D0825E62E82DBEBFAD598623694129548E24C9C_159() { return &___U24fieldU2D0D0825E62E82DBEBFAD598623694129548E24C9C_159; }
	inline void set_U24fieldU2D0D0825E62E82DBEBFAD598623694129548E24C9C_159(U24ArrayTypeU3D72_t1634360518  value)
	{
		___U24fieldU2D0D0825E62E82DBEBFAD598623694129548E24C9C_159 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D17E54FCA28103DF892BBB946DDEED4B061D7F5C7_160() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D17E54FCA28103DF892BBB946DDEED4B061D7F5C7_160)); }
	inline U24ArrayTypeU3D24_t1113226219  get_U24fieldU2D17E54FCA28103DF892BBB946DDEED4B061D7F5C7_160() const { return ___U24fieldU2D17E54FCA28103DF892BBB946DDEED4B061D7F5C7_160; }
	inline U24ArrayTypeU3D24_t1113226219 * get_address_of_U24fieldU2D17E54FCA28103DF892BBB946DDEED4B061D7F5C7_160() { return &___U24fieldU2D17E54FCA28103DF892BBB946DDEED4B061D7F5C7_160; }
	inline void set_U24fieldU2D17E54FCA28103DF892BBB946DDEED4B061D7F5C7_160(U24ArrayTypeU3D24_t1113226219  value)
	{
		___U24fieldU2D17E54FCA28103DF892BBB946DDEED4B061D7F5C7_160 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DFE5567E8D769550852182CDF69D74BB16DFF8E29_161() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DFE5567E8D769550852182CDF69D74BB16DFF8E29_161)); }
	inline U24ArrayTypeU3D16_t2289608776  get_U24fieldU2DFE5567E8D769550852182CDF69D74BB16DFF8E29_161() const { return ___U24fieldU2DFE5567E8D769550852182CDF69D74BB16DFF8E29_161; }
	inline U24ArrayTypeU3D16_t2289608776 * get_address_of_U24fieldU2DFE5567E8D769550852182CDF69D74BB16DFF8E29_161() { return &___U24fieldU2DFE5567E8D769550852182CDF69D74BB16DFF8E29_161; }
	inline void set_U24fieldU2DFE5567E8D769550852182CDF69D74BB16DFF8E29_161(U24ArrayTypeU3D16_t2289608776  value)
	{
		___U24fieldU2DFE5567E8D769550852182CDF69D74BB16DFF8E29_161 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DF584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF_162() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DF584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF_162)); }
	inline U24ArrayTypeU3D68_t2740126159  get_U24fieldU2DF584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF_162() const { return ___U24fieldU2DF584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF_162; }
	inline U24ArrayTypeU3D68_t2740126159 * get_address_of_U24fieldU2DF584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF_162() { return &___U24fieldU2DF584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF_162; }
	inline void set_U24fieldU2DF584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF_162(U24ArrayTypeU3D68_t2740126159  value)
	{
		___U24fieldU2DF584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF_162 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D1FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_163() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D1FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_163)); }
	inline U24ArrayTypeU3D76_t315395832  get_U24fieldU2D1FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_163() const { return ___U24fieldU2D1FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_163; }
	inline U24ArrayTypeU3D76_t315395832 * get_address_of_U24fieldU2D1FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_163() { return &___U24fieldU2D1FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_163; }
	inline void set_U24fieldU2D1FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_163(U24ArrayTypeU3D76_t315395832  value)
	{
		___U24fieldU2D1FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_163 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DA474A0BEC4E2CE8491839502AE85F6EA8504C6BD_164() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DA474A0BEC4E2CE8491839502AE85F6EA8504C6BD_164)); }
	inline U24ArrayTypeU3D6144_t3211423560  get_U24fieldU2DA474A0BEC4E2CE8491839502AE85F6EA8504C6BD_164() const { return ___U24fieldU2DA474A0BEC4E2CE8491839502AE85F6EA8504C6BD_164; }
	inline U24ArrayTypeU3D6144_t3211423560 * get_address_of_U24fieldU2DA474A0BEC4E2CE8491839502AE85F6EA8504C6BD_164() { return &___U24fieldU2DA474A0BEC4E2CE8491839502AE85F6EA8504C6BD_164; }
	inline void set_U24fieldU2DA474A0BEC4E2CE8491839502AE85F6EA8504C6BD_164(U24ArrayTypeU3D6144_t3211423560  value)
	{
		___U24fieldU2DA474A0BEC4E2CE8491839502AE85F6EA8504C6BD_164 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D1B180C6E41F096D53222F5E8EF558B78182CA401_165() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D1B180C6E41F096D53222F5E8EF558B78182CA401_165)); }
	inline U24ArrayTypeU3D384_t2781497336  get_U24fieldU2D1B180C6E41F096D53222F5E8EF558B78182CA401_165() const { return ___U24fieldU2D1B180C6E41F096D53222F5E8EF558B78182CA401_165; }
	inline U24ArrayTypeU3D384_t2781497336 * get_address_of_U24fieldU2D1B180C6E41F096D53222F5E8EF558B78182CA401_165() { return &___U24fieldU2D1B180C6E41F096D53222F5E8EF558B78182CA401_165; }
	inline void set_U24fieldU2D1B180C6E41F096D53222F5E8EF558B78182CA401_165(U24ArrayTypeU3D384_t2781497336  value)
	{
		___U24fieldU2D1B180C6E41F096D53222F5E8EF558B78182CA401_165 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D8ED8F61DAA454B49CD5059AE4486C59174324E9E_166() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D8ED8F61DAA454B49CD5059AE4486C59174324E9E_166)); }
	inline U24ArrayTypeU3D124_t2081813596  get_U24fieldU2D8ED8F61DAA454B49CD5059AE4486C59174324E9E_166() const { return ___U24fieldU2D8ED8F61DAA454B49CD5059AE4486C59174324E9E_166; }
	inline U24ArrayTypeU3D124_t2081813596 * get_address_of_U24fieldU2D8ED8F61DAA454B49CD5059AE4486C59174324E9E_166() { return &___U24fieldU2D8ED8F61DAA454B49CD5059AE4486C59174324E9E_166; }
	inline void set_U24fieldU2D8ED8F61DAA454B49CD5059AE4486C59174324E9E_166(U24ArrayTypeU3D124_t2081813596  value)
	{
		___U24fieldU2D8ED8F61DAA454B49CD5059AE4486C59174324E9E_166 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DDACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A_167() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DDACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A_167)); }
	inline U24ArrayTypeU3D124_t2081813596  get_U24fieldU2DDACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A_167() const { return ___U24fieldU2DDACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A_167; }
	inline U24ArrayTypeU3D124_t2081813596 * get_address_of_U24fieldU2DDACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A_167() { return &___U24fieldU2DDACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A_167; }
	inline void set_U24fieldU2DDACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A_167(U24ArrayTypeU3D124_t2081813596  value)
	{
		___U24fieldU2DDACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A_167 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DD068832E6B13A623916709C1E0E25ADCBE7B455F_168() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DD068832E6B13A623916709C1E0E25ADCBE7B455F_168)); }
	inline U24ArrayTypeU3D120_t3304934490  get_U24fieldU2DD068832E6B13A623916709C1E0E25ADCBE7B455F_168() const { return ___U24fieldU2DD068832E6B13A623916709C1E0E25ADCBE7B455F_168; }
	inline U24ArrayTypeU3D120_t3304934490 * get_address_of_U24fieldU2DD068832E6B13A623916709C1E0E25ADCBE7B455F_168() { return &___U24fieldU2DD068832E6B13A623916709C1E0E25ADCBE7B455F_168; }
	inline void set_U24fieldU2DD068832E6B13A623916709C1E0E25ADCBE7B455F_168(U24ArrayTypeU3D120_t3304934490  value)
	{
		___U24fieldU2DD068832E6B13A623916709C1E0E25ADCBE7B455F_168 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D79D521E6E3E55103005E9CC3FA43B3174FAF090F_169() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D79D521E6E3E55103005E9CC3FA43B3174FAF090F_169)); }
	inline U24ArrayTypeU3D120_t3304934490  get_U24fieldU2D79D521E6E3E55103005E9CC3FA43B3174FAF090F_169() const { return ___U24fieldU2D79D521E6E3E55103005E9CC3FA43B3174FAF090F_169; }
	inline U24ArrayTypeU3D120_t3304934490 * get_address_of_U24fieldU2D79D521E6E3E55103005E9CC3FA43B3174FAF090F_169() { return &___U24fieldU2D79D521E6E3E55103005E9CC3FA43B3174FAF090F_169; }
	inline void set_U24fieldU2D79D521E6E3E55103005E9CC3FA43B3174FAF090F_169(U24ArrayTypeU3D120_t3304934490  value)
	{
		___U24fieldU2D79D521E6E3E55103005E9CC3FA43B3174FAF090F_169 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DEB6F545AEF284339D25594F900E7A395212460EB_170() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DEB6F545AEF284339D25594F900E7A395212460EB_170)); }
	inline U24ArrayTypeU3D1152_t3632293663  get_U24fieldU2DEB6F545AEF284339D25594F900E7A395212460EB_170() const { return ___U24fieldU2DEB6F545AEF284339D25594F900E7A395212460EB_170; }
	inline U24ArrayTypeU3D1152_t3632293663 * get_address_of_U24fieldU2DEB6F545AEF284339D25594F900E7A395212460EB_170() { return &___U24fieldU2DEB6F545AEF284339D25594F900E7A395212460EB_170; }
	inline void set_U24fieldU2DEB6F545AEF284339D25594F900E7A395212460EB_170(U24ArrayTypeU3D1152_t3632293663  value)
	{
		___U24fieldU2DEB6F545AEF284339D25594F900E7A395212460EB_170 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D850D4DC092689E1F0D8A70B6281848B27DEC0014_171() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D850D4DC092689E1F0D8A70B6281848B27DEC0014_171)); }
	inline U24ArrayTypeU3D120_t3304934490  get_U24fieldU2D850D4DC092689E1F0D8A70B6281848B27DEC0014_171() const { return ___U24fieldU2D850D4DC092689E1F0D8A70B6281848B27DEC0014_171; }
	inline U24ArrayTypeU3D120_t3304934490 * get_address_of_U24fieldU2D850D4DC092689E1F0D8A70B6281848B27DEC0014_171() { return &___U24fieldU2D850D4DC092689E1F0D8A70B6281848B27DEC0014_171; }
	inline void set_U24fieldU2D850D4DC092689E1F0D8A70B6281848B27DEC0014_171(U24ArrayTypeU3D120_t3304934490  value)
	{
		___U24fieldU2D850D4DC092689E1F0D8A70B6281848B27DEC0014_171 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D67C0E784F3654B008A81E2988588CF4956CCF3DA_172() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D67C0E784F3654B008A81E2988588CF4956CCF3DA_172)); }
	inline U24ArrayTypeU3D116_t541649237  get_U24fieldU2D67C0E784F3654B008A81E2988588CF4956CCF3DA_172() const { return ___U24fieldU2D67C0E784F3654B008A81E2988588CF4956CCF3DA_172; }
	inline U24ArrayTypeU3D116_t541649237 * get_address_of_U24fieldU2D67C0E784F3654B008A81E2988588CF4956CCF3DA_172() { return &___U24fieldU2D67C0E784F3654B008A81E2988588CF4956CCF3DA_172; }
	inline void set_U24fieldU2D67C0E784F3654B008A81E2988588CF4956CCF3DA_172(U24ArrayTypeU3D116_t541649237  value)
	{
		___U24fieldU2D67C0E784F3654B008A81E2988588CF4956CCF3DA_172 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D8457F44B035C9073EE2D1F132D0A8AF5631DCDC8_173() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D8457F44B035C9073EE2D1F132D0A8AF5631DCDC8_173)); }
	inline U24ArrayTypeU3D76_t315395832  get_U24fieldU2D8457F44B035C9073EE2D1F132D0A8AF5631DCDC8_173() const { return ___U24fieldU2D8457F44B035C9073EE2D1F132D0A8AF5631DCDC8_173; }
	inline U24ArrayTypeU3D76_t315395832 * get_address_of_U24fieldU2D8457F44B035C9073EE2D1F132D0A8AF5631DCDC8_173() { return &___U24fieldU2D8457F44B035C9073EE2D1F132D0A8AF5631DCDC8_173; }
	inline void set_U24fieldU2D8457F44B035C9073EE2D1F132D0A8AF5631DCDC8_173(U24ArrayTypeU3D76_t315395832  value)
	{
		___U24fieldU2D8457F44B035C9073EE2D1F132D0A8AF5631DCDC8_173 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_174() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_174)); }
	inline U24ArrayTypeU3D20_t2271475897  get_U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_174() const { return ___U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_174; }
	inline U24ArrayTypeU3D20_t2271475897 * get_address_of_U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_174() { return &___U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_174; }
	inline void set_U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_174(U24ArrayTypeU3D20_t2271475897  value)
	{
		___U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_174 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D3544182260B8A15D332367E48C7530FC0E901FD3_175() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D3544182260B8A15D332367E48C7530FC0E901FD3_175)); }
	inline U24ArrayTypeU3D512_t2137770118  get_U24fieldU2D3544182260B8A15D332367E48C7530FC0E901FD3_175() const { return ___U24fieldU2D3544182260B8A15D332367E48C7530FC0E901FD3_175; }
	inline U24ArrayTypeU3D512_t2137770118 * get_address_of_U24fieldU2D3544182260B8A15D332367E48C7530FC0E901FD3_175() { return &___U24fieldU2D3544182260B8A15D332367E48C7530FC0E901FD3_175; }
	inline void set_U24fieldU2D3544182260B8A15D332367E48C7530FC0E901FD3_175(U24ArrayTypeU3D512_t2137770118  value)
	{
		___U24fieldU2D3544182260B8A15D332367E48C7530FC0E901FD3_175 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D6A316789EED01119DE92841832701A40AB0CABD6_176() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D6A316789EED01119DE92841832701A40AB0CABD6_176)); }
	inline U24ArrayTypeU3D256_t1189136629  get_U24fieldU2D6A316789EED01119DE92841832701A40AB0CABD6_176() const { return ___U24fieldU2D6A316789EED01119DE92841832701A40AB0CABD6_176; }
	inline U24ArrayTypeU3D256_t1189136629 * get_address_of_U24fieldU2D6A316789EED01119DE92841832701A40AB0CABD6_176() { return &___U24fieldU2D6A316789EED01119DE92841832701A40AB0CABD6_176; }
	inline void set_U24fieldU2D6A316789EED01119DE92841832701A40AB0CABD6_176(U24ArrayTypeU3D256_t1189136629  value)
	{
		___U24fieldU2D6A316789EED01119DE92841832701A40AB0CABD6_176 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D2E868D9F2085DF93F11F58DE61C05E0D8A8F4A71_177() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D2E868D9F2085DF93F11F58DE61C05E0D8A8F4A71_177)); }
	inline U24ArrayTypeU3D116_t541649237  get_U24fieldU2D2E868D9F2085DF93F11F58DE61C05E0D8A8F4A71_177() const { return ___U24fieldU2D2E868D9F2085DF93F11F58DE61C05E0D8A8F4A71_177; }
	inline U24ArrayTypeU3D116_t541649237 * get_address_of_U24fieldU2D2E868D9F2085DF93F11F58DE61C05E0D8A8F4A71_177() { return &___U24fieldU2D2E868D9F2085DF93F11F58DE61C05E0D8A8F4A71_177; }
	inline void set_U24fieldU2D2E868D9F2085DF93F11F58DE61C05E0D8A8F4A71_177(U24ArrayTypeU3D116_t541649237  value)
	{
		___U24fieldU2D2E868D9F2085DF93F11F58DE61C05E0D8A8F4A71_177 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D5581A70566F03554D8048EDBFC6E6B399AF9BCB1_178() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields, ___U24fieldU2D5581A70566F03554D8048EDBFC6E6B399AF9BCB1_178)); }
	inline U24ArrayTypeU3D120_t3304934490  get_U24fieldU2D5581A70566F03554D8048EDBFC6E6B399AF9BCB1_178() const { return ___U24fieldU2D5581A70566F03554D8048EDBFC6E6B399AF9BCB1_178; }
	inline U24ArrayTypeU3D120_t3304934490 * get_address_of_U24fieldU2D5581A70566F03554D8048EDBFC6E6B399AF9BCB1_178() { return &___U24fieldU2D5581A70566F03554D8048EDBFC6E6B399AF9BCB1_178; }
	inline void set_U24fieldU2D5581A70566F03554D8048EDBFC6E6B399AF9BCB1_178(U24ArrayTypeU3D120_t3304934490  value)
	{
		___U24fieldU2D5581A70566F03554D8048EDBFC6E6B399AF9BCB1_178 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1698564603_H
#ifndef ABSTRACTF2MPOINT_T686578333_H
#define ABSTRACTF2MPOINT_T686578333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.EC.AbstractF2mPoint
struct  AbstractF2mPoint_t686578333  : public ECPointBase_t3813182729
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTF2MPOINT_T686578333_H
#ifndef PUSHBACKSTREAM_T3188469560_H
#define PUSHBACKSTREAM_T3188469560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.IO.PushbackStream
struct  PushbackStream_t3188469560  : public FilterStream_t2090595676
{
public:
	// System.Int32 Org.BouncyCastle.Utilities.IO.PushbackStream::buf
	int32_t ___buf_2;

public:
	inline static int32_t get_offset_of_buf_2() { return static_cast<int32_t>(offsetof(PushbackStream_t3188469560, ___buf_2)); }
	inline int32_t get_buf_2() const { return ___buf_2; }
	inline int32_t* get_address_of_buf_2() { return &___buf_2; }
	inline void set_buf_2(int32_t value)
	{
		___buf_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUSHBACKSTREAM_T3188469560_H
#ifndef SECT571K1CURVE_T4030854218_H
#define SECT571K1CURVE_T4030854218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.EC.Custom.Sec.SecT571K1Curve
struct  SecT571K1Curve_t4030854218  : public AbstractF2mCurve_t2458057526
{
public:
	// Org.BouncyCastle.Math.EC.Custom.Sec.SecT571K1Point Org.BouncyCastle.Math.EC.Custom.Sec.SecT571K1Curve::m_infinity
	SecT571K1Point_t2027530234 * ___m_infinity_9;

public:
	inline static int32_t get_offset_of_m_infinity_9() { return static_cast<int32_t>(offsetof(SecT571K1Curve_t4030854218, ___m_infinity_9)); }
	inline SecT571K1Point_t2027530234 * get_m_infinity_9() const { return ___m_infinity_9; }
	inline SecT571K1Point_t2027530234 ** get_address_of_m_infinity_9() { return &___m_infinity_9; }
	inline void set_m_infinity_9(SecT571K1Point_t2027530234 * value)
	{
		___m_infinity_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_infinity_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECT571K1CURVE_T4030854218_H
#ifndef MEMOABLERESETEXCEPTION_T4126312793_H
#define MEMOABLERESETEXCEPTION_T4126312793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.MemoableResetException
struct  MemoableResetException_t4126312793  : public InvalidCastException_t1985870089
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMOABLERESETEXCEPTION_T4126312793_H
#ifndef CERTIFICATEPARSINGEXCEPTION_T3881977575_H
#define CERTIFICATEPARSINGEXCEPTION_T3881977575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Security.Certificates.CertificateParsingException
struct  CertificateParsingException_t3881977575  : public CertificateException_t2093635285
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CERTIFICATEPARSINGEXCEPTION_T3881977575_H
#ifndef DATETIME_T2321164601_H
#define DATETIME_T2321164601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t2321164601 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t4050686296  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t2321164601, ___ticks_0)); }
	inline TimeSpan_t4050686296  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t4050686296 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t4050686296  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t2321164601, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t2321164601_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t2321164601  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t2321164601  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1002137567* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1002137567* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1002137567* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1002137567* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1002137567* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1002137567* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1002137567* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t1719863841* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t1719863841* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t2321164601_StaticFields, ___MaxValue_2)); }
	inline DateTime_t2321164601  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t2321164601 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t2321164601  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t2321164601_StaticFields, ___MinValue_3)); }
	inline DateTime_t2321164601  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t2321164601 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t2321164601  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t2321164601_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1002137567* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1002137567** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1002137567* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t2321164601_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1002137567* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1002137567** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1002137567* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t2321164601_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1002137567* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1002137567** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1002137567* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t2321164601_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1002137567* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1002137567** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1002137567* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t2321164601_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1002137567* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1002137567** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1002137567* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t2321164601_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1002137567* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1002137567** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1002137567* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t2321164601_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1002137567* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1002137567** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1002137567* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t2321164601_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t1719863841* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t1719863841** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t1719863841* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t2321164601_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t1719863841* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t1719863841** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t1719863841* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t2321164601_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t2321164601_StaticFields, ___last_now_14)); }
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
#endif // DATETIME_T2321164601_H
#ifndef INVALIDPARAMETEREXCEPTION_T1480006094_H
#define INVALIDPARAMETEREXCEPTION_T1480006094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Security.InvalidParameterException
struct  InvalidParameterException_t1480006094  : public KeyException_t4264436802
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDPARAMETEREXCEPTION_T1480006094_H
#ifndef INVALIDKEYEXCEPTION_T2933029866_H
#define INVALIDKEYEXCEPTION_T2933029866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Security.InvalidKeyException
struct  InvalidKeyException_t2933029866  : public KeyException_t4264436802
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDKEYEXCEPTION_T2933029866_H
#ifndef SECT571R1POINT_T1182715444_H
#define SECT571R1POINT_T1182715444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.EC.Custom.Sec.SecT571R1Point
struct  SecT571R1Point_t1182715444  : public AbstractF2mPoint_t686578333
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECT571R1POINT_T1182715444_H
#ifndef SECT571K1POINT_T2027530234_H
#define SECT571K1POINT_T2027530234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.EC.Custom.Sec.SecT571K1Point
struct  SecT571K1Point_t2027530234  : public AbstractF2mPoint_t686578333
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECT571K1POINT_T2027530234_H
#ifndef DATETIMEUTILITIES_T2634797124_H
#define DATETIMEUTILITIES_T2634797124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Date.DateTimeUtilities
struct  DateTimeUtilities_t2634797124  : public RuntimeObject
{
public:

public:
};

struct DateTimeUtilities_t2634797124_StaticFields
{
public:
	// System.DateTime Org.BouncyCastle.Utilities.Date.DateTimeUtilities::UnixEpoch
	DateTime_t2321164601  ___UnixEpoch_0;

public:
	inline static int32_t get_offset_of_UnixEpoch_0() { return static_cast<int32_t>(offsetof(DateTimeUtilities_t2634797124_StaticFields, ___UnixEpoch_0)); }
	inline DateTime_t2321164601  get_UnixEpoch_0() const { return ___UnixEpoch_0; }
	inline DateTime_t2321164601 * get_address_of_UnixEpoch_0() { return &___UnixEpoch_0; }
	inline void set_UnixEpoch_0(DateTime_t2321164601  value)
	{
		___UnixEpoch_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEUTILITIES_T2634797124_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2200 = { sizeof (SecT571K1Curve_t4030854218), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2200[1] = 
{
	SecT571K1Curve_t4030854218::get_offset_of_m_infinity_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2201 = { sizeof (SecT571K1Point_t2027530234), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2202 = { sizeof (SecT571R1Curve_t2377237098), -1, sizeof(SecT571R1Curve_t2377237098_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2202[3] = 
{
	SecT571R1Curve_t2377237098::get_offset_of_m_infinity_9(),
	SecT571R1Curve_t2377237098_StaticFields::get_offset_of_SecT571R1_B_10(),
	SecT571R1Curve_t2377237098_StaticFields::get_offset_of_SecT571R1_B_SQRT_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2203 = { sizeof (SecT571R1Point_t1182715444), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2204 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2205 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2206 = { sizeof (GlvTypeBEndomorphism_t1435272081), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2206[3] = 
{
	GlvTypeBEndomorphism_t1435272081::get_offset_of_m_curve_0(),
	GlvTypeBEndomorphism_t1435272081::get_offset_of_m_parameters_1(),
	GlvTypeBEndomorphism_t1435272081::get_offset_of_m_pointMap_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2207 = { sizeof (GlvTypeBParameters_t4145277670), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2207[7] = 
{
	GlvTypeBParameters_t4145277670::get_offset_of_m_beta_0(),
	GlvTypeBParameters_t4145277670::get_offset_of_m_lambda_1(),
	GlvTypeBParameters_t4145277670::get_offset_of_m_v1_2(),
	GlvTypeBParameters_t4145277670::get_offset_of_m_v2_3(),
	GlvTypeBParameters_t4145277670::get_offset_of_m_g1_4(),
	GlvTypeBParameters_t4145277670::get_offset_of_m_g2_5(),
	GlvTypeBParameters_t4145277670::get_offset_of_m_bits_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2208 = { sizeof (AbstractECMultiplier_t3481008734), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2209 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2210 = { sizeof (FixedPointCombMultiplier_t1264162032), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2211 = { sizeof (FixedPointPreCompInfo_t2924576709), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2211[2] = 
{
	FixedPointPreCompInfo_t2924576709::get_offset_of_m_preComp_0(),
	FixedPointPreCompInfo_t2924576709::get_offset_of_m_width_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2212 = { sizeof (FixedPointUtilities_t1606525610), -1, sizeof(FixedPointUtilities_t1606525610_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2212[1] = 
{
	FixedPointUtilities_t1606525610_StaticFields::get_offset_of_PRECOMP_NAME_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2213 = { sizeof (GlvMultiplier_t2514843099), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2213[2] = 
{
	GlvMultiplier_t2514843099::get_offset_of_curve_0(),
	GlvMultiplier_t2514843099::get_offset_of_glvEndomorphism_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2214 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2215 = { sizeof (WNafL2RMultiplier_t3323258795), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2216 = { sizeof (WNafPreCompInfo_t1051308630), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2216[3] = 
{
	WNafPreCompInfo_t1051308630::get_offset_of_m_preComp_0(),
	WNafPreCompInfo_t1051308630::get_offset_of_m_preCompNeg_1(),
	WNafPreCompInfo_t1051308630::get_offset_of_m_twice_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2217 = { sizeof (WNafUtilities_t1281464128), -1, sizeof(WNafUtilities_t1281464128_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2217[5] = 
{
	WNafUtilities_t1281464128_StaticFields::get_offset_of_PRECOMP_NAME_0(),
	WNafUtilities_t1281464128_StaticFields::get_offset_of_DEFAULT_WINDOW_SIZE_CUTOFFS_1(),
	WNafUtilities_t1281464128_StaticFields::get_offset_of_EMPTY_BYTES_2(),
	WNafUtilities_t1281464128_StaticFields::get_offset_of_EMPTY_INTS_3(),
	WNafUtilities_t1281464128_StaticFields::get_offset_of_EMPTY_POINTS_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2218 = { sizeof (WTauNafMultiplier_t73358994), -1, sizeof(WTauNafMultiplier_t73358994_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2218[1] = 
{
	WTauNafMultiplier_t73358994_StaticFields::get_offset_of_PRECOMP_NAME_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2219 = { sizeof (WTauNafPreCompInfo_t1588627001), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2219[1] = 
{
	WTauNafPreCompInfo_t1588627001::get_offset_of_m_preComp_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2220 = { sizeof (FiniteFields_t2170135078), -1, sizeof(FiniteFields_t2170135078_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2220[2] = 
{
	FiniteFields_t2170135078_StaticFields::get_offset_of_GF_2_0(),
	FiniteFields_t2170135078_StaticFields::get_offset_of_GF_3_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2221 = { sizeof (GF2Polynomial_t308023256), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2221[1] = 
{
	GF2Polynomial_t308023256::get_offset_of_exponents_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2222 = { sizeof (GenericPolynomialExtensionField_t4197029887), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2222[2] = 
{
	GenericPolynomialExtensionField_t4197029887::get_offset_of_subfield_0(),
	GenericPolynomialExtensionField_t4197029887::get_offset_of_minimalPolynomial_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2223 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2224 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2225 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2226 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2227 = { sizeof (PrimeField_t1819012201), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2227[1] = 
{
	PrimeField_t1819012201::get_offset_of_characteristic_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2228 = { sizeof (Interleave_t1689061622), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2229 = { sizeof (Mod_t1384582199), -1, sizeof(Mod_t1384582199_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2229[1] = 
{
	Mod_t1384582199_StaticFields::get_offset_of_RandomSource_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2230 = { sizeof (Nat_t3840610752), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2231 = { sizeof (Nat128_t1339270807), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2232 = { sizeof (Nat160_t1571466854), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2233 = { sizeof (Nat192_t2336480941), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2234 = { sizeof (Nat224_t1222151187), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2235 = { sizeof (Nat256_t3838535535), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2236 = { sizeof (Nat320_t1376605315), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2237 = { sizeof (Nat384_t2154386974), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2238 = { sizeof (Nat448_t1551068302), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2239 = { sizeof (Nat512_t825407916), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2240 = { sizeof (Nat576_t290428460), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2241 = { sizeof (DigestUtilities_t348511742), -1, sizeof(DigestUtilities_t348511742_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2241[2] = 
{
	DigestUtilities_t348511742_StaticFields::get_offset_of_algorithms_0(),
	DigestUtilities_t348511742_StaticFields::get_offset_of_oids_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2242 = { sizeof (DigestAlgorithm_t1305324616)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2242[29] = 
{
	DigestAlgorithm_t1305324616::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2243 = { sizeof (GeneralSecurityException_t1453638351), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2244 = { sizeof (InvalidKeyException_t2933029866), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2245 = { sizeof (InvalidParameterException_t1480006094), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2246 = { sizeof (KeyException_t4264436802), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2247 = { sizeof (MacUtilities_t2928012953), -1, sizeof(MacUtilities_t2928012953_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2247[1] = 
{
	MacUtilities_t2928012953_StaticFields::get_offset_of_algorithms_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2248 = { sizeof (PublicKeyFactory_t3701280238), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2249 = { sizeof (SecureRandom_t1090558902), -1, sizeof(SecureRandom_t1090558902_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2249[4] = 
{
	SecureRandom_t1090558902_StaticFields::get_offset_of_counter_3(),
	SecureRandom_t1090558902_StaticFields::get_offset_of_master_4(),
	SecureRandom_t1090558902::get_offset_of_generator_5(),
	SecureRandom_t1090558902_StaticFields::get_offset_of_DoubleScale_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2250 = { sizeof (SecurityUtilityException_t2113723784), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2251 = { sizeof (SignerUtilities_t3629792166), -1, sizeof(SignerUtilities_t3629792166_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2251[2] = 
{
	SignerUtilities_t3629792166_StaticFields::get_offset_of_algorithms_0(),
	SignerUtilities_t3629792166_StaticFields::get_offset_of_oids_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2252 = { sizeof (CertificateException_t2093635285), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2253 = { sizeof (CertificateParsingException_t3881977575), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2254 = { sizeof (Arrays_t929923650), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2255 = { sizeof (BigIntegers_t3326020171), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2256 = { sizeof (Enums_t1897671248), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2257 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2258 = { sizeof (Integers_t883066998), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2259 = { sizeof (MemoableResetException_t4126312793), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2260 = { sizeof (Platform_t2826890647), -1, sizeof(Platform_t2826890647_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2260[2] = 
{
	Platform_t2826890647_StaticFields::get_offset_of_InvariantCompareInfo_0(),
	Platform_t2826890647_StaticFields::get_offset_of_NewLine_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2261 = { sizeof (Strings_t26489371), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2262 = { sizeof (Times_t795609876), -1, sizeof(Times_t795609876_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2262[1] = 
{
	Times_t795609876_StaticFields::get_offset_of_NanosecondsPerTick_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2263 = { sizeof (CollectionUtilities_t2538981481), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2264 = { sizeof (EnumerableProxy_t3706571488), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2264[1] = 
{
	EnumerableProxy_t3706571488::get_offset_of_inner_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2265 = { sizeof (DateTimeUtilities_t2634797124), -1, sizeof(DateTimeUtilities_t2634797124_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2265[1] = 
{
	DateTimeUtilities_t2634797124_StaticFields::get_offset_of_UnixEpoch_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2266 = { sizeof (Base64_t2556288384), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2267 = { sizeof (Hex_t2479858326), -1, sizeof(Hex_t2479858326_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2267[1] = 
{
	Hex_t2479858326_StaticFields::get_offset_of_encoder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2268 = { sizeof (HexEncoder_t3090843519), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2268[2] = 
{
	HexEncoder_t3090843519::get_offset_of_encodingTable_0(),
	HexEncoder_t3090843519::get_offset_of_decodingTable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2269 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2270 = { sizeof (BaseInputStream_t2580678134), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2270[1] = 
{
	BaseInputStream_t2580678134::get_offset_of_closed_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2271 = { sizeof (BaseOutputStream_t1893271902), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2271[1] = 
{
	BaseOutputStream_t1893271902::get_offset_of_closed_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2272 = { sizeof (FilterStream_t2090595676), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2272[1] = 
{
	FilterStream_t2090595676::get_offset_of_s_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2273 = { sizeof (PushbackStream_t3188469560), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2273[1] = 
{
	PushbackStream_t3188469560::get_offset_of_buf_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2274 = { sizeof (Streams_t2238297570), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2275 = { sizeof (TeeInputStream_t3074304943), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2275[2] = 
{
	TeeInputStream_t3074304943::get_offset_of_input_2(),
	TeeInputStream_t3074304943::get_offset_of_tee_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2276 = { sizeof (Adler32_t1236584662), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2277 = { sizeof (Deflate_t512577057), -1, sizeof(Deflate_t512577057_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2277[59] = 
{
	Deflate_t512577057_StaticFields::get_offset_of_config_table_0(),
	Deflate_t512577057_StaticFields::get_offset_of_z_errmsg_1(),
	Deflate_t512577057::get_offset_of_strm_2(),
	Deflate_t512577057::get_offset_of_status_3(),
	Deflate_t512577057::get_offset_of_pending_buf_4(),
	Deflate_t512577057::get_offset_of_pending_buf_size_5(),
	Deflate_t512577057::get_offset_of_pending_out_6(),
	Deflate_t512577057::get_offset_of_pending_7(),
	Deflate_t512577057::get_offset_of_noheader_8(),
	Deflate_t512577057::get_offset_of_data_type_9(),
	Deflate_t512577057::get_offset_of_method_10(),
	Deflate_t512577057::get_offset_of_last_flush_11(),
	Deflate_t512577057::get_offset_of_w_size_12(),
	Deflate_t512577057::get_offset_of_w_bits_13(),
	Deflate_t512577057::get_offset_of_w_mask_14(),
	Deflate_t512577057::get_offset_of_window_15(),
	Deflate_t512577057::get_offset_of_window_size_16(),
	Deflate_t512577057::get_offset_of_prev_17(),
	Deflate_t512577057::get_offset_of_head_18(),
	Deflate_t512577057::get_offset_of_ins_h_19(),
	Deflate_t512577057::get_offset_of_hash_size_20(),
	Deflate_t512577057::get_offset_of_hash_bits_21(),
	Deflate_t512577057::get_offset_of_hash_mask_22(),
	Deflate_t512577057::get_offset_of_hash_shift_23(),
	Deflate_t512577057::get_offset_of_block_start_24(),
	Deflate_t512577057::get_offset_of_match_length_25(),
	Deflate_t512577057::get_offset_of_prev_match_26(),
	Deflate_t512577057::get_offset_of_match_available_27(),
	Deflate_t512577057::get_offset_of_strstart_28(),
	Deflate_t512577057::get_offset_of_match_start_29(),
	Deflate_t512577057::get_offset_of_lookahead_30(),
	Deflate_t512577057::get_offset_of_prev_length_31(),
	Deflate_t512577057::get_offset_of_max_chain_length_32(),
	Deflate_t512577057::get_offset_of_max_lazy_match_33(),
	Deflate_t512577057::get_offset_of_level_34(),
	Deflate_t512577057::get_offset_of_strategy_35(),
	Deflate_t512577057::get_offset_of_good_match_36(),
	Deflate_t512577057::get_offset_of_nice_match_37(),
	Deflate_t512577057::get_offset_of_dyn_ltree_38(),
	Deflate_t512577057::get_offset_of_dyn_dtree_39(),
	Deflate_t512577057::get_offset_of_bl_tree_40(),
	Deflate_t512577057::get_offset_of_l_desc_41(),
	Deflate_t512577057::get_offset_of_d_desc_42(),
	Deflate_t512577057::get_offset_of_bl_desc_43(),
	Deflate_t512577057::get_offset_of_bl_count_44(),
	Deflate_t512577057::get_offset_of_heap_45(),
	Deflate_t512577057::get_offset_of_heap_len_46(),
	Deflate_t512577057::get_offset_of_heap_max_47(),
	Deflate_t512577057::get_offset_of_depth_48(),
	Deflate_t512577057::get_offset_of_l_buf_49(),
	Deflate_t512577057::get_offset_of_lit_bufsize_50(),
	Deflate_t512577057::get_offset_of_last_lit_51(),
	Deflate_t512577057::get_offset_of_d_buf_52(),
	Deflate_t512577057::get_offset_of_opt_len_53(),
	Deflate_t512577057::get_offset_of_static_len_54(),
	Deflate_t512577057::get_offset_of_matches_55(),
	Deflate_t512577057::get_offset_of_last_eob_len_56(),
	Deflate_t512577057::get_offset_of_bi_buf_57(),
	Deflate_t512577057::get_offset_of_bi_valid_58(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2278 = { sizeof (Config_t3191347320), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2278[5] = 
{
	Config_t3191347320::get_offset_of_good_length_0(),
	Config_t3191347320::get_offset_of_max_lazy_1(),
	Config_t3191347320::get_offset_of_nice_length_2(),
	Config_t3191347320::get_offset_of_max_chain_3(),
	Config_t3191347320::get_offset_of_func_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2279 = { sizeof (InfBlocks_t745228855), -1, sizeof(InfBlocks_t745228855_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2279[21] = 
{
	InfBlocks_t745228855_StaticFields::get_offset_of_inflate_mask_0(),
	InfBlocks_t745228855_StaticFields::get_offset_of_border_1(),
	InfBlocks_t745228855::get_offset_of_mode_2(),
	InfBlocks_t745228855::get_offset_of_left_3(),
	InfBlocks_t745228855::get_offset_of_table_4(),
	InfBlocks_t745228855::get_offset_of_index_5(),
	InfBlocks_t745228855::get_offset_of_blens_6(),
	InfBlocks_t745228855::get_offset_of_bb_7(),
	InfBlocks_t745228855::get_offset_of_tb_8(),
	InfBlocks_t745228855::get_offset_of_codes_9(),
	InfBlocks_t745228855::get_offset_of_last_10(),
	InfBlocks_t745228855::get_offset_of_bitk_11(),
	InfBlocks_t745228855::get_offset_of_bitb_12(),
	InfBlocks_t745228855::get_offset_of_hufts_13(),
	InfBlocks_t745228855::get_offset_of_window_14(),
	InfBlocks_t745228855::get_offset_of_end_15(),
	InfBlocks_t745228855::get_offset_of_read_16(),
	InfBlocks_t745228855::get_offset_of_write_17(),
	InfBlocks_t745228855::get_offset_of_checkfn_18(),
	InfBlocks_t745228855::get_offset_of_check_19(),
	InfBlocks_t745228855::get_offset_of_inftree_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2280 = { sizeof (InfCodes_t3614527456), -1, sizeof(InfCodes_t3614527456_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2280[15] = 
{
	InfCodes_t3614527456_StaticFields::get_offset_of_inflate_mask_0(),
	InfCodes_t3614527456::get_offset_of_mode_1(),
	InfCodes_t3614527456::get_offset_of_len_2(),
	InfCodes_t3614527456::get_offset_of_tree_3(),
	InfCodes_t3614527456::get_offset_of_tree_index_4(),
	InfCodes_t3614527456::get_offset_of_need_5(),
	InfCodes_t3614527456::get_offset_of_lit_6(),
	InfCodes_t3614527456::get_offset_of_get_7(),
	InfCodes_t3614527456::get_offset_of_dist_8(),
	InfCodes_t3614527456::get_offset_of_lbits_9(),
	InfCodes_t3614527456::get_offset_of_dbits_10(),
	InfCodes_t3614527456::get_offset_of_ltree_11(),
	InfCodes_t3614527456::get_offset_of_ltree_index_12(),
	InfCodes_t3614527456::get_offset_of_dtree_13(),
	InfCodes_t3614527456::get_offset_of_dtree_index_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2281 = { sizeof (InfTree_t2955799804), -1, sizeof(InfTree_t2955799804_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2281[12] = 
{
	InfTree_t2955799804_StaticFields::get_offset_of_fixed_tl_0(),
	InfTree_t2955799804_StaticFields::get_offset_of_fixed_td_1(),
	InfTree_t2955799804_StaticFields::get_offset_of_cplens_2(),
	InfTree_t2955799804_StaticFields::get_offset_of_cplext_3(),
	InfTree_t2955799804_StaticFields::get_offset_of_cpdist_4(),
	InfTree_t2955799804_StaticFields::get_offset_of_cpdext_5(),
	InfTree_t2955799804::get_offset_of_hn_6(),
	InfTree_t2955799804::get_offset_of_v_7(),
	InfTree_t2955799804::get_offset_of_c_8(),
	InfTree_t2955799804::get_offset_of_r_9(),
	InfTree_t2955799804::get_offset_of_u_10(),
	InfTree_t2955799804::get_offset_of_x_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2282 = { sizeof (Inflate_t3588891804), -1, sizeof(Inflate_t3588891804_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2282[9] = 
{
	Inflate_t3588891804::get_offset_of_mode_0(),
	Inflate_t3588891804::get_offset_of_method_1(),
	Inflate_t3588891804::get_offset_of_was_2(),
	Inflate_t3588891804::get_offset_of_need_3(),
	Inflate_t3588891804::get_offset_of_marker_4(),
	Inflate_t3588891804::get_offset_of_nowrap_5(),
	Inflate_t3588891804::get_offset_of_wbits_6(),
	Inflate_t3588891804::get_offset_of_blocks_7(),
	Inflate_t3588891804_StaticFields::get_offset_of_mark_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2283 = { sizeof (StaticTree_t1221227804), -1, sizeof(StaticTree_t1221227804_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2283[10] = 
{
	StaticTree_t1221227804_StaticFields::get_offset_of_static_ltree_0(),
	StaticTree_t1221227804_StaticFields::get_offset_of_static_dtree_1(),
	StaticTree_t1221227804_StaticFields::get_offset_of_static_l_desc_2(),
	StaticTree_t1221227804_StaticFields::get_offset_of_static_d_desc_3(),
	StaticTree_t1221227804_StaticFields::get_offset_of_static_bl_desc_4(),
	StaticTree_t1221227804::get_offset_of_static_tree_5(),
	StaticTree_t1221227804::get_offset_of_extra_bits_6(),
	StaticTree_t1221227804::get_offset_of_extra_base_7(),
	StaticTree_t1221227804::get_offset_of_elems_8(),
	StaticTree_t1221227804::get_offset_of_max_length_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2284 = { sizeof (Tree_t1635919820), -1, sizeof(Tree_t1635919820_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2284[11] = 
{
	Tree_t1635919820_StaticFields::get_offset_of_extra_lbits_0(),
	Tree_t1635919820_StaticFields::get_offset_of_extra_dbits_1(),
	Tree_t1635919820_StaticFields::get_offset_of_extra_blbits_2(),
	Tree_t1635919820_StaticFields::get_offset_of_bl_order_3(),
	Tree_t1635919820_StaticFields::get_offset_of__dist_code_4(),
	Tree_t1635919820_StaticFields::get_offset_of__length_code_5(),
	Tree_t1635919820_StaticFields::get_offset_of_base_length_6(),
	Tree_t1635919820_StaticFields::get_offset_of_base_dist_7(),
	Tree_t1635919820::get_offset_of_dyn_tree_8(),
	Tree_t1635919820::get_offset_of_max_code_9(),
	Tree_t1635919820::get_offset_of_stat_desc_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2285 = { sizeof (ZOutputStream_t3907303743), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2285[7] = 
{
	ZOutputStream_t3907303743::get_offset_of_z_1(),
	ZOutputStream_t3907303743::get_offset_of_flushLevel_2(),
	ZOutputStream_t3907303743::get_offset_of_buf_3(),
	ZOutputStream_t3907303743::get_offset_of_buf1_4(),
	ZOutputStream_t3907303743::get_offset_of_compress_5(),
	ZOutputStream_t3907303743::get_offset_of_output_6(),
	ZOutputStream_t3907303743::get_offset_of_closed_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2286 = { sizeof (ZStream_t370990292), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2286[14] = 
{
	ZStream_t370990292::get_offset_of_next_in_0(),
	ZStream_t370990292::get_offset_of_next_in_index_1(),
	ZStream_t370990292::get_offset_of_avail_in_2(),
	ZStream_t370990292::get_offset_of_total_in_3(),
	ZStream_t370990292::get_offset_of_next_out_4(),
	ZStream_t370990292::get_offset_of_next_out_index_5(),
	ZStream_t370990292::get_offset_of_avail_out_6(),
	ZStream_t370990292::get_offset_of_total_out_7(),
	ZStream_t370990292::get_offset_of_msg_8(),
	ZStream_t370990292::get_offset_of_dstate_9(),
	ZStream_t370990292::get_offset_of_istate_10(),
	ZStream_t370990292::get_offset_of_data_type_11(),
	ZStream_t370990292::get_offset_of_adler_12(),
	ZStream_t370990292::get_offset_of__adler_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2287 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2288 = { sizeof (PemParser_t1463922308), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2288[4] = 
{
	PemParser_t1463922308::get_offset_of__header1_0(),
	PemParser_t1463922308::get_offset_of__header2_1(),
	PemParser_t1463922308::get_offset_of__footer1_2(),
	PemParser_t1463922308::get_offset_of__footer2_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2289 = { sizeof (X509Certificate_t1325241131), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2289[5] = 
{
	X509Certificate_t1325241131::get_offset_of_c_0(),
	X509Certificate_t1325241131::get_offset_of_basicConstraints_1(),
	X509Certificate_t1325241131::get_offset_of_keyUsage_2(),
	X509Certificate_t1325241131::get_offset_of_hashValueSet_3(),
	X509Certificate_t1325241131::get_offset_of_hashValue_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2290 = { sizeof (X509CertificateParser_t2496535579), -1, sizeof(X509CertificateParser_t2496535579_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2290[4] = 
{
	X509CertificateParser_t2496535579_StaticFields::get_offset_of_PemCertParser_0(),
	X509CertificateParser_t2496535579::get_offset_of_sData_1(),
	X509CertificateParser_t2496535579::get_offset_of_sDataObjectCount_2(),
	X509CertificateParser_t2496535579::get_offset_of_currentStream_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2291 = { sizeof (X509ExtensionBase_t4169967820), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2292 = { sizeof (X509ExtensionUtilities_t3871847780), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2293 = { sizeof (U3CPrivateImplementationDetailsU3E_t1698564603), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2293[179] = 
{
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D59F5BD34B6C013DEACC784F69C67E95150033A84_0(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DCC5B8B6FA17DA57B26C3ACA4DA8B2A477C609D63_1(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D90A0542282A011472F94E97CEAE59F8B3B1A3291_2(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DD2C5BAE967587C6F3D9F2C4551911E0575A1101F_3(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D433175D38B13FFE177FDD661A309F1B528B3F6E2_4(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DA0FABB8173BA247898A9FA267D0CE05500B667A0_5(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D467C6758F235D3193618192A64129CBB602C9067_6(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D1648F737A4CFFDA4E6C83A3D742109BF9DBC2446_7(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DC079C42AC966756C902EC38C4D7989F3C20D3625_8(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D840B3A53AAF3595FDF3313D46FFD246A7EA6E89E_9(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_10(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D0C4110BC17D746F018F47B49E0EB0D6590F69939_11(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DF83C7B497B14628C1D0DB3FA2FD89BD5C0D5138A_12(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DB68637EF60D499620B99E336C59E4865FFC4C5D7_13(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D1AFB455399A50580CF1039188ABA6BE82F309543_14(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DAE843E1C1136C908565A6D4E04E8564B69465B3B_15(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DB1108EE6609DB783B2EC606B3BFDD544A7D4C2B3_16(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D14F6FAB1B4065EBADBBA4A3661ADE689FF444EDD_17(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DB718C95C87C6B65DFA29D58A10442CEC9EBBDF1F_18(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D124B1C35B19149213F8F7D40AA8E0ABA15DD70EC_19(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D4FFC8339E09825A68B861995F9C660EB11DBF13D_20(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DC105B70BED997DB5D36E1D2E84C1EFCB445A428C_21(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DDC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_22(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DB4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_23(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D62BAB0F245E66C3EB982CF5A7015F0A7C3382283_24(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D04B9E6B1364BBA4125AE2866E09C57C9E8CD6DA6_25(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D3D6EB645BC212077C1B37A3A32CA2A62F7B39018_26(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D821D1E62CD072AE9EC73D238C7DE19C5C5F3A7D8_27(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D64354464C9074B5BB4369689AAA131961CD1EF19_28(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D3F653EBF39CFCB2FD7FF335DC96E82F3CDFDF0C7_29(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D6D7292FF64ED402BBFFF5E7534C0980BEBF0EEB1_30(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DFC9EEBC457831129D4AF4FF84333B481F4BED60E_31(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D4C44594E2C603D85EC6195B1A7A6C5876CBB58E2_32(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DD3BA31FA2132E3CD69D057D38B3E3ACF0A6C8A13_33(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DCC53D7FE00E6AC1385AF09521629229467BCCC86_34(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D2BA9E4B370D477F8C7FE286262D7ADC69CAF290E_35(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D1005BA20F99323E3F050E781BB81D1A4479AB037_36(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DE17D18DCD8392C99D47823F8CB9F43896D115FB8_37(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D7CFF7A50C8F8981091791CDB210243E8F465BC80_38(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D3A38ADC6BCFB84DE23160C1E50212DACBCD25A11_39(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DD9642D3FF9879EC5C4BB28AE7001CEE3D43956AB_40(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D8C7FEE53346CDB1B119FCAD8D605F476400A03CE_41(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DEEDBCB52C67688DE5F5FD9209E8A25BC786A2430_42(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DF8AB5CA414AD9084F3E8B8D887217E6DFC32C62C_43(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D641D0D9E9CE6DDAC3F12536417A6A64C8DDD4776_44(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D55BCCC431843040DD1427CB495B2FD469C4D4D20_45(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D3C3A13E15C81AD114ECBA973C706DCD985BF18D6_46(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D07B35CC0531C638EA1581B73756B3A11272C1D91_47(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D31D8729F7377B44017C0A2395A582C9CA4163277_48(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D1397D288BDA63B8D4B5F30CFFB9FF5A965AA7A1C_49(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DEE0F12B14397A7DF4588BEA8AA9B022754F4DA1B_50(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DD7231C06B1D6276752359120E26EAE206A7F74F9_51(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DAA7973F07CDE1E6AA10B6970B0072D05F38F0AB2_52(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D2FCBB2FC4E672ED0607DD7827BA69B7E6C9EB6BD_53(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D6277CE8FE3A9156D3455749B453AC88191D3C6D6_54(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D9FC36EB698A900B5D2EF5E3B1ABA28CB6A217738_55(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D714A94F3805E05CA6C00F9A46489427ABEB25D60_56(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DF128744756EEB38C3EAD4A7E8536EC5D3FA430FF_57(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D5AB421AC76CECB8E84025172585CB97DE8BECD65_58(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D6BBD3A22A185224EE0EBAB0784455E9E245376B7_59(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D7B22115C45C6AD570AFBAB744FA1058DF97CDBC1_60(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D460C77B94933562DE2E0E5B4FD72B431DFAEB5B6_61(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DCE2B1D9E3E16F8A9B2ADFD296846C7C91AB27B86_62(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DA471AF3330805980C7041F978D3CFF8838054E14_63(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DC0F40F05DBD4B7C8F77A1A55F3C5B9525FB5E124_64(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DAD4075598ACA56EC39C5E575771BBB0CFBCE24EE_65(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D9AEFA90D8E67EBAE069B4B6C071A8E867B108B31_66(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DA5981DCAA364B0DC9E0385D893A31C2022364075_67(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D4435D44E1091E6624ED6B6E4FA3C9A8C5C996098_68(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DF5AEFD834ADB72DAA720930140E9ECC087FCF389_69(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D0D4B2069E2C1085C37B7AD86C9D0C59E4CED879B_70(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D1A43D7FEEED03520E11C4A8996F149705D99C6BB_71(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D4B411385A36907D25D8088AE39AB6AAFA46B0642_72(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D29F7A0217340B5682E7DDF98ADAD952E2A360E65_73(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D68178023585F1F782745740AA583CDC778DB31B3_74(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DE53E13AFB95C5C24DF50875117B7DDCE12937B2E_75(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D6F39BC29A161CAE5394821B1FDE160EB5229AE71_76(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DD99006A6CB3C75EEC7BB6ABEA6AA9C413D59F015_77(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D50AA269217736906D8469B9191F420DC6B13A36A_78(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DC3EE470FCBE9ED2CB4A9FE76CA81B438F69F0C62_79(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DB997A0149EBF3CDD050D72AE1784E375A413B128_80(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D9597ECF10274DDDBFD265D4F66B70BAA9EAA83BD_81(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D9FAE1C8A9B3D68DAE1EEE8A0946441D7078E2021_82(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DAD19F20EECB80A2079F504CB928A26FDE10E8C47_83(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DD129FBC67222EA7D73E90E51E4DCFCA8C7497D67_84(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DB3A60EC240A886DA5AFD600CC73AE12514A881E8_85(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D512F92F4041B190727A330E2A6CC39E5D9EA06E6_86(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DAD200F5E49BD2E5038FA7BD229E2B4429ECA8CDE_87(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D03D9F1A66AED1E059B1609A09E435B708A88C8B8_88(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D26853A2C322BBAD5BBD886C60A32BBBCFE847F00_89(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DD31171F7904EB3247DD4834E43B47B1E2DCB97AC_90(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D5EF7F909EFC731E811E21521A43A80FB5AC0B229_91(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D372040F482ABADADF58EF0C31A6A8BE386AF8A50_92(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D7878E9E7126B2BDF365429C31842AE1903CD2DFF_93(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D882888781BC0DC17021FB4F11BA783038C83B313_94(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DF3BF6F581A24C57F2FFF3D2FD3290FD102BB8566_95(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DC2FEEB3C521ADDD49A534A0876BA97FF5894476E_96(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DC991C784E7697AD0F91A159F03727BF4621A5AB8_97(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DD860D5BD327368D1D4174620FE2E4A91FE9AADEC_98(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DA696E1EE8632C559732B81052E4D2993B8783877_99(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D672385C1D6A6C84A1AC3588540B09C4AE3B87DDC_100(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D71F2B0A8153A60BA8F96A7159B5B92F4CCD7AFA7_101(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D42C3E89412F11AA94E57C09EFB4B2B415C1AAB58_102(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DC2D514B39C8DFA25365195A0759A5AE28D9F2A87_103(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D613CFAEE025A3AF3C6D13DEB22E298C1925C31B5_104(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DB5E8BA68953A5283AD953094F0F391FA4502A3FA_105(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D35E6464339FFAE0D3777B12A371F82D2D1F668CA_106(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D6DEB7F74818574642B0B824B9C08B366C962A360_107(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DBEFC5B901D2D4EE83CB9EB422EFE470C4BF76C6B_108(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D5D41C56232C500092E99AC044D3C5C442B1C834F_109(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DF63639527E877A2CBCB26FFD41D4A59470BFF8C8_110(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DA72FDF28F8C2336EEEF4D5913F57EECDA0A2D3F6_111(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DC4B266E68FA20D0D222D86ADAD31EBB55118CD21_112(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D6AE5F51BDA53455ED8257137D6E6FF2E5A7ECF16_113(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DC95356610D5583976B69017BED7048EB50121B90_114(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DA4313AAA146ACFCA88681B7BFC3D644005F3792B_115(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DCA1986CBA4E4F0DFA3BF6A654EF8A36E6077AD99_116(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D239B59488F1CE7EBE225785FDC22A8E3102A2E82_117(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D310EFB639F3C7677A2A82B54EEED1124ED69E9A3_118(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D428007959831954B0C2DCFAF9DD641D629B00DBF_119(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DFA5B1C8B2F287078ED719C15595DB729BDB85911_120(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D86B0F85AC13B58F88DEFFD8FD6EE095438B98F10_121(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DEAEB85AB6D40E0AB7CE0F65EF7EDF588A4DD81C9_122(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D6AAC0DB543C50F09E879F5B9F757319773564CE1_123(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DFAF70E8DF6971D7BABBCE9FEF83EDA1D5D095D05_124(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D068B2E17352B5B9FF693CAE83421B679E0342A5C_125(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DF2842E2653F6C5E55959B5EC5E07ABAFC0191FB0_126(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D35D6BB00E88996CA4CA6EEB743BE1820C59C5FAD_127(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D310FB325A3EA3EA527B55C2F08544D1CB92C19F4_128(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DC132685022CE310ACFD3A883E0A57033A482A959_129(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D27FED0F92A97C41B08D3115553BBDC064F417B6E_130(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D60A08108A32C9D3F263B2F42095A2694B7C1C1EF_131(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D32ECB35FF8400B4E56FF5E09588FB20DD60350E7_132(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DFB3C663794DD23F500825FF78450D198FE338938_133(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DC5515C87D04DC0D00C7984096F5E35B4944C1CB6_134(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D8330271815E046D369E0B1F7673D308739FDCC07_135(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DD6898715AE96BC2F82A7BBA76E2BFC7100E282C3_136(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DA53306F44DF494A019EA1487807B59CA336BF024_137(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D0982B1B45B764F2694ABC3DE57204AC898651429_138(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D126589410FF9CA1510B9950BF0E79E5BFD60000B_139(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DE647D32D165F3510693DF9787DC98E0A0B63C5C2_140(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D66961AC9ADD7C27DCD1BCA65FCD5C02B74B62F47_141(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D059FFAA29C8FCAA8FDB47FBFDE6FB74F5A43E5C0_142(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D1E3842329C5294DBE1DF588A77C68B35C6AF83BF_143(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D8C9BE3C02B5604C5CBF6A03E8032549588A6ED54_144(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DEBE167F7962841FA83451C9C1663416D69AA5294_145(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D2CABEB86D5B3D362822AF2E5D136A10A17AD85DA_146(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D79A213B796D2AD7A89C2071B0732B78207F5CE01_147(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DBE8E2513259482B6F307AC07F23F5D9FB4841EAA_148(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D083DE622A9A685DC50D8D5653CB388A41343C8EC_149(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D214F93D9222D60794CE1EA0A10389885C5CA9824_150(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D095B351FE2104237B032546280C98C9804D331C5_151(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DCE39574ADC95015A9B5E0475EB65EE8F32353FD4_152(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DEF2680899DD1FCA444AE6B8B3B0CC6C7DD40894B_153(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D96ADC3934F8492C827987DFEE3B4DD4EF1738E78_154(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DCBF7F8D48ACC5EB9048CB8F1FCFAF93B33516965_155(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DBCE617693C33CE2C76FE00F449CA910E4C6E117E_156(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DE0219F11D9EECC43022AA94967780250AC270D4B_157(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D5E7F55149EC07597C76E6E3CD9F62274214061E6_158(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D0D0825E62E82DBEBFAD598623694129548E24C9C_159(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D17E54FCA28103DF892BBB946DDEED4B061D7F5C7_160(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DFE5567E8D769550852182CDF69D74BB16DFF8E29_161(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DF584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF_162(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D1FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_163(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DA474A0BEC4E2CE8491839502AE85F6EA8504C6BD_164(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D1B180C6E41F096D53222F5E8EF558B78182CA401_165(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D8ED8F61DAA454B49CD5059AE4486C59174324E9E_166(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DDACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A_167(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DD068832E6B13A623916709C1E0E25ADCBE7B455F_168(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D79D521E6E3E55103005E9CC3FA43B3174FAF090F_169(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DEB6F545AEF284339D25594F900E7A395212460EB_170(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D850D4DC092689E1F0D8A70B6281848B27DEC0014_171(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D67C0E784F3654B008A81E2988588CF4956CCF3DA_172(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D8457F44B035C9073EE2D1F132D0A8AF5631DCDC8_173(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_174(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D3544182260B8A15D332367E48C7530FC0E901FD3_175(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D6A316789EED01119DE92841832701A40AB0CABD6_176(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D2E868D9F2085DF93F11F58DE61C05E0D8A8F4A71_177(),
	U3CPrivateImplementationDetailsU3E_t1698564603_StaticFields::get_offset_of_U24fieldU2D5581A70566F03554D8048EDBFC6E6B399AF9BCB1_178(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2294 = { sizeof (U24ArrayTypeU3D2048_t1779509621)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D2048_t1779509621 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2295 = { sizeof (U24ArrayTypeU3D56_t1391226737)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D56_t1391226737 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2296 = { sizeof (U24ArrayTypeU3D1024_t1496239055)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D1024_t1496239055 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2297 = { sizeof (U24ArrayTypeU3D32_t4145487141)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D32_t4145487141 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2298 = { sizeof (U24ArrayTypeU3D512_t2137770118)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D512_t2137770118 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2299 = { sizeof (U24ArrayTypeU3D640_t4120940673)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D640_t4120940673 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
