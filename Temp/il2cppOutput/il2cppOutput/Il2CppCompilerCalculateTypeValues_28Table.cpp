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
// System.Attribute[]
struct AttributeU5BU5D_t983122643;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1804308463;
// System.Collections.IComparer
struct IComparer_t820638711;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t421778690;
// System.Data.PropertyCollection
struct PropertyCollection_t3163539028;
// System.Data.Common.Index
struct Index_t1844808025;
// System.Data.ConstraintCollection
struct ConstraintCollection_t2199860084;
// System.Data.DataSet
struct DataSet_t2860913429;
// System.Type
struct Type_t;
// System.Int32[]
struct Int32U5BU5D_t1719863841;
// System.Data.Common.Key
struct Key_t950964578;
// System.Data.DataTable
struct DataTable_t458307818;
// System.Collections.Stack
struct Stack_t1828224996;
// System.Data.DataRow[]
struct DataRowU5BU5D_t878818449;
// System.Collections.BitArray
struct BitArray_t4068722914;
// System.Data.DataColumn
struct DataColumn_t2121335505;
// System.Collections.ArrayList
struct ArrayList_t1090370772;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1040753827;
// System.Collections.IDictionary
struct IDictionary_t1279208843;
// System.Object[]
struct ObjectU5BU5D_t864419831;
// System.Char[]
struct CharU5BU5D_t3282355116;
// System.IntPtr[]
struct IntPtrU5BU5D_t271461801;
// System.Data.UniqueConstraint
struct UniqueConstraint_t426712363;
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t654460676;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t1250929356;
// System.String[]
struct StringU5BU5D_t1002137567;
// System.ComponentModel.ISite
struct ISite_t2505511219;
// System.UInt32[]
struct UInt32U5BU5D_t1751769761;
// System.Data.DataRow
struct DataRow_t409901744;
// System.Collections.Hashtable
struct Hashtable_t188184851;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t2973298682;
// System.Data.DataRelation
struct DataRelation_t3388391349;
// System.Byte[]
struct ByteU5BU5D_t2378657911;
// System.Data.Constraint[]
struct ConstraintU5BU5D_t2463382585;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t1435054551;
// System.ComponentModel.TypeConverter
struct TypeConverter_t192055412;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_t3135707549;
// System.Data.Common.DataColumnMappingCollection
struct DataColumnMappingCollection_t2937617443;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1115686309;
// System.SByte[]
struct SByteU5BU5D_t3439731044;
// System.Int16[]
struct Int16U5BU5D_t1343800226;
// System.Double[]
struct DoubleU5BU5D_t3111444758;
// System.UInt16[]
struct UInt16U5BU5D_t2122059562;
// System.Single[]
struct SingleU5BU5D_t3081648790;
// System.Int64[]
struct Int64U5BU5D_t1142497760;
// System.UInt64[]
struct UInt64U5BU5D_t3220544368;
// System.Data.DataRelation[]
struct DataRelationU5BU5D_t3995634136;
// System.Collections.IList
struct IList_t2291041951;
// System.Data.Common.DataTableMappingCollection
struct DataTableMappingCollection_t2563982741;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t796945479;
// System.Data.IDbCommand
struct IDbCommand_t25000760;
// System.ComponentModel.ListSortDirection[]
struct ListSortDirectionU5BU5D_t3286721238;
// System.Data.Common.DataContainer
struct DataContainer_t2006856459;




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
#ifndef MEMBERDESCRIPTOR_T1395163271_H
#define MEMBERDESCRIPTOR_T1395163271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t1395163271  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attrs
	AttributeU5BU5D_t983122643* ___attrs_1;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attrCollection
	AttributeCollection_t1804308463 * ___attrCollection_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t1395163271, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t1395163271, ___attrs_1)); }
	inline AttributeU5BU5D_t983122643* get_attrs_1() const { return ___attrs_1; }
	inline AttributeU5BU5D_t983122643** get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(AttributeU5BU5D_t983122643* value)
	{
		___attrs_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrs_1), value);
	}

	inline static int32_t get_offset_of_attrCollection_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t1395163271, ___attrCollection_2)); }
	inline AttributeCollection_t1804308463 * get_attrCollection_2() const { return ___attrCollection_2; }
	inline AttributeCollection_t1804308463 ** get_address_of_attrCollection_2() { return &___attrCollection_2; }
	inline void set_attrCollection_2(AttributeCollection_t1804308463 * value)
	{
		___attrCollection_2 = value;
		Il2CppCodeGenWriteBarrier((&___attrCollection_2), value);
	}
};

struct MemberDescriptor_t1395163271_StaticFields
{
public:
	// System.Collections.IComparer System.ComponentModel.MemberDescriptor::default_comparer
	RuntimeObject* ___default_comparer_3;

public:
	inline static int32_t get_offset_of_default_comparer_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t1395163271_StaticFields, ___default_comparer_3)); }
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
#endif // MEMBERDESCRIPTOR_T1395163271_H
#ifndef CONSTRAINT_T41516584_H
#define CONSTRAINT_T41516584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Constraint
struct  Constraint_t41516584  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.Data.Constraint::events
	EventHandlerList_t421778690 * ___events_1;
	// System.String System.Data.Constraint::_constraintName
	String_t* ____constraintName_2;
	// System.Data.PropertyCollection System.Data.Constraint::_properties
	PropertyCollection_t3163539028 * ____properties_3;
	// System.Data.Common.Index System.Data.Constraint::_index
	Index_t1844808025 * ____index_4;
	// System.Data.ConstraintCollection System.Data.Constraint::_constraintCollection
	ConstraintCollection_t2199860084 * ____constraintCollection_5;
	// System.Data.DataSet System.Data.Constraint::dataSet
	DataSet_t2860913429 * ___dataSet_6;
	// System.Boolean System.Data.Constraint::initInProgress
	bool ___initInProgress_7;

public:
	inline static int32_t get_offset_of_events_1() { return static_cast<int32_t>(offsetof(Constraint_t41516584, ___events_1)); }
	inline EventHandlerList_t421778690 * get_events_1() const { return ___events_1; }
	inline EventHandlerList_t421778690 ** get_address_of_events_1() { return &___events_1; }
	inline void set_events_1(EventHandlerList_t421778690 * value)
	{
		___events_1 = value;
		Il2CppCodeGenWriteBarrier((&___events_1), value);
	}

	inline static int32_t get_offset_of__constraintName_2() { return static_cast<int32_t>(offsetof(Constraint_t41516584, ____constraintName_2)); }
	inline String_t* get__constraintName_2() const { return ____constraintName_2; }
	inline String_t** get_address_of__constraintName_2() { return &____constraintName_2; }
	inline void set__constraintName_2(String_t* value)
	{
		____constraintName_2 = value;
		Il2CppCodeGenWriteBarrier((&____constraintName_2), value);
	}

	inline static int32_t get_offset_of__properties_3() { return static_cast<int32_t>(offsetof(Constraint_t41516584, ____properties_3)); }
	inline PropertyCollection_t3163539028 * get__properties_3() const { return ____properties_3; }
	inline PropertyCollection_t3163539028 ** get_address_of__properties_3() { return &____properties_3; }
	inline void set__properties_3(PropertyCollection_t3163539028 * value)
	{
		____properties_3 = value;
		Il2CppCodeGenWriteBarrier((&____properties_3), value);
	}

	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(Constraint_t41516584, ____index_4)); }
	inline Index_t1844808025 * get__index_4() const { return ____index_4; }
	inline Index_t1844808025 ** get_address_of__index_4() { return &____index_4; }
	inline void set__index_4(Index_t1844808025 * value)
	{
		____index_4 = value;
		Il2CppCodeGenWriteBarrier((&____index_4), value);
	}

	inline static int32_t get_offset_of__constraintCollection_5() { return static_cast<int32_t>(offsetof(Constraint_t41516584, ____constraintCollection_5)); }
	inline ConstraintCollection_t2199860084 * get__constraintCollection_5() const { return ____constraintCollection_5; }
	inline ConstraintCollection_t2199860084 ** get_address_of__constraintCollection_5() { return &____constraintCollection_5; }
	inline void set__constraintCollection_5(ConstraintCollection_t2199860084 * value)
	{
		____constraintCollection_5 = value;
		Il2CppCodeGenWriteBarrier((&____constraintCollection_5), value);
	}

	inline static int32_t get_offset_of_dataSet_6() { return static_cast<int32_t>(offsetof(Constraint_t41516584, ___dataSet_6)); }
	inline DataSet_t2860913429 * get_dataSet_6() const { return ___dataSet_6; }
	inline DataSet_t2860913429 ** get_address_of_dataSet_6() { return &___dataSet_6; }
	inline void set_dataSet_6(DataSet_t2860913429 * value)
	{
		___dataSet_6 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_6), value);
	}

	inline static int32_t get_offset_of_initInProgress_7() { return static_cast<int32_t>(offsetof(Constraint_t41516584, ___initInProgress_7)); }
	inline bool get_initInProgress_7() const { return ___initInProgress_7; }
	inline bool* get_address_of_initInProgress_7() { return &___initInProgress_7; }
	inline void set_initInProgress_7(bool value)
	{
		___initInProgress_7 = value;
	}
};

struct Constraint_t41516584_StaticFields
{
public:
	// System.Object System.Data.Constraint::beforeConstraintNameChange
	RuntimeObject * ___beforeConstraintNameChange_0;

public:
	inline static int32_t get_offset_of_beforeConstraintNameChange_0() { return static_cast<int32_t>(offsetof(Constraint_t41516584_StaticFields, ___beforeConstraintNameChange_0)); }
	inline RuntimeObject * get_beforeConstraintNameChange_0() const { return ___beforeConstraintNameChange_0; }
	inline RuntimeObject ** get_address_of_beforeConstraintNameChange_0() { return &___beforeConstraintNameChange_0; }
	inline void set_beforeConstraintNameChange_0(RuntimeObject * value)
	{
		___beforeConstraintNameChange_0 = value;
		Il2CppCodeGenWriteBarrier((&___beforeConstraintNameChange_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINT_T41516584_H
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
#ifndef DBDATARECORD_T1740184712_H
#define DBDATARECORD_T1740184712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbDataRecord
struct  DbDataRecord_t1740184712  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBDATARECORD_T1740184712_H
#ifndef DBPROVIDERFACTORY_T3699618837_H
#define DBPROVIDERFACTORY_T3699618837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbProviderFactory
struct  DbProviderFactory_t3699618837  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPROVIDERFACTORY_T3699618837_H
#ifndef DBTYPES_T2035465575_H
#define DBTYPES_T2035465575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbTypes
struct  DbTypes_t2035465575  : public RuntimeObject
{
public:

public:
};

struct DbTypes_t2035465575_StaticFields
{
public:
	// System.Type System.Data.Common.DbTypes::TypeOfBoolean
	Type_t * ___TypeOfBoolean_0;
	// System.Type System.Data.Common.DbTypes::TypeOfSByte
	Type_t * ___TypeOfSByte_1;
	// System.Type System.Data.Common.DbTypes::TypeOfChar
	Type_t * ___TypeOfChar_2;
	// System.Type System.Data.Common.DbTypes::TypeOfInt16
	Type_t * ___TypeOfInt16_3;
	// System.Type System.Data.Common.DbTypes::TypeOfInt32
	Type_t * ___TypeOfInt32_4;
	// System.Type System.Data.Common.DbTypes::TypeOfInt64
	Type_t * ___TypeOfInt64_5;
	// System.Type System.Data.Common.DbTypes::TypeOfByte
	Type_t * ___TypeOfByte_6;
	// System.Type System.Data.Common.DbTypes::TypeOfUInt16
	Type_t * ___TypeOfUInt16_7;
	// System.Type System.Data.Common.DbTypes::TypeOfUInt32
	Type_t * ___TypeOfUInt32_8;
	// System.Type System.Data.Common.DbTypes::TypeOfUInt64
	Type_t * ___TypeOfUInt64_9;
	// System.Type System.Data.Common.DbTypes::TypeOfDouble
	Type_t * ___TypeOfDouble_10;
	// System.Type System.Data.Common.DbTypes::TypeOfSingle
	Type_t * ___TypeOfSingle_11;
	// System.Type System.Data.Common.DbTypes::TypeOfDecimal
	Type_t * ___TypeOfDecimal_12;
	// System.Type System.Data.Common.DbTypes::TypeOfString
	Type_t * ___TypeOfString_13;
	// System.Type System.Data.Common.DbTypes::TypeOfDateTime
	Type_t * ___TypeOfDateTime_14;
	// System.Type System.Data.Common.DbTypes::TypeOfObject
	Type_t * ___TypeOfObject_15;
	// System.Type System.Data.Common.DbTypes::TypeOfGuid
	Type_t * ___TypeOfGuid_16;
	// System.Type System.Data.Common.DbTypes::TypeOfType
	Type_t * ___TypeOfType_17;
	// System.Type System.Data.Common.DbTypes::TypeOfByteArray
	Type_t * ___TypeOfByteArray_18;
	// System.Type System.Data.Common.DbTypes::TypeOfFloat
	Type_t * ___TypeOfFloat_19;
	// System.Type System.Data.Common.DbTypes::TypeOfTimespan
	Type_t * ___TypeOfTimespan_20;

public:
	inline static int32_t get_offset_of_TypeOfBoolean_0() { return static_cast<int32_t>(offsetof(DbTypes_t2035465575_StaticFields, ___TypeOfBoolean_0)); }
	inline Type_t * get_TypeOfBoolean_0() const { return ___TypeOfBoolean_0; }
	inline Type_t ** get_address_of_TypeOfBoolean_0() { return &___TypeOfBoolean_0; }
	inline void set_TypeOfBoolean_0(Type_t * value)
	{
		___TypeOfBoolean_0 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfBoolean_0), value);
	}

	inline static int32_t get_offset_of_TypeOfSByte_1() { return static_cast<int32_t>(offsetof(DbTypes_t2035465575_StaticFields, ___TypeOfSByte_1)); }
	inline Type_t * get_TypeOfSByte_1() const { return ___TypeOfSByte_1; }
	inline Type_t ** get_address_of_TypeOfSByte_1() { return &___TypeOfSByte_1; }
	inline void set_TypeOfSByte_1(Type_t * value)
	{
		___TypeOfSByte_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfSByte_1), value);
	}

	inline static int32_t get_offset_of_TypeOfChar_2() { return static_cast<int32_t>(offsetof(DbTypes_t2035465575_StaticFields, ___TypeOfChar_2)); }
	inline Type_t * get_TypeOfChar_2() const { return ___TypeOfChar_2; }
	inline Type_t ** get_address_of_TypeOfChar_2() { return &___TypeOfChar_2; }
	inline void set_TypeOfChar_2(Type_t * value)
	{
		___TypeOfChar_2 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfChar_2), value);
	}

	inline static int32_t get_offset_of_TypeOfInt16_3() { return static_cast<int32_t>(offsetof(DbTypes_t2035465575_StaticFields, ___TypeOfInt16_3)); }
	inline Type_t * get_TypeOfInt16_3() const { return ___TypeOfInt16_3; }
	inline Type_t ** get_address_of_TypeOfInt16_3() { return &___TypeOfInt16_3; }
	inline void set_TypeOfInt16_3(Type_t * value)
	{
		___TypeOfInt16_3 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfInt16_3), value);
	}

	inline static int32_t get_offset_of_TypeOfInt32_4() { return static_cast<int32_t>(offsetof(DbTypes_t2035465575_StaticFields, ___TypeOfInt32_4)); }
	inline Type_t * get_TypeOfInt32_4() const { return ___TypeOfInt32_4; }
	inline Type_t ** get_address_of_TypeOfInt32_4() { return &___TypeOfInt32_4; }
	inline void set_TypeOfInt32_4(Type_t * value)
	{
		___TypeOfInt32_4 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfInt32_4), value);
	}

	inline static int32_t get_offset_of_TypeOfInt64_5() { return static_cast<int32_t>(offsetof(DbTypes_t2035465575_StaticFields, ___TypeOfInt64_5)); }
	inline Type_t * get_TypeOfInt64_5() const { return ___TypeOfInt64_5; }
	inline Type_t ** get_address_of_TypeOfInt64_5() { return &___TypeOfInt64_5; }
	inline void set_TypeOfInt64_5(Type_t * value)
	{
		___TypeOfInt64_5 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfInt64_5), value);
	}

	inline static int32_t get_offset_of_TypeOfByte_6() { return static_cast<int32_t>(offsetof(DbTypes_t2035465575_StaticFields, ___TypeOfByte_6)); }
	inline Type_t * get_TypeOfByte_6() const { return ___TypeOfByte_6; }
	inline Type_t ** get_address_of_TypeOfByte_6() { return &___TypeOfByte_6; }
	inline void set_TypeOfByte_6(Type_t * value)
	{
		___TypeOfByte_6 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfByte_6), value);
	}

	inline static int32_t get_offset_of_TypeOfUInt16_7() { return static_cast<int32_t>(offsetof(DbTypes_t2035465575_StaticFields, ___TypeOfUInt16_7)); }
	inline Type_t * get_TypeOfUInt16_7() const { return ___TypeOfUInt16_7; }
	inline Type_t ** get_address_of_TypeOfUInt16_7() { return &___TypeOfUInt16_7; }
	inline void set_TypeOfUInt16_7(Type_t * value)
	{
		___TypeOfUInt16_7 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfUInt16_7), value);
	}

	inline static int32_t get_offset_of_TypeOfUInt32_8() { return static_cast<int32_t>(offsetof(DbTypes_t2035465575_StaticFields, ___TypeOfUInt32_8)); }
	inline Type_t * get_TypeOfUInt32_8() const { return ___TypeOfUInt32_8; }
	inline Type_t ** get_address_of_TypeOfUInt32_8() { return &___TypeOfUInt32_8; }
	inline void set_TypeOfUInt32_8(Type_t * value)
	{
		___TypeOfUInt32_8 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfUInt32_8), value);
	}

	inline static int32_t get_offset_of_TypeOfUInt64_9() { return static_cast<int32_t>(offsetof(DbTypes_t2035465575_StaticFields, ___TypeOfUInt64_9)); }
	inline Type_t * get_TypeOfUInt64_9() const { return ___TypeOfUInt64_9; }
	inline Type_t ** get_address_of_TypeOfUInt64_9() { return &___TypeOfUInt64_9; }
	inline void set_TypeOfUInt64_9(Type_t * value)
	{
		___TypeOfUInt64_9 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfUInt64_9), value);
	}

	inline static int32_t get_offset_of_TypeOfDouble_10() { return static_cast<int32_t>(offsetof(DbTypes_t2035465575_StaticFields, ___TypeOfDouble_10)); }
	inline Type_t * get_TypeOfDouble_10() const { return ___TypeOfDouble_10; }
	inline Type_t ** get_address_of_TypeOfDouble_10() { return &___TypeOfDouble_10; }
	inline void set_TypeOfDouble_10(Type_t * value)
	{
		___TypeOfDouble_10 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfDouble_10), value);
	}

	inline static int32_t get_offset_of_TypeOfSingle_11() { return static_cast<int32_t>(offsetof(DbTypes_t2035465575_StaticFields, ___TypeOfSingle_11)); }
	inline Type_t * get_TypeOfSingle_11() const { return ___TypeOfSingle_11; }
	inline Type_t ** get_address_of_TypeOfSingle_11() { return &___TypeOfSingle_11; }
	inline void set_TypeOfSingle_11(Type_t * value)
	{
		___TypeOfSingle_11 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfSingle_11), value);
	}

	inline static int32_t get_offset_of_TypeOfDecimal_12() { return static_cast<int32_t>(offsetof(DbTypes_t2035465575_StaticFields, ___TypeOfDecimal_12)); }
	inline Type_t * get_TypeOfDecimal_12() const { return ___TypeOfDecimal_12; }
	inline Type_t ** get_address_of_TypeOfDecimal_12() { return &___TypeOfDecimal_12; }
	inline void set_TypeOfDecimal_12(Type_t * value)
	{
		___TypeOfDecimal_12 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfDecimal_12), value);
	}

	inline static int32_t get_offset_of_TypeOfString_13() { return static_cast<int32_t>(offsetof(DbTypes_t2035465575_StaticFields, ___TypeOfString_13)); }
	inline Type_t * get_TypeOfString_13() const { return ___TypeOfString_13; }
	inline Type_t ** get_address_of_TypeOfString_13() { return &___TypeOfString_13; }
	inline void set_TypeOfString_13(Type_t * value)
	{
		___TypeOfString_13 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfString_13), value);
	}

	inline static int32_t get_offset_of_TypeOfDateTime_14() { return static_cast<int32_t>(offsetof(DbTypes_t2035465575_StaticFields, ___TypeOfDateTime_14)); }
	inline Type_t * get_TypeOfDateTime_14() const { return ___TypeOfDateTime_14; }
	inline Type_t ** get_address_of_TypeOfDateTime_14() { return &___TypeOfDateTime_14; }
	inline void set_TypeOfDateTime_14(Type_t * value)
	{
		___TypeOfDateTime_14 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfDateTime_14), value);
	}

	inline static int32_t get_offset_of_TypeOfObject_15() { return static_cast<int32_t>(offsetof(DbTypes_t2035465575_StaticFields, ___TypeOfObject_15)); }
	inline Type_t * get_TypeOfObject_15() const { return ___TypeOfObject_15; }
	inline Type_t ** get_address_of_TypeOfObject_15() { return &___TypeOfObject_15; }
	inline void set_TypeOfObject_15(Type_t * value)
	{
		___TypeOfObject_15 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfObject_15), value);
	}

	inline static int32_t get_offset_of_TypeOfGuid_16() { return static_cast<int32_t>(offsetof(DbTypes_t2035465575_StaticFields, ___TypeOfGuid_16)); }
	inline Type_t * get_TypeOfGuid_16() const { return ___TypeOfGuid_16; }
	inline Type_t ** get_address_of_TypeOfGuid_16() { return &___TypeOfGuid_16; }
	inline void set_TypeOfGuid_16(Type_t * value)
	{
		___TypeOfGuid_16 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfGuid_16), value);
	}

	inline static int32_t get_offset_of_TypeOfType_17() { return static_cast<int32_t>(offsetof(DbTypes_t2035465575_StaticFields, ___TypeOfType_17)); }
	inline Type_t * get_TypeOfType_17() const { return ___TypeOfType_17; }
	inline Type_t ** get_address_of_TypeOfType_17() { return &___TypeOfType_17; }
	inline void set_TypeOfType_17(Type_t * value)
	{
		___TypeOfType_17 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfType_17), value);
	}

	inline static int32_t get_offset_of_TypeOfByteArray_18() { return static_cast<int32_t>(offsetof(DbTypes_t2035465575_StaticFields, ___TypeOfByteArray_18)); }
	inline Type_t * get_TypeOfByteArray_18() const { return ___TypeOfByteArray_18; }
	inline Type_t ** get_address_of_TypeOfByteArray_18() { return &___TypeOfByteArray_18; }
	inline void set_TypeOfByteArray_18(Type_t * value)
	{
		___TypeOfByteArray_18 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfByteArray_18), value);
	}

	inline static int32_t get_offset_of_TypeOfFloat_19() { return static_cast<int32_t>(offsetof(DbTypes_t2035465575_StaticFields, ___TypeOfFloat_19)); }
	inline Type_t * get_TypeOfFloat_19() const { return ___TypeOfFloat_19; }
	inline Type_t ** get_address_of_TypeOfFloat_19() { return &___TypeOfFloat_19; }
	inline void set_TypeOfFloat_19(Type_t * value)
	{
		___TypeOfFloat_19 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfFloat_19), value);
	}

	inline static int32_t get_offset_of_TypeOfTimespan_20() { return static_cast<int32_t>(offsetof(DbTypes_t2035465575_StaticFields, ___TypeOfTimespan_20)); }
	inline Type_t * get_TypeOfTimespan_20() const { return ___TypeOfTimespan_20; }
	inline Type_t ** get_address_of_TypeOfTimespan_20() { return &___TypeOfTimespan_20; }
	inline void set_TypeOfTimespan_20(Type_t * value)
	{
		___TypeOfTimespan_20 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfTimespan_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBTYPES_T2035465575_H
#ifndef INDEX_T1844808025_H
#define INDEX_T1844808025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Index
struct  Index_t1844808025  : public RuntimeObject
{
public:
	// System.Int32[] System.Data.Common.Index::_array
	Int32U5BU5D_t1719863841* ____array_1;
	// System.Int32 System.Data.Common.Index::_size
	int32_t ____size_2;
	// System.Data.Common.Key System.Data.Common.Index::_key
	Key_t950964578 * ____key_3;
	// System.Int32 System.Data.Common.Index::_refCount
	int32_t ____refCount_4;
	// System.Boolean System.Data.Common.Index::know_have_duplicates
	bool ___know_have_duplicates_5;
	// System.Boolean System.Data.Common.Index::know_no_duplicates
	bool ___know_no_duplicates_6;

public:
	inline static int32_t get_offset_of__array_1() { return static_cast<int32_t>(offsetof(Index_t1844808025, ____array_1)); }
	inline Int32U5BU5D_t1719863841* get__array_1() const { return ____array_1; }
	inline Int32U5BU5D_t1719863841** get_address_of__array_1() { return &____array_1; }
	inline void set__array_1(Int32U5BU5D_t1719863841* value)
	{
		____array_1 = value;
		Il2CppCodeGenWriteBarrier((&____array_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(Index_t1844808025, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__key_3() { return static_cast<int32_t>(offsetof(Index_t1844808025, ____key_3)); }
	inline Key_t950964578 * get__key_3() const { return ____key_3; }
	inline Key_t950964578 ** get_address_of__key_3() { return &____key_3; }
	inline void set__key_3(Key_t950964578 * value)
	{
		____key_3 = value;
		Il2CppCodeGenWriteBarrier((&____key_3), value);
	}

	inline static int32_t get_offset_of__refCount_4() { return static_cast<int32_t>(offsetof(Index_t1844808025, ____refCount_4)); }
	inline int32_t get__refCount_4() const { return ____refCount_4; }
	inline int32_t* get_address_of__refCount_4() { return &____refCount_4; }
	inline void set__refCount_4(int32_t value)
	{
		____refCount_4 = value;
	}

	inline static int32_t get_offset_of_know_have_duplicates_5() { return static_cast<int32_t>(offsetof(Index_t1844808025, ___know_have_duplicates_5)); }
	inline bool get_know_have_duplicates_5() const { return ___know_have_duplicates_5; }
	inline bool* get_address_of_know_have_duplicates_5() { return &___know_have_duplicates_5; }
	inline void set_know_have_duplicates_5(bool value)
	{
		___know_have_duplicates_5 = value;
	}

	inline static int32_t get_offset_of_know_no_duplicates_6() { return static_cast<int32_t>(offsetof(Index_t1844808025, ___know_no_duplicates_6)); }
	inline bool get_know_no_duplicates_6() const { return ___know_no_duplicates_6; }
	inline bool* get_address_of_know_no_duplicates_6() { return &___know_no_duplicates_6; }
	inline void set_know_no_duplicates_6(bool value)
	{
		___know_no_duplicates_6 = value;
	}
};

struct Index_t1844808025_StaticFields
{
public:
	// System.Int32[] System.Data.Common.Index::empty
	Int32U5BU5D_t1719863841* ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(Index_t1844808025_StaticFields, ___empty_0)); }
	inline Int32U5BU5D_t1719863841* get_empty_0() const { return ___empty_0; }
	inline Int32U5BU5D_t1719863841** get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(Int32U5BU5D_t1719863841* value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEX_T1844808025_H
#ifndef DATAROWBUILDER_T201539747_H
#define DATAROWBUILDER_T201539747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowBuilder
struct  DataRowBuilder_t201539747  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.DataRowBuilder::table
	DataTable_t458307818 * ___table_0;
	// System.Int32 System.Data.DataRowBuilder::_rowId
	int32_t ____rowId_1;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(DataRowBuilder_t201539747, ___table_0)); }
	inline DataTable_t458307818 * get_table_0() const { return ___table_0; }
	inline DataTable_t458307818 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(DataTable_t458307818 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((&___table_0), value);
	}

	inline static int32_t get_offset_of__rowId_1() { return static_cast<int32_t>(offsetof(DataRowBuilder_t201539747, ____rowId_1)); }
	inline int32_t get__rowId_1() const { return ____rowId_1; }
	inline int32_t* get_address_of__rowId_1() { return &____rowId_1; }
	inline void set__rowId_1(int32_t value)
	{
		____rowId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAROWBUILDER_T201539747_H
#ifndef RECORDCACHE_T60351824_H
#define RECORDCACHE_T60351824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.RecordCache
struct  RecordCache_t60351824  : public RuntimeObject
{
public:
	// System.Collections.Stack System.Data.Common.RecordCache::_records
	Stack_t1828224996 * ____records_0;
	// System.Int32 System.Data.Common.RecordCache::_nextFreeIndex
	int32_t ____nextFreeIndex_1;
	// System.Int32 System.Data.Common.RecordCache::_currentCapacity
	int32_t ____currentCapacity_2;
	// System.Data.DataTable System.Data.Common.RecordCache::_table
	DataTable_t458307818 * ____table_3;
	// System.Data.DataRow[] System.Data.Common.RecordCache::_rowsToRecords
	DataRowU5BU5D_t878818449* ____rowsToRecords_4;

public:
	inline static int32_t get_offset_of__records_0() { return static_cast<int32_t>(offsetof(RecordCache_t60351824, ____records_0)); }
	inline Stack_t1828224996 * get__records_0() const { return ____records_0; }
	inline Stack_t1828224996 ** get_address_of__records_0() { return &____records_0; }
	inline void set__records_0(Stack_t1828224996 * value)
	{
		____records_0 = value;
		Il2CppCodeGenWriteBarrier((&____records_0), value);
	}

	inline static int32_t get_offset_of__nextFreeIndex_1() { return static_cast<int32_t>(offsetof(RecordCache_t60351824, ____nextFreeIndex_1)); }
	inline int32_t get__nextFreeIndex_1() const { return ____nextFreeIndex_1; }
	inline int32_t* get_address_of__nextFreeIndex_1() { return &____nextFreeIndex_1; }
	inline void set__nextFreeIndex_1(int32_t value)
	{
		____nextFreeIndex_1 = value;
	}

	inline static int32_t get_offset_of__currentCapacity_2() { return static_cast<int32_t>(offsetof(RecordCache_t60351824, ____currentCapacity_2)); }
	inline int32_t get__currentCapacity_2() const { return ____currentCapacity_2; }
	inline int32_t* get_address_of__currentCapacity_2() { return &____currentCapacity_2; }
	inline void set__currentCapacity_2(int32_t value)
	{
		____currentCapacity_2 = value;
	}

	inline static int32_t get_offset_of__table_3() { return static_cast<int32_t>(offsetof(RecordCache_t60351824, ____table_3)); }
	inline DataTable_t458307818 * get__table_3() const { return ____table_3; }
	inline DataTable_t458307818 ** get_address_of__table_3() { return &____table_3; }
	inline void set__table_3(DataTable_t458307818 * value)
	{
		____table_3 = value;
		Il2CppCodeGenWriteBarrier((&____table_3), value);
	}

	inline static int32_t get_offset_of__rowsToRecords_4() { return static_cast<int32_t>(offsetof(RecordCache_t60351824, ____rowsToRecords_4)); }
	inline DataRowU5BU5D_t878818449* get__rowsToRecords_4() const { return ____rowsToRecords_4; }
	inline DataRowU5BU5D_t878818449** get_address_of__rowsToRecords_4() { return &____rowsToRecords_4; }
	inline void set__rowsToRecords_4(DataRowU5BU5D_t878818449* value)
	{
		____rowsToRecords_4 = value;
		Il2CppCodeGenWriteBarrier((&____rowsToRecords_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECORDCACHE_T60351824_H
#ifndef DATACONTAINER_T2006856459_H
#define DATACONTAINER_T2006856459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataContainer
struct  DataContainer_t2006856459  : public RuntimeObject
{
public:
	// System.Collections.BitArray System.Data.Common.DataContainer::null_values
	BitArray_t4068722914 * ___null_values_0;
	// System.Type System.Data.Common.DataContainer::_type
	Type_t * ____type_1;
	// System.Data.DataColumn System.Data.Common.DataContainer::_column
	DataColumn_t2121335505 * ____column_2;

public:
	inline static int32_t get_offset_of_null_values_0() { return static_cast<int32_t>(offsetof(DataContainer_t2006856459, ___null_values_0)); }
	inline BitArray_t4068722914 * get_null_values_0() const { return ___null_values_0; }
	inline BitArray_t4068722914 ** get_address_of_null_values_0() { return &___null_values_0; }
	inline void set_null_values_0(BitArray_t4068722914 * value)
	{
		___null_values_0 = value;
		Il2CppCodeGenWriteBarrier((&___null_values_0), value);
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(DataContainer_t2006856459, ____type_1)); }
	inline Type_t * get__type_1() const { return ____type_1; }
	inline Type_t ** get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(Type_t * value)
	{
		____type_1 = value;
		Il2CppCodeGenWriteBarrier((&____type_1), value);
	}

	inline static int32_t get_offset_of__column_2() { return static_cast<int32_t>(offsetof(DataContainer_t2006856459, ____column_2)); }
	inline DataColumn_t2121335505 * get__column_2() const { return ____column_2; }
	inline DataColumn_t2121335505 ** get_address_of__column_2() { return &____column_2; }
	inline void set__column_2(DataColumn_t2121335505 * value)
	{
		____column_2 = value;
		Il2CppCodeGenWriteBarrier((&____column_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACONTAINER_T2006856459_H
#ifndef DATAROW_T409901744_H
#define DATAROW_T409901744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRow
struct  DataRow_t409901744  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.DataRow::_table
	DataTable_t458307818 * ____table_0;
	// System.Int32 System.Data.DataRow::_original
	int32_t ____original_1;
	// System.Int32 System.Data.DataRow::_current
	int32_t ____current_2;
	// System.Int32 System.Data.DataRow::_proposed
	int32_t ____proposed_3;
	// System.Collections.ArrayList System.Data.DataRow::_columnErrors
	ArrayList_t1090370772 * ____columnErrors_4;
	// System.String System.Data.DataRow::rowError
	String_t* ___rowError_5;
	// System.Int32 System.Data.DataRow::xmlRowID
	int32_t ___xmlRowID_6;
	// System.Boolean System.Data.DataRow::_nullConstraintViolation
	bool ____nullConstraintViolation_7;
	// System.String System.Data.DataRow::_nullConstraintMessage
	String_t* ____nullConstraintMessage_8;
	// System.Boolean System.Data.DataRow::_inChangingEvent
	bool ____inChangingEvent_9;
	// System.Int32 System.Data.DataRow::_rowId
	int32_t ____rowId_10;
	// System.Boolean System.Data.DataRow::_rowChanged
	bool ____rowChanged_11;
	// System.Boolean System.Data.DataRow::_inExpressionEvaluation
	bool ____inExpressionEvaluation_12;

public:
	inline static int32_t get_offset_of__table_0() { return static_cast<int32_t>(offsetof(DataRow_t409901744, ____table_0)); }
	inline DataTable_t458307818 * get__table_0() const { return ____table_0; }
	inline DataTable_t458307818 ** get_address_of__table_0() { return &____table_0; }
	inline void set__table_0(DataTable_t458307818 * value)
	{
		____table_0 = value;
		Il2CppCodeGenWriteBarrier((&____table_0), value);
	}

	inline static int32_t get_offset_of__original_1() { return static_cast<int32_t>(offsetof(DataRow_t409901744, ____original_1)); }
	inline int32_t get__original_1() const { return ____original_1; }
	inline int32_t* get_address_of__original_1() { return &____original_1; }
	inline void set__original_1(int32_t value)
	{
		____original_1 = value;
	}

	inline static int32_t get_offset_of__current_2() { return static_cast<int32_t>(offsetof(DataRow_t409901744, ____current_2)); }
	inline int32_t get__current_2() const { return ____current_2; }
	inline int32_t* get_address_of__current_2() { return &____current_2; }
	inline void set__current_2(int32_t value)
	{
		____current_2 = value;
	}

	inline static int32_t get_offset_of__proposed_3() { return static_cast<int32_t>(offsetof(DataRow_t409901744, ____proposed_3)); }
	inline int32_t get__proposed_3() const { return ____proposed_3; }
	inline int32_t* get_address_of__proposed_3() { return &____proposed_3; }
	inline void set__proposed_3(int32_t value)
	{
		____proposed_3 = value;
	}

	inline static int32_t get_offset_of__columnErrors_4() { return static_cast<int32_t>(offsetof(DataRow_t409901744, ____columnErrors_4)); }
	inline ArrayList_t1090370772 * get__columnErrors_4() const { return ____columnErrors_4; }
	inline ArrayList_t1090370772 ** get_address_of__columnErrors_4() { return &____columnErrors_4; }
	inline void set__columnErrors_4(ArrayList_t1090370772 * value)
	{
		____columnErrors_4 = value;
		Il2CppCodeGenWriteBarrier((&____columnErrors_4), value);
	}

	inline static int32_t get_offset_of_rowError_5() { return static_cast<int32_t>(offsetof(DataRow_t409901744, ___rowError_5)); }
	inline String_t* get_rowError_5() const { return ___rowError_5; }
	inline String_t** get_address_of_rowError_5() { return &___rowError_5; }
	inline void set_rowError_5(String_t* value)
	{
		___rowError_5 = value;
		Il2CppCodeGenWriteBarrier((&___rowError_5), value);
	}

	inline static int32_t get_offset_of_xmlRowID_6() { return static_cast<int32_t>(offsetof(DataRow_t409901744, ___xmlRowID_6)); }
	inline int32_t get_xmlRowID_6() const { return ___xmlRowID_6; }
	inline int32_t* get_address_of_xmlRowID_6() { return &___xmlRowID_6; }
	inline void set_xmlRowID_6(int32_t value)
	{
		___xmlRowID_6 = value;
	}

	inline static int32_t get_offset_of__nullConstraintViolation_7() { return static_cast<int32_t>(offsetof(DataRow_t409901744, ____nullConstraintViolation_7)); }
	inline bool get__nullConstraintViolation_7() const { return ____nullConstraintViolation_7; }
	inline bool* get_address_of__nullConstraintViolation_7() { return &____nullConstraintViolation_7; }
	inline void set__nullConstraintViolation_7(bool value)
	{
		____nullConstraintViolation_7 = value;
	}

	inline static int32_t get_offset_of__nullConstraintMessage_8() { return static_cast<int32_t>(offsetof(DataRow_t409901744, ____nullConstraintMessage_8)); }
	inline String_t* get__nullConstraintMessage_8() const { return ____nullConstraintMessage_8; }
	inline String_t** get_address_of__nullConstraintMessage_8() { return &____nullConstraintMessage_8; }
	inline void set__nullConstraintMessage_8(String_t* value)
	{
		____nullConstraintMessage_8 = value;
		Il2CppCodeGenWriteBarrier((&____nullConstraintMessage_8), value);
	}

	inline static int32_t get_offset_of__inChangingEvent_9() { return static_cast<int32_t>(offsetof(DataRow_t409901744, ____inChangingEvent_9)); }
	inline bool get__inChangingEvent_9() const { return ____inChangingEvent_9; }
	inline bool* get_address_of__inChangingEvent_9() { return &____inChangingEvent_9; }
	inline void set__inChangingEvent_9(bool value)
	{
		____inChangingEvent_9 = value;
	}

	inline static int32_t get_offset_of__rowId_10() { return static_cast<int32_t>(offsetof(DataRow_t409901744, ____rowId_10)); }
	inline int32_t get__rowId_10() const { return ____rowId_10; }
	inline int32_t* get_address_of__rowId_10() { return &____rowId_10; }
	inline void set__rowId_10(int32_t value)
	{
		____rowId_10 = value;
	}

	inline static int32_t get_offset_of__rowChanged_11() { return static_cast<int32_t>(offsetof(DataRow_t409901744, ____rowChanged_11)); }
	inline bool get__rowChanged_11() const { return ____rowChanged_11; }
	inline bool* get_address_of__rowChanged_11() { return &____rowChanged_11; }
	inline void set__rowChanged_11(bool value)
	{
		____rowChanged_11 = value;
	}

	inline static int32_t get_offset_of__inExpressionEvaluation_12() { return static_cast<int32_t>(offsetof(DataRow_t409901744, ____inExpressionEvaluation_12)); }
	inline bool get__inExpressionEvaluation_12() const { return ____inExpressionEvaluation_12; }
	inline bool* get_address_of__inExpressionEvaluation_12() { return &____inExpressionEvaluation_12; }
	inline void set__inExpressionEvaluation_12(bool value)
	{
		____inExpressionEvaluation_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAROW_T409901744_H
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
#ifndef MARSHALBYREFOBJECT_T2387283355_H
#define MARSHALBYREFOBJECT_T2387283355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2387283355  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t1040753827 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2387283355, ____identity_0)); }
	inline ServerIdentity_t1040753827 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t1040753827 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t1040753827 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2387283355_H
#ifndef INTERNALDATACOLLECTIONBASE_T3545648598_H
#define INTERNALDATACOLLECTIONBASE_T3545648598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.InternalDataCollectionBase
struct  InternalDataCollectionBase_t3545648598  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Data.InternalDataCollectionBase::list
	ArrayList_t1090370772 * ___list_0;
	// System.Boolean System.Data.InternalDataCollectionBase::synchronized
	bool ___synchronized_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(InternalDataCollectionBase_t3545648598, ___list_0)); }
	inline ArrayList_t1090370772 * get_list_0() const { return ___list_0; }
	inline ArrayList_t1090370772 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t1090370772 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_synchronized_1() { return static_cast<int32_t>(offsetof(InternalDataCollectionBase_t3545648598, ___synchronized_1)); }
	inline bool get_synchronized_1() const { return ___synchronized_1; }
	inline bool* get_address_of_synchronized_1() { return &___synchronized_1; }
	inline void set_synchronized_1(bool value)
	{
		___synchronized_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALDATACOLLECTIONBASE_T3545648598_H
#ifndef TOKENIZER_T1407563704_H
#define TOKENIZER_T1407563704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Tokenizer
struct  Tokenizer_t1407563704  : public RuntimeObject
{
public:
	// System.Char[] Mono.Data.SqlExpressions.Tokenizer::input
	CharU5BU5D_t3282355116* ___input_2;
	// System.Int32 Mono.Data.SqlExpressions.Tokenizer::pos
	int32_t ___pos_3;
	// System.Int32 Mono.Data.SqlExpressions.Tokenizer::tok
	int32_t ___tok_4;
	// System.Object Mono.Data.SqlExpressions.Tokenizer::val
	RuntimeObject * ___val_5;

public:
	inline static int32_t get_offset_of_input_2() { return static_cast<int32_t>(offsetof(Tokenizer_t1407563704, ___input_2)); }
	inline CharU5BU5D_t3282355116* get_input_2() const { return ___input_2; }
	inline CharU5BU5D_t3282355116** get_address_of_input_2() { return &___input_2; }
	inline void set_input_2(CharU5BU5D_t3282355116* value)
	{
		___input_2 = value;
		Il2CppCodeGenWriteBarrier((&___input_2), value);
	}

	inline static int32_t get_offset_of_pos_3() { return static_cast<int32_t>(offsetof(Tokenizer_t1407563704, ___pos_3)); }
	inline int32_t get_pos_3() const { return ___pos_3; }
	inline int32_t* get_address_of_pos_3() { return &___pos_3; }
	inline void set_pos_3(int32_t value)
	{
		___pos_3 = value;
	}

	inline static int32_t get_offset_of_tok_4() { return static_cast<int32_t>(offsetof(Tokenizer_t1407563704, ___tok_4)); }
	inline int32_t get_tok_4() const { return ___tok_4; }
	inline int32_t* get_address_of_tok_4() { return &___tok_4; }
	inline void set_tok_4(int32_t value)
	{
		___tok_4 = value;
	}

	inline static int32_t get_offset_of_val_5() { return static_cast<int32_t>(offsetof(Tokenizer_t1407563704, ___val_5)); }
	inline RuntimeObject * get_val_5() const { return ___val_5; }
	inline RuntimeObject ** get_address_of_val_5() { return &___val_5; }
	inline void set_val_5(RuntimeObject * value)
	{
		___val_5 = value;
		Il2CppCodeGenWriteBarrier((&___val_5), value);
	}
};

struct Tokenizer_t1407563704_StaticFields
{
public:
	// System.Collections.IDictionary Mono.Data.SqlExpressions.Tokenizer::tokenMap
	RuntimeObject* ___tokenMap_0;
	// System.Object[] Mono.Data.SqlExpressions.Tokenizer::tokens
	ObjectU5BU5D_t864419831* ___tokens_1;

public:
	inline static int32_t get_offset_of_tokenMap_0() { return static_cast<int32_t>(offsetof(Tokenizer_t1407563704_StaticFields, ___tokenMap_0)); }
	inline RuntimeObject* get_tokenMap_0() const { return ___tokenMap_0; }
	inline RuntimeObject** get_address_of_tokenMap_0() { return &___tokenMap_0; }
	inline void set_tokenMap_0(RuntimeObject* value)
	{
		___tokenMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___tokenMap_0), value);
	}

	inline static int32_t get_offset_of_tokens_1() { return static_cast<int32_t>(offsetof(Tokenizer_t1407563704_StaticFields, ___tokens_1)); }
	inline ObjectU5BU5D_t864419831* get_tokens_1() const { return ___tokens_1; }
	inline ObjectU5BU5D_t864419831** get_address_of_tokens_1() { return &___tokens_1; }
	inline void set_tokens_1(ObjectU5BU5D_t864419831* value)
	{
		___tokens_1 = value;
		Il2CppCodeGenWriteBarrier((&___tokens_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOKENIZER_T1407563704_H
#ifndef NUMERIC_T1593507055_H
#define NUMERIC_T1593507055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Numeric
struct  Numeric_t1593507055  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMERIC_T1593507055_H
#ifndef TYPECONVERTER_T192055412_H
#define TYPECONVERTER_T192055412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t192055412  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T192055412_H
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
#ifndef BASEEXPRESSION_T1977657975_H
#define BASEEXPRESSION_T1977657975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.BaseExpression
struct  BaseExpression_t1977657975  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEXPRESSION_T1977657975_H
#ifndef DOUBLET_T2940289978_H
#define DOUBLET_T2940289978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Doublet
struct  Doublet_t2940289978  : public RuntimeObject
{
public:
	// System.Int32 System.Data.Doublet::count
	int32_t ___count_0;
	// System.Collections.ArrayList System.Data.Doublet::columnNames
	ArrayList_t1090370772 * ___columnNames_1;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(Doublet_t2940289978, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_columnNames_1() { return static_cast<int32_t>(offsetof(Doublet_t2940289978, ___columnNames_1)); }
	inline ArrayList_t1090370772 * get_columnNames_1() const { return ___columnNames_1; }
	inline ArrayList_t1090370772 ** get_address_of_columnNames_1() { return &___columnNames_1; }
	inline void set_columnNames_1(ArrayList_t1090370772 * value)
	{
		___columnNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___columnNames_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLET_T2940289978_H
#ifndef SQLXML_T2917663315_H
#define SQLXML_T2917663315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlXml
struct  SqlXml_t2917663315  : public RuntimeObject
{
public:
	// System.Boolean System.Data.SqlTypes.SqlXml::notNull
	bool ___notNull_0;
	// System.String System.Data.SqlTypes.SqlXml::xmlValue
	String_t* ___xmlValue_1;

public:
	inline static int32_t get_offset_of_notNull_0() { return static_cast<int32_t>(offsetof(SqlXml_t2917663315, ___notNull_0)); }
	inline bool get_notNull_0() const { return ___notNull_0; }
	inline bool* get_address_of_notNull_0() { return &___notNull_0; }
	inline void set_notNull_0(bool value)
	{
		___notNull_0 = value;
	}

	inline static int32_t get_offset_of_xmlValue_1() { return static_cast<int32_t>(offsetof(SqlXml_t2917663315, ___xmlValue_1)); }
	inline String_t* get_xmlValue_1() const { return ___xmlValue_1; }
	inline String_t** get_address_of_xmlValue_1() { return &___xmlValue_1; }
	inline void set_xmlValue_1(String_t* value)
	{
		___xmlValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___xmlValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLXML_T2917663315_H
#ifndef EVENTARGS_T3141815178_H
#define EVENTARGS_T3141815178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3141815178  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3141815178_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3141815178 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3141815178_StaticFields, ___Empty_0)); }
	inline EventArgs_t3141815178 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3141815178 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3141815178 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3141815178_H
#ifndef DATARELATION_T3388391349_H
#define DATARELATION_T3388391349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelation
struct  DataRelation_t3388391349  : public RuntimeObject
{
public:
	// System.Data.DataSet System.Data.DataRelation::dataSet
	DataSet_t2860913429 * ___dataSet_0;
	// System.String System.Data.DataRelation::relationName
	String_t* ___relationName_1;
	// System.Data.UniqueConstraint System.Data.DataRelation::parentKeyConstraint
	UniqueConstraint_t426712363 * ___parentKeyConstraint_2;
	// System.Data.ForeignKeyConstraint System.Data.DataRelation::childKeyConstraint
	ForeignKeyConstraint_t654460676 * ___childKeyConstraint_3;
	// System.Data.DataColumn[] System.Data.DataRelation::parentColumns
	DataColumnU5BU5D_t1250929356* ___parentColumns_4;
	// System.Data.DataColumn[] System.Data.DataRelation::childColumns
	DataColumnU5BU5D_t1250929356* ___childColumns_5;
	// System.Boolean System.Data.DataRelation::nested
	bool ___nested_6;
	// System.Boolean System.Data.DataRelation::createConstraints
	bool ___createConstraints_7;
	// System.Boolean System.Data.DataRelation::initFinished
	bool ___initFinished_8;
	// System.Data.PropertyCollection System.Data.DataRelation::extendedProperties
	PropertyCollection_t3163539028 * ___extendedProperties_9;
	// System.String System.Data.DataRelation::_relationName
	String_t* ____relationName_10;
	// System.String System.Data.DataRelation::_parentTableName
	String_t* ____parentTableName_11;
	// System.String System.Data.DataRelation::_childTableName
	String_t* ____childTableName_12;
	// System.String[] System.Data.DataRelation::_parentColumnNames
	StringU5BU5D_t1002137567* ____parentColumnNames_13;
	// System.String[] System.Data.DataRelation::_childColumnNames
	StringU5BU5D_t1002137567* ____childColumnNames_14;
	// System.Boolean System.Data.DataRelation::_nested
	bool ____nested_15;
	// System.Boolean System.Data.DataRelation::initInProgress
	bool ___initInProgress_16;
	// System.String System.Data.DataRelation::_parentTableNameSpace
	String_t* ____parentTableNameSpace_17;
	// System.String System.Data.DataRelation::_childTableNameSpace
	String_t* ____childTableNameSpace_18;

public:
	inline static int32_t get_offset_of_dataSet_0() { return static_cast<int32_t>(offsetof(DataRelation_t3388391349, ___dataSet_0)); }
	inline DataSet_t2860913429 * get_dataSet_0() const { return ___dataSet_0; }
	inline DataSet_t2860913429 ** get_address_of_dataSet_0() { return &___dataSet_0; }
	inline void set_dataSet_0(DataSet_t2860913429 * value)
	{
		___dataSet_0 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_0), value);
	}

	inline static int32_t get_offset_of_relationName_1() { return static_cast<int32_t>(offsetof(DataRelation_t3388391349, ___relationName_1)); }
	inline String_t* get_relationName_1() const { return ___relationName_1; }
	inline String_t** get_address_of_relationName_1() { return &___relationName_1; }
	inline void set_relationName_1(String_t* value)
	{
		___relationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___relationName_1), value);
	}

	inline static int32_t get_offset_of_parentKeyConstraint_2() { return static_cast<int32_t>(offsetof(DataRelation_t3388391349, ___parentKeyConstraint_2)); }
	inline UniqueConstraint_t426712363 * get_parentKeyConstraint_2() const { return ___parentKeyConstraint_2; }
	inline UniqueConstraint_t426712363 ** get_address_of_parentKeyConstraint_2() { return &___parentKeyConstraint_2; }
	inline void set_parentKeyConstraint_2(UniqueConstraint_t426712363 * value)
	{
		___parentKeyConstraint_2 = value;
		Il2CppCodeGenWriteBarrier((&___parentKeyConstraint_2), value);
	}

	inline static int32_t get_offset_of_childKeyConstraint_3() { return static_cast<int32_t>(offsetof(DataRelation_t3388391349, ___childKeyConstraint_3)); }
	inline ForeignKeyConstraint_t654460676 * get_childKeyConstraint_3() const { return ___childKeyConstraint_3; }
	inline ForeignKeyConstraint_t654460676 ** get_address_of_childKeyConstraint_3() { return &___childKeyConstraint_3; }
	inline void set_childKeyConstraint_3(ForeignKeyConstraint_t654460676 * value)
	{
		___childKeyConstraint_3 = value;
		Il2CppCodeGenWriteBarrier((&___childKeyConstraint_3), value);
	}

	inline static int32_t get_offset_of_parentColumns_4() { return static_cast<int32_t>(offsetof(DataRelation_t3388391349, ___parentColumns_4)); }
	inline DataColumnU5BU5D_t1250929356* get_parentColumns_4() const { return ___parentColumns_4; }
	inline DataColumnU5BU5D_t1250929356** get_address_of_parentColumns_4() { return &___parentColumns_4; }
	inline void set_parentColumns_4(DataColumnU5BU5D_t1250929356* value)
	{
		___parentColumns_4 = value;
		Il2CppCodeGenWriteBarrier((&___parentColumns_4), value);
	}

	inline static int32_t get_offset_of_childColumns_5() { return static_cast<int32_t>(offsetof(DataRelation_t3388391349, ___childColumns_5)); }
	inline DataColumnU5BU5D_t1250929356* get_childColumns_5() const { return ___childColumns_5; }
	inline DataColumnU5BU5D_t1250929356** get_address_of_childColumns_5() { return &___childColumns_5; }
	inline void set_childColumns_5(DataColumnU5BU5D_t1250929356* value)
	{
		___childColumns_5 = value;
		Il2CppCodeGenWriteBarrier((&___childColumns_5), value);
	}

	inline static int32_t get_offset_of_nested_6() { return static_cast<int32_t>(offsetof(DataRelation_t3388391349, ___nested_6)); }
	inline bool get_nested_6() const { return ___nested_6; }
	inline bool* get_address_of_nested_6() { return &___nested_6; }
	inline void set_nested_6(bool value)
	{
		___nested_6 = value;
	}

	inline static int32_t get_offset_of_createConstraints_7() { return static_cast<int32_t>(offsetof(DataRelation_t3388391349, ___createConstraints_7)); }
	inline bool get_createConstraints_7() const { return ___createConstraints_7; }
	inline bool* get_address_of_createConstraints_7() { return &___createConstraints_7; }
	inline void set_createConstraints_7(bool value)
	{
		___createConstraints_7 = value;
	}

	inline static int32_t get_offset_of_initFinished_8() { return static_cast<int32_t>(offsetof(DataRelation_t3388391349, ___initFinished_8)); }
	inline bool get_initFinished_8() const { return ___initFinished_8; }
	inline bool* get_address_of_initFinished_8() { return &___initFinished_8; }
	inline void set_initFinished_8(bool value)
	{
		___initFinished_8 = value;
	}

	inline static int32_t get_offset_of_extendedProperties_9() { return static_cast<int32_t>(offsetof(DataRelation_t3388391349, ___extendedProperties_9)); }
	inline PropertyCollection_t3163539028 * get_extendedProperties_9() const { return ___extendedProperties_9; }
	inline PropertyCollection_t3163539028 ** get_address_of_extendedProperties_9() { return &___extendedProperties_9; }
	inline void set_extendedProperties_9(PropertyCollection_t3163539028 * value)
	{
		___extendedProperties_9 = value;
		Il2CppCodeGenWriteBarrier((&___extendedProperties_9), value);
	}

	inline static int32_t get_offset_of__relationName_10() { return static_cast<int32_t>(offsetof(DataRelation_t3388391349, ____relationName_10)); }
	inline String_t* get__relationName_10() const { return ____relationName_10; }
	inline String_t** get_address_of__relationName_10() { return &____relationName_10; }
	inline void set__relationName_10(String_t* value)
	{
		____relationName_10 = value;
		Il2CppCodeGenWriteBarrier((&____relationName_10), value);
	}

	inline static int32_t get_offset_of__parentTableName_11() { return static_cast<int32_t>(offsetof(DataRelation_t3388391349, ____parentTableName_11)); }
	inline String_t* get__parentTableName_11() const { return ____parentTableName_11; }
	inline String_t** get_address_of__parentTableName_11() { return &____parentTableName_11; }
	inline void set__parentTableName_11(String_t* value)
	{
		____parentTableName_11 = value;
		Il2CppCodeGenWriteBarrier((&____parentTableName_11), value);
	}

	inline static int32_t get_offset_of__childTableName_12() { return static_cast<int32_t>(offsetof(DataRelation_t3388391349, ____childTableName_12)); }
	inline String_t* get__childTableName_12() const { return ____childTableName_12; }
	inline String_t** get_address_of__childTableName_12() { return &____childTableName_12; }
	inline void set__childTableName_12(String_t* value)
	{
		____childTableName_12 = value;
		Il2CppCodeGenWriteBarrier((&____childTableName_12), value);
	}

	inline static int32_t get_offset_of__parentColumnNames_13() { return static_cast<int32_t>(offsetof(DataRelation_t3388391349, ____parentColumnNames_13)); }
	inline StringU5BU5D_t1002137567* get__parentColumnNames_13() const { return ____parentColumnNames_13; }
	inline StringU5BU5D_t1002137567** get_address_of__parentColumnNames_13() { return &____parentColumnNames_13; }
	inline void set__parentColumnNames_13(StringU5BU5D_t1002137567* value)
	{
		____parentColumnNames_13 = value;
		Il2CppCodeGenWriteBarrier((&____parentColumnNames_13), value);
	}

	inline static int32_t get_offset_of__childColumnNames_14() { return static_cast<int32_t>(offsetof(DataRelation_t3388391349, ____childColumnNames_14)); }
	inline StringU5BU5D_t1002137567* get__childColumnNames_14() const { return ____childColumnNames_14; }
	inline StringU5BU5D_t1002137567** get_address_of__childColumnNames_14() { return &____childColumnNames_14; }
	inline void set__childColumnNames_14(StringU5BU5D_t1002137567* value)
	{
		____childColumnNames_14 = value;
		Il2CppCodeGenWriteBarrier((&____childColumnNames_14), value);
	}

	inline static int32_t get_offset_of__nested_15() { return static_cast<int32_t>(offsetof(DataRelation_t3388391349, ____nested_15)); }
	inline bool get__nested_15() const { return ____nested_15; }
	inline bool* get_address_of__nested_15() { return &____nested_15; }
	inline void set__nested_15(bool value)
	{
		____nested_15 = value;
	}

	inline static int32_t get_offset_of_initInProgress_16() { return static_cast<int32_t>(offsetof(DataRelation_t3388391349, ___initInProgress_16)); }
	inline bool get_initInProgress_16() const { return ___initInProgress_16; }
	inline bool* get_address_of_initInProgress_16() { return &___initInProgress_16; }
	inline void set_initInProgress_16(bool value)
	{
		___initInProgress_16 = value;
	}

	inline static int32_t get_offset_of__parentTableNameSpace_17() { return static_cast<int32_t>(offsetof(DataRelation_t3388391349, ____parentTableNameSpace_17)); }
	inline String_t* get__parentTableNameSpace_17() const { return ____parentTableNameSpace_17; }
	inline String_t** get_address_of__parentTableNameSpace_17() { return &____parentTableNameSpace_17; }
	inline void set__parentTableNameSpace_17(String_t* value)
	{
		____parentTableNameSpace_17 = value;
		Il2CppCodeGenWriteBarrier((&____parentTableNameSpace_17), value);
	}

	inline static int32_t get_offset_of__childTableNameSpace_18() { return static_cast<int32_t>(offsetof(DataRelation_t3388391349, ____childTableNameSpace_18)); }
	inline String_t* get__childTableNameSpace_18() const { return ____childTableNameSpace_18; }
	inline String_t** get_address_of__childTableNameSpace_18() { return &____childTableNameSpace_18; }
	inline void set__childTableNameSpace_18(String_t* value)
	{
		____childTableNameSpace_18 = value;
		Il2CppCodeGenWriteBarrier((&____childTableNameSpace_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATARELATION_T3388391349_H
#ifndef MARSHALBYVALUECOMPONENT_T3672154591_H
#define MARSHALBYVALUECOMPONENT_T3672154591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t3672154591  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::eventList
	EventHandlerList_t421778690 * ___eventList_0;
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	RuntimeObject* ___mySite_1;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	RuntimeObject * ___disposedEvent_2;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t3672154591, ___eventList_0)); }
	inline EventHandlerList_t421778690 * get_eventList_0() const { return ___eventList_0; }
	inline EventHandlerList_t421778690 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(EventHandlerList_t421778690 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_mySite_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t3672154591, ___mySite_1)); }
	inline RuntimeObject* get_mySite_1() const { return ___mySite_1; }
	inline RuntimeObject** get_address_of_mySite_1() { return &___mySite_1; }
	inline void set_mySite_1(RuntimeObject* value)
	{
		___mySite_1 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_1), value);
	}

	inline static int32_t get_offset_of_disposedEvent_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t3672154591, ___disposedEvent_2)); }
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
#endif // MARSHALBYVALUECOMPONENT_T3672154591_H
#ifndef SQLSINGLE_T3005666511_H
#define SQLSINGLE_T3005666511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlSingle
struct  SqlSingle_t3005666511 
{
public:
	// System.Single System.Data.SqlTypes.SqlSingle::value
	float ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlSingle::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlSingle_t3005666511, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlSingle_t3005666511, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlSingle_t3005666511_StaticFields
{
public:
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::MaxValue
	SqlSingle_t3005666511  ___MaxValue_2;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::MinValue
	SqlSingle_t3005666511  ___MinValue_3;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::Null
	SqlSingle_t3005666511  ___Null_4;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::Zero
	SqlSingle_t3005666511  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlSingle_t3005666511_StaticFields, ___MaxValue_2)); }
	inline SqlSingle_t3005666511  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlSingle_t3005666511 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlSingle_t3005666511  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlSingle_t3005666511_StaticFields, ___MinValue_3)); }
	inline SqlSingle_t3005666511  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlSingle_t3005666511 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlSingle_t3005666511  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlSingle_t3005666511_StaticFields, ___Null_4)); }
	inline SqlSingle_t3005666511  get_Null_4() const { return ___Null_4; }
	inline SqlSingle_t3005666511 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlSingle_t3005666511  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlSingle_t3005666511_StaticFields, ___Zero_5)); }
	inline SqlSingle_t3005666511  get_Zero_5() const { return ___Zero_5; }
	inline SqlSingle_t3005666511 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlSingle_t3005666511  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlSingle
struct SqlSingle_t3005666511_marshaled_pinvoke
{
	float ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlSingle
struct SqlSingle_t3005666511_marshaled_com
{
	float ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLSINGLE_T3005666511_H
#ifndef SQLINT16_T776755851_H
#define SQLINT16_T776755851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlInt16
struct  SqlInt16_t776755851 
{
public:
	// System.Int16 System.Data.SqlTypes.SqlInt16::value
	int16_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlInt16::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlInt16_t776755851, ___value_0)); }
	inline int16_t get_value_0() const { return ___value_0; }
	inline int16_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int16_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlInt16_t776755851, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlInt16_t776755851_StaticFields
{
public:
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::MaxValue
	SqlInt16_t776755851  ___MaxValue_2;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::MinValue
	SqlInt16_t776755851  ___MinValue_3;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::Null
	SqlInt16_t776755851  ___Null_4;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::Zero
	SqlInt16_t776755851  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlInt16_t776755851_StaticFields, ___MaxValue_2)); }
	inline SqlInt16_t776755851  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlInt16_t776755851 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlInt16_t776755851  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlInt16_t776755851_StaticFields, ___MinValue_3)); }
	inline SqlInt16_t776755851  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlInt16_t776755851 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlInt16_t776755851  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt16_t776755851_StaticFields, ___Null_4)); }
	inline SqlInt16_t776755851  get_Null_4() const { return ___Null_4; }
	inline SqlInt16_t776755851 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt16_t776755851  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt16_t776755851_StaticFields, ___Zero_5)); }
	inline SqlInt16_t776755851  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt16_t776755851 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt16_t776755851  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt16
struct SqlInt16_t776755851_marshaled_pinvoke
{
	int16_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt16
struct SqlInt16_t776755851_marshaled_com
{
	int16_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLINT16_T776755851_H
#ifndef SQLDOUBLE_T3404648495_H
#define SQLDOUBLE_T3404648495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlDouble
struct  SqlDouble_t3404648495 
{
public:
	// System.Double System.Data.SqlTypes.SqlDouble::value
	double ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlDouble::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlDouble_t3404648495, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlDouble_t3404648495, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlDouble_t3404648495_StaticFields
{
public:
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::MaxValue
	SqlDouble_t3404648495  ___MaxValue_2;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::MinValue
	SqlDouble_t3404648495  ___MinValue_3;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::Null
	SqlDouble_t3404648495  ___Null_4;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::Zero
	SqlDouble_t3404648495  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlDouble_t3404648495_StaticFields, ___MaxValue_2)); }
	inline SqlDouble_t3404648495  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlDouble_t3404648495 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlDouble_t3404648495  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlDouble_t3404648495_StaticFields, ___MinValue_3)); }
	inline SqlDouble_t3404648495  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlDouble_t3404648495 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlDouble_t3404648495  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlDouble_t3404648495_StaticFields, ___Null_4)); }
	inline SqlDouble_t3404648495  get_Null_4() const { return ___Null_4; }
	inline SqlDouble_t3404648495 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlDouble_t3404648495  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlDouble_t3404648495_StaticFields, ___Zero_5)); }
	inline SqlDouble_t3404648495  get_Zero_5() const { return ___Zero_5; }
	inline SqlDouble_t3404648495 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlDouble_t3404648495  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDouble
struct SqlDouble_t3404648495_marshaled_pinvoke
{
	double ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDouble
struct SqlDouble_t3404648495_marshaled_com
{
	double ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLDOUBLE_T3404648495_H
#ifndef COMPONENT_T1938025610_H
#define COMPONENT_T1938025610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t1938025610  : public MarshalByRefObject_t2387283355
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t421778690 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t1938025610, ___event_handlers_1)); }
	inline EventHandlerList_t421778690 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t421778690 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t421778690 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t1938025610, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t1938025610, ___disposedEvent_3)); }
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
#endif // COMPONENT_T1938025610_H
#ifndef SQLDECIMAL_T1644234316_H
#define SQLDECIMAL_T1644234316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlDecimal
struct  SqlDecimal_t1644234316 
{
public:
	// System.Int32[] System.Data.SqlTypes.SqlDecimal::value
	Int32U5BU5D_t1719863841* ___value_0;
	// System.Byte System.Data.SqlTypes.SqlDecimal::precision
	uint8_t ___precision_1;
	// System.Byte System.Data.SqlTypes.SqlDecimal::scale
	uint8_t ___scale_2;
	// System.Boolean System.Data.SqlTypes.SqlDecimal::positive
	bool ___positive_3;
	// System.Boolean System.Data.SqlTypes.SqlDecimal::notNull
	bool ___notNull_4;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlDecimal_t1644234316, ___value_0)); }
	inline Int32U5BU5D_t1719863841* get_value_0() const { return ___value_0; }
	inline Int32U5BU5D_t1719863841** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Int32U5BU5D_t1719863841* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_precision_1() { return static_cast<int32_t>(offsetof(SqlDecimal_t1644234316, ___precision_1)); }
	inline uint8_t get_precision_1() const { return ___precision_1; }
	inline uint8_t* get_address_of_precision_1() { return &___precision_1; }
	inline void set_precision_1(uint8_t value)
	{
		___precision_1 = value;
	}

	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(SqlDecimal_t1644234316, ___scale_2)); }
	inline uint8_t get_scale_2() const { return ___scale_2; }
	inline uint8_t* get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(uint8_t value)
	{
		___scale_2 = value;
	}

	inline static int32_t get_offset_of_positive_3() { return static_cast<int32_t>(offsetof(SqlDecimal_t1644234316, ___positive_3)); }
	inline bool get_positive_3() const { return ___positive_3; }
	inline bool* get_address_of_positive_3() { return &___positive_3; }
	inline void set_positive_3(bool value)
	{
		___positive_3 = value;
	}

	inline static int32_t get_offset_of_notNull_4() { return static_cast<int32_t>(offsetof(SqlDecimal_t1644234316, ___notNull_4)); }
	inline bool get_notNull_4() const { return ___notNull_4; }
	inline bool* get_address_of_notNull_4() { return &___notNull_4; }
	inline void set_notNull_4(bool value)
	{
		___notNull_4 = value;
	}
};

struct SqlDecimal_t1644234316_StaticFields
{
public:
	// System.UInt32[] System.Data.SqlTypes.SqlDecimal::constantsDecadeInt32Factors
	UInt32U5BU5D_t1751769761* ___constantsDecadeInt32Factors_5;
	// System.Byte System.Data.SqlTypes.SqlDecimal::MaxPrecision
	uint8_t ___MaxPrecision_6;
	// System.Byte System.Data.SqlTypes.SqlDecimal::MaxScale
	uint8_t ___MaxScale_7;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::MaxValue
	SqlDecimal_t1644234316  ___MaxValue_8;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::MinValue
	SqlDecimal_t1644234316  ___MinValue_9;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::Null
	SqlDecimal_t1644234316  ___Null_10;

public:
	inline static int32_t get_offset_of_constantsDecadeInt32Factors_5() { return static_cast<int32_t>(offsetof(SqlDecimal_t1644234316_StaticFields, ___constantsDecadeInt32Factors_5)); }
	inline UInt32U5BU5D_t1751769761* get_constantsDecadeInt32Factors_5() const { return ___constantsDecadeInt32Factors_5; }
	inline UInt32U5BU5D_t1751769761** get_address_of_constantsDecadeInt32Factors_5() { return &___constantsDecadeInt32Factors_5; }
	inline void set_constantsDecadeInt32Factors_5(UInt32U5BU5D_t1751769761* value)
	{
		___constantsDecadeInt32Factors_5 = value;
		Il2CppCodeGenWriteBarrier((&___constantsDecadeInt32Factors_5), value);
	}

	inline static int32_t get_offset_of_MaxPrecision_6() { return static_cast<int32_t>(offsetof(SqlDecimal_t1644234316_StaticFields, ___MaxPrecision_6)); }
	inline uint8_t get_MaxPrecision_6() const { return ___MaxPrecision_6; }
	inline uint8_t* get_address_of_MaxPrecision_6() { return &___MaxPrecision_6; }
	inline void set_MaxPrecision_6(uint8_t value)
	{
		___MaxPrecision_6 = value;
	}

	inline static int32_t get_offset_of_MaxScale_7() { return static_cast<int32_t>(offsetof(SqlDecimal_t1644234316_StaticFields, ___MaxScale_7)); }
	inline uint8_t get_MaxScale_7() const { return ___MaxScale_7; }
	inline uint8_t* get_address_of_MaxScale_7() { return &___MaxScale_7; }
	inline void set_MaxScale_7(uint8_t value)
	{
		___MaxScale_7 = value;
	}

	inline static int32_t get_offset_of_MaxValue_8() { return static_cast<int32_t>(offsetof(SqlDecimal_t1644234316_StaticFields, ___MaxValue_8)); }
	inline SqlDecimal_t1644234316  get_MaxValue_8() const { return ___MaxValue_8; }
	inline SqlDecimal_t1644234316 * get_address_of_MaxValue_8() { return &___MaxValue_8; }
	inline void set_MaxValue_8(SqlDecimal_t1644234316  value)
	{
		___MaxValue_8 = value;
	}

	inline static int32_t get_offset_of_MinValue_9() { return static_cast<int32_t>(offsetof(SqlDecimal_t1644234316_StaticFields, ___MinValue_9)); }
	inline SqlDecimal_t1644234316  get_MinValue_9() const { return ___MinValue_9; }
	inline SqlDecimal_t1644234316 * get_address_of_MinValue_9() { return &___MinValue_9; }
	inline void set_MinValue_9(SqlDecimal_t1644234316  value)
	{
		___MinValue_9 = value;
	}

	inline static int32_t get_offset_of_Null_10() { return static_cast<int32_t>(offsetof(SqlDecimal_t1644234316_StaticFields, ___Null_10)); }
	inline SqlDecimal_t1644234316  get_Null_10() const { return ___Null_10; }
	inline SqlDecimal_t1644234316 * get_address_of_Null_10() { return &___Null_10; }
	inline void set_Null_10(SqlDecimal_t1644234316  value)
	{
		___Null_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDecimal
struct SqlDecimal_t1644234316_marshaled_pinvoke
{
	int32_t* ___value_0;
	uint8_t ___precision_1;
	uint8_t ___scale_2;
	int32_t ___positive_3;
	int32_t ___notNull_4;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDecimal
struct SqlDecimal_t1644234316_marshaled_com
{
	int32_t* ___value_0;
	uint8_t ___precision_1;
	uint8_t ___scale_2;
	int32_t ___positive_3;
	int32_t ___notNull_4;
};
#endif // SQLDECIMAL_T1644234316_H
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
#ifndef DATACOLUMNCHANGEEVENTARGS_T28755278_H
#define DATACOLUMNCHANGEEVENTARGS_T28755278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumnChangeEventArgs
struct  DataColumnChangeEventArgs_t28755278  : public EventArgs_t3141815178
{
public:
	// System.Data.DataColumn System.Data.DataColumnChangeEventArgs::_column
	DataColumn_t2121335505 * ____column_1;
	// System.Data.DataRow System.Data.DataColumnChangeEventArgs::_row
	DataRow_t409901744 * ____row_2;
	// System.Object System.Data.DataColumnChangeEventArgs::_proposedValue
	RuntimeObject * ____proposedValue_3;

public:
	inline static int32_t get_offset_of__column_1() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t28755278, ____column_1)); }
	inline DataColumn_t2121335505 * get__column_1() const { return ____column_1; }
	inline DataColumn_t2121335505 ** get_address_of__column_1() { return &____column_1; }
	inline void set__column_1(DataColumn_t2121335505 * value)
	{
		____column_1 = value;
		Il2CppCodeGenWriteBarrier((&____column_1), value);
	}

	inline static int32_t get_offset_of__row_2() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t28755278, ____row_2)); }
	inline DataRow_t409901744 * get__row_2() const { return ____row_2; }
	inline DataRow_t409901744 ** get_address_of__row_2() { return &____row_2; }
	inline void set__row_2(DataRow_t409901744 * value)
	{
		____row_2 = value;
		Il2CppCodeGenWriteBarrier((&____row_2), value);
	}

	inline static int32_t get_offset_of__proposedValue_3() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t28755278, ____proposedValue_3)); }
	inline RuntimeObject * get__proposedValue_3() const { return ____proposedValue_3; }
	inline RuntimeObject ** get_address_of__proposedValue_3() { return &____proposedValue_3; }
	inline void set__proposedValue_3(RuntimeObject * value)
	{
		____proposedValue_3 = value;
		Il2CppCodeGenWriteBarrier((&____proposedValue_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACOLUMNCHANGEEVENTARGS_T28755278_H
#ifndef DBPARAMETER_T2455824679_H
#define DBPARAMETER_T2455824679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbParameter
struct  DbParameter_t2455824679  : public MarshalByRefObject_t2387283355
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPARAMETER_T2455824679_H
#ifndef DBPARAMETERCOLLECTION_T3288296468_H
#define DBPARAMETERCOLLECTION_T3288296468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbParameterCollection
struct  DbParameterCollection_t3288296468  : public MarshalByRefObject_t2387283355
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPARAMETERCOLLECTION_T3288296468_H
#ifndef SQLINT64_T4263657755_H
#define SQLINT64_T4263657755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlInt64
struct  SqlInt64_t4263657755 
{
public:
	// System.Int64 System.Data.SqlTypes.SqlInt64::value
	int64_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlInt64::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlInt64_t4263657755, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlInt64_t4263657755, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlInt64_t4263657755_StaticFields
{
public:
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::MaxValue
	SqlInt64_t4263657755  ___MaxValue_2;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::MinValue
	SqlInt64_t4263657755  ___MinValue_3;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::Null
	SqlInt64_t4263657755  ___Null_4;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::Zero
	SqlInt64_t4263657755  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlInt64_t4263657755_StaticFields, ___MaxValue_2)); }
	inline SqlInt64_t4263657755  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlInt64_t4263657755 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlInt64_t4263657755  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlInt64_t4263657755_StaticFields, ___MinValue_3)); }
	inline SqlInt64_t4263657755  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlInt64_t4263657755 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlInt64_t4263657755  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt64_t4263657755_StaticFields, ___Null_4)); }
	inline SqlInt64_t4263657755  get_Null_4() const { return ___Null_4; }
	inline SqlInt64_t4263657755 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt64_t4263657755  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt64_t4263657755_StaticFields, ___Zero_5)); }
	inline SqlInt64_t4263657755  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt64_t4263657755 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt64_t4263657755  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt64
struct SqlInt64_t4263657755_marshaled_pinvoke
{
	int64_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt64
struct SqlInt64_t4263657755_marshaled_com
{
	int64_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLINT64_T4263657755_H
#ifndef DATACOLUMNCOLLECTION_T399999455_H
#define DATACOLUMNCOLLECTION_T399999455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumnCollection
struct  DataColumnCollection_t399999455  : public InternalDataCollectionBase_t3545648598
{
public:
	// System.Collections.Hashtable System.Data.DataColumnCollection::columnNameCount
	Hashtable_t188184851 * ___columnNameCount_2;
	// System.Collections.Hashtable System.Data.DataColumnCollection::columnFromName
	Hashtable_t188184851 * ___columnFromName_3;
	// System.Collections.ArrayList System.Data.DataColumnCollection::autoIncrement
	ArrayList_t1090370772 * ___autoIncrement_4;
	// System.Int32 System.Data.DataColumnCollection::defaultColumnIndex
	int32_t ___defaultColumnIndex_5;
	// System.Data.DataTable System.Data.DataColumnCollection::parentTable
	DataTable_t458307818 * ___parentTable_6;
	// System.Data.DataColumn[] System.Data.DataColumnCollection::_mostRecentColumns
	DataColumnU5BU5D_t1250929356* ____mostRecentColumns_7;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionChanged
	CollectionChangeEventHandler_t2973298682 * ___CollectionChanged_10;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionMetaDataChanged
	CollectionChangeEventHandler_t2973298682 * ___CollectionMetaDataChanged_11;

public:
	inline static int32_t get_offset_of_columnNameCount_2() { return static_cast<int32_t>(offsetof(DataColumnCollection_t399999455, ___columnNameCount_2)); }
	inline Hashtable_t188184851 * get_columnNameCount_2() const { return ___columnNameCount_2; }
	inline Hashtable_t188184851 ** get_address_of_columnNameCount_2() { return &___columnNameCount_2; }
	inline void set_columnNameCount_2(Hashtable_t188184851 * value)
	{
		___columnNameCount_2 = value;
		Il2CppCodeGenWriteBarrier((&___columnNameCount_2), value);
	}

	inline static int32_t get_offset_of_columnFromName_3() { return static_cast<int32_t>(offsetof(DataColumnCollection_t399999455, ___columnFromName_3)); }
	inline Hashtable_t188184851 * get_columnFromName_3() const { return ___columnFromName_3; }
	inline Hashtable_t188184851 ** get_address_of_columnFromName_3() { return &___columnFromName_3; }
	inline void set_columnFromName_3(Hashtable_t188184851 * value)
	{
		___columnFromName_3 = value;
		Il2CppCodeGenWriteBarrier((&___columnFromName_3), value);
	}

	inline static int32_t get_offset_of_autoIncrement_4() { return static_cast<int32_t>(offsetof(DataColumnCollection_t399999455, ___autoIncrement_4)); }
	inline ArrayList_t1090370772 * get_autoIncrement_4() const { return ___autoIncrement_4; }
	inline ArrayList_t1090370772 ** get_address_of_autoIncrement_4() { return &___autoIncrement_4; }
	inline void set_autoIncrement_4(ArrayList_t1090370772 * value)
	{
		___autoIncrement_4 = value;
		Il2CppCodeGenWriteBarrier((&___autoIncrement_4), value);
	}

	inline static int32_t get_offset_of_defaultColumnIndex_5() { return static_cast<int32_t>(offsetof(DataColumnCollection_t399999455, ___defaultColumnIndex_5)); }
	inline int32_t get_defaultColumnIndex_5() const { return ___defaultColumnIndex_5; }
	inline int32_t* get_address_of_defaultColumnIndex_5() { return &___defaultColumnIndex_5; }
	inline void set_defaultColumnIndex_5(int32_t value)
	{
		___defaultColumnIndex_5 = value;
	}

	inline static int32_t get_offset_of_parentTable_6() { return static_cast<int32_t>(offsetof(DataColumnCollection_t399999455, ___parentTable_6)); }
	inline DataTable_t458307818 * get_parentTable_6() const { return ___parentTable_6; }
	inline DataTable_t458307818 ** get_address_of_parentTable_6() { return &___parentTable_6; }
	inline void set_parentTable_6(DataTable_t458307818 * value)
	{
		___parentTable_6 = value;
		Il2CppCodeGenWriteBarrier((&___parentTable_6), value);
	}

	inline static int32_t get_offset_of__mostRecentColumns_7() { return static_cast<int32_t>(offsetof(DataColumnCollection_t399999455, ____mostRecentColumns_7)); }
	inline DataColumnU5BU5D_t1250929356* get__mostRecentColumns_7() const { return ____mostRecentColumns_7; }
	inline DataColumnU5BU5D_t1250929356** get_address_of__mostRecentColumns_7() { return &____mostRecentColumns_7; }
	inline void set__mostRecentColumns_7(DataColumnU5BU5D_t1250929356* value)
	{
		____mostRecentColumns_7 = value;
		Il2CppCodeGenWriteBarrier((&____mostRecentColumns_7), value);
	}

	inline static int32_t get_offset_of_CollectionChanged_10() { return static_cast<int32_t>(offsetof(DataColumnCollection_t399999455, ___CollectionChanged_10)); }
	inline CollectionChangeEventHandler_t2973298682 * get_CollectionChanged_10() const { return ___CollectionChanged_10; }
	inline CollectionChangeEventHandler_t2973298682 ** get_address_of_CollectionChanged_10() { return &___CollectionChanged_10; }
	inline void set_CollectionChanged_10(CollectionChangeEventHandler_t2973298682 * value)
	{
		___CollectionChanged_10 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_10), value);
	}

	inline static int32_t get_offset_of_CollectionMetaDataChanged_11() { return static_cast<int32_t>(offsetof(DataColumnCollection_t399999455, ___CollectionMetaDataChanged_11)); }
	inline CollectionChangeEventHandler_t2973298682 * get_CollectionMetaDataChanged_11() const { return ___CollectionMetaDataChanged_11; }
	inline CollectionChangeEventHandler_t2973298682 ** get_address_of_CollectionMetaDataChanged_11() { return &___CollectionMetaDataChanged_11; }
	inline void set_CollectionMetaDataChanged_11(CollectionChangeEventHandler_t2973298682 * value)
	{
		___CollectionMetaDataChanged_11 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionMetaDataChanged_11), value);
	}
};

struct DataColumnCollection_t399999455_StaticFields
{
public:
	// System.String System.Data.DataColumnCollection::ColumnPrefix
	String_t* ___ColumnPrefix_8;
	// System.String[] System.Data.DataColumnCollection::TenColumns
	StringU5BU5D_t1002137567* ___TenColumns_9;

public:
	inline static int32_t get_offset_of_ColumnPrefix_8() { return static_cast<int32_t>(offsetof(DataColumnCollection_t399999455_StaticFields, ___ColumnPrefix_8)); }
	inline String_t* get_ColumnPrefix_8() const { return ___ColumnPrefix_8; }
	inline String_t** get_address_of_ColumnPrefix_8() { return &___ColumnPrefix_8; }
	inline void set_ColumnPrefix_8(String_t* value)
	{
		___ColumnPrefix_8 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnPrefix_8), value);
	}

	inline static int32_t get_offset_of_TenColumns_9() { return static_cast<int32_t>(offsetof(DataColumnCollection_t399999455_StaticFields, ___TenColumns_9)); }
	inline StringU5BU5D_t1002137567* get_TenColumns_9() const { return ___TenColumns_9; }
	inline StringU5BU5D_t1002137567** get_address_of_TenColumns_9() { return &___TenColumns_9; }
	inline void set_TenColumns_9(StringU5BU5D_t1002137567* value)
	{
		___TenColumns_9 = value;
		Il2CppCodeGenWriteBarrier((&___TenColumns_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACOLUMNCOLLECTION_T399999455_H
#ifndef SQLINT32_T2110269780_H
#define SQLINT32_T2110269780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlInt32
struct  SqlInt32_t2110269780 
{
public:
	// System.Int32 System.Data.SqlTypes.SqlInt32::value
	int32_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlInt32::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlInt32_t2110269780, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlInt32_t2110269780, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlInt32_t2110269780_StaticFields
{
public:
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::MaxValue
	SqlInt32_t2110269780  ___MaxValue_2;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::MinValue
	SqlInt32_t2110269780  ___MinValue_3;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::Null
	SqlInt32_t2110269780  ___Null_4;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::Zero
	SqlInt32_t2110269780  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlInt32_t2110269780_StaticFields, ___MaxValue_2)); }
	inline SqlInt32_t2110269780  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlInt32_t2110269780 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlInt32_t2110269780  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlInt32_t2110269780_StaticFields, ___MinValue_3)); }
	inline SqlInt32_t2110269780  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlInt32_t2110269780 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlInt32_t2110269780  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt32_t2110269780_StaticFields, ___Null_4)); }
	inline SqlInt32_t2110269780  get_Null_4() const { return ___Null_4; }
	inline SqlInt32_t2110269780 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt32_t2110269780  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt32_t2110269780_StaticFields, ___Zero_5)); }
	inline SqlInt32_t2110269780  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt32_t2110269780 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt32_t2110269780  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt32
struct SqlInt32_t2110269780_marshaled_pinvoke
{
	int32_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt32
struct SqlInt32_t2110269780_marshaled_com
{
	int32_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLINT32_T2110269780_H
#ifndef DATARELATIONCOLLECTION_T1576344460_H
#define DATARELATIONCOLLECTION_T1576344460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection
struct  DataRelationCollection_t1576344460  : public InternalDataCollectionBase_t3545648598
{
public:
	// System.Data.DataRelation System.Data.DataRelationCollection::inTransition
	DataRelation_t3388391349 * ___inTransition_2;
	// System.Int32 System.Data.DataRelationCollection::index
	int32_t ___index_3;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataRelationCollection::CollectionChanged
	CollectionChangeEventHandler_t2973298682 * ___CollectionChanged_4;

public:
	inline static int32_t get_offset_of_inTransition_2() { return static_cast<int32_t>(offsetof(DataRelationCollection_t1576344460, ___inTransition_2)); }
	inline DataRelation_t3388391349 * get_inTransition_2() const { return ___inTransition_2; }
	inline DataRelation_t3388391349 ** get_address_of_inTransition_2() { return &___inTransition_2; }
	inline void set_inTransition_2(DataRelation_t3388391349 * value)
	{
		___inTransition_2 = value;
		Il2CppCodeGenWriteBarrier((&___inTransition_2), value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(DataRelationCollection_t1576344460, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_CollectionChanged_4() { return static_cast<int32_t>(offsetof(DataRelationCollection_t1576344460, ___CollectionChanged_4)); }
	inline CollectionChangeEventHandler_t2973298682 * get_CollectionChanged_4() const { return ___CollectionChanged_4; }
	inline CollectionChangeEventHandler_t2973298682 ** get_address_of_CollectionChanged_4() { return &___CollectionChanged_4; }
	inline void set_CollectionChanged_4(CollectionChangeEventHandler_t2973298682 * value)
	{
		___CollectionChanged_4 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATARELATIONCOLLECTION_T1576344460_H
#ifndef SQLBINARY_T3877652915_H
#define SQLBINARY_T3877652915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBinary
struct  SqlBinary_t3877652915 
{
public:
	// System.Byte[] System.Data.SqlTypes.SqlBinary::value
	ByteU5BU5D_t2378657911* ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlBinary::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlBinary_t3877652915, ___value_0)); }
	inline ByteU5BU5D_t2378657911* get_value_0() const { return ___value_0; }
	inline ByteU5BU5D_t2378657911** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(ByteU5BU5D_t2378657911* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlBinary_t3877652915, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlBinary_t3877652915_StaticFields
{
public:
	// System.Data.SqlTypes.SqlBinary System.Data.SqlTypes.SqlBinary::Null
	SqlBinary_t3877652915  ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(SqlBinary_t3877652915_StaticFields, ___Null_2)); }
	inline SqlBinary_t3877652915  get_Null_2() const { return ___Null_2; }
	inline SqlBinary_t3877652915 * get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(SqlBinary_t3877652915  value)
	{
		___Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlBinary
struct SqlBinary_t3877652915_marshaled_pinvoke
{
	uint8_t* ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlBinary
struct SqlBinary_t3877652915_marshaled_com
{
	uint8_t* ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLBINARY_T3877652915_H
#ifndef SQLBOOLEAN_T1715340265_H
#define SQLBOOLEAN_T1715340265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBoolean
struct  SqlBoolean_t1715340265 
{
public:
	// System.Byte System.Data.SqlTypes.SqlBoolean::value
	uint8_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlBoolean::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlBoolean_t1715340265, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlBoolean_t1715340265, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlBoolean_t1715340265_StaticFields
{
public:
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::False
	SqlBoolean_t1715340265  ___False_2;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Null
	SqlBoolean_t1715340265  ___Null_3;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::One
	SqlBoolean_t1715340265  ___One_4;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::True
	SqlBoolean_t1715340265  ___True_5;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Zero
	SqlBoolean_t1715340265  ___Zero_6;

public:
	inline static int32_t get_offset_of_False_2() { return static_cast<int32_t>(offsetof(SqlBoolean_t1715340265_StaticFields, ___False_2)); }
	inline SqlBoolean_t1715340265  get_False_2() const { return ___False_2; }
	inline SqlBoolean_t1715340265 * get_address_of_False_2() { return &___False_2; }
	inline void set_False_2(SqlBoolean_t1715340265  value)
	{
		___False_2 = value;
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(SqlBoolean_t1715340265_StaticFields, ___Null_3)); }
	inline SqlBoolean_t1715340265  get_Null_3() const { return ___Null_3; }
	inline SqlBoolean_t1715340265 * get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(SqlBoolean_t1715340265  value)
	{
		___Null_3 = value;
	}

	inline static int32_t get_offset_of_One_4() { return static_cast<int32_t>(offsetof(SqlBoolean_t1715340265_StaticFields, ___One_4)); }
	inline SqlBoolean_t1715340265  get_One_4() const { return ___One_4; }
	inline SqlBoolean_t1715340265 * get_address_of_One_4() { return &___One_4; }
	inline void set_One_4(SqlBoolean_t1715340265  value)
	{
		___One_4 = value;
	}

	inline static int32_t get_offset_of_True_5() { return static_cast<int32_t>(offsetof(SqlBoolean_t1715340265_StaticFields, ___True_5)); }
	inline SqlBoolean_t1715340265  get_True_5() const { return ___True_5; }
	inline SqlBoolean_t1715340265 * get_address_of_True_5() { return &___True_5; }
	inline void set_True_5(SqlBoolean_t1715340265  value)
	{
		___True_5 = value;
	}

	inline static int32_t get_offset_of_Zero_6() { return static_cast<int32_t>(offsetof(SqlBoolean_t1715340265_StaticFields, ___Zero_6)); }
	inline SqlBoolean_t1715340265  get_Zero_6() const { return ___Zero_6; }
	inline SqlBoolean_t1715340265 * get_address_of_Zero_6() { return &___Zero_6; }
	inline void set_Zero_6(SqlBoolean_t1715340265  value)
	{
		___Zero_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlBoolean
struct SqlBoolean_t1715340265_marshaled_pinvoke
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlBoolean
struct SqlBoolean_t1715340265_marshaled_com
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLBOOLEAN_T1715340265_H
#ifndef SQLBYTE_T1609773614_H
#define SQLBYTE_T1609773614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlByte
struct  SqlByte_t1609773614 
{
public:
	// System.Byte System.Data.SqlTypes.SqlByte::value
	uint8_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlByte::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlByte_t1609773614, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlByte_t1609773614, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlByte_t1609773614_StaticFields
{
public:
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::MaxValue
	SqlByte_t1609773614  ___MaxValue_2;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::MinValue
	SqlByte_t1609773614  ___MinValue_3;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::Null
	SqlByte_t1609773614  ___Null_4;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::Zero
	SqlByte_t1609773614  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlByte_t1609773614_StaticFields, ___MaxValue_2)); }
	inline SqlByte_t1609773614  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlByte_t1609773614 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlByte_t1609773614  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlByte_t1609773614_StaticFields, ___MinValue_3)); }
	inline SqlByte_t1609773614  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlByte_t1609773614 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlByte_t1609773614  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlByte_t1609773614_StaticFields, ___Null_4)); }
	inline SqlByte_t1609773614  get_Null_4() const { return ___Null_4; }
	inline SqlByte_t1609773614 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlByte_t1609773614  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlByte_t1609773614_StaticFields, ___Zero_5)); }
	inline SqlByte_t1609773614  get_Zero_5() const { return ___Zero_5; }
	inline SqlByte_t1609773614 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlByte_t1609773614  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlByte
struct SqlByte_t1609773614_marshaled_pinvoke
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlByte
struct SqlByte_t1609773614_marshaled_com
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLBYTE_T1609773614_H
#ifndef DATATABLEMAPPINGCOLLECTION_T2563982741_H
#define DATATABLEMAPPINGCOLLECTION_T2563982741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataTableMappingCollection
struct  DataTableMappingCollection_t2563982741  : public MarshalByRefObject_t2387283355
{
public:
	// System.Collections.ArrayList System.Data.Common.DataTableMappingCollection::mappings
	ArrayList_t1090370772 * ___mappings_1;
	// System.Collections.Hashtable System.Data.Common.DataTableMappingCollection::sourceTables
	Hashtable_t188184851 * ___sourceTables_2;
	// System.Collections.Hashtable System.Data.Common.DataTableMappingCollection::dataSetTables
	Hashtable_t188184851 * ___dataSetTables_3;

public:
	inline static int32_t get_offset_of_mappings_1() { return static_cast<int32_t>(offsetof(DataTableMappingCollection_t2563982741, ___mappings_1)); }
	inline ArrayList_t1090370772 * get_mappings_1() const { return ___mappings_1; }
	inline ArrayList_t1090370772 ** get_address_of_mappings_1() { return &___mappings_1; }
	inline void set_mappings_1(ArrayList_t1090370772 * value)
	{
		___mappings_1 = value;
		Il2CppCodeGenWriteBarrier((&___mappings_1), value);
	}

	inline static int32_t get_offset_of_sourceTables_2() { return static_cast<int32_t>(offsetof(DataTableMappingCollection_t2563982741, ___sourceTables_2)); }
	inline Hashtable_t188184851 * get_sourceTables_2() const { return ___sourceTables_2; }
	inline Hashtable_t188184851 ** get_address_of_sourceTables_2() { return &___sourceTables_2; }
	inline void set_sourceTables_2(Hashtable_t188184851 * value)
	{
		___sourceTables_2 = value;
		Il2CppCodeGenWriteBarrier((&___sourceTables_2), value);
	}

	inline static int32_t get_offset_of_dataSetTables_3() { return static_cast<int32_t>(offsetof(DataTableMappingCollection_t2563982741, ___dataSetTables_3)); }
	inline Hashtable_t188184851 * get_dataSetTables_3() const { return ___dataSetTables_3; }
	inline Hashtable_t188184851 ** get_address_of_dataSetTables_3() { return &___dataSetTables_3; }
	inline void set_dataSetTables_3(Hashtable_t188184851 * value)
	{
		___dataSetTables_3 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetTables_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLEMAPPINGCOLLECTION_T2563982741_H
#ifndef CONSTRAINTCOLLECTION_T2199860084_H
#define CONSTRAINTCOLLECTION_T2199860084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintCollection
struct  ConstraintCollection_t2199860084  : public InternalDataCollectionBase_t3545648598
{
public:
	// System.Data.DataTable System.Data.ConstraintCollection::table
	DataTable_t458307818 * ___table_2;
	// System.Data.Constraint[] System.Data.ConstraintCollection::_mostRecentConstraints
	ConstraintU5BU5D_t2463382585* ____mostRecentConstraints_3;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.ConstraintCollection::CollectionChanged
	CollectionChangeEventHandler_t2973298682 * ___CollectionChanged_4;

public:
	inline static int32_t get_offset_of_table_2() { return static_cast<int32_t>(offsetof(ConstraintCollection_t2199860084, ___table_2)); }
	inline DataTable_t458307818 * get_table_2() const { return ___table_2; }
	inline DataTable_t458307818 ** get_address_of_table_2() { return &___table_2; }
	inline void set_table_2(DataTable_t458307818 * value)
	{
		___table_2 = value;
		Il2CppCodeGenWriteBarrier((&___table_2), value);
	}

	inline static int32_t get_offset_of__mostRecentConstraints_3() { return static_cast<int32_t>(offsetof(ConstraintCollection_t2199860084, ____mostRecentConstraints_3)); }
	inline ConstraintU5BU5D_t2463382585* get__mostRecentConstraints_3() const { return ____mostRecentConstraints_3; }
	inline ConstraintU5BU5D_t2463382585** get_address_of__mostRecentConstraints_3() { return &____mostRecentConstraints_3; }
	inline void set__mostRecentConstraints_3(ConstraintU5BU5D_t2463382585* value)
	{
		____mostRecentConstraints_3 = value;
		Il2CppCodeGenWriteBarrier((&____mostRecentConstraints_3), value);
	}

	inline static int32_t get_offset_of_CollectionChanged_4() { return static_cast<int32_t>(offsetof(ConstraintCollection_t2199860084, ___CollectionChanged_4)); }
	inline CollectionChangeEventHandler_t2973298682 * get_CollectionChanged_4() const { return ___CollectionChanged_4; }
	inline CollectionChangeEventHandler_t2973298682 ** get_address_of_CollectionChanged_4() { return &___CollectionChanged_4; }
	inline void set_CollectionChanged_4(CollectionChangeEventHandler_t2973298682 * value)
	{
		___CollectionChanged_4 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTCOLLECTION_T2199860084_H
#ifndef OBJECTDATACONTAINER_T499755083_H
#define OBJECTDATACONTAINER_T499755083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.ObjectDataContainer
struct  ObjectDataContainer_t499755083  : public DataContainer_t2006856459
{
public:
	// System.Object[] System.Data.Common.ObjectDataContainer::_values
	ObjectU5BU5D_t864419831* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(ObjectDataContainer_t499755083, ____values_3)); }
	inline ObjectU5BU5D_t864419831* get__values_3() const { return ____values_3; }
	inline ObjectU5BU5D_t864419831** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(ObjectU5BU5D_t864419831* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTDATACONTAINER_T499755083_H
#ifndef UNARYEXPRESSION_T3578873248_H
#define UNARYEXPRESSION_T3578873248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.UnaryExpression
struct  UnaryExpression_t3578873248  : public BaseExpression_t1977657975
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.UnaryExpression::expr
	RuntimeObject* ___expr_0;

public:
	inline static int32_t get_offset_of_expr_0() { return static_cast<int32_t>(offsetof(UnaryExpression_t3578873248, ___expr_0)); }
	inline RuntimeObject* get_expr_0() const { return ___expr_0; }
	inline RuntimeObject** get_address_of_expr_0() { return &___expr_0; }
	inline void set_expr_0(RuntimeObject* value)
	{
		___expr_0 = value;
		Il2CppCodeGenWriteBarrier((&___expr_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNARYEXPRESSION_T3578873248_H
#ifndef BINARYEXPRESSION_T3096525146_H
#define BINARYEXPRESSION_T3096525146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.BinaryExpression
struct  BinaryExpression_t3096525146  : public BaseExpression_t1977657975
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.BinaryExpression::expr1
	RuntimeObject* ___expr1_0;
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.BinaryExpression::expr2
	RuntimeObject* ___expr2_1;

public:
	inline static int32_t get_offset_of_expr1_0() { return static_cast<int32_t>(offsetof(BinaryExpression_t3096525146, ___expr1_0)); }
	inline RuntimeObject* get_expr1_0() const { return ___expr1_0; }
	inline RuntimeObject** get_address_of_expr1_0() { return &___expr1_0; }
	inline void set_expr1_0(RuntimeObject* value)
	{
		___expr1_0 = value;
		Il2CppCodeGenWriteBarrier((&___expr1_0), value);
	}

	inline static int32_t get_offset_of_expr2_1() { return static_cast<int32_t>(offsetof(BinaryExpression_t3096525146, ___expr2_1)); }
	inline RuntimeObject* get_expr2_1() const { return ___expr2_1; }
	inline RuntimeObject** get_address_of_expr2_1() { return &___expr2_1; }
	inline void set_expr2_1(RuntimeObject* value)
	{
		___expr2_1 = value;
		Il2CppCodeGenWriteBarrier((&___expr2_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYEXPRESSION_T3096525146_H
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
#ifndef PROPERTYDESCRIPTOR_T3383610232_H
#define PROPERTYDESCRIPTOR_T3383610232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t3383610232  : public MemberDescriptor_t1395163271
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t192055412 * ___converter_4;
	// System.Collections.Hashtable System.ComponentModel.PropertyDescriptor::notifiers
	Hashtable_t188184851 * ___notifiers_5;

public:
	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3383610232, ___converter_4)); }
	inline TypeConverter_t192055412 * get_converter_4() const { return ___converter_4; }
	inline TypeConverter_t192055412 ** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(TypeConverter_t192055412 * value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}

	inline static int32_t get_offset_of_notifiers_5() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3383610232, ___notifiers_5)); }
	inline Hashtable_t188184851 * get_notifiers_5() const { return ___notifiers_5; }
	inline Hashtable_t188184851 ** get_address_of_notifiers_5() { return &___notifiers_5; }
	inline void set_notifiers_5(Hashtable_t188184851 * value)
	{
		___notifiers_5 = value;
		Il2CppCodeGenWriteBarrier((&___notifiers_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T3383610232_H
#ifndef LITERAL_T3565367463_H
#define LITERAL_T3565367463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Literal
struct  Literal_t3565367463  : public BaseExpression_t1977657975
{
public:
	// System.Object Mono.Data.SqlExpressions.Literal::val
	RuntimeObject * ___val_0;

public:
	inline static int32_t get_offset_of_val_0() { return static_cast<int32_t>(offsetof(Literal_t3565367463, ___val_0)); }
	inline RuntimeObject * get_val_0() const { return ___val_0; }
	inline RuntimeObject ** get_address_of_val_0() { return &___val_0; }
	inline void set_val_0(RuntimeObject * value)
	{
		___val_0 = value;
		Il2CppCodeGenWriteBarrier((&___val_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LITERAL_T3565367463_H
#ifndef CATEGORYATTRIBUTE_T3135707549_H
#define CATEGORYATTRIBUTE_T3135707549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CategoryAttribute
struct  CategoryAttribute_t3135707549  : public Attribute_t2136411158
{
public:
	// System.String System.ComponentModel.CategoryAttribute::category
	String_t* ___category_0;
	// System.Boolean System.ComponentModel.CategoryAttribute::IsLocalized
	bool ___IsLocalized_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_IsLocalized_1() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549, ___IsLocalized_1)); }
	inline bool get_IsLocalized_1() const { return ___IsLocalized_1; }
	inline bool* get_address_of_IsLocalized_1() { return &___IsLocalized_1; }
	inline void set_IsLocalized_1(bool value)
	{
		___IsLocalized_1 = value;
	}
};

struct CategoryAttribute_t3135707549_StaticFields
{
public:
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::action
	CategoryAttribute_t3135707549 * ___action_2;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::appearance
	CategoryAttribute_t3135707549 * ___appearance_3;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::behaviour
	CategoryAttribute_t3135707549 * ___behaviour_4;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::data
	CategoryAttribute_t3135707549 * ___data_5;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::def
	CategoryAttribute_t3135707549 * ___def_6;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::design
	CategoryAttribute_t3135707549 * ___design_7;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::drag_drop
	CategoryAttribute_t3135707549 * ___drag_drop_8;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::focus
	CategoryAttribute_t3135707549 * ___focus_9;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::format
	CategoryAttribute_t3135707549 * ___format_10;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::key
	CategoryAttribute_t3135707549 * ___key_11;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::layout
	CategoryAttribute_t3135707549 * ___layout_12;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::mouse
	CategoryAttribute_t3135707549 * ___mouse_13;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::window_style
	CategoryAttribute_t3135707549 * ___window_style_14;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::async
	CategoryAttribute_t3135707549 * ___async_15;
	// System.Object System.ComponentModel.CategoryAttribute::lockobj
	RuntimeObject * ___lockobj_16;

public:
	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___action_2)); }
	inline CategoryAttribute_t3135707549 * get_action_2() const { return ___action_2; }
	inline CategoryAttribute_t3135707549 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(CategoryAttribute_t3135707549 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_appearance_3() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___appearance_3)); }
	inline CategoryAttribute_t3135707549 * get_appearance_3() const { return ___appearance_3; }
	inline CategoryAttribute_t3135707549 ** get_address_of_appearance_3() { return &___appearance_3; }
	inline void set_appearance_3(CategoryAttribute_t3135707549 * value)
	{
		___appearance_3 = value;
		Il2CppCodeGenWriteBarrier((&___appearance_3), value);
	}

	inline static int32_t get_offset_of_behaviour_4() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___behaviour_4)); }
	inline CategoryAttribute_t3135707549 * get_behaviour_4() const { return ___behaviour_4; }
	inline CategoryAttribute_t3135707549 ** get_address_of_behaviour_4() { return &___behaviour_4; }
	inline void set_behaviour_4(CategoryAttribute_t3135707549 * value)
	{
		___behaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&___behaviour_4), value);
	}

	inline static int32_t get_offset_of_data_5() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___data_5)); }
	inline CategoryAttribute_t3135707549 * get_data_5() const { return ___data_5; }
	inline CategoryAttribute_t3135707549 ** get_address_of_data_5() { return &___data_5; }
	inline void set_data_5(CategoryAttribute_t3135707549 * value)
	{
		___data_5 = value;
		Il2CppCodeGenWriteBarrier((&___data_5), value);
	}

	inline static int32_t get_offset_of_def_6() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___def_6)); }
	inline CategoryAttribute_t3135707549 * get_def_6() const { return ___def_6; }
	inline CategoryAttribute_t3135707549 ** get_address_of_def_6() { return &___def_6; }
	inline void set_def_6(CategoryAttribute_t3135707549 * value)
	{
		___def_6 = value;
		Il2CppCodeGenWriteBarrier((&___def_6), value);
	}

	inline static int32_t get_offset_of_design_7() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___design_7)); }
	inline CategoryAttribute_t3135707549 * get_design_7() const { return ___design_7; }
	inline CategoryAttribute_t3135707549 ** get_address_of_design_7() { return &___design_7; }
	inline void set_design_7(CategoryAttribute_t3135707549 * value)
	{
		___design_7 = value;
		Il2CppCodeGenWriteBarrier((&___design_7), value);
	}

	inline static int32_t get_offset_of_drag_drop_8() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___drag_drop_8)); }
	inline CategoryAttribute_t3135707549 * get_drag_drop_8() const { return ___drag_drop_8; }
	inline CategoryAttribute_t3135707549 ** get_address_of_drag_drop_8() { return &___drag_drop_8; }
	inline void set_drag_drop_8(CategoryAttribute_t3135707549 * value)
	{
		___drag_drop_8 = value;
		Il2CppCodeGenWriteBarrier((&___drag_drop_8), value);
	}

	inline static int32_t get_offset_of_focus_9() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___focus_9)); }
	inline CategoryAttribute_t3135707549 * get_focus_9() const { return ___focus_9; }
	inline CategoryAttribute_t3135707549 ** get_address_of_focus_9() { return &___focus_9; }
	inline void set_focus_9(CategoryAttribute_t3135707549 * value)
	{
		___focus_9 = value;
		Il2CppCodeGenWriteBarrier((&___focus_9), value);
	}

	inline static int32_t get_offset_of_format_10() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___format_10)); }
	inline CategoryAttribute_t3135707549 * get_format_10() const { return ___format_10; }
	inline CategoryAttribute_t3135707549 ** get_address_of_format_10() { return &___format_10; }
	inline void set_format_10(CategoryAttribute_t3135707549 * value)
	{
		___format_10 = value;
		Il2CppCodeGenWriteBarrier((&___format_10), value);
	}

	inline static int32_t get_offset_of_key_11() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___key_11)); }
	inline CategoryAttribute_t3135707549 * get_key_11() const { return ___key_11; }
	inline CategoryAttribute_t3135707549 ** get_address_of_key_11() { return &___key_11; }
	inline void set_key_11(CategoryAttribute_t3135707549 * value)
	{
		___key_11 = value;
		Il2CppCodeGenWriteBarrier((&___key_11), value);
	}

	inline static int32_t get_offset_of_layout_12() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___layout_12)); }
	inline CategoryAttribute_t3135707549 * get_layout_12() const { return ___layout_12; }
	inline CategoryAttribute_t3135707549 ** get_address_of_layout_12() { return &___layout_12; }
	inline void set_layout_12(CategoryAttribute_t3135707549 * value)
	{
		___layout_12 = value;
		Il2CppCodeGenWriteBarrier((&___layout_12), value);
	}

	inline static int32_t get_offset_of_mouse_13() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___mouse_13)); }
	inline CategoryAttribute_t3135707549 * get_mouse_13() const { return ___mouse_13; }
	inline CategoryAttribute_t3135707549 ** get_address_of_mouse_13() { return &___mouse_13; }
	inline void set_mouse_13(CategoryAttribute_t3135707549 * value)
	{
		___mouse_13 = value;
		Il2CppCodeGenWriteBarrier((&___mouse_13), value);
	}

	inline static int32_t get_offset_of_window_style_14() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___window_style_14)); }
	inline CategoryAttribute_t3135707549 * get_window_style_14() const { return ___window_style_14; }
	inline CategoryAttribute_t3135707549 ** get_address_of_window_style_14() { return &___window_style_14; }
	inline void set_window_style_14(CategoryAttribute_t3135707549 * value)
	{
		___window_style_14 = value;
		Il2CppCodeGenWriteBarrier((&___window_style_14), value);
	}

	inline static int32_t get_offset_of_async_15() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___async_15)); }
	inline CategoryAttribute_t3135707549 * get_async_15() const { return ___async_15; }
	inline CategoryAttribute_t3135707549 ** get_address_of_async_15() { return &___async_15; }
	inline void set_async_15(CategoryAttribute_t3135707549 * value)
	{
		___async_15 = value;
		Il2CppCodeGenWriteBarrier((&___async_15), value);
	}

	inline static int32_t get_offset_of_lockobj_16() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3135707549_StaticFields, ___lockobj_16)); }
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
#endif // CATEGORYATTRIBUTE_T3135707549_H
#ifndef EXPANDABLEOBJECTCONVERTER_T189315617_H
#define EXPANDABLEOBJECTCONVERTER_T189315617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t189315617  : public TypeConverter_t192055412
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T189315617_H
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
#ifndef DATATABLEMAPPING_T1354097707_H
#define DATATABLEMAPPING_T1354097707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataTableMapping
struct  DataTableMapping_t1354097707  : public MarshalByRefObject_t2387283355
{
public:
	// System.String System.Data.Common.DataTableMapping::sourceTable
	String_t* ___sourceTable_1;
	// System.String System.Data.Common.DataTableMapping::dataSetTable
	String_t* ___dataSetTable_2;
	// System.Data.Common.DataColumnMappingCollection System.Data.Common.DataTableMapping::columnMappings
	DataColumnMappingCollection_t2937617443 * ___columnMappings_3;

public:
	inline static int32_t get_offset_of_sourceTable_1() { return static_cast<int32_t>(offsetof(DataTableMapping_t1354097707, ___sourceTable_1)); }
	inline String_t* get_sourceTable_1() const { return ___sourceTable_1; }
	inline String_t** get_address_of_sourceTable_1() { return &___sourceTable_1; }
	inline void set_sourceTable_1(String_t* value)
	{
		___sourceTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___sourceTable_1), value);
	}

	inline static int32_t get_offset_of_dataSetTable_2() { return static_cast<int32_t>(offsetof(DataTableMapping_t1354097707, ___dataSetTable_2)); }
	inline String_t* get_dataSetTable_2() const { return ___dataSetTable_2; }
	inline String_t** get_address_of_dataSetTable_2() { return &___dataSetTable_2; }
	inline void set_dataSetTable_2(String_t* value)
	{
		___dataSetTable_2 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetTable_2), value);
	}

	inline static int32_t get_offset_of_columnMappings_3() { return static_cast<int32_t>(offsetof(DataTableMapping_t1354097707, ___columnMappings_3)); }
	inline DataColumnMappingCollection_t2937617443 * get_columnMappings_3() const { return ___columnMappings_3; }
	inline DataColumnMappingCollection_t2937617443 ** get_address_of_columnMappings_3() { return &___columnMappings_3; }
	inline void set_columnMappings_3(DataColumnMappingCollection_t2937617443 * value)
	{
		___columnMappings_3 = value;
		Il2CppCodeGenWriteBarrier((&___columnMappings_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLEMAPPING_T1354097707_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t1115686309 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t1115686309 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t1115686309 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t1115686309 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t1115686309 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t1115686309 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t1115686309 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t1115686309 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef DATACOLUMNMAPPING_T1922670852_H
#define DATACOLUMNMAPPING_T1922670852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataColumnMapping
struct  DataColumnMapping_t1922670852  : public MarshalByRefObject_t2387283355
{
public:
	// System.String System.Data.Common.DataColumnMapping::sourceColumn
	String_t* ___sourceColumn_1;
	// System.String System.Data.Common.DataColumnMapping::dataSetColumn
	String_t* ___dataSetColumn_2;

public:
	inline static int32_t get_offset_of_sourceColumn_1() { return static_cast<int32_t>(offsetof(DataColumnMapping_t1922670852, ___sourceColumn_1)); }
	inline String_t* get_sourceColumn_1() const { return ___sourceColumn_1; }
	inline String_t** get_address_of_sourceColumn_1() { return &___sourceColumn_1; }
	inline void set_sourceColumn_1(String_t* value)
	{
		___sourceColumn_1 = value;
		Il2CppCodeGenWriteBarrier((&___sourceColumn_1), value);
	}

	inline static int32_t get_offset_of_dataSetColumn_2() { return static_cast<int32_t>(offsetof(DataColumnMapping_t1922670852, ___dataSetColumn_2)); }
	inline String_t* get_dataSetColumn_2() const { return ___dataSetColumn_2; }
	inline String_t** get_address_of_dataSetColumn_2() { return &___dataSetColumn_2; }
	inline void set_dataSetColumn_2(String_t* value)
	{
		___dataSetColumn_2 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetColumn_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACOLUMNMAPPING_T1922670852_H
#ifndef DATACOLUMNMAPPINGCOLLECTION_T2937617443_H
#define DATACOLUMNMAPPINGCOLLECTION_T2937617443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataColumnMappingCollection
struct  DataColumnMappingCollection_t2937617443  : public MarshalByRefObject_t2387283355
{
public:
	// System.Collections.ArrayList System.Data.Common.DataColumnMappingCollection::list
	ArrayList_t1090370772 * ___list_1;
	// System.Collections.Hashtable System.Data.Common.DataColumnMappingCollection::sourceColumns
	Hashtable_t188184851 * ___sourceColumns_2;
	// System.Collections.Hashtable System.Data.Common.DataColumnMappingCollection::dataSetColumns
	Hashtable_t188184851 * ___dataSetColumns_3;

public:
	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(DataColumnMappingCollection_t2937617443, ___list_1)); }
	inline ArrayList_t1090370772 * get_list_1() const { return ___list_1; }
	inline ArrayList_t1090370772 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(ArrayList_t1090370772 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier((&___list_1), value);
	}

	inline static int32_t get_offset_of_sourceColumns_2() { return static_cast<int32_t>(offsetof(DataColumnMappingCollection_t2937617443, ___sourceColumns_2)); }
	inline Hashtable_t188184851 * get_sourceColumns_2() const { return ___sourceColumns_2; }
	inline Hashtable_t188184851 ** get_address_of_sourceColumns_2() { return &___sourceColumns_2; }
	inline void set_sourceColumns_2(Hashtable_t188184851 * value)
	{
		___sourceColumns_2 = value;
		Il2CppCodeGenWriteBarrier((&___sourceColumns_2), value);
	}

	inline static int32_t get_offset_of_dataSetColumns_3() { return static_cast<int32_t>(offsetof(DataColumnMappingCollection_t2937617443, ___dataSetColumns_3)); }
	inline Hashtable_t188184851 * get_dataSetColumns_3() const { return ___dataSetColumns_3; }
	inline Hashtable_t188184851 ** get_address_of_dataSetColumns_3() { return &___dataSetColumns_3; }
	inline void set_dataSetColumns_3(Hashtable_t188184851 * value)
	{
		___dataSetColumns_3 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetColumns_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACOLUMNMAPPINGCOLLECTION_T2937617443_H
#ifndef DECIMAL_T911569157_H
#define DECIMAL_T911569157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t911569157 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_6;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_7;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_8;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_9;

public:
	inline static int32_t get_offset_of_flags_6() { return static_cast<int32_t>(offsetof(Decimal_t911569157, ___flags_6)); }
	inline uint32_t get_flags_6() const { return ___flags_6; }
	inline uint32_t* get_address_of_flags_6() { return &___flags_6; }
	inline void set_flags_6(uint32_t value)
	{
		___flags_6 = value;
	}

	inline static int32_t get_offset_of_hi_7() { return static_cast<int32_t>(offsetof(Decimal_t911569157, ___hi_7)); }
	inline uint32_t get_hi_7() const { return ___hi_7; }
	inline uint32_t* get_address_of_hi_7() { return &___hi_7; }
	inline void set_hi_7(uint32_t value)
	{
		___hi_7 = value;
	}

	inline static int32_t get_offset_of_lo_8() { return static_cast<int32_t>(offsetof(Decimal_t911569157, ___lo_8)); }
	inline uint32_t get_lo_8() const { return ___lo_8; }
	inline uint32_t* get_address_of_lo_8() { return &___lo_8; }
	inline void set_lo_8(uint32_t value)
	{
		___lo_8 = value;
	}

	inline static int32_t get_offset_of_mid_9() { return static_cast<int32_t>(offsetof(Decimal_t911569157, ___mid_9)); }
	inline uint32_t get_mid_9() const { return ___mid_9; }
	inline uint32_t* get_address_of_mid_9() { return &___mid_9; }
	inline void set_mid_9(uint32_t value)
	{
		___mid_9 = value;
	}
};

struct Decimal_t911569157_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t911569157  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t911569157  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t911569157  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t911569157  ___One_3;
	// System.Decimal System.Decimal::Zero
	Decimal_t911569157  ___Zero_4;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t911569157  ___MaxValueDiv10_5;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t911569157_StaticFields, ___MinValue_0)); }
	inline Decimal_t911569157  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t911569157 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t911569157  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t911569157_StaticFields, ___MaxValue_1)); }
	inline Decimal_t911569157  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t911569157 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t911569157  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t911569157_StaticFields, ___MinusOne_2)); }
	inline Decimal_t911569157  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t911569157 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t911569157  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t911569157_StaticFields, ___One_3)); }
	inline Decimal_t911569157  get_One_3() const { return ___One_3; }
	inline Decimal_t911569157 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t911569157  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_Zero_4() { return static_cast<int32_t>(offsetof(Decimal_t911569157_StaticFields, ___Zero_4)); }
	inline Decimal_t911569157  get_Zero_4() const { return ___Zero_4; }
	inline Decimal_t911569157 * get_address_of_Zero_4() { return &___Zero_4; }
	inline void set_Zero_4(Decimal_t911569157  value)
	{
		___Zero_4 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_5() { return static_cast<int32_t>(offsetof(Decimal_t911569157_StaticFields, ___MaxValueDiv10_5)); }
	inline Decimal_t911569157  get_MaxValueDiv10_5() const { return ___MaxValueDiv10_5; }
	inline Decimal_t911569157 * get_address_of_MaxValueDiv10_5() { return &___MaxValueDiv10_5; }
	inline void set_MaxValueDiv10_5(Decimal_t911569157  value)
	{
		___MaxValueDiv10_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T911569157_H
#ifndef CHARDATACONTAINER_T2383464642_H
#define CHARDATACONTAINER_T2383464642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.CharDataContainer
struct  CharDataContainer_t2383464642  : public DataContainer_t2006856459
{
public:
	// System.Char[] System.Data.Common.CharDataContainer::_values
	CharU5BU5D_t3282355116* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(CharDataContainer_t2383464642, ____values_3)); }
	inline CharU5BU5D_t3282355116* get__values_3() const { return ____values_3; }
	inline CharU5BU5D_t3282355116** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(CharU5BU5D_t3282355116* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARDATACONTAINER_T2383464642_H
#ifndef BYTEDATACONTAINER_T60534209_H
#define BYTEDATACONTAINER_T60534209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.ByteDataContainer
struct  ByteDataContainer_t60534209  : public DataContainer_t2006856459
{
public:
	// System.Byte[] System.Data.Common.ByteDataContainer::_values
	ByteU5BU5D_t2378657911* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(ByteDataContainer_t60534209, ____values_3)); }
	inline ByteU5BU5D_t2378657911* get__values_3() const { return ____values_3; }
	inline ByteU5BU5D_t2378657911** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(ByteU5BU5D_t2378657911* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEDATACONTAINER_T60534209_H
#ifndef SBYTEDATACONTAINER_T2456269047_H
#define SBYTEDATACONTAINER_T2456269047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.SByteDataContainer
struct  SByteDataContainer_t2456269047  : public DataContainer_t2006856459
{
public:
	// System.SByte[] System.Data.Common.SByteDataContainer::_values
	SByteU5BU5D_t3439731044* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(SByteDataContainer_t2456269047, ____values_3)); }
	inline SByteU5BU5D_t3439731044* get__values_3() const { return ____values_3; }
	inline SByteU5BU5D_t3439731044** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(SByteU5BU5D_t3439731044* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTEDATACONTAINER_T2456269047_H
#ifndef INT16DATACONTAINER_T978335990_H
#define INT16DATACONTAINER_T978335990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Int16DataContainer
struct  Int16DataContainer_t978335990  : public DataContainer_t2006856459
{
public:
	// System.Int16[] System.Data.Common.Int16DataContainer::_values
	Int16U5BU5D_t1343800226* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(Int16DataContainer_t978335990, ____values_3)); }
	inline Int16U5BU5D_t1343800226* get__values_3() const { return ____values_3; }
	inline Int16U5BU5D_t1343800226** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(Int16U5BU5D_t1343800226* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16DATACONTAINER_T978335990_H
#ifndef DOUBLEDATACONTAINER_T2721391010_H
#define DOUBLEDATACONTAINER_T2721391010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DoubleDataContainer
struct  DoubleDataContainer_t2721391010  : public DataContainer_t2006856459
{
public:
	// System.Double[] System.Data.Common.DoubleDataContainer::_values
	DoubleU5BU5D_t3111444758* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(DoubleDataContainer_t2721391010, ____values_3)); }
	inline DoubleU5BU5D_t3111444758* get__values_3() const { return ____values_3; }
	inline DoubleU5BU5D_t3111444758** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(DoubleU5BU5D_t3111444758* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLEDATACONTAINER_T2721391010_H
#ifndef UINT16DATACONTAINER_T1184311836_H
#define UINT16DATACONTAINER_T1184311836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.UInt16DataContainer
struct  UInt16DataContainer_t1184311836  : public DataContainer_t2006856459
{
public:
	// System.UInt16[] System.Data.Common.UInt16DataContainer::_values
	UInt16U5BU5D_t2122059562* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(UInt16DataContainer_t1184311836, ____values_3)); }
	inline UInt16U5BU5D_t2122059562* get__values_3() const { return ____values_3; }
	inline UInt16U5BU5D_t2122059562** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(UInt16U5BU5D_t2122059562* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16DATACONTAINER_T1184311836_H
#ifndef INT32DATACONTAINER_T3526613046_H
#define INT32DATACONTAINER_T3526613046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Int32DataContainer
struct  Int32DataContainer_t3526613046  : public DataContainer_t2006856459
{
public:
	// System.Int32[] System.Data.Common.Int32DataContainer::_values
	Int32U5BU5D_t1719863841* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(Int32DataContainer_t3526613046, ____values_3)); }
	inline Int32U5BU5D_t1719863841* get__values_3() const { return ____values_3; }
	inline Int32U5BU5D_t1719863841** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(Int32U5BU5D_t1719863841* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32DATACONTAINER_T3526613046_H
#ifndef UINT32DATACONTAINER_T728839428_H
#define UINT32DATACONTAINER_T728839428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.UInt32DataContainer
struct  UInt32DataContainer_t728839428  : public DataContainer_t2006856459
{
public:
	// System.UInt32[] System.Data.Common.UInt32DataContainer::_values
	UInt32U5BU5D_t1751769761* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(UInt32DataContainer_t728839428, ____values_3)); }
	inline UInt32U5BU5D_t1751769761* get__values_3() const { return ____values_3; }
	inline UInt32U5BU5D_t1751769761** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(UInt32U5BU5D_t1751769761* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32DATACONTAINER_T728839428_H
#ifndef SINGLEDATACONTAINER_T3867236424_H
#define SINGLEDATACONTAINER_T3867236424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.SingleDataContainer
struct  SingleDataContainer_t3867236424  : public DataContainer_t2006856459
{
public:
	// System.Single[] System.Data.Common.SingleDataContainer::_values
	SingleU5BU5D_t3081648790* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(SingleDataContainer_t3867236424, ____values_3)); }
	inline SingleU5BU5D_t3081648790* get__values_3() const { return ____values_3; }
	inline SingleU5BU5D_t3081648790** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(SingleU5BU5D_t3081648790* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLEDATACONTAINER_T3867236424_H
#ifndef BITDATACONTAINER_T1546348838_H
#define BITDATACONTAINER_T1546348838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.BitDataContainer
struct  BitDataContainer_t1546348838  : public DataContainer_t2006856459
{
public:
	// System.Collections.BitArray System.Data.Common.BitDataContainer::_values
	BitArray_t4068722914 * ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(BitDataContainer_t1546348838, ____values_3)); }
	inline BitArray_t4068722914 * get__values_3() const { return ____values_3; }
	inline BitArray_t4068722914 ** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(BitArray_t4068722914 * value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITDATACONTAINER_T1546348838_H
#ifndef INT64DATACONTAINER_T627082857_H
#define INT64DATACONTAINER_T627082857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Int64DataContainer
struct  Int64DataContainer_t627082857  : public DataContainer_t2006856459
{
public:
	// System.Int64[] System.Data.Common.Int64DataContainer::_values
	Int64U5BU5D_t1142497760* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(Int64DataContainer_t627082857, ____values_3)); }
	inline Int64U5BU5D_t1142497760* get__values_3() const { return ____values_3; }
	inline Int64U5BU5D_t1142497760** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(Int64U5BU5D_t1142497760* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64DATACONTAINER_T627082857_H
#ifndef UINT64DATACONTAINER_T2435745777_H
#define UINT64DATACONTAINER_T2435745777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.UInt64DataContainer
struct  UInt64DataContainer_t2435745777  : public DataContainer_t2006856459
{
public:
	// System.UInt64[] System.Data.Common.UInt64DataContainer::_values
	UInt64U5BU5D_t3220544368* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(UInt64DataContainer_t2435745777, ____values_3)); }
	inline UInt64U5BU5D_t3220544368* get__values_3() const { return ____values_3; }
	inline UInt64U5BU5D_t3220544368** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(UInt64U5BU5D_t3220544368* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64DATACONTAINER_T2435745777_H
#ifndef DATAROWACTION_T3357339962_H
#define DATAROWACTION_T3357339962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowAction
struct  DataRowAction_t3357339962 
{
public:
	// System.Int32 System.Data.DataRowAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataRowAction_t3357339962, ___value___1)); }
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
#endif // DATAROWACTION_T3357339962_H
#ifndef DATACATEGORYATTRIBUTE_T4250712487_H
#define DATACATEGORYATTRIBUTE_T4250712487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataCategoryAttribute
struct  DataCategoryAttribute_t4250712487  : public CategoryAttribute_t3135707549
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACATEGORYATTRIBUTE_T4250712487_H
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
#ifndef MAPPINGTYPE_T3936953495_H
#define MAPPINGTYPE_T3936953495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MappingType
struct  MappingType_t3936953495 
{
public:
	// System.Int32 System.Data.MappingType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MappingType_t3936953495, ___value___1)); }
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
#endif // MAPPINGTYPE_T3936953495_H
#ifndef DATAEXCEPTION_T3690991188_H
#define DATAEXCEPTION_T3690991188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataException
struct  DataException_t3690991188  : public SystemException_t1160535744
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAEXCEPTION_T3690991188_H
#ifndef DATASETDATETIME_T2807493079_H
#define DATASETDATETIME_T2807493079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataSetDateTime
struct  DataSetDateTime_t2807493079 
{
public:
	// System.Int32 System.Data.DataSetDateTime::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataSetDateTime_t2807493079, ___value___1)); }
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
#endif // DATASETDATETIME_T2807493079_H
#ifndef DATASETRELATIONCOLLECTION_T1850480471_H
#define DATASETRELATIONCOLLECTION_T1850480471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection/DataSetRelationCollection
struct  DataSetRelationCollection_t1850480471  : public DataRelationCollection_t1576344460
{
public:
	// System.Data.DataSet System.Data.DataRelationCollection/DataSetRelationCollection::dataSet
	DataSet_t2860913429 * ___dataSet_5;
	// System.Data.DataRelation[] System.Data.DataRelationCollection/DataSetRelationCollection::mostRecentRelations
	DataRelationU5BU5D_t3995634136* ___mostRecentRelations_6;

public:
	inline static int32_t get_offset_of_dataSet_5() { return static_cast<int32_t>(offsetof(DataSetRelationCollection_t1850480471, ___dataSet_5)); }
	inline DataSet_t2860913429 * get_dataSet_5() const { return ___dataSet_5; }
	inline DataSet_t2860913429 ** get_address_of_dataSet_5() { return &___dataSet_5; }
	inline void set_dataSet_5(DataSet_t2860913429 * value)
	{
		___dataSet_5 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_5), value);
	}

	inline static int32_t get_offset_of_mostRecentRelations_6() { return static_cast<int32_t>(offsetof(DataSetRelationCollection_t1850480471, ___mostRecentRelations_6)); }
	inline DataRelationU5BU5D_t3995634136* get_mostRecentRelations_6() const { return ___mostRecentRelations_6; }
	inline DataRelationU5BU5D_t3995634136** get_address_of_mostRecentRelations_6() { return &___mostRecentRelations_6; }
	inline void set_mostRecentRelations_6(DataRelationU5BU5D_t3995634136* value)
	{
		___mostRecentRelations_6 = value;
		Il2CppCodeGenWriteBarrier((&___mostRecentRelations_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETRELATIONCOLLECTION_T1850480471_H
#ifndef DATATABLERELATIONCOLLECTION_T3678026790_H
#define DATATABLERELATIONCOLLECTION_T3678026790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection/DataTableRelationCollection
struct  DataTableRelationCollection_t3678026790  : public DataRelationCollection_t1576344460
{
public:
	// System.Data.DataTable System.Data.DataRelationCollection/DataTableRelationCollection::dataTable
	DataTable_t458307818 * ___dataTable_5;

public:
	inline static int32_t get_offset_of_dataTable_5() { return static_cast<int32_t>(offsetof(DataTableRelationCollection_t3678026790, ___dataTable_5)); }
	inline DataTable_t458307818 * get_dataTable_5() const { return ___dataTable_5; }
	inline DataTable_t458307818 ** get_address_of_dataTable_5() { return &___dataTable_5; }
	inline void set_dataTable_5(DataTable_t458307818 * value)
	{
		___dataTable_5 = value;
		Il2CppCodeGenWriteBarrier((&___dataTable_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLERELATIONCOLLECTION_T3678026790_H
#ifndef DATARELATIONPROPERTYDESCRIPTOR_T4099356300_H
#define DATARELATIONPROPERTYDESCRIPTOR_T4099356300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationPropertyDescriptor
struct  DataRelationPropertyDescriptor_t4099356300  : public PropertyDescriptor_t3383610232
{
public:
	// System.Data.DataRelation System.Data.DataRelationPropertyDescriptor::_relation
	DataRelation_t3388391349 * ____relation_6;

public:
	inline static int32_t get_offset_of__relation_6() { return static_cast<int32_t>(offsetof(DataRelationPropertyDescriptor_t4099356300, ____relation_6)); }
	inline DataRelation_t3388391349 * get__relation_6() const { return ____relation_6; }
	inline DataRelation_t3388391349 ** get_address_of__relation_6() { return &____relation_6; }
	inline void set__relation_6(DataRelation_t3388391349 * value)
	{
		____relation_6 = value;
		Il2CppCodeGenWriteBarrier((&____relation_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATARELATIONPROPERTYDESCRIPTOR_T4099356300_H
#ifndef DATACOLUMNPROPERTYDESCRIPTOR_T2050940415_H
#define DATACOLUMNPROPERTYDESCRIPTOR_T2050940415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumnPropertyDescriptor
struct  DataColumnPropertyDescriptor_t2050940415  : public PropertyDescriptor_t3383610232
{
public:
	// System.Boolean System.Data.DataColumnPropertyDescriptor::readOnly
	bool ___readOnly_6;
	// System.Type System.Data.DataColumnPropertyDescriptor::componentType
	Type_t * ___componentType_7;
	// System.Type System.Data.DataColumnPropertyDescriptor::propertyType
	Type_t * ___propertyType_8;
	// System.Boolean System.Data.DataColumnPropertyDescriptor::browsable
	bool ___browsable_9;
	// System.Int32 System.Data.DataColumnPropertyDescriptor::columnIndex
	int32_t ___columnIndex_10;

public:
	inline static int32_t get_offset_of_readOnly_6() { return static_cast<int32_t>(offsetof(DataColumnPropertyDescriptor_t2050940415, ___readOnly_6)); }
	inline bool get_readOnly_6() const { return ___readOnly_6; }
	inline bool* get_address_of_readOnly_6() { return &___readOnly_6; }
	inline void set_readOnly_6(bool value)
	{
		___readOnly_6 = value;
	}

	inline static int32_t get_offset_of_componentType_7() { return static_cast<int32_t>(offsetof(DataColumnPropertyDescriptor_t2050940415, ___componentType_7)); }
	inline Type_t * get_componentType_7() const { return ___componentType_7; }
	inline Type_t ** get_address_of_componentType_7() { return &___componentType_7; }
	inline void set_componentType_7(Type_t * value)
	{
		___componentType_7 = value;
		Il2CppCodeGenWriteBarrier((&___componentType_7), value);
	}

	inline static int32_t get_offset_of_propertyType_8() { return static_cast<int32_t>(offsetof(DataColumnPropertyDescriptor_t2050940415, ___propertyType_8)); }
	inline Type_t * get_propertyType_8() const { return ___propertyType_8; }
	inline Type_t ** get_address_of_propertyType_8() { return &___propertyType_8; }
	inline void set_propertyType_8(Type_t * value)
	{
		___propertyType_8 = value;
		Il2CppCodeGenWriteBarrier((&___propertyType_8), value);
	}

	inline static int32_t get_offset_of_browsable_9() { return static_cast<int32_t>(offsetof(DataColumnPropertyDescriptor_t2050940415, ___browsable_9)); }
	inline bool get_browsable_9() const { return ___browsable_9; }
	inline bool* get_address_of_browsable_9() { return &___browsable_9; }
	inline void set_browsable_9(bool value)
	{
		___browsable_9 = value;
	}

	inline static int32_t get_offset_of_columnIndex_10() { return static_cast<int32_t>(offsetof(DataColumnPropertyDescriptor_t2050940415, ___columnIndex_10)); }
	inline int32_t get_columnIndex_10() const { return ___columnIndex_10; }
	inline int32_t* get_address_of_columnIndex_10() { return &___columnIndex_10; }
	inline void set_columnIndex_10(int32_t value)
	{
		___columnIndex_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACOLUMNPROPERTYDESCRIPTOR_T2050940415_H
#ifndef DATAVIEWROWSTATE_T689795949_H
#define DATAVIEWROWSTATE_T689795949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataViewRowState
struct  DataViewRowState_t689795949 
{
public:
	// System.Int32 System.Data.DataViewRowState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataViewRowState_t689795949, ___value___1)); }
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
#endif // DATAVIEWROWSTATE_T689795949_H
#ifndef REFERENCEDTABLE_T1122633368_H
#define REFERENCEDTABLE_T1122633368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.ReferencedTable
struct  ReferencedTable_t1122633368 
{
public:
	// System.Int32 Mono.Data.SqlExpressions.ReferencedTable::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReferencedTable_t1122633368, ___value___1)); }
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
#endif // REFERENCEDTABLE_T1122633368_H
#ifndef STRINGDATACONTAINER_T3727765096_H
#define STRINGDATACONTAINER_T3727765096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.StringDataContainer
struct  StringDataContainer_t3727765096  : public ObjectDataContainer_t499755083
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGDATACONTAINER_T3727765096_H
#ifndef DATETIMEDATACONTAINER_T1361977752_H
#define DATETIMEDATACONTAINER_T1361977752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DateTimeDataContainer
struct  DateTimeDataContainer_t1361977752  : public ObjectDataContainer_t499755083
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEDATACONTAINER_T1361977752_H
#ifndef DECIMALDATACONTAINER_T2638538898_H
#define DECIMALDATACONTAINER_T2638538898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DecimalDataContainer
struct  DecimalDataContainer_t2638538898  : public ObjectDataContainer_t499755083
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALDATACONTAINER_T2638538898_H
#ifndef CONSTRAINTCONVERTER_T331651575_H
#define CONSTRAINTCONVERTER_T331651575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintConverter
struct  ConstraintConverter_t331651575  : public ExpandableObjectConverter_t189315617
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTCONVERTER_T331651575_H
#ifndef DBCOMMAND_T1113193111_H
#define DBCOMMAND_T1113193111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbCommand
struct  DbCommand_t1113193111  : public Component_t1938025610
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBCOMMAND_T1113193111_H
#ifndef DBCONNECTION_T2130246978_H
#define DBCONNECTION_T2130246978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbConnection
struct  DbConnection_t2130246978  : public Component_t1938025610
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBCONNECTION_T2130246978_H
#ifndef STRINGFUNCTION_T2269901765_H
#define STRINGFUNCTION_T2269901765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.StringFunction
struct  StringFunction_t2269901765  : public UnaryExpression_t3578873248
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGFUNCTION_T2269901765_H
#ifndef LIKE_T1324281985_H
#define LIKE_T1324281985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Like
struct  Like_t1324281985  : public UnaryExpression_t3578873248
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.Like::_pattern
	RuntimeObject* ____pattern_1;

public:
	inline static int32_t get_offset_of__pattern_1() { return static_cast<int32_t>(offsetof(Like_t1324281985, ____pattern_1)); }
	inline RuntimeObject* get__pattern_1() const { return ____pattern_1; }
	inline RuntimeObject** get_address_of__pattern_1() { return &____pattern_1; }
	inline void set__pattern_1(RuntimeObject* value)
	{
		____pattern_1 = value;
		Il2CppCodeGenWriteBarrier((&____pattern_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIKE_T1324281985_H
#ifndef IN_T3233598087_H
#define IN_T3233598087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.In
struct  In_t3233598087  : public UnaryExpression_t3578873248
{
public:
	// System.Collections.IList Mono.Data.SqlExpressions.In::set
	RuntimeObject* ___set_1;

public:
	inline static int32_t get_offset_of_set_1() { return static_cast<int32_t>(offsetof(In_t3233598087, ___set_1)); }
	inline RuntimeObject* get_set_1() const { return ___set_1; }
	inline RuntimeObject** get_address_of_set_1() { return &___set_1; }
	inline void set_set_1(RuntimeObject* value)
	{
		___set_1 = value;
		Il2CppCodeGenWriteBarrier((&___set_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IN_T3233598087_H
#ifndef CONVERTFUNCTION_T4054397322_H
#define CONVERTFUNCTION_T4054397322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.ConvertFunction
struct  ConvertFunction_t4054397322  : public UnaryExpression_t3578873248
{
public:
	// System.Type Mono.Data.SqlExpressions.ConvertFunction::targetType
	Type_t * ___targetType_1;

public:
	inline static int32_t get_offset_of_targetType_1() { return static_cast<int32_t>(offsetof(ConvertFunction_t4054397322, ___targetType_1)); }
	inline Type_t * get_targetType_1() const { return ___targetType_1; }
	inline Type_t ** get_address_of_targetType_1() { return &___targetType_1; }
	inline void set_targetType_1(Type_t * value)
	{
		___targetType_1 = value;
		Il2CppCodeGenWriteBarrier((&___targetType_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONVERTFUNCTION_T4054397322_H
#ifndef ISNULLFUNCTION_T1696550519_H
#define ISNULLFUNCTION_T1696550519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.IsNullFunction
struct  IsNullFunction_t1696550519  : public UnaryExpression_t3578873248
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.IsNullFunction::defaultExpr
	RuntimeObject* ___defaultExpr_1;

public:
	inline static int32_t get_offset_of_defaultExpr_1() { return static_cast<int32_t>(offsetof(IsNullFunction_t1696550519, ___defaultExpr_1)); }
	inline RuntimeObject* get_defaultExpr_1() const { return ___defaultExpr_1; }
	inline RuntimeObject** get_address_of_defaultExpr_1() { return &___defaultExpr_1; }
	inline void set_defaultExpr_1(RuntimeObject* value)
	{
		___defaultExpr_1 = value;
		Il2CppCodeGenWriteBarrier((&___defaultExpr_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISNULLFUNCTION_T1696550519_H
#ifndef DATAADAPTER_T3497165630_H
#define DATAADAPTER_T3497165630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataAdapter
struct  DataAdapter_t3497165630  : public Component_t1938025610
{
public:
	// System.Data.Common.DataTableMappingCollection System.Data.Common.DataAdapter::tableMappings
	DataTableMappingCollection_t2563982741 * ___tableMappings_4;

public:
	inline static int32_t get_offset_of_tableMappings_4() { return static_cast<int32_t>(offsetof(DataAdapter_t3497165630, ___tableMappings_4)); }
	inline DataTableMappingCollection_t2563982741 * get_tableMappings_4() const { return ___tableMappings_4; }
	inline DataTableMappingCollection_t2563982741 ** get_address_of_tableMappings_4() { return &___tableMappings_4; }
	inline void set_tableMappings_4(DataTableMappingCollection_t2563982741 * value)
	{
		___tableMappings_4 = value;
		Il2CppCodeGenWriteBarrier((&___tableMappings_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAADAPTER_T3497165630_H
#ifndef SQLCOMPAREOPTIONS_T868486121_H
#define SQLCOMPAREOPTIONS_T868486121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlCompareOptions
struct  SqlCompareOptions_t868486121 
{
public:
	// System.Int32 System.Data.SqlTypes.SqlCompareOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SqlCompareOptions_t868486121, ___value___1)); }
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
#endif // SQLCOMPAREOPTIONS_T868486121_H
#ifndef SQLMONEY_T3858564736_H
#define SQLMONEY_T3858564736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlMoney
struct  SqlMoney_t3858564736 
{
public:
	// System.Decimal System.Data.SqlTypes.SqlMoney::value
	Decimal_t911569157  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlMoney::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlMoney_t3858564736, ___value_0)); }
	inline Decimal_t911569157  get_value_0() const { return ___value_0; }
	inline Decimal_t911569157 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Decimal_t911569157  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlMoney_t3858564736, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlMoney_t3858564736_StaticFields
{
public:
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MaxValue
	SqlMoney_t3858564736  ___MaxValue_2;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MinValue
	SqlMoney_t3858564736  ___MinValue_3;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Null
	SqlMoney_t3858564736  ___Null_4;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Zero
	SqlMoney_t3858564736  ___Zero_5;
	// System.Globalization.NumberFormatInfo System.Data.SqlTypes.SqlMoney::MoneyFormat
	NumberFormatInfo_t796945479 * ___MoneyFormat_6;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlMoney_t3858564736_StaticFields, ___MaxValue_2)); }
	inline SqlMoney_t3858564736  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlMoney_t3858564736 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlMoney_t3858564736  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlMoney_t3858564736_StaticFields, ___MinValue_3)); }
	inline SqlMoney_t3858564736  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlMoney_t3858564736 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlMoney_t3858564736  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlMoney_t3858564736_StaticFields, ___Null_4)); }
	inline SqlMoney_t3858564736  get_Null_4() const { return ___Null_4; }
	inline SqlMoney_t3858564736 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlMoney_t3858564736  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlMoney_t3858564736_StaticFields, ___Zero_5)); }
	inline SqlMoney_t3858564736  get_Zero_5() const { return ___Zero_5; }
	inline SqlMoney_t3858564736 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlMoney_t3858564736  value)
	{
		___Zero_5 = value;
	}

	inline static int32_t get_offset_of_MoneyFormat_6() { return static_cast<int32_t>(offsetof(SqlMoney_t3858564736_StaticFields, ___MoneyFormat_6)); }
	inline NumberFormatInfo_t796945479 * get_MoneyFormat_6() const { return ___MoneyFormat_6; }
	inline NumberFormatInfo_t796945479 ** get_address_of_MoneyFormat_6() { return &___MoneyFormat_6; }
	inline void set_MoneyFormat_6(NumberFormatInfo_t796945479 * value)
	{
		___MoneyFormat_6 = value;
		Il2CppCodeGenWriteBarrier((&___MoneyFormat_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlMoney
struct SqlMoney_t3858564736_marshaled_pinvoke
{
	Decimal_t911569157  ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlMoney
struct SqlMoney_t3858564736_marshaled_com
{
	Decimal_t911569157  ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLMONEY_T3858564736_H
#ifndef IIFFUNCTION_T2341350996_H
#define IIFFUNCTION_T2341350996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.IifFunction
struct  IifFunction_t2341350996  : public UnaryExpression_t3578873248
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.IifFunction::trueExpr
	RuntimeObject* ___trueExpr_1;
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.IifFunction::falseExpr
	RuntimeObject* ___falseExpr_2;

public:
	inline static int32_t get_offset_of_trueExpr_1() { return static_cast<int32_t>(offsetof(IifFunction_t2341350996, ___trueExpr_1)); }
	inline RuntimeObject* get_trueExpr_1() const { return ___trueExpr_1; }
	inline RuntimeObject** get_address_of_trueExpr_1() { return &___trueExpr_1; }
	inline void set_trueExpr_1(RuntimeObject* value)
	{
		___trueExpr_1 = value;
		Il2CppCodeGenWriteBarrier((&___trueExpr_1), value);
	}

	inline static int32_t get_offset_of_falseExpr_2() { return static_cast<int32_t>(offsetof(IifFunction_t2341350996, ___falseExpr_2)); }
	inline RuntimeObject* get_falseExpr_2() const { return ___falseExpr_2; }
	inline RuntimeObject** get_address_of_falseExpr_2() { return &___falseExpr_2; }
	inline void set_falseExpr_2(RuntimeObject* value)
	{
		___falseExpr_2 = value;
		Il2CppCodeGenWriteBarrier((&___falseExpr_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IIFFUNCTION_T2341350996_H
#ifndef OPERATION_T2823884466_H
#define OPERATION_T2823884466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Operation
struct  Operation_t2823884466 
{
public:
	// System.Int32 Mono.Data.SqlExpressions.Operation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Operation_t2823884466, ___value___1)); }
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
#endif // OPERATION_T2823884466_H
#ifndef SQLTYPEEXCEPTION_T1865864803_H
#define SQLTYPEEXCEPTION_T1865864803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlTypeException
struct  SqlTypeException_t1865864803  : public SystemException_t1160535744
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLTYPEEXCEPTION_T1865864803_H
#ifndef STORAGESTATE_T1407897637_H
#define STORAGESTATE_T1407897637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.StorageState
struct  StorageState_t1407897637 
{
public:
	// System.Int32 System.Data.SqlTypes.StorageState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StorageState_t1407897637, ___value___1)); }
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
#endif // STORAGESTATE_T1407897637_H
#ifndef ACCEPTREJECTRULE_T31003465_H
#define ACCEPTREJECTRULE_T31003465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.AcceptRejectRule
struct  AcceptRejectRule_t31003465 
{
public:
	// System.Int32 System.Data.AcceptRejectRule::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AcceptRejectRule_t31003465, ___value___1)); }
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
#endif // ACCEPTREJECTRULE_T31003465_H
#ifndef COLUMNTYPECONVERTER_T1143210520_H
#define COLUMNTYPECONVERTER_T1143210520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ColumnTypeConverter
struct  ColumnTypeConverter_t1143210520  : public ExpandableObjectConverter_t189315617
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLUMNTYPECONVERTER_T1143210520_H
#ifndef COMMANDTYPE_T1559110448_H
#define COMMANDTYPE_T1559110448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.CommandType
struct  CommandType_t1559110448 
{
public:
	// System.Int32 System.Data.CommandType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CommandType_t1559110448, ___value___1)); }
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
#endif // COMMANDTYPE_T1559110448_H
#ifndef SQLGUID_T3616210131_H
#define SQLGUID_T3616210131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlGuid
struct  SqlGuid_t3616210131 
{
public:
	// System.Guid System.Data.SqlTypes.SqlGuid::value
	Guid_t  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlGuid::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlGuid_t3616210131, ___value_0)); }
	inline Guid_t  get_value_0() const { return ___value_0; }
	inline Guid_t * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Guid_t  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlGuid_t3616210131, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlGuid_t3616210131_StaticFields
{
public:
	// System.Data.SqlTypes.SqlGuid System.Data.SqlTypes.SqlGuid::Null
	SqlGuid_t3616210131  ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(SqlGuid_t3616210131_StaticFields, ___Null_2)); }
	inline SqlGuid_t3616210131  get_Null_2() const { return ___Null_2; }
	inline SqlGuid_t3616210131 * get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(SqlGuid_t3616210131  value)
	{
		___Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlGuid
struct SqlGuid_t3616210131_marshaled_pinvoke
{
	Guid_t  ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlGuid
struct SqlGuid_t3616210131_marshaled_com
{
	Guid_t  ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLGUID_T3616210131_H
#ifndef BINARYOPEXPRESSION_T918480111_H
#define BINARYOPEXPRESSION_T918480111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.BinaryOpExpression
struct  BinaryOpExpression_t918480111  : public BinaryExpression_t3096525146
{
public:
	// Mono.Data.SqlExpressions.Operation Mono.Data.SqlExpressions.BinaryOpExpression::op
	int32_t ___op_2;

public:
	inline static int32_t get_offset_of_op_2() { return static_cast<int32_t>(offsetof(BinaryOpExpression_t918480111, ___op_2)); }
	inline int32_t get_op_2() const { return ___op_2; }
	inline int32_t* get_address_of_op_2() { return &___op_2; }
	inline void set_op_2(int32_t value)
	{
		___op_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYOPEXPRESSION_T918480111_H
#ifndef COLUMNREFERENCE_T1008823366_H
#define COLUMNREFERENCE_T1008823366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.ColumnReference
struct  ColumnReference_t1008823366  : public BaseExpression_t1977657975
{
public:
	// Mono.Data.SqlExpressions.ReferencedTable Mono.Data.SqlExpressions.ColumnReference::refTable
	int32_t ___refTable_0;
	// System.String Mono.Data.SqlExpressions.ColumnReference::relationName
	String_t* ___relationName_1;
	// System.String Mono.Data.SqlExpressions.ColumnReference::columnName
	String_t* ___columnName_2;
	// System.Data.DataColumn Mono.Data.SqlExpressions.ColumnReference::_cachedColumn
	DataColumn_t2121335505 * ____cachedColumn_3;
	// System.Data.DataRelation Mono.Data.SqlExpressions.ColumnReference::_cachedRelation
	DataRelation_t3388391349 * ____cachedRelation_4;

public:
	inline static int32_t get_offset_of_refTable_0() { return static_cast<int32_t>(offsetof(ColumnReference_t1008823366, ___refTable_0)); }
	inline int32_t get_refTable_0() const { return ___refTable_0; }
	inline int32_t* get_address_of_refTable_0() { return &___refTable_0; }
	inline void set_refTable_0(int32_t value)
	{
		___refTable_0 = value;
	}

	inline static int32_t get_offset_of_relationName_1() { return static_cast<int32_t>(offsetof(ColumnReference_t1008823366, ___relationName_1)); }
	inline String_t* get_relationName_1() const { return ___relationName_1; }
	inline String_t** get_address_of_relationName_1() { return &___relationName_1; }
	inline void set_relationName_1(String_t* value)
	{
		___relationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___relationName_1), value);
	}

	inline static int32_t get_offset_of_columnName_2() { return static_cast<int32_t>(offsetof(ColumnReference_t1008823366, ___columnName_2)); }
	inline String_t* get_columnName_2() const { return ___columnName_2; }
	inline String_t** get_address_of_columnName_2() { return &___columnName_2; }
	inline void set_columnName_2(String_t* value)
	{
		___columnName_2 = value;
		Il2CppCodeGenWriteBarrier((&___columnName_2), value);
	}

	inline static int32_t get_offset_of__cachedColumn_3() { return static_cast<int32_t>(offsetof(ColumnReference_t1008823366, ____cachedColumn_3)); }
	inline DataColumn_t2121335505 * get__cachedColumn_3() const { return ____cachedColumn_3; }
	inline DataColumn_t2121335505 ** get_address_of__cachedColumn_3() { return &____cachedColumn_3; }
	inline void set__cachedColumn_3(DataColumn_t2121335505 * value)
	{
		____cachedColumn_3 = value;
		Il2CppCodeGenWriteBarrier((&____cachedColumn_3), value);
	}

	inline static int32_t get_offset_of__cachedRelation_4() { return static_cast<int32_t>(offsetof(ColumnReference_t1008823366, ____cachedRelation_4)); }
	inline DataRelation_t3388391349 * get__cachedRelation_4() const { return ____cachedRelation_4; }
	inline DataRelation_t3388391349 ** get_address_of__cachedRelation_4() { return &____cachedRelation_4; }
	inline void set__cachedRelation_4(DataRelation_t3388391349 * value)
	{
		____cachedRelation_4 = value;
		Il2CppCodeGenWriteBarrier((&____cachedRelation_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLUMNREFERENCE_T1008823366_H
#ifndef CONCATFUNCTION_T3110566233_H
#define CONCATFUNCTION_T3110566233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.ConcatFunction
struct  ConcatFunction_t3110566233  : public StringFunction_t2269901765
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.ConcatFunction::_add
	RuntimeObject* ____add_1;

public:
	inline static int32_t get_offset_of__add_1() { return static_cast<int32_t>(offsetof(ConcatFunction_t3110566233, ____add_1)); }
	inline RuntimeObject* get__add_1() const { return ____add_1; }
	inline RuntimeObject** get_address_of__add_1() { return &____add_1; }
	inline void set__add_1(RuntimeObject* value)
	{
		____add_1 = value;
		Il2CppCodeGenWriteBarrier((&____add_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONCATFUNCTION_T3110566233_H
#ifndef SUBSTRINGFUNCTION_T1478922894_H
#define SUBSTRINGFUNCTION_T1478922894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.SubstringFunction
struct  SubstringFunction_t1478922894  : public StringFunction_t2269901765
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.SubstringFunction::start
	RuntimeObject* ___start_1;
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.SubstringFunction::len
	RuntimeObject* ___len_2;

public:
	inline static int32_t get_offset_of_start_1() { return static_cast<int32_t>(offsetof(SubstringFunction_t1478922894, ___start_1)); }
	inline RuntimeObject* get_start_1() const { return ___start_1; }
	inline RuntimeObject** get_address_of_start_1() { return &___start_1; }
	inline void set_start_1(RuntimeObject* value)
	{
		___start_1 = value;
		Il2CppCodeGenWriteBarrier((&___start_1), value);
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(SubstringFunction_t1478922894, ___len_2)); }
	inline RuntimeObject* get_len_2() const { return ___len_2; }
	inline RuntimeObject** get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(RuntimeObject* value)
	{
		___len_2 = value;
		Il2CppCodeGenWriteBarrier((&___len_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSTRINGFUNCTION_T1478922894_H
#ifndef CONSTRAINTEXCEPTION_T1603394644_H
#define CONSTRAINTEXCEPTION_T1603394644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintException
struct  ConstraintException_t1603394644  : public DataException_t3690991188
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTEXCEPTION_T1603394644_H
#ifndef TRIMFUNCTION_T1311410747_H
#define TRIMFUNCTION_T1311410747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.TrimFunction
struct  TrimFunction_t1311410747  : public StringFunction_t2269901765
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIMFUNCTION_T1311410747_H
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
#ifndef DBDATAADAPTER_T3185352091_H
#define DBDATAADAPTER_T3185352091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbDataAdapter
struct  DbDataAdapter_t3185352091  : public DataAdapter_t3497165630
{
public:
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_selectCommand
	RuntimeObject* ____selectCommand_5;
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_updateCommand
	RuntimeObject* ____updateCommand_6;
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_deleteCommand
	RuntimeObject* ____deleteCommand_7;
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_insertCommand
	RuntimeObject* ____insertCommand_8;

public:
	inline static int32_t get_offset_of__selectCommand_5() { return static_cast<int32_t>(offsetof(DbDataAdapter_t3185352091, ____selectCommand_5)); }
	inline RuntimeObject* get__selectCommand_5() const { return ____selectCommand_5; }
	inline RuntimeObject** get_address_of__selectCommand_5() { return &____selectCommand_5; }
	inline void set__selectCommand_5(RuntimeObject* value)
	{
		____selectCommand_5 = value;
		Il2CppCodeGenWriteBarrier((&____selectCommand_5), value);
	}

	inline static int32_t get_offset_of__updateCommand_6() { return static_cast<int32_t>(offsetof(DbDataAdapter_t3185352091, ____updateCommand_6)); }
	inline RuntimeObject* get__updateCommand_6() const { return ____updateCommand_6; }
	inline RuntimeObject** get_address_of__updateCommand_6() { return &____updateCommand_6; }
	inline void set__updateCommand_6(RuntimeObject* value)
	{
		____updateCommand_6 = value;
		Il2CppCodeGenWriteBarrier((&____updateCommand_6), value);
	}

	inline static int32_t get_offset_of__deleteCommand_7() { return static_cast<int32_t>(offsetof(DbDataAdapter_t3185352091, ____deleteCommand_7)); }
	inline RuntimeObject* get__deleteCommand_7() const { return ____deleteCommand_7; }
	inline RuntimeObject** get_address_of__deleteCommand_7() { return &____deleteCommand_7; }
	inline void set__deleteCommand_7(RuntimeObject* value)
	{
		____deleteCommand_7 = value;
		Il2CppCodeGenWriteBarrier((&____deleteCommand_7), value);
	}

	inline static int32_t get_offset_of__insertCommand_8() { return static_cast<int32_t>(offsetof(DbDataAdapter_t3185352091, ____insertCommand_8)); }
	inline RuntimeObject* get__insertCommand_8() const { return ____insertCommand_8; }
	inline RuntimeObject** get_address_of__insertCommand_8() { return &____insertCommand_8; }
	inline void set__insertCommand_8(RuntimeObject* value)
	{
		____insertCommand_8 = value;
		Il2CppCodeGenWriteBarrier((&____insertCommand_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBDATAADAPTER_T3185352091_H
#ifndef DATAROWCHANGEEVENTARGS_T1226132008_H
#define DATAROWCHANGEEVENTARGS_T1226132008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowChangeEventArgs
struct  DataRowChangeEventArgs_t1226132008  : public EventArgs_t3141815178
{
public:
	// System.Data.DataRow System.Data.DataRowChangeEventArgs::row
	DataRow_t409901744 * ___row_1;
	// System.Data.DataRowAction System.Data.DataRowChangeEventArgs::action
	int32_t ___action_2;

public:
	inline static int32_t get_offset_of_row_1() { return static_cast<int32_t>(offsetof(DataRowChangeEventArgs_t1226132008, ___row_1)); }
	inline DataRow_t409901744 * get_row_1() const { return ___row_1; }
	inline DataRow_t409901744 ** get_address_of_row_1() { return &___row_1; }
	inline void set_row_1(DataRow_t409901744 * value)
	{
		___row_1 = value;
		Il2CppCodeGenWriteBarrier((&___row_1), value);
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(DataRowChangeEventArgs_t1226132008, ___action_2)); }
	inline int32_t get_action_2() const { return ___action_2; }
	inline int32_t* get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(int32_t value)
	{
		___action_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAROWCHANGEEVENTARGS_T1226132008_H
#ifndef KEY_T950964578_H
#define KEY_T950964578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Key
struct  Key_t950964578  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.Common.Key::_table
	DataTable_t458307818 * ____table_0;
	// System.Data.DataColumn[] System.Data.Common.Key::_columns
	DataColumnU5BU5D_t1250929356* ____columns_1;
	// System.ComponentModel.ListSortDirection[] System.Data.Common.Key::_sortDirection
	ListSortDirectionU5BU5D_t3286721238* ____sortDirection_2;
	// System.Data.DataViewRowState System.Data.Common.Key::_rowStateFilter
	int32_t ____rowStateFilter_3;
	// Mono.Data.SqlExpressions.IExpression System.Data.Common.Key::_filter
	RuntimeObject* ____filter_4;
	// System.Data.DataRow System.Data.Common.Key::_tmpRow
	DataRow_t409901744 * ____tmpRow_5;

public:
	inline static int32_t get_offset_of__table_0() { return static_cast<int32_t>(offsetof(Key_t950964578, ____table_0)); }
	inline DataTable_t458307818 * get__table_0() const { return ____table_0; }
	inline DataTable_t458307818 ** get_address_of__table_0() { return &____table_0; }
	inline void set__table_0(DataTable_t458307818 * value)
	{
		____table_0 = value;
		Il2CppCodeGenWriteBarrier((&____table_0), value);
	}

	inline static int32_t get_offset_of__columns_1() { return static_cast<int32_t>(offsetof(Key_t950964578, ____columns_1)); }
	inline DataColumnU5BU5D_t1250929356* get__columns_1() const { return ____columns_1; }
	inline DataColumnU5BU5D_t1250929356** get_address_of__columns_1() { return &____columns_1; }
	inline void set__columns_1(DataColumnU5BU5D_t1250929356* value)
	{
		____columns_1 = value;
		Il2CppCodeGenWriteBarrier((&____columns_1), value);
	}

	inline static int32_t get_offset_of__sortDirection_2() { return static_cast<int32_t>(offsetof(Key_t950964578, ____sortDirection_2)); }
	inline ListSortDirectionU5BU5D_t3286721238* get__sortDirection_2() const { return ____sortDirection_2; }
	inline ListSortDirectionU5BU5D_t3286721238** get_address_of__sortDirection_2() { return &____sortDirection_2; }
	inline void set__sortDirection_2(ListSortDirectionU5BU5D_t3286721238* value)
	{
		____sortDirection_2 = value;
		Il2CppCodeGenWriteBarrier((&____sortDirection_2), value);
	}

	inline static int32_t get_offset_of__rowStateFilter_3() { return static_cast<int32_t>(offsetof(Key_t950964578, ____rowStateFilter_3)); }
	inline int32_t get__rowStateFilter_3() const { return ____rowStateFilter_3; }
	inline int32_t* get_address_of__rowStateFilter_3() { return &____rowStateFilter_3; }
	inline void set__rowStateFilter_3(int32_t value)
	{
		____rowStateFilter_3 = value;
	}

	inline static int32_t get_offset_of__filter_4() { return static_cast<int32_t>(offsetof(Key_t950964578, ____filter_4)); }
	inline RuntimeObject* get__filter_4() const { return ____filter_4; }
	inline RuntimeObject** get_address_of__filter_4() { return &____filter_4; }
	inline void set__filter_4(RuntimeObject* value)
	{
		____filter_4 = value;
		Il2CppCodeGenWriteBarrier((&____filter_4), value);
	}

	inline static int32_t get_offset_of__tmpRow_5() { return static_cast<int32_t>(offsetof(Key_t950964578, ____tmpRow_5)); }
	inline DataRow_t409901744 * get__tmpRow_5() const { return ____tmpRow_5; }
	inline DataRow_t409901744 ** get_address_of__tmpRow_5() { return &____tmpRow_5; }
	inline void set__tmpRow_5(DataRow_t409901744 * value)
	{
		____tmpRow_5 = value;
		Il2CppCodeGenWriteBarrier((&____tmpRow_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEY_T950964578_H
#ifndef SQLBYTES_T227497019_H
#define SQLBYTES_T227497019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBytes
struct  SqlBytes_t227497019  : public RuntimeObject
{
public:
	// System.Boolean System.Data.SqlTypes.SqlBytes::notNull
	bool ___notNull_0;
	// System.Byte[] System.Data.SqlTypes.SqlBytes::buffer
	ByteU5BU5D_t2378657911* ___buffer_1;
	// System.Data.SqlTypes.StorageState System.Data.SqlTypes.SqlBytes::storage
	int32_t ___storage_2;

public:
	inline static int32_t get_offset_of_notNull_0() { return static_cast<int32_t>(offsetof(SqlBytes_t227497019, ___notNull_0)); }
	inline bool get_notNull_0() const { return ___notNull_0; }
	inline bool* get_address_of_notNull_0() { return &___notNull_0; }
	inline void set_notNull_0(bool value)
	{
		___notNull_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(SqlBytes_t227497019, ___buffer_1)); }
	inline ByteU5BU5D_t2378657911* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_t2378657911** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_t2378657911* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_1), value);
	}

	inline static int32_t get_offset_of_storage_2() { return static_cast<int32_t>(offsetof(SqlBytes_t227497019, ___storage_2)); }
	inline int32_t get_storage_2() const { return ___storage_2; }
	inline int32_t* get_address_of_storage_2() { return &___storage_2; }
	inline void set_storage_2(int32_t value)
	{
		___storage_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLBYTES_T227497019_H
#ifndef SQLCHARS_T2176796479_H
#define SQLCHARS_T2176796479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlChars
struct  SqlChars_t2176796479  : public RuntimeObject
{
public:
	// System.Boolean System.Data.SqlTypes.SqlChars::notNull
	bool ___notNull_0;
	// System.Char[] System.Data.SqlTypes.SqlChars::buffer
	CharU5BU5D_t3282355116* ___buffer_1;
	// System.Data.SqlTypes.StorageState System.Data.SqlTypes.SqlChars::storage
	int32_t ___storage_2;

public:
	inline static int32_t get_offset_of_notNull_0() { return static_cast<int32_t>(offsetof(SqlChars_t2176796479, ___notNull_0)); }
	inline bool get_notNull_0() const { return ___notNull_0; }
	inline bool* get_address_of_notNull_0() { return &___notNull_0; }
	inline void set_notNull_0(bool value)
	{
		___notNull_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(SqlChars_t2176796479, ___buffer_1)); }
	inline CharU5BU5D_t3282355116* get_buffer_1() const { return ___buffer_1; }
	inline CharU5BU5D_t3282355116** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(CharU5BU5D_t3282355116* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_1), value);
	}

	inline static int32_t get_offset_of_storage_2() { return static_cast<int32_t>(offsetof(SqlChars_t2176796479, ___storage_2)); }
	inline int32_t get_storage_2() const { return ___storage_2; }
	inline int32_t* get_address_of_storage_2() { return &___storage_2; }
	inline void set_storage_2(int32_t value)
	{
		___storage_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLCHARS_T2176796479_H
#ifndef SQLNULLVALUEEXCEPTION_T3204970965_H
#define SQLNULLVALUEEXCEPTION_T3204970965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlNullValueException
struct  SqlNullValueException_t3204970965  : public SqlTypeException_t1865864803
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLNULLVALUEEXCEPTION_T3204970965_H
#ifndef SQLSTRING_T2598366948_H
#define SQLSTRING_T2598366948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlString
struct  SqlString_t2598366948 
{
public:
	// System.String System.Data.SqlTypes.SqlString::value
	String_t* ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlString::notNull
	bool ___notNull_1;
	// System.Int32 System.Data.SqlTypes.SqlString::lcid
	int32_t ___lcid_2;
	// System.Data.SqlTypes.SqlCompareOptions System.Data.SqlTypes.SqlString::compareOptions
	int32_t ___compareOptions_3;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlString_t2598366948, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlString_t2598366948, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}

	inline static int32_t get_offset_of_lcid_2() { return static_cast<int32_t>(offsetof(SqlString_t2598366948, ___lcid_2)); }
	inline int32_t get_lcid_2() const { return ___lcid_2; }
	inline int32_t* get_address_of_lcid_2() { return &___lcid_2; }
	inline void set_lcid_2(int32_t value)
	{
		___lcid_2 = value;
	}

	inline static int32_t get_offset_of_compareOptions_3() { return static_cast<int32_t>(offsetof(SqlString_t2598366948, ___compareOptions_3)); }
	inline int32_t get_compareOptions_3() const { return ___compareOptions_3; }
	inline int32_t* get_address_of_compareOptions_3() { return &___compareOptions_3; }
	inline void set_compareOptions_3(int32_t value)
	{
		___compareOptions_3 = value;
	}
};

struct SqlString_t2598366948_StaticFields
{
public:
	// System.Int32 System.Data.SqlTypes.SqlString::BinarySort
	int32_t ___BinarySort_4;
	// System.Int32 System.Data.SqlTypes.SqlString::IgnoreCase
	int32_t ___IgnoreCase_5;
	// System.Int32 System.Data.SqlTypes.SqlString::IgnoreKanaType
	int32_t ___IgnoreKanaType_6;
	// System.Int32 System.Data.SqlTypes.SqlString::IgnoreNonSpace
	int32_t ___IgnoreNonSpace_7;
	// System.Int32 System.Data.SqlTypes.SqlString::IgnoreWidth
	int32_t ___IgnoreWidth_8;
	// System.Data.SqlTypes.SqlString System.Data.SqlTypes.SqlString::Null
	SqlString_t2598366948  ___Null_9;
	// System.Globalization.NumberFormatInfo System.Data.SqlTypes.SqlString::DecimalFormat
	NumberFormatInfo_t796945479 * ___DecimalFormat_10;

public:
	inline static int32_t get_offset_of_BinarySort_4() { return static_cast<int32_t>(offsetof(SqlString_t2598366948_StaticFields, ___BinarySort_4)); }
	inline int32_t get_BinarySort_4() const { return ___BinarySort_4; }
	inline int32_t* get_address_of_BinarySort_4() { return &___BinarySort_4; }
	inline void set_BinarySort_4(int32_t value)
	{
		___BinarySort_4 = value;
	}

	inline static int32_t get_offset_of_IgnoreCase_5() { return static_cast<int32_t>(offsetof(SqlString_t2598366948_StaticFields, ___IgnoreCase_5)); }
	inline int32_t get_IgnoreCase_5() const { return ___IgnoreCase_5; }
	inline int32_t* get_address_of_IgnoreCase_5() { return &___IgnoreCase_5; }
	inline void set_IgnoreCase_5(int32_t value)
	{
		___IgnoreCase_5 = value;
	}

	inline static int32_t get_offset_of_IgnoreKanaType_6() { return static_cast<int32_t>(offsetof(SqlString_t2598366948_StaticFields, ___IgnoreKanaType_6)); }
	inline int32_t get_IgnoreKanaType_6() const { return ___IgnoreKanaType_6; }
	inline int32_t* get_address_of_IgnoreKanaType_6() { return &___IgnoreKanaType_6; }
	inline void set_IgnoreKanaType_6(int32_t value)
	{
		___IgnoreKanaType_6 = value;
	}

	inline static int32_t get_offset_of_IgnoreNonSpace_7() { return static_cast<int32_t>(offsetof(SqlString_t2598366948_StaticFields, ___IgnoreNonSpace_7)); }
	inline int32_t get_IgnoreNonSpace_7() const { return ___IgnoreNonSpace_7; }
	inline int32_t* get_address_of_IgnoreNonSpace_7() { return &___IgnoreNonSpace_7; }
	inline void set_IgnoreNonSpace_7(int32_t value)
	{
		___IgnoreNonSpace_7 = value;
	}

	inline static int32_t get_offset_of_IgnoreWidth_8() { return static_cast<int32_t>(offsetof(SqlString_t2598366948_StaticFields, ___IgnoreWidth_8)); }
	inline int32_t get_IgnoreWidth_8() const { return ___IgnoreWidth_8; }
	inline int32_t* get_address_of_IgnoreWidth_8() { return &___IgnoreWidth_8; }
	inline void set_IgnoreWidth_8(int32_t value)
	{
		___IgnoreWidth_8 = value;
	}

	inline static int32_t get_offset_of_Null_9() { return static_cast<int32_t>(offsetof(SqlString_t2598366948_StaticFields, ___Null_9)); }
	inline SqlString_t2598366948  get_Null_9() const { return ___Null_9; }
	inline SqlString_t2598366948 * get_address_of_Null_9() { return &___Null_9; }
	inline void set_Null_9(SqlString_t2598366948  value)
	{
		___Null_9 = value;
	}

	inline static int32_t get_offset_of_DecimalFormat_10() { return static_cast<int32_t>(offsetof(SqlString_t2598366948_StaticFields, ___DecimalFormat_10)); }
	inline NumberFormatInfo_t796945479 * get_DecimalFormat_10() const { return ___DecimalFormat_10; }
	inline NumberFormatInfo_t796945479 ** get_address_of_DecimalFormat_10() { return &___DecimalFormat_10; }
	inline void set_DecimalFormat_10(NumberFormatInfo_t796945479 * value)
	{
		___DecimalFormat_10 = value;
		Il2CppCodeGenWriteBarrier((&___DecimalFormat_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlString
struct SqlString_t2598366948_marshaled_pinvoke
{
	char* ___value_0;
	int32_t ___notNull_1;
	int32_t ___lcid_2;
	int32_t ___compareOptions_3;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlString
struct SqlString_t2598366948_marshaled_com
{
	Il2CppChar* ___value_0;
	int32_t ___notNull_1;
	int32_t ___lcid_2;
	int32_t ___compareOptions_3;
};
#endif // SQLSTRING_T2598366948_H
#ifndef SQLTRUNCATEEXCEPTION_T2468263608_H
#define SQLTRUNCATEEXCEPTION_T2468263608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlTruncateException
struct  SqlTruncateException_t2468263608  : public SqlTypeException_t1865864803
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLTRUNCATEEXCEPTION_T2468263608_H
#ifndef DATACOLUMN_T2121335505_H
#define DATACOLUMN_T2121335505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumn
struct  DataColumn_t2121335505  : public MarshalByValueComponent_t3672154591
{
public:
	// System.ComponentModel.EventHandlerList System.Data.DataColumn::_eventHandlers
	EventHandlerList_t421778690 * ____eventHandlers_3;
	// System.Boolean System.Data.DataColumn::_allowDBNull
	bool ____allowDBNull_5;
	// System.Boolean System.Data.DataColumn::_autoIncrement
	bool ____autoIncrement_6;
	// System.Int64 System.Data.DataColumn::_autoIncrementSeed
	int64_t ____autoIncrementSeed_7;
	// System.Int64 System.Data.DataColumn::_autoIncrementStep
	int64_t ____autoIncrementStep_8;
	// System.Int64 System.Data.DataColumn::_nextAutoIncrementValue
	int64_t ____nextAutoIncrementValue_9;
	// System.String System.Data.DataColumn::_caption
	String_t* ____caption_10;
	// System.Data.MappingType System.Data.DataColumn::_columnMapping
	int32_t ____columnMapping_11;
	// System.String System.Data.DataColumn::_columnName
	String_t* ____columnName_12;
	// System.Object System.Data.DataColumn::_defaultValue
	RuntimeObject * ____defaultValue_13;
	// System.String System.Data.DataColumn::_expression
	String_t* ____expression_14;
	// Mono.Data.SqlExpressions.IExpression System.Data.DataColumn::_compiledExpression
	RuntimeObject* ____compiledExpression_15;
	// System.Data.PropertyCollection System.Data.DataColumn::_extendedProperties
	PropertyCollection_t3163539028 * ____extendedProperties_16;
	// System.Int32 System.Data.DataColumn::_maxLength
	int32_t ____maxLength_17;
	// System.String System.Data.DataColumn::_nameSpace
	String_t* ____nameSpace_18;
	// System.Int32 System.Data.DataColumn::_ordinal
	int32_t ____ordinal_19;
	// System.String System.Data.DataColumn::_prefix
	String_t* ____prefix_20;
	// System.Boolean System.Data.DataColumn::_readOnly
	bool ____readOnly_21;
	// System.Data.DataTable System.Data.DataColumn::_table
	DataTable_t458307818 * ____table_22;
	// System.Boolean System.Data.DataColumn::_unique
	bool ____unique_23;
	// System.Data.Common.DataContainer System.Data.DataColumn::_dataContainer
	DataContainer_t2006856459 * ____dataContainer_24;
	// System.Data.DataSetDateTime System.Data.DataColumn::_datetimeMode
	int32_t ____datetimeMode_25;

public:
	inline static int32_t get_offset_of__eventHandlers_3() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505, ____eventHandlers_3)); }
	inline EventHandlerList_t421778690 * get__eventHandlers_3() const { return ____eventHandlers_3; }
	inline EventHandlerList_t421778690 ** get_address_of__eventHandlers_3() { return &____eventHandlers_3; }
	inline void set__eventHandlers_3(EventHandlerList_t421778690 * value)
	{
		____eventHandlers_3 = value;
		Il2CppCodeGenWriteBarrier((&____eventHandlers_3), value);
	}

	inline static int32_t get_offset_of__allowDBNull_5() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505, ____allowDBNull_5)); }
	inline bool get__allowDBNull_5() const { return ____allowDBNull_5; }
	inline bool* get_address_of__allowDBNull_5() { return &____allowDBNull_5; }
	inline void set__allowDBNull_5(bool value)
	{
		____allowDBNull_5 = value;
	}

	inline static int32_t get_offset_of__autoIncrement_6() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505, ____autoIncrement_6)); }
	inline bool get__autoIncrement_6() const { return ____autoIncrement_6; }
	inline bool* get_address_of__autoIncrement_6() { return &____autoIncrement_6; }
	inline void set__autoIncrement_6(bool value)
	{
		____autoIncrement_6 = value;
	}

	inline static int32_t get_offset_of__autoIncrementSeed_7() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505, ____autoIncrementSeed_7)); }
	inline int64_t get__autoIncrementSeed_7() const { return ____autoIncrementSeed_7; }
	inline int64_t* get_address_of__autoIncrementSeed_7() { return &____autoIncrementSeed_7; }
	inline void set__autoIncrementSeed_7(int64_t value)
	{
		____autoIncrementSeed_7 = value;
	}

	inline static int32_t get_offset_of__autoIncrementStep_8() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505, ____autoIncrementStep_8)); }
	inline int64_t get__autoIncrementStep_8() const { return ____autoIncrementStep_8; }
	inline int64_t* get_address_of__autoIncrementStep_8() { return &____autoIncrementStep_8; }
	inline void set__autoIncrementStep_8(int64_t value)
	{
		____autoIncrementStep_8 = value;
	}

	inline static int32_t get_offset_of__nextAutoIncrementValue_9() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505, ____nextAutoIncrementValue_9)); }
	inline int64_t get__nextAutoIncrementValue_9() const { return ____nextAutoIncrementValue_9; }
	inline int64_t* get_address_of__nextAutoIncrementValue_9() { return &____nextAutoIncrementValue_9; }
	inline void set__nextAutoIncrementValue_9(int64_t value)
	{
		____nextAutoIncrementValue_9 = value;
	}

	inline static int32_t get_offset_of__caption_10() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505, ____caption_10)); }
	inline String_t* get__caption_10() const { return ____caption_10; }
	inline String_t** get_address_of__caption_10() { return &____caption_10; }
	inline void set__caption_10(String_t* value)
	{
		____caption_10 = value;
		Il2CppCodeGenWriteBarrier((&____caption_10), value);
	}

	inline static int32_t get_offset_of__columnMapping_11() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505, ____columnMapping_11)); }
	inline int32_t get__columnMapping_11() const { return ____columnMapping_11; }
	inline int32_t* get_address_of__columnMapping_11() { return &____columnMapping_11; }
	inline void set__columnMapping_11(int32_t value)
	{
		____columnMapping_11 = value;
	}

	inline static int32_t get_offset_of__columnName_12() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505, ____columnName_12)); }
	inline String_t* get__columnName_12() const { return ____columnName_12; }
	inline String_t** get_address_of__columnName_12() { return &____columnName_12; }
	inline void set__columnName_12(String_t* value)
	{
		____columnName_12 = value;
		Il2CppCodeGenWriteBarrier((&____columnName_12), value);
	}

	inline static int32_t get_offset_of__defaultValue_13() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505, ____defaultValue_13)); }
	inline RuntimeObject * get__defaultValue_13() const { return ____defaultValue_13; }
	inline RuntimeObject ** get_address_of__defaultValue_13() { return &____defaultValue_13; }
	inline void set__defaultValue_13(RuntimeObject * value)
	{
		____defaultValue_13 = value;
		Il2CppCodeGenWriteBarrier((&____defaultValue_13), value);
	}

	inline static int32_t get_offset_of__expression_14() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505, ____expression_14)); }
	inline String_t* get__expression_14() const { return ____expression_14; }
	inline String_t** get_address_of__expression_14() { return &____expression_14; }
	inline void set__expression_14(String_t* value)
	{
		____expression_14 = value;
		Il2CppCodeGenWriteBarrier((&____expression_14), value);
	}

	inline static int32_t get_offset_of__compiledExpression_15() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505, ____compiledExpression_15)); }
	inline RuntimeObject* get__compiledExpression_15() const { return ____compiledExpression_15; }
	inline RuntimeObject** get_address_of__compiledExpression_15() { return &____compiledExpression_15; }
	inline void set__compiledExpression_15(RuntimeObject* value)
	{
		____compiledExpression_15 = value;
		Il2CppCodeGenWriteBarrier((&____compiledExpression_15), value);
	}

	inline static int32_t get_offset_of__extendedProperties_16() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505, ____extendedProperties_16)); }
	inline PropertyCollection_t3163539028 * get__extendedProperties_16() const { return ____extendedProperties_16; }
	inline PropertyCollection_t3163539028 ** get_address_of__extendedProperties_16() { return &____extendedProperties_16; }
	inline void set__extendedProperties_16(PropertyCollection_t3163539028 * value)
	{
		____extendedProperties_16 = value;
		Il2CppCodeGenWriteBarrier((&____extendedProperties_16), value);
	}

	inline static int32_t get_offset_of__maxLength_17() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505, ____maxLength_17)); }
	inline int32_t get__maxLength_17() const { return ____maxLength_17; }
	inline int32_t* get_address_of__maxLength_17() { return &____maxLength_17; }
	inline void set__maxLength_17(int32_t value)
	{
		____maxLength_17 = value;
	}

	inline static int32_t get_offset_of__nameSpace_18() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505, ____nameSpace_18)); }
	inline String_t* get__nameSpace_18() const { return ____nameSpace_18; }
	inline String_t** get_address_of__nameSpace_18() { return &____nameSpace_18; }
	inline void set__nameSpace_18(String_t* value)
	{
		____nameSpace_18 = value;
		Il2CppCodeGenWriteBarrier((&____nameSpace_18), value);
	}

	inline static int32_t get_offset_of__ordinal_19() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505, ____ordinal_19)); }
	inline int32_t get__ordinal_19() const { return ____ordinal_19; }
	inline int32_t* get_address_of__ordinal_19() { return &____ordinal_19; }
	inline void set__ordinal_19(int32_t value)
	{
		____ordinal_19 = value;
	}

	inline static int32_t get_offset_of__prefix_20() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505, ____prefix_20)); }
	inline String_t* get__prefix_20() const { return ____prefix_20; }
	inline String_t** get_address_of__prefix_20() { return &____prefix_20; }
	inline void set__prefix_20(String_t* value)
	{
		____prefix_20 = value;
		Il2CppCodeGenWriteBarrier((&____prefix_20), value);
	}

	inline static int32_t get_offset_of__readOnly_21() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505, ____readOnly_21)); }
	inline bool get__readOnly_21() const { return ____readOnly_21; }
	inline bool* get_address_of__readOnly_21() { return &____readOnly_21; }
	inline void set__readOnly_21(bool value)
	{
		____readOnly_21 = value;
	}

	inline static int32_t get_offset_of__table_22() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505, ____table_22)); }
	inline DataTable_t458307818 * get__table_22() const { return ____table_22; }
	inline DataTable_t458307818 ** get_address_of__table_22() { return &____table_22; }
	inline void set__table_22(DataTable_t458307818 * value)
	{
		____table_22 = value;
		Il2CppCodeGenWriteBarrier((&____table_22), value);
	}

	inline static int32_t get_offset_of__unique_23() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505, ____unique_23)); }
	inline bool get__unique_23() const { return ____unique_23; }
	inline bool* get_address_of__unique_23() { return &____unique_23; }
	inline void set__unique_23(bool value)
	{
		____unique_23 = value;
	}

	inline static int32_t get_offset_of__dataContainer_24() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505, ____dataContainer_24)); }
	inline DataContainer_t2006856459 * get__dataContainer_24() const { return ____dataContainer_24; }
	inline DataContainer_t2006856459 ** get_address_of__dataContainer_24() { return &____dataContainer_24; }
	inline void set__dataContainer_24(DataContainer_t2006856459 * value)
	{
		____dataContainer_24 = value;
		Il2CppCodeGenWriteBarrier((&____dataContainer_24), value);
	}

	inline static int32_t get_offset_of__datetimeMode_25() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505, ____datetimeMode_25)); }
	inline int32_t get__datetimeMode_25() const { return ____datetimeMode_25; }
	inline int32_t* get_address_of__datetimeMode_25() { return &____datetimeMode_25; }
	inline void set__datetimeMode_25(int32_t value)
	{
		____datetimeMode_25 = value;
	}
};

struct DataColumn_t2121335505_StaticFields
{
public:
	// System.Object System.Data.DataColumn::_propertyChangedKey
	RuntimeObject * ____propertyChangedKey_4;

public:
	inline static int32_t get_offset_of__propertyChangedKey_4() { return static_cast<int32_t>(offsetof(DataColumn_t2121335505_StaticFields, ____propertyChangedKey_4)); }
	inline RuntimeObject * get__propertyChangedKey_4() const { return ____propertyChangedKey_4; }
	inline RuntimeObject ** get_address_of__propertyChangedKey_4() { return &____propertyChangedKey_4; }
	inline void set__propertyChangedKey_4(RuntimeObject * value)
	{
		____propertyChangedKey_4 = value;
		Il2CppCodeGenWriteBarrier((&____propertyChangedKey_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACOLUMN_T2121335505_H
#ifndef LENFUNCTION_T4125844412_H
#define LENFUNCTION_T4125844412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.LenFunction
struct  LenFunction_t4125844412  : public StringFunction_t2269901765
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LENFUNCTION_T4125844412_H
#ifndef COMPARISON_T571314700_H
#define COMPARISON_T571314700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Comparison
struct  Comparison_t571314700  : public BinaryOpExpression_t918480111
{
public:

public:
};

struct Comparison_t571314700_StaticFields
{
public:
	// System.Char[] Mono.Data.SqlExpressions.Comparison::IgnoredTrailingChars
	CharU5BU5D_t3282355116* ___IgnoredTrailingChars_3;

public:
	inline static int32_t get_offset_of_IgnoredTrailingChars_3() { return static_cast<int32_t>(offsetof(Comparison_t571314700_StaticFields, ___IgnoredTrailingChars_3)); }
	inline CharU5BU5D_t3282355116* get_IgnoredTrailingChars_3() const { return ___IgnoredTrailingChars_3; }
	inline CharU5BU5D_t3282355116** get_address_of_IgnoredTrailingChars_3() { return &___IgnoredTrailingChars_3; }
	inline void set_IgnoredTrailingChars_3(CharU5BU5D_t3282355116* value)
	{
		___IgnoredTrailingChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___IgnoredTrailingChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_T571314700_H
#ifndef SQLDATETIME_T2461458108_H
#define SQLDATETIME_T2461458108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlDateTime
struct  SqlDateTime_t2461458108 
{
public:
	// System.DateTime System.Data.SqlTypes.SqlDateTime::value
	DateTime_t2321164601  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlDateTime::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlDateTime_t2461458108, ___value_0)); }
	inline DateTime_t2321164601  get_value_0() const { return ___value_0; }
	inline DateTime_t2321164601 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t2321164601  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlDateTime_t2461458108, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlDateTime_t2461458108_StaticFields
{
public:
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::MaxValue
	SqlDateTime_t2461458108  ___MaxValue_2;
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::MinValue
	SqlDateTime_t2461458108  ___MinValue_3;
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::Null
	SqlDateTime_t2461458108  ___Null_4;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerHour
	int32_t ___SQLTicksPerHour_5;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerMinute
	int32_t ___SQLTicksPerMinute_6;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerSecond
	int32_t ___SQLTicksPerSecond_7;
	// System.DateTime System.Data.SqlTypes.SqlDateTime::zero_day
	DateTime_t2321164601  ___zero_day_8;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlDateTime_t2461458108_StaticFields, ___MaxValue_2)); }
	inline SqlDateTime_t2461458108  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlDateTime_t2461458108 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlDateTime_t2461458108  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlDateTime_t2461458108_StaticFields, ___MinValue_3)); }
	inline SqlDateTime_t2461458108  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlDateTime_t2461458108 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlDateTime_t2461458108  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlDateTime_t2461458108_StaticFields, ___Null_4)); }
	inline SqlDateTime_t2461458108  get_Null_4() const { return ___Null_4; }
	inline SqlDateTime_t2461458108 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlDateTime_t2461458108  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerHour_5() { return static_cast<int32_t>(offsetof(SqlDateTime_t2461458108_StaticFields, ___SQLTicksPerHour_5)); }
	inline int32_t get_SQLTicksPerHour_5() const { return ___SQLTicksPerHour_5; }
	inline int32_t* get_address_of_SQLTicksPerHour_5() { return &___SQLTicksPerHour_5; }
	inline void set_SQLTicksPerHour_5(int32_t value)
	{
		___SQLTicksPerHour_5 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerMinute_6() { return static_cast<int32_t>(offsetof(SqlDateTime_t2461458108_StaticFields, ___SQLTicksPerMinute_6)); }
	inline int32_t get_SQLTicksPerMinute_6() const { return ___SQLTicksPerMinute_6; }
	inline int32_t* get_address_of_SQLTicksPerMinute_6() { return &___SQLTicksPerMinute_6; }
	inline void set_SQLTicksPerMinute_6(int32_t value)
	{
		___SQLTicksPerMinute_6 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerSecond_7() { return static_cast<int32_t>(offsetof(SqlDateTime_t2461458108_StaticFields, ___SQLTicksPerSecond_7)); }
	inline int32_t get_SQLTicksPerSecond_7() const { return ___SQLTicksPerSecond_7; }
	inline int32_t* get_address_of_SQLTicksPerSecond_7() { return &___SQLTicksPerSecond_7; }
	inline void set_SQLTicksPerSecond_7(int32_t value)
	{
		___SQLTicksPerSecond_7 = value;
	}

	inline static int32_t get_offset_of_zero_day_8() { return static_cast<int32_t>(offsetof(SqlDateTime_t2461458108_StaticFields, ___zero_day_8)); }
	inline DateTime_t2321164601  get_zero_day_8() const { return ___zero_day_8; }
	inline DateTime_t2321164601 * get_address_of_zero_day_8() { return &___zero_day_8; }
	inline void set_zero_day_8(DateTime_t2321164601  value)
	{
		___zero_day_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDateTime
struct SqlDateTime_t2461458108_marshaled_pinvoke
{
	DateTime_t2321164601  ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDateTime
struct SqlDateTime_t2461458108_marshaled_com
{
	DateTime_t2321164601  ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLDATETIME_T2461458108_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2800 = { sizeof (ReferencedTable_t1122633368)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2800[4] = 
{
	ReferencedTable_t1122633368::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2801 = { sizeof (ColumnReference_t1008823366), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2801[5] = 
{
	ColumnReference_t1008823366::get_offset_of_refTable_0(),
	ColumnReference_t1008823366::get_offset_of_relationName_1(),
	ColumnReference_t1008823366::get_offset_of_columnName_2(),
	ColumnReference_t1008823366::get_offset_of__cachedColumn_3(),
	ColumnReference_t1008823366::get_offset_of__cachedRelation_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2802 = { sizeof (Comparison_t571314700), -1, sizeof(Comparison_t571314700_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2802[1] = 
{
	Comparison_t571314700_StaticFields::get_offset_of_IgnoredTrailingChars_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2803 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2804 = { sizeof (BaseExpression_t1977657975), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2805 = { sizeof (UnaryExpression_t3578873248), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2805[1] = 
{
	UnaryExpression_t3578873248::get_offset_of_expr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2806 = { sizeof (BinaryExpression_t3096525146), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2806[2] = 
{
	BinaryExpression_t3096525146::get_offset_of_expr1_0(),
	BinaryExpression_t3096525146::get_offset_of_expr2_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2807 = { sizeof (Operation_t2823884466)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2807[14] = 
{
	Operation_t2823884466::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2808 = { sizeof (BinaryOpExpression_t918480111), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2808[1] = 
{
	BinaryOpExpression_t918480111::get_offset_of_op_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2809 = { sizeof (IifFunction_t2341350996), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2809[2] = 
{
	IifFunction_t2341350996::get_offset_of_trueExpr_1(),
	IifFunction_t2341350996::get_offset_of_falseExpr_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2810 = { sizeof (IsNullFunction_t1696550519), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2810[1] = 
{
	IsNullFunction_t1696550519::get_offset_of_defaultExpr_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2811 = { sizeof (ConvertFunction_t4054397322), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2811[1] = 
{
	ConvertFunction_t4054397322::get_offset_of_targetType_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2812 = { sizeof (In_t3233598087), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2812[1] = 
{
	In_t3233598087::get_offset_of_set_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2813 = { sizeof (Like_t1324281985), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2813[1] = 
{
	Like_t1324281985::get_offset_of__pattern_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2814 = { sizeof (Literal_t3565367463), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2814[1] = 
{
	Literal_t3565367463::get_offset_of_val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2815 = { sizeof (Numeric_t1593507055), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2816 = { sizeof (StringFunction_t2269901765), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2817 = { sizeof (ConcatFunction_t3110566233), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2817[1] = 
{
	ConcatFunction_t3110566233::get_offset_of__add_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2818 = { sizeof (SubstringFunction_t1478922894), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2818[2] = 
{
	SubstringFunction_t1478922894::get_offset_of_start_1(),
	SubstringFunction_t1478922894::get_offset_of_len_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2819 = { sizeof (LenFunction_t4125844412), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2820 = { sizeof (TrimFunction_t1311410747), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2821 = { sizeof (Tokenizer_t1407563704), -1, sizeof(Tokenizer_t1407563704_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2821[6] = 
{
	Tokenizer_t1407563704_StaticFields::get_offset_of_tokenMap_0(),
	Tokenizer_t1407563704_StaticFields::get_offset_of_tokens_1(),
	Tokenizer_t1407563704::get_offset_of_input_2(),
	Tokenizer_t1407563704::get_offset_of_pos_3(),
	Tokenizer_t1407563704::get_offset_of_tok_4(),
	Tokenizer_t1407563704::get_offset_of_val_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2822 = { sizeof (DataAdapter_t3497165630), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2822[1] = 
{
	DataAdapter_t3497165630::get_offset_of_tableMappings_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2823 = { sizeof (DataColumnMapping_t1922670852), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2823[2] = 
{
	DataColumnMapping_t1922670852::get_offset_of_sourceColumn_1(),
	DataColumnMapping_t1922670852::get_offset_of_dataSetColumn_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2824 = { sizeof (DataColumnMappingCollection_t2937617443), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2824[3] = 
{
	DataColumnMappingCollection_t2937617443::get_offset_of_list_1(),
	DataColumnMappingCollection_t2937617443::get_offset_of_sourceColumns_2(),
	DataColumnMappingCollection_t2937617443::get_offset_of_dataSetColumns_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2825 = { sizeof (DataContainer_t2006856459), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2825[3] = 
{
	DataContainer_t2006856459::get_offset_of_null_values_0(),
	DataContainer_t2006856459::get_offset_of__type_1(),
	DataContainer_t2006856459::get_offset_of__column_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2826 = { sizeof (BitDataContainer_t1546348838), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2826[1] = 
{
	BitDataContainer_t1546348838::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2827 = { sizeof (CharDataContainer_t2383464642), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2827[1] = 
{
	CharDataContainer_t2383464642::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2828 = { sizeof (ByteDataContainer_t60534209), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2828[1] = 
{
	ByteDataContainer_t60534209::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2829 = { sizeof (SByteDataContainer_t2456269047), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2829[1] = 
{
	SByteDataContainer_t2456269047::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2830 = { sizeof (Int16DataContainer_t978335990), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2830[1] = 
{
	Int16DataContainer_t978335990::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2831 = { sizeof (UInt16DataContainer_t1184311836), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2831[1] = 
{
	UInt16DataContainer_t1184311836::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2832 = { sizeof (Int32DataContainer_t3526613046), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2832[1] = 
{
	Int32DataContainer_t3526613046::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2833 = { sizeof (UInt32DataContainer_t728839428), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2833[1] = 
{
	UInt32DataContainer_t728839428::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2834 = { sizeof (Int64DataContainer_t627082857), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2834[1] = 
{
	Int64DataContainer_t627082857::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2835 = { sizeof (UInt64DataContainer_t2435745777), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2835[1] = 
{
	UInt64DataContainer_t2435745777::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2836 = { sizeof (SingleDataContainer_t3867236424), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2836[1] = 
{
	SingleDataContainer_t3867236424::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2837 = { sizeof (DoubleDataContainer_t2721391010), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2837[1] = 
{
	DoubleDataContainer_t2721391010::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2838 = { sizeof (ObjectDataContainer_t499755083), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2838[1] = 
{
	ObjectDataContainer_t499755083::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2839 = { sizeof (DateTimeDataContainer_t1361977752), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2840 = { sizeof (DecimalDataContainer_t2638538898), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2841 = { sizeof (StringDataContainer_t3727765096), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2842 = { sizeof (DataTableMapping_t1354097707), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2842[3] = 
{
	DataTableMapping_t1354097707::get_offset_of_sourceTable_1(),
	DataTableMapping_t1354097707::get_offset_of_dataSetTable_2(),
	DataTableMapping_t1354097707::get_offset_of_columnMappings_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2843 = { sizeof (DataTableMappingCollection_t2563982741), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2843[3] = 
{
	DataTableMappingCollection_t2563982741::get_offset_of_mappings_1(),
	DataTableMappingCollection_t2563982741::get_offset_of_sourceTables_2(),
	DataTableMappingCollection_t2563982741::get_offset_of_dataSetTables_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2844 = { sizeof (DbCommand_t1113193111), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2845 = { sizeof (DbConnection_t2130246978), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2846 = { sizeof (DbDataAdapter_t3185352091), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2846[4] = 
{
	DbDataAdapter_t3185352091::get_offset_of__selectCommand_5(),
	DbDataAdapter_t3185352091::get_offset_of__updateCommand_6(),
	DbDataAdapter_t3185352091::get_offset_of__deleteCommand_7(),
	DbDataAdapter_t3185352091::get_offset_of__insertCommand_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2847 = { sizeof (DbDataRecord_t1740184712), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2848 = { sizeof (DbParameter_t2455824679), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2849 = { sizeof (DbParameterCollection_t3288296468), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2850 = { sizeof (DbProviderFactory_t3699618837), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2851 = { sizeof (DbTypes_t2035465575), -1, sizeof(DbTypes_t2035465575_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2851[21] = 
{
	DbTypes_t2035465575_StaticFields::get_offset_of_TypeOfBoolean_0(),
	DbTypes_t2035465575_StaticFields::get_offset_of_TypeOfSByte_1(),
	DbTypes_t2035465575_StaticFields::get_offset_of_TypeOfChar_2(),
	DbTypes_t2035465575_StaticFields::get_offset_of_TypeOfInt16_3(),
	DbTypes_t2035465575_StaticFields::get_offset_of_TypeOfInt32_4(),
	DbTypes_t2035465575_StaticFields::get_offset_of_TypeOfInt64_5(),
	DbTypes_t2035465575_StaticFields::get_offset_of_TypeOfByte_6(),
	DbTypes_t2035465575_StaticFields::get_offset_of_TypeOfUInt16_7(),
	DbTypes_t2035465575_StaticFields::get_offset_of_TypeOfUInt32_8(),
	DbTypes_t2035465575_StaticFields::get_offset_of_TypeOfUInt64_9(),
	DbTypes_t2035465575_StaticFields::get_offset_of_TypeOfDouble_10(),
	DbTypes_t2035465575_StaticFields::get_offset_of_TypeOfSingle_11(),
	DbTypes_t2035465575_StaticFields::get_offset_of_TypeOfDecimal_12(),
	DbTypes_t2035465575_StaticFields::get_offset_of_TypeOfString_13(),
	DbTypes_t2035465575_StaticFields::get_offset_of_TypeOfDateTime_14(),
	DbTypes_t2035465575_StaticFields::get_offset_of_TypeOfObject_15(),
	DbTypes_t2035465575_StaticFields::get_offset_of_TypeOfGuid_16(),
	DbTypes_t2035465575_StaticFields::get_offset_of_TypeOfType_17(),
	DbTypes_t2035465575_StaticFields::get_offset_of_TypeOfByteArray_18(),
	DbTypes_t2035465575_StaticFields::get_offset_of_TypeOfFloat_19(),
	DbTypes_t2035465575_StaticFields::get_offset_of_TypeOfTimespan_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2852 = { sizeof (Index_t1844808025), -1, sizeof(Index_t1844808025_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2852[7] = 
{
	Index_t1844808025_StaticFields::get_offset_of_empty_0(),
	Index_t1844808025::get_offset_of__array_1(),
	Index_t1844808025::get_offset_of__size_2(),
	Index_t1844808025::get_offset_of__key_3(),
	Index_t1844808025::get_offset_of__refCount_4(),
	Index_t1844808025::get_offset_of_know_have_duplicates_5(),
	Index_t1844808025::get_offset_of_know_no_duplicates_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2853 = { sizeof (Key_t950964578), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2853[6] = 
{
	Key_t950964578::get_offset_of__table_0(),
	Key_t950964578::get_offset_of__columns_1(),
	Key_t950964578::get_offset_of__sortDirection_2(),
	Key_t950964578::get_offset_of__rowStateFilter_3(),
	Key_t950964578::get_offset_of__filter_4(),
	Key_t950964578::get_offset_of__tmpRow_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2854 = { sizeof (RecordCache_t60351824), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2854[5] = 
{
	RecordCache_t60351824::get_offset_of__records_0(),
	RecordCache_t60351824::get_offset_of__nextFreeIndex_1(),
	RecordCache_t60351824::get_offset_of__currentCapacity_2(),
	RecordCache_t60351824::get_offset_of__table_3(),
	RecordCache_t60351824::get_offset_of__rowsToRecords_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2855 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2856 = { sizeof (SqlBinary_t3877652915)+ sizeof (RuntimeObject), sizeof(SqlBinary_t3877652915_marshaled_pinvoke), sizeof(SqlBinary_t3877652915_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2856[3] = 
{
	SqlBinary_t3877652915::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBinary_t3877652915::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBinary_t3877652915_StaticFields::get_offset_of_Null_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2857 = { sizeof (SqlBoolean_t1715340265)+ sizeof (RuntimeObject), sizeof(SqlBoolean_t1715340265_marshaled_pinvoke), sizeof(SqlBoolean_t1715340265_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2857[7] = 
{
	SqlBoolean_t1715340265::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBoolean_t1715340265::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBoolean_t1715340265_StaticFields::get_offset_of_False_2(),
	SqlBoolean_t1715340265_StaticFields::get_offset_of_Null_3(),
	SqlBoolean_t1715340265_StaticFields::get_offset_of_One_4(),
	SqlBoolean_t1715340265_StaticFields::get_offset_of_True_5(),
	SqlBoolean_t1715340265_StaticFields::get_offset_of_Zero_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2858 = { sizeof (SqlByte_t1609773614)+ sizeof (RuntimeObject), sizeof(SqlByte_t1609773614_marshaled_pinvoke), sizeof(SqlByte_t1609773614_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2858[6] = 
{
	SqlByte_t1609773614::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlByte_t1609773614::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlByte_t1609773614_StaticFields::get_offset_of_MaxValue_2(),
	SqlByte_t1609773614_StaticFields::get_offset_of_MinValue_3(),
	SqlByte_t1609773614_StaticFields::get_offset_of_Null_4(),
	SqlByte_t1609773614_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2859 = { sizeof (SqlBytes_t227497019), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2859[3] = 
{
	SqlBytes_t227497019::get_offset_of_notNull_0(),
	SqlBytes_t227497019::get_offset_of_buffer_1(),
	SqlBytes_t227497019::get_offset_of_storage_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2860 = { sizeof (SqlChars_t2176796479), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2860[3] = 
{
	SqlChars_t2176796479::get_offset_of_notNull_0(),
	SqlChars_t2176796479::get_offset_of_buffer_1(),
	SqlChars_t2176796479::get_offset_of_storage_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2861 = { sizeof (SqlCompareOptions_t868486121)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2861[7] = 
{
	SqlCompareOptions_t868486121::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2862 = { sizeof (SqlDateTime_t2461458108)+ sizeof (RuntimeObject), -1, sizeof(SqlDateTime_t2461458108_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2862[9] = 
{
	SqlDateTime_t2461458108::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDateTime_t2461458108::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDateTime_t2461458108_StaticFields::get_offset_of_MaxValue_2(),
	SqlDateTime_t2461458108_StaticFields::get_offset_of_MinValue_3(),
	SqlDateTime_t2461458108_StaticFields::get_offset_of_Null_4(),
	SqlDateTime_t2461458108_StaticFields::get_offset_of_SQLTicksPerHour_5(),
	SqlDateTime_t2461458108_StaticFields::get_offset_of_SQLTicksPerMinute_6(),
	SqlDateTime_t2461458108_StaticFields::get_offset_of_SQLTicksPerSecond_7(),
	SqlDateTime_t2461458108_StaticFields::get_offset_of_zero_day_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2863 = { sizeof (SqlDecimal_t1644234316)+ sizeof (RuntimeObject), sizeof(SqlDecimal_t1644234316_marshaled_pinvoke), sizeof(SqlDecimal_t1644234316_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2863[11] = 
{
	SqlDecimal_t1644234316::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t1644234316::get_offset_of_precision_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t1644234316::get_offset_of_scale_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t1644234316::get_offset_of_positive_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t1644234316::get_offset_of_notNull_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t1644234316_StaticFields::get_offset_of_constantsDecadeInt32Factors_5(),
	SqlDecimal_t1644234316_StaticFields::get_offset_of_MaxPrecision_6(),
	SqlDecimal_t1644234316_StaticFields::get_offset_of_MaxScale_7(),
	SqlDecimal_t1644234316_StaticFields::get_offset_of_MaxValue_8(),
	SqlDecimal_t1644234316_StaticFields::get_offset_of_MinValue_9(),
	SqlDecimal_t1644234316_StaticFields::get_offset_of_Null_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2864 = { sizeof (SqlDouble_t3404648495)+ sizeof (RuntimeObject), sizeof(SqlDouble_t3404648495_marshaled_pinvoke), sizeof(SqlDouble_t3404648495_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2864[6] = 
{
	SqlDouble_t3404648495::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDouble_t3404648495::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDouble_t3404648495_StaticFields::get_offset_of_MaxValue_2(),
	SqlDouble_t3404648495_StaticFields::get_offset_of_MinValue_3(),
	SqlDouble_t3404648495_StaticFields::get_offset_of_Null_4(),
	SqlDouble_t3404648495_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2865 = { sizeof (SqlGuid_t3616210131)+ sizeof (RuntimeObject), sizeof(SqlGuid_t3616210131_marshaled_pinvoke), sizeof(SqlGuid_t3616210131_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2865[3] = 
{
	SqlGuid_t3616210131::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlGuid_t3616210131::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlGuid_t3616210131_StaticFields::get_offset_of_Null_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2866 = { sizeof (SqlInt16_t776755851)+ sizeof (RuntimeObject), sizeof(SqlInt16_t776755851_marshaled_pinvoke), sizeof(SqlInt16_t776755851_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2866[6] = 
{
	SqlInt16_t776755851::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt16_t776755851::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt16_t776755851_StaticFields::get_offset_of_MaxValue_2(),
	SqlInt16_t776755851_StaticFields::get_offset_of_MinValue_3(),
	SqlInt16_t776755851_StaticFields::get_offset_of_Null_4(),
	SqlInt16_t776755851_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2867 = { sizeof (SqlInt32_t2110269780)+ sizeof (RuntimeObject), sizeof(SqlInt32_t2110269780_marshaled_pinvoke), sizeof(SqlInt32_t2110269780_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2867[6] = 
{
	SqlInt32_t2110269780::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt32_t2110269780::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt32_t2110269780_StaticFields::get_offset_of_MaxValue_2(),
	SqlInt32_t2110269780_StaticFields::get_offset_of_MinValue_3(),
	SqlInt32_t2110269780_StaticFields::get_offset_of_Null_4(),
	SqlInt32_t2110269780_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2868 = { sizeof (SqlInt64_t4263657755)+ sizeof (RuntimeObject), sizeof(SqlInt64_t4263657755_marshaled_pinvoke), sizeof(SqlInt64_t4263657755_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2868[6] = 
{
	SqlInt64_t4263657755::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt64_t4263657755::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt64_t4263657755_StaticFields::get_offset_of_MaxValue_2(),
	SqlInt64_t4263657755_StaticFields::get_offset_of_MinValue_3(),
	SqlInt64_t4263657755_StaticFields::get_offset_of_Null_4(),
	SqlInt64_t4263657755_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2869 = { sizeof (SqlMoney_t3858564736)+ sizeof (RuntimeObject), sizeof(SqlMoney_t3858564736_marshaled_pinvoke), sizeof(SqlMoney_t3858564736_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2869[7] = 
{
	SqlMoney_t3858564736::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlMoney_t3858564736::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlMoney_t3858564736_StaticFields::get_offset_of_MaxValue_2(),
	SqlMoney_t3858564736_StaticFields::get_offset_of_MinValue_3(),
	SqlMoney_t3858564736_StaticFields::get_offset_of_Null_4(),
	SqlMoney_t3858564736_StaticFields::get_offset_of_Zero_5(),
	SqlMoney_t3858564736_StaticFields::get_offset_of_MoneyFormat_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2870 = { sizeof (SqlNullValueException_t3204970965), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2871 = { sizeof (SqlSingle_t3005666511)+ sizeof (RuntimeObject), sizeof(SqlSingle_t3005666511_marshaled_pinvoke), sizeof(SqlSingle_t3005666511_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2871[6] = 
{
	SqlSingle_t3005666511::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlSingle_t3005666511::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlSingle_t3005666511_StaticFields::get_offset_of_MaxValue_2(),
	SqlSingle_t3005666511_StaticFields::get_offset_of_MinValue_3(),
	SqlSingle_t3005666511_StaticFields::get_offset_of_Null_4(),
	SqlSingle_t3005666511_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2872 = { sizeof (SqlString_t2598366948)+ sizeof (RuntimeObject), sizeof(SqlString_t2598366948_marshaled_pinvoke), sizeof(SqlString_t2598366948_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2872[11] = 
{
	SqlString_t2598366948::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t2598366948::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t2598366948::get_offset_of_lcid_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t2598366948::get_offset_of_compareOptions_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t2598366948_StaticFields::get_offset_of_BinarySort_4(),
	SqlString_t2598366948_StaticFields::get_offset_of_IgnoreCase_5(),
	SqlString_t2598366948_StaticFields::get_offset_of_IgnoreKanaType_6(),
	SqlString_t2598366948_StaticFields::get_offset_of_IgnoreNonSpace_7(),
	SqlString_t2598366948_StaticFields::get_offset_of_IgnoreWidth_8(),
	SqlString_t2598366948_StaticFields::get_offset_of_Null_9(),
	SqlString_t2598366948_StaticFields::get_offset_of_DecimalFormat_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2873 = { sizeof (SqlTruncateException_t2468263608), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2874 = { sizeof (SqlTypeException_t1865864803), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2875 = { sizeof (SqlXml_t2917663315), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2875[2] = 
{
	SqlXml_t2917663315::get_offset_of_notNull_0(),
	SqlXml_t2917663315::get_offset_of_xmlValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2876 = { sizeof (StorageState_t1407897637)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2876[4] = 
{
	StorageState_t1407897637::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2877 = { sizeof (AcceptRejectRule_t31003465)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2877[3] = 
{
	AcceptRejectRule_t31003465::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2878 = { sizeof (ColumnTypeConverter_t1143210520), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2879 = { sizeof (CommandType_t1559110448)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2879[4] = 
{
	CommandType_t1559110448::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2880 = { sizeof (Constraint_t41516584), -1, sizeof(Constraint_t41516584_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2880[8] = 
{
	Constraint_t41516584_StaticFields::get_offset_of_beforeConstraintNameChange_0(),
	Constraint_t41516584::get_offset_of_events_1(),
	Constraint_t41516584::get_offset_of__constraintName_2(),
	Constraint_t41516584::get_offset_of__properties_3(),
	Constraint_t41516584::get_offset_of__index_4(),
	Constraint_t41516584::get_offset_of__constraintCollection_5(),
	Constraint_t41516584::get_offset_of_dataSet_6(),
	Constraint_t41516584::get_offset_of_initInProgress_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2881 = { sizeof (ConstraintCollection_t2199860084), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2881[3] = 
{
	ConstraintCollection_t2199860084::get_offset_of_table_2(),
	ConstraintCollection_t2199860084::get_offset_of__mostRecentConstraints_3(),
	ConstraintCollection_t2199860084::get_offset_of_CollectionChanged_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2882 = { sizeof (ConstraintConverter_t331651575), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2883 = { sizeof (ConstraintException_t1603394644), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2884 = { sizeof (DataCategoryAttribute_t4250712487), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2885 = { sizeof (DataColumn_t2121335505), -1, sizeof(DataColumn_t2121335505_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2885[23] = 
{
	DataColumn_t2121335505::get_offset_of__eventHandlers_3(),
	DataColumn_t2121335505_StaticFields::get_offset_of__propertyChangedKey_4(),
	DataColumn_t2121335505::get_offset_of__allowDBNull_5(),
	DataColumn_t2121335505::get_offset_of__autoIncrement_6(),
	DataColumn_t2121335505::get_offset_of__autoIncrementSeed_7(),
	DataColumn_t2121335505::get_offset_of__autoIncrementStep_8(),
	DataColumn_t2121335505::get_offset_of__nextAutoIncrementValue_9(),
	DataColumn_t2121335505::get_offset_of__caption_10(),
	DataColumn_t2121335505::get_offset_of__columnMapping_11(),
	DataColumn_t2121335505::get_offset_of__columnName_12(),
	DataColumn_t2121335505::get_offset_of__defaultValue_13(),
	DataColumn_t2121335505::get_offset_of__expression_14(),
	DataColumn_t2121335505::get_offset_of__compiledExpression_15(),
	DataColumn_t2121335505::get_offset_of__extendedProperties_16(),
	DataColumn_t2121335505::get_offset_of__maxLength_17(),
	DataColumn_t2121335505::get_offset_of__nameSpace_18(),
	DataColumn_t2121335505::get_offset_of__ordinal_19(),
	DataColumn_t2121335505::get_offset_of__prefix_20(),
	DataColumn_t2121335505::get_offset_of__readOnly_21(),
	DataColumn_t2121335505::get_offset_of__table_22(),
	DataColumn_t2121335505::get_offset_of__unique_23(),
	DataColumn_t2121335505::get_offset_of__dataContainer_24(),
	DataColumn_t2121335505::get_offset_of__datetimeMode_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2886 = { sizeof (DataColumnChangeEventArgs_t28755278), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2886[3] = 
{
	DataColumnChangeEventArgs_t28755278::get_offset_of__column_1(),
	DataColumnChangeEventArgs_t28755278::get_offset_of__row_2(),
	DataColumnChangeEventArgs_t28755278::get_offset_of__proposedValue_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2887 = { sizeof (Doublet_t2940289978), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2887[2] = 
{
	Doublet_t2940289978::get_offset_of_count_0(),
	Doublet_t2940289978::get_offset_of_columnNames_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2888 = { sizeof (DataColumnCollection_t399999455), -1, sizeof(DataColumnCollection_t399999455_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2888[10] = 
{
	DataColumnCollection_t399999455::get_offset_of_columnNameCount_2(),
	DataColumnCollection_t399999455::get_offset_of_columnFromName_3(),
	DataColumnCollection_t399999455::get_offset_of_autoIncrement_4(),
	DataColumnCollection_t399999455::get_offset_of_defaultColumnIndex_5(),
	DataColumnCollection_t399999455::get_offset_of_parentTable_6(),
	DataColumnCollection_t399999455::get_offset_of__mostRecentColumns_7(),
	DataColumnCollection_t399999455_StaticFields::get_offset_of_ColumnPrefix_8(),
	DataColumnCollection_t399999455_StaticFields::get_offset_of_TenColumns_9(),
	DataColumnCollection_t399999455::get_offset_of_CollectionChanged_10(),
	DataColumnCollection_t399999455::get_offset_of_CollectionMetaDataChanged_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2889 = { sizeof (DataColumnPropertyDescriptor_t2050940415), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2889[5] = 
{
	DataColumnPropertyDescriptor_t2050940415::get_offset_of_readOnly_6(),
	DataColumnPropertyDescriptor_t2050940415::get_offset_of_componentType_7(),
	DataColumnPropertyDescriptor_t2050940415::get_offset_of_propertyType_8(),
	DataColumnPropertyDescriptor_t2050940415::get_offset_of_browsable_9(),
	DataColumnPropertyDescriptor_t2050940415::get_offset_of_columnIndex_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2890 = { sizeof (DataException_t3690991188), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2891 = { sizeof (DataRelation_t3388391349), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2891[19] = 
{
	DataRelation_t3388391349::get_offset_of_dataSet_0(),
	DataRelation_t3388391349::get_offset_of_relationName_1(),
	DataRelation_t3388391349::get_offset_of_parentKeyConstraint_2(),
	DataRelation_t3388391349::get_offset_of_childKeyConstraint_3(),
	DataRelation_t3388391349::get_offset_of_parentColumns_4(),
	DataRelation_t3388391349::get_offset_of_childColumns_5(),
	DataRelation_t3388391349::get_offset_of_nested_6(),
	DataRelation_t3388391349::get_offset_of_createConstraints_7(),
	DataRelation_t3388391349::get_offset_of_initFinished_8(),
	DataRelation_t3388391349::get_offset_of_extendedProperties_9(),
	DataRelation_t3388391349::get_offset_of__relationName_10(),
	DataRelation_t3388391349::get_offset_of__parentTableName_11(),
	DataRelation_t3388391349::get_offset_of__childTableName_12(),
	DataRelation_t3388391349::get_offset_of__parentColumnNames_13(),
	DataRelation_t3388391349::get_offset_of__childColumnNames_14(),
	DataRelation_t3388391349::get_offset_of__nested_15(),
	DataRelation_t3388391349::get_offset_of_initInProgress_16(),
	DataRelation_t3388391349::get_offset_of__parentTableNameSpace_17(),
	DataRelation_t3388391349::get_offset_of__childTableNameSpace_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2892 = { sizeof (DataRelationCollection_t1576344460), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2892[3] = 
{
	DataRelationCollection_t1576344460::get_offset_of_inTransition_2(),
	DataRelationCollection_t1576344460::get_offset_of_index_3(),
	DataRelationCollection_t1576344460::get_offset_of_CollectionChanged_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2893 = { sizeof (DataSetRelationCollection_t1850480471), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2893[2] = 
{
	DataSetRelationCollection_t1850480471::get_offset_of_dataSet_5(),
	DataSetRelationCollection_t1850480471::get_offset_of_mostRecentRelations_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2894 = { sizeof (DataTableRelationCollection_t3678026790), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2894[1] = 
{
	DataTableRelationCollection_t3678026790::get_offset_of_dataTable_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2895 = { sizeof (DataRelationPropertyDescriptor_t4099356300), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2895[1] = 
{
	DataRelationPropertyDescriptor_t4099356300::get_offset_of__relation_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2896 = { sizeof (DataRow_t409901744), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2896[13] = 
{
	DataRow_t409901744::get_offset_of__table_0(),
	DataRow_t409901744::get_offset_of__original_1(),
	DataRow_t409901744::get_offset_of__current_2(),
	DataRow_t409901744::get_offset_of__proposed_3(),
	DataRow_t409901744::get_offset_of__columnErrors_4(),
	DataRow_t409901744::get_offset_of_rowError_5(),
	DataRow_t409901744::get_offset_of_xmlRowID_6(),
	DataRow_t409901744::get_offset_of__nullConstraintViolation_7(),
	DataRow_t409901744::get_offset_of__nullConstraintMessage_8(),
	DataRow_t409901744::get_offset_of__inChangingEvent_9(),
	DataRow_t409901744::get_offset_of__rowId_10(),
	DataRow_t409901744::get_offset_of__rowChanged_11(),
	DataRow_t409901744::get_offset_of__inExpressionEvaluation_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2897 = { sizeof (DataRowAction_t3357339962)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2897[9] = 
{
	DataRowAction_t3357339962::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2898 = { sizeof (DataRowBuilder_t201539747), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2898[2] = 
{
	DataRowBuilder_t201539747::get_offset_of_table_0(),
	DataRowBuilder_t201539747::get_offset_of__rowId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2899 = { sizeof (DataRowChangeEventArgs_t1226132008), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2899[2] = 
{
	DataRowChangeEventArgs_t1226132008::get_offset_of_row_1(),
	DataRowChangeEventArgs_t1226132008::get_offset_of_action_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
