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

// System.Void
struct Void_t3918784447;
// System.Char[]
struct CharU5BU5D_t3282355116;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2296229153;
// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t3081648790;
// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate
struct UnityARDirectionalLightEstimate_t2833913632;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t805523525;
// System.IAsyncResult
struct IAsyncResult_t326317600;
// System.AsyncCallback
struct AsyncCallback_t1487541470;
// UnityEngine.XR.iOS.ARFaceAnchor
struct ARFaceAnchor_t482260493;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate
struct ARFrameUpdate_t4171011957;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded
struct ARAnchorAdded_t4129714184;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated
struct ARAnchorUpdated_t4006067148;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved
struct ARAnchorRemoved_t1440883333;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded
struct ARUserAnchorAdded_t3379712128;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated
struct ARUserAnchorUpdated_t659752546;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved
struct ARUserAnchorRemoved_t29952727;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded
struct ARFaceAnchorAdded_t1959465719;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated
struct ARFaceAnchorUpdated_t2915477063;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved
struct ARFaceAnchorRemoved_t1146351916;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed
struct ARSessionFailed_t45313083;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback
struct ARSessionCallback_t1260738157;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged
struct ARSessionTrackingChanged_t133365316;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate
struct internal_ARFrameUpdate_t2989169495;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged
struct internal_ARSessionTrackingChanged_t383942441;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded
struct internal_ARAnchorAdded_t2722114366;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated
struct internal_ARAnchorUpdated_t3428118642;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved
struct internal_ARAnchorRemoved_t4263028292;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded
struct internal_ARUserAnchorAdded_t3904973336;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated
struct internal_ARUserAnchorUpdated_t3147552389;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved
struct internal_ARUserAnchorRemoved_t49761082;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorAdded
struct internal_ARFaceAnchorAdded_t1072116815;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorUpdated
struct internal_ARFaceAnchorUpdated_t2364009384;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorRemoved
struct internal_ARFaceAnchorRemoved_t2288670911;

struct Vector3_t638544396 ;



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
#ifndef UNITYARLIGHTESTIMATE_T1503333468_H
#define UNITYARLIGHTESTIMATE_T1503333468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightEstimate
struct  UnityARLightEstimate_t1503333468 
{
public:
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientColorTemperature
	float ___ambientColorTemperature_1;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t1503333468, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t1503333468, ___ambientColorTemperature_1)); }
	inline float get_ambientColorTemperature_1() const { return ___ambientColorTemperature_1; }
	inline float* get_address_of_ambientColorTemperature_1() { return &___ambientColorTemperature_1; }
	inline void set_ambientColorTemperature_1(float value)
	{
		___ambientColorTemperature_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARLIGHTESTIMATE_T1503333468_H
#ifndef U24ARRAYTYPEU3D16_T2289608777_H
#define U24ARRAYTYPEU3D16_T2289608777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=16
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D16_t2289608777 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D16_t2289608777__padding[16];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D16_T2289608777_H
#ifndef U24ARRAYTYPEU3D1024_T1496239056_H
#define U24ARRAYTYPEU3D1024_T1496239056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=1024
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D1024_t1496239056 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D1024_t1496239056__padding[1024];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D1024_T1496239056_H
#ifndef U24ARRAYTYPEU3D100_T3215863175_H
#define U24ARRAYTYPEU3D100_T3215863175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=100
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D100_t3215863175 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D100_t3215863175__padding[100];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D100_T3215863175_H
#ifndef U24ARRAYTYPEU3D2052_T2372438108_H
#define U24ARRAYTYPEU3D2052_T2372438108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=2052
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D2052_t2372438108 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D2052_t2372438108__padding[2052];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D2052_T2372438108_H
#ifndef U24ARRAYTYPEU3D128_T2571979753_H
#define U24ARRAYTYPEU3D128_T2571979753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=128
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D128_t2571979753 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D128_t2571979753__padding[128];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D128_T2571979753_H
#ifndef U24ARRAYTYPEU3D64_T4078931962_H
#define U24ARRAYTYPEU3D64_T4078931962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=64
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D64_t4078931962 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D64_t4078931962__padding[64];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D64_T4078931962_H
#ifndef U24ARRAYTYPEU3D32_T4145487142_H
#define U24ARRAYTYPEU3D32_T4145487142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=32
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D32_t4145487142 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D32_t4145487142__padding[32];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D32_T4145487142_H
#ifndef U24ARRAYTYPEU3D12_T37505503_H
#define U24ARRAYTYPEU3D12_T37505503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=12
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D12_t37505503 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D12_t37505503__padding[12];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D12_T37505503_H
#ifndef U24ARRAYTYPEU3D116_T541649238_H
#define U24ARRAYTYPEU3D116_T541649238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=116
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D116_t541649238 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D116_t541649238__padding[116];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D116_T541649238_H
#ifndef U24ARRAYTYPEU3D20_T2271475898_H
#define U24ARRAYTYPEU3D20_T2271475898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=20
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D20_t2271475898 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D20_t2271475898__padding[20];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D20_T2271475898_H
#ifndef U24ARRAYTYPEU3D24_T1113226220_H
#define U24ARRAYTYPEU3D24_T1113226220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=24
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D24_t1113226220 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D24_t1113226220__padding[24];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D24_T1113226220_H
#ifndef ARSIZE_T1964593188_H
#define ARSIZE_T1964593188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARSize
struct  ARSize_t1964593188 
{
public:
	// System.Double UnityEngine.XR.iOS.ARSize::width
	double ___width_0;
	// System.Double UnityEngine.XR.iOS.ARSize::height
	double ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(ARSize_t1964593188, ___width_0)); }
	inline double get_width_0() const { return ___width_0; }
	inline double* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(double value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(ARSize_t1964593188, ___height_1)); }
	inline double get_height_1() const { return ___height_1; }
	inline double* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(double value)
	{
		___height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSIZE_T1964593188_H
#ifndef VECTOR4_T1620770207_H
#define VECTOR4_T1620770207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t1620770207 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t1620770207, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t1620770207, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t1620770207, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t1620770207, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t1620770207_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t1620770207  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t1620770207  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t1620770207  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t1620770207  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t1620770207_StaticFields, ___zeroVector_5)); }
	inline Vector4_t1620770207  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t1620770207 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t1620770207  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t1620770207_StaticFields, ___oneVector_6)); }
	inline Vector4_t1620770207  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t1620770207 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t1620770207  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t1620770207_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t1620770207  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t1620770207 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t1620770207  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t1620770207_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t1620770207  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t1620770207 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t1620770207  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T1620770207_H
#ifndef ARPOINT_T2706858983_H
#define ARPOINT_T2706858983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPoint
struct  ARPoint_t2706858983 
{
public:
	// System.Double UnityEngine.XR.iOS.ARPoint::x
	double ___x_0;
	// System.Double UnityEngine.XR.iOS.ARPoint::y
	double ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(ARPoint_t2706858983, ___x_0)); }
	inline double get_x_0() const { return ___x_0; }
	inline double* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(double value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(ARPoint_t2706858983, ___y_1)); }
	inline double get_y_1() const { return ___y_1; }
	inline double* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(double value)
	{
		___y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPOINT_T2706858983_H
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
#ifndef ARHITTESTRESULTTYPE_T2193108199_H
#define ARHITTESTRESULTTYPE_T2193108199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARHitTestResultType
struct  ARHitTestResultType_t2193108199 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARHitTestResultType::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARHitTestResultType_t2193108199, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARHITTESTRESULTTYPE_T2193108199_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1698564610_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1698564610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t1698564610  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-CE5AFBB0D2B25FA36AC018803534E8B5A9C5BBCA
	U24ArrayTypeU3D16_t2289608777  ___U24fieldU2DCE5AFBB0D2B25FA36AC018803534E8B5A9C5BBCA_0;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-E28E85E1285ABDE5719DBD609CD3FF7DB031B080
	U24ArrayTypeU3D16_t2289608777  ___U24fieldU2DE28E85E1285ABDE5719DBD609CD3FF7DB031B080_1;
	// <PrivateImplementationDetails>/$ArrayType=1024 <PrivateImplementationDetails>::$field-373B494F210C656134C5728D551D4C97B013EB33
	U24ArrayTypeU3D1024_t1496239056  ___U24fieldU2D373B494F210C656134C5728D551D4C97B013EB33_2;
	// <PrivateImplementationDetails>/$ArrayType=100 <PrivateImplementationDetails>::$field-F5B52AE718355A38E8190D5F947B52DFB427A1D7
	U24ArrayTypeU3D100_t3215863175  ___U24fieldU2DF5B52AE718355A38E8190D5F947B52DFB427A1D7_3;
	// <PrivateImplementationDetails>/$ArrayType=100 <PrivateImplementationDetails>::$field-81D5D8B4DDFA3FBB954AC400415044EB9F11E33E
	U24ArrayTypeU3D100_t3215863175  ___U24fieldU2D81D5D8B4DDFA3FBB954AC400415044EB9F11E33E_4;
	// <PrivateImplementationDetails>/$ArrayType=2052 <PrivateImplementationDetails>::$field-C0C10EC6AF4A4101F894B153E1CD493ADC01A67F
	U24ArrayTypeU3D2052_t2372438108  ___U24fieldU2DC0C10EC6AF4A4101F894B153E1CD493ADC01A67F_5;
	// <PrivateImplementationDetails>/$ArrayType=128 <PrivateImplementationDetails>::$field-6A94F0C3DCA389344CEDB99F171FA1E092E842E6
	U24ArrayTypeU3D128_t2571979753  ___U24fieldU2D6A94F0C3DCA389344CEDB99F171FA1E092E842E6_6;
	// <PrivateImplementationDetails>/$ArrayType=64 <PrivateImplementationDetails>::$field-8ED4E99B936B26A09EDFAB9E336CF75F4913B454
	U24ArrayTypeU3D64_t4078931962  ___U24fieldU2D8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-F5F598DAC7D3E479CD72BAAB99EE6617D8190398
	U24ArrayTypeU3D32_t4145487142  ___U24fieldU2DF5F598DAC7D3E479CD72BAAB99EE6617D8190398_8;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-2492606636F4A4666E0D617B51116A5A68539881
	U24ArrayTypeU3D32_t4145487142  ___U24fieldU2D2492606636F4A4666E0D617B51116A5A68539881_9;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-472655E8FD2B8B97DB5D188D273A20E8834C19BB
	U24ArrayTypeU3D12_t37505503  ___U24fieldU2D472655E8FD2B8B97DB5D188D273A20E8834C19BB_10;
	// <PrivateImplementationDetails>/$ArrayType=116 <PrivateImplementationDetails>::$field-D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF
	U24ArrayTypeU3D116_t541649238  ___U24fieldU2DD8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11;
	// <PrivateImplementationDetails>/$ArrayType=128 <PrivateImplementationDetails>::$field-FD5BE77C4372533D7C16BF67D58A3ABBE604ED81
	U24ArrayTypeU3D128_t2571979753  ___U24fieldU2DFD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-AE6B2897A8B88E297D61124152931A88D5D977F4
	U24ArrayTypeU3D20_t2271475898  ___U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_13;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6
	U24ArrayTypeU3D32_t4145487142  ___U24fieldU2D794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_14;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-BEEEBCEF33AF5B72B0463DF9185C0226DE5909AD
	U24ArrayTypeU3D24_t1113226220  ___U24fieldU2DBEEEBCEF33AF5B72B0463DF9185C0226DE5909AD_15;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-8E7629AD5AF686202B8CB7C014505C432FFE31E6
	U24ArrayTypeU3D24_t1113226220  ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_16;

public:
	inline static int32_t get_offset_of_U24fieldU2DCE5AFBB0D2B25FA36AC018803534E8B5A9C5BBCA_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields, ___U24fieldU2DCE5AFBB0D2B25FA36AC018803534E8B5A9C5BBCA_0)); }
	inline U24ArrayTypeU3D16_t2289608777  get_U24fieldU2DCE5AFBB0D2B25FA36AC018803534E8B5A9C5BBCA_0() const { return ___U24fieldU2DCE5AFBB0D2B25FA36AC018803534E8B5A9C5BBCA_0; }
	inline U24ArrayTypeU3D16_t2289608777 * get_address_of_U24fieldU2DCE5AFBB0D2B25FA36AC018803534E8B5A9C5BBCA_0() { return &___U24fieldU2DCE5AFBB0D2B25FA36AC018803534E8B5A9C5BBCA_0; }
	inline void set_U24fieldU2DCE5AFBB0D2B25FA36AC018803534E8B5A9C5BBCA_0(U24ArrayTypeU3D16_t2289608777  value)
	{
		___U24fieldU2DCE5AFBB0D2B25FA36AC018803534E8B5A9C5BBCA_0 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DE28E85E1285ABDE5719DBD609CD3FF7DB031B080_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields, ___U24fieldU2DE28E85E1285ABDE5719DBD609CD3FF7DB031B080_1)); }
	inline U24ArrayTypeU3D16_t2289608777  get_U24fieldU2DE28E85E1285ABDE5719DBD609CD3FF7DB031B080_1() const { return ___U24fieldU2DE28E85E1285ABDE5719DBD609CD3FF7DB031B080_1; }
	inline U24ArrayTypeU3D16_t2289608777 * get_address_of_U24fieldU2DE28E85E1285ABDE5719DBD609CD3FF7DB031B080_1() { return &___U24fieldU2DE28E85E1285ABDE5719DBD609CD3FF7DB031B080_1; }
	inline void set_U24fieldU2DE28E85E1285ABDE5719DBD609CD3FF7DB031B080_1(U24ArrayTypeU3D16_t2289608777  value)
	{
		___U24fieldU2DE28E85E1285ABDE5719DBD609CD3FF7DB031B080_1 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D373B494F210C656134C5728D551D4C97B013EB33_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields, ___U24fieldU2D373B494F210C656134C5728D551D4C97B013EB33_2)); }
	inline U24ArrayTypeU3D1024_t1496239056  get_U24fieldU2D373B494F210C656134C5728D551D4C97B013EB33_2() const { return ___U24fieldU2D373B494F210C656134C5728D551D4C97B013EB33_2; }
	inline U24ArrayTypeU3D1024_t1496239056 * get_address_of_U24fieldU2D373B494F210C656134C5728D551D4C97B013EB33_2() { return &___U24fieldU2D373B494F210C656134C5728D551D4C97B013EB33_2; }
	inline void set_U24fieldU2D373B494F210C656134C5728D551D4C97B013EB33_2(U24ArrayTypeU3D1024_t1496239056  value)
	{
		___U24fieldU2D373B494F210C656134C5728D551D4C97B013EB33_2 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DF5B52AE718355A38E8190D5F947B52DFB427A1D7_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields, ___U24fieldU2DF5B52AE718355A38E8190D5F947B52DFB427A1D7_3)); }
	inline U24ArrayTypeU3D100_t3215863175  get_U24fieldU2DF5B52AE718355A38E8190D5F947B52DFB427A1D7_3() const { return ___U24fieldU2DF5B52AE718355A38E8190D5F947B52DFB427A1D7_3; }
	inline U24ArrayTypeU3D100_t3215863175 * get_address_of_U24fieldU2DF5B52AE718355A38E8190D5F947B52DFB427A1D7_3() { return &___U24fieldU2DF5B52AE718355A38E8190D5F947B52DFB427A1D7_3; }
	inline void set_U24fieldU2DF5B52AE718355A38E8190D5F947B52DFB427A1D7_3(U24ArrayTypeU3D100_t3215863175  value)
	{
		___U24fieldU2DF5B52AE718355A38E8190D5F947B52DFB427A1D7_3 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D81D5D8B4DDFA3FBB954AC400415044EB9F11E33E_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields, ___U24fieldU2D81D5D8B4DDFA3FBB954AC400415044EB9F11E33E_4)); }
	inline U24ArrayTypeU3D100_t3215863175  get_U24fieldU2D81D5D8B4DDFA3FBB954AC400415044EB9F11E33E_4() const { return ___U24fieldU2D81D5D8B4DDFA3FBB954AC400415044EB9F11E33E_4; }
	inline U24ArrayTypeU3D100_t3215863175 * get_address_of_U24fieldU2D81D5D8B4DDFA3FBB954AC400415044EB9F11E33E_4() { return &___U24fieldU2D81D5D8B4DDFA3FBB954AC400415044EB9F11E33E_4; }
	inline void set_U24fieldU2D81D5D8B4DDFA3FBB954AC400415044EB9F11E33E_4(U24ArrayTypeU3D100_t3215863175  value)
	{
		___U24fieldU2D81D5D8B4DDFA3FBB954AC400415044EB9F11E33E_4 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DC0C10EC6AF4A4101F894B153E1CD493ADC01A67F_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields, ___U24fieldU2DC0C10EC6AF4A4101F894B153E1CD493ADC01A67F_5)); }
	inline U24ArrayTypeU3D2052_t2372438108  get_U24fieldU2DC0C10EC6AF4A4101F894B153E1CD493ADC01A67F_5() const { return ___U24fieldU2DC0C10EC6AF4A4101F894B153E1CD493ADC01A67F_5; }
	inline U24ArrayTypeU3D2052_t2372438108 * get_address_of_U24fieldU2DC0C10EC6AF4A4101F894B153E1CD493ADC01A67F_5() { return &___U24fieldU2DC0C10EC6AF4A4101F894B153E1CD493ADC01A67F_5; }
	inline void set_U24fieldU2DC0C10EC6AF4A4101F894B153E1CD493ADC01A67F_5(U24ArrayTypeU3D2052_t2372438108  value)
	{
		___U24fieldU2DC0C10EC6AF4A4101F894B153E1CD493ADC01A67F_5 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D6A94F0C3DCA389344CEDB99F171FA1E092E842E6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields, ___U24fieldU2D6A94F0C3DCA389344CEDB99F171FA1E092E842E6_6)); }
	inline U24ArrayTypeU3D128_t2571979753  get_U24fieldU2D6A94F0C3DCA389344CEDB99F171FA1E092E842E6_6() const { return ___U24fieldU2D6A94F0C3DCA389344CEDB99F171FA1E092E842E6_6; }
	inline U24ArrayTypeU3D128_t2571979753 * get_address_of_U24fieldU2D6A94F0C3DCA389344CEDB99F171FA1E092E842E6_6() { return &___U24fieldU2D6A94F0C3DCA389344CEDB99F171FA1E092E842E6_6; }
	inline void set_U24fieldU2D6A94F0C3DCA389344CEDB99F171FA1E092E842E6_6(U24ArrayTypeU3D128_t2571979753  value)
	{
		___U24fieldU2D6A94F0C3DCA389344CEDB99F171FA1E092E842E6_6 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields, ___U24fieldU2D8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7)); }
	inline U24ArrayTypeU3D64_t4078931962  get_U24fieldU2D8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7() const { return ___U24fieldU2D8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7; }
	inline U24ArrayTypeU3D64_t4078931962 * get_address_of_U24fieldU2D8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7() { return &___U24fieldU2D8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7; }
	inline void set_U24fieldU2D8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7(U24ArrayTypeU3D64_t4078931962  value)
	{
		___U24fieldU2D8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DF5F598DAC7D3E479CD72BAAB99EE6617D8190398_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields, ___U24fieldU2DF5F598DAC7D3E479CD72BAAB99EE6617D8190398_8)); }
	inline U24ArrayTypeU3D32_t4145487142  get_U24fieldU2DF5F598DAC7D3E479CD72BAAB99EE6617D8190398_8() const { return ___U24fieldU2DF5F598DAC7D3E479CD72BAAB99EE6617D8190398_8; }
	inline U24ArrayTypeU3D32_t4145487142 * get_address_of_U24fieldU2DF5F598DAC7D3E479CD72BAAB99EE6617D8190398_8() { return &___U24fieldU2DF5F598DAC7D3E479CD72BAAB99EE6617D8190398_8; }
	inline void set_U24fieldU2DF5F598DAC7D3E479CD72BAAB99EE6617D8190398_8(U24ArrayTypeU3D32_t4145487142  value)
	{
		___U24fieldU2DF5F598DAC7D3E479CD72BAAB99EE6617D8190398_8 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D2492606636F4A4666E0D617B51116A5A68539881_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields, ___U24fieldU2D2492606636F4A4666E0D617B51116A5A68539881_9)); }
	inline U24ArrayTypeU3D32_t4145487142  get_U24fieldU2D2492606636F4A4666E0D617B51116A5A68539881_9() const { return ___U24fieldU2D2492606636F4A4666E0D617B51116A5A68539881_9; }
	inline U24ArrayTypeU3D32_t4145487142 * get_address_of_U24fieldU2D2492606636F4A4666E0D617B51116A5A68539881_9() { return &___U24fieldU2D2492606636F4A4666E0D617B51116A5A68539881_9; }
	inline void set_U24fieldU2D2492606636F4A4666E0D617B51116A5A68539881_9(U24ArrayTypeU3D32_t4145487142  value)
	{
		___U24fieldU2D2492606636F4A4666E0D617B51116A5A68539881_9 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D472655E8FD2B8B97DB5D188D273A20E8834C19BB_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields, ___U24fieldU2D472655E8FD2B8B97DB5D188D273A20E8834C19BB_10)); }
	inline U24ArrayTypeU3D12_t37505503  get_U24fieldU2D472655E8FD2B8B97DB5D188D273A20E8834C19BB_10() const { return ___U24fieldU2D472655E8FD2B8B97DB5D188D273A20E8834C19BB_10; }
	inline U24ArrayTypeU3D12_t37505503 * get_address_of_U24fieldU2D472655E8FD2B8B97DB5D188D273A20E8834C19BB_10() { return &___U24fieldU2D472655E8FD2B8B97DB5D188D273A20E8834C19BB_10; }
	inline void set_U24fieldU2D472655E8FD2B8B97DB5D188D273A20E8834C19BB_10(U24ArrayTypeU3D12_t37505503  value)
	{
		___U24fieldU2D472655E8FD2B8B97DB5D188D273A20E8834C19BB_10 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DD8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields, ___U24fieldU2DD8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11)); }
	inline U24ArrayTypeU3D116_t541649238  get_U24fieldU2DD8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11() const { return ___U24fieldU2DD8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11; }
	inline U24ArrayTypeU3D116_t541649238 * get_address_of_U24fieldU2DD8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11() { return &___U24fieldU2DD8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11; }
	inline void set_U24fieldU2DD8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11(U24ArrayTypeU3D116_t541649238  value)
	{
		___U24fieldU2DD8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DFD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields, ___U24fieldU2DFD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12)); }
	inline U24ArrayTypeU3D128_t2571979753  get_U24fieldU2DFD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12() const { return ___U24fieldU2DFD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12; }
	inline U24ArrayTypeU3D128_t2571979753 * get_address_of_U24fieldU2DFD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12() { return &___U24fieldU2DFD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12; }
	inline void set_U24fieldU2DFD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12(U24ArrayTypeU3D128_t2571979753  value)
	{
		___U24fieldU2DFD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields, ___U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_13)); }
	inline U24ArrayTypeU3D20_t2271475898  get_U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_13() const { return ___U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_13; }
	inline U24ArrayTypeU3D20_t2271475898 * get_address_of_U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_13() { return &___U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_13; }
	inline void set_U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_13(U24ArrayTypeU3D20_t2271475898  value)
	{
		___U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_13 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields, ___U24fieldU2D794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_14)); }
	inline U24ArrayTypeU3D32_t4145487142  get_U24fieldU2D794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_14() const { return ___U24fieldU2D794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_14; }
	inline U24ArrayTypeU3D32_t4145487142 * get_address_of_U24fieldU2D794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_14() { return &___U24fieldU2D794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_14; }
	inline void set_U24fieldU2D794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_14(U24ArrayTypeU3D32_t4145487142  value)
	{
		___U24fieldU2D794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_14 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DBEEEBCEF33AF5B72B0463DF9185C0226DE5909AD_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields, ___U24fieldU2DBEEEBCEF33AF5B72B0463DF9185C0226DE5909AD_15)); }
	inline U24ArrayTypeU3D24_t1113226220  get_U24fieldU2DBEEEBCEF33AF5B72B0463DF9185C0226DE5909AD_15() const { return ___U24fieldU2DBEEEBCEF33AF5B72B0463DF9185C0226DE5909AD_15; }
	inline U24ArrayTypeU3D24_t1113226220 * get_address_of_U24fieldU2DBEEEBCEF33AF5B72B0463DF9185C0226DE5909AD_15() { return &___U24fieldU2DBEEEBCEF33AF5B72B0463DF9185C0226DE5909AD_15; }
	inline void set_U24fieldU2DBEEEBCEF33AF5B72B0463DF9185C0226DE5909AD_15(U24ArrayTypeU3D24_t1113226220  value)
	{
		___U24fieldU2DBEEEBCEF33AF5B72B0463DF9185C0226DE5909AD_15 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields, ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_16)); }
	inline U24ArrayTypeU3D24_t1113226220  get_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_16() const { return ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_16; }
	inline U24ArrayTypeU3D24_t1113226220 * get_address_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_16() { return &___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_16; }
	inline void set_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_16(U24ArrayTypeU3D24_t1113226220  value)
	{
		___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1698564610_H
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
#ifndef UNITYARSESSIONRUNOPTION_T1621601105_H
#define UNITYARSESSIONRUNOPTION_T1621601105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionRunOption
struct  UnityARSessionRunOption_t1621601105 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARSessionRunOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARSessionRunOption_t1621601105, ___value___1)); }
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
#endif // UNITYARSESSIONRUNOPTION_T1621601105_H
#ifndef UNITYARFACEGEOMETRY_T2763507772_H
#define UNITYARFACEGEOMETRY_T2763507772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARFaceGeometry
struct  UnityARFaceGeometry_t2763507772 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARFaceGeometry::vertexCount
	int32_t ___vertexCount_0;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceGeometry::vertices
	IntPtr_t ___vertices_1;
	// System.Int32 UnityEngine.XR.iOS.UnityARFaceGeometry::textureCoordinateCount
	int32_t ___textureCoordinateCount_2;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceGeometry::textureCoordinates
	IntPtr_t ___textureCoordinates_3;
	// System.Int32 UnityEngine.XR.iOS.UnityARFaceGeometry::triangleCount
	int32_t ___triangleCount_4;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceGeometry::triangleIndices
	IntPtr_t ___triangleIndices_5;

public:
	inline static int32_t get_offset_of_vertexCount_0() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t2763507772, ___vertexCount_0)); }
	inline int32_t get_vertexCount_0() const { return ___vertexCount_0; }
	inline int32_t* get_address_of_vertexCount_0() { return &___vertexCount_0; }
	inline void set_vertexCount_0(int32_t value)
	{
		___vertexCount_0 = value;
	}

	inline static int32_t get_offset_of_vertices_1() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t2763507772, ___vertices_1)); }
	inline IntPtr_t get_vertices_1() const { return ___vertices_1; }
	inline IntPtr_t* get_address_of_vertices_1() { return &___vertices_1; }
	inline void set_vertices_1(IntPtr_t value)
	{
		___vertices_1 = value;
	}

	inline static int32_t get_offset_of_textureCoordinateCount_2() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t2763507772, ___textureCoordinateCount_2)); }
	inline int32_t get_textureCoordinateCount_2() const { return ___textureCoordinateCount_2; }
	inline int32_t* get_address_of_textureCoordinateCount_2() { return &___textureCoordinateCount_2; }
	inline void set_textureCoordinateCount_2(int32_t value)
	{
		___textureCoordinateCount_2 = value;
	}

	inline static int32_t get_offset_of_textureCoordinates_3() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t2763507772, ___textureCoordinates_3)); }
	inline IntPtr_t get_textureCoordinates_3() const { return ___textureCoordinates_3; }
	inline IntPtr_t* get_address_of_textureCoordinates_3() { return &___textureCoordinates_3; }
	inline void set_textureCoordinates_3(IntPtr_t value)
	{
		___textureCoordinates_3 = value;
	}

	inline static int32_t get_offset_of_triangleCount_4() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t2763507772, ___triangleCount_4)); }
	inline int32_t get_triangleCount_4() const { return ___triangleCount_4; }
	inline int32_t* get_address_of_triangleCount_4() { return &___triangleCount_4; }
	inline void set_triangleCount_4(int32_t value)
	{
		___triangleCount_4 = value;
	}

	inline static int32_t get_offset_of_triangleIndices_5() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t2763507772, ___triangleIndices_5)); }
	inline IntPtr_t get_triangleIndices_5() const { return ___triangleIndices_5; }
	inline IntPtr_t* get_address_of_triangleIndices_5() { return &___triangleIndices_5; }
	inline void set_triangleIndices_5(IntPtr_t value)
	{
		___triangleIndices_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARFACEGEOMETRY_T2763507772_H
#ifndef ARTEXTUREHANDLES_T540054800_H
#define ARTEXTUREHANDLES_T540054800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTextureHandles
struct  ARTextureHandles_t540054800 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.ARTextureHandles::textureY
	IntPtr_t ___textureY_0;
	// System.IntPtr UnityEngine.XR.iOS.ARTextureHandles::textureCbCr
	IntPtr_t ___textureCbCr_1;

public:
	inline static int32_t get_offset_of_textureY_0() { return static_cast<int32_t>(offsetof(ARTextureHandles_t540054800, ___textureY_0)); }
	inline IntPtr_t get_textureY_0() const { return ___textureY_0; }
	inline IntPtr_t* get_address_of_textureY_0() { return &___textureY_0; }
	inline void set_textureY_0(IntPtr_t value)
	{
		___textureY_0 = value;
	}

	inline static int32_t get_offset_of_textureCbCr_1() { return static_cast<int32_t>(offsetof(ARTextureHandles_t540054800, ___textureCbCr_1)); }
	inline IntPtr_t get_textureCbCr_1() const { return ___textureCbCr_1; }
	inline IntPtr_t* get_address_of_textureCbCr_1() { return &___textureCbCr_1; }
	inline void set_textureCbCr_1(IntPtr_t value)
	{
		___textureCbCr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTEXTUREHANDLES_T540054800_H
#ifndef UNITYVIDEOPARAMS_T140646428_H
#define UNITYVIDEOPARAMS_T140646428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityVideoParams
struct  UnityVideoParams_t140646428 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yWidth
	int32_t ___yWidth_0;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yHeight
	int32_t ___yHeight_1;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::screenOrientation
	int32_t ___screenOrientation_2;
	// System.Single UnityEngine.XR.iOS.UnityVideoParams::texCoordScale
	float ___texCoordScale_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityVideoParams::cvPixelBufferPtr
	IntPtr_t ___cvPixelBufferPtr_4;

public:
	inline static int32_t get_offset_of_yWidth_0() { return static_cast<int32_t>(offsetof(UnityVideoParams_t140646428, ___yWidth_0)); }
	inline int32_t get_yWidth_0() const { return ___yWidth_0; }
	inline int32_t* get_address_of_yWidth_0() { return &___yWidth_0; }
	inline void set_yWidth_0(int32_t value)
	{
		___yWidth_0 = value;
	}

	inline static int32_t get_offset_of_yHeight_1() { return static_cast<int32_t>(offsetof(UnityVideoParams_t140646428, ___yHeight_1)); }
	inline int32_t get_yHeight_1() const { return ___yHeight_1; }
	inline int32_t* get_address_of_yHeight_1() { return &___yHeight_1; }
	inline void set_yHeight_1(int32_t value)
	{
		___yHeight_1 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_2() { return static_cast<int32_t>(offsetof(UnityVideoParams_t140646428, ___screenOrientation_2)); }
	inline int32_t get_screenOrientation_2() const { return ___screenOrientation_2; }
	inline int32_t* get_address_of_screenOrientation_2() { return &___screenOrientation_2; }
	inline void set_screenOrientation_2(int32_t value)
	{
		___screenOrientation_2 = value;
	}

	inline static int32_t get_offset_of_texCoordScale_3() { return static_cast<int32_t>(offsetof(UnityVideoParams_t140646428, ___texCoordScale_3)); }
	inline float get_texCoordScale_3() const { return ___texCoordScale_3; }
	inline float* get_address_of_texCoordScale_3() { return &___texCoordScale_3; }
	inline void set_texCoordScale_3(float value)
	{
		___texCoordScale_3 = value;
	}

	inline static int32_t get_offset_of_cvPixelBufferPtr_4() { return static_cast<int32_t>(offsetof(UnityVideoParams_t140646428, ___cvPixelBufferPtr_4)); }
	inline IntPtr_t get_cvPixelBufferPtr_4() const { return ___cvPixelBufferPtr_4; }
	inline IntPtr_t* get_address_of_cvPixelBufferPtr_4() { return &___cvPixelBufferPtr_4; }
	inline void set_cvPixelBufferPtr_4(IntPtr_t value)
	{
		___cvPixelBufferPtr_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYVIDEOPARAMS_T140646428_H
#ifndef UNITYARMATRIX4X4_T4108331264_H
#define UNITYARMATRIX4X4_T4108331264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrix4x4
struct  UnityARMatrix4x4_t4108331264 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column0
	Vector4_t1620770207  ___column0_0;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column1
	Vector4_t1620770207  ___column1_1;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column2
	Vector4_t1620770207  ___column2_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column3
	Vector4_t1620770207  ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4108331264, ___column0_0)); }
	inline Vector4_t1620770207  get_column0_0() const { return ___column0_0; }
	inline Vector4_t1620770207 * get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(Vector4_t1620770207  value)
	{
		___column0_0 = value;
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4108331264, ___column1_1)); }
	inline Vector4_t1620770207  get_column1_1() const { return ___column1_1; }
	inline Vector4_t1620770207 * get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(Vector4_t1620770207  value)
	{
		___column1_1 = value;
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4108331264, ___column2_2)); }
	inline Vector4_t1620770207  get_column2_2() const { return ___column2_2; }
	inline Vector4_t1620770207 * get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(Vector4_t1620770207  value)
	{
		___column2_2 = value;
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4108331264, ___column3_3)); }
	inline Vector4_t1620770207  get_column3_3() const { return ___column3_3; }
	inline Vector4_t1620770207 * get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(Vector4_t1620770207  value)
	{
		___column3_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIX4X4_T4108331264_H
#ifndef ARUSERANCHOR_T4048685165_H
#define ARUSERANCHOR_T4048685165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARUserAnchor
struct  ARUserAnchor_t4048685165 
{
public:
	// System.String UnityEngine.XR.iOS.ARUserAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARUserAnchor::transform
	Matrix4x4_t3657519234  ___transform_1;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARUserAnchor_t4048685165, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___identifier_0), value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARUserAnchor_t4048685165, ___transform_1)); }
	inline Matrix4x4_t3657519234  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t3657519234 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t3657519234  value)
	{
		___transform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARUserAnchor
struct ARUserAnchor_t4048685165_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t3657519234  ___transform_1;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARUserAnchor
struct ARUserAnchor_t4048685165_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t3657519234  ___transform_1;
};
#endif // ARUSERANCHOR_T4048685165_H
#ifndef ARTRACKINGSTATEREASON_T2720611925_H
#define ARTRACKINGSTATEREASON_T2720611925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingStateReason
struct  ARTrackingStateReason_t2720611925 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingStateReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingStateReason_t2720611925, ___value___1)); }
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
#endif // ARTRACKINGSTATEREASON_T2720611925_H
#ifndef ARTRACKINGSTATE_T641836287_H
#define ARTRACKINGSTATE_T641836287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingState
struct  ARTrackingState_t641836287 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingState_t641836287, ___value___1)); }
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
#endif // ARTRACKINGSTATE_T641836287_H
#ifndef ARTRACKINGQUALITY_T4233185561_H
#define ARTRACKINGQUALITY_T4233185561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingQuality
struct  ARTrackingQuality_t4233185561 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARTrackingQuality::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingQuality_t4233185561, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTRACKINGQUALITY_T4233185561_H
#ifndef UNITYARPLANEDETECTION_T1624824292_H
#define UNITYARPLANEDETECTION_T1624824292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARPlaneDetection
struct  UnityARPlaneDetection_t1624824292 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneDetection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARPlaneDetection_t1624824292, ___value___1)); }
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
#endif // UNITYARPLANEDETECTION_T1624824292_H
#ifndef ARRECT_T1673095439_H
#define ARRECT_T1673095439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARRect
struct  ARRect_t1673095439 
{
public:
	// UnityEngine.XR.iOS.ARPoint UnityEngine.XR.iOS.ARRect::origin
	ARPoint_t2706858983  ___origin_0;
	// UnityEngine.XR.iOS.ARSize UnityEngine.XR.iOS.ARRect::size
	ARSize_t1964593188  ___size_1;

public:
	inline static int32_t get_offset_of_origin_0() { return static_cast<int32_t>(offsetof(ARRect_t1673095439, ___origin_0)); }
	inline ARPoint_t2706858983  get_origin_0() const { return ___origin_0; }
	inline ARPoint_t2706858983 * get_address_of_origin_0() { return &___origin_0; }
	inline void set_origin_0(ARPoint_t2706858983  value)
	{
		___origin_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(ARRect_t1673095439, ___size_1)); }
	inline ARSize_t1964593188  get_size_1() const { return ___size_1; }
	inline ARSize_t1964593188 * get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(ARSize_t1964593188  value)
	{
		___size_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRECT_T1673095439_H
#ifndef ARPLANEANCHORALIGNMENT_T4058452959_H
#define ARPLANEANCHORALIGNMENT_T4058452959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchorAlignment
struct  ARPlaneAnchorAlignment_t4058452959 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARPlaneAnchorAlignment::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARPlaneAnchorAlignment_t4058452959, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEANCHORALIGNMENT_T4058452959_H
#ifndef UNITYARALIGNMENT_T3332840936_H
#define UNITYARALIGNMENT_T3332840936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAlignment
struct  UnityARAlignment_t3332840936 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARAlignment::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARAlignment_t3332840936, ___value___1)); }
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
#endif // UNITYARALIGNMENT_T3332840936_H
#ifndef LIGHTDATATYPE_T703210338_H
#define LIGHTDATATYPE_T703210338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.LightDataType
struct  LightDataType_t703210338 
{
public:
	// System.Int32 UnityEngine.XR.iOS.LightDataType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LightDataType_t703210338, ___value___1)); }
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
#endif // LIGHTDATATYPE_T703210338_H
#ifndef UNITYARDIRECTIONALLIGHTESTIMATE_T2833913632_H
#define UNITYARDIRECTIONALLIGHTESTIMATE_T2833913632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate
struct  UnityARDirectionalLightEstimate_t2833913632  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::primaryLightDirection
	Vector3_t638544396  ___primaryLightDirection_0;
	// System.Single UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::primaryLightIntensity
	float ___primaryLightIntensity_1;
	// System.Single[] UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::sphericalHarmonicsCoefficients
	SingleU5BU5D_t3081648790* ___sphericalHarmonicsCoefficients_2;

public:
	inline static int32_t get_offset_of_primaryLightDirection_0() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_t2833913632, ___primaryLightDirection_0)); }
	inline Vector3_t638544396  get_primaryLightDirection_0() const { return ___primaryLightDirection_0; }
	inline Vector3_t638544396 * get_address_of_primaryLightDirection_0() { return &___primaryLightDirection_0; }
	inline void set_primaryLightDirection_0(Vector3_t638544396  value)
	{
		___primaryLightDirection_0 = value;
	}

	inline static int32_t get_offset_of_primaryLightIntensity_1() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_t2833913632, ___primaryLightIntensity_1)); }
	inline float get_primaryLightIntensity_1() const { return ___primaryLightIntensity_1; }
	inline float* get_address_of_primaryLightIntensity_1() { return &___primaryLightIntensity_1; }
	inline void set_primaryLightIntensity_1(float value)
	{
		___primaryLightIntensity_1 = value;
	}

	inline static int32_t get_offset_of_sphericalHarmonicsCoefficients_2() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_t2833913632, ___sphericalHarmonicsCoefficients_2)); }
	inline SingleU5BU5D_t3081648790* get_sphericalHarmonicsCoefficients_2() const { return ___sphericalHarmonicsCoefficients_2; }
	inline SingleU5BU5D_t3081648790** get_address_of_sphericalHarmonicsCoefficients_2() { return &___sphericalHarmonicsCoefficients_2; }
	inline void set_sphericalHarmonicsCoefficients_2(SingleU5BU5D_t3081648790* value)
	{
		___sphericalHarmonicsCoefficients_2 = value;
		Il2CppCodeGenWriteBarrier((&___sphericalHarmonicsCoefficients_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARDIRECTIONALLIGHTESTIMATE_T2833913632_H
#ifndef MARSHALDIRECTIONALLIGHTESTIMATE_T4273225709_H
#define MARSHALDIRECTIONALLIGHTESTIMATE_T4273225709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.MarshalDirectionalLightEstimate
struct  MarshalDirectionalLightEstimate_t4273225709 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.MarshalDirectionalLightEstimate::primaryDirAndIntensity
	Vector4_t1620770207  ___primaryDirAndIntensity_0;
	// System.IntPtr UnityEngine.XR.iOS.MarshalDirectionalLightEstimate::sphericalHarmonicCoefficientsPtr
	IntPtr_t ___sphericalHarmonicCoefficientsPtr_1;

public:
	inline static int32_t get_offset_of_primaryDirAndIntensity_0() { return static_cast<int32_t>(offsetof(MarshalDirectionalLightEstimate_t4273225709, ___primaryDirAndIntensity_0)); }
	inline Vector4_t1620770207  get_primaryDirAndIntensity_0() const { return ___primaryDirAndIntensity_0; }
	inline Vector4_t1620770207 * get_address_of_primaryDirAndIntensity_0() { return &___primaryDirAndIntensity_0; }
	inline void set_primaryDirAndIntensity_0(Vector4_t1620770207  value)
	{
		___primaryDirAndIntensity_0 = value;
	}

	inline static int32_t get_offset_of_sphericalHarmonicCoefficientsPtr_1() { return static_cast<int32_t>(offsetof(MarshalDirectionalLightEstimate_t4273225709, ___sphericalHarmonicCoefficientsPtr_1)); }
	inline IntPtr_t get_sphericalHarmonicCoefficientsPtr_1() const { return ___sphericalHarmonicCoefficientsPtr_1; }
	inline IntPtr_t* get_address_of_sphericalHarmonicCoefficientsPtr_1() { return &___sphericalHarmonicCoefficientsPtr_1; }
	inline void set_sphericalHarmonicCoefficientsPtr_1(IntPtr_t value)
	{
		___sphericalHarmonicCoefficientsPtr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALDIRECTIONALLIGHTESTIMATE_T4273225709_H
#ifndef UNITYARLIGHTDATA_T1777667307_H
#define UNITYARLIGHTDATA_T1777667307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightData
struct  UnityARLightData_t1777667307 
{
public:
	// UnityEngine.XR.iOS.LightDataType UnityEngine.XR.iOS.UnityARLightData::arLightingType
	int32_t ___arLightingType_0;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityARLightData::arLightEstimate
	UnityARLightEstimate_t1503333468  ___arLightEstimate_1;
	// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate UnityEngine.XR.iOS.UnityARLightData::arDirectonalLightEstimate
	UnityARDirectionalLightEstimate_t2833913632 * ___arDirectonalLightEstimate_2;

public:
	inline static int32_t get_offset_of_arLightingType_0() { return static_cast<int32_t>(offsetof(UnityARLightData_t1777667307, ___arLightingType_0)); }
	inline int32_t get_arLightingType_0() const { return ___arLightingType_0; }
	inline int32_t* get_address_of_arLightingType_0() { return &___arLightingType_0; }
	inline void set_arLightingType_0(int32_t value)
	{
		___arLightingType_0 = value;
	}

	inline static int32_t get_offset_of_arLightEstimate_1() { return static_cast<int32_t>(offsetof(UnityARLightData_t1777667307, ___arLightEstimate_1)); }
	inline UnityARLightEstimate_t1503333468  get_arLightEstimate_1() const { return ___arLightEstimate_1; }
	inline UnityARLightEstimate_t1503333468 * get_address_of_arLightEstimate_1() { return &___arLightEstimate_1; }
	inline void set_arLightEstimate_1(UnityARLightEstimate_t1503333468  value)
	{
		___arLightEstimate_1 = value;
	}

	inline static int32_t get_offset_of_arDirectonalLightEstimate_2() { return static_cast<int32_t>(offsetof(UnityARLightData_t1777667307, ___arDirectonalLightEstimate_2)); }
	inline UnityARDirectionalLightEstimate_t2833913632 * get_arDirectonalLightEstimate_2() const { return ___arDirectonalLightEstimate_2; }
	inline UnityARDirectionalLightEstimate_t2833913632 ** get_address_of_arDirectonalLightEstimate_2() { return &___arDirectonalLightEstimate_2; }
	inline void set_arDirectonalLightEstimate_2(UnityARDirectionalLightEstimate_t2833913632 * value)
	{
		___arDirectonalLightEstimate_2 = value;
		Il2CppCodeGenWriteBarrier((&___arDirectonalLightEstimate_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARLightData
struct UnityARLightData_t1777667307_marshaled_pinvoke
{
	int32_t ___arLightingType_0;
	UnityARLightEstimate_t1503333468  ___arLightEstimate_1;
	UnityARDirectionalLightEstimate_t2833913632 * ___arDirectonalLightEstimate_2;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARLightData
struct UnityARLightData_t1777667307_marshaled_com
{
	int32_t ___arLightingType_0;
	UnityARLightEstimate_t1503333468  ___arLightEstimate_1;
	UnityARDirectionalLightEstimate_t2833913632 * ___arDirectonalLightEstimate_2;
};
#endif // UNITYARLIGHTDATA_T1777667307_H
#ifndef UNITYMARSHALLIGHTDATA_T2530384755_H
#define UNITYMARSHALLIGHTDATA_T2530384755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityMarshalLightData
struct  UnityMarshalLightData_t2530384755 
{
public:
	// UnityEngine.XR.iOS.LightDataType UnityEngine.XR.iOS.UnityMarshalLightData::arLightingType
	int32_t ___arLightingType_0;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityMarshalLightData::arLightEstimate
	UnityARLightEstimate_t1503333468  ___arLightEstimate_1;
	// UnityEngine.XR.iOS.MarshalDirectionalLightEstimate UnityEngine.XR.iOS.UnityMarshalLightData::arDirectonalLightEstimate
	MarshalDirectionalLightEstimate_t4273225709  ___arDirectonalLightEstimate_2;

public:
	inline static int32_t get_offset_of_arLightingType_0() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_t2530384755, ___arLightingType_0)); }
	inline int32_t get_arLightingType_0() const { return ___arLightingType_0; }
	inline int32_t* get_address_of_arLightingType_0() { return &___arLightingType_0; }
	inline void set_arLightingType_0(int32_t value)
	{
		___arLightingType_0 = value;
	}

	inline static int32_t get_offset_of_arLightEstimate_1() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_t2530384755, ___arLightEstimate_1)); }
	inline UnityARLightEstimate_t1503333468  get_arLightEstimate_1() const { return ___arLightEstimate_1; }
	inline UnityARLightEstimate_t1503333468 * get_address_of_arLightEstimate_1() { return &___arLightEstimate_1; }
	inline void set_arLightEstimate_1(UnityARLightEstimate_t1503333468  value)
	{
		___arLightEstimate_1 = value;
	}

	inline static int32_t get_offset_of_arDirectonalLightEstimate_2() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_t2530384755, ___arDirectonalLightEstimate_2)); }
	inline MarshalDirectionalLightEstimate_t4273225709  get_arDirectonalLightEstimate_2() const { return ___arDirectonalLightEstimate_2; }
	inline MarshalDirectionalLightEstimate_t4273225709 * get_address_of_arDirectonalLightEstimate_2() { return &___arDirectonalLightEstimate_2; }
	inline void set_arDirectonalLightEstimate_2(MarshalDirectionalLightEstimate_t4273225709  value)
	{
		___arDirectonalLightEstimate_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYMARSHALLIGHTDATA_T2530384755_H
#ifndef ARKITWORLDTRACKINGSESSIONCONFIGURATION_T1345355002_H
#define ARKITWORLDTRACKINGSESSIONCONFIGURATION_T1345355002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct  ARKitWorldTrackingSessionConfiguration_t1345355002 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::alignment
	int32_t ___alignment_0;
	// UnityEngine.XR.iOS.UnityARPlaneDetection UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::planeDetection
	int32_t ___planeDetection_1;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_2;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_3;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t1345355002, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_planeDetection_1() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t1345355002, ___planeDetection_1)); }
	inline int32_t get_planeDetection_1() const { return ___planeDetection_1; }
	inline int32_t* get_address_of_planeDetection_1() { return &___planeDetection_1; }
	inline void set_planeDetection_1(int32_t value)
	{
		___planeDetection_1 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_2() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t1345355002, ___getPointCloudData_2)); }
	inline bool get_getPointCloudData_2() const { return ___getPointCloudData_2; }
	inline bool* get_address_of_getPointCloudData_2() { return &___getPointCloudData_2; }
	inline void set_getPointCloudData_2(bool value)
	{
		___getPointCloudData_2 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_3() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t1345355002, ___enableLightEstimation_3)); }
	inline bool get_enableLightEstimation_3() const { return ___enableLightEstimation_3; }
	inline bool* get_address_of_enableLightEstimation_3() { return &___enableLightEstimation_3; }
	inline void set_enableLightEstimation_3(bool value)
	{
		___enableLightEstimation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t1345355002_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t1345355002_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
};
#endif // ARKITWORLDTRACKINGSESSIONCONFIGURATION_T1345355002_H
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
#ifndef UNITYARFACEANCHORDATA_T2456788672_H
#define UNITYARFACEANCHORDATA_T2456788672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARFaceAnchorData
struct  UnityARFaceAnchorData_t2456788672 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceAnchorData::ptrIdentifier
	IntPtr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARFaceAnchorData::transform
	UnityARMatrix4x4_t4108331264  ___transform_1;
	// UnityEngine.XR.iOS.UnityARFaceGeometry UnityEngine.XR.iOS.UnityARFaceAnchorData::faceGeometry
	UnityARFaceGeometry_t2763507772  ___faceGeometry_2;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceAnchorData::blendShapes
	IntPtr_t ___blendShapes_3;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2456788672, ___ptrIdentifier_0)); }
	inline IntPtr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline IntPtr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(IntPtr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2456788672, ___transform_1)); }
	inline UnityARMatrix4x4_t4108331264  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t4108331264 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t4108331264  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_faceGeometry_2() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2456788672, ___faceGeometry_2)); }
	inline UnityARFaceGeometry_t2763507772  get_faceGeometry_2() const { return ___faceGeometry_2; }
	inline UnityARFaceGeometry_t2763507772 * get_address_of_faceGeometry_2() { return &___faceGeometry_2; }
	inline void set_faceGeometry_2(UnityARFaceGeometry_t2763507772  value)
	{
		___faceGeometry_2 = value;
	}

	inline static int32_t get_offset_of_blendShapes_3() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2456788672, ___blendShapes_3)); }
	inline IntPtr_t get_blendShapes_3() const { return ___blendShapes_3; }
	inline IntPtr_t* get_address_of_blendShapes_3() { return &___blendShapes_3; }
	inline void set_blendShapes_3(IntPtr_t value)
	{
		___blendShapes_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARFACEANCHORDATA_T2456788672_H
#ifndef ARKITSESSIONCONFIGURATION_T4211207803_H
#define ARKITSESSIONCONFIGURATION_T4211207803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARKitSessionConfiguration
struct  ARKitSessionConfiguration_t4211207803 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitSessionConfiguration::alignment
	int32_t ___alignment_0;
	// System.Boolean UnityEngine.XR.iOS.ARKitSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_1;
	// System.Boolean UnityEngine.XR.iOS.ARKitSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_2;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitSessionConfiguration_t4211207803, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_1() { return static_cast<int32_t>(offsetof(ARKitSessionConfiguration_t4211207803, ___getPointCloudData_1)); }
	inline bool get_getPointCloudData_1() const { return ___getPointCloudData_1; }
	inline bool* get_address_of_getPointCloudData_1() { return &___getPointCloudData_1; }
	inline void set_getPointCloudData_1(bool value)
	{
		___getPointCloudData_1 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_2() { return static_cast<int32_t>(offsetof(ARKitSessionConfiguration_t4211207803, ___enableLightEstimation_2)); }
	inline bool get_enableLightEstimation_2() const { return ___enableLightEstimation_2; }
	inline bool* get_address_of_enableLightEstimation_2() { return &___enableLightEstimation_2; }
	inline void set_enableLightEstimation_2(bool value)
	{
		___enableLightEstimation_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitSessionConfiguration
struct ARKitSessionConfiguration_t4211207803_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___getPointCloudData_1;
	int32_t ___enableLightEstimation_2;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitSessionConfiguration
struct ARKitSessionConfiguration_t4211207803_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___getPointCloudData_1;
	int32_t ___enableLightEstimation_2;
};
#endif // ARKITSESSIONCONFIGURATION_T4211207803_H
#ifndef UNITYARANCHORDATA_T2078617210_H
#define UNITYARANCHORDATA_T2078617210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAnchorData
struct  UnityARAnchorData_t2078617210 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARAnchorData::ptrIdentifier
	IntPtr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARAnchorData::transform
	UnityARMatrix4x4_t4108331264  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.UnityARAnchorData::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::center
	Vector4_t1620770207  ___center_3;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::extent
	Vector4_t1620770207  ___extent_4;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t2078617210, ___ptrIdentifier_0)); }
	inline IntPtr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline IntPtr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(IntPtr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t2078617210, ___transform_1)); }
	inline UnityARMatrix4x4_t4108331264  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t4108331264 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t4108331264  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t2078617210, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t2078617210, ___center_3)); }
	inline Vector4_t1620770207  get_center_3() const { return ___center_3; }
	inline Vector4_t1620770207 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector4_t1620770207  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t2078617210, ___extent_4)); }
	inline Vector4_t1620770207  get_extent_4() const { return ___extent_4; }
	inline Vector4_t1620770207 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector4_t1620770207  value)
	{
		___extent_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARANCHORDATA_T2078617210_H
#ifndef UNITYARUSERANCHORDATA_T838402456_H
#define UNITYARUSERANCHORDATA_T838402456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUserAnchorData
struct  UnityARUserAnchorData_t838402456 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARUserAnchorData::ptrIdentifier
	IntPtr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARUserAnchorData::transform
	UnityARMatrix4x4_t4108331264  ___transform_1;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t838402456, ___ptrIdentifier_0)); }
	inline IntPtr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline IntPtr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(IntPtr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t838402456, ___transform_1)); }
	inline UnityARMatrix4x4_t4108331264  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t4108331264 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t4108331264  value)
	{
		___transform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUSERANCHORDATA_T838402456_H
#ifndef UNITYARHITTESTRESULT_T1828509540_H
#define UNITYARHITTESTRESULT_T1828509540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARHitTestResult
struct  UnityARHitTestResult_t1828509540 
{
public:
	// UnityEngine.XR.iOS.ARHitTestResultType UnityEngine.XR.iOS.UnityARHitTestResult::type
	int64_t ___type_0;
	// System.Double UnityEngine.XR.iOS.UnityARHitTestResult::distance
	double ___distance_1;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.UnityARHitTestResult::localTransform
	Matrix4x4_t3657519234  ___localTransform_2;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.UnityARHitTestResult::worldTransform
	Matrix4x4_t3657519234  ___worldTransform_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityARHitTestResult::anchor
	IntPtr_t ___anchor_4;
	// System.Boolean UnityEngine.XR.iOS.UnityARHitTestResult::isValid
	bool ___isValid_5;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t1828509540, ___type_0)); }
	inline int64_t get_type_0() const { return ___type_0; }
	inline int64_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int64_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_distance_1() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t1828509540, ___distance_1)); }
	inline double get_distance_1() const { return ___distance_1; }
	inline double* get_address_of_distance_1() { return &___distance_1; }
	inline void set_distance_1(double value)
	{
		___distance_1 = value;
	}

	inline static int32_t get_offset_of_localTransform_2() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t1828509540, ___localTransform_2)); }
	inline Matrix4x4_t3657519234  get_localTransform_2() const { return ___localTransform_2; }
	inline Matrix4x4_t3657519234 * get_address_of_localTransform_2() { return &___localTransform_2; }
	inline void set_localTransform_2(Matrix4x4_t3657519234  value)
	{
		___localTransform_2 = value;
	}

	inline static int32_t get_offset_of_worldTransform_3() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t1828509540, ___worldTransform_3)); }
	inline Matrix4x4_t3657519234  get_worldTransform_3() const { return ___worldTransform_3; }
	inline Matrix4x4_t3657519234 * get_address_of_worldTransform_3() { return &___worldTransform_3; }
	inline void set_worldTransform_3(Matrix4x4_t3657519234  value)
	{
		___worldTransform_3 = value;
	}

	inline static int32_t get_offset_of_anchor_4() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t1828509540, ___anchor_4)); }
	inline IntPtr_t get_anchor_4() const { return ___anchor_4; }
	inline IntPtr_t* get_address_of_anchor_4() { return &___anchor_4; }
	inline void set_anchor_4(IntPtr_t value)
	{
		___anchor_4 = value;
	}

	inline static int32_t get_offset_of_isValid_5() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t1828509540, ___isValid_5)); }
	inline bool get_isValid_5() const { return ___isValid_5; }
	inline bool* get_address_of_isValid_5() { return &___isValid_5; }
	inline void set_isValid_5(bool value)
	{
		___isValid_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARHitTestResult
struct UnityARHitTestResult_t1828509540_marshaled_pinvoke
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t3657519234  ___localTransform_2;
	Matrix4x4_t3657519234  ___worldTransform_3;
	intptr_t ___anchor_4;
	int32_t ___isValid_5;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARHitTestResult
struct UnityARHitTestResult_t1828509540_marshaled_com
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t3657519234  ___localTransform_2;
	Matrix4x4_t3657519234  ___worldTransform_3;
	intptr_t ___anchor_4;
	int32_t ___isValid_5;
};
#endif // UNITYARHITTESTRESULT_T1828509540_H
#ifndef ARPLANEANCHOR_T1133095680_H
#define ARPLANEANCHOR_T1133095680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchor
struct  ARPlaneAnchor_t1133095680 
{
public:
	// System.String UnityEngine.XR.iOS.ARPlaneAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARPlaneAnchor::transform
	Matrix4x4_t3657519234  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.ARPlaneAnchor::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::center
	Vector3_t638544396  ___center_3;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::extent
	Vector3_t638544396  ___extent_4;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t1133095680, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___identifier_0), value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t1133095680, ___transform_1)); }
	inline Matrix4x4_t3657519234  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t3657519234 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t3657519234  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t1133095680, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t1133095680, ___center_3)); }
	inline Vector3_t638544396  get_center_3() const { return ___center_3; }
	inline Vector3_t638544396 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector3_t638544396  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t1133095680, ___extent_4)); }
	inline Vector3_t638544396  get_extent_4() const { return ___extent_4; }
	inline Vector3_t638544396 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector3_t638544396  value)
	{
		___extent_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t1133095680_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t3657519234  ___transform_1;
	int64_t ___alignment_2;
	Vector3_t638544396  ___center_3;
	Vector3_t638544396  ___extent_4;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t1133095680_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t3657519234  ___transform_1;
	int64_t ___alignment_2;
	Vector3_t638544396  ___center_3;
	Vector3_t638544396  ___extent_4;
};
#endif // ARPLANEANCHOR_T1133095680_H
#ifndef ARKITFACETRACKINGCONFIGURATION_T2505776928_H
#define ARKITFACETRACKINGCONFIGURATION_T2505776928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration
struct  ARKitFaceTrackingConfiguration_t2505776928 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration::alignment
	int32_t ___alignment_0;
	// System.Boolean UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration::enableLightEstimation
	bool ___enableLightEstimation_1;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitFaceTrackingConfiguration_t2505776928, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_1() { return static_cast<int32_t>(offsetof(ARKitFaceTrackingConfiguration_t2505776928, ___enableLightEstimation_1)); }
	inline bool get_enableLightEstimation_1() const { return ___enableLightEstimation_1; }
	inline bool* get_address_of_enableLightEstimation_1() { return &___enableLightEstimation_1; }
	inline void set_enableLightEstimation_1(bool value)
	{
		___enableLightEstimation_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration
struct ARKitFaceTrackingConfiguration_t2505776928_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___enableLightEstimation_1;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration
struct ARKitFaceTrackingConfiguration_t2505776928_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___enableLightEstimation_1;
};
#endif // ARKITFACETRACKINGCONFIGURATION_T2505776928_H
#ifndef INTERNAL_UNITYARCAMERA_T1003412738_H
#define INTERNAL_UNITYARCAMERA_T1003412738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.internal_UnityARCamera
struct  internal_UnityARCamera_t1003412738 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::worldTransform
	UnityARMatrix4x4_t4108331264  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t4108331264  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.internal_UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.internal_UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.internal_UnityARCamera::videoParams
	UnityVideoParams_t140646428  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityMarshalLightData UnityEngine.XR.iOS.internal_UnityARCamera::lightData
	UnityMarshalLightData_t2530384755  ___lightData_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::displayTransform
	UnityARMatrix4x4_t4108331264  ___displayTransform_6;
	// System.UInt32 UnityEngine.XR.iOS.internal_UnityARCamera::getPointCloudData
	uint32_t ___getPointCloudData_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t1003412738, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t4108331264  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t4108331264 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t4108331264  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t1003412738, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t4108331264  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t4108331264 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t4108331264  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t1003412738, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t1003412738, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t1003412738, ___videoParams_4)); }
	inline UnityVideoParams_t140646428  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t140646428 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t140646428  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t1003412738, ___lightData_5)); }
	inline UnityMarshalLightData_t2530384755  get_lightData_5() const { return ___lightData_5; }
	inline UnityMarshalLightData_t2530384755 * get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(UnityMarshalLightData_t2530384755  value)
	{
		___lightData_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t1003412738, ___displayTransform_6)); }
	inline UnityARMatrix4x4_t4108331264  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_t4108331264 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_t4108331264  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_7() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t1003412738, ___getPointCloudData_7)); }
	inline uint32_t get_getPointCloudData_7() const { return ___getPointCloudData_7; }
	inline uint32_t* get_address_of_getPointCloudData_7() { return &___getPointCloudData_7; }
	inline void set_getPointCloudData_7(uint32_t value)
	{
		___getPointCloudData_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_UNITYARCAMERA_T1003412738_H
#ifndef UNITYARCAMERA_T3850600959_H
#define UNITYARCAMERA_T3850600959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARCamera
struct  UnityARCamera_t3850600959 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::worldTransform
	UnityARMatrix4x4_t4108331264  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t4108331264  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.UnityARCamera::videoParams
	UnityVideoParams_t140646428  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightData UnityEngine.XR.iOS.UnityARCamera::lightData
	UnityARLightData_t1777667307  ___lightData_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::displayTransform
	UnityARMatrix4x4_t4108331264  ___displayTransform_6;
	// UnityEngine.Vector3[] UnityEngine.XR.iOS.UnityARCamera::pointCloudData
	Vector3U5BU5D_t805523525* ___pointCloudData_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(UnityARCamera_t3850600959, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t4108331264  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t4108331264 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t4108331264  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(UnityARCamera_t3850600959, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t4108331264  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t4108331264 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t4108331264  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(UnityARCamera_t3850600959, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(UnityARCamera_t3850600959, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(UnityARCamera_t3850600959, ___videoParams_4)); }
	inline UnityVideoParams_t140646428  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t140646428 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t140646428  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(UnityARCamera_t3850600959, ___lightData_5)); }
	inline UnityARLightData_t1777667307  get_lightData_5() const { return ___lightData_5; }
	inline UnityARLightData_t1777667307 * get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(UnityARLightData_t1777667307  value)
	{
		___lightData_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(UnityARCamera_t3850600959, ___displayTransform_6)); }
	inline UnityARMatrix4x4_t4108331264  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_t4108331264 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_t4108331264  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_pointCloudData_7() { return static_cast<int32_t>(offsetof(UnityARCamera_t3850600959, ___pointCloudData_7)); }
	inline Vector3U5BU5D_t805523525* get_pointCloudData_7() const { return ___pointCloudData_7; }
	inline Vector3U5BU5D_t805523525** get_address_of_pointCloudData_7() { return &___pointCloudData_7; }
	inline void set_pointCloudData_7(Vector3U5BU5D_t805523525* value)
	{
		___pointCloudData_7 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudData_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t3850600959_marshaled_pinvoke
{
	UnityARMatrix4x4_t4108331264  ___worldTransform_0;
	UnityARMatrix4x4_t4108331264  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t140646428  ___videoParams_4;
	UnityARLightData_t1777667307_marshaled_pinvoke ___lightData_5;
	UnityARMatrix4x4_t4108331264  ___displayTransform_6;
	Vector3_t638544396 * ___pointCloudData_7;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t3850600959_marshaled_com
{
	UnityARMatrix4x4_t4108331264  ___worldTransform_0;
	UnityARMatrix4x4_t4108331264  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t140646428  ___videoParams_4;
	UnityARLightData_t1777667307_marshaled_com ___lightData_5;
	UnityARMatrix4x4_t4108331264  ___displayTransform_6;
	Vector3_t638544396 * ___pointCloudData_7;
};
#endif // UNITYARCAMERA_T3850600959_H
#ifndef INTERNAL_ARFACEANCHORREMOVED_T2288670911_H
#define INTERNAL_ARFACEANCHORREMOVED_T2288670911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorRemoved
struct  internal_ARFaceAnchorRemoved_t2288670911  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARFACEANCHORREMOVED_T2288670911_H
#ifndef INTERNAL_ARFACEANCHORUPDATED_T2364009384_H
#define INTERNAL_ARFACEANCHORUPDATED_T2364009384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorUpdated
struct  internal_ARFaceAnchorUpdated_t2364009384  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARFACEANCHORUPDATED_T2364009384_H
#ifndef ARANCHORADDED_T4129714184_H
#define ARANCHORADDED_T4129714184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded
struct  ARAnchorAdded_t4129714184  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARANCHORADDED_T4129714184_H
#ifndef ARANCHORUPDATED_T4006067148_H
#define ARANCHORUPDATED_T4006067148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated
struct  ARAnchorUpdated_t4006067148  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARANCHORUPDATED_T4006067148_H
#ifndef ARANCHORREMOVED_T1440883333_H
#define ARANCHORREMOVED_T1440883333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved
struct  ARAnchorRemoved_t1440883333  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARANCHORREMOVED_T1440883333_H
#ifndef ARUSERANCHORADDED_T3379712128_H
#define ARUSERANCHORADDED_T3379712128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded
struct  ARUserAnchorAdded_t3379712128  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARUSERANCHORADDED_T3379712128_H
#ifndef ARUSERANCHORUPDATED_T659752546_H
#define ARUSERANCHORUPDATED_T659752546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated
struct  ARUserAnchorUpdated_t659752546  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARUSERANCHORUPDATED_T659752546_H
#ifndef ARUSERANCHORREMOVED_T29952727_H
#define ARUSERANCHORREMOVED_T29952727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved
struct  ARUserAnchorRemoved_t29952727  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARUSERANCHORREMOVED_T29952727_H
#ifndef ARFACEANCHORADDED_T1959465719_H
#define ARFACEANCHORADDED_T1959465719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded
struct  ARFaceAnchorAdded_t1959465719  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFACEANCHORADDED_T1959465719_H
#ifndef ARFACEANCHORUPDATED_T2915477063_H
#define ARFACEANCHORUPDATED_T2915477063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated
struct  ARFaceAnchorUpdated_t2915477063  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFACEANCHORUPDATED_T2915477063_H
#ifndef ARSESSIONCALLBACK_T1260738157_H
#define ARSESSIONCALLBACK_T1260738157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback
struct  ARSessionCallback_t1260738157  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSESSIONCALLBACK_T1260738157_H
#ifndef ARSESSIONFAILED_T45313083_H
#define ARSESSIONFAILED_T45313083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed
struct  ARSessionFailed_t45313083  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSESSIONFAILED_T45313083_H
#ifndef INTERNAL_ARANCHORADDED_T2722114366_H
#define INTERNAL_ARANCHORADDED_T2722114366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded
struct  internal_ARAnchorAdded_t2722114366  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARANCHORADDED_T2722114366_H
#ifndef INTERNAL_ARANCHORUPDATED_T3428118642_H
#define INTERNAL_ARANCHORUPDATED_T3428118642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated
struct  internal_ARAnchorUpdated_t3428118642  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARANCHORUPDATED_T3428118642_H
#ifndef INTERNAL_ARANCHORREMOVED_T4263028292_H
#define INTERNAL_ARANCHORREMOVED_T4263028292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved
struct  internal_ARAnchorRemoved_t4263028292  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARANCHORREMOVED_T4263028292_H
#ifndef INTERNAL_ARUSERANCHORADDED_T3904973336_H
#define INTERNAL_ARUSERANCHORADDED_T3904973336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded
struct  internal_ARUserAnchorAdded_t3904973336  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORADDED_T3904973336_H
#ifndef INTERNAL_ARUSERANCHORUPDATED_T3147552389_H
#define INTERNAL_ARUSERANCHORUPDATED_T3147552389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated
struct  internal_ARUserAnchorUpdated_t3147552389  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORUPDATED_T3147552389_H
#ifndef INTERNAL_ARUSERANCHORREMOVED_T49761082_H
#define INTERNAL_ARUSERANCHORREMOVED_T49761082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved
struct  internal_ARUserAnchorRemoved_t49761082  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORREMOVED_T49761082_H
#ifndef INTERNAL_ARFACEANCHORADDED_T1072116815_H
#define INTERNAL_ARFACEANCHORADDED_T1072116815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorAdded
struct  internal_ARFaceAnchorAdded_t1072116815  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARFACEANCHORADDED_T1072116815_H
#ifndef ARFACEANCHORREMOVED_T1146351916_H
#define ARFACEANCHORREMOVED_T1146351916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved
struct  ARFaceAnchorRemoved_t1146351916  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFACEANCHORREMOVED_T1146351916_H
#ifndef INTERNAL_ARSESSIONTRACKINGCHANGED_T383942441_H
#define INTERNAL_ARSESSIONTRACKINGCHANGED_T383942441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged
struct  internal_ARSessionTrackingChanged_t383942441  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARSESSIONTRACKINGCHANGED_T383942441_H
#ifndef INTERNAL_ARFRAMEUPDATE_T2989169495_H
#define INTERNAL_ARFRAMEUPDATE_T2989169495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate
struct  internal_ARFrameUpdate_t2989169495  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARFRAMEUPDATE_T2989169495_H
#ifndef ARFRAMEUPDATE_T4171011957_H
#define ARFRAMEUPDATE_T4171011957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate
struct  ARFrameUpdate_t4171011957  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFRAMEUPDATE_T4171011957_H
#ifndef UNITYARSESSIONNATIVEINTERFACE_T3613495002_H
#define UNITYARSESSIONNATIVEINTERFACE_T3613495002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct  UnityARSessionNativeInterface_t3613495002  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARSessionNativeInterface::m_NativeARSession
	IntPtr_t ___m_NativeARSession_14;

public:
	inline static int32_t get_offset_of_m_NativeARSession_14() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002, ___m_NativeARSession_14)); }
	inline IntPtr_t get_m_NativeARSession_14() const { return ___m_NativeARSession_14; }
	inline IntPtr_t* get_address_of_m_NativeARSession_14() { return &___m_NativeARSession_14; }
	inline void set_m_NativeARSession_14(IntPtr_t value)
	{
		___m_NativeARSession_14 = value;
	}
};

struct UnityARSessionNativeInterface_t3613495002_StaticFields
{
public:
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFrameUpdatedEvent
	ARFrameUpdate_t4171011957 * ___ARFrameUpdatedEvent_0;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorAddedEvent
	ARAnchorAdded_t4129714184 * ___ARAnchorAddedEvent_1;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorUpdatedEvent
	ARAnchorUpdated_t4006067148 * ___ARAnchorUpdatedEvent_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorRemovedEvent
	ARAnchorRemoved_t1440883333 * ___ARAnchorRemovedEvent_3;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorAddedEvent
	ARUserAnchorAdded_t3379712128 * ___ARUserAnchorAddedEvent_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorUpdatedEvent
	ARUserAnchorUpdated_t659752546 * ___ARUserAnchorUpdatedEvent_5;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorRemovedEvent
	ARUserAnchorRemoved_t29952727 * ___ARUserAnchorRemovedEvent_6;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorAddedEvent
	ARFaceAnchorAdded_t1959465719 * ___ARFaceAnchorAddedEvent_7;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorUpdatedEvent
	ARFaceAnchorUpdated_t2915477063 * ___ARFaceAnchorUpdatedEvent_8;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorRemovedEvent
	ARFaceAnchorRemoved_t1146351916 * ___ARFaceAnchorRemovedEvent_9;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionFailedEvent
	ARSessionFailed_t45313083 * ___ARSessionFailedEvent_10;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionInterruptedEvent
	ARSessionCallback_t1260738157 * ___ARSessionInterruptedEvent_11;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessioninterruptionEndedEvent
	ARSessionCallback_t1260738157 * ___ARSessioninterruptionEndedEvent_12;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionTrackingChangedEvent
	ARSessionTrackingChanged_t133365316 * ___ARSessionTrackingChangedEvent_13;
	// UnityEngine.XR.iOS.UnityARCamera UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_Camera
	UnityARCamera_t3850600959  ___s_Camera_15;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_UnityARSessionNativeInterface
	UnityARSessionNativeInterface_t3613495002 * ___s_UnityARSessionNativeInterface_16;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache0
	internal_ARFrameUpdate_t2989169495 * ___U3CU3Ef__mgU24cache0_17;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache1
	ARSessionFailed_t45313083 * ___U3CU3Ef__mgU24cache1_18;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache2
	ARSessionCallback_t1260738157 * ___U3CU3Ef__mgU24cache2_19;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache3
	ARSessionCallback_t1260738157 * ___U3CU3Ef__mgU24cache3_20;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache4
	internal_ARSessionTrackingChanged_t383942441 * ___U3CU3Ef__mgU24cache4_21;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache5
	internal_ARAnchorAdded_t2722114366 * ___U3CU3Ef__mgU24cache5_22;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache6
	internal_ARAnchorUpdated_t3428118642 * ___U3CU3Ef__mgU24cache6_23;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache7
	internal_ARAnchorRemoved_t4263028292 * ___U3CU3Ef__mgU24cache7_24;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache8
	internal_ARUserAnchorAdded_t3904973336 * ___U3CU3Ef__mgU24cache8_25;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache9
	internal_ARUserAnchorUpdated_t3147552389 * ___U3CU3Ef__mgU24cache9_26;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheA
	internal_ARUserAnchorRemoved_t49761082 * ___U3CU3Ef__mgU24cacheA_27;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheB
	internal_ARFaceAnchorAdded_t1072116815 * ___U3CU3Ef__mgU24cacheB_28;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheC
	internal_ARFaceAnchorUpdated_t2364009384 * ___U3CU3Ef__mgU24cacheC_29;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheD
	internal_ARFaceAnchorRemoved_t2288670911 * ___U3CU3Ef__mgU24cacheD_30;

public:
	inline static int32_t get_offset_of_ARFrameUpdatedEvent_0() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___ARFrameUpdatedEvent_0)); }
	inline ARFrameUpdate_t4171011957 * get_ARFrameUpdatedEvent_0() const { return ___ARFrameUpdatedEvent_0; }
	inline ARFrameUpdate_t4171011957 ** get_address_of_ARFrameUpdatedEvent_0() { return &___ARFrameUpdatedEvent_0; }
	inline void set_ARFrameUpdatedEvent_0(ARFrameUpdate_t4171011957 * value)
	{
		___ARFrameUpdatedEvent_0 = value;
		Il2CppCodeGenWriteBarrier((&___ARFrameUpdatedEvent_0), value);
	}

	inline static int32_t get_offset_of_ARAnchorAddedEvent_1() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___ARAnchorAddedEvent_1)); }
	inline ARAnchorAdded_t4129714184 * get_ARAnchorAddedEvent_1() const { return ___ARAnchorAddedEvent_1; }
	inline ARAnchorAdded_t4129714184 ** get_address_of_ARAnchorAddedEvent_1() { return &___ARAnchorAddedEvent_1; }
	inline void set_ARAnchorAddedEvent_1(ARAnchorAdded_t4129714184 * value)
	{
		___ARAnchorAddedEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorAddedEvent_1), value);
	}

	inline static int32_t get_offset_of_ARAnchorUpdatedEvent_2() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___ARAnchorUpdatedEvent_2)); }
	inline ARAnchorUpdated_t4006067148 * get_ARAnchorUpdatedEvent_2() const { return ___ARAnchorUpdatedEvent_2; }
	inline ARAnchorUpdated_t4006067148 ** get_address_of_ARAnchorUpdatedEvent_2() { return &___ARAnchorUpdatedEvent_2; }
	inline void set_ARAnchorUpdatedEvent_2(ARAnchorUpdated_t4006067148 * value)
	{
		___ARAnchorUpdatedEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorUpdatedEvent_2), value);
	}

	inline static int32_t get_offset_of_ARAnchorRemovedEvent_3() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___ARAnchorRemovedEvent_3)); }
	inline ARAnchorRemoved_t1440883333 * get_ARAnchorRemovedEvent_3() const { return ___ARAnchorRemovedEvent_3; }
	inline ARAnchorRemoved_t1440883333 ** get_address_of_ARAnchorRemovedEvent_3() { return &___ARAnchorRemovedEvent_3; }
	inline void set_ARAnchorRemovedEvent_3(ARAnchorRemoved_t1440883333 * value)
	{
		___ARAnchorRemovedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorRemovedEvent_3), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorAddedEvent_4() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___ARUserAnchorAddedEvent_4)); }
	inline ARUserAnchorAdded_t3379712128 * get_ARUserAnchorAddedEvent_4() const { return ___ARUserAnchorAddedEvent_4; }
	inline ARUserAnchorAdded_t3379712128 ** get_address_of_ARUserAnchorAddedEvent_4() { return &___ARUserAnchorAddedEvent_4; }
	inline void set_ARUserAnchorAddedEvent_4(ARUserAnchorAdded_t3379712128 * value)
	{
		___ARUserAnchorAddedEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorAddedEvent_4), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorUpdatedEvent_5() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___ARUserAnchorUpdatedEvent_5)); }
	inline ARUserAnchorUpdated_t659752546 * get_ARUserAnchorUpdatedEvent_5() const { return ___ARUserAnchorUpdatedEvent_5; }
	inline ARUserAnchorUpdated_t659752546 ** get_address_of_ARUserAnchorUpdatedEvent_5() { return &___ARUserAnchorUpdatedEvent_5; }
	inline void set_ARUserAnchorUpdatedEvent_5(ARUserAnchorUpdated_t659752546 * value)
	{
		___ARUserAnchorUpdatedEvent_5 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorUpdatedEvent_5), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorRemovedEvent_6() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___ARUserAnchorRemovedEvent_6)); }
	inline ARUserAnchorRemoved_t29952727 * get_ARUserAnchorRemovedEvent_6() const { return ___ARUserAnchorRemovedEvent_6; }
	inline ARUserAnchorRemoved_t29952727 ** get_address_of_ARUserAnchorRemovedEvent_6() { return &___ARUserAnchorRemovedEvent_6; }
	inline void set_ARUserAnchorRemovedEvent_6(ARUserAnchorRemoved_t29952727 * value)
	{
		___ARUserAnchorRemovedEvent_6 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorRemovedEvent_6), value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorAddedEvent_7() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___ARFaceAnchorAddedEvent_7)); }
	inline ARFaceAnchorAdded_t1959465719 * get_ARFaceAnchorAddedEvent_7() const { return ___ARFaceAnchorAddedEvent_7; }
	inline ARFaceAnchorAdded_t1959465719 ** get_address_of_ARFaceAnchorAddedEvent_7() { return &___ARFaceAnchorAddedEvent_7; }
	inline void set_ARFaceAnchorAddedEvent_7(ARFaceAnchorAdded_t1959465719 * value)
	{
		___ARFaceAnchorAddedEvent_7 = value;
		Il2CppCodeGenWriteBarrier((&___ARFaceAnchorAddedEvent_7), value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorUpdatedEvent_8() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___ARFaceAnchorUpdatedEvent_8)); }
	inline ARFaceAnchorUpdated_t2915477063 * get_ARFaceAnchorUpdatedEvent_8() const { return ___ARFaceAnchorUpdatedEvent_8; }
	inline ARFaceAnchorUpdated_t2915477063 ** get_address_of_ARFaceAnchorUpdatedEvent_8() { return &___ARFaceAnchorUpdatedEvent_8; }
	inline void set_ARFaceAnchorUpdatedEvent_8(ARFaceAnchorUpdated_t2915477063 * value)
	{
		___ARFaceAnchorUpdatedEvent_8 = value;
		Il2CppCodeGenWriteBarrier((&___ARFaceAnchorUpdatedEvent_8), value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorRemovedEvent_9() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___ARFaceAnchorRemovedEvent_9)); }
	inline ARFaceAnchorRemoved_t1146351916 * get_ARFaceAnchorRemovedEvent_9() const { return ___ARFaceAnchorRemovedEvent_9; }
	inline ARFaceAnchorRemoved_t1146351916 ** get_address_of_ARFaceAnchorRemovedEvent_9() { return &___ARFaceAnchorRemovedEvent_9; }
	inline void set_ARFaceAnchorRemovedEvent_9(ARFaceAnchorRemoved_t1146351916 * value)
	{
		___ARFaceAnchorRemovedEvent_9 = value;
		Il2CppCodeGenWriteBarrier((&___ARFaceAnchorRemovedEvent_9), value);
	}

	inline static int32_t get_offset_of_ARSessionFailedEvent_10() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___ARSessionFailedEvent_10)); }
	inline ARSessionFailed_t45313083 * get_ARSessionFailedEvent_10() const { return ___ARSessionFailedEvent_10; }
	inline ARSessionFailed_t45313083 ** get_address_of_ARSessionFailedEvent_10() { return &___ARSessionFailedEvent_10; }
	inline void set_ARSessionFailedEvent_10(ARSessionFailed_t45313083 * value)
	{
		___ARSessionFailedEvent_10 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionFailedEvent_10), value);
	}

	inline static int32_t get_offset_of_ARSessionInterruptedEvent_11() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___ARSessionInterruptedEvent_11)); }
	inline ARSessionCallback_t1260738157 * get_ARSessionInterruptedEvent_11() const { return ___ARSessionInterruptedEvent_11; }
	inline ARSessionCallback_t1260738157 ** get_address_of_ARSessionInterruptedEvent_11() { return &___ARSessionInterruptedEvent_11; }
	inline void set_ARSessionInterruptedEvent_11(ARSessionCallback_t1260738157 * value)
	{
		___ARSessionInterruptedEvent_11 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionInterruptedEvent_11), value);
	}

	inline static int32_t get_offset_of_ARSessioninterruptionEndedEvent_12() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___ARSessioninterruptionEndedEvent_12)); }
	inline ARSessionCallback_t1260738157 * get_ARSessioninterruptionEndedEvent_12() const { return ___ARSessioninterruptionEndedEvent_12; }
	inline ARSessionCallback_t1260738157 ** get_address_of_ARSessioninterruptionEndedEvent_12() { return &___ARSessioninterruptionEndedEvent_12; }
	inline void set_ARSessioninterruptionEndedEvent_12(ARSessionCallback_t1260738157 * value)
	{
		___ARSessioninterruptionEndedEvent_12 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessioninterruptionEndedEvent_12), value);
	}

	inline static int32_t get_offset_of_ARSessionTrackingChangedEvent_13() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___ARSessionTrackingChangedEvent_13)); }
	inline ARSessionTrackingChanged_t133365316 * get_ARSessionTrackingChangedEvent_13() const { return ___ARSessionTrackingChangedEvent_13; }
	inline ARSessionTrackingChanged_t133365316 ** get_address_of_ARSessionTrackingChangedEvent_13() { return &___ARSessionTrackingChangedEvent_13; }
	inline void set_ARSessionTrackingChangedEvent_13(ARSessionTrackingChanged_t133365316 * value)
	{
		___ARSessionTrackingChangedEvent_13 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionTrackingChangedEvent_13), value);
	}

	inline static int32_t get_offset_of_s_Camera_15() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___s_Camera_15)); }
	inline UnityARCamera_t3850600959  get_s_Camera_15() const { return ___s_Camera_15; }
	inline UnityARCamera_t3850600959 * get_address_of_s_Camera_15() { return &___s_Camera_15; }
	inline void set_s_Camera_15(UnityARCamera_t3850600959  value)
	{
		___s_Camera_15 = value;
	}

	inline static int32_t get_offset_of_s_UnityARSessionNativeInterface_16() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___s_UnityARSessionNativeInterface_16)); }
	inline UnityARSessionNativeInterface_t3613495002 * get_s_UnityARSessionNativeInterface_16() const { return ___s_UnityARSessionNativeInterface_16; }
	inline UnityARSessionNativeInterface_t3613495002 ** get_address_of_s_UnityARSessionNativeInterface_16() { return &___s_UnityARSessionNativeInterface_16; }
	inline void set_s_UnityARSessionNativeInterface_16(UnityARSessionNativeInterface_t3613495002 * value)
	{
		___s_UnityARSessionNativeInterface_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_UnityARSessionNativeInterface_16), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_17() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___U3CU3Ef__mgU24cache0_17)); }
	inline internal_ARFrameUpdate_t2989169495 * get_U3CU3Ef__mgU24cache0_17() const { return ___U3CU3Ef__mgU24cache0_17; }
	inline internal_ARFrameUpdate_t2989169495 ** get_address_of_U3CU3Ef__mgU24cache0_17() { return &___U3CU3Ef__mgU24cache0_17; }
	inline void set_U3CU3Ef__mgU24cache0_17(internal_ARFrameUpdate_t2989169495 * value)
	{
		___U3CU3Ef__mgU24cache0_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_17), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_18() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___U3CU3Ef__mgU24cache1_18)); }
	inline ARSessionFailed_t45313083 * get_U3CU3Ef__mgU24cache1_18() const { return ___U3CU3Ef__mgU24cache1_18; }
	inline ARSessionFailed_t45313083 ** get_address_of_U3CU3Ef__mgU24cache1_18() { return &___U3CU3Ef__mgU24cache1_18; }
	inline void set_U3CU3Ef__mgU24cache1_18(ARSessionFailed_t45313083 * value)
	{
		___U3CU3Ef__mgU24cache1_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_19() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___U3CU3Ef__mgU24cache2_19)); }
	inline ARSessionCallback_t1260738157 * get_U3CU3Ef__mgU24cache2_19() const { return ___U3CU3Ef__mgU24cache2_19; }
	inline ARSessionCallback_t1260738157 ** get_address_of_U3CU3Ef__mgU24cache2_19() { return &___U3CU3Ef__mgU24cache2_19; }
	inline void set_U3CU3Ef__mgU24cache2_19(ARSessionCallback_t1260738157 * value)
	{
		___U3CU3Ef__mgU24cache2_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_20() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___U3CU3Ef__mgU24cache3_20)); }
	inline ARSessionCallback_t1260738157 * get_U3CU3Ef__mgU24cache3_20() const { return ___U3CU3Ef__mgU24cache3_20; }
	inline ARSessionCallback_t1260738157 ** get_address_of_U3CU3Ef__mgU24cache3_20() { return &___U3CU3Ef__mgU24cache3_20; }
	inline void set_U3CU3Ef__mgU24cache3_20(ARSessionCallback_t1260738157 * value)
	{
		___U3CU3Ef__mgU24cache3_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_21() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___U3CU3Ef__mgU24cache4_21)); }
	inline internal_ARSessionTrackingChanged_t383942441 * get_U3CU3Ef__mgU24cache4_21() const { return ___U3CU3Ef__mgU24cache4_21; }
	inline internal_ARSessionTrackingChanged_t383942441 ** get_address_of_U3CU3Ef__mgU24cache4_21() { return &___U3CU3Ef__mgU24cache4_21; }
	inline void set_U3CU3Ef__mgU24cache4_21(internal_ARSessionTrackingChanged_t383942441 * value)
	{
		___U3CU3Ef__mgU24cache4_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_22() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___U3CU3Ef__mgU24cache5_22)); }
	inline internal_ARAnchorAdded_t2722114366 * get_U3CU3Ef__mgU24cache5_22() const { return ___U3CU3Ef__mgU24cache5_22; }
	inline internal_ARAnchorAdded_t2722114366 ** get_address_of_U3CU3Ef__mgU24cache5_22() { return &___U3CU3Ef__mgU24cache5_22; }
	inline void set_U3CU3Ef__mgU24cache5_22(internal_ARAnchorAdded_t2722114366 * value)
	{
		___U3CU3Ef__mgU24cache5_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_23() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___U3CU3Ef__mgU24cache6_23)); }
	inline internal_ARAnchorUpdated_t3428118642 * get_U3CU3Ef__mgU24cache6_23() const { return ___U3CU3Ef__mgU24cache6_23; }
	inline internal_ARAnchorUpdated_t3428118642 ** get_address_of_U3CU3Ef__mgU24cache6_23() { return &___U3CU3Ef__mgU24cache6_23; }
	inline void set_U3CU3Ef__mgU24cache6_23(internal_ARAnchorUpdated_t3428118642 * value)
	{
		___U3CU3Ef__mgU24cache6_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_24() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___U3CU3Ef__mgU24cache7_24)); }
	inline internal_ARAnchorRemoved_t4263028292 * get_U3CU3Ef__mgU24cache7_24() const { return ___U3CU3Ef__mgU24cache7_24; }
	inline internal_ARAnchorRemoved_t4263028292 ** get_address_of_U3CU3Ef__mgU24cache7_24() { return &___U3CU3Ef__mgU24cache7_24; }
	inline void set_U3CU3Ef__mgU24cache7_24(internal_ARAnchorRemoved_t4263028292 * value)
	{
		___U3CU3Ef__mgU24cache7_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_25() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___U3CU3Ef__mgU24cache8_25)); }
	inline internal_ARUserAnchorAdded_t3904973336 * get_U3CU3Ef__mgU24cache8_25() const { return ___U3CU3Ef__mgU24cache8_25; }
	inline internal_ARUserAnchorAdded_t3904973336 ** get_address_of_U3CU3Ef__mgU24cache8_25() { return &___U3CU3Ef__mgU24cache8_25; }
	inline void set_U3CU3Ef__mgU24cache8_25(internal_ARUserAnchorAdded_t3904973336 * value)
	{
		___U3CU3Ef__mgU24cache8_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_25), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_26() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___U3CU3Ef__mgU24cache9_26)); }
	inline internal_ARUserAnchorUpdated_t3147552389 * get_U3CU3Ef__mgU24cache9_26() const { return ___U3CU3Ef__mgU24cache9_26; }
	inline internal_ARUserAnchorUpdated_t3147552389 ** get_address_of_U3CU3Ef__mgU24cache9_26() { return &___U3CU3Ef__mgU24cache9_26; }
	inline void set_U3CU3Ef__mgU24cache9_26(internal_ARUserAnchorUpdated_t3147552389 * value)
	{
		___U3CU3Ef__mgU24cache9_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9_26), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_27() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___U3CU3Ef__mgU24cacheA_27)); }
	inline internal_ARUserAnchorRemoved_t49761082 * get_U3CU3Ef__mgU24cacheA_27() const { return ___U3CU3Ef__mgU24cacheA_27; }
	inline internal_ARUserAnchorRemoved_t49761082 ** get_address_of_U3CU3Ef__mgU24cacheA_27() { return &___U3CU3Ef__mgU24cacheA_27; }
	inline void set_U3CU3Ef__mgU24cacheA_27(internal_ARUserAnchorRemoved_t49761082 * value)
	{
		___U3CU3Ef__mgU24cacheA_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA_27), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_28() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___U3CU3Ef__mgU24cacheB_28)); }
	inline internal_ARFaceAnchorAdded_t1072116815 * get_U3CU3Ef__mgU24cacheB_28() const { return ___U3CU3Ef__mgU24cacheB_28; }
	inline internal_ARFaceAnchorAdded_t1072116815 ** get_address_of_U3CU3Ef__mgU24cacheB_28() { return &___U3CU3Ef__mgU24cacheB_28; }
	inline void set_U3CU3Ef__mgU24cacheB_28(internal_ARFaceAnchorAdded_t1072116815 * value)
	{
		___U3CU3Ef__mgU24cacheB_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_29() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___U3CU3Ef__mgU24cacheC_29)); }
	inline internal_ARFaceAnchorUpdated_t2364009384 * get_U3CU3Ef__mgU24cacheC_29() const { return ___U3CU3Ef__mgU24cacheC_29; }
	inline internal_ARFaceAnchorUpdated_t2364009384 ** get_address_of_U3CU3Ef__mgU24cacheC_29() { return &___U3CU3Ef__mgU24cacheC_29; }
	inline void set_U3CU3Ef__mgU24cacheC_29(internal_ARFaceAnchorUpdated_t2364009384 * value)
	{
		___U3CU3Ef__mgU24cacheC_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheC_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_30() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3613495002_StaticFields, ___U3CU3Ef__mgU24cacheD_30)); }
	inline internal_ARFaceAnchorRemoved_t2288670911 * get_U3CU3Ef__mgU24cacheD_30() const { return ___U3CU3Ef__mgU24cacheD_30; }
	inline internal_ARFaceAnchorRemoved_t2288670911 ** get_address_of_U3CU3Ef__mgU24cacheD_30() { return &___U3CU3Ef__mgU24cacheD_30; }
	inline void set_U3CU3Ef__mgU24cacheD_30(internal_ARFaceAnchorRemoved_t2288670911 * value)
	{
		___U3CU3Ef__mgU24cacheD_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheD_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARSESSIONNATIVEINTERFACE_T3613495002_H
#ifndef ARSESSIONTRACKINGCHANGED_T133365316_H
#define ARSESSIONTRACKINGCHANGED_T133365316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged
struct  ARSessionTrackingChanged_t133365316  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSESSIONTRACKINGCHANGED_T133365316_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4500 = { sizeof (UnityARLightEstimate_t1503333468)+ sizeof (RuntimeObject), sizeof(UnityARLightEstimate_t1503333468 ), 0, 0 };
extern const int32_t g_FieldOffsetTable4500[2] = 
{
	UnityARLightEstimate_t1503333468::get_offset_of_ambientIntensity_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARLightEstimate_t1503333468::get_offset_of_ambientColorTemperature_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4501 = { sizeof (MarshalDirectionalLightEstimate_t4273225709)+ sizeof (RuntimeObject), sizeof(MarshalDirectionalLightEstimate_t4273225709 ), 0, 0 };
extern const int32_t g_FieldOffsetTable4501[2] = 
{
	MarshalDirectionalLightEstimate_t4273225709::get_offset_of_primaryDirAndIntensity_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MarshalDirectionalLightEstimate_t4273225709::get_offset_of_sphericalHarmonicCoefficientsPtr_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4502 = { sizeof (UnityARDirectionalLightEstimate_t2833913632), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4502[3] = 
{
	UnityARDirectionalLightEstimate_t2833913632::get_offset_of_primaryLightDirection_0(),
	UnityARDirectionalLightEstimate_t2833913632::get_offset_of_primaryLightIntensity_1(),
	UnityARDirectionalLightEstimate_t2833913632::get_offset_of_sphericalHarmonicsCoefficients_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4503 = { sizeof (LightDataType_t703210338)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4503[3] = 
{
	LightDataType_t703210338::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4504 = { sizeof (UnityMarshalLightData_t2530384755)+ sizeof (RuntimeObject), sizeof(UnityMarshalLightData_t2530384755 ), 0, 0 };
extern const int32_t g_FieldOffsetTable4504[3] = 
{
	UnityMarshalLightData_t2530384755::get_offset_of_arLightingType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityMarshalLightData_t2530384755::get_offset_of_arLightEstimate_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityMarshalLightData_t2530384755::get_offset_of_arDirectonalLightEstimate_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4505 = { sizeof (UnityARLightData_t1777667307)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4505[3] = 
{
	UnityARLightData_t1777667307::get_offset_of_arLightingType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARLightData_t1777667307::get_offset_of_arLightEstimate_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARLightData_t1777667307::get_offset_of_arDirectonalLightEstimate_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4506 = { sizeof (ARPlaneAnchor_t1133095680)+ sizeof (RuntimeObject), sizeof(ARPlaneAnchor_t1133095680_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable4506[5] = 
{
	ARPlaneAnchor_t1133095680::get_offset_of_identifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARPlaneAnchor_t1133095680::get_offset_of_transform_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARPlaneAnchor_t1133095680::get_offset_of_alignment_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARPlaneAnchor_t1133095680::get_offset_of_center_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARPlaneAnchor_t1133095680::get_offset_of_extent_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4507 = { sizeof (ARPlaneAnchorAlignment_t4058452959)+ sizeof (RuntimeObject), sizeof(int64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4507[2] = 
{
	ARPlaneAnchorAlignment_t4058452959::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4508 = { sizeof (ARPoint_t2706858983)+ sizeof (RuntimeObject), sizeof(ARPoint_t2706858983 ), 0, 0 };
extern const int32_t g_FieldOffsetTable4508[2] = 
{
	ARPoint_t2706858983::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARPoint_t2706858983::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4509 = { sizeof (ARRect_t1673095439)+ sizeof (RuntimeObject), sizeof(ARRect_t1673095439 ), 0, 0 };
extern const int32_t g_FieldOffsetTable4509[2] = 
{
	ARRect_t1673095439::get_offset_of_origin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARRect_t1673095439::get_offset_of_size_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4510 = { sizeof (ARSize_t1964593188)+ sizeof (RuntimeObject), sizeof(ARSize_t1964593188 ), 0, 0 };
extern const int32_t g_FieldOffsetTable4510[2] = 
{
	ARSize_t1964593188::get_offset_of_width_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARSize_t1964593188::get_offset_of_height_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4511 = { sizeof (ARTextureHandles_t540054800)+ sizeof (RuntimeObject), sizeof(ARTextureHandles_t540054800 ), 0, 0 };
extern const int32_t g_FieldOffsetTable4511[2] = 
{
	ARTextureHandles_t540054800::get_offset_of_textureY_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARTextureHandles_t540054800::get_offset_of_textureCbCr_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4512 = { sizeof (ARTrackingQuality_t4233185561)+ sizeof (RuntimeObject), sizeof(int64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4512[5] = 
{
	ARTrackingQuality_t4233185561::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4513 = { sizeof (ARTrackingState_t641836287)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4513[4] = 
{
	ARTrackingState_t641836287::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4514 = { sizeof (ARTrackingStateReason_t2720611925)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4514[5] = 
{
	ARTrackingStateReason_t2720611925::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4515 = { sizeof (ARUserAnchor_t4048685165)+ sizeof (RuntimeObject), sizeof(ARUserAnchor_t4048685165_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable4515[2] = 
{
	ARUserAnchor_t4048685165::get_offset_of_identifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARUserAnchor_t4048685165::get_offset_of_transform_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4516 = { sizeof (UnityARMatrix4x4_t4108331264)+ sizeof (RuntimeObject), sizeof(UnityARMatrix4x4_t4108331264 ), 0, 0 };
extern const int32_t g_FieldOffsetTable4516[4] = 
{
	UnityARMatrix4x4_t4108331264::get_offset_of_column0_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARMatrix4x4_t4108331264::get_offset_of_column1_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARMatrix4x4_t4108331264::get_offset_of_column2_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARMatrix4x4_t4108331264::get_offset_of_column3_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4517 = { sizeof (UnityVideoParams_t140646428)+ sizeof (RuntimeObject), sizeof(UnityVideoParams_t140646428 ), 0, 0 };
extern const int32_t g_FieldOffsetTable4517[5] = 
{
	UnityVideoParams_t140646428::get_offset_of_yWidth_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityVideoParams_t140646428::get_offset_of_yHeight_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityVideoParams_t140646428::get_offset_of_screenOrientation_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityVideoParams_t140646428::get_offset_of_texCoordScale_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityVideoParams_t140646428::get_offset_of_cvPixelBufferPtr_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4518 = { sizeof (internal_UnityARCamera_t1003412738)+ sizeof (RuntimeObject), sizeof(internal_UnityARCamera_t1003412738 ), 0, 0 };
extern const int32_t g_FieldOffsetTable4518[8] = 
{
	internal_UnityARCamera_t1003412738::get_offset_of_worldTransform_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t1003412738::get_offset_of_projectionMatrix_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t1003412738::get_offset_of_trackingState_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t1003412738::get_offset_of_trackingReason_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t1003412738::get_offset_of_videoParams_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t1003412738::get_offset_of_lightData_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t1003412738::get_offset_of_displayTransform_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t1003412738::get_offset_of_getPointCloudData_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4519 = { sizeof (UnityARCamera_t3850600959)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4519[8] = 
{
	UnityARCamera_t3850600959::get_offset_of_worldTransform_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t3850600959::get_offset_of_projectionMatrix_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t3850600959::get_offset_of_trackingState_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t3850600959::get_offset_of_trackingReason_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t3850600959::get_offset_of_videoParams_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t3850600959::get_offset_of_lightData_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t3850600959::get_offset_of_displayTransform_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t3850600959::get_offset_of_pointCloudData_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4520 = { sizeof (UnityARAnchorData_t2078617210)+ sizeof (RuntimeObject), sizeof(UnityARAnchorData_t2078617210 ), 0, 0 };
extern const int32_t g_FieldOffsetTable4520[5] = 
{
	UnityARAnchorData_t2078617210::get_offset_of_ptrIdentifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARAnchorData_t2078617210::get_offset_of_transform_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARAnchorData_t2078617210::get_offset_of_alignment_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARAnchorData_t2078617210::get_offset_of_center_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARAnchorData_t2078617210::get_offset_of_extent_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4521 = { sizeof (UnityARUserAnchorData_t838402456)+ sizeof (RuntimeObject), sizeof(UnityARUserAnchorData_t838402456 ), 0, 0 };
extern const int32_t g_FieldOffsetTable4521[2] = 
{
	UnityARUserAnchorData_t838402456::get_offset_of_ptrIdentifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARUserAnchorData_t838402456::get_offset_of_transform_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4522 = { sizeof (UnityARHitTestResult_t1828509540)+ sizeof (RuntimeObject), sizeof(UnityARHitTestResult_t1828509540_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable4522[6] = 
{
	UnityARHitTestResult_t1828509540::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARHitTestResult_t1828509540::get_offset_of_distance_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARHitTestResult_t1828509540::get_offset_of_localTransform_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARHitTestResult_t1828509540::get_offset_of_worldTransform_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARHitTestResult_t1828509540::get_offset_of_anchor_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARHitTestResult_t1828509540::get_offset_of_isValid_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4523 = { sizeof (UnityARAlignment_t3332840936)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4523[4] = 
{
	UnityARAlignment_t3332840936::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4524 = { sizeof (UnityARPlaneDetection_t1624824292)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4524[3] = 
{
	UnityARPlaneDetection_t1624824292::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4525 = { sizeof (ARKitSessionConfiguration_t4211207803)+ sizeof (RuntimeObject), sizeof(ARKitSessionConfiguration_t4211207803_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable4525[3] = 
{
	ARKitSessionConfiguration_t4211207803::get_offset_of_alignment_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitSessionConfiguration_t4211207803::get_offset_of_getPointCloudData_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitSessionConfiguration_t4211207803::get_offset_of_enableLightEstimation_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4526 = { sizeof (ARKitWorldTrackingSessionConfiguration_t1345355002)+ sizeof (RuntimeObject), sizeof(ARKitWorldTrackingSessionConfiguration_t1345355002_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable4526[4] = 
{
	ARKitWorldTrackingSessionConfiguration_t1345355002::get_offset_of_alignment_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitWorldTrackingSessionConfiguration_t1345355002::get_offset_of_planeDetection_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitWorldTrackingSessionConfiguration_t1345355002::get_offset_of_getPointCloudData_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitWorldTrackingSessionConfiguration_t1345355002::get_offset_of_enableLightEstimation_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4527 = { sizeof (ARKitFaceTrackingConfiguration_t2505776928)+ sizeof (RuntimeObject), sizeof(ARKitFaceTrackingConfiguration_t2505776928_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable4527[2] = 
{
	ARKitFaceTrackingConfiguration_t2505776928::get_offset_of_alignment_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitFaceTrackingConfiguration_t2505776928::get_offset_of_enableLightEstimation_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4528 = { sizeof (UnityARSessionRunOption_t1621601105)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4528[3] = 
{
	UnityARSessionRunOption_t1621601105::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4529 = { sizeof (UnityARSessionNativeInterface_t3613495002), -1, sizeof(UnityARSessionNativeInterface_t3613495002_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4529[31] = 
{
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_ARFrameUpdatedEvent_0(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_ARAnchorAddedEvent_1(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_ARAnchorUpdatedEvent_2(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_ARAnchorRemovedEvent_3(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_ARUserAnchorAddedEvent_4(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_ARUserAnchorUpdatedEvent_5(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_ARUserAnchorRemovedEvent_6(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_ARFaceAnchorAddedEvent_7(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_ARFaceAnchorUpdatedEvent_8(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_ARFaceAnchorRemovedEvent_9(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_ARSessionFailedEvent_10(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_ARSessionInterruptedEvent_11(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_ARSessioninterruptionEndedEvent_12(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_ARSessionTrackingChangedEvent_13(),
	UnityARSessionNativeInterface_t3613495002::get_offset_of_m_NativeARSession_14(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_s_Camera_15(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_s_UnityARSessionNativeInterface_16(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_17(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_18(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2_19(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3_20(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_U3CU3Ef__mgU24cache4_21(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_U3CU3Ef__mgU24cache5_22(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_U3CU3Ef__mgU24cache6_23(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_U3CU3Ef__mgU24cache7_24(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_U3CU3Ef__mgU24cache8_25(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_U3CU3Ef__mgU24cache9_26(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheA_27(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheB_28(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheC_29(),
	UnityARSessionNativeInterface_t3613495002_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheD_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4530 = { sizeof (ARFrameUpdate_t4171011957), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4531 = { sizeof (ARAnchorAdded_t4129714184), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4532 = { sizeof (ARAnchorUpdated_t4006067148), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4533 = { sizeof (ARAnchorRemoved_t1440883333), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4534 = { sizeof (ARUserAnchorAdded_t3379712128), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4535 = { sizeof (ARUserAnchorUpdated_t659752546), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4536 = { sizeof (ARUserAnchorRemoved_t29952727), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4537 = { sizeof (ARFaceAnchorAdded_t1959465719), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4538 = { sizeof (ARFaceAnchorUpdated_t2915477063), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4539 = { sizeof (ARFaceAnchorRemoved_t1146351916), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4540 = { sizeof (ARSessionFailed_t45313083), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4541 = { sizeof (ARSessionCallback_t1260738157), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4542 = { sizeof (ARSessionTrackingChanged_t133365316), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4543 = { sizeof (internal_ARFrameUpdate_t2989169495), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4544 = { sizeof (internal_ARAnchorAdded_t2722114366), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4545 = { sizeof (internal_ARAnchorUpdated_t3428118642), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4546 = { sizeof (internal_ARAnchorRemoved_t4263028292), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4547 = { sizeof (internal_ARUserAnchorAdded_t3904973336), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4548 = { sizeof (internal_ARUserAnchorUpdated_t3147552389), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4549 = { sizeof (internal_ARUserAnchorRemoved_t49761082), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4550 = { sizeof (internal_ARFaceAnchorAdded_t1072116815), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4551 = { sizeof (internal_ARFaceAnchorUpdated_t2364009384), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4552 = { sizeof (internal_ARFaceAnchorRemoved_t2288670911), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4553 = { sizeof (internal_ARSessionTrackingChanged_t383942441), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4554 = { sizeof (U3CPrivateImplementationDetailsU3E_t1698564610), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4554[17] = 
{
	U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields::get_offset_of_U24fieldU2DCE5AFBB0D2B25FA36AC018803534E8B5A9C5BBCA_0(),
	U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields::get_offset_of_U24fieldU2DE28E85E1285ABDE5719DBD609CD3FF7DB031B080_1(),
	U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields::get_offset_of_U24fieldU2D373B494F210C656134C5728D551D4C97B013EB33_2(),
	U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields::get_offset_of_U24fieldU2DF5B52AE718355A38E8190D5F947B52DFB427A1D7_3(),
	U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields::get_offset_of_U24fieldU2D81D5D8B4DDFA3FBB954AC400415044EB9F11E33E_4(),
	U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields::get_offset_of_U24fieldU2DC0C10EC6AF4A4101F894B153E1CD493ADC01A67F_5(),
	U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields::get_offset_of_U24fieldU2D6A94F0C3DCA389344CEDB99F171FA1E092E842E6_6(),
	U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields::get_offset_of_U24fieldU2D8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7(),
	U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields::get_offset_of_U24fieldU2DF5F598DAC7D3E479CD72BAAB99EE6617D8190398_8(),
	U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields::get_offset_of_U24fieldU2D2492606636F4A4666E0D617B51116A5A68539881_9(),
	U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields::get_offset_of_U24fieldU2D472655E8FD2B8B97DB5D188D273A20E8834C19BB_10(),
	U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields::get_offset_of_U24fieldU2DD8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11(),
	U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields::get_offset_of_U24fieldU2DFD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12(),
	U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields::get_offset_of_U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_13(),
	U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields::get_offset_of_U24fieldU2D794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_14(),
	U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields::get_offset_of_U24fieldU2DBEEEBCEF33AF5B72B0463DF9185C0226DE5909AD_15(),
	U3CPrivateImplementationDetailsU3E_t1698564610_StaticFields::get_offset_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4555 = { sizeof (U24ArrayTypeU3D16_t2289608777)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D16_t2289608777 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4556 = { sizeof (U24ArrayTypeU3D1024_t1496239056)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D1024_t1496239056 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4557 = { sizeof (U24ArrayTypeU3D100_t3215863175)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D100_t3215863175 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4558 = { sizeof (U24ArrayTypeU3D2052_t2372438108)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D2052_t2372438108 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4559 = { sizeof (U24ArrayTypeU3D128_t2571979753)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D128_t2571979753 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4560 = { sizeof (U24ArrayTypeU3D64_t4078931962)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D64_t4078931962 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4561 = { sizeof (U24ArrayTypeU3D32_t4145487142)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D32_t4145487142 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4562 = { sizeof (U24ArrayTypeU3D12_t37505503)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D12_t37505503 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4563 = { sizeof (U24ArrayTypeU3D116_t541649238)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D116_t541649238 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4564 = { sizeof (U24ArrayTypeU3D20_t2271475898)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D20_t2271475898 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4565 = { sizeof (U24ArrayTypeU3D24_t1113226220)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D24_t1113226220 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4566 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4566[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4567 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4567[2] = 
{
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
