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
struct AttributeU5BU5D_t2034662870;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t2011369259;
// System.Collections.IComparer
struct IComparer_t2834187276;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1427346375;
// System.Data.PropertyCollection
struct PropertyCollection_t1559775645;
// System.Data.Common.Index
struct Index_t3653814461;
// System.Data.ConstraintCollection
struct ConstraintCollection_t4288629486;
// System.Data.DataSet
struct DataSet_t918332145;
// System.Type
struct Type_t;
// System.Int32[]
struct Int32U5BU5D_t3325461767;
// System.Data.Common.Key
struct Key_t2805120048;
// System.Data.DataTable
struct DataTable_t4118261672;
// System.Collections.Stack
struct Stack_t2081607145;
// System.Data.DataRow[]
struct DataRowU5BU5D_t2502479712;
// System.Collections.BitArray
struct BitArray_t637848917;
// System.Data.DataColumn
struct DataColumn_t866196881;
// System.Collections.ArrayList
struct ArrayList_t844188058;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2872288717;
// System.Collections.IDictionary
struct IDictionary_t2958216421;
// System.Object[]
struct ObjectU5BU5D_t2392277051;
// System.Char[]
struct CharU5BU5D_t1565992178;
// System.IntPtr[]
struct IntPtrU5BU5D_t3659589827;
// System.Data.UniqueConstraint
struct UniqueConstraint_t1303744136;
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t2927031658;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t3676572940;
// System.String[]
struct StringU5BU5D_t3162382152;
// System.ComponentModel.ISite
struct ISite_t1384312042;
// System.UInt32[]
struct UInt32U5BU5D_t1190422219;
// System.Data.DataRow
struct DataRow_t475206349;
// System.Collections.Hashtable
struct Hashtable_t2604207785;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t1895388503;
// System.Data.DataRelation
struct DataRelation_t934786094;
// System.Byte[]
struct ByteU5BU5D_t2896786162;
// System.Data.Constraint[]
struct ConstraintU5BU5D_t3140182012;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t795161913;
// System.ComponentModel.TypeConverter
struct TypeConverter_t2966684696;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_t1826438136;
// System.Data.Common.DataColumnMappingCollection
struct DataColumnMappingCollection_t1716282864;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2194148873;
// System.SByte[]
struct SByteU5BU5D_t3696374397;
// System.Int16[]
struct Int16U5BU5D_t662621095;
// System.Double[]
struct DoubleU5BU5D_t3232068027;
// System.UInt16[]
struct UInt16U5BU5D_t4089535718;
// System.Single[]
struct SingleU5BU5D_t437366610;
// System.Int64[]
struct Int64U5BU5D_t959283575;
// System.UInt64[]
struct UInt64U5BU5D_t2491712279;
// System.Data.DataRelation[]
struct DataRelationU5BU5D_t3877125979;
// System.Collections.IList
struct IList_t1814833016;
// System.Data.Common.DataTableMappingCollection
struct DataTableMappingCollection_t4025772068;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t593827960;
// System.Data.IDbCommand
struct IDbCommand_t49811410;
// System.ComponentModel.ListSortDirection[]
struct ListSortDirectionU5BU5D_t2184913681;
// System.Data.Common.DataContainer
struct DataContainer_t2560448845;




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
#ifndef MEMBERDESCRIPTOR_T3689707769_H
#define MEMBERDESCRIPTOR_T3689707769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t3689707769  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attrs
	AttributeU5BU5D_t2034662870* ___attrs_1;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attrCollection
	AttributeCollection_t2011369259 * ___attrCollection_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3689707769, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3689707769, ___attrs_1)); }
	inline AttributeU5BU5D_t2034662870* get_attrs_1() const { return ___attrs_1; }
	inline AttributeU5BU5D_t2034662870** get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(AttributeU5BU5D_t2034662870* value)
	{
		___attrs_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrs_1), value);
	}

	inline static int32_t get_offset_of_attrCollection_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3689707769, ___attrCollection_2)); }
	inline AttributeCollection_t2011369259 * get_attrCollection_2() const { return ___attrCollection_2; }
	inline AttributeCollection_t2011369259 ** get_address_of_attrCollection_2() { return &___attrCollection_2; }
	inline void set_attrCollection_2(AttributeCollection_t2011369259 * value)
	{
		___attrCollection_2 = value;
		Il2CppCodeGenWriteBarrier((&___attrCollection_2), value);
	}
};

struct MemberDescriptor_t3689707769_StaticFields
{
public:
	// System.Collections.IComparer System.ComponentModel.MemberDescriptor::default_comparer
	RuntimeObject* ___default_comparer_3;

public:
	inline static int32_t get_offset_of_default_comparer_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3689707769_StaticFields, ___default_comparer_3)); }
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
#endif // MEMBERDESCRIPTOR_T3689707769_H
#ifndef CONSTRAINT_T759394657_H
#define CONSTRAINT_T759394657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Constraint
struct  Constraint_t759394657  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.Data.Constraint::events
	EventHandlerList_t1427346375 * ___events_1;
	// System.String System.Data.Constraint::_constraintName
	String_t* ____constraintName_2;
	// System.Data.PropertyCollection System.Data.Constraint::_properties
	PropertyCollection_t1559775645 * ____properties_3;
	// System.Data.Common.Index System.Data.Constraint::_index
	Index_t3653814461 * ____index_4;
	// System.Data.ConstraintCollection System.Data.Constraint::_constraintCollection
	ConstraintCollection_t4288629486 * ____constraintCollection_5;
	// System.Data.DataSet System.Data.Constraint::dataSet
	DataSet_t918332145 * ___dataSet_6;
	// System.Boolean System.Data.Constraint::initInProgress
	bool ___initInProgress_7;

public:
	inline static int32_t get_offset_of_events_1() { return static_cast<int32_t>(offsetof(Constraint_t759394657, ___events_1)); }
	inline EventHandlerList_t1427346375 * get_events_1() const { return ___events_1; }
	inline EventHandlerList_t1427346375 ** get_address_of_events_1() { return &___events_1; }
	inline void set_events_1(EventHandlerList_t1427346375 * value)
	{
		___events_1 = value;
		Il2CppCodeGenWriteBarrier((&___events_1), value);
	}

	inline static int32_t get_offset_of__constraintName_2() { return static_cast<int32_t>(offsetof(Constraint_t759394657, ____constraintName_2)); }
	inline String_t* get__constraintName_2() const { return ____constraintName_2; }
	inline String_t** get_address_of__constraintName_2() { return &____constraintName_2; }
	inline void set__constraintName_2(String_t* value)
	{
		____constraintName_2 = value;
		Il2CppCodeGenWriteBarrier((&____constraintName_2), value);
	}

	inline static int32_t get_offset_of__properties_3() { return static_cast<int32_t>(offsetof(Constraint_t759394657, ____properties_3)); }
	inline PropertyCollection_t1559775645 * get__properties_3() const { return ____properties_3; }
	inline PropertyCollection_t1559775645 ** get_address_of__properties_3() { return &____properties_3; }
	inline void set__properties_3(PropertyCollection_t1559775645 * value)
	{
		____properties_3 = value;
		Il2CppCodeGenWriteBarrier((&____properties_3), value);
	}

	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(Constraint_t759394657, ____index_4)); }
	inline Index_t3653814461 * get__index_4() const { return ____index_4; }
	inline Index_t3653814461 ** get_address_of__index_4() { return &____index_4; }
	inline void set__index_4(Index_t3653814461 * value)
	{
		____index_4 = value;
		Il2CppCodeGenWriteBarrier((&____index_4), value);
	}

	inline static int32_t get_offset_of__constraintCollection_5() { return static_cast<int32_t>(offsetof(Constraint_t759394657, ____constraintCollection_5)); }
	inline ConstraintCollection_t4288629486 * get__constraintCollection_5() const { return ____constraintCollection_5; }
	inline ConstraintCollection_t4288629486 ** get_address_of__constraintCollection_5() { return &____constraintCollection_5; }
	inline void set__constraintCollection_5(ConstraintCollection_t4288629486 * value)
	{
		____constraintCollection_5 = value;
		Il2CppCodeGenWriteBarrier((&____constraintCollection_5), value);
	}

	inline static int32_t get_offset_of_dataSet_6() { return static_cast<int32_t>(offsetof(Constraint_t759394657, ___dataSet_6)); }
	inline DataSet_t918332145 * get_dataSet_6() const { return ___dataSet_6; }
	inline DataSet_t918332145 ** get_address_of_dataSet_6() { return &___dataSet_6; }
	inline void set_dataSet_6(DataSet_t918332145 * value)
	{
		___dataSet_6 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_6), value);
	}

	inline static int32_t get_offset_of_initInProgress_7() { return static_cast<int32_t>(offsetof(Constraint_t759394657, ___initInProgress_7)); }
	inline bool get_initInProgress_7() const { return ___initInProgress_7; }
	inline bool* get_address_of_initInProgress_7() { return &___initInProgress_7; }
	inline void set_initInProgress_7(bool value)
	{
		___initInProgress_7 = value;
	}
};

struct Constraint_t759394657_StaticFields
{
public:
	// System.Object System.Data.Constraint::beforeConstraintNameChange
	RuntimeObject * ___beforeConstraintNameChange_0;

public:
	inline static int32_t get_offset_of_beforeConstraintNameChange_0() { return static_cast<int32_t>(offsetof(Constraint_t759394657_StaticFields, ___beforeConstraintNameChange_0)); }
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
#endif // CONSTRAINT_T759394657_H
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
#ifndef DBDATARECORD_T1947477521_H
#define DBDATARECORD_T1947477521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbDataRecord
struct  DbDataRecord_t1947477521  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBDATARECORD_T1947477521_H
#ifndef DBPROVIDERFACTORY_T3621712479_H
#define DBPROVIDERFACTORY_T3621712479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbProviderFactory
struct  DbProviderFactory_t3621712479  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPROVIDERFACTORY_T3621712479_H
#ifndef DBTYPES_T3970190259_H
#define DBTYPES_T3970190259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbTypes
struct  DbTypes_t3970190259  : public RuntimeObject
{
public:

public:
};

struct DbTypes_t3970190259_StaticFields
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
	inline static int32_t get_offset_of_TypeOfBoolean_0() { return static_cast<int32_t>(offsetof(DbTypes_t3970190259_StaticFields, ___TypeOfBoolean_0)); }
	inline Type_t * get_TypeOfBoolean_0() const { return ___TypeOfBoolean_0; }
	inline Type_t ** get_address_of_TypeOfBoolean_0() { return &___TypeOfBoolean_0; }
	inline void set_TypeOfBoolean_0(Type_t * value)
	{
		___TypeOfBoolean_0 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfBoolean_0), value);
	}

	inline static int32_t get_offset_of_TypeOfSByte_1() { return static_cast<int32_t>(offsetof(DbTypes_t3970190259_StaticFields, ___TypeOfSByte_1)); }
	inline Type_t * get_TypeOfSByte_1() const { return ___TypeOfSByte_1; }
	inline Type_t ** get_address_of_TypeOfSByte_1() { return &___TypeOfSByte_1; }
	inline void set_TypeOfSByte_1(Type_t * value)
	{
		___TypeOfSByte_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfSByte_1), value);
	}

	inline static int32_t get_offset_of_TypeOfChar_2() { return static_cast<int32_t>(offsetof(DbTypes_t3970190259_StaticFields, ___TypeOfChar_2)); }
	inline Type_t * get_TypeOfChar_2() const { return ___TypeOfChar_2; }
	inline Type_t ** get_address_of_TypeOfChar_2() { return &___TypeOfChar_2; }
	inline void set_TypeOfChar_2(Type_t * value)
	{
		___TypeOfChar_2 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfChar_2), value);
	}

	inline static int32_t get_offset_of_TypeOfInt16_3() { return static_cast<int32_t>(offsetof(DbTypes_t3970190259_StaticFields, ___TypeOfInt16_3)); }
	inline Type_t * get_TypeOfInt16_3() const { return ___TypeOfInt16_3; }
	inline Type_t ** get_address_of_TypeOfInt16_3() { return &___TypeOfInt16_3; }
	inline void set_TypeOfInt16_3(Type_t * value)
	{
		___TypeOfInt16_3 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfInt16_3), value);
	}

	inline static int32_t get_offset_of_TypeOfInt32_4() { return static_cast<int32_t>(offsetof(DbTypes_t3970190259_StaticFields, ___TypeOfInt32_4)); }
	inline Type_t * get_TypeOfInt32_4() const { return ___TypeOfInt32_4; }
	inline Type_t ** get_address_of_TypeOfInt32_4() { return &___TypeOfInt32_4; }
	inline void set_TypeOfInt32_4(Type_t * value)
	{
		___TypeOfInt32_4 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfInt32_4), value);
	}

	inline static int32_t get_offset_of_TypeOfInt64_5() { return static_cast<int32_t>(offsetof(DbTypes_t3970190259_StaticFields, ___TypeOfInt64_5)); }
	inline Type_t * get_TypeOfInt64_5() const { return ___TypeOfInt64_5; }
	inline Type_t ** get_address_of_TypeOfInt64_5() { return &___TypeOfInt64_5; }
	inline void set_TypeOfInt64_5(Type_t * value)
	{
		___TypeOfInt64_5 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfInt64_5), value);
	}

	inline static int32_t get_offset_of_TypeOfByte_6() { return static_cast<int32_t>(offsetof(DbTypes_t3970190259_StaticFields, ___TypeOfByte_6)); }
	inline Type_t * get_TypeOfByte_6() const { return ___TypeOfByte_6; }
	inline Type_t ** get_address_of_TypeOfByte_6() { return &___TypeOfByte_6; }
	inline void set_TypeOfByte_6(Type_t * value)
	{
		___TypeOfByte_6 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfByte_6), value);
	}

	inline static int32_t get_offset_of_TypeOfUInt16_7() { return static_cast<int32_t>(offsetof(DbTypes_t3970190259_StaticFields, ___TypeOfUInt16_7)); }
	inline Type_t * get_TypeOfUInt16_7() const { return ___TypeOfUInt16_7; }
	inline Type_t ** get_address_of_TypeOfUInt16_7() { return &___TypeOfUInt16_7; }
	inline void set_TypeOfUInt16_7(Type_t * value)
	{
		___TypeOfUInt16_7 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfUInt16_7), value);
	}

	inline static int32_t get_offset_of_TypeOfUInt32_8() { return static_cast<int32_t>(offsetof(DbTypes_t3970190259_StaticFields, ___TypeOfUInt32_8)); }
	inline Type_t * get_TypeOfUInt32_8() const { return ___TypeOfUInt32_8; }
	inline Type_t ** get_address_of_TypeOfUInt32_8() { return &___TypeOfUInt32_8; }
	inline void set_TypeOfUInt32_8(Type_t * value)
	{
		___TypeOfUInt32_8 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfUInt32_8), value);
	}

	inline static int32_t get_offset_of_TypeOfUInt64_9() { return static_cast<int32_t>(offsetof(DbTypes_t3970190259_StaticFields, ___TypeOfUInt64_9)); }
	inline Type_t * get_TypeOfUInt64_9() const { return ___TypeOfUInt64_9; }
	inline Type_t ** get_address_of_TypeOfUInt64_9() { return &___TypeOfUInt64_9; }
	inline void set_TypeOfUInt64_9(Type_t * value)
	{
		___TypeOfUInt64_9 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfUInt64_9), value);
	}

	inline static int32_t get_offset_of_TypeOfDouble_10() { return static_cast<int32_t>(offsetof(DbTypes_t3970190259_StaticFields, ___TypeOfDouble_10)); }
	inline Type_t * get_TypeOfDouble_10() const { return ___TypeOfDouble_10; }
	inline Type_t ** get_address_of_TypeOfDouble_10() { return &___TypeOfDouble_10; }
	inline void set_TypeOfDouble_10(Type_t * value)
	{
		___TypeOfDouble_10 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfDouble_10), value);
	}

	inline static int32_t get_offset_of_TypeOfSingle_11() { return static_cast<int32_t>(offsetof(DbTypes_t3970190259_StaticFields, ___TypeOfSingle_11)); }
	inline Type_t * get_TypeOfSingle_11() const { return ___TypeOfSingle_11; }
	inline Type_t ** get_address_of_TypeOfSingle_11() { return &___TypeOfSingle_11; }
	inline void set_TypeOfSingle_11(Type_t * value)
	{
		___TypeOfSingle_11 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfSingle_11), value);
	}

	inline static int32_t get_offset_of_TypeOfDecimal_12() { return static_cast<int32_t>(offsetof(DbTypes_t3970190259_StaticFields, ___TypeOfDecimal_12)); }
	inline Type_t * get_TypeOfDecimal_12() const { return ___TypeOfDecimal_12; }
	inline Type_t ** get_address_of_TypeOfDecimal_12() { return &___TypeOfDecimal_12; }
	inline void set_TypeOfDecimal_12(Type_t * value)
	{
		___TypeOfDecimal_12 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfDecimal_12), value);
	}

	inline static int32_t get_offset_of_TypeOfString_13() { return static_cast<int32_t>(offsetof(DbTypes_t3970190259_StaticFields, ___TypeOfString_13)); }
	inline Type_t * get_TypeOfString_13() const { return ___TypeOfString_13; }
	inline Type_t ** get_address_of_TypeOfString_13() { return &___TypeOfString_13; }
	inline void set_TypeOfString_13(Type_t * value)
	{
		___TypeOfString_13 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfString_13), value);
	}

	inline static int32_t get_offset_of_TypeOfDateTime_14() { return static_cast<int32_t>(offsetof(DbTypes_t3970190259_StaticFields, ___TypeOfDateTime_14)); }
	inline Type_t * get_TypeOfDateTime_14() const { return ___TypeOfDateTime_14; }
	inline Type_t ** get_address_of_TypeOfDateTime_14() { return &___TypeOfDateTime_14; }
	inline void set_TypeOfDateTime_14(Type_t * value)
	{
		___TypeOfDateTime_14 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfDateTime_14), value);
	}

	inline static int32_t get_offset_of_TypeOfObject_15() { return static_cast<int32_t>(offsetof(DbTypes_t3970190259_StaticFields, ___TypeOfObject_15)); }
	inline Type_t * get_TypeOfObject_15() const { return ___TypeOfObject_15; }
	inline Type_t ** get_address_of_TypeOfObject_15() { return &___TypeOfObject_15; }
	inline void set_TypeOfObject_15(Type_t * value)
	{
		___TypeOfObject_15 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfObject_15), value);
	}

	inline static int32_t get_offset_of_TypeOfGuid_16() { return static_cast<int32_t>(offsetof(DbTypes_t3970190259_StaticFields, ___TypeOfGuid_16)); }
	inline Type_t * get_TypeOfGuid_16() const { return ___TypeOfGuid_16; }
	inline Type_t ** get_address_of_TypeOfGuid_16() { return &___TypeOfGuid_16; }
	inline void set_TypeOfGuid_16(Type_t * value)
	{
		___TypeOfGuid_16 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfGuid_16), value);
	}

	inline static int32_t get_offset_of_TypeOfType_17() { return static_cast<int32_t>(offsetof(DbTypes_t3970190259_StaticFields, ___TypeOfType_17)); }
	inline Type_t * get_TypeOfType_17() const { return ___TypeOfType_17; }
	inline Type_t ** get_address_of_TypeOfType_17() { return &___TypeOfType_17; }
	inline void set_TypeOfType_17(Type_t * value)
	{
		___TypeOfType_17 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfType_17), value);
	}

	inline static int32_t get_offset_of_TypeOfByteArray_18() { return static_cast<int32_t>(offsetof(DbTypes_t3970190259_StaticFields, ___TypeOfByteArray_18)); }
	inline Type_t * get_TypeOfByteArray_18() const { return ___TypeOfByteArray_18; }
	inline Type_t ** get_address_of_TypeOfByteArray_18() { return &___TypeOfByteArray_18; }
	inline void set_TypeOfByteArray_18(Type_t * value)
	{
		___TypeOfByteArray_18 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfByteArray_18), value);
	}

	inline static int32_t get_offset_of_TypeOfFloat_19() { return static_cast<int32_t>(offsetof(DbTypes_t3970190259_StaticFields, ___TypeOfFloat_19)); }
	inline Type_t * get_TypeOfFloat_19() const { return ___TypeOfFloat_19; }
	inline Type_t ** get_address_of_TypeOfFloat_19() { return &___TypeOfFloat_19; }
	inline void set_TypeOfFloat_19(Type_t * value)
	{
		___TypeOfFloat_19 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfFloat_19), value);
	}

	inline static int32_t get_offset_of_TypeOfTimespan_20() { return static_cast<int32_t>(offsetof(DbTypes_t3970190259_StaticFields, ___TypeOfTimespan_20)); }
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
#endif // DBTYPES_T3970190259_H
#ifndef INDEX_T3653814461_H
#define INDEX_T3653814461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Index
struct  Index_t3653814461  : public RuntimeObject
{
public:
	// System.Int32[] System.Data.Common.Index::_array
	Int32U5BU5D_t3325461767* ____array_1;
	// System.Int32 System.Data.Common.Index::_size
	int32_t ____size_2;
	// System.Data.Common.Key System.Data.Common.Index::_key
	Key_t2805120048 * ____key_3;
	// System.Int32 System.Data.Common.Index::_refCount
	int32_t ____refCount_4;
	// System.Boolean System.Data.Common.Index::know_have_duplicates
	bool ___know_have_duplicates_5;
	// System.Boolean System.Data.Common.Index::know_no_duplicates
	bool ___know_no_duplicates_6;

public:
	inline static int32_t get_offset_of__array_1() { return static_cast<int32_t>(offsetof(Index_t3653814461, ____array_1)); }
	inline Int32U5BU5D_t3325461767* get__array_1() const { return ____array_1; }
	inline Int32U5BU5D_t3325461767** get_address_of__array_1() { return &____array_1; }
	inline void set__array_1(Int32U5BU5D_t3325461767* value)
	{
		____array_1 = value;
		Il2CppCodeGenWriteBarrier((&____array_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(Index_t3653814461, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__key_3() { return static_cast<int32_t>(offsetof(Index_t3653814461, ____key_3)); }
	inline Key_t2805120048 * get__key_3() const { return ____key_3; }
	inline Key_t2805120048 ** get_address_of__key_3() { return &____key_3; }
	inline void set__key_3(Key_t2805120048 * value)
	{
		____key_3 = value;
		Il2CppCodeGenWriteBarrier((&____key_3), value);
	}

	inline static int32_t get_offset_of__refCount_4() { return static_cast<int32_t>(offsetof(Index_t3653814461, ____refCount_4)); }
	inline int32_t get__refCount_4() const { return ____refCount_4; }
	inline int32_t* get_address_of__refCount_4() { return &____refCount_4; }
	inline void set__refCount_4(int32_t value)
	{
		____refCount_4 = value;
	}

	inline static int32_t get_offset_of_know_have_duplicates_5() { return static_cast<int32_t>(offsetof(Index_t3653814461, ___know_have_duplicates_5)); }
	inline bool get_know_have_duplicates_5() const { return ___know_have_duplicates_5; }
	inline bool* get_address_of_know_have_duplicates_5() { return &___know_have_duplicates_5; }
	inline void set_know_have_duplicates_5(bool value)
	{
		___know_have_duplicates_5 = value;
	}

	inline static int32_t get_offset_of_know_no_duplicates_6() { return static_cast<int32_t>(offsetof(Index_t3653814461, ___know_no_duplicates_6)); }
	inline bool get_know_no_duplicates_6() const { return ___know_no_duplicates_6; }
	inline bool* get_address_of_know_no_duplicates_6() { return &___know_no_duplicates_6; }
	inline void set_know_no_duplicates_6(bool value)
	{
		___know_no_duplicates_6 = value;
	}
};

struct Index_t3653814461_StaticFields
{
public:
	// System.Int32[] System.Data.Common.Index::empty
	Int32U5BU5D_t3325461767* ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(Index_t3653814461_StaticFields, ___empty_0)); }
	inline Int32U5BU5D_t3325461767* get_empty_0() const { return ___empty_0; }
	inline Int32U5BU5D_t3325461767** get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(Int32U5BU5D_t3325461767* value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEX_T3653814461_H
#ifndef DATAROWBUILDER_T693998000_H
#define DATAROWBUILDER_T693998000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowBuilder
struct  DataRowBuilder_t693998000  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.DataRowBuilder::table
	DataTable_t4118261672 * ___table_0;
	// System.Int32 System.Data.DataRowBuilder::_rowId
	int32_t ____rowId_1;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(DataRowBuilder_t693998000, ___table_0)); }
	inline DataTable_t4118261672 * get_table_0() const { return ___table_0; }
	inline DataTable_t4118261672 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(DataTable_t4118261672 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((&___table_0), value);
	}

	inline static int32_t get_offset_of__rowId_1() { return static_cast<int32_t>(offsetof(DataRowBuilder_t693998000, ____rowId_1)); }
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
#endif // DATAROWBUILDER_T693998000_H
#ifndef RECORDCACHE_T2411474328_H
#define RECORDCACHE_T2411474328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.RecordCache
struct  RecordCache_t2411474328  : public RuntimeObject
{
public:
	// System.Collections.Stack System.Data.Common.RecordCache::_records
	Stack_t2081607145 * ____records_0;
	// System.Int32 System.Data.Common.RecordCache::_nextFreeIndex
	int32_t ____nextFreeIndex_1;
	// System.Int32 System.Data.Common.RecordCache::_currentCapacity
	int32_t ____currentCapacity_2;
	// System.Data.DataTable System.Data.Common.RecordCache::_table
	DataTable_t4118261672 * ____table_3;
	// System.Data.DataRow[] System.Data.Common.RecordCache::_rowsToRecords
	DataRowU5BU5D_t2502479712* ____rowsToRecords_4;

public:
	inline static int32_t get_offset_of__records_0() { return static_cast<int32_t>(offsetof(RecordCache_t2411474328, ____records_0)); }
	inline Stack_t2081607145 * get__records_0() const { return ____records_0; }
	inline Stack_t2081607145 ** get_address_of__records_0() { return &____records_0; }
	inline void set__records_0(Stack_t2081607145 * value)
	{
		____records_0 = value;
		Il2CppCodeGenWriteBarrier((&____records_0), value);
	}

	inline static int32_t get_offset_of__nextFreeIndex_1() { return static_cast<int32_t>(offsetof(RecordCache_t2411474328, ____nextFreeIndex_1)); }
	inline int32_t get__nextFreeIndex_1() const { return ____nextFreeIndex_1; }
	inline int32_t* get_address_of__nextFreeIndex_1() { return &____nextFreeIndex_1; }
	inline void set__nextFreeIndex_1(int32_t value)
	{
		____nextFreeIndex_1 = value;
	}

	inline static int32_t get_offset_of__currentCapacity_2() { return static_cast<int32_t>(offsetof(RecordCache_t2411474328, ____currentCapacity_2)); }
	inline int32_t get__currentCapacity_2() const { return ____currentCapacity_2; }
	inline int32_t* get_address_of__currentCapacity_2() { return &____currentCapacity_2; }
	inline void set__currentCapacity_2(int32_t value)
	{
		____currentCapacity_2 = value;
	}

	inline static int32_t get_offset_of__table_3() { return static_cast<int32_t>(offsetof(RecordCache_t2411474328, ____table_3)); }
	inline DataTable_t4118261672 * get__table_3() const { return ____table_3; }
	inline DataTable_t4118261672 ** get_address_of__table_3() { return &____table_3; }
	inline void set__table_3(DataTable_t4118261672 * value)
	{
		____table_3 = value;
		Il2CppCodeGenWriteBarrier((&____table_3), value);
	}

	inline static int32_t get_offset_of__rowsToRecords_4() { return static_cast<int32_t>(offsetof(RecordCache_t2411474328, ____rowsToRecords_4)); }
	inline DataRowU5BU5D_t2502479712* get__rowsToRecords_4() const { return ____rowsToRecords_4; }
	inline DataRowU5BU5D_t2502479712** get_address_of__rowsToRecords_4() { return &____rowsToRecords_4; }
	inline void set__rowsToRecords_4(DataRowU5BU5D_t2502479712* value)
	{
		____rowsToRecords_4 = value;
		Il2CppCodeGenWriteBarrier((&____rowsToRecords_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECORDCACHE_T2411474328_H
#ifndef DATACONTAINER_T2560448845_H
#define DATACONTAINER_T2560448845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataContainer
struct  DataContainer_t2560448845  : public RuntimeObject
{
public:
	// System.Collections.BitArray System.Data.Common.DataContainer::null_values
	BitArray_t637848917 * ___null_values_0;
	// System.Type System.Data.Common.DataContainer::_type
	Type_t * ____type_1;
	// System.Data.DataColumn System.Data.Common.DataContainer::_column
	DataColumn_t866196881 * ____column_2;

public:
	inline static int32_t get_offset_of_null_values_0() { return static_cast<int32_t>(offsetof(DataContainer_t2560448845, ___null_values_0)); }
	inline BitArray_t637848917 * get_null_values_0() const { return ___null_values_0; }
	inline BitArray_t637848917 ** get_address_of_null_values_0() { return &___null_values_0; }
	inline void set_null_values_0(BitArray_t637848917 * value)
	{
		___null_values_0 = value;
		Il2CppCodeGenWriteBarrier((&___null_values_0), value);
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(DataContainer_t2560448845, ____type_1)); }
	inline Type_t * get__type_1() const { return ____type_1; }
	inline Type_t ** get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(Type_t * value)
	{
		____type_1 = value;
		Il2CppCodeGenWriteBarrier((&____type_1), value);
	}

	inline static int32_t get_offset_of__column_2() { return static_cast<int32_t>(offsetof(DataContainer_t2560448845, ____column_2)); }
	inline DataColumn_t866196881 * get__column_2() const { return ____column_2; }
	inline DataColumn_t866196881 ** get_address_of__column_2() { return &____column_2; }
	inline void set__column_2(DataColumn_t866196881 * value)
	{
		____column_2 = value;
		Il2CppCodeGenWriteBarrier((&____column_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACONTAINER_T2560448845_H
#ifndef DATAROW_T475206349_H
#define DATAROW_T475206349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRow
struct  DataRow_t475206349  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.DataRow::_table
	DataTable_t4118261672 * ____table_0;
	// System.Int32 System.Data.DataRow::_original
	int32_t ____original_1;
	// System.Int32 System.Data.DataRow::_current
	int32_t ____current_2;
	// System.Int32 System.Data.DataRow::_proposed
	int32_t ____proposed_3;
	// System.Collections.ArrayList System.Data.DataRow::_columnErrors
	ArrayList_t844188058 * ____columnErrors_4;
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
	inline static int32_t get_offset_of__table_0() { return static_cast<int32_t>(offsetof(DataRow_t475206349, ____table_0)); }
	inline DataTable_t4118261672 * get__table_0() const { return ____table_0; }
	inline DataTable_t4118261672 ** get_address_of__table_0() { return &____table_0; }
	inline void set__table_0(DataTable_t4118261672 * value)
	{
		____table_0 = value;
		Il2CppCodeGenWriteBarrier((&____table_0), value);
	}

	inline static int32_t get_offset_of__original_1() { return static_cast<int32_t>(offsetof(DataRow_t475206349, ____original_1)); }
	inline int32_t get__original_1() const { return ____original_1; }
	inline int32_t* get_address_of__original_1() { return &____original_1; }
	inline void set__original_1(int32_t value)
	{
		____original_1 = value;
	}

	inline static int32_t get_offset_of__current_2() { return static_cast<int32_t>(offsetof(DataRow_t475206349, ____current_2)); }
	inline int32_t get__current_2() const { return ____current_2; }
	inline int32_t* get_address_of__current_2() { return &____current_2; }
	inline void set__current_2(int32_t value)
	{
		____current_2 = value;
	}

	inline static int32_t get_offset_of__proposed_3() { return static_cast<int32_t>(offsetof(DataRow_t475206349, ____proposed_3)); }
	inline int32_t get__proposed_3() const { return ____proposed_3; }
	inline int32_t* get_address_of__proposed_3() { return &____proposed_3; }
	inline void set__proposed_3(int32_t value)
	{
		____proposed_3 = value;
	}

	inline static int32_t get_offset_of__columnErrors_4() { return static_cast<int32_t>(offsetof(DataRow_t475206349, ____columnErrors_4)); }
	inline ArrayList_t844188058 * get__columnErrors_4() const { return ____columnErrors_4; }
	inline ArrayList_t844188058 ** get_address_of__columnErrors_4() { return &____columnErrors_4; }
	inline void set__columnErrors_4(ArrayList_t844188058 * value)
	{
		____columnErrors_4 = value;
		Il2CppCodeGenWriteBarrier((&____columnErrors_4), value);
	}

	inline static int32_t get_offset_of_rowError_5() { return static_cast<int32_t>(offsetof(DataRow_t475206349, ___rowError_5)); }
	inline String_t* get_rowError_5() const { return ___rowError_5; }
	inline String_t** get_address_of_rowError_5() { return &___rowError_5; }
	inline void set_rowError_5(String_t* value)
	{
		___rowError_5 = value;
		Il2CppCodeGenWriteBarrier((&___rowError_5), value);
	}

	inline static int32_t get_offset_of_xmlRowID_6() { return static_cast<int32_t>(offsetof(DataRow_t475206349, ___xmlRowID_6)); }
	inline int32_t get_xmlRowID_6() const { return ___xmlRowID_6; }
	inline int32_t* get_address_of_xmlRowID_6() { return &___xmlRowID_6; }
	inline void set_xmlRowID_6(int32_t value)
	{
		___xmlRowID_6 = value;
	}

	inline static int32_t get_offset_of__nullConstraintViolation_7() { return static_cast<int32_t>(offsetof(DataRow_t475206349, ____nullConstraintViolation_7)); }
	inline bool get__nullConstraintViolation_7() const { return ____nullConstraintViolation_7; }
	inline bool* get_address_of__nullConstraintViolation_7() { return &____nullConstraintViolation_7; }
	inline void set__nullConstraintViolation_7(bool value)
	{
		____nullConstraintViolation_7 = value;
	}

	inline static int32_t get_offset_of__nullConstraintMessage_8() { return static_cast<int32_t>(offsetof(DataRow_t475206349, ____nullConstraintMessage_8)); }
	inline String_t* get__nullConstraintMessage_8() const { return ____nullConstraintMessage_8; }
	inline String_t** get_address_of__nullConstraintMessage_8() { return &____nullConstraintMessage_8; }
	inline void set__nullConstraintMessage_8(String_t* value)
	{
		____nullConstraintMessage_8 = value;
		Il2CppCodeGenWriteBarrier((&____nullConstraintMessage_8), value);
	}

	inline static int32_t get_offset_of__inChangingEvent_9() { return static_cast<int32_t>(offsetof(DataRow_t475206349, ____inChangingEvent_9)); }
	inline bool get__inChangingEvent_9() const { return ____inChangingEvent_9; }
	inline bool* get_address_of__inChangingEvent_9() { return &____inChangingEvent_9; }
	inline void set__inChangingEvent_9(bool value)
	{
		____inChangingEvent_9 = value;
	}

	inline static int32_t get_offset_of__rowId_10() { return static_cast<int32_t>(offsetof(DataRow_t475206349, ____rowId_10)); }
	inline int32_t get__rowId_10() const { return ____rowId_10; }
	inline int32_t* get_address_of__rowId_10() { return &____rowId_10; }
	inline void set__rowId_10(int32_t value)
	{
		____rowId_10 = value;
	}

	inline static int32_t get_offset_of__rowChanged_11() { return static_cast<int32_t>(offsetof(DataRow_t475206349, ____rowChanged_11)); }
	inline bool get__rowChanged_11() const { return ____rowChanged_11; }
	inline bool* get_address_of__rowChanged_11() { return &____rowChanged_11; }
	inline void set__rowChanged_11(bool value)
	{
		____rowChanged_11 = value;
	}

	inline static int32_t get_offset_of__inExpressionEvaluation_12() { return static_cast<int32_t>(offsetof(DataRow_t475206349, ____inExpressionEvaluation_12)); }
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
#endif // DATAROW_T475206349_H
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
#ifndef INTERNALDATACOLLECTIONBASE_T313478723_H
#define INTERNALDATACOLLECTIONBASE_T313478723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.InternalDataCollectionBase
struct  InternalDataCollectionBase_t313478723  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Data.InternalDataCollectionBase::list
	ArrayList_t844188058 * ___list_0;
	// System.Boolean System.Data.InternalDataCollectionBase::synchronized
	bool ___synchronized_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(InternalDataCollectionBase_t313478723, ___list_0)); }
	inline ArrayList_t844188058 * get_list_0() const { return ___list_0; }
	inline ArrayList_t844188058 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t844188058 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_synchronized_1() { return static_cast<int32_t>(offsetof(InternalDataCollectionBase_t313478723, ___synchronized_1)); }
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
#endif // INTERNALDATACOLLECTIONBASE_T313478723_H
#ifndef TOKENIZER_T2619233047_H
#define TOKENIZER_T2619233047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Tokenizer
struct  Tokenizer_t2619233047  : public RuntimeObject
{
public:
	// System.Char[] Mono.Data.SqlExpressions.Tokenizer::input
	CharU5BU5D_t1565992178* ___input_2;
	// System.Int32 Mono.Data.SqlExpressions.Tokenizer::pos
	int32_t ___pos_3;
	// System.Int32 Mono.Data.SqlExpressions.Tokenizer::tok
	int32_t ___tok_4;
	// System.Object Mono.Data.SqlExpressions.Tokenizer::val
	RuntimeObject * ___val_5;

public:
	inline static int32_t get_offset_of_input_2() { return static_cast<int32_t>(offsetof(Tokenizer_t2619233047, ___input_2)); }
	inline CharU5BU5D_t1565992178* get_input_2() const { return ___input_2; }
	inline CharU5BU5D_t1565992178** get_address_of_input_2() { return &___input_2; }
	inline void set_input_2(CharU5BU5D_t1565992178* value)
	{
		___input_2 = value;
		Il2CppCodeGenWriteBarrier((&___input_2), value);
	}

	inline static int32_t get_offset_of_pos_3() { return static_cast<int32_t>(offsetof(Tokenizer_t2619233047, ___pos_3)); }
	inline int32_t get_pos_3() const { return ___pos_3; }
	inline int32_t* get_address_of_pos_3() { return &___pos_3; }
	inline void set_pos_3(int32_t value)
	{
		___pos_3 = value;
	}

	inline static int32_t get_offset_of_tok_4() { return static_cast<int32_t>(offsetof(Tokenizer_t2619233047, ___tok_4)); }
	inline int32_t get_tok_4() const { return ___tok_4; }
	inline int32_t* get_address_of_tok_4() { return &___tok_4; }
	inline void set_tok_4(int32_t value)
	{
		___tok_4 = value;
	}

	inline static int32_t get_offset_of_val_5() { return static_cast<int32_t>(offsetof(Tokenizer_t2619233047, ___val_5)); }
	inline RuntimeObject * get_val_5() const { return ___val_5; }
	inline RuntimeObject ** get_address_of_val_5() { return &___val_5; }
	inline void set_val_5(RuntimeObject * value)
	{
		___val_5 = value;
		Il2CppCodeGenWriteBarrier((&___val_5), value);
	}
};

struct Tokenizer_t2619233047_StaticFields
{
public:
	// System.Collections.IDictionary Mono.Data.SqlExpressions.Tokenizer::tokenMap
	RuntimeObject* ___tokenMap_0;
	// System.Object[] Mono.Data.SqlExpressions.Tokenizer::tokens
	ObjectU5BU5D_t2392277051* ___tokens_1;

public:
	inline static int32_t get_offset_of_tokenMap_0() { return static_cast<int32_t>(offsetof(Tokenizer_t2619233047_StaticFields, ___tokenMap_0)); }
	inline RuntimeObject* get_tokenMap_0() const { return ___tokenMap_0; }
	inline RuntimeObject** get_address_of_tokenMap_0() { return &___tokenMap_0; }
	inline void set_tokenMap_0(RuntimeObject* value)
	{
		___tokenMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___tokenMap_0), value);
	}

	inline static int32_t get_offset_of_tokens_1() { return static_cast<int32_t>(offsetof(Tokenizer_t2619233047_StaticFields, ___tokens_1)); }
	inline ObjectU5BU5D_t2392277051* get_tokens_1() const { return ___tokens_1; }
	inline ObjectU5BU5D_t2392277051** get_address_of_tokens_1() { return &___tokens_1; }
	inline void set_tokens_1(ObjectU5BU5D_t2392277051* value)
	{
		___tokens_1 = value;
		Il2CppCodeGenWriteBarrier((&___tokens_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOKENIZER_T2619233047_H
#ifndef NUMERIC_T933901829_H
#define NUMERIC_T933901829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Numeric
struct  Numeric_t933901829  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMERIC_T933901829_H
#ifndef TYPECONVERTER_T2966684696_H
#define TYPECONVERTER_T2966684696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2966684696  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T2966684696_H
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
#ifndef BASEEXPRESSION_T363930473_H
#define BASEEXPRESSION_T363930473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.BaseExpression
struct  BaseExpression_t363930473  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEXPRESSION_T363930473_H
#ifndef DOUBLET_T3613893367_H
#define DOUBLET_T3613893367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Doublet
struct  Doublet_t3613893367  : public RuntimeObject
{
public:
	// System.Int32 System.Data.Doublet::count
	int32_t ___count_0;
	// System.Collections.ArrayList System.Data.Doublet::columnNames
	ArrayList_t844188058 * ___columnNames_1;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(Doublet_t3613893367, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_columnNames_1() { return static_cast<int32_t>(offsetof(Doublet_t3613893367, ___columnNames_1)); }
	inline ArrayList_t844188058 * get_columnNames_1() const { return ___columnNames_1; }
	inline ArrayList_t844188058 ** get_address_of_columnNames_1() { return &___columnNames_1; }
	inline void set_columnNames_1(ArrayList_t844188058 * value)
	{
		___columnNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___columnNames_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLET_T3613893367_H
#ifndef SQLXML_T1623331956_H
#define SQLXML_T1623331956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlXml
struct  SqlXml_t1623331956  : public RuntimeObject
{
public:
	// System.Boolean System.Data.SqlTypes.SqlXml::notNull
	bool ___notNull_0;
	// System.String System.Data.SqlTypes.SqlXml::xmlValue
	String_t* ___xmlValue_1;

public:
	inline static int32_t get_offset_of_notNull_0() { return static_cast<int32_t>(offsetof(SqlXml_t1623331956, ___notNull_0)); }
	inline bool get_notNull_0() const { return ___notNull_0; }
	inline bool* get_address_of_notNull_0() { return &___notNull_0; }
	inline void set_notNull_0(bool value)
	{
		___notNull_0 = value;
	}

	inline static int32_t get_offset_of_xmlValue_1() { return static_cast<int32_t>(offsetof(SqlXml_t1623331956, ___xmlValue_1)); }
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
#endif // SQLXML_T1623331956_H
#ifndef EVENTARGS_T2070024930_H
#define EVENTARGS_T2070024930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t2070024930  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t2070024930_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t2070024930 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t2070024930_StaticFields, ___Empty_0)); }
	inline EventArgs_t2070024930 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t2070024930 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t2070024930 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T2070024930_H
#ifndef DATARELATION_T934786094_H
#define DATARELATION_T934786094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelation
struct  DataRelation_t934786094  : public RuntimeObject
{
public:
	// System.Data.DataSet System.Data.DataRelation::dataSet
	DataSet_t918332145 * ___dataSet_0;
	// System.String System.Data.DataRelation::relationName
	String_t* ___relationName_1;
	// System.Data.UniqueConstraint System.Data.DataRelation::parentKeyConstraint
	UniqueConstraint_t1303744136 * ___parentKeyConstraint_2;
	// System.Data.ForeignKeyConstraint System.Data.DataRelation::childKeyConstraint
	ForeignKeyConstraint_t2927031658 * ___childKeyConstraint_3;
	// System.Data.DataColumn[] System.Data.DataRelation::parentColumns
	DataColumnU5BU5D_t3676572940* ___parentColumns_4;
	// System.Data.DataColumn[] System.Data.DataRelation::childColumns
	DataColumnU5BU5D_t3676572940* ___childColumns_5;
	// System.Boolean System.Data.DataRelation::nested
	bool ___nested_6;
	// System.Boolean System.Data.DataRelation::createConstraints
	bool ___createConstraints_7;
	// System.Boolean System.Data.DataRelation::initFinished
	bool ___initFinished_8;
	// System.Data.PropertyCollection System.Data.DataRelation::extendedProperties
	PropertyCollection_t1559775645 * ___extendedProperties_9;
	// System.String System.Data.DataRelation::_relationName
	String_t* ____relationName_10;
	// System.String System.Data.DataRelation::_parentTableName
	String_t* ____parentTableName_11;
	// System.String System.Data.DataRelation::_childTableName
	String_t* ____childTableName_12;
	// System.String[] System.Data.DataRelation::_parentColumnNames
	StringU5BU5D_t3162382152* ____parentColumnNames_13;
	// System.String[] System.Data.DataRelation::_childColumnNames
	StringU5BU5D_t3162382152* ____childColumnNames_14;
	// System.Boolean System.Data.DataRelation::_nested
	bool ____nested_15;
	// System.Boolean System.Data.DataRelation::initInProgress
	bool ___initInProgress_16;
	// System.String System.Data.DataRelation::_parentTableNameSpace
	String_t* ____parentTableNameSpace_17;
	// System.String System.Data.DataRelation::_childTableNameSpace
	String_t* ____childTableNameSpace_18;

public:
	inline static int32_t get_offset_of_dataSet_0() { return static_cast<int32_t>(offsetof(DataRelation_t934786094, ___dataSet_0)); }
	inline DataSet_t918332145 * get_dataSet_0() const { return ___dataSet_0; }
	inline DataSet_t918332145 ** get_address_of_dataSet_0() { return &___dataSet_0; }
	inline void set_dataSet_0(DataSet_t918332145 * value)
	{
		___dataSet_0 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_0), value);
	}

	inline static int32_t get_offset_of_relationName_1() { return static_cast<int32_t>(offsetof(DataRelation_t934786094, ___relationName_1)); }
	inline String_t* get_relationName_1() const { return ___relationName_1; }
	inline String_t** get_address_of_relationName_1() { return &___relationName_1; }
	inline void set_relationName_1(String_t* value)
	{
		___relationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___relationName_1), value);
	}

	inline static int32_t get_offset_of_parentKeyConstraint_2() { return static_cast<int32_t>(offsetof(DataRelation_t934786094, ___parentKeyConstraint_2)); }
	inline UniqueConstraint_t1303744136 * get_parentKeyConstraint_2() const { return ___parentKeyConstraint_2; }
	inline UniqueConstraint_t1303744136 ** get_address_of_parentKeyConstraint_2() { return &___parentKeyConstraint_2; }
	inline void set_parentKeyConstraint_2(UniqueConstraint_t1303744136 * value)
	{
		___parentKeyConstraint_2 = value;
		Il2CppCodeGenWriteBarrier((&___parentKeyConstraint_2), value);
	}

	inline static int32_t get_offset_of_childKeyConstraint_3() { return static_cast<int32_t>(offsetof(DataRelation_t934786094, ___childKeyConstraint_3)); }
	inline ForeignKeyConstraint_t2927031658 * get_childKeyConstraint_3() const { return ___childKeyConstraint_3; }
	inline ForeignKeyConstraint_t2927031658 ** get_address_of_childKeyConstraint_3() { return &___childKeyConstraint_3; }
	inline void set_childKeyConstraint_3(ForeignKeyConstraint_t2927031658 * value)
	{
		___childKeyConstraint_3 = value;
		Il2CppCodeGenWriteBarrier((&___childKeyConstraint_3), value);
	}

	inline static int32_t get_offset_of_parentColumns_4() { return static_cast<int32_t>(offsetof(DataRelation_t934786094, ___parentColumns_4)); }
	inline DataColumnU5BU5D_t3676572940* get_parentColumns_4() const { return ___parentColumns_4; }
	inline DataColumnU5BU5D_t3676572940** get_address_of_parentColumns_4() { return &___parentColumns_4; }
	inline void set_parentColumns_4(DataColumnU5BU5D_t3676572940* value)
	{
		___parentColumns_4 = value;
		Il2CppCodeGenWriteBarrier((&___parentColumns_4), value);
	}

	inline static int32_t get_offset_of_childColumns_5() { return static_cast<int32_t>(offsetof(DataRelation_t934786094, ___childColumns_5)); }
	inline DataColumnU5BU5D_t3676572940* get_childColumns_5() const { return ___childColumns_5; }
	inline DataColumnU5BU5D_t3676572940** get_address_of_childColumns_5() { return &___childColumns_5; }
	inline void set_childColumns_5(DataColumnU5BU5D_t3676572940* value)
	{
		___childColumns_5 = value;
		Il2CppCodeGenWriteBarrier((&___childColumns_5), value);
	}

	inline static int32_t get_offset_of_nested_6() { return static_cast<int32_t>(offsetof(DataRelation_t934786094, ___nested_6)); }
	inline bool get_nested_6() const { return ___nested_6; }
	inline bool* get_address_of_nested_6() { return &___nested_6; }
	inline void set_nested_6(bool value)
	{
		___nested_6 = value;
	}

	inline static int32_t get_offset_of_createConstraints_7() { return static_cast<int32_t>(offsetof(DataRelation_t934786094, ___createConstraints_7)); }
	inline bool get_createConstraints_7() const { return ___createConstraints_7; }
	inline bool* get_address_of_createConstraints_7() { return &___createConstraints_7; }
	inline void set_createConstraints_7(bool value)
	{
		___createConstraints_7 = value;
	}

	inline static int32_t get_offset_of_initFinished_8() { return static_cast<int32_t>(offsetof(DataRelation_t934786094, ___initFinished_8)); }
	inline bool get_initFinished_8() const { return ___initFinished_8; }
	inline bool* get_address_of_initFinished_8() { return &___initFinished_8; }
	inline void set_initFinished_8(bool value)
	{
		___initFinished_8 = value;
	}

	inline static int32_t get_offset_of_extendedProperties_9() { return static_cast<int32_t>(offsetof(DataRelation_t934786094, ___extendedProperties_9)); }
	inline PropertyCollection_t1559775645 * get_extendedProperties_9() const { return ___extendedProperties_9; }
	inline PropertyCollection_t1559775645 ** get_address_of_extendedProperties_9() { return &___extendedProperties_9; }
	inline void set_extendedProperties_9(PropertyCollection_t1559775645 * value)
	{
		___extendedProperties_9 = value;
		Il2CppCodeGenWriteBarrier((&___extendedProperties_9), value);
	}

	inline static int32_t get_offset_of__relationName_10() { return static_cast<int32_t>(offsetof(DataRelation_t934786094, ____relationName_10)); }
	inline String_t* get__relationName_10() const { return ____relationName_10; }
	inline String_t** get_address_of__relationName_10() { return &____relationName_10; }
	inline void set__relationName_10(String_t* value)
	{
		____relationName_10 = value;
		Il2CppCodeGenWriteBarrier((&____relationName_10), value);
	}

	inline static int32_t get_offset_of__parentTableName_11() { return static_cast<int32_t>(offsetof(DataRelation_t934786094, ____parentTableName_11)); }
	inline String_t* get__parentTableName_11() const { return ____parentTableName_11; }
	inline String_t** get_address_of__parentTableName_11() { return &____parentTableName_11; }
	inline void set__parentTableName_11(String_t* value)
	{
		____parentTableName_11 = value;
		Il2CppCodeGenWriteBarrier((&____parentTableName_11), value);
	}

	inline static int32_t get_offset_of__childTableName_12() { return static_cast<int32_t>(offsetof(DataRelation_t934786094, ____childTableName_12)); }
	inline String_t* get__childTableName_12() const { return ____childTableName_12; }
	inline String_t** get_address_of__childTableName_12() { return &____childTableName_12; }
	inline void set__childTableName_12(String_t* value)
	{
		____childTableName_12 = value;
		Il2CppCodeGenWriteBarrier((&____childTableName_12), value);
	}

	inline static int32_t get_offset_of__parentColumnNames_13() { return static_cast<int32_t>(offsetof(DataRelation_t934786094, ____parentColumnNames_13)); }
	inline StringU5BU5D_t3162382152* get__parentColumnNames_13() const { return ____parentColumnNames_13; }
	inline StringU5BU5D_t3162382152** get_address_of__parentColumnNames_13() { return &____parentColumnNames_13; }
	inline void set__parentColumnNames_13(StringU5BU5D_t3162382152* value)
	{
		____parentColumnNames_13 = value;
		Il2CppCodeGenWriteBarrier((&____parentColumnNames_13), value);
	}

	inline static int32_t get_offset_of__childColumnNames_14() { return static_cast<int32_t>(offsetof(DataRelation_t934786094, ____childColumnNames_14)); }
	inline StringU5BU5D_t3162382152* get__childColumnNames_14() const { return ____childColumnNames_14; }
	inline StringU5BU5D_t3162382152** get_address_of__childColumnNames_14() { return &____childColumnNames_14; }
	inline void set__childColumnNames_14(StringU5BU5D_t3162382152* value)
	{
		____childColumnNames_14 = value;
		Il2CppCodeGenWriteBarrier((&____childColumnNames_14), value);
	}

	inline static int32_t get_offset_of__nested_15() { return static_cast<int32_t>(offsetof(DataRelation_t934786094, ____nested_15)); }
	inline bool get__nested_15() const { return ____nested_15; }
	inline bool* get_address_of__nested_15() { return &____nested_15; }
	inline void set__nested_15(bool value)
	{
		____nested_15 = value;
	}

	inline static int32_t get_offset_of_initInProgress_16() { return static_cast<int32_t>(offsetof(DataRelation_t934786094, ___initInProgress_16)); }
	inline bool get_initInProgress_16() const { return ___initInProgress_16; }
	inline bool* get_address_of_initInProgress_16() { return &___initInProgress_16; }
	inline void set_initInProgress_16(bool value)
	{
		___initInProgress_16 = value;
	}

	inline static int32_t get_offset_of__parentTableNameSpace_17() { return static_cast<int32_t>(offsetof(DataRelation_t934786094, ____parentTableNameSpace_17)); }
	inline String_t* get__parentTableNameSpace_17() const { return ____parentTableNameSpace_17; }
	inline String_t** get_address_of__parentTableNameSpace_17() { return &____parentTableNameSpace_17; }
	inline void set__parentTableNameSpace_17(String_t* value)
	{
		____parentTableNameSpace_17 = value;
		Il2CppCodeGenWriteBarrier((&____parentTableNameSpace_17), value);
	}

	inline static int32_t get_offset_of__childTableNameSpace_18() { return static_cast<int32_t>(offsetof(DataRelation_t934786094, ____childTableNameSpace_18)); }
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
#endif // DATARELATION_T934786094_H
#ifndef MARSHALBYVALUECOMPONENT_T1256752560_H
#define MARSHALBYVALUECOMPONENT_T1256752560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t1256752560  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::eventList
	EventHandlerList_t1427346375 * ___eventList_0;
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	RuntimeObject* ___mySite_1;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	RuntimeObject * ___disposedEvent_2;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t1256752560, ___eventList_0)); }
	inline EventHandlerList_t1427346375 * get_eventList_0() const { return ___eventList_0; }
	inline EventHandlerList_t1427346375 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(EventHandlerList_t1427346375 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_mySite_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t1256752560, ___mySite_1)); }
	inline RuntimeObject* get_mySite_1() const { return ___mySite_1; }
	inline RuntimeObject** get_address_of_mySite_1() { return &___mySite_1; }
	inline void set_mySite_1(RuntimeObject* value)
	{
		___mySite_1 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_1), value);
	}

	inline static int32_t get_offset_of_disposedEvent_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t1256752560, ___disposedEvent_2)); }
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
#endif // MARSHALBYVALUECOMPONENT_T1256752560_H
#ifndef SQLSINGLE_T3470856764_H
#define SQLSINGLE_T3470856764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlSingle
struct  SqlSingle_t3470856764 
{
public:
	// System.Single System.Data.SqlTypes.SqlSingle::value
	float ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlSingle::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlSingle_t3470856764, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlSingle_t3470856764, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlSingle_t3470856764_StaticFields
{
public:
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::MaxValue
	SqlSingle_t3470856764  ___MaxValue_2;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::MinValue
	SqlSingle_t3470856764  ___MinValue_3;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::Null
	SqlSingle_t3470856764  ___Null_4;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::Zero
	SqlSingle_t3470856764  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlSingle_t3470856764_StaticFields, ___MaxValue_2)); }
	inline SqlSingle_t3470856764  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlSingle_t3470856764 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlSingle_t3470856764  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlSingle_t3470856764_StaticFields, ___MinValue_3)); }
	inline SqlSingle_t3470856764  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlSingle_t3470856764 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlSingle_t3470856764  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlSingle_t3470856764_StaticFields, ___Null_4)); }
	inline SqlSingle_t3470856764  get_Null_4() const { return ___Null_4; }
	inline SqlSingle_t3470856764 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlSingle_t3470856764  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlSingle_t3470856764_StaticFields, ___Zero_5)); }
	inline SqlSingle_t3470856764  get_Zero_5() const { return ___Zero_5; }
	inline SqlSingle_t3470856764 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlSingle_t3470856764  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlSingle
struct SqlSingle_t3470856764_marshaled_pinvoke
{
	float ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlSingle
struct SqlSingle_t3470856764_marshaled_com
{
	float ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLSINGLE_T3470856764_H
#ifndef SQLINT16_T239084003_H
#define SQLINT16_T239084003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlInt16
struct  SqlInt16_t239084003 
{
public:
	// System.Int16 System.Data.SqlTypes.SqlInt16::value
	int16_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlInt16::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlInt16_t239084003, ___value_0)); }
	inline int16_t get_value_0() const { return ___value_0; }
	inline int16_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int16_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlInt16_t239084003, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlInt16_t239084003_StaticFields
{
public:
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::MaxValue
	SqlInt16_t239084003  ___MaxValue_2;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::MinValue
	SqlInt16_t239084003  ___MinValue_3;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::Null
	SqlInt16_t239084003  ___Null_4;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::Zero
	SqlInt16_t239084003  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlInt16_t239084003_StaticFields, ___MaxValue_2)); }
	inline SqlInt16_t239084003  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlInt16_t239084003 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlInt16_t239084003  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlInt16_t239084003_StaticFields, ___MinValue_3)); }
	inline SqlInt16_t239084003  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlInt16_t239084003 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlInt16_t239084003  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt16_t239084003_StaticFields, ___Null_4)); }
	inline SqlInt16_t239084003  get_Null_4() const { return ___Null_4; }
	inline SqlInt16_t239084003 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt16_t239084003  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt16_t239084003_StaticFields, ___Zero_5)); }
	inline SqlInt16_t239084003  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt16_t239084003 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt16_t239084003  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt16
struct SqlInt16_t239084003_marshaled_pinvoke
{
	int16_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt16
struct SqlInt16_t239084003_marshaled_com
{
	int16_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLINT16_T239084003_H
#ifndef SQLDOUBLE_T3301066005_H
#define SQLDOUBLE_T3301066005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlDouble
struct  SqlDouble_t3301066005 
{
public:
	// System.Double System.Data.SqlTypes.SqlDouble::value
	double ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlDouble::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlDouble_t3301066005, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlDouble_t3301066005, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlDouble_t3301066005_StaticFields
{
public:
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::MaxValue
	SqlDouble_t3301066005  ___MaxValue_2;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::MinValue
	SqlDouble_t3301066005  ___MinValue_3;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::Null
	SqlDouble_t3301066005  ___Null_4;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::Zero
	SqlDouble_t3301066005  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlDouble_t3301066005_StaticFields, ___MaxValue_2)); }
	inline SqlDouble_t3301066005  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlDouble_t3301066005 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlDouble_t3301066005  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlDouble_t3301066005_StaticFields, ___MinValue_3)); }
	inline SqlDouble_t3301066005  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlDouble_t3301066005 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlDouble_t3301066005  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlDouble_t3301066005_StaticFields, ___Null_4)); }
	inline SqlDouble_t3301066005  get_Null_4() const { return ___Null_4; }
	inline SqlDouble_t3301066005 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlDouble_t3301066005  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlDouble_t3301066005_StaticFields, ___Zero_5)); }
	inline SqlDouble_t3301066005  get_Zero_5() const { return ___Zero_5; }
	inline SqlDouble_t3301066005 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlDouble_t3301066005  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDouble
struct SqlDouble_t3301066005_marshaled_pinvoke
{
	double ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDouble
struct SqlDouble_t3301066005_marshaled_com
{
	double ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLDOUBLE_T3301066005_H
#ifndef COMPONENT_T3036537838_H
#define COMPONENT_T3036537838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t3036537838  : public MarshalByRefObject_t1236449280
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t1427346375 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t3036537838, ___event_handlers_1)); }
	inline EventHandlerList_t1427346375 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t1427346375 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t1427346375 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t3036537838, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t3036537838, ___disposedEvent_3)); }
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
#endif // COMPONENT_T3036537838_H
#ifndef SQLDECIMAL_T2365944394_H
#define SQLDECIMAL_T2365944394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlDecimal
struct  SqlDecimal_t2365944394 
{
public:
	// System.Int32[] System.Data.SqlTypes.SqlDecimal::value
	Int32U5BU5D_t3325461767* ___value_0;
	// System.Byte System.Data.SqlTypes.SqlDecimal::precision
	uint8_t ___precision_1;
	// System.Byte System.Data.SqlTypes.SqlDecimal::scale
	uint8_t ___scale_2;
	// System.Boolean System.Data.SqlTypes.SqlDecimal::positive
	bool ___positive_3;
	// System.Boolean System.Data.SqlTypes.SqlDecimal::notNull
	bool ___notNull_4;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlDecimal_t2365944394, ___value_0)); }
	inline Int32U5BU5D_t3325461767* get_value_0() const { return ___value_0; }
	inline Int32U5BU5D_t3325461767** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Int32U5BU5D_t3325461767* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_precision_1() { return static_cast<int32_t>(offsetof(SqlDecimal_t2365944394, ___precision_1)); }
	inline uint8_t get_precision_1() const { return ___precision_1; }
	inline uint8_t* get_address_of_precision_1() { return &___precision_1; }
	inline void set_precision_1(uint8_t value)
	{
		___precision_1 = value;
	}

	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(SqlDecimal_t2365944394, ___scale_2)); }
	inline uint8_t get_scale_2() const { return ___scale_2; }
	inline uint8_t* get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(uint8_t value)
	{
		___scale_2 = value;
	}

	inline static int32_t get_offset_of_positive_3() { return static_cast<int32_t>(offsetof(SqlDecimal_t2365944394, ___positive_3)); }
	inline bool get_positive_3() const { return ___positive_3; }
	inline bool* get_address_of_positive_3() { return &___positive_3; }
	inline void set_positive_3(bool value)
	{
		___positive_3 = value;
	}

	inline static int32_t get_offset_of_notNull_4() { return static_cast<int32_t>(offsetof(SqlDecimal_t2365944394, ___notNull_4)); }
	inline bool get_notNull_4() const { return ___notNull_4; }
	inline bool* get_address_of_notNull_4() { return &___notNull_4; }
	inline void set_notNull_4(bool value)
	{
		___notNull_4 = value;
	}
};

struct SqlDecimal_t2365944394_StaticFields
{
public:
	// System.UInt32[] System.Data.SqlTypes.SqlDecimal::constantsDecadeInt32Factors
	UInt32U5BU5D_t1190422219* ___constantsDecadeInt32Factors_5;
	// System.Byte System.Data.SqlTypes.SqlDecimal::MaxPrecision
	uint8_t ___MaxPrecision_6;
	// System.Byte System.Data.SqlTypes.SqlDecimal::MaxScale
	uint8_t ___MaxScale_7;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::MaxValue
	SqlDecimal_t2365944394  ___MaxValue_8;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::MinValue
	SqlDecimal_t2365944394  ___MinValue_9;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::Null
	SqlDecimal_t2365944394  ___Null_10;

public:
	inline static int32_t get_offset_of_constantsDecadeInt32Factors_5() { return static_cast<int32_t>(offsetof(SqlDecimal_t2365944394_StaticFields, ___constantsDecadeInt32Factors_5)); }
	inline UInt32U5BU5D_t1190422219* get_constantsDecadeInt32Factors_5() const { return ___constantsDecadeInt32Factors_5; }
	inline UInt32U5BU5D_t1190422219** get_address_of_constantsDecadeInt32Factors_5() { return &___constantsDecadeInt32Factors_5; }
	inline void set_constantsDecadeInt32Factors_5(UInt32U5BU5D_t1190422219* value)
	{
		___constantsDecadeInt32Factors_5 = value;
		Il2CppCodeGenWriteBarrier((&___constantsDecadeInt32Factors_5), value);
	}

	inline static int32_t get_offset_of_MaxPrecision_6() { return static_cast<int32_t>(offsetof(SqlDecimal_t2365944394_StaticFields, ___MaxPrecision_6)); }
	inline uint8_t get_MaxPrecision_6() const { return ___MaxPrecision_6; }
	inline uint8_t* get_address_of_MaxPrecision_6() { return &___MaxPrecision_6; }
	inline void set_MaxPrecision_6(uint8_t value)
	{
		___MaxPrecision_6 = value;
	}

	inline static int32_t get_offset_of_MaxScale_7() { return static_cast<int32_t>(offsetof(SqlDecimal_t2365944394_StaticFields, ___MaxScale_7)); }
	inline uint8_t get_MaxScale_7() const { return ___MaxScale_7; }
	inline uint8_t* get_address_of_MaxScale_7() { return &___MaxScale_7; }
	inline void set_MaxScale_7(uint8_t value)
	{
		___MaxScale_7 = value;
	}

	inline static int32_t get_offset_of_MaxValue_8() { return static_cast<int32_t>(offsetof(SqlDecimal_t2365944394_StaticFields, ___MaxValue_8)); }
	inline SqlDecimal_t2365944394  get_MaxValue_8() const { return ___MaxValue_8; }
	inline SqlDecimal_t2365944394 * get_address_of_MaxValue_8() { return &___MaxValue_8; }
	inline void set_MaxValue_8(SqlDecimal_t2365944394  value)
	{
		___MaxValue_8 = value;
	}

	inline static int32_t get_offset_of_MinValue_9() { return static_cast<int32_t>(offsetof(SqlDecimal_t2365944394_StaticFields, ___MinValue_9)); }
	inline SqlDecimal_t2365944394  get_MinValue_9() const { return ___MinValue_9; }
	inline SqlDecimal_t2365944394 * get_address_of_MinValue_9() { return &___MinValue_9; }
	inline void set_MinValue_9(SqlDecimal_t2365944394  value)
	{
		___MinValue_9 = value;
	}

	inline static int32_t get_offset_of_Null_10() { return static_cast<int32_t>(offsetof(SqlDecimal_t2365944394_StaticFields, ___Null_10)); }
	inline SqlDecimal_t2365944394  get_Null_10() const { return ___Null_10; }
	inline SqlDecimal_t2365944394 * get_address_of_Null_10() { return &___Null_10; }
	inline void set_Null_10(SqlDecimal_t2365944394  value)
	{
		___Null_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDecimal
struct SqlDecimal_t2365944394_marshaled_pinvoke
{
	int32_t* ___value_0;
	uint8_t ___precision_1;
	uint8_t ___scale_2;
	int32_t ___positive_3;
	int32_t ___notNull_4;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDecimal
struct SqlDecimal_t2365944394_marshaled_com
{
	int32_t* ___value_0;
	uint8_t ___precision_1;
	uint8_t ___scale_2;
	int32_t ___positive_3;
	int32_t ___notNull_4;
};
#endif // SQLDECIMAL_T2365944394_H
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
#ifndef DATACOLUMNCHANGEEVENTARGS_T1997694129_H
#define DATACOLUMNCHANGEEVENTARGS_T1997694129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumnChangeEventArgs
struct  DataColumnChangeEventArgs_t1997694129  : public EventArgs_t2070024930
{
public:
	// System.Data.DataColumn System.Data.DataColumnChangeEventArgs::_column
	DataColumn_t866196881 * ____column_1;
	// System.Data.DataRow System.Data.DataColumnChangeEventArgs::_row
	DataRow_t475206349 * ____row_2;
	// System.Object System.Data.DataColumnChangeEventArgs::_proposedValue
	RuntimeObject * ____proposedValue_3;

public:
	inline static int32_t get_offset_of__column_1() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t1997694129, ____column_1)); }
	inline DataColumn_t866196881 * get__column_1() const { return ____column_1; }
	inline DataColumn_t866196881 ** get_address_of__column_1() { return &____column_1; }
	inline void set__column_1(DataColumn_t866196881 * value)
	{
		____column_1 = value;
		Il2CppCodeGenWriteBarrier((&____column_1), value);
	}

	inline static int32_t get_offset_of__row_2() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t1997694129, ____row_2)); }
	inline DataRow_t475206349 * get__row_2() const { return ____row_2; }
	inline DataRow_t475206349 ** get_address_of__row_2() { return &____row_2; }
	inline void set__row_2(DataRow_t475206349 * value)
	{
		____row_2 = value;
		Il2CppCodeGenWriteBarrier((&____row_2), value);
	}

	inline static int32_t get_offset_of__proposedValue_3() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t1997694129, ____proposedValue_3)); }
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
#endif // DATACOLUMNCHANGEEVENTARGS_T1997694129_H
#ifndef DBPARAMETER_T2424603415_H
#define DBPARAMETER_T2424603415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbParameter
struct  DbParameter_t2424603415  : public MarshalByRefObject_t1236449280
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPARAMETER_T2424603415_H
#ifndef DBPARAMETERCOLLECTION_T955390758_H
#define DBPARAMETERCOLLECTION_T955390758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbParameterCollection
struct  DbParameterCollection_t955390758  : public MarshalByRefObject_t1236449280
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPARAMETERCOLLECTION_T955390758_H
#ifndef SQLINT64_T3471710467_H
#define SQLINT64_T3471710467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlInt64
struct  SqlInt64_t3471710467 
{
public:
	// System.Int64 System.Data.SqlTypes.SqlInt64::value
	int64_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlInt64::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlInt64_t3471710467, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlInt64_t3471710467, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlInt64_t3471710467_StaticFields
{
public:
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::MaxValue
	SqlInt64_t3471710467  ___MaxValue_2;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::MinValue
	SqlInt64_t3471710467  ___MinValue_3;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::Null
	SqlInt64_t3471710467  ___Null_4;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::Zero
	SqlInt64_t3471710467  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlInt64_t3471710467_StaticFields, ___MaxValue_2)); }
	inline SqlInt64_t3471710467  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlInt64_t3471710467 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlInt64_t3471710467  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlInt64_t3471710467_StaticFields, ___MinValue_3)); }
	inline SqlInt64_t3471710467  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlInt64_t3471710467 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlInt64_t3471710467  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt64_t3471710467_StaticFields, ___Null_4)); }
	inline SqlInt64_t3471710467  get_Null_4() const { return ___Null_4; }
	inline SqlInt64_t3471710467 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt64_t3471710467  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt64_t3471710467_StaticFields, ___Zero_5)); }
	inline SqlInt64_t3471710467  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt64_t3471710467 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt64_t3471710467  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt64
struct SqlInt64_t3471710467_marshaled_pinvoke
{
	int64_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt64
struct SqlInt64_t3471710467_marshaled_com
{
	int64_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLINT64_T3471710467_H
#ifndef DATACOLUMNCOLLECTION_T3924963021_H
#define DATACOLUMNCOLLECTION_T3924963021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumnCollection
struct  DataColumnCollection_t3924963021  : public InternalDataCollectionBase_t313478723
{
public:
	// System.Collections.Hashtable System.Data.DataColumnCollection::columnNameCount
	Hashtable_t2604207785 * ___columnNameCount_2;
	// System.Collections.Hashtable System.Data.DataColumnCollection::columnFromName
	Hashtable_t2604207785 * ___columnFromName_3;
	// System.Collections.ArrayList System.Data.DataColumnCollection::autoIncrement
	ArrayList_t844188058 * ___autoIncrement_4;
	// System.Int32 System.Data.DataColumnCollection::defaultColumnIndex
	int32_t ___defaultColumnIndex_5;
	// System.Data.DataTable System.Data.DataColumnCollection::parentTable
	DataTable_t4118261672 * ___parentTable_6;
	// System.Data.DataColumn[] System.Data.DataColumnCollection::_mostRecentColumns
	DataColumnU5BU5D_t3676572940* ____mostRecentColumns_7;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionChanged
	CollectionChangeEventHandler_t1895388503 * ___CollectionChanged_10;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionMetaDataChanged
	CollectionChangeEventHandler_t1895388503 * ___CollectionMetaDataChanged_11;

public:
	inline static int32_t get_offset_of_columnNameCount_2() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3924963021, ___columnNameCount_2)); }
	inline Hashtable_t2604207785 * get_columnNameCount_2() const { return ___columnNameCount_2; }
	inline Hashtable_t2604207785 ** get_address_of_columnNameCount_2() { return &___columnNameCount_2; }
	inline void set_columnNameCount_2(Hashtable_t2604207785 * value)
	{
		___columnNameCount_2 = value;
		Il2CppCodeGenWriteBarrier((&___columnNameCount_2), value);
	}

	inline static int32_t get_offset_of_columnFromName_3() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3924963021, ___columnFromName_3)); }
	inline Hashtable_t2604207785 * get_columnFromName_3() const { return ___columnFromName_3; }
	inline Hashtable_t2604207785 ** get_address_of_columnFromName_3() { return &___columnFromName_3; }
	inline void set_columnFromName_3(Hashtable_t2604207785 * value)
	{
		___columnFromName_3 = value;
		Il2CppCodeGenWriteBarrier((&___columnFromName_3), value);
	}

	inline static int32_t get_offset_of_autoIncrement_4() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3924963021, ___autoIncrement_4)); }
	inline ArrayList_t844188058 * get_autoIncrement_4() const { return ___autoIncrement_4; }
	inline ArrayList_t844188058 ** get_address_of_autoIncrement_4() { return &___autoIncrement_4; }
	inline void set_autoIncrement_4(ArrayList_t844188058 * value)
	{
		___autoIncrement_4 = value;
		Il2CppCodeGenWriteBarrier((&___autoIncrement_4), value);
	}

	inline static int32_t get_offset_of_defaultColumnIndex_5() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3924963021, ___defaultColumnIndex_5)); }
	inline int32_t get_defaultColumnIndex_5() const { return ___defaultColumnIndex_5; }
	inline int32_t* get_address_of_defaultColumnIndex_5() { return &___defaultColumnIndex_5; }
	inline void set_defaultColumnIndex_5(int32_t value)
	{
		___defaultColumnIndex_5 = value;
	}

	inline static int32_t get_offset_of_parentTable_6() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3924963021, ___parentTable_6)); }
	inline DataTable_t4118261672 * get_parentTable_6() const { return ___parentTable_6; }
	inline DataTable_t4118261672 ** get_address_of_parentTable_6() { return &___parentTable_6; }
	inline void set_parentTable_6(DataTable_t4118261672 * value)
	{
		___parentTable_6 = value;
		Il2CppCodeGenWriteBarrier((&___parentTable_6), value);
	}

	inline static int32_t get_offset_of__mostRecentColumns_7() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3924963021, ____mostRecentColumns_7)); }
	inline DataColumnU5BU5D_t3676572940* get__mostRecentColumns_7() const { return ____mostRecentColumns_7; }
	inline DataColumnU5BU5D_t3676572940** get_address_of__mostRecentColumns_7() { return &____mostRecentColumns_7; }
	inline void set__mostRecentColumns_7(DataColumnU5BU5D_t3676572940* value)
	{
		____mostRecentColumns_7 = value;
		Il2CppCodeGenWriteBarrier((&____mostRecentColumns_7), value);
	}

	inline static int32_t get_offset_of_CollectionChanged_10() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3924963021, ___CollectionChanged_10)); }
	inline CollectionChangeEventHandler_t1895388503 * get_CollectionChanged_10() const { return ___CollectionChanged_10; }
	inline CollectionChangeEventHandler_t1895388503 ** get_address_of_CollectionChanged_10() { return &___CollectionChanged_10; }
	inline void set_CollectionChanged_10(CollectionChangeEventHandler_t1895388503 * value)
	{
		___CollectionChanged_10 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_10), value);
	}

	inline static int32_t get_offset_of_CollectionMetaDataChanged_11() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3924963021, ___CollectionMetaDataChanged_11)); }
	inline CollectionChangeEventHandler_t1895388503 * get_CollectionMetaDataChanged_11() const { return ___CollectionMetaDataChanged_11; }
	inline CollectionChangeEventHandler_t1895388503 ** get_address_of_CollectionMetaDataChanged_11() { return &___CollectionMetaDataChanged_11; }
	inline void set_CollectionMetaDataChanged_11(CollectionChangeEventHandler_t1895388503 * value)
	{
		___CollectionMetaDataChanged_11 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionMetaDataChanged_11), value);
	}
};

struct DataColumnCollection_t3924963021_StaticFields
{
public:
	// System.String System.Data.DataColumnCollection::ColumnPrefix
	String_t* ___ColumnPrefix_8;
	// System.String[] System.Data.DataColumnCollection::TenColumns
	StringU5BU5D_t3162382152* ___TenColumns_9;

public:
	inline static int32_t get_offset_of_ColumnPrefix_8() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3924963021_StaticFields, ___ColumnPrefix_8)); }
	inline String_t* get_ColumnPrefix_8() const { return ___ColumnPrefix_8; }
	inline String_t** get_address_of_ColumnPrefix_8() { return &___ColumnPrefix_8; }
	inline void set_ColumnPrefix_8(String_t* value)
	{
		___ColumnPrefix_8 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnPrefix_8), value);
	}

	inline static int32_t get_offset_of_TenColumns_9() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3924963021_StaticFields, ___TenColumns_9)); }
	inline StringU5BU5D_t3162382152* get_TenColumns_9() const { return ___TenColumns_9; }
	inline StringU5BU5D_t3162382152** get_address_of_TenColumns_9() { return &___TenColumns_9; }
	inline void set_TenColumns_9(StringU5BU5D_t3162382152* value)
	{
		___TenColumns_9 = value;
		Il2CppCodeGenWriteBarrier((&___TenColumns_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACOLUMNCOLLECTION_T3924963021_H
#ifndef SQLINT32_T4048009512_H
#define SQLINT32_T4048009512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlInt32
struct  SqlInt32_t4048009512 
{
public:
	// System.Int32 System.Data.SqlTypes.SqlInt32::value
	int32_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlInt32::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlInt32_t4048009512, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlInt32_t4048009512, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlInt32_t4048009512_StaticFields
{
public:
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::MaxValue
	SqlInt32_t4048009512  ___MaxValue_2;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::MinValue
	SqlInt32_t4048009512  ___MinValue_3;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::Null
	SqlInt32_t4048009512  ___Null_4;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::Zero
	SqlInt32_t4048009512  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlInt32_t4048009512_StaticFields, ___MaxValue_2)); }
	inline SqlInt32_t4048009512  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlInt32_t4048009512 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlInt32_t4048009512  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlInt32_t4048009512_StaticFields, ___MinValue_3)); }
	inline SqlInt32_t4048009512  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlInt32_t4048009512 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlInt32_t4048009512  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt32_t4048009512_StaticFields, ___Null_4)); }
	inline SqlInt32_t4048009512  get_Null_4() const { return ___Null_4; }
	inline SqlInt32_t4048009512 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt32_t4048009512  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt32_t4048009512_StaticFields, ___Zero_5)); }
	inline SqlInt32_t4048009512  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt32_t4048009512 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt32_t4048009512  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt32
struct SqlInt32_t4048009512_marshaled_pinvoke
{
	int32_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt32
struct SqlInt32_t4048009512_marshaled_com
{
	int32_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLINT32_T4048009512_H
#ifndef DATARELATIONCOLLECTION_T29582142_H
#define DATARELATIONCOLLECTION_T29582142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection
struct  DataRelationCollection_t29582142  : public InternalDataCollectionBase_t313478723
{
public:
	// System.Data.DataRelation System.Data.DataRelationCollection::inTransition
	DataRelation_t934786094 * ___inTransition_2;
	// System.Int32 System.Data.DataRelationCollection::index
	int32_t ___index_3;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataRelationCollection::CollectionChanged
	CollectionChangeEventHandler_t1895388503 * ___CollectionChanged_4;

public:
	inline static int32_t get_offset_of_inTransition_2() { return static_cast<int32_t>(offsetof(DataRelationCollection_t29582142, ___inTransition_2)); }
	inline DataRelation_t934786094 * get_inTransition_2() const { return ___inTransition_2; }
	inline DataRelation_t934786094 ** get_address_of_inTransition_2() { return &___inTransition_2; }
	inline void set_inTransition_2(DataRelation_t934786094 * value)
	{
		___inTransition_2 = value;
		Il2CppCodeGenWriteBarrier((&___inTransition_2), value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(DataRelationCollection_t29582142, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_CollectionChanged_4() { return static_cast<int32_t>(offsetof(DataRelationCollection_t29582142, ___CollectionChanged_4)); }
	inline CollectionChangeEventHandler_t1895388503 * get_CollectionChanged_4() const { return ___CollectionChanged_4; }
	inline CollectionChangeEventHandler_t1895388503 ** get_address_of_CollectionChanged_4() { return &___CollectionChanged_4; }
	inline void set_CollectionChanged_4(CollectionChangeEventHandler_t1895388503 * value)
	{
		___CollectionChanged_4 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATARELATIONCOLLECTION_T29582142_H
#ifndef SQLBINARY_T2160009519_H
#define SQLBINARY_T2160009519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBinary
struct  SqlBinary_t2160009519 
{
public:
	// System.Byte[] System.Data.SqlTypes.SqlBinary::value
	ByteU5BU5D_t2896786162* ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlBinary::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlBinary_t2160009519, ___value_0)); }
	inline ByteU5BU5D_t2896786162* get_value_0() const { return ___value_0; }
	inline ByteU5BU5D_t2896786162** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(ByteU5BU5D_t2896786162* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlBinary_t2160009519, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlBinary_t2160009519_StaticFields
{
public:
	// System.Data.SqlTypes.SqlBinary System.Data.SqlTypes.SqlBinary::Null
	SqlBinary_t2160009519  ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(SqlBinary_t2160009519_StaticFields, ___Null_2)); }
	inline SqlBinary_t2160009519  get_Null_2() const { return ___Null_2; }
	inline SqlBinary_t2160009519 * get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(SqlBinary_t2160009519  value)
	{
		___Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlBinary
struct SqlBinary_t2160009519_marshaled_pinvoke
{
	uint8_t* ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlBinary
struct SqlBinary_t2160009519_marshaled_com
{
	uint8_t* ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLBINARY_T2160009519_H
#ifndef SQLBOOLEAN_T3863231501_H
#define SQLBOOLEAN_T3863231501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBoolean
struct  SqlBoolean_t3863231501 
{
public:
	// System.Byte System.Data.SqlTypes.SqlBoolean::value
	uint8_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlBoolean::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlBoolean_t3863231501, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlBoolean_t3863231501, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlBoolean_t3863231501_StaticFields
{
public:
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::False
	SqlBoolean_t3863231501  ___False_2;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Null
	SqlBoolean_t3863231501  ___Null_3;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::One
	SqlBoolean_t3863231501  ___One_4;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::True
	SqlBoolean_t3863231501  ___True_5;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Zero
	SqlBoolean_t3863231501  ___Zero_6;

public:
	inline static int32_t get_offset_of_False_2() { return static_cast<int32_t>(offsetof(SqlBoolean_t3863231501_StaticFields, ___False_2)); }
	inline SqlBoolean_t3863231501  get_False_2() const { return ___False_2; }
	inline SqlBoolean_t3863231501 * get_address_of_False_2() { return &___False_2; }
	inline void set_False_2(SqlBoolean_t3863231501  value)
	{
		___False_2 = value;
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(SqlBoolean_t3863231501_StaticFields, ___Null_3)); }
	inline SqlBoolean_t3863231501  get_Null_3() const { return ___Null_3; }
	inline SqlBoolean_t3863231501 * get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(SqlBoolean_t3863231501  value)
	{
		___Null_3 = value;
	}

	inline static int32_t get_offset_of_One_4() { return static_cast<int32_t>(offsetof(SqlBoolean_t3863231501_StaticFields, ___One_4)); }
	inline SqlBoolean_t3863231501  get_One_4() const { return ___One_4; }
	inline SqlBoolean_t3863231501 * get_address_of_One_4() { return &___One_4; }
	inline void set_One_4(SqlBoolean_t3863231501  value)
	{
		___One_4 = value;
	}

	inline static int32_t get_offset_of_True_5() { return static_cast<int32_t>(offsetof(SqlBoolean_t3863231501_StaticFields, ___True_5)); }
	inline SqlBoolean_t3863231501  get_True_5() const { return ___True_5; }
	inline SqlBoolean_t3863231501 * get_address_of_True_5() { return &___True_5; }
	inline void set_True_5(SqlBoolean_t3863231501  value)
	{
		___True_5 = value;
	}

	inline static int32_t get_offset_of_Zero_6() { return static_cast<int32_t>(offsetof(SqlBoolean_t3863231501_StaticFields, ___Zero_6)); }
	inline SqlBoolean_t3863231501  get_Zero_6() const { return ___Zero_6; }
	inline SqlBoolean_t3863231501 * get_address_of_Zero_6() { return &___Zero_6; }
	inline void set_Zero_6(SqlBoolean_t3863231501  value)
	{
		___Zero_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlBoolean
struct SqlBoolean_t3863231501_marshaled_pinvoke
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlBoolean
struct SqlBoolean_t3863231501_marshaled_com
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLBOOLEAN_T3863231501_H
#ifndef SQLBYTE_T2090979296_H
#define SQLBYTE_T2090979296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlByte
struct  SqlByte_t2090979296 
{
public:
	// System.Byte System.Data.SqlTypes.SqlByte::value
	uint8_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlByte::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlByte_t2090979296, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlByte_t2090979296, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlByte_t2090979296_StaticFields
{
public:
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::MaxValue
	SqlByte_t2090979296  ___MaxValue_2;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::MinValue
	SqlByte_t2090979296  ___MinValue_3;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::Null
	SqlByte_t2090979296  ___Null_4;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::Zero
	SqlByte_t2090979296  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlByte_t2090979296_StaticFields, ___MaxValue_2)); }
	inline SqlByte_t2090979296  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlByte_t2090979296 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlByte_t2090979296  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlByte_t2090979296_StaticFields, ___MinValue_3)); }
	inline SqlByte_t2090979296  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlByte_t2090979296 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlByte_t2090979296  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlByte_t2090979296_StaticFields, ___Null_4)); }
	inline SqlByte_t2090979296  get_Null_4() const { return ___Null_4; }
	inline SqlByte_t2090979296 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlByte_t2090979296  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlByte_t2090979296_StaticFields, ___Zero_5)); }
	inline SqlByte_t2090979296  get_Zero_5() const { return ___Zero_5; }
	inline SqlByte_t2090979296 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlByte_t2090979296  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlByte
struct SqlByte_t2090979296_marshaled_pinvoke
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlByte
struct SqlByte_t2090979296_marshaled_com
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLBYTE_T2090979296_H
#ifndef DATATABLEMAPPINGCOLLECTION_T4025772068_H
#define DATATABLEMAPPINGCOLLECTION_T4025772068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataTableMappingCollection
struct  DataTableMappingCollection_t4025772068  : public MarshalByRefObject_t1236449280
{
public:
	// System.Collections.ArrayList System.Data.Common.DataTableMappingCollection::mappings
	ArrayList_t844188058 * ___mappings_1;
	// System.Collections.Hashtable System.Data.Common.DataTableMappingCollection::sourceTables
	Hashtable_t2604207785 * ___sourceTables_2;
	// System.Collections.Hashtable System.Data.Common.DataTableMappingCollection::dataSetTables
	Hashtable_t2604207785 * ___dataSetTables_3;

public:
	inline static int32_t get_offset_of_mappings_1() { return static_cast<int32_t>(offsetof(DataTableMappingCollection_t4025772068, ___mappings_1)); }
	inline ArrayList_t844188058 * get_mappings_1() const { return ___mappings_1; }
	inline ArrayList_t844188058 ** get_address_of_mappings_1() { return &___mappings_1; }
	inline void set_mappings_1(ArrayList_t844188058 * value)
	{
		___mappings_1 = value;
		Il2CppCodeGenWriteBarrier((&___mappings_1), value);
	}

	inline static int32_t get_offset_of_sourceTables_2() { return static_cast<int32_t>(offsetof(DataTableMappingCollection_t4025772068, ___sourceTables_2)); }
	inline Hashtable_t2604207785 * get_sourceTables_2() const { return ___sourceTables_2; }
	inline Hashtable_t2604207785 ** get_address_of_sourceTables_2() { return &___sourceTables_2; }
	inline void set_sourceTables_2(Hashtable_t2604207785 * value)
	{
		___sourceTables_2 = value;
		Il2CppCodeGenWriteBarrier((&___sourceTables_2), value);
	}

	inline static int32_t get_offset_of_dataSetTables_3() { return static_cast<int32_t>(offsetof(DataTableMappingCollection_t4025772068, ___dataSetTables_3)); }
	inline Hashtable_t2604207785 * get_dataSetTables_3() const { return ___dataSetTables_3; }
	inline Hashtable_t2604207785 ** get_address_of_dataSetTables_3() { return &___dataSetTables_3; }
	inline void set_dataSetTables_3(Hashtable_t2604207785 * value)
	{
		___dataSetTables_3 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetTables_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLEMAPPINGCOLLECTION_T4025772068_H
#ifndef CONSTRAINTCOLLECTION_T4288629486_H
#define CONSTRAINTCOLLECTION_T4288629486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintCollection
struct  ConstraintCollection_t4288629486  : public InternalDataCollectionBase_t313478723
{
public:
	// System.Data.DataTable System.Data.ConstraintCollection::table
	DataTable_t4118261672 * ___table_2;
	// System.Data.Constraint[] System.Data.ConstraintCollection::_mostRecentConstraints
	ConstraintU5BU5D_t3140182012* ____mostRecentConstraints_3;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.ConstraintCollection::CollectionChanged
	CollectionChangeEventHandler_t1895388503 * ___CollectionChanged_4;

public:
	inline static int32_t get_offset_of_table_2() { return static_cast<int32_t>(offsetof(ConstraintCollection_t4288629486, ___table_2)); }
	inline DataTable_t4118261672 * get_table_2() const { return ___table_2; }
	inline DataTable_t4118261672 ** get_address_of_table_2() { return &___table_2; }
	inline void set_table_2(DataTable_t4118261672 * value)
	{
		___table_2 = value;
		Il2CppCodeGenWriteBarrier((&___table_2), value);
	}

	inline static int32_t get_offset_of__mostRecentConstraints_3() { return static_cast<int32_t>(offsetof(ConstraintCollection_t4288629486, ____mostRecentConstraints_3)); }
	inline ConstraintU5BU5D_t3140182012* get__mostRecentConstraints_3() const { return ____mostRecentConstraints_3; }
	inline ConstraintU5BU5D_t3140182012** get_address_of__mostRecentConstraints_3() { return &____mostRecentConstraints_3; }
	inline void set__mostRecentConstraints_3(ConstraintU5BU5D_t3140182012* value)
	{
		____mostRecentConstraints_3 = value;
		Il2CppCodeGenWriteBarrier((&____mostRecentConstraints_3), value);
	}

	inline static int32_t get_offset_of_CollectionChanged_4() { return static_cast<int32_t>(offsetof(ConstraintCollection_t4288629486, ___CollectionChanged_4)); }
	inline CollectionChangeEventHandler_t1895388503 * get_CollectionChanged_4() const { return ___CollectionChanged_4; }
	inline CollectionChangeEventHandler_t1895388503 ** get_address_of_CollectionChanged_4() { return &___CollectionChanged_4; }
	inline void set_CollectionChanged_4(CollectionChangeEventHandler_t1895388503 * value)
	{
		___CollectionChanged_4 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTCOLLECTION_T4288629486_H
#ifndef OBJECTDATACONTAINER_T2993343262_H
#define OBJECTDATACONTAINER_T2993343262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.ObjectDataContainer
struct  ObjectDataContainer_t2993343262  : public DataContainer_t2560448845
{
public:
	// System.Object[] System.Data.Common.ObjectDataContainer::_values
	ObjectU5BU5D_t2392277051* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(ObjectDataContainer_t2993343262, ____values_3)); }
	inline ObjectU5BU5D_t2392277051* get__values_3() const { return ____values_3; }
	inline ObjectU5BU5D_t2392277051** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(ObjectU5BU5D_t2392277051* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTDATACONTAINER_T2993343262_H
#ifndef UNARYEXPRESSION_T2130597037_H
#define UNARYEXPRESSION_T2130597037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.UnaryExpression
struct  UnaryExpression_t2130597037  : public BaseExpression_t363930473
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.UnaryExpression::expr
	RuntimeObject* ___expr_0;

public:
	inline static int32_t get_offset_of_expr_0() { return static_cast<int32_t>(offsetof(UnaryExpression_t2130597037, ___expr_0)); }
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
#endif // UNARYEXPRESSION_T2130597037_H
#ifndef BINARYEXPRESSION_T922996004_H
#define BINARYEXPRESSION_T922996004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.BinaryExpression
struct  BinaryExpression_t922996004  : public BaseExpression_t363930473
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.BinaryExpression::expr1
	RuntimeObject* ___expr1_0;
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.BinaryExpression::expr2
	RuntimeObject* ___expr2_1;

public:
	inline static int32_t get_offset_of_expr1_0() { return static_cast<int32_t>(offsetof(BinaryExpression_t922996004, ___expr1_0)); }
	inline RuntimeObject* get_expr1_0() const { return ___expr1_0; }
	inline RuntimeObject** get_address_of_expr1_0() { return &___expr1_0; }
	inline void set_expr1_0(RuntimeObject* value)
	{
		___expr1_0 = value;
		Il2CppCodeGenWriteBarrier((&___expr1_0), value);
	}

	inline static int32_t get_offset_of_expr2_1() { return static_cast<int32_t>(offsetof(BinaryExpression_t922996004, ___expr2_1)); }
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
#endif // BINARYEXPRESSION_T922996004_H
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
#ifndef PROPERTYDESCRIPTOR_T4009622457_H
#define PROPERTYDESCRIPTOR_T4009622457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t4009622457  : public MemberDescriptor_t3689707769
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t2966684696 * ___converter_4;
	// System.Collections.Hashtable System.ComponentModel.PropertyDescriptor::notifiers
	Hashtable_t2604207785 * ___notifiers_5;

public:
	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t4009622457, ___converter_4)); }
	inline TypeConverter_t2966684696 * get_converter_4() const { return ___converter_4; }
	inline TypeConverter_t2966684696 ** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(TypeConverter_t2966684696 * value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}

	inline static int32_t get_offset_of_notifiers_5() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t4009622457, ___notifiers_5)); }
	inline Hashtable_t2604207785 * get_notifiers_5() const { return ___notifiers_5; }
	inline Hashtable_t2604207785 ** get_address_of_notifiers_5() { return &___notifiers_5; }
	inline void set_notifiers_5(Hashtable_t2604207785 * value)
	{
		___notifiers_5 = value;
		Il2CppCodeGenWriteBarrier((&___notifiers_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T4009622457_H
#ifndef LITERAL_T4158847555_H
#define LITERAL_T4158847555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Literal
struct  Literal_t4158847555  : public BaseExpression_t363930473
{
public:
	// System.Object Mono.Data.SqlExpressions.Literal::val
	RuntimeObject * ___val_0;

public:
	inline static int32_t get_offset_of_val_0() { return static_cast<int32_t>(offsetof(Literal_t4158847555, ___val_0)); }
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
#endif // LITERAL_T4158847555_H
#ifndef CATEGORYATTRIBUTE_T1826438136_H
#define CATEGORYATTRIBUTE_T1826438136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CategoryAttribute
struct  CategoryAttribute_t1826438136  : public Attribute_t4043032847
{
public:
	// System.String System.ComponentModel.CategoryAttribute::category
	String_t* ___category_0;
	// System.Boolean System.ComponentModel.CategoryAttribute::IsLocalized
	bool ___IsLocalized_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_IsLocalized_1() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136, ___IsLocalized_1)); }
	inline bool get_IsLocalized_1() const { return ___IsLocalized_1; }
	inline bool* get_address_of_IsLocalized_1() { return &___IsLocalized_1; }
	inline void set_IsLocalized_1(bool value)
	{
		___IsLocalized_1 = value;
	}
};

struct CategoryAttribute_t1826438136_StaticFields
{
public:
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::action
	CategoryAttribute_t1826438136 * ___action_2;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::appearance
	CategoryAttribute_t1826438136 * ___appearance_3;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::behaviour
	CategoryAttribute_t1826438136 * ___behaviour_4;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::data
	CategoryAttribute_t1826438136 * ___data_5;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::def
	CategoryAttribute_t1826438136 * ___def_6;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::design
	CategoryAttribute_t1826438136 * ___design_7;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::drag_drop
	CategoryAttribute_t1826438136 * ___drag_drop_8;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::focus
	CategoryAttribute_t1826438136 * ___focus_9;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::format
	CategoryAttribute_t1826438136 * ___format_10;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::key
	CategoryAttribute_t1826438136 * ___key_11;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::layout
	CategoryAttribute_t1826438136 * ___layout_12;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::mouse
	CategoryAttribute_t1826438136 * ___mouse_13;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::window_style
	CategoryAttribute_t1826438136 * ___window_style_14;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::async
	CategoryAttribute_t1826438136 * ___async_15;
	// System.Object System.ComponentModel.CategoryAttribute::lockobj
	RuntimeObject * ___lockobj_16;

public:
	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___action_2)); }
	inline CategoryAttribute_t1826438136 * get_action_2() const { return ___action_2; }
	inline CategoryAttribute_t1826438136 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(CategoryAttribute_t1826438136 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_appearance_3() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___appearance_3)); }
	inline CategoryAttribute_t1826438136 * get_appearance_3() const { return ___appearance_3; }
	inline CategoryAttribute_t1826438136 ** get_address_of_appearance_3() { return &___appearance_3; }
	inline void set_appearance_3(CategoryAttribute_t1826438136 * value)
	{
		___appearance_3 = value;
		Il2CppCodeGenWriteBarrier((&___appearance_3), value);
	}

	inline static int32_t get_offset_of_behaviour_4() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___behaviour_4)); }
	inline CategoryAttribute_t1826438136 * get_behaviour_4() const { return ___behaviour_4; }
	inline CategoryAttribute_t1826438136 ** get_address_of_behaviour_4() { return &___behaviour_4; }
	inline void set_behaviour_4(CategoryAttribute_t1826438136 * value)
	{
		___behaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&___behaviour_4), value);
	}

	inline static int32_t get_offset_of_data_5() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___data_5)); }
	inline CategoryAttribute_t1826438136 * get_data_5() const { return ___data_5; }
	inline CategoryAttribute_t1826438136 ** get_address_of_data_5() { return &___data_5; }
	inline void set_data_5(CategoryAttribute_t1826438136 * value)
	{
		___data_5 = value;
		Il2CppCodeGenWriteBarrier((&___data_5), value);
	}

	inline static int32_t get_offset_of_def_6() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___def_6)); }
	inline CategoryAttribute_t1826438136 * get_def_6() const { return ___def_6; }
	inline CategoryAttribute_t1826438136 ** get_address_of_def_6() { return &___def_6; }
	inline void set_def_6(CategoryAttribute_t1826438136 * value)
	{
		___def_6 = value;
		Il2CppCodeGenWriteBarrier((&___def_6), value);
	}

	inline static int32_t get_offset_of_design_7() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___design_7)); }
	inline CategoryAttribute_t1826438136 * get_design_7() const { return ___design_7; }
	inline CategoryAttribute_t1826438136 ** get_address_of_design_7() { return &___design_7; }
	inline void set_design_7(CategoryAttribute_t1826438136 * value)
	{
		___design_7 = value;
		Il2CppCodeGenWriteBarrier((&___design_7), value);
	}

	inline static int32_t get_offset_of_drag_drop_8() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___drag_drop_8)); }
	inline CategoryAttribute_t1826438136 * get_drag_drop_8() const { return ___drag_drop_8; }
	inline CategoryAttribute_t1826438136 ** get_address_of_drag_drop_8() { return &___drag_drop_8; }
	inline void set_drag_drop_8(CategoryAttribute_t1826438136 * value)
	{
		___drag_drop_8 = value;
		Il2CppCodeGenWriteBarrier((&___drag_drop_8), value);
	}

	inline static int32_t get_offset_of_focus_9() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___focus_9)); }
	inline CategoryAttribute_t1826438136 * get_focus_9() const { return ___focus_9; }
	inline CategoryAttribute_t1826438136 ** get_address_of_focus_9() { return &___focus_9; }
	inline void set_focus_9(CategoryAttribute_t1826438136 * value)
	{
		___focus_9 = value;
		Il2CppCodeGenWriteBarrier((&___focus_9), value);
	}

	inline static int32_t get_offset_of_format_10() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___format_10)); }
	inline CategoryAttribute_t1826438136 * get_format_10() const { return ___format_10; }
	inline CategoryAttribute_t1826438136 ** get_address_of_format_10() { return &___format_10; }
	inline void set_format_10(CategoryAttribute_t1826438136 * value)
	{
		___format_10 = value;
		Il2CppCodeGenWriteBarrier((&___format_10), value);
	}

	inline static int32_t get_offset_of_key_11() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___key_11)); }
	inline CategoryAttribute_t1826438136 * get_key_11() const { return ___key_11; }
	inline CategoryAttribute_t1826438136 ** get_address_of_key_11() { return &___key_11; }
	inline void set_key_11(CategoryAttribute_t1826438136 * value)
	{
		___key_11 = value;
		Il2CppCodeGenWriteBarrier((&___key_11), value);
	}

	inline static int32_t get_offset_of_layout_12() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___layout_12)); }
	inline CategoryAttribute_t1826438136 * get_layout_12() const { return ___layout_12; }
	inline CategoryAttribute_t1826438136 ** get_address_of_layout_12() { return &___layout_12; }
	inline void set_layout_12(CategoryAttribute_t1826438136 * value)
	{
		___layout_12 = value;
		Il2CppCodeGenWriteBarrier((&___layout_12), value);
	}

	inline static int32_t get_offset_of_mouse_13() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___mouse_13)); }
	inline CategoryAttribute_t1826438136 * get_mouse_13() const { return ___mouse_13; }
	inline CategoryAttribute_t1826438136 ** get_address_of_mouse_13() { return &___mouse_13; }
	inline void set_mouse_13(CategoryAttribute_t1826438136 * value)
	{
		___mouse_13 = value;
		Il2CppCodeGenWriteBarrier((&___mouse_13), value);
	}

	inline static int32_t get_offset_of_window_style_14() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___window_style_14)); }
	inline CategoryAttribute_t1826438136 * get_window_style_14() const { return ___window_style_14; }
	inline CategoryAttribute_t1826438136 ** get_address_of_window_style_14() { return &___window_style_14; }
	inline void set_window_style_14(CategoryAttribute_t1826438136 * value)
	{
		___window_style_14 = value;
		Il2CppCodeGenWriteBarrier((&___window_style_14), value);
	}

	inline static int32_t get_offset_of_async_15() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___async_15)); }
	inline CategoryAttribute_t1826438136 * get_async_15() const { return ___async_15; }
	inline CategoryAttribute_t1826438136 ** get_address_of_async_15() { return &___async_15; }
	inline void set_async_15(CategoryAttribute_t1826438136 * value)
	{
		___async_15 = value;
		Il2CppCodeGenWriteBarrier((&___async_15), value);
	}

	inline static int32_t get_offset_of_lockobj_16() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1826438136_StaticFields, ___lockobj_16)); }
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
#endif // CATEGORYATTRIBUTE_T1826438136_H
#ifndef EXPANDABLEOBJECTCONVERTER_T1455872238_H
#define EXPANDABLEOBJECTCONVERTER_T1455872238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t1455872238  : public TypeConverter_t2966684696
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T1455872238_H
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
#ifndef DATATABLEMAPPING_T3698492202_H
#define DATATABLEMAPPING_T3698492202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataTableMapping
struct  DataTableMapping_t3698492202  : public MarshalByRefObject_t1236449280
{
public:
	// System.String System.Data.Common.DataTableMapping::sourceTable
	String_t* ___sourceTable_1;
	// System.String System.Data.Common.DataTableMapping::dataSetTable
	String_t* ___dataSetTable_2;
	// System.Data.Common.DataColumnMappingCollection System.Data.Common.DataTableMapping::columnMappings
	DataColumnMappingCollection_t1716282864 * ___columnMappings_3;

public:
	inline static int32_t get_offset_of_sourceTable_1() { return static_cast<int32_t>(offsetof(DataTableMapping_t3698492202, ___sourceTable_1)); }
	inline String_t* get_sourceTable_1() const { return ___sourceTable_1; }
	inline String_t** get_address_of_sourceTable_1() { return &___sourceTable_1; }
	inline void set_sourceTable_1(String_t* value)
	{
		___sourceTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___sourceTable_1), value);
	}

	inline static int32_t get_offset_of_dataSetTable_2() { return static_cast<int32_t>(offsetof(DataTableMapping_t3698492202, ___dataSetTable_2)); }
	inline String_t* get_dataSetTable_2() const { return ___dataSetTable_2; }
	inline String_t** get_address_of_dataSetTable_2() { return &___dataSetTable_2; }
	inline void set_dataSetTable_2(String_t* value)
	{
		___dataSetTable_2 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetTable_2), value);
	}

	inline static int32_t get_offset_of_columnMappings_3() { return static_cast<int32_t>(offsetof(DataTableMapping_t3698492202, ___columnMappings_3)); }
	inline DataColumnMappingCollection_t1716282864 * get_columnMappings_3() const { return ___columnMappings_3; }
	inline DataColumnMappingCollection_t1716282864 ** get_address_of_columnMappings_3() { return &___columnMappings_3; }
	inline void set_columnMappings_3(DataColumnMappingCollection_t1716282864 * value)
	{
		___columnMappings_3 = value;
		Il2CppCodeGenWriteBarrier((&___columnMappings_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLEMAPPING_T3698492202_H
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
	RandomNumberGenerator_t2194148873 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2194148873 * ____fastRng_14;

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
	inline RandomNumberGenerator_t2194148873 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2194148873 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2194148873 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2194148873 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2194148873 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2194148873 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef DATACOLUMNMAPPING_T1911464710_H
#define DATACOLUMNMAPPING_T1911464710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataColumnMapping
struct  DataColumnMapping_t1911464710  : public MarshalByRefObject_t1236449280
{
public:
	// System.String System.Data.Common.DataColumnMapping::sourceColumn
	String_t* ___sourceColumn_1;
	// System.String System.Data.Common.DataColumnMapping::dataSetColumn
	String_t* ___dataSetColumn_2;

public:
	inline static int32_t get_offset_of_sourceColumn_1() { return static_cast<int32_t>(offsetof(DataColumnMapping_t1911464710, ___sourceColumn_1)); }
	inline String_t* get_sourceColumn_1() const { return ___sourceColumn_1; }
	inline String_t** get_address_of_sourceColumn_1() { return &___sourceColumn_1; }
	inline void set_sourceColumn_1(String_t* value)
	{
		___sourceColumn_1 = value;
		Il2CppCodeGenWriteBarrier((&___sourceColumn_1), value);
	}

	inline static int32_t get_offset_of_dataSetColumn_2() { return static_cast<int32_t>(offsetof(DataColumnMapping_t1911464710, ___dataSetColumn_2)); }
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
#endif // DATACOLUMNMAPPING_T1911464710_H
#ifndef DATACOLUMNMAPPINGCOLLECTION_T1716282864_H
#define DATACOLUMNMAPPINGCOLLECTION_T1716282864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataColumnMappingCollection
struct  DataColumnMappingCollection_t1716282864  : public MarshalByRefObject_t1236449280
{
public:
	// System.Collections.ArrayList System.Data.Common.DataColumnMappingCollection::list
	ArrayList_t844188058 * ___list_1;
	// System.Collections.Hashtable System.Data.Common.DataColumnMappingCollection::sourceColumns
	Hashtable_t2604207785 * ___sourceColumns_2;
	// System.Collections.Hashtable System.Data.Common.DataColumnMappingCollection::dataSetColumns
	Hashtable_t2604207785 * ___dataSetColumns_3;

public:
	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(DataColumnMappingCollection_t1716282864, ___list_1)); }
	inline ArrayList_t844188058 * get_list_1() const { return ___list_1; }
	inline ArrayList_t844188058 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(ArrayList_t844188058 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier((&___list_1), value);
	}

	inline static int32_t get_offset_of_sourceColumns_2() { return static_cast<int32_t>(offsetof(DataColumnMappingCollection_t1716282864, ___sourceColumns_2)); }
	inline Hashtable_t2604207785 * get_sourceColumns_2() const { return ___sourceColumns_2; }
	inline Hashtable_t2604207785 ** get_address_of_sourceColumns_2() { return &___sourceColumns_2; }
	inline void set_sourceColumns_2(Hashtable_t2604207785 * value)
	{
		___sourceColumns_2 = value;
		Il2CppCodeGenWriteBarrier((&___sourceColumns_2), value);
	}

	inline static int32_t get_offset_of_dataSetColumns_3() { return static_cast<int32_t>(offsetof(DataColumnMappingCollection_t1716282864, ___dataSetColumns_3)); }
	inline Hashtable_t2604207785 * get_dataSetColumns_3() const { return ___dataSetColumns_3; }
	inline Hashtable_t2604207785 ** get_address_of_dataSetColumns_3() { return &___dataSetColumns_3; }
	inline void set_dataSetColumns_3(Hashtable_t2604207785 * value)
	{
		___dataSetColumns_3 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetColumns_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACOLUMNMAPPINGCOLLECTION_T1716282864_H
#ifndef DECIMAL_T866531339_H
#define DECIMAL_T866531339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t866531339 
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
	inline static int32_t get_offset_of_flags_6() { return static_cast<int32_t>(offsetof(Decimal_t866531339, ___flags_6)); }
	inline uint32_t get_flags_6() const { return ___flags_6; }
	inline uint32_t* get_address_of_flags_6() { return &___flags_6; }
	inline void set_flags_6(uint32_t value)
	{
		___flags_6 = value;
	}

	inline static int32_t get_offset_of_hi_7() { return static_cast<int32_t>(offsetof(Decimal_t866531339, ___hi_7)); }
	inline uint32_t get_hi_7() const { return ___hi_7; }
	inline uint32_t* get_address_of_hi_7() { return &___hi_7; }
	inline void set_hi_7(uint32_t value)
	{
		___hi_7 = value;
	}

	inline static int32_t get_offset_of_lo_8() { return static_cast<int32_t>(offsetof(Decimal_t866531339, ___lo_8)); }
	inline uint32_t get_lo_8() const { return ___lo_8; }
	inline uint32_t* get_address_of_lo_8() { return &___lo_8; }
	inline void set_lo_8(uint32_t value)
	{
		___lo_8 = value;
	}

	inline static int32_t get_offset_of_mid_9() { return static_cast<int32_t>(offsetof(Decimal_t866531339, ___mid_9)); }
	inline uint32_t get_mid_9() const { return ___mid_9; }
	inline uint32_t* get_address_of_mid_9() { return &___mid_9; }
	inline void set_mid_9(uint32_t value)
	{
		___mid_9 = value;
	}
};

struct Decimal_t866531339_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t866531339  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t866531339  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t866531339  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t866531339  ___One_3;
	// System.Decimal System.Decimal::Zero
	Decimal_t866531339  ___Zero_4;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t866531339  ___MaxValueDiv10_5;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t866531339_StaticFields, ___MinValue_0)); }
	inline Decimal_t866531339  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t866531339 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t866531339  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t866531339_StaticFields, ___MaxValue_1)); }
	inline Decimal_t866531339  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t866531339 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t866531339  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t866531339_StaticFields, ___MinusOne_2)); }
	inline Decimal_t866531339  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t866531339 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t866531339  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t866531339_StaticFields, ___One_3)); }
	inline Decimal_t866531339  get_One_3() const { return ___One_3; }
	inline Decimal_t866531339 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t866531339  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_Zero_4() { return static_cast<int32_t>(offsetof(Decimal_t866531339_StaticFields, ___Zero_4)); }
	inline Decimal_t866531339  get_Zero_4() const { return ___Zero_4; }
	inline Decimal_t866531339 * get_address_of_Zero_4() { return &___Zero_4; }
	inline void set_Zero_4(Decimal_t866531339  value)
	{
		___Zero_4 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_5() { return static_cast<int32_t>(offsetof(Decimal_t866531339_StaticFields, ___MaxValueDiv10_5)); }
	inline Decimal_t866531339  get_MaxValueDiv10_5() const { return ___MaxValueDiv10_5; }
	inline Decimal_t866531339 * get_address_of_MaxValueDiv10_5() { return &___MaxValueDiv10_5; }
	inline void set_MaxValueDiv10_5(Decimal_t866531339  value)
	{
		___MaxValueDiv10_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T866531339_H
#ifndef CHARDATACONTAINER_T1850580357_H
#define CHARDATACONTAINER_T1850580357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.CharDataContainer
struct  CharDataContainer_t1850580357  : public DataContainer_t2560448845
{
public:
	// System.Char[] System.Data.Common.CharDataContainer::_values
	CharU5BU5D_t1565992178* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(CharDataContainer_t1850580357, ____values_3)); }
	inline CharU5BU5D_t1565992178* get__values_3() const { return ____values_3; }
	inline CharU5BU5D_t1565992178** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(CharU5BU5D_t1565992178* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARDATACONTAINER_T1850580357_H
#ifndef BYTEDATACONTAINER_T3780782999_H
#define BYTEDATACONTAINER_T3780782999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.ByteDataContainer
struct  ByteDataContainer_t3780782999  : public DataContainer_t2560448845
{
public:
	// System.Byte[] System.Data.Common.ByteDataContainer::_values
	ByteU5BU5D_t2896786162* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(ByteDataContainer_t3780782999, ____values_3)); }
	inline ByteU5BU5D_t2896786162* get__values_3() const { return ____values_3; }
	inline ByteU5BU5D_t2896786162** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(ByteU5BU5D_t2896786162* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEDATACONTAINER_T3780782999_H
#ifndef SBYTEDATACONTAINER_T3590846956_H
#define SBYTEDATACONTAINER_T3590846956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.SByteDataContainer
struct  SByteDataContainer_t3590846956  : public DataContainer_t2560448845
{
public:
	// System.SByte[] System.Data.Common.SByteDataContainer::_values
	SByteU5BU5D_t3696374397* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(SByteDataContainer_t3590846956, ____values_3)); }
	inline SByteU5BU5D_t3696374397* get__values_3() const { return ____values_3; }
	inline SByteU5BU5D_t3696374397** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(SByteU5BU5D_t3696374397* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTEDATACONTAINER_T3590846956_H
#ifndef INT16DATACONTAINER_T344998768_H
#define INT16DATACONTAINER_T344998768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Int16DataContainer
struct  Int16DataContainer_t344998768  : public DataContainer_t2560448845
{
public:
	// System.Int16[] System.Data.Common.Int16DataContainer::_values
	Int16U5BU5D_t662621095* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(Int16DataContainer_t344998768, ____values_3)); }
	inline Int16U5BU5D_t662621095* get__values_3() const { return ____values_3; }
	inline Int16U5BU5D_t662621095** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(Int16U5BU5D_t662621095* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16DATACONTAINER_T344998768_H
#ifndef DOUBLEDATACONTAINER_T394368610_H
#define DOUBLEDATACONTAINER_T394368610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DoubleDataContainer
struct  DoubleDataContainer_t394368610  : public DataContainer_t2560448845
{
public:
	// System.Double[] System.Data.Common.DoubleDataContainer::_values
	DoubleU5BU5D_t3232068027* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(DoubleDataContainer_t394368610, ____values_3)); }
	inline DoubleU5BU5D_t3232068027* get__values_3() const { return ____values_3; }
	inline DoubleU5BU5D_t3232068027** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(DoubleU5BU5D_t3232068027* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLEDATACONTAINER_T394368610_H
#ifndef UINT16DATACONTAINER_T3636703352_H
#define UINT16DATACONTAINER_T3636703352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.UInt16DataContainer
struct  UInt16DataContainer_t3636703352  : public DataContainer_t2560448845
{
public:
	// System.UInt16[] System.Data.Common.UInt16DataContainer::_values
	UInt16U5BU5D_t4089535718* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(UInt16DataContainer_t3636703352, ____values_3)); }
	inline UInt16U5BU5D_t4089535718* get__values_3() const { return ____values_3; }
	inline UInt16U5BU5D_t4089535718** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(UInt16U5BU5D_t4089535718* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16DATACONTAINER_T3636703352_H
#ifndef INT32DATACONTAINER_T3069240494_H
#define INT32DATACONTAINER_T3069240494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Int32DataContainer
struct  Int32DataContainer_t3069240494  : public DataContainer_t2560448845
{
public:
	// System.Int32[] System.Data.Common.Int32DataContainer::_values
	Int32U5BU5D_t3325461767* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(Int32DataContainer_t3069240494, ____values_3)); }
	inline Int32U5BU5D_t3325461767* get__values_3() const { return ____values_3; }
	inline Int32U5BU5D_t3325461767** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(Int32U5BU5D_t3325461767* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32DATACONTAINER_T3069240494_H
#ifndef UINT32DATACONTAINER_T51751632_H
#define UINT32DATACONTAINER_T51751632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.UInt32DataContainer
struct  UInt32DataContainer_t51751632  : public DataContainer_t2560448845
{
public:
	// System.UInt32[] System.Data.Common.UInt32DataContainer::_values
	UInt32U5BU5D_t1190422219* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(UInt32DataContainer_t51751632, ____values_3)); }
	inline UInt32U5BU5D_t1190422219* get__values_3() const { return ____values_3; }
	inline UInt32U5BU5D_t1190422219** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(UInt32U5BU5D_t1190422219* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32DATACONTAINER_T51751632_H
#ifndef SINGLEDATACONTAINER_T1044559012_H
#define SINGLEDATACONTAINER_T1044559012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.SingleDataContainer
struct  SingleDataContainer_t1044559012  : public DataContainer_t2560448845
{
public:
	// System.Single[] System.Data.Common.SingleDataContainer::_values
	SingleU5BU5D_t437366610* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(SingleDataContainer_t1044559012, ____values_3)); }
	inline SingleU5BU5D_t437366610* get__values_3() const { return ____values_3; }
	inline SingleU5BU5D_t437366610** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(SingleU5BU5D_t437366610* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLEDATACONTAINER_T1044559012_H
#ifndef BITDATACONTAINER_T2928497441_H
#define BITDATACONTAINER_T2928497441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.BitDataContainer
struct  BitDataContainer_t2928497441  : public DataContainer_t2560448845
{
public:
	// System.Collections.BitArray System.Data.Common.BitDataContainer::_values
	BitArray_t637848917 * ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(BitDataContainer_t2928497441, ____values_3)); }
	inline BitArray_t637848917 * get__values_3() const { return ____values_3; }
	inline BitArray_t637848917 ** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(BitArray_t637848917 * value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITDATACONTAINER_T2928497441_H
#ifndef INT64DATACONTAINER_T2112414742_H
#define INT64DATACONTAINER_T2112414742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Int64DataContainer
struct  Int64DataContainer_t2112414742  : public DataContainer_t2560448845
{
public:
	// System.Int64[] System.Data.Common.Int64DataContainer::_values
	Int64U5BU5D_t959283575* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(Int64DataContainer_t2112414742, ____values_3)); }
	inline Int64U5BU5D_t959283575* get__values_3() const { return ____values_3; }
	inline Int64U5BU5D_t959283575** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(Int64U5BU5D_t959283575* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64DATACONTAINER_T2112414742_H
#ifndef UINT64DATACONTAINER_T3615854252_H
#define UINT64DATACONTAINER_T3615854252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.UInt64DataContainer
struct  UInt64DataContainer_t3615854252  : public DataContainer_t2560448845
{
public:
	// System.UInt64[] System.Data.Common.UInt64DataContainer::_values
	UInt64U5BU5D_t2491712279* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(UInt64DataContainer_t3615854252, ____values_3)); }
	inline UInt64U5BU5D_t2491712279* get__values_3() const { return ____values_3; }
	inline UInt64U5BU5D_t2491712279** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(UInt64U5BU5D_t2491712279* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64DATACONTAINER_T3615854252_H
#ifndef DATAROWACTION_T1772990009_H
#define DATAROWACTION_T1772990009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowAction
struct  DataRowAction_t1772990009 
{
public:
	// System.Int32 System.Data.DataRowAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataRowAction_t1772990009, ___value___1)); }
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
#endif // DATAROWACTION_T1772990009_H
#ifndef DATACATEGORYATTRIBUTE_T2295432025_H
#define DATACATEGORYATTRIBUTE_T2295432025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataCategoryAttribute
struct  DataCategoryAttribute_t2295432025  : public CategoryAttribute_t1826438136
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACATEGORYATTRIBUTE_T2295432025_H
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
#ifndef MAPPINGTYPE_T1751259575_H
#define MAPPINGTYPE_T1751259575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MappingType
struct  MappingType_t1751259575 
{
public:
	// System.Int32 System.Data.MappingType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MappingType_t1751259575, ___value___1)); }
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
#endif // MAPPINGTYPE_T1751259575_H
#ifndef DATAEXCEPTION_T3722754043_H
#define DATAEXCEPTION_T3722754043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataException
struct  DataException_t3722754043  : public SystemException_t1180164699
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAEXCEPTION_T3722754043_H
#ifndef DATASETDATETIME_T681595585_H
#define DATASETDATETIME_T681595585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataSetDateTime
struct  DataSetDateTime_t681595585 
{
public:
	// System.Int32 System.Data.DataSetDateTime::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataSetDateTime_t681595585, ___value___1)); }
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
#endif // DATASETDATETIME_T681595585_H
#ifndef DATASETRELATIONCOLLECTION_T1283655997_H
#define DATASETRELATIONCOLLECTION_T1283655997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection/DataSetRelationCollection
struct  DataSetRelationCollection_t1283655997  : public DataRelationCollection_t29582142
{
public:
	// System.Data.DataSet System.Data.DataRelationCollection/DataSetRelationCollection::dataSet
	DataSet_t918332145 * ___dataSet_5;
	// System.Data.DataRelation[] System.Data.DataRelationCollection/DataSetRelationCollection::mostRecentRelations
	DataRelationU5BU5D_t3877125979* ___mostRecentRelations_6;

public:
	inline static int32_t get_offset_of_dataSet_5() { return static_cast<int32_t>(offsetof(DataSetRelationCollection_t1283655997, ___dataSet_5)); }
	inline DataSet_t918332145 * get_dataSet_5() const { return ___dataSet_5; }
	inline DataSet_t918332145 ** get_address_of_dataSet_5() { return &___dataSet_5; }
	inline void set_dataSet_5(DataSet_t918332145 * value)
	{
		___dataSet_5 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_5), value);
	}

	inline static int32_t get_offset_of_mostRecentRelations_6() { return static_cast<int32_t>(offsetof(DataSetRelationCollection_t1283655997, ___mostRecentRelations_6)); }
	inline DataRelationU5BU5D_t3877125979* get_mostRecentRelations_6() const { return ___mostRecentRelations_6; }
	inline DataRelationU5BU5D_t3877125979** get_address_of_mostRecentRelations_6() { return &___mostRecentRelations_6; }
	inline void set_mostRecentRelations_6(DataRelationU5BU5D_t3877125979* value)
	{
		___mostRecentRelations_6 = value;
		Il2CppCodeGenWriteBarrier((&___mostRecentRelations_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETRELATIONCOLLECTION_T1283655997_H
#ifndef DATATABLERELATIONCOLLECTION_T1290177225_H
#define DATATABLERELATIONCOLLECTION_T1290177225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection/DataTableRelationCollection
struct  DataTableRelationCollection_t1290177225  : public DataRelationCollection_t29582142
{
public:
	// System.Data.DataTable System.Data.DataRelationCollection/DataTableRelationCollection::dataTable
	DataTable_t4118261672 * ___dataTable_5;

public:
	inline static int32_t get_offset_of_dataTable_5() { return static_cast<int32_t>(offsetof(DataTableRelationCollection_t1290177225, ___dataTable_5)); }
	inline DataTable_t4118261672 * get_dataTable_5() const { return ___dataTable_5; }
	inline DataTable_t4118261672 ** get_address_of_dataTable_5() { return &___dataTable_5; }
	inline void set_dataTable_5(DataTable_t4118261672 * value)
	{
		___dataTable_5 = value;
		Il2CppCodeGenWriteBarrier((&___dataTable_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLERELATIONCOLLECTION_T1290177225_H
#ifndef DATARELATIONPROPERTYDESCRIPTOR_T3023715853_H
#define DATARELATIONPROPERTYDESCRIPTOR_T3023715853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationPropertyDescriptor
struct  DataRelationPropertyDescriptor_t3023715853  : public PropertyDescriptor_t4009622457
{
public:
	// System.Data.DataRelation System.Data.DataRelationPropertyDescriptor::_relation
	DataRelation_t934786094 * ____relation_6;

public:
	inline static int32_t get_offset_of__relation_6() { return static_cast<int32_t>(offsetof(DataRelationPropertyDescriptor_t3023715853, ____relation_6)); }
	inline DataRelation_t934786094 * get__relation_6() const { return ____relation_6; }
	inline DataRelation_t934786094 ** get_address_of__relation_6() { return &____relation_6; }
	inline void set__relation_6(DataRelation_t934786094 * value)
	{
		____relation_6 = value;
		Il2CppCodeGenWriteBarrier((&____relation_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATARELATIONPROPERTYDESCRIPTOR_T3023715853_H
#ifndef DATACOLUMNPROPERTYDESCRIPTOR_T1796368678_H
#define DATACOLUMNPROPERTYDESCRIPTOR_T1796368678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumnPropertyDescriptor
struct  DataColumnPropertyDescriptor_t1796368678  : public PropertyDescriptor_t4009622457
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
	inline static int32_t get_offset_of_readOnly_6() { return static_cast<int32_t>(offsetof(DataColumnPropertyDescriptor_t1796368678, ___readOnly_6)); }
	inline bool get_readOnly_6() const { return ___readOnly_6; }
	inline bool* get_address_of_readOnly_6() { return &___readOnly_6; }
	inline void set_readOnly_6(bool value)
	{
		___readOnly_6 = value;
	}

	inline static int32_t get_offset_of_componentType_7() { return static_cast<int32_t>(offsetof(DataColumnPropertyDescriptor_t1796368678, ___componentType_7)); }
	inline Type_t * get_componentType_7() const { return ___componentType_7; }
	inline Type_t ** get_address_of_componentType_7() { return &___componentType_7; }
	inline void set_componentType_7(Type_t * value)
	{
		___componentType_7 = value;
		Il2CppCodeGenWriteBarrier((&___componentType_7), value);
	}

	inline static int32_t get_offset_of_propertyType_8() { return static_cast<int32_t>(offsetof(DataColumnPropertyDescriptor_t1796368678, ___propertyType_8)); }
	inline Type_t * get_propertyType_8() const { return ___propertyType_8; }
	inline Type_t ** get_address_of_propertyType_8() { return &___propertyType_8; }
	inline void set_propertyType_8(Type_t * value)
	{
		___propertyType_8 = value;
		Il2CppCodeGenWriteBarrier((&___propertyType_8), value);
	}

	inline static int32_t get_offset_of_browsable_9() { return static_cast<int32_t>(offsetof(DataColumnPropertyDescriptor_t1796368678, ___browsable_9)); }
	inline bool get_browsable_9() const { return ___browsable_9; }
	inline bool* get_address_of_browsable_9() { return &___browsable_9; }
	inline void set_browsable_9(bool value)
	{
		___browsable_9 = value;
	}

	inline static int32_t get_offset_of_columnIndex_10() { return static_cast<int32_t>(offsetof(DataColumnPropertyDescriptor_t1796368678, ___columnIndex_10)); }
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
#endif // DATACOLUMNPROPERTYDESCRIPTOR_T1796368678_H
#ifndef DATAVIEWROWSTATE_T3658141438_H
#define DATAVIEWROWSTATE_T3658141438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataViewRowState
struct  DataViewRowState_t3658141438 
{
public:
	// System.Int32 System.Data.DataViewRowState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataViewRowState_t3658141438, ___value___1)); }
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
#endif // DATAVIEWROWSTATE_T3658141438_H
#ifndef REFERENCEDTABLE_T408992110_H
#define REFERENCEDTABLE_T408992110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.ReferencedTable
struct  ReferencedTable_t408992110 
{
public:
	// System.Int32 Mono.Data.SqlExpressions.ReferencedTable::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReferencedTable_t408992110, ___value___1)); }
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
#endif // REFERENCEDTABLE_T408992110_H
#ifndef STRINGDATACONTAINER_T3113824673_H
#define STRINGDATACONTAINER_T3113824673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.StringDataContainer
struct  StringDataContainer_t3113824673  : public ObjectDataContainer_t2993343262
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGDATACONTAINER_T3113824673_H
#ifndef DATETIMEDATACONTAINER_T2155775145_H
#define DATETIMEDATACONTAINER_T2155775145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DateTimeDataContainer
struct  DateTimeDataContainer_t2155775145  : public ObjectDataContainer_t2993343262
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEDATACONTAINER_T2155775145_H
#ifndef DECIMALDATACONTAINER_T3419878882_H
#define DECIMALDATACONTAINER_T3419878882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DecimalDataContainer
struct  DecimalDataContainer_t3419878882  : public ObjectDataContainer_t2993343262
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALDATACONTAINER_T3419878882_H
#ifndef CONSTRAINTCONVERTER_T587116099_H
#define CONSTRAINTCONVERTER_T587116099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintConverter
struct  ConstraintConverter_t587116099  : public ExpandableObjectConverter_t1455872238
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTCONVERTER_T587116099_H
#ifndef DBCOMMAND_T4215098323_H
#define DBCOMMAND_T4215098323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbCommand
struct  DbCommand_t4215098323  : public Component_t3036537838
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBCOMMAND_T4215098323_H
#ifndef DBCONNECTION_T584051698_H
#define DBCONNECTION_T584051698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbConnection
struct  DbConnection_t584051698  : public Component_t3036537838
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBCONNECTION_T584051698_H
#ifndef STRINGFUNCTION_T4066505919_H
#define STRINGFUNCTION_T4066505919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.StringFunction
struct  StringFunction_t4066505919  : public UnaryExpression_t2130597037
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGFUNCTION_T4066505919_H
#ifndef LIKE_T1948376126_H
#define LIKE_T1948376126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Like
struct  Like_t1948376126  : public UnaryExpression_t2130597037
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.Like::_pattern
	RuntimeObject* ____pattern_1;

public:
	inline static int32_t get_offset_of__pattern_1() { return static_cast<int32_t>(offsetof(Like_t1948376126, ____pattern_1)); }
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
#endif // LIKE_T1948376126_H
#ifndef IN_T2668835169_H
#define IN_T2668835169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.In
struct  In_t2668835169  : public UnaryExpression_t2130597037
{
public:
	// System.Collections.IList Mono.Data.SqlExpressions.In::set
	RuntimeObject* ___set_1;

public:
	inline static int32_t get_offset_of_set_1() { return static_cast<int32_t>(offsetof(In_t2668835169, ___set_1)); }
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
#endif // IN_T2668835169_H
#ifndef CONVERTFUNCTION_T681171192_H
#define CONVERTFUNCTION_T681171192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.ConvertFunction
struct  ConvertFunction_t681171192  : public UnaryExpression_t2130597037
{
public:
	// System.Type Mono.Data.SqlExpressions.ConvertFunction::targetType
	Type_t * ___targetType_1;

public:
	inline static int32_t get_offset_of_targetType_1() { return static_cast<int32_t>(offsetof(ConvertFunction_t681171192, ___targetType_1)); }
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
#endif // CONVERTFUNCTION_T681171192_H
#ifndef ISNULLFUNCTION_T3222178818_H
#define ISNULLFUNCTION_T3222178818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.IsNullFunction
struct  IsNullFunction_t3222178818  : public UnaryExpression_t2130597037
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.IsNullFunction::defaultExpr
	RuntimeObject* ___defaultExpr_1;

public:
	inline static int32_t get_offset_of_defaultExpr_1() { return static_cast<int32_t>(offsetof(IsNullFunction_t3222178818, ___defaultExpr_1)); }
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
#endif // ISNULLFUNCTION_T3222178818_H
#ifndef DATAADAPTER_T1408363466_H
#define DATAADAPTER_T1408363466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataAdapter
struct  DataAdapter_t1408363466  : public Component_t3036537838
{
public:
	// System.Data.Common.DataTableMappingCollection System.Data.Common.DataAdapter::tableMappings
	DataTableMappingCollection_t4025772068 * ___tableMappings_4;

public:
	inline static int32_t get_offset_of_tableMappings_4() { return static_cast<int32_t>(offsetof(DataAdapter_t1408363466, ___tableMappings_4)); }
	inline DataTableMappingCollection_t4025772068 * get_tableMappings_4() const { return ___tableMappings_4; }
	inline DataTableMappingCollection_t4025772068 ** get_address_of_tableMappings_4() { return &___tableMappings_4; }
	inline void set_tableMappings_4(DataTableMappingCollection_t4025772068 * value)
	{
		___tableMappings_4 = value;
		Il2CppCodeGenWriteBarrier((&___tableMappings_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAADAPTER_T1408363466_H
#ifndef SQLCOMPAREOPTIONS_T3991194201_H
#define SQLCOMPAREOPTIONS_T3991194201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlCompareOptions
struct  SqlCompareOptions_t3991194201 
{
public:
	// System.Int32 System.Data.SqlTypes.SqlCompareOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SqlCompareOptions_t3991194201, ___value___1)); }
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
#endif // SQLCOMPAREOPTIONS_T3991194201_H
#ifndef SQLMONEY_T2759422723_H
#define SQLMONEY_T2759422723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlMoney
struct  SqlMoney_t2759422723 
{
public:
	// System.Decimal System.Data.SqlTypes.SqlMoney::value
	Decimal_t866531339  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlMoney::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlMoney_t2759422723, ___value_0)); }
	inline Decimal_t866531339  get_value_0() const { return ___value_0; }
	inline Decimal_t866531339 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Decimal_t866531339  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlMoney_t2759422723, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlMoney_t2759422723_StaticFields
{
public:
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MaxValue
	SqlMoney_t2759422723  ___MaxValue_2;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MinValue
	SqlMoney_t2759422723  ___MinValue_3;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Null
	SqlMoney_t2759422723  ___Null_4;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Zero
	SqlMoney_t2759422723  ___Zero_5;
	// System.Globalization.NumberFormatInfo System.Data.SqlTypes.SqlMoney::MoneyFormat
	NumberFormatInfo_t593827960 * ___MoneyFormat_6;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlMoney_t2759422723_StaticFields, ___MaxValue_2)); }
	inline SqlMoney_t2759422723  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlMoney_t2759422723 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlMoney_t2759422723  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlMoney_t2759422723_StaticFields, ___MinValue_3)); }
	inline SqlMoney_t2759422723  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlMoney_t2759422723 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlMoney_t2759422723  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlMoney_t2759422723_StaticFields, ___Null_4)); }
	inline SqlMoney_t2759422723  get_Null_4() const { return ___Null_4; }
	inline SqlMoney_t2759422723 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlMoney_t2759422723  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlMoney_t2759422723_StaticFields, ___Zero_5)); }
	inline SqlMoney_t2759422723  get_Zero_5() const { return ___Zero_5; }
	inline SqlMoney_t2759422723 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlMoney_t2759422723  value)
	{
		___Zero_5 = value;
	}

	inline static int32_t get_offset_of_MoneyFormat_6() { return static_cast<int32_t>(offsetof(SqlMoney_t2759422723_StaticFields, ___MoneyFormat_6)); }
	inline NumberFormatInfo_t593827960 * get_MoneyFormat_6() const { return ___MoneyFormat_6; }
	inline NumberFormatInfo_t593827960 ** get_address_of_MoneyFormat_6() { return &___MoneyFormat_6; }
	inline void set_MoneyFormat_6(NumberFormatInfo_t593827960 * value)
	{
		___MoneyFormat_6 = value;
		Il2CppCodeGenWriteBarrier((&___MoneyFormat_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlMoney
struct SqlMoney_t2759422723_marshaled_pinvoke
{
	Decimal_t866531339  ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlMoney
struct SqlMoney_t2759422723_marshaled_com
{
	Decimal_t866531339  ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLMONEY_T2759422723_H
#ifndef IIFFUNCTION_T1595463228_H
#define IIFFUNCTION_T1595463228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.IifFunction
struct  IifFunction_t1595463228  : public UnaryExpression_t2130597037
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.IifFunction::trueExpr
	RuntimeObject* ___trueExpr_1;
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.IifFunction::falseExpr
	RuntimeObject* ___falseExpr_2;

public:
	inline static int32_t get_offset_of_trueExpr_1() { return static_cast<int32_t>(offsetof(IifFunction_t1595463228, ___trueExpr_1)); }
	inline RuntimeObject* get_trueExpr_1() const { return ___trueExpr_1; }
	inline RuntimeObject** get_address_of_trueExpr_1() { return &___trueExpr_1; }
	inline void set_trueExpr_1(RuntimeObject* value)
	{
		___trueExpr_1 = value;
		Il2CppCodeGenWriteBarrier((&___trueExpr_1), value);
	}

	inline static int32_t get_offset_of_falseExpr_2() { return static_cast<int32_t>(offsetof(IifFunction_t1595463228, ___falseExpr_2)); }
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
#endif // IIFFUNCTION_T1595463228_H
#ifndef OPERATION_T2873130000_H
#define OPERATION_T2873130000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Operation
struct  Operation_t2873130000 
{
public:
	// System.Int32 Mono.Data.SqlExpressions.Operation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Operation_t2873130000, ___value___1)); }
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
#endif // OPERATION_T2873130000_H
#ifndef SQLTYPEEXCEPTION_T3484370302_H
#define SQLTYPEEXCEPTION_T3484370302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlTypeException
struct  SqlTypeException_t3484370302  : public SystemException_t1180164699
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLTYPEEXCEPTION_T3484370302_H
#ifndef STORAGESTATE_T2446554476_H
#define STORAGESTATE_T2446554476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.StorageState
struct  StorageState_t2446554476 
{
public:
	// System.Int32 System.Data.SqlTypes.StorageState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StorageState_t2446554476, ___value___1)); }
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
#endif // STORAGESTATE_T2446554476_H
#ifndef ACCEPTREJECTRULE_T843891051_H
#define ACCEPTREJECTRULE_T843891051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.AcceptRejectRule
struct  AcceptRejectRule_t843891051 
{
public:
	// System.Int32 System.Data.AcceptRejectRule::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AcceptRejectRule_t843891051, ___value___1)); }
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
#endif // ACCEPTREJECTRULE_T843891051_H
#ifndef COLUMNTYPECONVERTER_T1024381601_H
#define COLUMNTYPECONVERTER_T1024381601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ColumnTypeConverter
struct  ColumnTypeConverter_t1024381601  : public ExpandableObjectConverter_t1455872238
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLUMNTYPECONVERTER_T1024381601_H
#ifndef COMMANDTYPE_T1760695361_H
#define COMMANDTYPE_T1760695361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.CommandType
struct  CommandType_t1760695361 
{
public:
	// System.Int32 System.Data.CommandType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CommandType_t1760695361, ___value___1)); }
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
#endif // COMMANDTYPE_T1760695361_H
#ifndef SQLGUID_T2747250112_H
#define SQLGUID_T2747250112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlGuid
struct  SqlGuid_t2747250112 
{
public:
	// System.Guid System.Data.SqlTypes.SqlGuid::value
	Guid_t  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlGuid::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlGuid_t2747250112, ___value_0)); }
	inline Guid_t  get_value_0() const { return ___value_0; }
	inline Guid_t * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Guid_t  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlGuid_t2747250112, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlGuid_t2747250112_StaticFields
{
public:
	// System.Data.SqlTypes.SqlGuid System.Data.SqlTypes.SqlGuid::Null
	SqlGuid_t2747250112  ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(SqlGuid_t2747250112_StaticFields, ___Null_2)); }
	inline SqlGuid_t2747250112  get_Null_2() const { return ___Null_2; }
	inline SqlGuid_t2747250112 * get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(SqlGuid_t2747250112  value)
	{
		___Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlGuid
struct SqlGuid_t2747250112_marshaled_pinvoke
{
	Guid_t  ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlGuid
struct SqlGuid_t2747250112_marshaled_com
{
	Guid_t  ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLGUID_T2747250112_H
#ifndef BINARYOPEXPRESSION_T3019440426_H
#define BINARYOPEXPRESSION_T3019440426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.BinaryOpExpression
struct  BinaryOpExpression_t3019440426  : public BinaryExpression_t922996004
{
public:
	// Mono.Data.SqlExpressions.Operation Mono.Data.SqlExpressions.BinaryOpExpression::op
	int32_t ___op_2;

public:
	inline static int32_t get_offset_of_op_2() { return static_cast<int32_t>(offsetof(BinaryOpExpression_t3019440426, ___op_2)); }
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
#endif // BINARYOPEXPRESSION_T3019440426_H
#ifndef COLUMNREFERENCE_T1216799117_H
#define COLUMNREFERENCE_T1216799117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.ColumnReference
struct  ColumnReference_t1216799117  : public BaseExpression_t363930473
{
public:
	// Mono.Data.SqlExpressions.ReferencedTable Mono.Data.SqlExpressions.ColumnReference::refTable
	int32_t ___refTable_0;
	// System.String Mono.Data.SqlExpressions.ColumnReference::relationName
	String_t* ___relationName_1;
	// System.String Mono.Data.SqlExpressions.ColumnReference::columnName
	String_t* ___columnName_2;
	// System.Data.DataColumn Mono.Data.SqlExpressions.ColumnReference::_cachedColumn
	DataColumn_t866196881 * ____cachedColumn_3;
	// System.Data.DataRelation Mono.Data.SqlExpressions.ColumnReference::_cachedRelation
	DataRelation_t934786094 * ____cachedRelation_4;

public:
	inline static int32_t get_offset_of_refTable_0() { return static_cast<int32_t>(offsetof(ColumnReference_t1216799117, ___refTable_0)); }
	inline int32_t get_refTable_0() const { return ___refTable_0; }
	inline int32_t* get_address_of_refTable_0() { return &___refTable_0; }
	inline void set_refTable_0(int32_t value)
	{
		___refTable_0 = value;
	}

	inline static int32_t get_offset_of_relationName_1() { return static_cast<int32_t>(offsetof(ColumnReference_t1216799117, ___relationName_1)); }
	inline String_t* get_relationName_1() const { return ___relationName_1; }
	inline String_t** get_address_of_relationName_1() { return &___relationName_1; }
	inline void set_relationName_1(String_t* value)
	{
		___relationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___relationName_1), value);
	}

	inline static int32_t get_offset_of_columnName_2() { return static_cast<int32_t>(offsetof(ColumnReference_t1216799117, ___columnName_2)); }
	inline String_t* get_columnName_2() const { return ___columnName_2; }
	inline String_t** get_address_of_columnName_2() { return &___columnName_2; }
	inline void set_columnName_2(String_t* value)
	{
		___columnName_2 = value;
		Il2CppCodeGenWriteBarrier((&___columnName_2), value);
	}

	inline static int32_t get_offset_of__cachedColumn_3() { return static_cast<int32_t>(offsetof(ColumnReference_t1216799117, ____cachedColumn_3)); }
	inline DataColumn_t866196881 * get__cachedColumn_3() const { return ____cachedColumn_3; }
	inline DataColumn_t866196881 ** get_address_of__cachedColumn_3() { return &____cachedColumn_3; }
	inline void set__cachedColumn_3(DataColumn_t866196881 * value)
	{
		____cachedColumn_3 = value;
		Il2CppCodeGenWriteBarrier((&____cachedColumn_3), value);
	}

	inline static int32_t get_offset_of__cachedRelation_4() { return static_cast<int32_t>(offsetof(ColumnReference_t1216799117, ____cachedRelation_4)); }
	inline DataRelation_t934786094 * get__cachedRelation_4() const { return ____cachedRelation_4; }
	inline DataRelation_t934786094 ** get_address_of__cachedRelation_4() { return &____cachedRelation_4; }
	inline void set__cachedRelation_4(DataRelation_t934786094 * value)
	{
		____cachedRelation_4 = value;
		Il2CppCodeGenWriteBarrier((&____cachedRelation_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLUMNREFERENCE_T1216799117_H
#ifndef CONCATFUNCTION_T1821538092_H
#define CONCATFUNCTION_T1821538092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.ConcatFunction
struct  ConcatFunction_t1821538092  : public StringFunction_t4066505919
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.ConcatFunction::_add
	RuntimeObject* ____add_1;

public:
	inline static int32_t get_offset_of__add_1() { return static_cast<int32_t>(offsetof(ConcatFunction_t1821538092, ____add_1)); }
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
#endif // CONCATFUNCTION_T1821538092_H
#ifndef SUBSTRINGFUNCTION_T3498628296_H
#define SUBSTRINGFUNCTION_T3498628296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.SubstringFunction
struct  SubstringFunction_t3498628296  : public StringFunction_t4066505919
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.SubstringFunction::start
	RuntimeObject* ___start_1;
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.SubstringFunction::len
	RuntimeObject* ___len_2;

public:
	inline static int32_t get_offset_of_start_1() { return static_cast<int32_t>(offsetof(SubstringFunction_t3498628296, ___start_1)); }
	inline RuntimeObject* get_start_1() const { return ___start_1; }
	inline RuntimeObject** get_address_of_start_1() { return &___start_1; }
	inline void set_start_1(RuntimeObject* value)
	{
		___start_1 = value;
		Il2CppCodeGenWriteBarrier((&___start_1), value);
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(SubstringFunction_t3498628296, ___len_2)); }
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
#endif // SUBSTRINGFUNCTION_T3498628296_H
#ifndef CONSTRAINTEXCEPTION_T2017523759_H
#define CONSTRAINTEXCEPTION_T2017523759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintException
struct  ConstraintException_t2017523759  : public DataException_t3722754043
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTEXCEPTION_T2017523759_H
#ifndef TRIMFUNCTION_T2518588182_H
#define TRIMFUNCTION_T2518588182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.TrimFunction
struct  TrimFunction_t2518588182  : public StringFunction_t4066505919
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIMFUNCTION_T2518588182_H
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
#ifndef DBDATAADAPTER_T2168124289_H
#define DBDATAADAPTER_T2168124289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbDataAdapter
struct  DbDataAdapter_t2168124289  : public DataAdapter_t1408363466
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
	inline static int32_t get_offset_of__selectCommand_5() { return static_cast<int32_t>(offsetof(DbDataAdapter_t2168124289, ____selectCommand_5)); }
	inline RuntimeObject* get__selectCommand_5() const { return ____selectCommand_5; }
	inline RuntimeObject** get_address_of__selectCommand_5() { return &____selectCommand_5; }
	inline void set__selectCommand_5(RuntimeObject* value)
	{
		____selectCommand_5 = value;
		Il2CppCodeGenWriteBarrier((&____selectCommand_5), value);
	}

	inline static int32_t get_offset_of__updateCommand_6() { return static_cast<int32_t>(offsetof(DbDataAdapter_t2168124289, ____updateCommand_6)); }
	inline RuntimeObject* get__updateCommand_6() const { return ____updateCommand_6; }
	inline RuntimeObject** get_address_of__updateCommand_6() { return &____updateCommand_6; }
	inline void set__updateCommand_6(RuntimeObject* value)
	{
		____updateCommand_6 = value;
		Il2CppCodeGenWriteBarrier((&____updateCommand_6), value);
	}

	inline static int32_t get_offset_of__deleteCommand_7() { return static_cast<int32_t>(offsetof(DbDataAdapter_t2168124289, ____deleteCommand_7)); }
	inline RuntimeObject* get__deleteCommand_7() const { return ____deleteCommand_7; }
	inline RuntimeObject** get_address_of__deleteCommand_7() { return &____deleteCommand_7; }
	inline void set__deleteCommand_7(RuntimeObject* value)
	{
		____deleteCommand_7 = value;
		Il2CppCodeGenWriteBarrier((&____deleteCommand_7), value);
	}

	inline static int32_t get_offset_of__insertCommand_8() { return static_cast<int32_t>(offsetof(DbDataAdapter_t2168124289, ____insertCommand_8)); }
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
#endif // DBDATAADAPTER_T2168124289_H
#ifndef DATAROWCHANGEEVENTARGS_T2730483752_H
#define DATAROWCHANGEEVENTARGS_T2730483752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowChangeEventArgs
struct  DataRowChangeEventArgs_t2730483752  : public EventArgs_t2070024930
{
public:
	// System.Data.DataRow System.Data.DataRowChangeEventArgs::row
	DataRow_t475206349 * ___row_1;
	// System.Data.DataRowAction System.Data.DataRowChangeEventArgs::action
	int32_t ___action_2;

public:
	inline static int32_t get_offset_of_row_1() { return static_cast<int32_t>(offsetof(DataRowChangeEventArgs_t2730483752, ___row_1)); }
	inline DataRow_t475206349 * get_row_1() const { return ___row_1; }
	inline DataRow_t475206349 ** get_address_of_row_1() { return &___row_1; }
	inline void set_row_1(DataRow_t475206349 * value)
	{
		___row_1 = value;
		Il2CppCodeGenWriteBarrier((&___row_1), value);
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(DataRowChangeEventArgs_t2730483752, ___action_2)); }
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
#endif // DATAROWCHANGEEVENTARGS_T2730483752_H
#ifndef KEY_T2805120048_H
#define KEY_T2805120048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Key
struct  Key_t2805120048  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.Common.Key::_table
	DataTable_t4118261672 * ____table_0;
	// System.Data.DataColumn[] System.Data.Common.Key::_columns
	DataColumnU5BU5D_t3676572940* ____columns_1;
	// System.ComponentModel.ListSortDirection[] System.Data.Common.Key::_sortDirection
	ListSortDirectionU5BU5D_t2184913681* ____sortDirection_2;
	// System.Data.DataViewRowState System.Data.Common.Key::_rowStateFilter
	int32_t ____rowStateFilter_3;
	// Mono.Data.SqlExpressions.IExpression System.Data.Common.Key::_filter
	RuntimeObject* ____filter_4;
	// System.Data.DataRow System.Data.Common.Key::_tmpRow
	DataRow_t475206349 * ____tmpRow_5;

public:
	inline static int32_t get_offset_of__table_0() { return static_cast<int32_t>(offsetof(Key_t2805120048, ____table_0)); }
	inline DataTable_t4118261672 * get__table_0() const { return ____table_0; }
	inline DataTable_t4118261672 ** get_address_of__table_0() { return &____table_0; }
	inline void set__table_0(DataTable_t4118261672 * value)
	{
		____table_0 = value;
		Il2CppCodeGenWriteBarrier((&____table_0), value);
	}

	inline static int32_t get_offset_of__columns_1() { return static_cast<int32_t>(offsetof(Key_t2805120048, ____columns_1)); }
	inline DataColumnU5BU5D_t3676572940* get__columns_1() const { return ____columns_1; }
	inline DataColumnU5BU5D_t3676572940** get_address_of__columns_1() { return &____columns_1; }
	inline void set__columns_1(DataColumnU5BU5D_t3676572940* value)
	{
		____columns_1 = value;
		Il2CppCodeGenWriteBarrier((&____columns_1), value);
	}

	inline static int32_t get_offset_of__sortDirection_2() { return static_cast<int32_t>(offsetof(Key_t2805120048, ____sortDirection_2)); }
	inline ListSortDirectionU5BU5D_t2184913681* get__sortDirection_2() const { return ____sortDirection_2; }
	inline ListSortDirectionU5BU5D_t2184913681** get_address_of__sortDirection_2() { return &____sortDirection_2; }
	inline void set__sortDirection_2(ListSortDirectionU5BU5D_t2184913681* value)
	{
		____sortDirection_2 = value;
		Il2CppCodeGenWriteBarrier((&____sortDirection_2), value);
	}

	inline static int32_t get_offset_of__rowStateFilter_3() { return static_cast<int32_t>(offsetof(Key_t2805120048, ____rowStateFilter_3)); }
	inline int32_t get__rowStateFilter_3() const { return ____rowStateFilter_3; }
	inline int32_t* get_address_of__rowStateFilter_3() { return &____rowStateFilter_3; }
	inline void set__rowStateFilter_3(int32_t value)
	{
		____rowStateFilter_3 = value;
	}

	inline static int32_t get_offset_of__filter_4() { return static_cast<int32_t>(offsetof(Key_t2805120048, ____filter_4)); }
	inline RuntimeObject* get__filter_4() const { return ____filter_4; }
	inline RuntimeObject** get_address_of__filter_4() { return &____filter_4; }
	inline void set__filter_4(RuntimeObject* value)
	{
		____filter_4 = value;
		Il2CppCodeGenWriteBarrier((&____filter_4), value);
	}

	inline static int32_t get_offset_of__tmpRow_5() { return static_cast<int32_t>(offsetof(Key_t2805120048, ____tmpRow_5)); }
	inline DataRow_t475206349 * get__tmpRow_5() const { return ____tmpRow_5; }
	inline DataRow_t475206349 ** get_address_of__tmpRow_5() { return &____tmpRow_5; }
	inline void set__tmpRow_5(DataRow_t475206349 * value)
	{
		____tmpRow_5 = value;
		Il2CppCodeGenWriteBarrier((&____tmpRow_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEY_T2805120048_H
#ifndef SQLBYTES_T1456172318_H
#define SQLBYTES_T1456172318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBytes
struct  SqlBytes_t1456172318  : public RuntimeObject
{
public:
	// System.Boolean System.Data.SqlTypes.SqlBytes::notNull
	bool ___notNull_0;
	// System.Byte[] System.Data.SqlTypes.SqlBytes::buffer
	ByteU5BU5D_t2896786162* ___buffer_1;
	// System.Data.SqlTypes.StorageState System.Data.SqlTypes.SqlBytes::storage
	int32_t ___storage_2;

public:
	inline static int32_t get_offset_of_notNull_0() { return static_cast<int32_t>(offsetof(SqlBytes_t1456172318, ___notNull_0)); }
	inline bool get_notNull_0() const { return ___notNull_0; }
	inline bool* get_address_of_notNull_0() { return &___notNull_0; }
	inline void set_notNull_0(bool value)
	{
		___notNull_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(SqlBytes_t1456172318, ___buffer_1)); }
	inline ByteU5BU5D_t2896786162* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_t2896786162** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_t2896786162* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_1), value);
	}

	inline static int32_t get_offset_of_storage_2() { return static_cast<int32_t>(offsetof(SqlBytes_t1456172318, ___storage_2)); }
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
#endif // SQLBYTES_T1456172318_H
#ifndef SQLCHARS_T4260241767_H
#define SQLCHARS_T4260241767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlChars
struct  SqlChars_t4260241767  : public RuntimeObject
{
public:
	// System.Boolean System.Data.SqlTypes.SqlChars::notNull
	bool ___notNull_0;
	// System.Char[] System.Data.SqlTypes.SqlChars::buffer
	CharU5BU5D_t1565992178* ___buffer_1;
	// System.Data.SqlTypes.StorageState System.Data.SqlTypes.SqlChars::storage
	int32_t ___storage_2;

public:
	inline static int32_t get_offset_of_notNull_0() { return static_cast<int32_t>(offsetof(SqlChars_t4260241767, ___notNull_0)); }
	inline bool get_notNull_0() const { return ___notNull_0; }
	inline bool* get_address_of_notNull_0() { return &___notNull_0; }
	inline void set_notNull_0(bool value)
	{
		___notNull_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(SqlChars_t4260241767, ___buffer_1)); }
	inline CharU5BU5D_t1565992178* get_buffer_1() const { return ___buffer_1; }
	inline CharU5BU5D_t1565992178** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(CharU5BU5D_t1565992178* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_1), value);
	}

	inline static int32_t get_offset_of_storage_2() { return static_cast<int32_t>(offsetof(SqlChars_t4260241767, ___storage_2)); }
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
#endif // SQLCHARS_T4260241767_H
#ifndef SQLNULLVALUEEXCEPTION_T40371681_H
#define SQLNULLVALUEEXCEPTION_T40371681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlNullValueException
struct  SqlNullValueException_t40371681  : public SqlTypeException_t3484370302
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLNULLVALUEEXCEPTION_T40371681_H
#ifndef SQLSTRING_T1407223640_H
#define SQLSTRING_T1407223640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlString
struct  SqlString_t1407223640 
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
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlString_t1407223640, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlString_t1407223640, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}

	inline static int32_t get_offset_of_lcid_2() { return static_cast<int32_t>(offsetof(SqlString_t1407223640, ___lcid_2)); }
	inline int32_t get_lcid_2() const { return ___lcid_2; }
	inline int32_t* get_address_of_lcid_2() { return &___lcid_2; }
	inline void set_lcid_2(int32_t value)
	{
		___lcid_2 = value;
	}

	inline static int32_t get_offset_of_compareOptions_3() { return static_cast<int32_t>(offsetof(SqlString_t1407223640, ___compareOptions_3)); }
	inline int32_t get_compareOptions_3() const { return ___compareOptions_3; }
	inline int32_t* get_address_of_compareOptions_3() { return &___compareOptions_3; }
	inline void set_compareOptions_3(int32_t value)
	{
		___compareOptions_3 = value;
	}
};

struct SqlString_t1407223640_StaticFields
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
	SqlString_t1407223640  ___Null_9;
	// System.Globalization.NumberFormatInfo System.Data.SqlTypes.SqlString::DecimalFormat
	NumberFormatInfo_t593827960 * ___DecimalFormat_10;

public:
	inline static int32_t get_offset_of_BinarySort_4() { return static_cast<int32_t>(offsetof(SqlString_t1407223640_StaticFields, ___BinarySort_4)); }
	inline int32_t get_BinarySort_4() const { return ___BinarySort_4; }
	inline int32_t* get_address_of_BinarySort_4() { return &___BinarySort_4; }
	inline void set_BinarySort_4(int32_t value)
	{
		___BinarySort_4 = value;
	}

	inline static int32_t get_offset_of_IgnoreCase_5() { return static_cast<int32_t>(offsetof(SqlString_t1407223640_StaticFields, ___IgnoreCase_5)); }
	inline int32_t get_IgnoreCase_5() const { return ___IgnoreCase_5; }
	inline int32_t* get_address_of_IgnoreCase_5() { return &___IgnoreCase_5; }
	inline void set_IgnoreCase_5(int32_t value)
	{
		___IgnoreCase_5 = value;
	}

	inline static int32_t get_offset_of_IgnoreKanaType_6() { return static_cast<int32_t>(offsetof(SqlString_t1407223640_StaticFields, ___IgnoreKanaType_6)); }
	inline int32_t get_IgnoreKanaType_6() const { return ___IgnoreKanaType_6; }
	inline int32_t* get_address_of_IgnoreKanaType_6() { return &___IgnoreKanaType_6; }
	inline void set_IgnoreKanaType_6(int32_t value)
	{
		___IgnoreKanaType_6 = value;
	}

	inline static int32_t get_offset_of_IgnoreNonSpace_7() { return static_cast<int32_t>(offsetof(SqlString_t1407223640_StaticFields, ___IgnoreNonSpace_7)); }
	inline int32_t get_IgnoreNonSpace_7() const { return ___IgnoreNonSpace_7; }
	inline int32_t* get_address_of_IgnoreNonSpace_7() { return &___IgnoreNonSpace_7; }
	inline void set_IgnoreNonSpace_7(int32_t value)
	{
		___IgnoreNonSpace_7 = value;
	}

	inline static int32_t get_offset_of_IgnoreWidth_8() { return static_cast<int32_t>(offsetof(SqlString_t1407223640_StaticFields, ___IgnoreWidth_8)); }
	inline int32_t get_IgnoreWidth_8() const { return ___IgnoreWidth_8; }
	inline int32_t* get_address_of_IgnoreWidth_8() { return &___IgnoreWidth_8; }
	inline void set_IgnoreWidth_8(int32_t value)
	{
		___IgnoreWidth_8 = value;
	}

	inline static int32_t get_offset_of_Null_9() { return static_cast<int32_t>(offsetof(SqlString_t1407223640_StaticFields, ___Null_9)); }
	inline SqlString_t1407223640  get_Null_9() const { return ___Null_9; }
	inline SqlString_t1407223640 * get_address_of_Null_9() { return &___Null_9; }
	inline void set_Null_9(SqlString_t1407223640  value)
	{
		___Null_9 = value;
	}

	inline static int32_t get_offset_of_DecimalFormat_10() { return static_cast<int32_t>(offsetof(SqlString_t1407223640_StaticFields, ___DecimalFormat_10)); }
	inline NumberFormatInfo_t593827960 * get_DecimalFormat_10() const { return ___DecimalFormat_10; }
	inline NumberFormatInfo_t593827960 ** get_address_of_DecimalFormat_10() { return &___DecimalFormat_10; }
	inline void set_DecimalFormat_10(NumberFormatInfo_t593827960 * value)
	{
		___DecimalFormat_10 = value;
		Il2CppCodeGenWriteBarrier((&___DecimalFormat_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlString
struct SqlString_t1407223640_marshaled_pinvoke
{
	char* ___value_0;
	int32_t ___notNull_1;
	int32_t ___lcid_2;
	int32_t ___compareOptions_3;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlString
struct SqlString_t1407223640_marshaled_com
{
	Il2CppChar* ___value_0;
	int32_t ___notNull_1;
	int32_t ___lcid_2;
	int32_t ___compareOptions_3;
};
#endif // SQLSTRING_T1407223640_H
#ifndef SQLTRUNCATEEXCEPTION_T3685951501_H
#define SQLTRUNCATEEXCEPTION_T3685951501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlTruncateException
struct  SqlTruncateException_t3685951501  : public SqlTypeException_t3484370302
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLTRUNCATEEXCEPTION_T3685951501_H
#ifndef DATACOLUMN_T866196881_H
#define DATACOLUMN_T866196881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumn
struct  DataColumn_t866196881  : public MarshalByValueComponent_t1256752560
{
public:
	// System.ComponentModel.EventHandlerList System.Data.DataColumn::_eventHandlers
	EventHandlerList_t1427346375 * ____eventHandlers_3;
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
	PropertyCollection_t1559775645 * ____extendedProperties_16;
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
	DataTable_t4118261672 * ____table_22;
	// System.Boolean System.Data.DataColumn::_unique
	bool ____unique_23;
	// System.Data.Common.DataContainer System.Data.DataColumn::_dataContainer
	DataContainer_t2560448845 * ____dataContainer_24;
	// System.Data.DataSetDateTime System.Data.DataColumn::_datetimeMode
	int32_t ____datetimeMode_25;

public:
	inline static int32_t get_offset_of__eventHandlers_3() { return static_cast<int32_t>(offsetof(DataColumn_t866196881, ____eventHandlers_3)); }
	inline EventHandlerList_t1427346375 * get__eventHandlers_3() const { return ____eventHandlers_3; }
	inline EventHandlerList_t1427346375 ** get_address_of__eventHandlers_3() { return &____eventHandlers_3; }
	inline void set__eventHandlers_3(EventHandlerList_t1427346375 * value)
	{
		____eventHandlers_3 = value;
		Il2CppCodeGenWriteBarrier((&____eventHandlers_3), value);
	}

	inline static int32_t get_offset_of__allowDBNull_5() { return static_cast<int32_t>(offsetof(DataColumn_t866196881, ____allowDBNull_5)); }
	inline bool get__allowDBNull_5() const { return ____allowDBNull_5; }
	inline bool* get_address_of__allowDBNull_5() { return &____allowDBNull_5; }
	inline void set__allowDBNull_5(bool value)
	{
		____allowDBNull_5 = value;
	}

	inline static int32_t get_offset_of__autoIncrement_6() { return static_cast<int32_t>(offsetof(DataColumn_t866196881, ____autoIncrement_6)); }
	inline bool get__autoIncrement_6() const { return ____autoIncrement_6; }
	inline bool* get_address_of__autoIncrement_6() { return &____autoIncrement_6; }
	inline void set__autoIncrement_6(bool value)
	{
		____autoIncrement_6 = value;
	}

	inline static int32_t get_offset_of__autoIncrementSeed_7() { return static_cast<int32_t>(offsetof(DataColumn_t866196881, ____autoIncrementSeed_7)); }
	inline int64_t get__autoIncrementSeed_7() const { return ____autoIncrementSeed_7; }
	inline int64_t* get_address_of__autoIncrementSeed_7() { return &____autoIncrementSeed_7; }
	inline void set__autoIncrementSeed_7(int64_t value)
	{
		____autoIncrementSeed_7 = value;
	}

	inline static int32_t get_offset_of__autoIncrementStep_8() { return static_cast<int32_t>(offsetof(DataColumn_t866196881, ____autoIncrementStep_8)); }
	inline int64_t get__autoIncrementStep_8() const { return ____autoIncrementStep_8; }
	inline int64_t* get_address_of__autoIncrementStep_8() { return &____autoIncrementStep_8; }
	inline void set__autoIncrementStep_8(int64_t value)
	{
		____autoIncrementStep_8 = value;
	}

	inline static int32_t get_offset_of__nextAutoIncrementValue_9() { return static_cast<int32_t>(offsetof(DataColumn_t866196881, ____nextAutoIncrementValue_9)); }
	inline int64_t get__nextAutoIncrementValue_9() const { return ____nextAutoIncrementValue_9; }
	inline int64_t* get_address_of__nextAutoIncrementValue_9() { return &____nextAutoIncrementValue_9; }
	inline void set__nextAutoIncrementValue_9(int64_t value)
	{
		____nextAutoIncrementValue_9 = value;
	}

	inline static int32_t get_offset_of__caption_10() { return static_cast<int32_t>(offsetof(DataColumn_t866196881, ____caption_10)); }
	inline String_t* get__caption_10() const { return ____caption_10; }
	inline String_t** get_address_of__caption_10() { return &____caption_10; }
	inline void set__caption_10(String_t* value)
	{
		____caption_10 = value;
		Il2CppCodeGenWriteBarrier((&____caption_10), value);
	}

	inline static int32_t get_offset_of__columnMapping_11() { return static_cast<int32_t>(offsetof(DataColumn_t866196881, ____columnMapping_11)); }
	inline int32_t get__columnMapping_11() const { return ____columnMapping_11; }
	inline int32_t* get_address_of__columnMapping_11() { return &____columnMapping_11; }
	inline void set__columnMapping_11(int32_t value)
	{
		____columnMapping_11 = value;
	}

	inline static int32_t get_offset_of__columnName_12() { return static_cast<int32_t>(offsetof(DataColumn_t866196881, ____columnName_12)); }
	inline String_t* get__columnName_12() const { return ____columnName_12; }
	inline String_t** get_address_of__columnName_12() { return &____columnName_12; }
	inline void set__columnName_12(String_t* value)
	{
		____columnName_12 = value;
		Il2CppCodeGenWriteBarrier((&____columnName_12), value);
	}

	inline static int32_t get_offset_of__defaultValue_13() { return static_cast<int32_t>(offsetof(DataColumn_t866196881, ____defaultValue_13)); }
	inline RuntimeObject * get__defaultValue_13() const { return ____defaultValue_13; }
	inline RuntimeObject ** get_address_of__defaultValue_13() { return &____defaultValue_13; }
	inline void set__defaultValue_13(RuntimeObject * value)
	{
		____defaultValue_13 = value;
		Il2CppCodeGenWriteBarrier((&____defaultValue_13), value);
	}

	inline static int32_t get_offset_of__expression_14() { return static_cast<int32_t>(offsetof(DataColumn_t866196881, ____expression_14)); }
	inline String_t* get__expression_14() const { return ____expression_14; }
	inline String_t** get_address_of__expression_14() { return &____expression_14; }
	inline void set__expression_14(String_t* value)
	{
		____expression_14 = value;
		Il2CppCodeGenWriteBarrier((&____expression_14), value);
	}

	inline static int32_t get_offset_of__compiledExpression_15() { return static_cast<int32_t>(offsetof(DataColumn_t866196881, ____compiledExpression_15)); }
	inline RuntimeObject* get__compiledExpression_15() const { return ____compiledExpression_15; }
	inline RuntimeObject** get_address_of__compiledExpression_15() { return &____compiledExpression_15; }
	inline void set__compiledExpression_15(RuntimeObject* value)
	{
		____compiledExpression_15 = value;
		Il2CppCodeGenWriteBarrier((&____compiledExpression_15), value);
	}

	inline static int32_t get_offset_of__extendedProperties_16() { return static_cast<int32_t>(offsetof(DataColumn_t866196881, ____extendedProperties_16)); }
	inline PropertyCollection_t1559775645 * get__extendedProperties_16() const { return ____extendedProperties_16; }
	inline PropertyCollection_t1559775645 ** get_address_of__extendedProperties_16() { return &____extendedProperties_16; }
	inline void set__extendedProperties_16(PropertyCollection_t1559775645 * value)
	{
		____extendedProperties_16 = value;
		Il2CppCodeGenWriteBarrier((&____extendedProperties_16), value);
	}

	inline static int32_t get_offset_of__maxLength_17() { return static_cast<int32_t>(offsetof(DataColumn_t866196881, ____maxLength_17)); }
	inline int32_t get__maxLength_17() const { return ____maxLength_17; }
	inline int32_t* get_address_of__maxLength_17() { return &____maxLength_17; }
	inline void set__maxLength_17(int32_t value)
	{
		____maxLength_17 = value;
	}

	inline static int32_t get_offset_of__nameSpace_18() { return static_cast<int32_t>(offsetof(DataColumn_t866196881, ____nameSpace_18)); }
	inline String_t* get__nameSpace_18() const { return ____nameSpace_18; }
	inline String_t** get_address_of__nameSpace_18() { return &____nameSpace_18; }
	inline void set__nameSpace_18(String_t* value)
	{
		____nameSpace_18 = value;
		Il2CppCodeGenWriteBarrier((&____nameSpace_18), value);
	}

	inline static int32_t get_offset_of__ordinal_19() { return static_cast<int32_t>(offsetof(DataColumn_t866196881, ____ordinal_19)); }
	inline int32_t get__ordinal_19() const { return ____ordinal_19; }
	inline int32_t* get_address_of__ordinal_19() { return &____ordinal_19; }
	inline void set__ordinal_19(int32_t value)
	{
		____ordinal_19 = value;
	}

	inline static int32_t get_offset_of__prefix_20() { return static_cast<int32_t>(offsetof(DataColumn_t866196881, ____prefix_20)); }
	inline String_t* get__prefix_20() const { return ____prefix_20; }
	inline String_t** get_address_of__prefix_20() { return &____prefix_20; }
	inline void set__prefix_20(String_t* value)
	{
		____prefix_20 = value;
		Il2CppCodeGenWriteBarrier((&____prefix_20), value);
	}

	inline static int32_t get_offset_of__readOnly_21() { return static_cast<int32_t>(offsetof(DataColumn_t866196881, ____readOnly_21)); }
	inline bool get__readOnly_21() const { return ____readOnly_21; }
	inline bool* get_address_of__readOnly_21() { return &____readOnly_21; }
	inline void set__readOnly_21(bool value)
	{
		____readOnly_21 = value;
	}

	inline static int32_t get_offset_of__table_22() { return static_cast<int32_t>(offsetof(DataColumn_t866196881, ____table_22)); }
	inline DataTable_t4118261672 * get__table_22() const { return ____table_22; }
	inline DataTable_t4118261672 ** get_address_of__table_22() { return &____table_22; }
	inline void set__table_22(DataTable_t4118261672 * value)
	{
		____table_22 = value;
		Il2CppCodeGenWriteBarrier((&____table_22), value);
	}

	inline static int32_t get_offset_of__unique_23() { return static_cast<int32_t>(offsetof(DataColumn_t866196881, ____unique_23)); }
	inline bool get__unique_23() const { return ____unique_23; }
	inline bool* get_address_of__unique_23() { return &____unique_23; }
	inline void set__unique_23(bool value)
	{
		____unique_23 = value;
	}

	inline static int32_t get_offset_of__dataContainer_24() { return static_cast<int32_t>(offsetof(DataColumn_t866196881, ____dataContainer_24)); }
	inline DataContainer_t2560448845 * get__dataContainer_24() const { return ____dataContainer_24; }
	inline DataContainer_t2560448845 ** get_address_of__dataContainer_24() { return &____dataContainer_24; }
	inline void set__dataContainer_24(DataContainer_t2560448845 * value)
	{
		____dataContainer_24 = value;
		Il2CppCodeGenWriteBarrier((&____dataContainer_24), value);
	}

	inline static int32_t get_offset_of__datetimeMode_25() { return static_cast<int32_t>(offsetof(DataColumn_t866196881, ____datetimeMode_25)); }
	inline int32_t get__datetimeMode_25() const { return ____datetimeMode_25; }
	inline int32_t* get_address_of__datetimeMode_25() { return &____datetimeMode_25; }
	inline void set__datetimeMode_25(int32_t value)
	{
		____datetimeMode_25 = value;
	}
};

struct DataColumn_t866196881_StaticFields
{
public:
	// System.Object System.Data.DataColumn::_propertyChangedKey
	RuntimeObject * ____propertyChangedKey_4;

public:
	inline static int32_t get_offset_of__propertyChangedKey_4() { return static_cast<int32_t>(offsetof(DataColumn_t866196881_StaticFields, ____propertyChangedKey_4)); }
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
#endif // DATACOLUMN_T866196881_H
#ifndef LENFUNCTION_T50432676_H
#define LENFUNCTION_T50432676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.LenFunction
struct  LenFunction_t50432676  : public StringFunction_t4066505919
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LENFUNCTION_T50432676_H
#ifndef COMPARISON_T16833822_H
#define COMPARISON_T16833822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Comparison
struct  Comparison_t16833822  : public BinaryOpExpression_t3019440426
{
public:

public:
};

struct Comparison_t16833822_StaticFields
{
public:
	// System.Char[] Mono.Data.SqlExpressions.Comparison::IgnoredTrailingChars
	CharU5BU5D_t1565992178* ___IgnoredTrailingChars_3;

public:
	inline static int32_t get_offset_of_IgnoredTrailingChars_3() { return static_cast<int32_t>(offsetof(Comparison_t16833822_StaticFields, ___IgnoredTrailingChars_3)); }
	inline CharU5BU5D_t1565992178* get_IgnoredTrailingChars_3() const { return ___IgnoredTrailingChars_3; }
	inline CharU5BU5D_t1565992178** get_address_of_IgnoredTrailingChars_3() { return &___IgnoredTrailingChars_3; }
	inline void set_IgnoredTrailingChars_3(CharU5BU5D_t1565992178* value)
	{
		___IgnoredTrailingChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___IgnoredTrailingChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_T16833822_H
#ifndef SQLDATETIME_T1783002647_H
#define SQLDATETIME_T1783002647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlDateTime
struct  SqlDateTime_t1783002647 
{
public:
	// System.DateTime System.Data.SqlTypes.SqlDateTime::value
	DateTime_t547944966  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlDateTime::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlDateTime_t1783002647, ___value_0)); }
	inline DateTime_t547944966  get_value_0() const { return ___value_0; }
	inline DateTime_t547944966 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t547944966  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlDateTime_t1783002647, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlDateTime_t1783002647_StaticFields
{
public:
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::MaxValue
	SqlDateTime_t1783002647  ___MaxValue_2;
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::MinValue
	SqlDateTime_t1783002647  ___MinValue_3;
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::Null
	SqlDateTime_t1783002647  ___Null_4;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerHour
	int32_t ___SQLTicksPerHour_5;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerMinute
	int32_t ___SQLTicksPerMinute_6;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerSecond
	int32_t ___SQLTicksPerSecond_7;
	// System.DateTime System.Data.SqlTypes.SqlDateTime::zero_day
	DateTime_t547944966  ___zero_day_8;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlDateTime_t1783002647_StaticFields, ___MaxValue_2)); }
	inline SqlDateTime_t1783002647  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlDateTime_t1783002647 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlDateTime_t1783002647  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlDateTime_t1783002647_StaticFields, ___MinValue_3)); }
	inline SqlDateTime_t1783002647  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlDateTime_t1783002647 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlDateTime_t1783002647  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlDateTime_t1783002647_StaticFields, ___Null_4)); }
	inline SqlDateTime_t1783002647  get_Null_4() const { return ___Null_4; }
	inline SqlDateTime_t1783002647 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlDateTime_t1783002647  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerHour_5() { return static_cast<int32_t>(offsetof(SqlDateTime_t1783002647_StaticFields, ___SQLTicksPerHour_5)); }
	inline int32_t get_SQLTicksPerHour_5() const { return ___SQLTicksPerHour_5; }
	inline int32_t* get_address_of_SQLTicksPerHour_5() { return &___SQLTicksPerHour_5; }
	inline void set_SQLTicksPerHour_5(int32_t value)
	{
		___SQLTicksPerHour_5 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerMinute_6() { return static_cast<int32_t>(offsetof(SqlDateTime_t1783002647_StaticFields, ___SQLTicksPerMinute_6)); }
	inline int32_t get_SQLTicksPerMinute_6() const { return ___SQLTicksPerMinute_6; }
	inline int32_t* get_address_of_SQLTicksPerMinute_6() { return &___SQLTicksPerMinute_6; }
	inline void set_SQLTicksPerMinute_6(int32_t value)
	{
		___SQLTicksPerMinute_6 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerSecond_7() { return static_cast<int32_t>(offsetof(SqlDateTime_t1783002647_StaticFields, ___SQLTicksPerSecond_7)); }
	inline int32_t get_SQLTicksPerSecond_7() const { return ___SQLTicksPerSecond_7; }
	inline int32_t* get_address_of_SQLTicksPerSecond_7() { return &___SQLTicksPerSecond_7; }
	inline void set_SQLTicksPerSecond_7(int32_t value)
	{
		___SQLTicksPerSecond_7 = value;
	}

	inline static int32_t get_offset_of_zero_day_8() { return static_cast<int32_t>(offsetof(SqlDateTime_t1783002647_StaticFields, ___zero_day_8)); }
	inline DateTime_t547944966  get_zero_day_8() const { return ___zero_day_8; }
	inline DateTime_t547944966 * get_address_of_zero_day_8() { return &___zero_day_8; }
	inline void set_zero_day_8(DateTime_t547944966  value)
	{
		___zero_day_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDateTime
struct SqlDateTime_t1783002647_marshaled_pinvoke
{
	DateTime_t547944966  ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDateTime
struct SqlDateTime_t1783002647_marshaled_com
{
	DateTime_t547944966  ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLDATETIME_T1783002647_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2800 = { sizeof (ReferencedTable_t408992110)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2800[4] = 
{
	ReferencedTable_t408992110::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2801 = { sizeof (ColumnReference_t1216799117), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2801[5] = 
{
	ColumnReference_t1216799117::get_offset_of_refTable_0(),
	ColumnReference_t1216799117::get_offset_of_relationName_1(),
	ColumnReference_t1216799117::get_offset_of_columnName_2(),
	ColumnReference_t1216799117::get_offset_of__cachedColumn_3(),
	ColumnReference_t1216799117::get_offset_of__cachedRelation_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2802 = { sizeof (Comparison_t16833822), -1, sizeof(Comparison_t16833822_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2802[1] = 
{
	Comparison_t16833822_StaticFields::get_offset_of_IgnoredTrailingChars_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2803 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2804 = { sizeof (BaseExpression_t363930473), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2805 = { sizeof (UnaryExpression_t2130597037), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2805[1] = 
{
	UnaryExpression_t2130597037::get_offset_of_expr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2806 = { sizeof (BinaryExpression_t922996004), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2806[2] = 
{
	BinaryExpression_t922996004::get_offset_of_expr1_0(),
	BinaryExpression_t922996004::get_offset_of_expr2_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2807 = { sizeof (Operation_t2873130000)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2807[14] = 
{
	Operation_t2873130000::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2808 = { sizeof (BinaryOpExpression_t3019440426), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2808[1] = 
{
	BinaryOpExpression_t3019440426::get_offset_of_op_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2809 = { sizeof (IifFunction_t1595463228), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2809[2] = 
{
	IifFunction_t1595463228::get_offset_of_trueExpr_1(),
	IifFunction_t1595463228::get_offset_of_falseExpr_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2810 = { sizeof (IsNullFunction_t3222178818), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2810[1] = 
{
	IsNullFunction_t3222178818::get_offset_of_defaultExpr_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2811 = { sizeof (ConvertFunction_t681171192), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2811[1] = 
{
	ConvertFunction_t681171192::get_offset_of_targetType_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2812 = { sizeof (In_t2668835169), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2812[1] = 
{
	In_t2668835169::get_offset_of_set_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2813 = { sizeof (Like_t1948376126), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2813[1] = 
{
	Like_t1948376126::get_offset_of__pattern_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2814 = { sizeof (Literal_t4158847555), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2814[1] = 
{
	Literal_t4158847555::get_offset_of_val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2815 = { sizeof (Numeric_t933901829), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2816 = { sizeof (StringFunction_t4066505919), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2817 = { sizeof (ConcatFunction_t1821538092), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2817[1] = 
{
	ConcatFunction_t1821538092::get_offset_of__add_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2818 = { sizeof (SubstringFunction_t3498628296), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2818[2] = 
{
	SubstringFunction_t3498628296::get_offset_of_start_1(),
	SubstringFunction_t3498628296::get_offset_of_len_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2819 = { sizeof (LenFunction_t50432676), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2820 = { sizeof (TrimFunction_t2518588182), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2821 = { sizeof (Tokenizer_t2619233047), -1, sizeof(Tokenizer_t2619233047_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2821[6] = 
{
	Tokenizer_t2619233047_StaticFields::get_offset_of_tokenMap_0(),
	Tokenizer_t2619233047_StaticFields::get_offset_of_tokens_1(),
	Tokenizer_t2619233047::get_offset_of_input_2(),
	Tokenizer_t2619233047::get_offset_of_pos_3(),
	Tokenizer_t2619233047::get_offset_of_tok_4(),
	Tokenizer_t2619233047::get_offset_of_val_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2822 = { sizeof (DataAdapter_t1408363466), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2822[1] = 
{
	DataAdapter_t1408363466::get_offset_of_tableMappings_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2823 = { sizeof (DataColumnMapping_t1911464710), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2823[2] = 
{
	DataColumnMapping_t1911464710::get_offset_of_sourceColumn_1(),
	DataColumnMapping_t1911464710::get_offset_of_dataSetColumn_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2824 = { sizeof (DataColumnMappingCollection_t1716282864), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2824[3] = 
{
	DataColumnMappingCollection_t1716282864::get_offset_of_list_1(),
	DataColumnMappingCollection_t1716282864::get_offset_of_sourceColumns_2(),
	DataColumnMappingCollection_t1716282864::get_offset_of_dataSetColumns_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2825 = { sizeof (DataContainer_t2560448845), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2825[3] = 
{
	DataContainer_t2560448845::get_offset_of_null_values_0(),
	DataContainer_t2560448845::get_offset_of__type_1(),
	DataContainer_t2560448845::get_offset_of__column_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2826 = { sizeof (BitDataContainer_t2928497441), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2826[1] = 
{
	BitDataContainer_t2928497441::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2827 = { sizeof (CharDataContainer_t1850580357), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2827[1] = 
{
	CharDataContainer_t1850580357::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2828 = { sizeof (ByteDataContainer_t3780782999), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2828[1] = 
{
	ByteDataContainer_t3780782999::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2829 = { sizeof (SByteDataContainer_t3590846956), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2829[1] = 
{
	SByteDataContainer_t3590846956::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2830 = { sizeof (Int16DataContainer_t344998768), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2830[1] = 
{
	Int16DataContainer_t344998768::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2831 = { sizeof (UInt16DataContainer_t3636703352), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2831[1] = 
{
	UInt16DataContainer_t3636703352::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2832 = { sizeof (Int32DataContainer_t3069240494), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2832[1] = 
{
	Int32DataContainer_t3069240494::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2833 = { sizeof (UInt32DataContainer_t51751632), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2833[1] = 
{
	UInt32DataContainer_t51751632::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2834 = { sizeof (Int64DataContainer_t2112414742), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2834[1] = 
{
	Int64DataContainer_t2112414742::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2835 = { sizeof (UInt64DataContainer_t3615854252), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2835[1] = 
{
	UInt64DataContainer_t3615854252::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2836 = { sizeof (SingleDataContainer_t1044559012), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2836[1] = 
{
	SingleDataContainer_t1044559012::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2837 = { sizeof (DoubleDataContainer_t394368610), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2837[1] = 
{
	DoubleDataContainer_t394368610::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2838 = { sizeof (ObjectDataContainer_t2993343262), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2838[1] = 
{
	ObjectDataContainer_t2993343262::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2839 = { sizeof (DateTimeDataContainer_t2155775145), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2840 = { sizeof (DecimalDataContainer_t3419878882), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2841 = { sizeof (StringDataContainer_t3113824673), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2842 = { sizeof (DataTableMapping_t3698492202), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2842[3] = 
{
	DataTableMapping_t3698492202::get_offset_of_sourceTable_1(),
	DataTableMapping_t3698492202::get_offset_of_dataSetTable_2(),
	DataTableMapping_t3698492202::get_offset_of_columnMappings_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2843 = { sizeof (DataTableMappingCollection_t4025772068), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2843[3] = 
{
	DataTableMappingCollection_t4025772068::get_offset_of_mappings_1(),
	DataTableMappingCollection_t4025772068::get_offset_of_sourceTables_2(),
	DataTableMappingCollection_t4025772068::get_offset_of_dataSetTables_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2844 = { sizeof (DbCommand_t4215098323), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2845 = { sizeof (DbConnection_t584051698), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2846 = { sizeof (DbDataAdapter_t2168124289), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2846[4] = 
{
	DbDataAdapter_t2168124289::get_offset_of__selectCommand_5(),
	DbDataAdapter_t2168124289::get_offset_of__updateCommand_6(),
	DbDataAdapter_t2168124289::get_offset_of__deleteCommand_7(),
	DbDataAdapter_t2168124289::get_offset_of__insertCommand_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2847 = { sizeof (DbDataRecord_t1947477521), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2848 = { sizeof (DbParameter_t2424603415), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2849 = { sizeof (DbParameterCollection_t955390758), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2850 = { sizeof (DbProviderFactory_t3621712479), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2851 = { sizeof (DbTypes_t3970190259), -1, sizeof(DbTypes_t3970190259_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2851[21] = 
{
	DbTypes_t3970190259_StaticFields::get_offset_of_TypeOfBoolean_0(),
	DbTypes_t3970190259_StaticFields::get_offset_of_TypeOfSByte_1(),
	DbTypes_t3970190259_StaticFields::get_offset_of_TypeOfChar_2(),
	DbTypes_t3970190259_StaticFields::get_offset_of_TypeOfInt16_3(),
	DbTypes_t3970190259_StaticFields::get_offset_of_TypeOfInt32_4(),
	DbTypes_t3970190259_StaticFields::get_offset_of_TypeOfInt64_5(),
	DbTypes_t3970190259_StaticFields::get_offset_of_TypeOfByte_6(),
	DbTypes_t3970190259_StaticFields::get_offset_of_TypeOfUInt16_7(),
	DbTypes_t3970190259_StaticFields::get_offset_of_TypeOfUInt32_8(),
	DbTypes_t3970190259_StaticFields::get_offset_of_TypeOfUInt64_9(),
	DbTypes_t3970190259_StaticFields::get_offset_of_TypeOfDouble_10(),
	DbTypes_t3970190259_StaticFields::get_offset_of_TypeOfSingle_11(),
	DbTypes_t3970190259_StaticFields::get_offset_of_TypeOfDecimal_12(),
	DbTypes_t3970190259_StaticFields::get_offset_of_TypeOfString_13(),
	DbTypes_t3970190259_StaticFields::get_offset_of_TypeOfDateTime_14(),
	DbTypes_t3970190259_StaticFields::get_offset_of_TypeOfObject_15(),
	DbTypes_t3970190259_StaticFields::get_offset_of_TypeOfGuid_16(),
	DbTypes_t3970190259_StaticFields::get_offset_of_TypeOfType_17(),
	DbTypes_t3970190259_StaticFields::get_offset_of_TypeOfByteArray_18(),
	DbTypes_t3970190259_StaticFields::get_offset_of_TypeOfFloat_19(),
	DbTypes_t3970190259_StaticFields::get_offset_of_TypeOfTimespan_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2852 = { sizeof (Index_t3653814461), -1, sizeof(Index_t3653814461_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2852[7] = 
{
	Index_t3653814461_StaticFields::get_offset_of_empty_0(),
	Index_t3653814461::get_offset_of__array_1(),
	Index_t3653814461::get_offset_of__size_2(),
	Index_t3653814461::get_offset_of__key_3(),
	Index_t3653814461::get_offset_of__refCount_4(),
	Index_t3653814461::get_offset_of_know_have_duplicates_5(),
	Index_t3653814461::get_offset_of_know_no_duplicates_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2853 = { sizeof (Key_t2805120048), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2853[6] = 
{
	Key_t2805120048::get_offset_of__table_0(),
	Key_t2805120048::get_offset_of__columns_1(),
	Key_t2805120048::get_offset_of__sortDirection_2(),
	Key_t2805120048::get_offset_of__rowStateFilter_3(),
	Key_t2805120048::get_offset_of__filter_4(),
	Key_t2805120048::get_offset_of__tmpRow_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2854 = { sizeof (RecordCache_t2411474328), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2854[5] = 
{
	RecordCache_t2411474328::get_offset_of__records_0(),
	RecordCache_t2411474328::get_offset_of__nextFreeIndex_1(),
	RecordCache_t2411474328::get_offset_of__currentCapacity_2(),
	RecordCache_t2411474328::get_offset_of__table_3(),
	RecordCache_t2411474328::get_offset_of__rowsToRecords_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2855 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2856 = { sizeof (SqlBinary_t2160009519)+ sizeof (RuntimeObject), sizeof(SqlBinary_t2160009519_marshaled_pinvoke), sizeof(SqlBinary_t2160009519_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2856[3] = 
{
	SqlBinary_t2160009519::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBinary_t2160009519::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBinary_t2160009519_StaticFields::get_offset_of_Null_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2857 = { sizeof (SqlBoolean_t3863231501)+ sizeof (RuntimeObject), sizeof(SqlBoolean_t3863231501_marshaled_pinvoke), sizeof(SqlBoolean_t3863231501_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2857[7] = 
{
	SqlBoolean_t3863231501::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBoolean_t3863231501::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBoolean_t3863231501_StaticFields::get_offset_of_False_2(),
	SqlBoolean_t3863231501_StaticFields::get_offset_of_Null_3(),
	SqlBoolean_t3863231501_StaticFields::get_offset_of_One_4(),
	SqlBoolean_t3863231501_StaticFields::get_offset_of_True_5(),
	SqlBoolean_t3863231501_StaticFields::get_offset_of_Zero_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2858 = { sizeof (SqlByte_t2090979296)+ sizeof (RuntimeObject), sizeof(SqlByte_t2090979296_marshaled_pinvoke), sizeof(SqlByte_t2090979296_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2858[6] = 
{
	SqlByte_t2090979296::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlByte_t2090979296::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlByte_t2090979296_StaticFields::get_offset_of_MaxValue_2(),
	SqlByte_t2090979296_StaticFields::get_offset_of_MinValue_3(),
	SqlByte_t2090979296_StaticFields::get_offset_of_Null_4(),
	SqlByte_t2090979296_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2859 = { sizeof (SqlBytes_t1456172318), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2859[3] = 
{
	SqlBytes_t1456172318::get_offset_of_notNull_0(),
	SqlBytes_t1456172318::get_offset_of_buffer_1(),
	SqlBytes_t1456172318::get_offset_of_storage_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2860 = { sizeof (SqlChars_t4260241767), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2860[3] = 
{
	SqlChars_t4260241767::get_offset_of_notNull_0(),
	SqlChars_t4260241767::get_offset_of_buffer_1(),
	SqlChars_t4260241767::get_offset_of_storage_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2861 = { sizeof (SqlCompareOptions_t3991194201)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2861[7] = 
{
	SqlCompareOptions_t3991194201::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2862 = { sizeof (SqlDateTime_t1783002647)+ sizeof (RuntimeObject), -1, sizeof(SqlDateTime_t1783002647_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2862[9] = 
{
	SqlDateTime_t1783002647::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDateTime_t1783002647::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDateTime_t1783002647_StaticFields::get_offset_of_MaxValue_2(),
	SqlDateTime_t1783002647_StaticFields::get_offset_of_MinValue_3(),
	SqlDateTime_t1783002647_StaticFields::get_offset_of_Null_4(),
	SqlDateTime_t1783002647_StaticFields::get_offset_of_SQLTicksPerHour_5(),
	SqlDateTime_t1783002647_StaticFields::get_offset_of_SQLTicksPerMinute_6(),
	SqlDateTime_t1783002647_StaticFields::get_offset_of_SQLTicksPerSecond_7(),
	SqlDateTime_t1783002647_StaticFields::get_offset_of_zero_day_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2863 = { sizeof (SqlDecimal_t2365944394)+ sizeof (RuntimeObject), sizeof(SqlDecimal_t2365944394_marshaled_pinvoke), sizeof(SqlDecimal_t2365944394_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2863[11] = 
{
	SqlDecimal_t2365944394::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t2365944394::get_offset_of_precision_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t2365944394::get_offset_of_scale_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t2365944394::get_offset_of_positive_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t2365944394::get_offset_of_notNull_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t2365944394_StaticFields::get_offset_of_constantsDecadeInt32Factors_5(),
	SqlDecimal_t2365944394_StaticFields::get_offset_of_MaxPrecision_6(),
	SqlDecimal_t2365944394_StaticFields::get_offset_of_MaxScale_7(),
	SqlDecimal_t2365944394_StaticFields::get_offset_of_MaxValue_8(),
	SqlDecimal_t2365944394_StaticFields::get_offset_of_MinValue_9(),
	SqlDecimal_t2365944394_StaticFields::get_offset_of_Null_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2864 = { sizeof (SqlDouble_t3301066005)+ sizeof (RuntimeObject), sizeof(SqlDouble_t3301066005_marshaled_pinvoke), sizeof(SqlDouble_t3301066005_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2864[6] = 
{
	SqlDouble_t3301066005::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDouble_t3301066005::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDouble_t3301066005_StaticFields::get_offset_of_MaxValue_2(),
	SqlDouble_t3301066005_StaticFields::get_offset_of_MinValue_3(),
	SqlDouble_t3301066005_StaticFields::get_offset_of_Null_4(),
	SqlDouble_t3301066005_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2865 = { sizeof (SqlGuid_t2747250112)+ sizeof (RuntimeObject), sizeof(SqlGuid_t2747250112_marshaled_pinvoke), sizeof(SqlGuid_t2747250112_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2865[3] = 
{
	SqlGuid_t2747250112::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlGuid_t2747250112::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlGuid_t2747250112_StaticFields::get_offset_of_Null_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2866 = { sizeof (SqlInt16_t239084003)+ sizeof (RuntimeObject), sizeof(SqlInt16_t239084003_marshaled_pinvoke), sizeof(SqlInt16_t239084003_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2866[6] = 
{
	SqlInt16_t239084003::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt16_t239084003::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt16_t239084003_StaticFields::get_offset_of_MaxValue_2(),
	SqlInt16_t239084003_StaticFields::get_offset_of_MinValue_3(),
	SqlInt16_t239084003_StaticFields::get_offset_of_Null_4(),
	SqlInt16_t239084003_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2867 = { sizeof (SqlInt32_t4048009512)+ sizeof (RuntimeObject), sizeof(SqlInt32_t4048009512_marshaled_pinvoke), sizeof(SqlInt32_t4048009512_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2867[6] = 
{
	SqlInt32_t4048009512::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt32_t4048009512::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt32_t4048009512_StaticFields::get_offset_of_MaxValue_2(),
	SqlInt32_t4048009512_StaticFields::get_offset_of_MinValue_3(),
	SqlInt32_t4048009512_StaticFields::get_offset_of_Null_4(),
	SqlInt32_t4048009512_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2868 = { sizeof (SqlInt64_t3471710467)+ sizeof (RuntimeObject), sizeof(SqlInt64_t3471710467_marshaled_pinvoke), sizeof(SqlInt64_t3471710467_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2868[6] = 
{
	SqlInt64_t3471710467::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt64_t3471710467::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt64_t3471710467_StaticFields::get_offset_of_MaxValue_2(),
	SqlInt64_t3471710467_StaticFields::get_offset_of_MinValue_3(),
	SqlInt64_t3471710467_StaticFields::get_offset_of_Null_4(),
	SqlInt64_t3471710467_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2869 = { sizeof (SqlMoney_t2759422723)+ sizeof (RuntimeObject), sizeof(SqlMoney_t2759422723_marshaled_pinvoke), sizeof(SqlMoney_t2759422723_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2869[7] = 
{
	SqlMoney_t2759422723::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlMoney_t2759422723::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlMoney_t2759422723_StaticFields::get_offset_of_MaxValue_2(),
	SqlMoney_t2759422723_StaticFields::get_offset_of_MinValue_3(),
	SqlMoney_t2759422723_StaticFields::get_offset_of_Null_4(),
	SqlMoney_t2759422723_StaticFields::get_offset_of_Zero_5(),
	SqlMoney_t2759422723_StaticFields::get_offset_of_MoneyFormat_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2870 = { sizeof (SqlNullValueException_t40371681), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2871 = { sizeof (SqlSingle_t3470856764)+ sizeof (RuntimeObject), sizeof(SqlSingle_t3470856764_marshaled_pinvoke), sizeof(SqlSingle_t3470856764_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2871[6] = 
{
	SqlSingle_t3470856764::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlSingle_t3470856764::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlSingle_t3470856764_StaticFields::get_offset_of_MaxValue_2(),
	SqlSingle_t3470856764_StaticFields::get_offset_of_MinValue_3(),
	SqlSingle_t3470856764_StaticFields::get_offset_of_Null_4(),
	SqlSingle_t3470856764_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2872 = { sizeof (SqlString_t1407223640)+ sizeof (RuntimeObject), sizeof(SqlString_t1407223640_marshaled_pinvoke), sizeof(SqlString_t1407223640_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2872[11] = 
{
	SqlString_t1407223640::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t1407223640::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t1407223640::get_offset_of_lcid_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t1407223640::get_offset_of_compareOptions_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t1407223640_StaticFields::get_offset_of_BinarySort_4(),
	SqlString_t1407223640_StaticFields::get_offset_of_IgnoreCase_5(),
	SqlString_t1407223640_StaticFields::get_offset_of_IgnoreKanaType_6(),
	SqlString_t1407223640_StaticFields::get_offset_of_IgnoreNonSpace_7(),
	SqlString_t1407223640_StaticFields::get_offset_of_IgnoreWidth_8(),
	SqlString_t1407223640_StaticFields::get_offset_of_Null_9(),
	SqlString_t1407223640_StaticFields::get_offset_of_DecimalFormat_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2873 = { sizeof (SqlTruncateException_t3685951501), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2874 = { sizeof (SqlTypeException_t3484370302), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2875 = { sizeof (SqlXml_t1623331956), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2875[2] = 
{
	SqlXml_t1623331956::get_offset_of_notNull_0(),
	SqlXml_t1623331956::get_offset_of_xmlValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2876 = { sizeof (StorageState_t2446554476)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2876[4] = 
{
	StorageState_t2446554476::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2877 = { sizeof (AcceptRejectRule_t843891051)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2877[3] = 
{
	AcceptRejectRule_t843891051::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2878 = { sizeof (ColumnTypeConverter_t1024381601), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2879 = { sizeof (CommandType_t1760695361)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2879[4] = 
{
	CommandType_t1760695361::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2880 = { sizeof (Constraint_t759394657), -1, sizeof(Constraint_t759394657_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2880[8] = 
{
	Constraint_t759394657_StaticFields::get_offset_of_beforeConstraintNameChange_0(),
	Constraint_t759394657::get_offset_of_events_1(),
	Constraint_t759394657::get_offset_of__constraintName_2(),
	Constraint_t759394657::get_offset_of__properties_3(),
	Constraint_t759394657::get_offset_of__index_4(),
	Constraint_t759394657::get_offset_of__constraintCollection_5(),
	Constraint_t759394657::get_offset_of_dataSet_6(),
	Constraint_t759394657::get_offset_of_initInProgress_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2881 = { sizeof (ConstraintCollection_t4288629486), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2881[3] = 
{
	ConstraintCollection_t4288629486::get_offset_of_table_2(),
	ConstraintCollection_t4288629486::get_offset_of__mostRecentConstraints_3(),
	ConstraintCollection_t4288629486::get_offset_of_CollectionChanged_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2882 = { sizeof (ConstraintConverter_t587116099), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2883 = { sizeof (ConstraintException_t2017523759), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2884 = { sizeof (DataCategoryAttribute_t2295432025), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2885 = { sizeof (DataColumn_t866196881), -1, sizeof(DataColumn_t866196881_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2885[23] = 
{
	DataColumn_t866196881::get_offset_of__eventHandlers_3(),
	DataColumn_t866196881_StaticFields::get_offset_of__propertyChangedKey_4(),
	DataColumn_t866196881::get_offset_of__allowDBNull_5(),
	DataColumn_t866196881::get_offset_of__autoIncrement_6(),
	DataColumn_t866196881::get_offset_of__autoIncrementSeed_7(),
	DataColumn_t866196881::get_offset_of__autoIncrementStep_8(),
	DataColumn_t866196881::get_offset_of__nextAutoIncrementValue_9(),
	DataColumn_t866196881::get_offset_of__caption_10(),
	DataColumn_t866196881::get_offset_of__columnMapping_11(),
	DataColumn_t866196881::get_offset_of__columnName_12(),
	DataColumn_t866196881::get_offset_of__defaultValue_13(),
	DataColumn_t866196881::get_offset_of__expression_14(),
	DataColumn_t866196881::get_offset_of__compiledExpression_15(),
	DataColumn_t866196881::get_offset_of__extendedProperties_16(),
	DataColumn_t866196881::get_offset_of__maxLength_17(),
	DataColumn_t866196881::get_offset_of__nameSpace_18(),
	DataColumn_t866196881::get_offset_of__ordinal_19(),
	DataColumn_t866196881::get_offset_of__prefix_20(),
	DataColumn_t866196881::get_offset_of__readOnly_21(),
	DataColumn_t866196881::get_offset_of__table_22(),
	DataColumn_t866196881::get_offset_of__unique_23(),
	DataColumn_t866196881::get_offset_of__dataContainer_24(),
	DataColumn_t866196881::get_offset_of__datetimeMode_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2886 = { sizeof (DataColumnChangeEventArgs_t1997694129), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2886[3] = 
{
	DataColumnChangeEventArgs_t1997694129::get_offset_of__column_1(),
	DataColumnChangeEventArgs_t1997694129::get_offset_of__row_2(),
	DataColumnChangeEventArgs_t1997694129::get_offset_of__proposedValue_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2887 = { sizeof (Doublet_t3613893367), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2887[2] = 
{
	Doublet_t3613893367::get_offset_of_count_0(),
	Doublet_t3613893367::get_offset_of_columnNames_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2888 = { sizeof (DataColumnCollection_t3924963021), -1, sizeof(DataColumnCollection_t3924963021_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2888[10] = 
{
	DataColumnCollection_t3924963021::get_offset_of_columnNameCount_2(),
	DataColumnCollection_t3924963021::get_offset_of_columnFromName_3(),
	DataColumnCollection_t3924963021::get_offset_of_autoIncrement_4(),
	DataColumnCollection_t3924963021::get_offset_of_defaultColumnIndex_5(),
	DataColumnCollection_t3924963021::get_offset_of_parentTable_6(),
	DataColumnCollection_t3924963021::get_offset_of__mostRecentColumns_7(),
	DataColumnCollection_t3924963021_StaticFields::get_offset_of_ColumnPrefix_8(),
	DataColumnCollection_t3924963021_StaticFields::get_offset_of_TenColumns_9(),
	DataColumnCollection_t3924963021::get_offset_of_CollectionChanged_10(),
	DataColumnCollection_t3924963021::get_offset_of_CollectionMetaDataChanged_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2889 = { sizeof (DataColumnPropertyDescriptor_t1796368678), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2889[5] = 
{
	DataColumnPropertyDescriptor_t1796368678::get_offset_of_readOnly_6(),
	DataColumnPropertyDescriptor_t1796368678::get_offset_of_componentType_7(),
	DataColumnPropertyDescriptor_t1796368678::get_offset_of_propertyType_8(),
	DataColumnPropertyDescriptor_t1796368678::get_offset_of_browsable_9(),
	DataColumnPropertyDescriptor_t1796368678::get_offset_of_columnIndex_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2890 = { sizeof (DataException_t3722754043), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2891 = { sizeof (DataRelation_t934786094), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2891[19] = 
{
	DataRelation_t934786094::get_offset_of_dataSet_0(),
	DataRelation_t934786094::get_offset_of_relationName_1(),
	DataRelation_t934786094::get_offset_of_parentKeyConstraint_2(),
	DataRelation_t934786094::get_offset_of_childKeyConstraint_3(),
	DataRelation_t934786094::get_offset_of_parentColumns_4(),
	DataRelation_t934786094::get_offset_of_childColumns_5(),
	DataRelation_t934786094::get_offset_of_nested_6(),
	DataRelation_t934786094::get_offset_of_createConstraints_7(),
	DataRelation_t934786094::get_offset_of_initFinished_8(),
	DataRelation_t934786094::get_offset_of_extendedProperties_9(),
	DataRelation_t934786094::get_offset_of__relationName_10(),
	DataRelation_t934786094::get_offset_of__parentTableName_11(),
	DataRelation_t934786094::get_offset_of__childTableName_12(),
	DataRelation_t934786094::get_offset_of__parentColumnNames_13(),
	DataRelation_t934786094::get_offset_of__childColumnNames_14(),
	DataRelation_t934786094::get_offset_of__nested_15(),
	DataRelation_t934786094::get_offset_of_initInProgress_16(),
	DataRelation_t934786094::get_offset_of__parentTableNameSpace_17(),
	DataRelation_t934786094::get_offset_of__childTableNameSpace_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2892 = { sizeof (DataRelationCollection_t29582142), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2892[3] = 
{
	DataRelationCollection_t29582142::get_offset_of_inTransition_2(),
	DataRelationCollection_t29582142::get_offset_of_index_3(),
	DataRelationCollection_t29582142::get_offset_of_CollectionChanged_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2893 = { sizeof (DataSetRelationCollection_t1283655997), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2893[2] = 
{
	DataSetRelationCollection_t1283655997::get_offset_of_dataSet_5(),
	DataSetRelationCollection_t1283655997::get_offset_of_mostRecentRelations_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2894 = { sizeof (DataTableRelationCollection_t1290177225), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2894[1] = 
{
	DataTableRelationCollection_t1290177225::get_offset_of_dataTable_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2895 = { sizeof (DataRelationPropertyDescriptor_t3023715853), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2895[1] = 
{
	DataRelationPropertyDescriptor_t3023715853::get_offset_of__relation_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2896 = { sizeof (DataRow_t475206349), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2896[13] = 
{
	DataRow_t475206349::get_offset_of__table_0(),
	DataRow_t475206349::get_offset_of__original_1(),
	DataRow_t475206349::get_offset_of__current_2(),
	DataRow_t475206349::get_offset_of__proposed_3(),
	DataRow_t475206349::get_offset_of__columnErrors_4(),
	DataRow_t475206349::get_offset_of_rowError_5(),
	DataRow_t475206349::get_offset_of_xmlRowID_6(),
	DataRow_t475206349::get_offset_of__nullConstraintViolation_7(),
	DataRow_t475206349::get_offset_of__nullConstraintMessage_8(),
	DataRow_t475206349::get_offset_of__inChangingEvent_9(),
	DataRow_t475206349::get_offset_of__rowId_10(),
	DataRow_t475206349::get_offset_of__rowChanged_11(),
	DataRow_t475206349::get_offset_of__inExpressionEvaluation_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2897 = { sizeof (DataRowAction_t1772990009)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2897[9] = 
{
	DataRowAction_t1772990009::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2898 = { sizeof (DataRowBuilder_t693998000), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2898[2] = 
{
	DataRowBuilder_t693998000::get_offset_of_table_0(),
	DataRowBuilder_t693998000::get_offset_of__rowId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2899 = { sizeof (DataRowChangeEventArgs_t2730483752), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2899[2] = 
{
	DataRowChangeEventArgs_t2730483752::get_offset_of_row_1(),
	DataRowChangeEventArgs_t2730483752::get_offset_of_action_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
