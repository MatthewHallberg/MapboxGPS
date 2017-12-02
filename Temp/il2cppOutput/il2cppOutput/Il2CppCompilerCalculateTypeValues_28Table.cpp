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
struct AttributeU5BU5D_t3706752724;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t943043444;
// System.Collections.IComparer
struct IComparer_t4011128122;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t2096071630;
// System.Data.PropertyCollection
struct PropertyCollection_t3380870831;
// System.Data.Common.Index
struct Index_t473838862;
// System.Data.ConstraintCollection
struct ConstraintCollection_t1054117791;
// System.Data.DataSet
struct DataSet_t3307559698;
// System.Type
struct Type_t;
// System.Int32[]
struct Int32U5BU5D_t1952577767;
// System.Data.Common.Key
struct Key_t2145850626;
// System.Data.DataTable
struct DataTable_t168666095;
// System.Collections.Stack
struct Stack_t1879801250;
// System.Data.DataRow[]
struct DataRowU5BU5D_t2302316205;
// System.Collections.BitArray
struct BitArray_t334721981;
// System.Data.DataColumn
struct DataColumn_t4119188540;
// System.Collections.ArrayList
struct ArrayList_t408765613;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t3285981729;
// System.Collections.IDictionary
struct IDictionary_t3835504210;
// System.Object[]
struct ObjectU5BU5D_t4208004352;
// System.Char[]
struct CharU5BU5D_t52468358;
// System.IntPtr[]
struct IntPtrU5BU5D_t2189390193;
// System.Data.UniqueConstraint
struct UniqueConstraint_t350754972;
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t3848497024;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t2355267413;
// System.String[]
struct StringU5BU5D_t1258614724;
// System.ComponentModel.ISite
struct ISite_t3418656110;
// System.UInt32[]
struct UInt32U5BU5D_t1418191491;
// System.Data.DataRow
struct DataRow_t154029508;
// System.Collections.Hashtable
struct Hashtable_t3596949909;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t316811287;
// System.Data.DataRelation
struct DataRelation_t4097826169;
// System.Byte[]
struct ByteU5BU5D_t2203878315;
// System.Data.Constraint[]
struct ConstraintU5BU5D_t2673502489;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t1421167585;
// System.ComponentModel.TypeConverter
struct TypeConverter_t1262942863;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_t534157880;
// System.Data.Common.DataColumnMappingCollection
struct DataColumnMappingCollection_t822547184;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4121507241;
// System.SByte[]
struct SByteU5BU5D_t362434928;
// System.Int16[]
struct Int16U5BU5D_t2289838974;
// System.Double[]
struct DoubleU5BU5D_t2277911284;
// System.UInt16[]
struct UInt16U5BU5D_t780664272;
// System.Single[]
struct SingleU5BU5D_t3312540190;
// System.Int64[]
struct Int64U5BU5D_t605282826;
// System.UInt64[]
struct UInt64U5BU5D_t806030259;
// System.Data.DataRelation[]
struct DataRelationU5BU5D_t3774023812;
// System.Collections.IList
struct IList_t877834559;
// System.Data.Common.DataTableMappingCollection
struct DataTableMappingCollection_t2254394270;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t641628636;
// System.Data.IDbCommand
struct IDbCommand_t1993613255;
// System.ComponentModel.ListSortDirection[]
struct ListSortDirectionU5BU5D_t3062874959;
// System.Data.Common.DataContainer
struct DataContainer_t3901026517;




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
#ifndef MEMBERDESCRIPTOR_T1847087350_H
#define MEMBERDESCRIPTOR_T1847087350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t1847087350  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attrs
	AttributeU5BU5D_t3706752724* ___attrs_1;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attrCollection
	AttributeCollection_t943043444 * ___attrCollection_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t1847087350, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t1847087350, ___attrs_1)); }
	inline AttributeU5BU5D_t3706752724* get_attrs_1() const { return ___attrs_1; }
	inline AttributeU5BU5D_t3706752724** get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(AttributeU5BU5D_t3706752724* value)
	{
		___attrs_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrs_1), value);
	}

	inline static int32_t get_offset_of_attrCollection_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t1847087350, ___attrCollection_2)); }
	inline AttributeCollection_t943043444 * get_attrCollection_2() const { return ___attrCollection_2; }
	inline AttributeCollection_t943043444 ** get_address_of_attrCollection_2() { return &___attrCollection_2; }
	inline void set_attrCollection_2(AttributeCollection_t943043444 * value)
	{
		___attrCollection_2 = value;
		Il2CppCodeGenWriteBarrier((&___attrCollection_2), value);
	}
};

struct MemberDescriptor_t1847087350_StaticFields
{
public:
	// System.Collections.IComparer System.ComponentModel.MemberDescriptor::default_comparer
	RuntimeObject* ___default_comparer_3;

public:
	inline static int32_t get_offset_of_default_comparer_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t1847087350_StaticFields, ___default_comparer_3)); }
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
#endif // MEMBERDESCRIPTOR_T1847087350_H
#ifndef CONSTRAINT_T633203400_H
#define CONSTRAINT_T633203400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Constraint
struct  Constraint_t633203400  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.Data.Constraint::events
	EventHandlerList_t2096071630 * ___events_1;
	// System.String System.Data.Constraint::_constraintName
	String_t* ____constraintName_2;
	// System.Data.PropertyCollection System.Data.Constraint::_properties
	PropertyCollection_t3380870831 * ____properties_3;
	// System.Data.Common.Index System.Data.Constraint::_index
	Index_t473838862 * ____index_4;
	// System.Data.ConstraintCollection System.Data.Constraint::_constraintCollection
	ConstraintCollection_t1054117791 * ____constraintCollection_5;
	// System.Data.DataSet System.Data.Constraint::dataSet
	DataSet_t3307559698 * ___dataSet_6;
	// System.Boolean System.Data.Constraint::initInProgress
	bool ___initInProgress_7;

public:
	inline static int32_t get_offset_of_events_1() { return static_cast<int32_t>(offsetof(Constraint_t633203400, ___events_1)); }
	inline EventHandlerList_t2096071630 * get_events_1() const { return ___events_1; }
	inline EventHandlerList_t2096071630 ** get_address_of_events_1() { return &___events_1; }
	inline void set_events_1(EventHandlerList_t2096071630 * value)
	{
		___events_1 = value;
		Il2CppCodeGenWriteBarrier((&___events_1), value);
	}

	inline static int32_t get_offset_of__constraintName_2() { return static_cast<int32_t>(offsetof(Constraint_t633203400, ____constraintName_2)); }
	inline String_t* get__constraintName_2() const { return ____constraintName_2; }
	inline String_t** get_address_of__constraintName_2() { return &____constraintName_2; }
	inline void set__constraintName_2(String_t* value)
	{
		____constraintName_2 = value;
		Il2CppCodeGenWriteBarrier((&____constraintName_2), value);
	}

	inline static int32_t get_offset_of__properties_3() { return static_cast<int32_t>(offsetof(Constraint_t633203400, ____properties_3)); }
	inline PropertyCollection_t3380870831 * get__properties_3() const { return ____properties_3; }
	inline PropertyCollection_t3380870831 ** get_address_of__properties_3() { return &____properties_3; }
	inline void set__properties_3(PropertyCollection_t3380870831 * value)
	{
		____properties_3 = value;
		Il2CppCodeGenWriteBarrier((&____properties_3), value);
	}

	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(Constraint_t633203400, ____index_4)); }
	inline Index_t473838862 * get__index_4() const { return ____index_4; }
	inline Index_t473838862 ** get_address_of__index_4() { return &____index_4; }
	inline void set__index_4(Index_t473838862 * value)
	{
		____index_4 = value;
		Il2CppCodeGenWriteBarrier((&____index_4), value);
	}

	inline static int32_t get_offset_of__constraintCollection_5() { return static_cast<int32_t>(offsetof(Constraint_t633203400, ____constraintCollection_5)); }
	inline ConstraintCollection_t1054117791 * get__constraintCollection_5() const { return ____constraintCollection_5; }
	inline ConstraintCollection_t1054117791 ** get_address_of__constraintCollection_5() { return &____constraintCollection_5; }
	inline void set__constraintCollection_5(ConstraintCollection_t1054117791 * value)
	{
		____constraintCollection_5 = value;
		Il2CppCodeGenWriteBarrier((&____constraintCollection_5), value);
	}

	inline static int32_t get_offset_of_dataSet_6() { return static_cast<int32_t>(offsetof(Constraint_t633203400, ___dataSet_6)); }
	inline DataSet_t3307559698 * get_dataSet_6() const { return ___dataSet_6; }
	inline DataSet_t3307559698 ** get_address_of_dataSet_6() { return &___dataSet_6; }
	inline void set_dataSet_6(DataSet_t3307559698 * value)
	{
		___dataSet_6 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_6), value);
	}

	inline static int32_t get_offset_of_initInProgress_7() { return static_cast<int32_t>(offsetof(Constraint_t633203400, ___initInProgress_7)); }
	inline bool get_initInProgress_7() const { return ___initInProgress_7; }
	inline bool* get_address_of_initInProgress_7() { return &___initInProgress_7; }
	inline void set_initInProgress_7(bool value)
	{
		___initInProgress_7 = value;
	}
};

struct Constraint_t633203400_StaticFields
{
public:
	// System.Object System.Data.Constraint::beforeConstraintNameChange
	RuntimeObject * ___beforeConstraintNameChange_0;

public:
	inline static int32_t get_offset_of_beforeConstraintNameChange_0() { return static_cast<int32_t>(offsetof(Constraint_t633203400_StaticFields, ___beforeConstraintNameChange_0)); }
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
#endif // CONSTRAINT_T633203400_H
#ifndef VALUETYPE_T1579504895_H
#define VALUETYPE_T1579504895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1579504895  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1579504895_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1579504895_marshaled_com
{
};
#endif // VALUETYPE_T1579504895_H
#ifndef DBDATARECORD_T1334473479_H
#define DBDATARECORD_T1334473479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbDataRecord
struct  DbDataRecord_t1334473479  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBDATARECORD_T1334473479_H
#ifndef DBPROVIDERFACTORY_T807457549_H
#define DBPROVIDERFACTORY_T807457549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbProviderFactory
struct  DbProviderFactory_t807457549  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPROVIDERFACTORY_T807457549_H
#ifndef DBTYPES_T4093268175_H
#define DBTYPES_T4093268175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbTypes
struct  DbTypes_t4093268175  : public RuntimeObject
{
public:

public:
};

struct DbTypes_t4093268175_StaticFields
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
	inline static int32_t get_offset_of_TypeOfBoolean_0() { return static_cast<int32_t>(offsetof(DbTypes_t4093268175_StaticFields, ___TypeOfBoolean_0)); }
	inline Type_t * get_TypeOfBoolean_0() const { return ___TypeOfBoolean_0; }
	inline Type_t ** get_address_of_TypeOfBoolean_0() { return &___TypeOfBoolean_0; }
	inline void set_TypeOfBoolean_0(Type_t * value)
	{
		___TypeOfBoolean_0 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfBoolean_0), value);
	}

	inline static int32_t get_offset_of_TypeOfSByte_1() { return static_cast<int32_t>(offsetof(DbTypes_t4093268175_StaticFields, ___TypeOfSByte_1)); }
	inline Type_t * get_TypeOfSByte_1() const { return ___TypeOfSByte_1; }
	inline Type_t ** get_address_of_TypeOfSByte_1() { return &___TypeOfSByte_1; }
	inline void set_TypeOfSByte_1(Type_t * value)
	{
		___TypeOfSByte_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfSByte_1), value);
	}

	inline static int32_t get_offset_of_TypeOfChar_2() { return static_cast<int32_t>(offsetof(DbTypes_t4093268175_StaticFields, ___TypeOfChar_2)); }
	inline Type_t * get_TypeOfChar_2() const { return ___TypeOfChar_2; }
	inline Type_t ** get_address_of_TypeOfChar_2() { return &___TypeOfChar_2; }
	inline void set_TypeOfChar_2(Type_t * value)
	{
		___TypeOfChar_2 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfChar_2), value);
	}

	inline static int32_t get_offset_of_TypeOfInt16_3() { return static_cast<int32_t>(offsetof(DbTypes_t4093268175_StaticFields, ___TypeOfInt16_3)); }
	inline Type_t * get_TypeOfInt16_3() const { return ___TypeOfInt16_3; }
	inline Type_t ** get_address_of_TypeOfInt16_3() { return &___TypeOfInt16_3; }
	inline void set_TypeOfInt16_3(Type_t * value)
	{
		___TypeOfInt16_3 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfInt16_3), value);
	}

	inline static int32_t get_offset_of_TypeOfInt32_4() { return static_cast<int32_t>(offsetof(DbTypes_t4093268175_StaticFields, ___TypeOfInt32_4)); }
	inline Type_t * get_TypeOfInt32_4() const { return ___TypeOfInt32_4; }
	inline Type_t ** get_address_of_TypeOfInt32_4() { return &___TypeOfInt32_4; }
	inline void set_TypeOfInt32_4(Type_t * value)
	{
		___TypeOfInt32_4 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfInt32_4), value);
	}

	inline static int32_t get_offset_of_TypeOfInt64_5() { return static_cast<int32_t>(offsetof(DbTypes_t4093268175_StaticFields, ___TypeOfInt64_5)); }
	inline Type_t * get_TypeOfInt64_5() const { return ___TypeOfInt64_5; }
	inline Type_t ** get_address_of_TypeOfInt64_5() { return &___TypeOfInt64_5; }
	inline void set_TypeOfInt64_5(Type_t * value)
	{
		___TypeOfInt64_5 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfInt64_5), value);
	}

	inline static int32_t get_offset_of_TypeOfByte_6() { return static_cast<int32_t>(offsetof(DbTypes_t4093268175_StaticFields, ___TypeOfByte_6)); }
	inline Type_t * get_TypeOfByte_6() const { return ___TypeOfByte_6; }
	inline Type_t ** get_address_of_TypeOfByte_6() { return &___TypeOfByte_6; }
	inline void set_TypeOfByte_6(Type_t * value)
	{
		___TypeOfByte_6 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfByte_6), value);
	}

	inline static int32_t get_offset_of_TypeOfUInt16_7() { return static_cast<int32_t>(offsetof(DbTypes_t4093268175_StaticFields, ___TypeOfUInt16_7)); }
	inline Type_t * get_TypeOfUInt16_7() const { return ___TypeOfUInt16_7; }
	inline Type_t ** get_address_of_TypeOfUInt16_7() { return &___TypeOfUInt16_7; }
	inline void set_TypeOfUInt16_7(Type_t * value)
	{
		___TypeOfUInt16_7 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfUInt16_7), value);
	}

	inline static int32_t get_offset_of_TypeOfUInt32_8() { return static_cast<int32_t>(offsetof(DbTypes_t4093268175_StaticFields, ___TypeOfUInt32_8)); }
	inline Type_t * get_TypeOfUInt32_8() const { return ___TypeOfUInt32_8; }
	inline Type_t ** get_address_of_TypeOfUInt32_8() { return &___TypeOfUInt32_8; }
	inline void set_TypeOfUInt32_8(Type_t * value)
	{
		___TypeOfUInt32_8 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfUInt32_8), value);
	}

	inline static int32_t get_offset_of_TypeOfUInt64_9() { return static_cast<int32_t>(offsetof(DbTypes_t4093268175_StaticFields, ___TypeOfUInt64_9)); }
	inline Type_t * get_TypeOfUInt64_9() const { return ___TypeOfUInt64_9; }
	inline Type_t ** get_address_of_TypeOfUInt64_9() { return &___TypeOfUInt64_9; }
	inline void set_TypeOfUInt64_9(Type_t * value)
	{
		___TypeOfUInt64_9 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfUInt64_9), value);
	}

	inline static int32_t get_offset_of_TypeOfDouble_10() { return static_cast<int32_t>(offsetof(DbTypes_t4093268175_StaticFields, ___TypeOfDouble_10)); }
	inline Type_t * get_TypeOfDouble_10() const { return ___TypeOfDouble_10; }
	inline Type_t ** get_address_of_TypeOfDouble_10() { return &___TypeOfDouble_10; }
	inline void set_TypeOfDouble_10(Type_t * value)
	{
		___TypeOfDouble_10 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfDouble_10), value);
	}

	inline static int32_t get_offset_of_TypeOfSingle_11() { return static_cast<int32_t>(offsetof(DbTypes_t4093268175_StaticFields, ___TypeOfSingle_11)); }
	inline Type_t * get_TypeOfSingle_11() const { return ___TypeOfSingle_11; }
	inline Type_t ** get_address_of_TypeOfSingle_11() { return &___TypeOfSingle_11; }
	inline void set_TypeOfSingle_11(Type_t * value)
	{
		___TypeOfSingle_11 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfSingle_11), value);
	}

	inline static int32_t get_offset_of_TypeOfDecimal_12() { return static_cast<int32_t>(offsetof(DbTypes_t4093268175_StaticFields, ___TypeOfDecimal_12)); }
	inline Type_t * get_TypeOfDecimal_12() const { return ___TypeOfDecimal_12; }
	inline Type_t ** get_address_of_TypeOfDecimal_12() { return &___TypeOfDecimal_12; }
	inline void set_TypeOfDecimal_12(Type_t * value)
	{
		___TypeOfDecimal_12 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfDecimal_12), value);
	}

	inline static int32_t get_offset_of_TypeOfString_13() { return static_cast<int32_t>(offsetof(DbTypes_t4093268175_StaticFields, ___TypeOfString_13)); }
	inline Type_t * get_TypeOfString_13() const { return ___TypeOfString_13; }
	inline Type_t ** get_address_of_TypeOfString_13() { return &___TypeOfString_13; }
	inline void set_TypeOfString_13(Type_t * value)
	{
		___TypeOfString_13 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfString_13), value);
	}

	inline static int32_t get_offset_of_TypeOfDateTime_14() { return static_cast<int32_t>(offsetof(DbTypes_t4093268175_StaticFields, ___TypeOfDateTime_14)); }
	inline Type_t * get_TypeOfDateTime_14() const { return ___TypeOfDateTime_14; }
	inline Type_t ** get_address_of_TypeOfDateTime_14() { return &___TypeOfDateTime_14; }
	inline void set_TypeOfDateTime_14(Type_t * value)
	{
		___TypeOfDateTime_14 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfDateTime_14), value);
	}

	inline static int32_t get_offset_of_TypeOfObject_15() { return static_cast<int32_t>(offsetof(DbTypes_t4093268175_StaticFields, ___TypeOfObject_15)); }
	inline Type_t * get_TypeOfObject_15() const { return ___TypeOfObject_15; }
	inline Type_t ** get_address_of_TypeOfObject_15() { return &___TypeOfObject_15; }
	inline void set_TypeOfObject_15(Type_t * value)
	{
		___TypeOfObject_15 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfObject_15), value);
	}

	inline static int32_t get_offset_of_TypeOfGuid_16() { return static_cast<int32_t>(offsetof(DbTypes_t4093268175_StaticFields, ___TypeOfGuid_16)); }
	inline Type_t * get_TypeOfGuid_16() const { return ___TypeOfGuid_16; }
	inline Type_t ** get_address_of_TypeOfGuid_16() { return &___TypeOfGuid_16; }
	inline void set_TypeOfGuid_16(Type_t * value)
	{
		___TypeOfGuid_16 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfGuid_16), value);
	}

	inline static int32_t get_offset_of_TypeOfType_17() { return static_cast<int32_t>(offsetof(DbTypes_t4093268175_StaticFields, ___TypeOfType_17)); }
	inline Type_t * get_TypeOfType_17() const { return ___TypeOfType_17; }
	inline Type_t ** get_address_of_TypeOfType_17() { return &___TypeOfType_17; }
	inline void set_TypeOfType_17(Type_t * value)
	{
		___TypeOfType_17 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfType_17), value);
	}

	inline static int32_t get_offset_of_TypeOfByteArray_18() { return static_cast<int32_t>(offsetof(DbTypes_t4093268175_StaticFields, ___TypeOfByteArray_18)); }
	inline Type_t * get_TypeOfByteArray_18() const { return ___TypeOfByteArray_18; }
	inline Type_t ** get_address_of_TypeOfByteArray_18() { return &___TypeOfByteArray_18; }
	inline void set_TypeOfByteArray_18(Type_t * value)
	{
		___TypeOfByteArray_18 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfByteArray_18), value);
	}

	inline static int32_t get_offset_of_TypeOfFloat_19() { return static_cast<int32_t>(offsetof(DbTypes_t4093268175_StaticFields, ___TypeOfFloat_19)); }
	inline Type_t * get_TypeOfFloat_19() const { return ___TypeOfFloat_19; }
	inline Type_t ** get_address_of_TypeOfFloat_19() { return &___TypeOfFloat_19; }
	inline void set_TypeOfFloat_19(Type_t * value)
	{
		___TypeOfFloat_19 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfFloat_19), value);
	}

	inline static int32_t get_offset_of_TypeOfTimespan_20() { return static_cast<int32_t>(offsetof(DbTypes_t4093268175_StaticFields, ___TypeOfTimespan_20)); }
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
#endif // DBTYPES_T4093268175_H
#ifndef INDEX_T473838862_H
#define INDEX_T473838862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Index
struct  Index_t473838862  : public RuntimeObject
{
public:
	// System.Int32[] System.Data.Common.Index::_array
	Int32U5BU5D_t1952577767* ____array_1;
	// System.Int32 System.Data.Common.Index::_size
	int32_t ____size_2;
	// System.Data.Common.Key System.Data.Common.Index::_key
	Key_t2145850626 * ____key_3;
	// System.Int32 System.Data.Common.Index::_refCount
	int32_t ____refCount_4;
	// System.Boolean System.Data.Common.Index::know_have_duplicates
	bool ___know_have_duplicates_5;
	// System.Boolean System.Data.Common.Index::know_no_duplicates
	bool ___know_no_duplicates_6;

public:
	inline static int32_t get_offset_of__array_1() { return static_cast<int32_t>(offsetof(Index_t473838862, ____array_1)); }
	inline Int32U5BU5D_t1952577767* get__array_1() const { return ____array_1; }
	inline Int32U5BU5D_t1952577767** get_address_of__array_1() { return &____array_1; }
	inline void set__array_1(Int32U5BU5D_t1952577767* value)
	{
		____array_1 = value;
		Il2CppCodeGenWriteBarrier((&____array_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(Index_t473838862, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__key_3() { return static_cast<int32_t>(offsetof(Index_t473838862, ____key_3)); }
	inline Key_t2145850626 * get__key_3() const { return ____key_3; }
	inline Key_t2145850626 ** get_address_of__key_3() { return &____key_3; }
	inline void set__key_3(Key_t2145850626 * value)
	{
		____key_3 = value;
		Il2CppCodeGenWriteBarrier((&____key_3), value);
	}

	inline static int32_t get_offset_of__refCount_4() { return static_cast<int32_t>(offsetof(Index_t473838862, ____refCount_4)); }
	inline int32_t get__refCount_4() const { return ____refCount_4; }
	inline int32_t* get_address_of__refCount_4() { return &____refCount_4; }
	inline void set__refCount_4(int32_t value)
	{
		____refCount_4 = value;
	}

	inline static int32_t get_offset_of_know_have_duplicates_5() { return static_cast<int32_t>(offsetof(Index_t473838862, ___know_have_duplicates_5)); }
	inline bool get_know_have_duplicates_5() const { return ___know_have_duplicates_5; }
	inline bool* get_address_of_know_have_duplicates_5() { return &___know_have_duplicates_5; }
	inline void set_know_have_duplicates_5(bool value)
	{
		___know_have_duplicates_5 = value;
	}

	inline static int32_t get_offset_of_know_no_duplicates_6() { return static_cast<int32_t>(offsetof(Index_t473838862, ___know_no_duplicates_6)); }
	inline bool get_know_no_duplicates_6() const { return ___know_no_duplicates_6; }
	inline bool* get_address_of_know_no_duplicates_6() { return &___know_no_duplicates_6; }
	inline void set_know_no_duplicates_6(bool value)
	{
		___know_no_duplicates_6 = value;
	}
};

struct Index_t473838862_StaticFields
{
public:
	// System.Int32[] System.Data.Common.Index::empty
	Int32U5BU5D_t1952577767* ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(Index_t473838862_StaticFields, ___empty_0)); }
	inline Int32U5BU5D_t1952577767* get_empty_0() const { return ___empty_0; }
	inline Int32U5BU5D_t1952577767** get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(Int32U5BU5D_t1952577767* value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEX_T473838862_H
#ifndef DATAROWBUILDER_T907103255_H
#define DATAROWBUILDER_T907103255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowBuilder
struct  DataRowBuilder_t907103255  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.DataRowBuilder::table
	DataTable_t168666095 * ___table_0;
	// System.Int32 System.Data.DataRowBuilder::_rowId
	int32_t ____rowId_1;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(DataRowBuilder_t907103255, ___table_0)); }
	inline DataTable_t168666095 * get_table_0() const { return ___table_0; }
	inline DataTable_t168666095 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(DataTable_t168666095 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((&___table_0), value);
	}

	inline static int32_t get_offset_of__rowId_1() { return static_cast<int32_t>(offsetof(DataRowBuilder_t907103255, ____rowId_1)); }
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
#endif // DATAROWBUILDER_T907103255_H
#ifndef RECORDCACHE_T1150675034_H
#define RECORDCACHE_T1150675034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.RecordCache
struct  RecordCache_t1150675034  : public RuntimeObject
{
public:
	// System.Collections.Stack System.Data.Common.RecordCache::_records
	Stack_t1879801250 * ____records_0;
	// System.Int32 System.Data.Common.RecordCache::_nextFreeIndex
	int32_t ____nextFreeIndex_1;
	// System.Int32 System.Data.Common.RecordCache::_currentCapacity
	int32_t ____currentCapacity_2;
	// System.Data.DataTable System.Data.Common.RecordCache::_table
	DataTable_t168666095 * ____table_3;
	// System.Data.DataRow[] System.Data.Common.RecordCache::_rowsToRecords
	DataRowU5BU5D_t2302316205* ____rowsToRecords_4;

public:
	inline static int32_t get_offset_of__records_0() { return static_cast<int32_t>(offsetof(RecordCache_t1150675034, ____records_0)); }
	inline Stack_t1879801250 * get__records_0() const { return ____records_0; }
	inline Stack_t1879801250 ** get_address_of__records_0() { return &____records_0; }
	inline void set__records_0(Stack_t1879801250 * value)
	{
		____records_0 = value;
		Il2CppCodeGenWriteBarrier((&____records_0), value);
	}

	inline static int32_t get_offset_of__nextFreeIndex_1() { return static_cast<int32_t>(offsetof(RecordCache_t1150675034, ____nextFreeIndex_1)); }
	inline int32_t get__nextFreeIndex_1() const { return ____nextFreeIndex_1; }
	inline int32_t* get_address_of__nextFreeIndex_1() { return &____nextFreeIndex_1; }
	inline void set__nextFreeIndex_1(int32_t value)
	{
		____nextFreeIndex_1 = value;
	}

	inline static int32_t get_offset_of__currentCapacity_2() { return static_cast<int32_t>(offsetof(RecordCache_t1150675034, ____currentCapacity_2)); }
	inline int32_t get__currentCapacity_2() const { return ____currentCapacity_2; }
	inline int32_t* get_address_of__currentCapacity_2() { return &____currentCapacity_2; }
	inline void set__currentCapacity_2(int32_t value)
	{
		____currentCapacity_2 = value;
	}

	inline static int32_t get_offset_of__table_3() { return static_cast<int32_t>(offsetof(RecordCache_t1150675034, ____table_3)); }
	inline DataTable_t168666095 * get__table_3() const { return ____table_3; }
	inline DataTable_t168666095 ** get_address_of__table_3() { return &____table_3; }
	inline void set__table_3(DataTable_t168666095 * value)
	{
		____table_3 = value;
		Il2CppCodeGenWriteBarrier((&____table_3), value);
	}

	inline static int32_t get_offset_of__rowsToRecords_4() { return static_cast<int32_t>(offsetof(RecordCache_t1150675034, ____rowsToRecords_4)); }
	inline DataRowU5BU5D_t2302316205* get__rowsToRecords_4() const { return ____rowsToRecords_4; }
	inline DataRowU5BU5D_t2302316205** get_address_of__rowsToRecords_4() { return &____rowsToRecords_4; }
	inline void set__rowsToRecords_4(DataRowU5BU5D_t2302316205* value)
	{
		____rowsToRecords_4 = value;
		Il2CppCodeGenWriteBarrier((&____rowsToRecords_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECORDCACHE_T1150675034_H
#ifndef DATACONTAINER_T3901026517_H
#define DATACONTAINER_T3901026517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataContainer
struct  DataContainer_t3901026517  : public RuntimeObject
{
public:
	// System.Collections.BitArray System.Data.Common.DataContainer::null_values
	BitArray_t334721981 * ___null_values_0;
	// System.Type System.Data.Common.DataContainer::_type
	Type_t * ____type_1;
	// System.Data.DataColumn System.Data.Common.DataContainer::_column
	DataColumn_t4119188540 * ____column_2;

public:
	inline static int32_t get_offset_of_null_values_0() { return static_cast<int32_t>(offsetof(DataContainer_t3901026517, ___null_values_0)); }
	inline BitArray_t334721981 * get_null_values_0() const { return ___null_values_0; }
	inline BitArray_t334721981 ** get_address_of_null_values_0() { return &___null_values_0; }
	inline void set_null_values_0(BitArray_t334721981 * value)
	{
		___null_values_0 = value;
		Il2CppCodeGenWriteBarrier((&___null_values_0), value);
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(DataContainer_t3901026517, ____type_1)); }
	inline Type_t * get__type_1() const { return ____type_1; }
	inline Type_t ** get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(Type_t * value)
	{
		____type_1 = value;
		Il2CppCodeGenWriteBarrier((&____type_1), value);
	}

	inline static int32_t get_offset_of__column_2() { return static_cast<int32_t>(offsetof(DataContainer_t3901026517, ____column_2)); }
	inline DataColumn_t4119188540 * get__column_2() const { return ____column_2; }
	inline DataColumn_t4119188540 ** get_address_of__column_2() { return &____column_2; }
	inline void set__column_2(DataColumn_t4119188540 * value)
	{
		____column_2 = value;
		Il2CppCodeGenWriteBarrier((&____column_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACONTAINER_T3901026517_H
#ifndef DATAROW_T154029508_H
#define DATAROW_T154029508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRow
struct  DataRow_t154029508  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.DataRow::_table
	DataTable_t168666095 * ____table_0;
	// System.Int32 System.Data.DataRow::_original
	int32_t ____original_1;
	// System.Int32 System.Data.DataRow::_current
	int32_t ____current_2;
	// System.Int32 System.Data.DataRow::_proposed
	int32_t ____proposed_3;
	// System.Collections.ArrayList System.Data.DataRow::_columnErrors
	ArrayList_t408765613 * ____columnErrors_4;
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
	inline static int32_t get_offset_of__table_0() { return static_cast<int32_t>(offsetof(DataRow_t154029508, ____table_0)); }
	inline DataTable_t168666095 * get__table_0() const { return ____table_0; }
	inline DataTable_t168666095 ** get_address_of__table_0() { return &____table_0; }
	inline void set__table_0(DataTable_t168666095 * value)
	{
		____table_0 = value;
		Il2CppCodeGenWriteBarrier((&____table_0), value);
	}

	inline static int32_t get_offset_of__original_1() { return static_cast<int32_t>(offsetof(DataRow_t154029508, ____original_1)); }
	inline int32_t get__original_1() const { return ____original_1; }
	inline int32_t* get_address_of__original_1() { return &____original_1; }
	inline void set__original_1(int32_t value)
	{
		____original_1 = value;
	}

	inline static int32_t get_offset_of__current_2() { return static_cast<int32_t>(offsetof(DataRow_t154029508, ____current_2)); }
	inline int32_t get__current_2() const { return ____current_2; }
	inline int32_t* get_address_of__current_2() { return &____current_2; }
	inline void set__current_2(int32_t value)
	{
		____current_2 = value;
	}

	inline static int32_t get_offset_of__proposed_3() { return static_cast<int32_t>(offsetof(DataRow_t154029508, ____proposed_3)); }
	inline int32_t get__proposed_3() const { return ____proposed_3; }
	inline int32_t* get_address_of__proposed_3() { return &____proposed_3; }
	inline void set__proposed_3(int32_t value)
	{
		____proposed_3 = value;
	}

	inline static int32_t get_offset_of__columnErrors_4() { return static_cast<int32_t>(offsetof(DataRow_t154029508, ____columnErrors_4)); }
	inline ArrayList_t408765613 * get__columnErrors_4() const { return ____columnErrors_4; }
	inline ArrayList_t408765613 ** get_address_of__columnErrors_4() { return &____columnErrors_4; }
	inline void set__columnErrors_4(ArrayList_t408765613 * value)
	{
		____columnErrors_4 = value;
		Il2CppCodeGenWriteBarrier((&____columnErrors_4), value);
	}

	inline static int32_t get_offset_of_rowError_5() { return static_cast<int32_t>(offsetof(DataRow_t154029508, ___rowError_5)); }
	inline String_t* get_rowError_5() const { return ___rowError_5; }
	inline String_t** get_address_of_rowError_5() { return &___rowError_5; }
	inline void set_rowError_5(String_t* value)
	{
		___rowError_5 = value;
		Il2CppCodeGenWriteBarrier((&___rowError_5), value);
	}

	inline static int32_t get_offset_of_xmlRowID_6() { return static_cast<int32_t>(offsetof(DataRow_t154029508, ___xmlRowID_6)); }
	inline int32_t get_xmlRowID_6() const { return ___xmlRowID_6; }
	inline int32_t* get_address_of_xmlRowID_6() { return &___xmlRowID_6; }
	inline void set_xmlRowID_6(int32_t value)
	{
		___xmlRowID_6 = value;
	}

	inline static int32_t get_offset_of__nullConstraintViolation_7() { return static_cast<int32_t>(offsetof(DataRow_t154029508, ____nullConstraintViolation_7)); }
	inline bool get__nullConstraintViolation_7() const { return ____nullConstraintViolation_7; }
	inline bool* get_address_of__nullConstraintViolation_7() { return &____nullConstraintViolation_7; }
	inline void set__nullConstraintViolation_7(bool value)
	{
		____nullConstraintViolation_7 = value;
	}

	inline static int32_t get_offset_of__nullConstraintMessage_8() { return static_cast<int32_t>(offsetof(DataRow_t154029508, ____nullConstraintMessage_8)); }
	inline String_t* get__nullConstraintMessage_8() const { return ____nullConstraintMessage_8; }
	inline String_t** get_address_of__nullConstraintMessage_8() { return &____nullConstraintMessage_8; }
	inline void set__nullConstraintMessage_8(String_t* value)
	{
		____nullConstraintMessage_8 = value;
		Il2CppCodeGenWriteBarrier((&____nullConstraintMessage_8), value);
	}

	inline static int32_t get_offset_of__inChangingEvent_9() { return static_cast<int32_t>(offsetof(DataRow_t154029508, ____inChangingEvent_9)); }
	inline bool get__inChangingEvent_9() const { return ____inChangingEvent_9; }
	inline bool* get_address_of__inChangingEvent_9() { return &____inChangingEvent_9; }
	inline void set__inChangingEvent_9(bool value)
	{
		____inChangingEvent_9 = value;
	}

	inline static int32_t get_offset_of__rowId_10() { return static_cast<int32_t>(offsetof(DataRow_t154029508, ____rowId_10)); }
	inline int32_t get__rowId_10() const { return ____rowId_10; }
	inline int32_t* get_address_of__rowId_10() { return &____rowId_10; }
	inline void set__rowId_10(int32_t value)
	{
		____rowId_10 = value;
	}

	inline static int32_t get_offset_of__rowChanged_11() { return static_cast<int32_t>(offsetof(DataRow_t154029508, ____rowChanged_11)); }
	inline bool get__rowChanged_11() const { return ____rowChanged_11; }
	inline bool* get_address_of__rowChanged_11() { return &____rowChanged_11; }
	inline void set__rowChanged_11(bool value)
	{
		____rowChanged_11 = value;
	}

	inline static int32_t get_offset_of__inExpressionEvaluation_12() { return static_cast<int32_t>(offsetof(DataRow_t154029508, ____inExpressionEvaluation_12)); }
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
#endif // DATAROW_T154029508_H
#ifndef ATTRIBUTE_T2733848937_H
#define ATTRIBUTE_T2733848937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2733848937  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2733848937_H
#ifndef MARSHALBYREFOBJECT_T1557693092_H
#define MARSHALBYREFOBJECT_T1557693092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t1557693092  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t3285981729 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t1557693092, ____identity_0)); }
	inline ServerIdentity_t3285981729 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t3285981729 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t3285981729 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T1557693092_H
#ifndef INTERNALDATACOLLECTIONBASE_T1048802988_H
#define INTERNALDATACOLLECTIONBASE_T1048802988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.InternalDataCollectionBase
struct  InternalDataCollectionBase_t1048802988  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Data.InternalDataCollectionBase::list
	ArrayList_t408765613 * ___list_0;
	// System.Boolean System.Data.InternalDataCollectionBase::synchronized
	bool ___synchronized_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(InternalDataCollectionBase_t1048802988, ___list_0)); }
	inline ArrayList_t408765613 * get_list_0() const { return ___list_0; }
	inline ArrayList_t408765613 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t408765613 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_synchronized_1() { return static_cast<int32_t>(offsetof(InternalDataCollectionBase_t1048802988, ___synchronized_1)); }
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
#endif // INTERNALDATACOLLECTIONBASE_T1048802988_H
#ifndef TOKENIZER_T265589161_H
#define TOKENIZER_T265589161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Tokenizer
struct  Tokenizer_t265589161  : public RuntimeObject
{
public:
	// System.Char[] Mono.Data.SqlExpressions.Tokenizer::input
	CharU5BU5D_t52468358* ___input_2;
	// System.Int32 Mono.Data.SqlExpressions.Tokenizer::pos
	int32_t ___pos_3;
	// System.Int32 Mono.Data.SqlExpressions.Tokenizer::tok
	int32_t ___tok_4;
	// System.Object Mono.Data.SqlExpressions.Tokenizer::val
	RuntimeObject * ___val_5;

public:
	inline static int32_t get_offset_of_input_2() { return static_cast<int32_t>(offsetof(Tokenizer_t265589161, ___input_2)); }
	inline CharU5BU5D_t52468358* get_input_2() const { return ___input_2; }
	inline CharU5BU5D_t52468358** get_address_of_input_2() { return &___input_2; }
	inline void set_input_2(CharU5BU5D_t52468358* value)
	{
		___input_2 = value;
		Il2CppCodeGenWriteBarrier((&___input_2), value);
	}

	inline static int32_t get_offset_of_pos_3() { return static_cast<int32_t>(offsetof(Tokenizer_t265589161, ___pos_3)); }
	inline int32_t get_pos_3() const { return ___pos_3; }
	inline int32_t* get_address_of_pos_3() { return &___pos_3; }
	inline void set_pos_3(int32_t value)
	{
		___pos_3 = value;
	}

	inline static int32_t get_offset_of_tok_4() { return static_cast<int32_t>(offsetof(Tokenizer_t265589161, ___tok_4)); }
	inline int32_t get_tok_4() const { return ___tok_4; }
	inline int32_t* get_address_of_tok_4() { return &___tok_4; }
	inline void set_tok_4(int32_t value)
	{
		___tok_4 = value;
	}

	inline static int32_t get_offset_of_val_5() { return static_cast<int32_t>(offsetof(Tokenizer_t265589161, ___val_5)); }
	inline RuntimeObject * get_val_5() const { return ___val_5; }
	inline RuntimeObject ** get_address_of_val_5() { return &___val_5; }
	inline void set_val_5(RuntimeObject * value)
	{
		___val_5 = value;
		Il2CppCodeGenWriteBarrier((&___val_5), value);
	}
};

struct Tokenizer_t265589161_StaticFields
{
public:
	// System.Collections.IDictionary Mono.Data.SqlExpressions.Tokenizer::tokenMap
	RuntimeObject* ___tokenMap_0;
	// System.Object[] Mono.Data.SqlExpressions.Tokenizer::tokens
	ObjectU5BU5D_t4208004352* ___tokens_1;

public:
	inline static int32_t get_offset_of_tokenMap_0() { return static_cast<int32_t>(offsetof(Tokenizer_t265589161_StaticFields, ___tokenMap_0)); }
	inline RuntimeObject* get_tokenMap_0() const { return ___tokenMap_0; }
	inline RuntimeObject** get_address_of_tokenMap_0() { return &___tokenMap_0; }
	inline void set_tokenMap_0(RuntimeObject* value)
	{
		___tokenMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___tokenMap_0), value);
	}

	inline static int32_t get_offset_of_tokens_1() { return static_cast<int32_t>(offsetof(Tokenizer_t265589161_StaticFields, ___tokens_1)); }
	inline ObjectU5BU5D_t4208004352* get_tokens_1() const { return ___tokens_1; }
	inline ObjectU5BU5D_t4208004352** get_address_of_tokens_1() { return &___tokens_1; }
	inline void set_tokens_1(ObjectU5BU5D_t4208004352* value)
	{
		___tokens_1 = value;
		Il2CppCodeGenWriteBarrier((&___tokens_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOKENIZER_T265589161_H
#ifndef NUMERIC_T2754890094_H
#define NUMERIC_T2754890094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Numeric
struct  Numeric_t2754890094  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMERIC_T2754890094_H
#ifndef TYPECONVERTER_T1262942863_H
#define TYPECONVERTER_T1262942863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t1262942863  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T1262942863_H
#ifndef EXCEPTION_T1223031340_H
#define EXCEPTION_T1223031340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1223031340  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t2189390193* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1223031340 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1223031340, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t2189390193* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t2189390193** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t2189390193* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1223031340, ___inner_exception_1)); }
	inline Exception_t1223031340 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1223031340 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1223031340 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1223031340, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1223031340, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1223031340, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1223031340, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1223031340, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1223031340, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1223031340, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1223031340, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1223031340, ____data_10)); }
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
#endif // EXCEPTION_T1223031340_H
#ifndef BASEEXPRESSION_T278409257_H
#define BASEEXPRESSION_T278409257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.BaseExpression
struct  BaseExpression_t278409257  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEXPRESSION_T278409257_H
#ifndef DOUBLET_T148389317_H
#define DOUBLET_T148389317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Doublet
struct  Doublet_t148389317  : public RuntimeObject
{
public:
	// System.Int32 System.Data.Doublet::count
	int32_t ___count_0;
	// System.Collections.ArrayList System.Data.Doublet::columnNames
	ArrayList_t408765613 * ___columnNames_1;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(Doublet_t148389317, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_columnNames_1() { return static_cast<int32_t>(offsetof(Doublet_t148389317, ___columnNames_1)); }
	inline ArrayList_t408765613 * get_columnNames_1() const { return ___columnNames_1; }
	inline ArrayList_t408765613 ** get_address_of_columnNames_1() { return &___columnNames_1; }
	inline void set_columnNames_1(ArrayList_t408765613 * value)
	{
		___columnNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___columnNames_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLET_T148389317_H
#ifndef SQLXML_T2647999563_H
#define SQLXML_T2647999563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlXml
struct  SqlXml_t2647999563  : public RuntimeObject
{
public:
	// System.Boolean System.Data.SqlTypes.SqlXml::notNull
	bool ___notNull_0;
	// System.String System.Data.SqlTypes.SqlXml::xmlValue
	String_t* ___xmlValue_1;

public:
	inline static int32_t get_offset_of_notNull_0() { return static_cast<int32_t>(offsetof(SqlXml_t2647999563, ___notNull_0)); }
	inline bool get_notNull_0() const { return ___notNull_0; }
	inline bool* get_address_of_notNull_0() { return &___notNull_0; }
	inline void set_notNull_0(bool value)
	{
		___notNull_0 = value;
	}

	inline static int32_t get_offset_of_xmlValue_1() { return static_cast<int32_t>(offsetof(SqlXml_t2647999563, ___xmlValue_1)); }
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
#endif // SQLXML_T2647999563_H
#ifndef EVENTARGS_T3419184384_H
#define EVENTARGS_T3419184384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3419184384  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3419184384_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3419184384 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3419184384_StaticFields, ___Empty_0)); }
	inline EventArgs_t3419184384 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3419184384 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3419184384 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3419184384_H
#ifndef DATARELATION_T4097826169_H
#define DATARELATION_T4097826169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelation
struct  DataRelation_t4097826169  : public RuntimeObject
{
public:
	// System.Data.DataSet System.Data.DataRelation::dataSet
	DataSet_t3307559698 * ___dataSet_0;
	// System.String System.Data.DataRelation::relationName
	String_t* ___relationName_1;
	// System.Data.UniqueConstraint System.Data.DataRelation::parentKeyConstraint
	UniqueConstraint_t350754972 * ___parentKeyConstraint_2;
	// System.Data.ForeignKeyConstraint System.Data.DataRelation::childKeyConstraint
	ForeignKeyConstraint_t3848497024 * ___childKeyConstraint_3;
	// System.Data.DataColumn[] System.Data.DataRelation::parentColumns
	DataColumnU5BU5D_t2355267413* ___parentColumns_4;
	// System.Data.DataColumn[] System.Data.DataRelation::childColumns
	DataColumnU5BU5D_t2355267413* ___childColumns_5;
	// System.Boolean System.Data.DataRelation::nested
	bool ___nested_6;
	// System.Boolean System.Data.DataRelation::createConstraints
	bool ___createConstraints_7;
	// System.Boolean System.Data.DataRelation::initFinished
	bool ___initFinished_8;
	// System.Data.PropertyCollection System.Data.DataRelation::extendedProperties
	PropertyCollection_t3380870831 * ___extendedProperties_9;
	// System.String System.Data.DataRelation::_relationName
	String_t* ____relationName_10;
	// System.String System.Data.DataRelation::_parentTableName
	String_t* ____parentTableName_11;
	// System.String System.Data.DataRelation::_childTableName
	String_t* ____childTableName_12;
	// System.String[] System.Data.DataRelation::_parentColumnNames
	StringU5BU5D_t1258614724* ____parentColumnNames_13;
	// System.String[] System.Data.DataRelation::_childColumnNames
	StringU5BU5D_t1258614724* ____childColumnNames_14;
	// System.Boolean System.Data.DataRelation::_nested
	bool ____nested_15;
	// System.Boolean System.Data.DataRelation::initInProgress
	bool ___initInProgress_16;
	// System.String System.Data.DataRelation::_parentTableNameSpace
	String_t* ____parentTableNameSpace_17;
	// System.String System.Data.DataRelation::_childTableNameSpace
	String_t* ____childTableNameSpace_18;

public:
	inline static int32_t get_offset_of_dataSet_0() { return static_cast<int32_t>(offsetof(DataRelation_t4097826169, ___dataSet_0)); }
	inline DataSet_t3307559698 * get_dataSet_0() const { return ___dataSet_0; }
	inline DataSet_t3307559698 ** get_address_of_dataSet_0() { return &___dataSet_0; }
	inline void set_dataSet_0(DataSet_t3307559698 * value)
	{
		___dataSet_0 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_0), value);
	}

	inline static int32_t get_offset_of_relationName_1() { return static_cast<int32_t>(offsetof(DataRelation_t4097826169, ___relationName_1)); }
	inline String_t* get_relationName_1() const { return ___relationName_1; }
	inline String_t** get_address_of_relationName_1() { return &___relationName_1; }
	inline void set_relationName_1(String_t* value)
	{
		___relationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___relationName_1), value);
	}

	inline static int32_t get_offset_of_parentKeyConstraint_2() { return static_cast<int32_t>(offsetof(DataRelation_t4097826169, ___parentKeyConstraint_2)); }
	inline UniqueConstraint_t350754972 * get_parentKeyConstraint_2() const { return ___parentKeyConstraint_2; }
	inline UniqueConstraint_t350754972 ** get_address_of_parentKeyConstraint_2() { return &___parentKeyConstraint_2; }
	inline void set_parentKeyConstraint_2(UniqueConstraint_t350754972 * value)
	{
		___parentKeyConstraint_2 = value;
		Il2CppCodeGenWriteBarrier((&___parentKeyConstraint_2), value);
	}

	inline static int32_t get_offset_of_childKeyConstraint_3() { return static_cast<int32_t>(offsetof(DataRelation_t4097826169, ___childKeyConstraint_3)); }
	inline ForeignKeyConstraint_t3848497024 * get_childKeyConstraint_3() const { return ___childKeyConstraint_3; }
	inline ForeignKeyConstraint_t3848497024 ** get_address_of_childKeyConstraint_3() { return &___childKeyConstraint_3; }
	inline void set_childKeyConstraint_3(ForeignKeyConstraint_t3848497024 * value)
	{
		___childKeyConstraint_3 = value;
		Il2CppCodeGenWriteBarrier((&___childKeyConstraint_3), value);
	}

	inline static int32_t get_offset_of_parentColumns_4() { return static_cast<int32_t>(offsetof(DataRelation_t4097826169, ___parentColumns_4)); }
	inline DataColumnU5BU5D_t2355267413* get_parentColumns_4() const { return ___parentColumns_4; }
	inline DataColumnU5BU5D_t2355267413** get_address_of_parentColumns_4() { return &___parentColumns_4; }
	inline void set_parentColumns_4(DataColumnU5BU5D_t2355267413* value)
	{
		___parentColumns_4 = value;
		Il2CppCodeGenWriteBarrier((&___parentColumns_4), value);
	}

	inline static int32_t get_offset_of_childColumns_5() { return static_cast<int32_t>(offsetof(DataRelation_t4097826169, ___childColumns_5)); }
	inline DataColumnU5BU5D_t2355267413* get_childColumns_5() const { return ___childColumns_5; }
	inline DataColumnU5BU5D_t2355267413** get_address_of_childColumns_5() { return &___childColumns_5; }
	inline void set_childColumns_5(DataColumnU5BU5D_t2355267413* value)
	{
		___childColumns_5 = value;
		Il2CppCodeGenWriteBarrier((&___childColumns_5), value);
	}

	inline static int32_t get_offset_of_nested_6() { return static_cast<int32_t>(offsetof(DataRelation_t4097826169, ___nested_6)); }
	inline bool get_nested_6() const { return ___nested_6; }
	inline bool* get_address_of_nested_6() { return &___nested_6; }
	inline void set_nested_6(bool value)
	{
		___nested_6 = value;
	}

	inline static int32_t get_offset_of_createConstraints_7() { return static_cast<int32_t>(offsetof(DataRelation_t4097826169, ___createConstraints_7)); }
	inline bool get_createConstraints_7() const { return ___createConstraints_7; }
	inline bool* get_address_of_createConstraints_7() { return &___createConstraints_7; }
	inline void set_createConstraints_7(bool value)
	{
		___createConstraints_7 = value;
	}

	inline static int32_t get_offset_of_initFinished_8() { return static_cast<int32_t>(offsetof(DataRelation_t4097826169, ___initFinished_8)); }
	inline bool get_initFinished_8() const { return ___initFinished_8; }
	inline bool* get_address_of_initFinished_8() { return &___initFinished_8; }
	inline void set_initFinished_8(bool value)
	{
		___initFinished_8 = value;
	}

	inline static int32_t get_offset_of_extendedProperties_9() { return static_cast<int32_t>(offsetof(DataRelation_t4097826169, ___extendedProperties_9)); }
	inline PropertyCollection_t3380870831 * get_extendedProperties_9() const { return ___extendedProperties_9; }
	inline PropertyCollection_t3380870831 ** get_address_of_extendedProperties_9() { return &___extendedProperties_9; }
	inline void set_extendedProperties_9(PropertyCollection_t3380870831 * value)
	{
		___extendedProperties_9 = value;
		Il2CppCodeGenWriteBarrier((&___extendedProperties_9), value);
	}

	inline static int32_t get_offset_of__relationName_10() { return static_cast<int32_t>(offsetof(DataRelation_t4097826169, ____relationName_10)); }
	inline String_t* get__relationName_10() const { return ____relationName_10; }
	inline String_t** get_address_of__relationName_10() { return &____relationName_10; }
	inline void set__relationName_10(String_t* value)
	{
		____relationName_10 = value;
		Il2CppCodeGenWriteBarrier((&____relationName_10), value);
	}

	inline static int32_t get_offset_of__parentTableName_11() { return static_cast<int32_t>(offsetof(DataRelation_t4097826169, ____parentTableName_11)); }
	inline String_t* get__parentTableName_11() const { return ____parentTableName_11; }
	inline String_t** get_address_of__parentTableName_11() { return &____parentTableName_11; }
	inline void set__parentTableName_11(String_t* value)
	{
		____parentTableName_11 = value;
		Il2CppCodeGenWriteBarrier((&____parentTableName_11), value);
	}

	inline static int32_t get_offset_of__childTableName_12() { return static_cast<int32_t>(offsetof(DataRelation_t4097826169, ____childTableName_12)); }
	inline String_t* get__childTableName_12() const { return ____childTableName_12; }
	inline String_t** get_address_of__childTableName_12() { return &____childTableName_12; }
	inline void set__childTableName_12(String_t* value)
	{
		____childTableName_12 = value;
		Il2CppCodeGenWriteBarrier((&____childTableName_12), value);
	}

	inline static int32_t get_offset_of__parentColumnNames_13() { return static_cast<int32_t>(offsetof(DataRelation_t4097826169, ____parentColumnNames_13)); }
	inline StringU5BU5D_t1258614724* get__parentColumnNames_13() const { return ____parentColumnNames_13; }
	inline StringU5BU5D_t1258614724** get_address_of__parentColumnNames_13() { return &____parentColumnNames_13; }
	inline void set__parentColumnNames_13(StringU5BU5D_t1258614724* value)
	{
		____parentColumnNames_13 = value;
		Il2CppCodeGenWriteBarrier((&____parentColumnNames_13), value);
	}

	inline static int32_t get_offset_of__childColumnNames_14() { return static_cast<int32_t>(offsetof(DataRelation_t4097826169, ____childColumnNames_14)); }
	inline StringU5BU5D_t1258614724* get__childColumnNames_14() const { return ____childColumnNames_14; }
	inline StringU5BU5D_t1258614724** get_address_of__childColumnNames_14() { return &____childColumnNames_14; }
	inline void set__childColumnNames_14(StringU5BU5D_t1258614724* value)
	{
		____childColumnNames_14 = value;
		Il2CppCodeGenWriteBarrier((&____childColumnNames_14), value);
	}

	inline static int32_t get_offset_of__nested_15() { return static_cast<int32_t>(offsetof(DataRelation_t4097826169, ____nested_15)); }
	inline bool get__nested_15() const { return ____nested_15; }
	inline bool* get_address_of__nested_15() { return &____nested_15; }
	inline void set__nested_15(bool value)
	{
		____nested_15 = value;
	}

	inline static int32_t get_offset_of_initInProgress_16() { return static_cast<int32_t>(offsetof(DataRelation_t4097826169, ___initInProgress_16)); }
	inline bool get_initInProgress_16() const { return ___initInProgress_16; }
	inline bool* get_address_of_initInProgress_16() { return &___initInProgress_16; }
	inline void set_initInProgress_16(bool value)
	{
		___initInProgress_16 = value;
	}

	inline static int32_t get_offset_of__parentTableNameSpace_17() { return static_cast<int32_t>(offsetof(DataRelation_t4097826169, ____parentTableNameSpace_17)); }
	inline String_t* get__parentTableNameSpace_17() const { return ____parentTableNameSpace_17; }
	inline String_t** get_address_of__parentTableNameSpace_17() { return &____parentTableNameSpace_17; }
	inline void set__parentTableNameSpace_17(String_t* value)
	{
		____parentTableNameSpace_17 = value;
		Il2CppCodeGenWriteBarrier((&____parentTableNameSpace_17), value);
	}

	inline static int32_t get_offset_of__childTableNameSpace_18() { return static_cast<int32_t>(offsetof(DataRelation_t4097826169, ____childTableNameSpace_18)); }
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
#endif // DATARELATION_T4097826169_H
#ifndef MARSHALBYVALUECOMPONENT_T2238373968_H
#define MARSHALBYVALUECOMPONENT_T2238373968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t2238373968  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::eventList
	EventHandlerList_t2096071630 * ___eventList_0;
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	RuntimeObject* ___mySite_1;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	RuntimeObject * ___disposedEvent_2;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t2238373968, ___eventList_0)); }
	inline EventHandlerList_t2096071630 * get_eventList_0() const { return ___eventList_0; }
	inline EventHandlerList_t2096071630 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(EventHandlerList_t2096071630 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_mySite_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t2238373968, ___mySite_1)); }
	inline RuntimeObject* get_mySite_1() const { return ___mySite_1; }
	inline RuntimeObject** get_address_of_mySite_1() { return &___mySite_1; }
	inline void set_mySite_1(RuntimeObject* value)
	{
		___mySite_1 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_1), value);
	}

	inline static int32_t get_offset_of_disposedEvent_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t2238373968, ___disposedEvent_2)); }
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
#endif // MARSHALBYVALUECOMPONENT_T2238373968_H
#ifndef SQLSINGLE_T1597424872_H
#define SQLSINGLE_T1597424872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlSingle
struct  SqlSingle_t1597424872 
{
public:
	// System.Single System.Data.SqlTypes.SqlSingle::value
	float ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlSingle::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlSingle_t1597424872, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlSingle_t1597424872, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlSingle_t1597424872_StaticFields
{
public:
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::MaxValue
	SqlSingle_t1597424872  ___MaxValue_2;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::MinValue
	SqlSingle_t1597424872  ___MinValue_3;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::Null
	SqlSingle_t1597424872  ___Null_4;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::Zero
	SqlSingle_t1597424872  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlSingle_t1597424872_StaticFields, ___MaxValue_2)); }
	inline SqlSingle_t1597424872  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlSingle_t1597424872 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlSingle_t1597424872  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlSingle_t1597424872_StaticFields, ___MinValue_3)); }
	inline SqlSingle_t1597424872  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlSingle_t1597424872 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlSingle_t1597424872  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlSingle_t1597424872_StaticFields, ___Null_4)); }
	inline SqlSingle_t1597424872  get_Null_4() const { return ___Null_4; }
	inline SqlSingle_t1597424872 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlSingle_t1597424872  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlSingle_t1597424872_StaticFields, ___Zero_5)); }
	inline SqlSingle_t1597424872  get_Zero_5() const { return ___Zero_5; }
	inline SqlSingle_t1597424872 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlSingle_t1597424872  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlSingle
struct SqlSingle_t1597424872_marshaled_pinvoke
{
	float ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlSingle
struct SqlSingle_t1597424872_marshaled_com
{
	float ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLSINGLE_T1597424872_H
#ifndef SQLINT16_T3580813485_H
#define SQLINT16_T3580813485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlInt16
struct  SqlInt16_t3580813485 
{
public:
	// System.Int16 System.Data.SqlTypes.SqlInt16::value
	int16_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlInt16::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlInt16_t3580813485, ___value_0)); }
	inline int16_t get_value_0() const { return ___value_0; }
	inline int16_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int16_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlInt16_t3580813485, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlInt16_t3580813485_StaticFields
{
public:
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::MaxValue
	SqlInt16_t3580813485  ___MaxValue_2;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::MinValue
	SqlInt16_t3580813485  ___MinValue_3;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::Null
	SqlInt16_t3580813485  ___Null_4;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::Zero
	SqlInt16_t3580813485  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlInt16_t3580813485_StaticFields, ___MaxValue_2)); }
	inline SqlInt16_t3580813485  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlInt16_t3580813485 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlInt16_t3580813485  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlInt16_t3580813485_StaticFields, ___MinValue_3)); }
	inline SqlInt16_t3580813485  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlInt16_t3580813485 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlInt16_t3580813485  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt16_t3580813485_StaticFields, ___Null_4)); }
	inline SqlInt16_t3580813485  get_Null_4() const { return ___Null_4; }
	inline SqlInt16_t3580813485 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt16_t3580813485  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt16_t3580813485_StaticFields, ___Zero_5)); }
	inline SqlInt16_t3580813485  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt16_t3580813485 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt16_t3580813485  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt16
struct SqlInt16_t3580813485_marshaled_pinvoke
{
	int16_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt16
struct SqlInt16_t3580813485_marshaled_com
{
	int16_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLINT16_T3580813485_H
#ifndef SQLDOUBLE_T1377277590_H
#define SQLDOUBLE_T1377277590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlDouble
struct  SqlDouble_t1377277590 
{
public:
	// System.Double System.Data.SqlTypes.SqlDouble::value
	double ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlDouble::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlDouble_t1377277590, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlDouble_t1377277590, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlDouble_t1377277590_StaticFields
{
public:
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::MaxValue
	SqlDouble_t1377277590  ___MaxValue_2;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::MinValue
	SqlDouble_t1377277590  ___MinValue_3;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::Null
	SqlDouble_t1377277590  ___Null_4;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::Zero
	SqlDouble_t1377277590  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlDouble_t1377277590_StaticFields, ___MaxValue_2)); }
	inline SqlDouble_t1377277590  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlDouble_t1377277590 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlDouble_t1377277590  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlDouble_t1377277590_StaticFields, ___MinValue_3)); }
	inline SqlDouble_t1377277590  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlDouble_t1377277590 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlDouble_t1377277590  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlDouble_t1377277590_StaticFields, ___Null_4)); }
	inline SqlDouble_t1377277590  get_Null_4() const { return ___Null_4; }
	inline SqlDouble_t1377277590 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlDouble_t1377277590  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlDouble_t1377277590_StaticFields, ___Zero_5)); }
	inline SqlDouble_t1377277590  get_Zero_5() const { return ___Zero_5; }
	inline SqlDouble_t1377277590 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlDouble_t1377277590  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDouble
struct SqlDouble_t1377277590_marshaled_pinvoke
{
	double ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDouble
struct SqlDouble_t1377277590_marshaled_com
{
	double ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLDOUBLE_T1377277590_H
#ifndef COMPONENT_T2570807151_H
#define COMPONENT_T2570807151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t2570807151  : public MarshalByRefObject_t1557693092
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t2096071630 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t2570807151, ___event_handlers_1)); }
	inline EventHandlerList_t2096071630 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t2096071630 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t2096071630 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t2570807151, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t2570807151, ___disposedEvent_3)); }
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
#endif // COMPONENT_T2570807151_H
#ifndef SQLDECIMAL_T123739225_H
#define SQLDECIMAL_T123739225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlDecimal
struct  SqlDecimal_t123739225 
{
public:
	// System.Int32[] System.Data.SqlTypes.SqlDecimal::value
	Int32U5BU5D_t1952577767* ___value_0;
	// System.Byte System.Data.SqlTypes.SqlDecimal::precision
	uint8_t ___precision_1;
	// System.Byte System.Data.SqlTypes.SqlDecimal::scale
	uint8_t ___scale_2;
	// System.Boolean System.Data.SqlTypes.SqlDecimal::positive
	bool ___positive_3;
	// System.Boolean System.Data.SqlTypes.SqlDecimal::notNull
	bool ___notNull_4;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlDecimal_t123739225, ___value_0)); }
	inline Int32U5BU5D_t1952577767* get_value_0() const { return ___value_0; }
	inline Int32U5BU5D_t1952577767** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Int32U5BU5D_t1952577767* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_precision_1() { return static_cast<int32_t>(offsetof(SqlDecimal_t123739225, ___precision_1)); }
	inline uint8_t get_precision_1() const { return ___precision_1; }
	inline uint8_t* get_address_of_precision_1() { return &___precision_1; }
	inline void set_precision_1(uint8_t value)
	{
		___precision_1 = value;
	}

	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(SqlDecimal_t123739225, ___scale_2)); }
	inline uint8_t get_scale_2() const { return ___scale_2; }
	inline uint8_t* get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(uint8_t value)
	{
		___scale_2 = value;
	}

	inline static int32_t get_offset_of_positive_3() { return static_cast<int32_t>(offsetof(SqlDecimal_t123739225, ___positive_3)); }
	inline bool get_positive_3() const { return ___positive_3; }
	inline bool* get_address_of_positive_3() { return &___positive_3; }
	inline void set_positive_3(bool value)
	{
		___positive_3 = value;
	}

	inline static int32_t get_offset_of_notNull_4() { return static_cast<int32_t>(offsetof(SqlDecimal_t123739225, ___notNull_4)); }
	inline bool get_notNull_4() const { return ___notNull_4; }
	inline bool* get_address_of_notNull_4() { return &___notNull_4; }
	inline void set_notNull_4(bool value)
	{
		___notNull_4 = value;
	}
};

struct SqlDecimal_t123739225_StaticFields
{
public:
	// System.UInt32[] System.Data.SqlTypes.SqlDecimal::constantsDecadeInt32Factors
	UInt32U5BU5D_t1418191491* ___constantsDecadeInt32Factors_5;
	// System.Byte System.Data.SqlTypes.SqlDecimal::MaxPrecision
	uint8_t ___MaxPrecision_6;
	// System.Byte System.Data.SqlTypes.SqlDecimal::MaxScale
	uint8_t ___MaxScale_7;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::MaxValue
	SqlDecimal_t123739225  ___MaxValue_8;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::MinValue
	SqlDecimal_t123739225  ___MinValue_9;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::Null
	SqlDecimal_t123739225  ___Null_10;

public:
	inline static int32_t get_offset_of_constantsDecadeInt32Factors_5() { return static_cast<int32_t>(offsetof(SqlDecimal_t123739225_StaticFields, ___constantsDecadeInt32Factors_5)); }
	inline UInt32U5BU5D_t1418191491* get_constantsDecadeInt32Factors_5() const { return ___constantsDecadeInt32Factors_5; }
	inline UInt32U5BU5D_t1418191491** get_address_of_constantsDecadeInt32Factors_5() { return &___constantsDecadeInt32Factors_5; }
	inline void set_constantsDecadeInt32Factors_5(UInt32U5BU5D_t1418191491* value)
	{
		___constantsDecadeInt32Factors_5 = value;
		Il2CppCodeGenWriteBarrier((&___constantsDecadeInt32Factors_5), value);
	}

	inline static int32_t get_offset_of_MaxPrecision_6() { return static_cast<int32_t>(offsetof(SqlDecimal_t123739225_StaticFields, ___MaxPrecision_6)); }
	inline uint8_t get_MaxPrecision_6() const { return ___MaxPrecision_6; }
	inline uint8_t* get_address_of_MaxPrecision_6() { return &___MaxPrecision_6; }
	inline void set_MaxPrecision_6(uint8_t value)
	{
		___MaxPrecision_6 = value;
	}

	inline static int32_t get_offset_of_MaxScale_7() { return static_cast<int32_t>(offsetof(SqlDecimal_t123739225_StaticFields, ___MaxScale_7)); }
	inline uint8_t get_MaxScale_7() const { return ___MaxScale_7; }
	inline uint8_t* get_address_of_MaxScale_7() { return &___MaxScale_7; }
	inline void set_MaxScale_7(uint8_t value)
	{
		___MaxScale_7 = value;
	}

	inline static int32_t get_offset_of_MaxValue_8() { return static_cast<int32_t>(offsetof(SqlDecimal_t123739225_StaticFields, ___MaxValue_8)); }
	inline SqlDecimal_t123739225  get_MaxValue_8() const { return ___MaxValue_8; }
	inline SqlDecimal_t123739225 * get_address_of_MaxValue_8() { return &___MaxValue_8; }
	inline void set_MaxValue_8(SqlDecimal_t123739225  value)
	{
		___MaxValue_8 = value;
	}

	inline static int32_t get_offset_of_MinValue_9() { return static_cast<int32_t>(offsetof(SqlDecimal_t123739225_StaticFields, ___MinValue_9)); }
	inline SqlDecimal_t123739225  get_MinValue_9() const { return ___MinValue_9; }
	inline SqlDecimal_t123739225 * get_address_of_MinValue_9() { return &___MinValue_9; }
	inline void set_MinValue_9(SqlDecimal_t123739225  value)
	{
		___MinValue_9 = value;
	}

	inline static int32_t get_offset_of_Null_10() { return static_cast<int32_t>(offsetof(SqlDecimal_t123739225_StaticFields, ___Null_10)); }
	inline SqlDecimal_t123739225  get_Null_10() const { return ___Null_10; }
	inline SqlDecimal_t123739225 * get_address_of_Null_10() { return &___Null_10; }
	inline void set_Null_10(SqlDecimal_t123739225  value)
	{
		___Null_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDecimal
struct SqlDecimal_t123739225_marshaled_pinvoke
{
	int32_t* ___value_0;
	uint8_t ___precision_1;
	uint8_t ___scale_2;
	int32_t ___positive_3;
	int32_t ___notNull_4;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDecimal
struct SqlDecimal_t123739225_marshaled_com
{
	int32_t* ___value_0;
	uint8_t ___precision_1;
	uint8_t ___scale_2;
	int32_t ___positive_3;
	int32_t ___notNull_4;
};
#endif // SQLDECIMAL_T123739225_H
#ifndef ENUM_T3284706312_H
#define ENUM_T3284706312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3284706312  : public ValueType_t1579504895
{
public:

public:
};

struct Enum_t3284706312_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t52468358* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t3284706312_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t52468358* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t52468358** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t52468358* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3284706312_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3284706312_marshaled_com
{
};
#endif // ENUM_T3284706312_H
#ifndef DATACOLUMNCHANGEEVENTARGS_T3358949532_H
#define DATACOLUMNCHANGEEVENTARGS_T3358949532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumnChangeEventArgs
struct  DataColumnChangeEventArgs_t3358949532  : public EventArgs_t3419184384
{
public:
	// System.Data.DataColumn System.Data.DataColumnChangeEventArgs::_column
	DataColumn_t4119188540 * ____column_1;
	// System.Data.DataRow System.Data.DataColumnChangeEventArgs::_row
	DataRow_t154029508 * ____row_2;
	// System.Object System.Data.DataColumnChangeEventArgs::_proposedValue
	RuntimeObject * ____proposedValue_3;

public:
	inline static int32_t get_offset_of__column_1() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t3358949532, ____column_1)); }
	inline DataColumn_t4119188540 * get__column_1() const { return ____column_1; }
	inline DataColumn_t4119188540 ** get_address_of__column_1() { return &____column_1; }
	inline void set__column_1(DataColumn_t4119188540 * value)
	{
		____column_1 = value;
		Il2CppCodeGenWriteBarrier((&____column_1), value);
	}

	inline static int32_t get_offset_of__row_2() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t3358949532, ____row_2)); }
	inline DataRow_t154029508 * get__row_2() const { return ____row_2; }
	inline DataRow_t154029508 ** get_address_of__row_2() { return &____row_2; }
	inline void set__row_2(DataRow_t154029508 * value)
	{
		____row_2 = value;
		Il2CppCodeGenWriteBarrier((&____row_2), value);
	}

	inline static int32_t get_offset_of__proposedValue_3() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t3358949532, ____proposedValue_3)); }
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
#endif // DATACOLUMNCHANGEEVENTARGS_T3358949532_H
#ifndef DBPARAMETER_T3940582048_H
#define DBPARAMETER_T3940582048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbParameter
struct  DbParameter_t3940582048  : public MarshalByRefObject_t1557693092
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPARAMETER_T3940582048_H
#ifndef DBPARAMETERCOLLECTION_T648823250_H
#define DBPARAMETERCOLLECTION_T648823250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbParameterCollection
struct  DbParameterCollection_t648823250  : public MarshalByRefObject_t1557693092
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPARAMETERCOLLECTION_T648823250_H
#ifndef SQLINT64_T3813632183_H
#define SQLINT64_T3813632183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlInt64
struct  SqlInt64_t3813632183 
{
public:
	// System.Int64 System.Data.SqlTypes.SqlInt64::value
	int64_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlInt64::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlInt64_t3813632183, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlInt64_t3813632183, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlInt64_t3813632183_StaticFields
{
public:
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::MaxValue
	SqlInt64_t3813632183  ___MaxValue_2;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::MinValue
	SqlInt64_t3813632183  ___MinValue_3;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::Null
	SqlInt64_t3813632183  ___Null_4;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::Zero
	SqlInt64_t3813632183  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlInt64_t3813632183_StaticFields, ___MaxValue_2)); }
	inline SqlInt64_t3813632183  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlInt64_t3813632183 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlInt64_t3813632183  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlInt64_t3813632183_StaticFields, ___MinValue_3)); }
	inline SqlInt64_t3813632183  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlInt64_t3813632183 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlInt64_t3813632183  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt64_t3813632183_StaticFields, ___Null_4)); }
	inline SqlInt64_t3813632183  get_Null_4() const { return ___Null_4; }
	inline SqlInt64_t3813632183 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt64_t3813632183  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt64_t3813632183_StaticFields, ___Zero_5)); }
	inline SqlInt64_t3813632183  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt64_t3813632183 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt64_t3813632183  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt64
struct SqlInt64_t3813632183_marshaled_pinvoke
{
	int64_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt64
struct SqlInt64_t3813632183_marshaled_com
{
	int64_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLINT64_T3813632183_H
#ifndef DATACOLUMNCOLLECTION_T580795536_H
#define DATACOLUMNCOLLECTION_T580795536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumnCollection
struct  DataColumnCollection_t580795536  : public InternalDataCollectionBase_t1048802988
{
public:
	// System.Collections.Hashtable System.Data.DataColumnCollection::columnNameCount
	Hashtable_t3596949909 * ___columnNameCount_2;
	// System.Collections.Hashtable System.Data.DataColumnCollection::columnFromName
	Hashtable_t3596949909 * ___columnFromName_3;
	// System.Collections.ArrayList System.Data.DataColumnCollection::autoIncrement
	ArrayList_t408765613 * ___autoIncrement_4;
	// System.Int32 System.Data.DataColumnCollection::defaultColumnIndex
	int32_t ___defaultColumnIndex_5;
	// System.Data.DataTable System.Data.DataColumnCollection::parentTable
	DataTable_t168666095 * ___parentTable_6;
	// System.Data.DataColumn[] System.Data.DataColumnCollection::_mostRecentColumns
	DataColumnU5BU5D_t2355267413* ____mostRecentColumns_7;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionChanged
	CollectionChangeEventHandler_t316811287 * ___CollectionChanged_10;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionMetaDataChanged
	CollectionChangeEventHandler_t316811287 * ___CollectionMetaDataChanged_11;

public:
	inline static int32_t get_offset_of_columnNameCount_2() { return static_cast<int32_t>(offsetof(DataColumnCollection_t580795536, ___columnNameCount_2)); }
	inline Hashtable_t3596949909 * get_columnNameCount_2() const { return ___columnNameCount_2; }
	inline Hashtable_t3596949909 ** get_address_of_columnNameCount_2() { return &___columnNameCount_2; }
	inline void set_columnNameCount_2(Hashtable_t3596949909 * value)
	{
		___columnNameCount_2 = value;
		Il2CppCodeGenWriteBarrier((&___columnNameCount_2), value);
	}

	inline static int32_t get_offset_of_columnFromName_3() { return static_cast<int32_t>(offsetof(DataColumnCollection_t580795536, ___columnFromName_3)); }
	inline Hashtable_t3596949909 * get_columnFromName_3() const { return ___columnFromName_3; }
	inline Hashtable_t3596949909 ** get_address_of_columnFromName_3() { return &___columnFromName_3; }
	inline void set_columnFromName_3(Hashtable_t3596949909 * value)
	{
		___columnFromName_3 = value;
		Il2CppCodeGenWriteBarrier((&___columnFromName_3), value);
	}

	inline static int32_t get_offset_of_autoIncrement_4() { return static_cast<int32_t>(offsetof(DataColumnCollection_t580795536, ___autoIncrement_4)); }
	inline ArrayList_t408765613 * get_autoIncrement_4() const { return ___autoIncrement_4; }
	inline ArrayList_t408765613 ** get_address_of_autoIncrement_4() { return &___autoIncrement_4; }
	inline void set_autoIncrement_4(ArrayList_t408765613 * value)
	{
		___autoIncrement_4 = value;
		Il2CppCodeGenWriteBarrier((&___autoIncrement_4), value);
	}

	inline static int32_t get_offset_of_defaultColumnIndex_5() { return static_cast<int32_t>(offsetof(DataColumnCollection_t580795536, ___defaultColumnIndex_5)); }
	inline int32_t get_defaultColumnIndex_5() const { return ___defaultColumnIndex_5; }
	inline int32_t* get_address_of_defaultColumnIndex_5() { return &___defaultColumnIndex_5; }
	inline void set_defaultColumnIndex_5(int32_t value)
	{
		___defaultColumnIndex_5 = value;
	}

	inline static int32_t get_offset_of_parentTable_6() { return static_cast<int32_t>(offsetof(DataColumnCollection_t580795536, ___parentTable_6)); }
	inline DataTable_t168666095 * get_parentTable_6() const { return ___parentTable_6; }
	inline DataTable_t168666095 ** get_address_of_parentTable_6() { return &___parentTable_6; }
	inline void set_parentTable_6(DataTable_t168666095 * value)
	{
		___parentTable_6 = value;
		Il2CppCodeGenWriteBarrier((&___parentTable_6), value);
	}

	inline static int32_t get_offset_of__mostRecentColumns_7() { return static_cast<int32_t>(offsetof(DataColumnCollection_t580795536, ____mostRecentColumns_7)); }
	inline DataColumnU5BU5D_t2355267413* get__mostRecentColumns_7() const { return ____mostRecentColumns_7; }
	inline DataColumnU5BU5D_t2355267413** get_address_of__mostRecentColumns_7() { return &____mostRecentColumns_7; }
	inline void set__mostRecentColumns_7(DataColumnU5BU5D_t2355267413* value)
	{
		____mostRecentColumns_7 = value;
		Il2CppCodeGenWriteBarrier((&____mostRecentColumns_7), value);
	}

	inline static int32_t get_offset_of_CollectionChanged_10() { return static_cast<int32_t>(offsetof(DataColumnCollection_t580795536, ___CollectionChanged_10)); }
	inline CollectionChangeEventHandler_t316811287 * get_CollectionChanged_10() const { return ___CollectionChanged_10; }
	inline CollectionChangeEventHandler_t316811287 ** get_address_of_CollectionChanged_10() { return &___CollectionChanged_10; }
	inline void set_CollectionChanged_10(CollectionChangeEventHandler_t316811287 * value)
	{
		___CollectionChanged_10 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_10), value);
	}

	inline static int32_t get_offset_of_CollectionMetaDataChanged_11() { return static_cast<int32_t>(offsetof(DataColumnCollection_t580795536, ___CollectionMetaDataChanged_11)); }
	inline CollectionChangeEventHandler_t316811287 * get_CollectionMetaDataChanged_11() const { return ___CollectionMetaDataChanged_11; }
	inline CollectionChangeEventHandler_t316811287 ** get_address_of_CollectionMetaDataChanged_11() { return &___CollectionMetaDataChanged_11; }
	inline void set_CollectionMetaDataChanged_11(CollectionChangeEventHandler_t316811287 * value)
	{
		___CollectionMetaDataChanged_11 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionMetaDataChanged_11), value);
	}
};

struct DataColumnCollection_t580795536_StaticFields
{
public:
	// System.String System.Data.DataColumnCollection::ColumnPrefix
	String_t* ___ColumnPrefix_8;
	// System.String[] System.Data.DataColumnCollection::TenColumns
	StringU5BU5D_t1258614724* ___TenColumns_9;

public:
	inline static int32_t get_offset_of_ColumnPrefix_8() { return static_cast<int32_t>(offsetof(DataColumnCollection_t580795536_StaticFields, ___ColumnPrefix_8)); }
	inline String_t* get_ColumnPrefix_8() const { return ___ColumnPrefix_8; }
	inline String_t** get_address_of_ColumnPrefix_8() { return &___ColumnPrefix_8; }
	inline void set_ColumnPrefix_8(String_t* value)
	{
		___ColumnPrefix_8 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnPrefix_8), value);
	}

	inline static int32_t get_offset_of_TenColumns_9() { return static_cast<int32_t>(offsetof(DataColumnCollection_t580795536_StaticFields, ___TenColumns_9)); }
	inline StringU5BU5D_t1258614724* get_TenColumns_9() const { return ___TenColumns_9; }
	inline StringU5BU5D_t1258614724** get_address_of_TenColumns_9() { return &___TenColumns_9; }
	inline void set_TenColumns_9(StringU5BU5D_t1258614724* value)
	{
		___TenColumns_9 = value;
		Il2CppCodeGenWriteBarrier((&___TenColumns_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACOLUMNCOLLECTION_T580795536_H
#ifndef SQLINT32_T1536397096_H
#define SQLINT32_T1536397096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlInt32
struct  SqlInt32_t1536397096 
{
public:
	// System.Int32 System.Data.SqlTypes.SqlInt32::value
	int32_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlInt32::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlInt32_t1536397096, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlInt32_t1536397096, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlInt32_t1536397096_StaticFields
{
public:
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::MaxValue
	SqlInt32_t1536397096  ___MaxValue_2;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::MinValue
	SqlInt32_t1536397096  ___MinValue_3;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::Null
	SqlInt32_t1536397096  ___Null_4;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::Zero
	SqlInt32_t1536397096  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlInt32_t1536397096_StaticFields, ___MaxValue_2)); }
	inline SqlInt32_t1536397096  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlInt32_t1536397096 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlInt32_t1536397096  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlInt32_t1536397096_StaticFields, ___MinValue_3)); }
	inline SqlInt32_t1536397096  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlInt32_t1536397096 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlInt32_t1536397096  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt32_t1536397096_StaticFields, ___Null_4)); }
	inline SqlInt32_t1536397096  get_Null_4() const { return ___Null_4; }
	inline SqlInt32_t1536397096 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt32_t1536397096  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt32_t1536397096_StaticFields, ___Zero_5)); }
	inline SqlInt32_t1536397096  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt32_t1536397096 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt32_t1536397096  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt32
struct SqlInt32_t1536397096_marshaled_pinvoke
{
	int32_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt32
struct SqlInt32_t1536397096_marshaled_com
{
	int32_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLINT32_T1536397096_H
#ifndef DATARELATIONCOLLECTION_T2080198525_H
#define DATARELATIONCOLLECTION_T2080198525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection
struct  DataRelationCollection_t2080198525  : public InternalDataCollectionBase_t1048802988
{
public:
	// System.Data.DataRelation System.Data.DataRelationCollection::inTransition
	DataRelation_t4097826169 * ___inTransition_2;
	// System.Int32 System.Data.DataRelationCollection::index
	int32_t ___index_3;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataRelationCollection::CollectionChanged
	CollectionChangeEventHandler_t316811287 * ___CollectionChanged_4;

public:
	inline static int32_t get_offset_of_inTransition_2() { return static_cast<int32_t>(offsetof(DataRelationCollection_t2080198525, ___inTransition_2)); }
	inline DataRelation_t4097826169 * get_inTransition_2() const { return ___inTransition_2; }
	inline DataRelation_t4097826169 ** get_address_of_inTransition_2() { return &___inTransition_2; }
	inline void set_inTransition_2(DataRelation_t4097826169 * value)
	{
		___inTransition_2 = value;
		Il2CppCodeGenWriteBarrier((&___inTransition_2), value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(DataRelationCollection_t2080198525, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_CollectionChanged_4() { return static_cast<int32_t>(offsetof(DataRelationCollection_t2080198525, ___CollectionChanged_4)); }
	inline CollectionChangeEventHandler_t316811287 * get_CollectionChanged_4() const { return ___CollectionChanged_4; }
	inline CollectionChangeEventHandler_t316811287 ** get_address_of_CollectionChanged_4() { return &___CollectionChanged_4; }
	inline void set_CollectionChanged_4(CollectionChangeEventHandler_t316811287 * value)
	{
		___CollectionChanged_4 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATARELATIONCOLLECTION_T2080198525_H
#ifndef SQLBINARY_T931723275_H
#define SQLBINARY_T931723275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBinary
struct  SqlBinary_t931723275 
{
public:
	// System.Byte[] System.Data.SqlTypes.SqlBinary::value
	ByteU5BU5D_t2203878315* ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlBinary::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlBinary_t931723275, ___value_0)); }
	inline ByteU5BU5D_t2203878315* get_value_0() const { return ___value_0; }
	inline ByteU5BU5D_t2203878315** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(ByteU5BU5D_t2203878315* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlBinary_t931723275, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlBinary_t931723275_StaticFields
{
public:
	// System.Data.SqlTypes.SqlBinary System.Data.SqlTypes.SqlBinary::Null
	SqlBinary_t931723275  ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(SqlBinary_t931723275_StaticFields, ___Null_2)); }
	inline SqlBinary_t931723275  get_Null_2() const { return ___Null_2; }
	inline SqlBinary_t931723275 * get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(SqlBinary_t931723275  value)
	{
		___Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlBinary
struct SqlBinary_t931723275_marshaled_pinvoke
{
	uint8_t* ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlBinary
struct SqlBinary_t931723275_marshaled_com
{
	uint8_t* ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLBINARY_T931723275_H
#ifndef SQLBOOLEAN_T1375703340_H
#define SQLBOOLEAN_T1375703340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBoolean
struct  SqlBoolean_t1375703340 
{
public:
	// System.Byte System.Data.SqlTypes.SqlBoolean::value
	uint8_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlBoolean::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlBoolean_t1375703340, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlBoolean_t1375703340, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlBoolean_t1375703340_StaticFields
{
public:
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::False
	SqlBoolean_t1375703340  ___False_2;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Null
	SqlBoolean_t1375703340  ___Null_3;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::One
	SqlBoolean_t1375703340  ___One_4;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::True
	SqlBoolean_t1375703340  ___True_5;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Zero
	SqlBoolean_t1375703340  ___Zero_6;

public:
	inline static int32_t get_offset_of_False_2() { return static_cast<int32_t>(offsetof(SqlBoolean_t1375703340_StaticFields, ___False_2)); }
	inline SqlBoolean_t1375703340  get_False_2() const { return ___False_2; }
	inline SqlBoolean_t1375703340 * get_address_of_False_2() { return &___False_2; }
	inline void set_False_2(SqlBoolean_t1375703340  value)
	{
		___False_2 = value;
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(SqlBoolean_t1375703340_StaticFields, ___Null_3)); }
	inline SqlBoolean_t1375703340  get_Null_3() const { return ___Null_3; }
	inline SqlBoolean_t1375703340 * get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(SqlBoolean_t1375703340  value)
	{
		___Null_3 = value;
	}

	inline static int32_t get_offset_of_One_4() { return static_cast<int32_t>(offsetof(SqlBoolean_t1375703340_StaticFields, ___One_4)); }
	inline SqlBoolean_t1375703340  get_One_4() const { return ___One_4; }
	inline SqlBoolean_t1375703340 * get_address_of_One_4() { return &___One_4; }
	inline void set_One_4(SqlBoolean_t1375703340  value)
	{
		___One_4 = value;
	}

	inline static int32_t get_offset_of_True_5() { return static_cast<int32_t>(offsetof(SqlBoolean_t1375703340_StaticFields, ___True_5)); }
	inline SqlBoolean_t1375703340  get_True_5() const { return ___True_5; }
	inline SqlBoolean_t1375703340 * get_address_of_True_5() { return &___True_5; }
	inline void set_True_5(SqlBoolean_t1375703340  value)
	{
		___True_5 = value;
	}

	inline static int32_t get_offset_of_Zero_6() { return static_cast<int32_t>(offsetof(SqlBoolean_t1375703340_StaticFields, ___Zero_6)); }
	inline SqlBoolean_t1375703340  get_Zero_6() const { return ___Zero_6; }
	inline SqlBoolean_t1375703340 * get_address_of_Zero_6() { return &___Zero_6; }
	inline void set_Zero_6(SqlBoolean_t1375703340  value)
	{
		___Zero_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlBoolean
struct SqlBoolean_t1375703340_marshaled_pinvoke
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlBoolean
struct SqlBoolean_t1375703340_marshaled_com
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLBOOLEAN_T1375703340_H
#ifndef SQLBYTE_T2197509168_H
#define SQLBYTE_T2197509168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlByte
struct  SqlByte_t2197509168 
{
public:
	// System.Byte System.Data.SqlTypes.SqlByte::value
	uint8_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlByte::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlByte_t2197509168, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlByte_t2197509168, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlByte_t2197509168_StaticFields
{
public:
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::MaxValue
	SqlByte_t2197509168  ___MaxValue_2;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::MinValue
	SqlByte_t2197509168  ___MinValue_3;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::Null
	SqlByte_t2197509168  ___Null_4;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::Zero
	SqlByte_t2197509168  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlByte_t2197509168_StaticFields, ___MaxValue_2)); }
	inline SqlByte_t2197509168  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlByte_t2197509168 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlByte_t2197509168  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlByte_t2197509168_StaticFields, ___MinValue_3)); }
	inline SqlByte_t2197509168  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlByte_t2197509168 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlByte_t2197509168  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlByte_t2197509168_StaticFields, ___Null_4)); }
	inline SqlByte_t2197509168  get_Null_4() const { return ___Null_4; }
	inline SqlByte_t2197509168 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlByte_t2197509168  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlByte_t2197509168_StaticFields, ___Zero_5)); }
	inline SqlByte_t2197509168  get_Zero_5() const { return ___Zero_5; }
	inline SqlByte_t2197509168 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlByte_t2197509168  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlByte
struct SqlByte_t2197509168_marshaled_pinvoke
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlByte
struct SqlByte_t2197509168_marshaled_com
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLBYTE_T2197509168_H
#ifndef DATATABLEMAPPINGCOLLECTION_T2254394270_H
#define DATATABLEMAPPINGCOLLECTION_T2254394270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataTableMappingCollection
struct  DataTableMappingCollection_t2254394270  : public MarshalByRefObject_t1557693092
{
public:
	// System.Collections.ArrayList System.Data.Common.DataTableMappingCollection::mappings
	ArrayList_t408765613 * ___mappings_1;
	// System.Collections.Hashtable System.Data.Common.DataTableMappingCollection::sourceTables
	Hashtable_t3596949909 * ___sourceTables_2;
	// System.Collections.Hashtable System.Data.Common.DataTableMappingCollection::dataSetTables
	Hashtable_t3596949909 * ___dataSetTables_3;

public:
	inline static int32_t get_offset_of_mappings_1() { return static_cast<int32_t>(offsetof(DataTableMappingCollection_t2254394270, ___mappings_1)); }
	inline ArrayList_t408765613 * get_mappings_1() const { return ___mappings_1; }
	inline ArrayList_t408765613 ** get_address_of_mappings_1() { return &___mappings_1; }
	inline void set_mappings_1(ArrayList_t408765613 * value)
	{
		___mappings_1 = value;
		Il2CppCodeGenWriteBarrier((&___mappings_1), value);
	}

	inline static int32_t get_offset_of_sourceTables_2() { return static_cast<int32_t>(offsetof(DataTableMappingCollection_t2254394270, ___sourceTables_2)); }
	inline Hashtable_t3596949909 * get_sourceTables_2() const { return ___sourceTables_2; }
	inline Hashtable_t3596949909 ** get_address_of_sourceTables_2() { return &___sourceTables_2; }
	inline void set_sourceTables_2(Hashtable_t3596949909 * value)
	{
		___sourceTables_2 = value;
		Il2CppCodeGenWriteBarrier((&___sourceTables_2), value);
	}

	inline static int32_t get_offset_of_dataSetTables_3() { return static_cast<int32_t>(offsetof(DataTableMappingCollection_t2254394270, ___dataSetTables_3)); }
	inline Hashtable_t3596949909 * get_dataSetTables_3() const { return ___dataSetTables_3; }
	inline Hashtable_t3596949909 ** get_address_of_dataSetTables_3() { return &___dataSetTables_3; }
	inline void set_dataSetTables_3(Hashtable_t3596949909 * value)
	{
		___dataSetTables_3 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetTables_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLEMAPPINGCOLLECTION_T2254394270_H
#ifndef CONSTRAINTCOLLECTION_T1054117791_H
#define CONSTRAINTCOLLECTION_T1054117791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintCollection
struct  ConstraintCollection_t1054117791  : public InternalDataCollectionBase_t1048802988
{
public:
	// System.Data.DataTable System.Data.ConstraintCollection::table
	DataTable_t168666095 * ___table_2;
	// System.Data.Constraint[] System.Data.ConstraintCollection::_mostRecentConstraints
	ConstraintU5BU5D_t2673502489* ____mostRecentConstraints_3;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.ConstraintCollection::CollectionChanged
	CollectionChangeEventHandler_t316811287 * ___CollectionChanged_4;

public:
	inline static int32_t get_offset_of_table_2() { return static_cast<int32_t>(offsetof(ConstraintCollection_t1054117791, ___table_2)); }
	inline DataTable_t168666095 * get_table_2() const { return ___table_2; }
	inline DataTable_t168666095 ** get_address_of_table_2() { return &___table_2; }
	inline void set_table_2(DataTable_t168666095 * value)
	{
		___table_2 = value;
		Il2CppCodeGenWriteBarrier((&___table_2), value);
	}

	inline static int32_t get_offset_of__mostRecentConstraints_3() { return static_cast<int32_t>(offsetof(ConstraintCollection_t1054117791, ____mostRecentConstraints_3)); }
	inline ConstraintU5BU5D_t2673502489* get__mostRecentConstraints_3() const { return ____mostRecentConstraints_3; }
	inline ConstraintU5BU5D_t2673502489** get_address_of__mostRecentConstraints_3() { return &____mostRecentConstraints_3; }
	inline void set__mostRecentConstraints_3(ConstraintU5BU5D_t2673502489* value)
	{
		____mostRecentConstraints_3 = value;
		Il2CppCodeGenWriteBarrier((&____mostRecentConstraints_3), value);
	}

	inline static int32_t get_offset_of_CollectionChanged_4() { return static_cast<int32_t>(offsetof(ConstraintCollection_t1054117791, ___CollectionChanged_4)); }
	inline CollectionChangeEventHandler_t316811287 * get_CollectionChanged_4() const { return ___CollectionChanged_4; }
	inline CollectionChangeEventHandler_t316811287 ** get_address_of_CollectionChanged_4() { return &___CollectionChanged_4; }
	inline void set_CollectionChanged_4(CollectionChangeEventHandler_t316811287 * value)
	{
		___CollectionChanged_4 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTCOLLECTION_T1054117791_H
#ifndef OBJECTDATACONTAINER_T67022101_H
#define OBJECTDATACONTAINER_T67022101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.ObjectDataContainer
struct  ObjectDataContainer_t67022101  : public DataContainer_t3901026517
{
public:
	// System.Object[] System.Data.Common.ObjectDataContainer::_values
	ObjectU5BU5D_t4208004352* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(ObjectDataContainer_t67022101, ____values_3)); }
	inline ObjectU5BU5D_t4208004352* get__values_3() const { return ____values_3; }
	inline ObjectU5BU5D_t4208004352** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(ObjectU5BU5D_t4208004352* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTDATACONTAINER_T67022101_H
#ifndef UNARYEXPRESSION_T1348685487_H
#define UNARYEXPRESSION_T1348685487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.UnaryExpression
struct  UnaryExpression_t1348685487  : public BaseExpression_t278409257
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.UnaryExpression::expr
	RuntimeObject* ___expr_0;

public:
	inline static int32_t get_offset_of_expr_0() { return static_cast<int32_t>(offsetof(UnaryExpression_t1348685487, ___expr_0)); }
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
#endif // UNARYEXPRESSION_T1348685487_H
#ifndef BINARYEXPRESSION_T2677845598_H
#define BINARYEXPRESSION_T2677845598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.BinaryExpression
struct  BinaryExpression_t2677845598  : public BaseExpression_t278409257
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.BinaryExpression::expr1
	RuntimeObject* ___expr1_0;
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.BinaryExpression::expr2
	RuntimeObject* ___expr2_1;

public:
	inline static int32_t get_offset_of_expr1_0() { return static_cast<int32_t>(offsetof(BinaryExpression_t2677845598, ___expr1_0)); }
	inline RuntimeObject* get_expr1_0() const { return ___expr1_0; }
	inline RuntimeObject** get_address_of_expr1_0() { return &___expr1_0; }
	inline void set_expr1_0(RuntimeObject* value)
	{
		___expr1_0 = value;
		Il2CppCodeGenWriteBarrier((&___expr1_0), value);
	}

	inline static int32_t get_offset_of_expr2_1() { return static_cast<int32_t>(offsetof(BinaryExpression_t2677845598, ___expr2_1)); }
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
#endif // BINARYEXPRESSION_T2677845598_H
#ifndef TIMESPAN_T3820074238_H
#define TIMESPAN_T3820074238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t3820074238 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t3820074238, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t3820074238_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t3820074238  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t3820074238  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t3820074238  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t3820074238_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t3820074238  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t3820074238 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t3820074238  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t3820074238_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t3820074238  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t3820074238 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t3820074238  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t3820074238_StaticFields, ___Zero_2)); }
	inline TimeSpan_t3820074238  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t3820074238 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t3820074238  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T3820074238_H
#ifndef PROPERTYDESCRIPTOR_T2823072288_H
#define PROPERTYDESCRIPTOR_T2823072288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t2823072288  : public MemberDescriptor_t1847087350
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t1262942863 * ___converter_4;
	// System.Collections.Hashtable System.ComponentModel.PropertyDescriptor::notifiers
	Hashtable_t3596949909 * ___notifiers_5;

public:
	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t2823072288, ___converter_4)); }
	inline TypeConverter_t1262942863 * get_converter_4() const { return ___converter_4; }
	inline TypeConverter_t1262942863 ** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(TypeConverter_t1262942863 * value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}

	inline static int32_t get_offset_of_notifiers_5() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t2823072288, ___notifiers_5)); }
	inline Hashtable_t3596949909 * get_notifiers_5() const { return ___notifiers_5; }
	inline Hashtable_t3596949909 ** get_address_of_notifiers_5() { return &___notifiers_5; }
	inline void set_notifiers_5(Hashtable_t3596949909 * value)
	{
		___notifiers_5 = value;
		Il2CppCodeGenWriteBarrier((&___notifiers_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T2823072288_H
#ifndef LITERAL_T81928004_H
#define LITERAL_T81928004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Literal
struct  Literal_t81928004  : public BaseExpression_t278409257
{
public:
	// System.Object Mono.Data.SqlExpressions.Literal::val
	RuntimeObject * ___val_0;

public:
	inline static int32_t get_offset_of_val_0() { return static_cast<int32_t>(offsetof(Literal_t81928004, ___val_0)); }
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
#endif // LITERAL_T81928004_H
#ifndef CATEGORYATTRIBUTE_T534157880_H
#define CATEGORYATTRIBUTE_T534157880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CategoryAttribute
struct  CategoryAttribute_t534157880  : public Attribute_t2733848937
{
public:
	// System.String System.ComponentModel.CategoryAttribute::category
	String_t* ___category_0;
	// System.Boolean System.ComponentModel.CategoryAttribute::IsLocalized
	bool ___IsLocalized_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(CategoryAttribute_t534157880, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_IsLocalized_1() { return static_cast<int32_t>(offsetof(CategoryAttribute_t534157880, ___IsLocalized_1)); }
	inline bool get_IsLocalized_1() const { return ___IsLocalized_1; }
	inline bool* get_address_of_IsLocalized_1() { return &___IsLocalized_1; }
	inline void set_IsLocalized_1(bool value)
	{
		___IsLocalized_1 = value;
	}
};

struct CategoryAttribute_t534157880_StaticFields
{
public:
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::action
	CategoryAttribute_t534157880 * ___action_2;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::appearance
	CategoryAttribute_t534157880 * ___appearance_3;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::behaviour
	CategoryAttribute_t534157880 * ___behaviour_4;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::data
	CategoryAttribute_t534157880 * ___data_5;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::def
	CategoryAttribute_t534157880 * ___def_6;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::design
	CategoryAttribute_t534157880 * ___design_7;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::drag_drop
	CategoryAttribute_t534157880 * ___drag_drop_8;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::focus
	CategoryAttribute_t534157880 * ___focus_9;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::format
	CategoryAttribute_t534157880 * ___format_10;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::key
	CategoryAttribute_t534157880 * ___key_11;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::layout
	CategoryAttribute_t534157880 * ___layout_12;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::mouse
	CategoryAttribute_t534157880 * ___mouse_13;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::window_style
	CategoryAttribute_t534157880 * ___window_style_14;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::async
	CategoryAttribute_t534157880 * ___async_15;
	// System.Object System.ComponentModel.CategoryAttribute::lockobj
	RuntimeObject * ___lockobj_16;

public:
	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(CategoryAttribute_t534157880_StaticFields, ___action_2)); }
	inline CategoryAttribute_t534157880 * get_action_2() const { return ___action_2; }
	inline CategoryAttribute_t534157880 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(CategoryAttribute_t534157880 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_appearance_3() { return static_cast<int32_t>(offsetof(CategoryAttribute_t534157880_StaticFields, ___appearance_3)); }
	inline CategoryAttribute_t534157880 * get_appearance_3() const { return ___appearance_3; }
	inline CategoryAttribute_t534157880 ** get_address_of_appearance_3() { return &___appearance_3; }
	inline void set_appearance_3(CategoryAttribute_t534157880 * value)
	{
		___appearance_3 = value;
		Il2CppCodeGenWriteBarrier((&___appearance_3), value);
	}

	inline static int32_t get_offset_of_behaviour_4() { return static_cast<int32_t>(offsetof(CategoryAttribute_t534157880_StaticFields, ___behaviour_4)); }
	inline CategoryAttribute_t534157880 * get_behaviour_4() const { return ___behaviour_4; }
	inline CategoryAttribute_t534157880 ** get_address_of_behaviour_4() { return &___behaviour_4; }
	inline void set_behaviour_4(CategoryAttribute_t534157880 * value)
	{
		___behaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&___behaviour_4), value);
	}

	inline static int32_t get_offset_of_data_5() { return static_cast<int32_t>(offsetof(CategoryAttribute_t534157880_StaticFields, ___data_5)); }
	inline CategoryAttribute_t534157880 * get_data_5() const { return ___data_5; }
	inline CategoryAttribute_t534157880 ** get_address_of_data_5() { return &___data_5; }
	inline void set_data_5(CategoryAttribute_t534157880 * value)
	{
		___data_5 = value;
		Il2CppCodeGenWriteBarrier((&___data_5), value);
	}

	inline static int32_t get_offset_of_def_6() { return static_cast<int32_t>(offsetof(CategoryAttribute_t534157880_StaticFields, ___def_6)); }
	inline CategoryAttribute_t534157880 * get_def_6() const { return ___def_6; }
	inline CategoryAttribute_t534157880 ** get_address_of_def_6() { return &___def_6; }
	inline void set_def_6(CategoryAttribute_t534157880 * value)
	{
		___def_6 = value;
		Il2CppCodeGenWriteBarrier((&___def_6), value);
	}

	inline static int32_t get_offset_of_design_7() { return static_cast<int32_t>(offsetof(CategoryAttribute_t534157880_StaticFields, ___design_7)); }
	inline CategoryAttribute_t534157880 * get_design_7() const { return ___design_7; }
	inline CategoryAttribute_t534157880 ** get_address_of_design_7() { return &___design_7; }
	inline void set_design_7(CategoryAttribute_t534157880 * value)
	{
		___design_7 = value;
		Il2CppCodeGenWriteBarrier((&___design_7), value);
	}

	inline static int32_t get_offset_of_drag_drop_8() { return static_cast<int32_t>(offsetof(CategoryAttribute_t534157880_StaticFields, ___drag_drop_8)); }
	inline CategoryAttribute_t534157880 * get_drag_drop_8() const { return ___drag_drop_8; }
	inline CategoryAttribute_t534157880 ** get_address_of_drag_drop_8() { return &___drag_drop_8; }
	inline void set_drag_drop_8(CategoryAttribute_t534157880 * value)
	{
		___drag_drop_8 = value;
		Il2CppCodeGenWriteBarrier((&___drag_drop_8), value);
	}

	inline static int32_t get_offset_of_focus_9() { return static_cast<int32_t>(offsetof(CategoryAttribute_t534157880_StaticFields, ___focus_9)); }
	inline CategoryAttribute_t534157880 * get_focus_9() const { return ___focus_9; }
	inline CategoryAttribute_t534157880 ** get_address_of_focus_9() { return &___focus_9; }
	inline void set_focus_9(CategoryAttribute_t534157880 * value)
	{
		___focus_9 = value;
		Il2CppCodeGenWriteBarrier((&___focus_9), value);
	}

	inline static int32_t get_offset_of_format_10() { return static_cast<int32_t>(offsetof(CategoryAttribute_t534157880_StaticFields, ___format_10)); }
	inline CategoryAttribute_t534157880 * get_format_10() const { return ___format_10; }
	inline CategoryAttribute_t534157880 ** get_address_of_format_10() { return &___format_10; }
	inline void set_format_10(CategoryAttribute_t534157880 * value)
	{
		___format_10 = value;
		Il2CppCodeGenWriteBarrier((&___format_10), value);
	}

	inline static int32_t get_offset_of_key_11() { return static_cast<int32_t>(offsetof(CategoryAttribute_t534157880_StaticFields, ___key_11)); }
	inline CategoryAttribute_t534157880 * get_key_11() const { return ___key_11; }
	inline CategoryAttribute_t534157880 ** get_address_of_key_11() { return &___key_11; }
	inline void set_key_11(CategoryAttribute_t534157880 * value)
	{
		___key_11 = value;
		Il2CppCodeGenWriteBarrier((&___key_11), value);
	}

	inline static int32_t get_offset_of_layout_12() { return static_cast<int32_t>(offsetof(CategoryAttribute_t534157880_StaticFields, ___layout_12)); }
	inline CategoryAttribute_t534157880 * get_layout_12() const { return ___layout_12; }
	inline CategoryAttribute_t534157880 ** get_address_of_layout_12() { return &___layout_12; }
	inline void set_layout_12(CategoryAttribute_t534157880 * value)
	{
		___layout_12 = value;
		Il2CppCodeGenWriteBarrier((&___layout_12), value);
	}

	inline static int32_t get_offset_of_mouse_13() { return static_cast<int32_t>(offsetof(CategoryAttribute_t534157880_StaticFields, ___mouse_13)); }
	inline CategoryAttribute_t534157880 * get_mouse_13() const { return ___mouse_13; }
	inline CategoryAttribute_t534157880 ** get_address_of_mouse_13() { return &___mouse_13; }
	inline void set_mouse_13(CategoryAttribute_t534157880 * value)
	{
		___mouse_13 = value;
		Il2CppCodeGenWriteBarrier((&___mouse_13), value);
	}

	inline static int32_t get_offset_of_window_style_14() { return static_cast<int32_t>(offsetof(CategoryAttribute_t534157880_StaticFields, ___window_style_14)); }
	inline CategoryAttribute_t534157880 * get_window_style_14() const { return ___window_style_14; }
	inline CategoryAttribute_t534157880 ** get_address_of_window_style_14() { return &___window_style_14; }
	inline void set_window_style_14(CategoryAttribute_t534157880 * value)
	{
		___window_style_14 = value;
		Il2CppCodeGenWriteBarrier((&___window_style_14), value);
	}

	inline static int32_t get_offset_of_async_15() { return static_cast<int32_t>(offsetof(CategoryAttribute_t534157880_StaticFields, ___async_15)); }
	inline CategoryAttribute_t534157880 * get_async_15() const { return ___async_15; }
	inline CategoryAttribute_t534157880 ** get_address_of_async_15() { return &___async_15; }
	inline void set_async_15(CategoryAttribute_t534157880 * value)
	{
		___async_15 = value;
		Il2CppCodeGenWriteBarrier((&___async_15), value);
	}

	inline static int32_t get_offset_of_lockobj_16() { return static_cast<int32_t>(offsetof(CategoryAttribute_t534157880_StaticFields, ___lockobj_16)); }
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
#endif // CATEGORYATTRIBUTE_T534157880_H
#ifndef EXPANDABLEOBJECTCONVERTER_T462174659_H
#define EXPANDABLEOBJECTCONVERTER_T462174659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t462174659  : public TypeConverter_t1262942863
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T462174659_H
#ifndef SYSTEMEXCEPTION_T1005328593_H
#define SYSTEMEXCEPTION_T1005328593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t1005328593  : public Exception_t1223031340
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T1005328593_H
#ifndef DATATABLEMAPPING_T647878141_H
#define DATATABLEMAPPING_T647878141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataTableMapping
struct  DataTableMapping_t647878141  : public MarshalByRefObject_t1557693092
{
public:
	// System.String System.Data.Common.DataTableMapping::sourceTable
	String_t* ___sourceTable_1;
	// System.String System.Data.Common.DataTableMapping::dataSetTable
	String_t* ___dataSetTable_2;
	// System.Data.Common.DataColumnMappingCollection System.Data.Common.DataTableMapping::columnMappings
	DataColumnMappingCollection_t822547184 * ___columnMappings_3;

public:
	inline static int32_t get_offset_of_sourceTable_1() { return static_cast<int32_t>(offsetof(DataTableMapping_t647878141, ___sourceTable_1)); }
	inline String_t* get_sourceTable_1() const { return ___sourceTable_1; }
	inline String_t** get_address_of_sourceTable_1() { return &___sourceTable_1; }
	inline void set_sourceTable_1(String_t* value)
	{
		___sourceTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___sourceTable_1), value);
	}

	inline static int32_t get_offset_of_dataSetTable_2() { return static_cast<int32_t>(offsetof(DataTableMapping_t647878141, ___dataSetTable_2)); }
	inline String_t* get_dataSetTable_2() const { return ___dataSetTable_2; }
	inline String_t** get_address_of_dataSetTable_2() { return &___dataSetTable_2; }
	inline void set_dataSetTable_2(String_t* value)
	{
		___dataSetTable_2 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetTable_2), value);
	}

	inline static int32_t get_offset_of_columnMappings_3() { return static_cast<int32_t>(offsetof(DataTableMapping_t647878141, ___columnMappings_3)); }
	inline DataColumnMappingCollection_t822547184 * get_columnMappings_3() const { return ___columnMappings_3; }
	inline DataColumnMappingCollection_t822547184 ** get_address_of_columnMappings_3() { return &___columnMappings_3; }
	inline void set_columnMappings_3(DataColumnMappingCollection_t822547184 * value)
	{
		___columnMappings_3 = value;
		Il2CppCodeGenWriteBarrier((&___columnMappings_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLEMAPPING_T647878141_H
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
	RandomNumberGenerator_t4121507241 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t4121507241 * ____fastRng_14;

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
	inline RandomNumberGenerator_t4121507241 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t4121507241 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t4121507241 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t4121507241 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t4121507241 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t4121507241 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef DATACOLUMNMAPPING_T1346157783_H
#define DATACOLUMNMAPPING_T1346157783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataColumnMapping
struct  DataColumnMapping_t1346157783  : public MarshalByRefObject_t1557693092
{
public:
	// System.String System.Data.Common.DataColumnMapping::sourceColumn
	String_t* ___sourceColumn_1;
	// System.String System.Data.Common.DataColumnMapping::dataSetColumn
	String_t* ___dataSetColumn_2;

public:
	inline static int32_t get_offset_of_sourceColumn_1() { return static_cast<int32_t>(offsetof(DataColumnMapping_t1346157783, ___sourceColumn_1)); }
	inline String_t* get_sourceColumn_1() const { return ___sourceColumn_1; }
	inline String_t** get_address_of_sourceColumn_1() { return &___sourceColumn_1; }
	inline void set_sourceColumn_1(String_t* value)
	{
		___sourceColumn_1 = value;
		Il2CppCodeGenWriteBarrier((&___sourceColumn_1), value);
	}

	inline static int32_t get_offset_of_dataSetColumn_2() { return static_cast<int32_t>(offsetof(DataColumnMapping_t1346157783, ___dataSetColumn_2)); }
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
#endif // DATACOLUMNMAPPING_T1346157783_H
#ifndef DATACOLUMNMAPPINGCOLLECTION_T822547184_H
#define DATACOLUMNMAPPINGCOLLECTION_T822547184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataColumnMappingCollection
struct  DataColumnMappingCollection_t822547184  : public MarshalByRefObject_t1557693092
{
public:
	// System.Collections.ArrayList System.Data.Common.DataColumnMappingCollection::list
	ArrayList_t408765613 * ___list_1;
	// System.Collections.Hashtable System.Data.Common.DataColumnMappingCollection::sourceColumns
	Hashtable_t3596949909 * ___sourceColumns_2;
	// System.Collections.Hashtable System.Data.Common.DataColumnMappingCollection::dataSetColumns
	Hashtable_t3596949909 * ___dataSetColumns_3;

public:
	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(DataColumnMappingCollection_t822547184, ___list_1)); }
	inline ArrayList_t408765613 * get_list_1() const { return ___list_1; }
	inline ArrayList_t408765613 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(ArrayList_t408765613 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier((&___list_1), value);
	}

	inline static int32_t get_offset_of_sourceColumns_2() { return static_cast<int32_t>(offsetof(DataColumnMappingCollection_t822547184, ___sourceColumns_2)); }
	inline Hashtable_t3596949909 * get_sourceColumns_2() const { return ___sourceColumns_2; }
	inline Hashtable_t3596949909 ** get_address_of_sourceColumns_2() { return &___sourceColumns_2; }
	inline void set_sourceColumns_2(Hashtable_t3596949909 * value)
	{
		___sourceColumns_2 = value;
		Il2CppCodeGenWriteBarrier((&___sourceColumns_2), value);
	}

	inline static int32_t get_offset_of_dataSetColumns_3() { return static_cast<int32_t>(offsetof(DataColumnMappingCollection_t822547184, ___dataSetColumns_3)); }
	inline Hashtable_t3596949909 * get_dataSetColumns_3() const { return ___dataSetColumns_3; }
	inline Hashtable_t3596949909 ** get_address_of_dataSetColumns_3() { return &___dataSetColumns_3; }
	inline void set_dataSetColumns_3(Hashtable_t3596949909 * value)
	{
		___dataSetColumns_3 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetColumns_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACOLUMNMAPPINGCOLLECTION_T822547184_H
#ifndef DECIMAL_T1082249906_H
#define DECIMAL_T1082249906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t1082249906 
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
	inline static int32_t get_offset_of_flags_6() { return static_cast<int32_t>(offsetof(Decimal_t1082249906, ___flags_6)); }
	inline uint32_t get_flags_6() const { return ___flags_6; }
	inline uint32_t* get_address_of_flags_6() { return &___flags_6; }
	inline void set_flags_6(uint32_t value)
	{
		___flags_6 = value;
	}

	inline static int32_t get_offset_of_hi_7() { return static_cast<int32_t>(offsetof(Decimal_t1082249906, ___hi_7)); }
	inline uint32_t get_hi_7() const { return ___hi_7; }
	inline uint32_t* get_address_of_hi_7() { return &___hi_7; }
	inline void set_hi_7(uint32_t value)
	{
		___hi_7 = value;
	}

	inline static int32_t get_offset_of_lo_8() { return static_cast<int32_t>(offsetof(Decimal_t1082249906, ___lo_8)); }
	inline uint32_t get_lo_8() const { return ___lo_8; }
	inline uint32_t* get_address_of_lo_8() { return &___lo_8; }
	inline void set_lo_8(uint32_t value)
	{
		___lo_8 = value;
	}

	inline static int32_t get_offset_of_mid_9() { return static_cast<int32_t>(offsetof(Decimal_t1082249906, ___mid_9)); }
	inline uint32_t get_mid_9() const { return ___mid_9; }
	inline uint32_t* get_address_of_mid_9() { return &___mid_9; }
	inline void set_mid_9(uint32_t value)
	{
		___mid_9 = value;
	}
};

struct Decimal_t1082249906_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t1082249906  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t1082249906  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t1082249906  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t1082249906  ___One_3;
	// System.Decimal System.Decimal::Zero
	Decimal_t1082249906  ___Zero_4;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t1082249906  ___MaxValueDiv10_5;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t1082249906_StaticFields, ___MinValue_0)); }
	inline Decimal_t1082249906  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t1082249906 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t1082249906  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t1082249906_StaticFields, ___MaxValue_1)); }
	inline Decimal_t1082249906  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t1082249906 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t1082249906  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t1082249906_StaticFields, ___MinusOne_2)); }
	inline Decimal_t1082249906  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t1082249906 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t1082249906  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t1082249906_StaticFields, ___One_3)); }
	inline Decimal_t1082249906  get_One_3() const { return ___One_3; }
	inline Decimal_t1082249906 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t1082249906  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_Zero_4() { return static_cast<int32_t>(offsetof(Decimal_t1082249906_StaticFields, ___Zero_4)); }
	inline Decimal_t1082249906  get_Zero_4() const { return ___Zero_4; }
	inline Decimal_t1082249906 * get_address_of_Zero_4() { return &___Zero_4; }
	inline void set_Zero_4(Decimal_t1082249906  value)
	{
		___Zero_4 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_5() { return static_cast<int32_t>(offsetof(Decimal_t1082249906_StaticFields, ___MaxValueDiv10_5)); }
	inline Decimal_t1082249906  get_MaxValueDiv10_5() const { return ___MaxValueDiv10_5; }
	inline Decimal_t1082249906 * get_address_of_MaxValueDiv10_5() { return &___MaxValueDiv10_5; }
	inline void set_MaxValueDiv10_5(Decimal_t1082249906  value)
	{
		___MaxValueDiv10_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T1082249906_H
#ifndef CHARDATACONTAINER_T3202311924_H
#define CHARDATACONTAINER_T3202311924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.CharDataContainer
struct  CharDataContainer_t3202311924  : public DataContainer_t3901026517
{
public:
	// System.Char[] System.Data.Common.CharDataContainer::_values
	CharU5BU5D_t52468358* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(CharDataContainer_t3202311924, ____values_3)); }
	inline CharU5BU5D_t52468358* get__values_3() const { return ____values_3; }
	inline CharU5BU5D_t52468358** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(CharU5BU5D_t52468358* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARDATACONTAINER_T3202311924_H
#ifndef BYTEDATACONTAINER_T924525391_H
#define BYTEDATACONTAINER_T924525391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.ByteDataContainer
struct  ByteDataContainer_t924525391  : public DataContainer_t3901026517
{
public:
	// System.Byte[] System.Data.Common.ByteDataContainer::_values
	ByteU5BU5D_t2203878315* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(ByteDataContainer_t924525391, ____values_3)); }
	inline ByteU5BU5D_t2203878315* get__values_3() const { return ____values_3; }
	inline ByteU5BU5D_t2203878315** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(ByteU5BU5D_t2203878315* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEDATACONTAINER_T924525391_H
#ifndef SBYTEDATACONTAINER_T2483184676_H
#define SBYTEDATACONTAINER_T2483184676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.SByteDataContainer
struct  SByteDataContainer_t2483184676  : public DataContainer_t3901026517
{
public:
	// System.SByte[] System.Data.Common.SByteDataContainer::_values
	SByteU5BU5D_t362434928* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(SByteDataContainer_t2483184676, ____values_3)); }
	inline SByteU5BU5D_t362434928* get__values_3() const { return ____values_3; }
	inline SByteU5BU5D_t362434928** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(SByteU5BU5D_t362434928* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTEDATACONTAINER_T2483184676_H
#ifndef INT16DATACONTAINER_T1737933968_H
#define INT16DATACONTAINER_T1737933968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Int16DataContainer
struct  Int16DataContainer_t1737933968  : public DataContainer_t3901026517
{
public:
	// System.Int16[] System.Data.Common.Int16DataContainer::_values
	Int16U5BU5D_t2289838974* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(Int16DataContainer_t1737933968, ____values_3)); }
	inline Int16U5BU5D_t2289838974* get__values_3() const { return ____values_3; }
	inline Int16U5BU5D_t2289838974** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(Int16U5BU5D_t2289838974* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16DATACONTAINER_T1737933968_H
#ifndef DOUBLEDATACONTAINER_T3674409810_H
#define DOUBLEDATACONTAINER_T3674409810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DoubleDataContainer
struct  DoubleDataContainer_t3674409810  : public DataContainer_t3901026517
{
public:
	// System.Double[] System.Data.Common.DoubleDataContainer::_values
	DoubleU5BU5D_t2277911284* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(DoubleDataContainer_t3674409810, ____values_3)); }
	inline DoubleU5BU5D_t2277911284* get__values_3() const { return ____values_3; }
	inline DoubleU5BU5D_t2277911284** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(DoubleU5BU5D_t2277911284* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLEDATACONTAINER_T3674409810_H
#ifndef UINT16DATACONTAINER_T2634730604_H
#define UINT16DATACONTAINER_T2634730604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.UInt16DataContainer
struct  UInt16DataContainer_t2634730604  : public DataContainer_t3901026517
{
public:
	// System.UInt16[] System.Data.Common.UInt16DataContainer::_values
	UInt16U5BU5D_t780664272* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(UInt16DataContainer_t2634730604, ____values_3)); }
	inline UInt16U5BU5D_t780664272* get__values_3() const { return ____values_3; }
	inline UInt16U5BU5D_t780664272** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(UInt16U5BU5D_t780664272* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16DATACONTAINER_T2634730604_H
#ifndef INT32DATACONTAINER_T2979488455_H
#define INT32DATACONTAINER_T2979488455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Int32DataContainer
struct  Int32DataContainer_t2979488455  : public DataContainer_t3901026517
{
public:
	// System.Int32[] System.Data.Common.Int32DataContainer::_values
	Int32U5BU5D_t1952577767* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(Int32DataContainer_t2979488455, ____values_3)); }
	inline Int32U5BU5D_t1952577767* get__values_3() const { return ____values_3; }
	inline Int32U5BU5D_t1952577767** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(Int32U5BU5D_t1952577767* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32DATACONTAINER_T2979488455_H
#ifndef UINT32DATACONTAINER_T291105656_H
#define UINT32DATACONTAINER_T291105656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.UInt32DataContainer
struct  UInt32DataContainer_t291105656  : public DataContainer_t3901026517
{
public:
	// System.UInt32[] System.Data.Common.UInt32DataContainer::_values
	UInt32U5BU5D_t1418191491* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(UInt32DataContainer_t291105656, ____values_3)); }
	inline UInt32U5BU5D_t1418191491* get__values_3() const { return ____values_3; }
	inline UInt32U5BU5D_t1418191491** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(UInt32U5BU5D_t1418191491* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32DATACONTAINER_T291105656_H
#ifndef SINGLEDATACONTAINER_T3344172609_H
#define SINGLEDATACONTAINER_T3344172609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.SingleDataContainer
struct  SingleDataContainer_t3344172609  : public DataContainer_t3901026517
{
public:
	// System.Single[] System.Data.Common.SingleDataContainer::_values
	SingleU5BU5D_t3312540190* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(SingleDataContainer_t3344172609, ____values_3)); }
	inline SingleU5BU5D_t3312540190* get__values_3() const { return ____values_3; }
	inline SingleU5BU5D_t3312540190** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(SingleU5BU5D_t3312540190* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLEDATACONTAINER_T3344172609_H
#ifndef BITDATACONTAINER_T1233599451_H
#define BITDATACONTAINER_T1233599451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.BitDataContainer
struct  BitDataContainer_t1233599451  : public DataContainer_t3901026517
{
public:
	// System.Collections.BitArray System.Data.Common.BitDataContainer::_values
	BitArray_t334721981 * ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(BitDataContainer_t1233599451, ____values_3)); }
	inline BitArray_t334721981 * get__values_3() const { return ____values_3; }
	inline BitArray_t334721981 ** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(BitArray_t334721981 * value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITDATACONTAINER_T1233599451_H
#ifndef INT64DATACONTAINER_T1317311898_H
#define INT64DATACONTAINER_T1317311898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Int64DataContainer
struct  Int64DataContainer_t1317311898  : public DataContainer_t3901026517
{
public:
	// System.Int64[] System.Data.Common.Int64DataContainer::_values
	Int64U5BU5D_t605282826* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(Int64DataContainer_t1317311898, ____values_3)); }
	inline Int64U5BU5D_t605282826* get__values_3() const { return ____values_3; }
	inline Int64U5BU5D_t605282826** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(Int64U5BU5D_t605282826* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64DATACONTAINER_T1317311898_H
#ifndef UINT64DATACONTAINER_T3144989489_H
#define UINT64DATACONTAINER_T3144989489_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.UInt64DataContainer
struct  UInt64DataContainer_t3144989489  : public DataContainer_t3901026517
{
public:
	// System.UInt64[] System.Data.Common.UInt64DataContainer::_values
	UInt64U5BU5D_t806030259* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(UInt64DataContainer_t3144989489, ____values_3)); }
	inline UInt64U5BU5D_t806030259* get__values_3() const { return ____values_3; }
	inline UInt64U5BU5D_t806030259** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(UInt64U5BU5D_t806030259* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64DATACONTAINER_T3144989489_H
#ifndef DATAROWACTION_T3636484368_H
#define DATAROWACTION_T3636484368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowAction
struct  DataRowAction_t3636484368 
{
public:
	// System.Int32 System.Data.DataRowAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataRowAction_t3636484368, ___value___1)); }
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
#endif // DATAROWACTION_T3636484368_H
#ifndef DATACATEGORYATTRIBUTE_T3066291168_H
#define DATACATEGORYATTRIBUTE_T3066291168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataCategoryAttribute
struct  DataCategoryAttribute_t3066291168  : public CategoryAttribute_t534157880
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACATEGORYATTRIBUTE_T3066291168_H
#ifndef DATETIMEKIND_T1381383073_H
#define DATETIMEKIND_T1381383073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t1381383073 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t1381383073, ___value___1)); }
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
#endif // DATETIMEKIND_T1381383073_H
#ifndef MAPPINGTYPE_T362076389_H
#define MAPPINGTYPE_T362076389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MappingType
struct  MappingType_t362076389 
{
public:
	// System.Int32 System.Data.MappingType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MappingType_t362076389, ___value___1)); }
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
#endif // MAPPINGTYPE_T362076389_H
#ifndef DATAEXCEPTION_T1958642054_H
#define DATAEXCEPTION_T1958642054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataException
struct  DataException_t1958642054  : public SystemException_t1005328593
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAEXCEPTION_T1958642054_H
#ifndef DATASETDATETIME_T2711009793_H
#define DATASETDATETIME_T2711009793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataSetDateTime
struct  DataSetDateTime_t2711009793 
{
public:
	// System.Int32 System.Data.DataSetDateTime::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataSetDateTime_t2711009793, ___value___1)); }
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
#endif // DATASETDATETIME_T2711009793_H
#ifndef DATASETRELATIONCOLLECTION_T824848074_H
#define DATASETRELATIONCOLLECTION_T824848074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection/DataSetRelationCollection
struct  DataSetRelationCollection_t824848074  : public DataRelationCollection_t2080198525
{
public:
	// System.Data.DataSet System.Data.DataRelationCollection/DataSetRelationCollection::dataSet
	DataSet_t3307559698 * ___dataSet_5;
	// System.Data.DataRelation[] System.Data.DataRelationCollection/DataSetRelationCollection::mostRecentRelations
	DataRelationU5BU5D_t3774023812* ___mostRecentRelations_6;

public:
	inline static int32_t get_offset_of_dataSet_5() { return static_cast<int32_t>(offsetof(DataSetRelationCollection_t824848074, ___dataSet_5)); }
	inline DataSet_t3307559698 * get_dataSet_5() const { return ___dataSet_5; }
	inline DataSet_t3307559698 ** get_address_of_dataSet_5() { return &___dataSet_5; }
	inline void set_dataSet_5(DataSet_t3307559698 * value)
	{
		___dataSet_5 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_5), value);
	}

	inline static int32_t get_offset_of_mostRecentRelations_6() { return static_cast<int32_t>(offsetof(DataSetRelationCollection_t824848074, ___mostRecentRelations_6)); }
	inline DataRelationU5BU5D_t3774023812* get_mostRecentRelations_6() const { return ___mostRecentRelations_6; }
	inline DataRelationU5BU5D_t3774023812** get_address_of_mostRecentRelations_6() { return &___mostRecentRelations_6; }
	inline void set_mostRecentRelations_6(DataRelationU5BU5D_t3774023812* value)
	{
		___mostRecentRelations_6 = value;
		Il2CppCodeGenWriteBarrier((&___mostRecentRelations_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETRELATIONCOLLECTION_T824848074_H
#ifndef DATATABLERELATIONCOLLECTION_T1264289065_H
#define DATATABLERELATIONCOLLECTION_T1264289065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection/DataTableRelationCollection
struct  DataTableRelationCollection_t1264289065  : public DataRelationCollection_t2080198525
{
public:
	// System.Data.DataTable System.Data.DataRelationCollection/DataTableRelationCollection::dataTable
	DataTable_t168666095 * ___dataTable_5;

public:
	inline static int32_t get_offset_of_dataTable_5() { return static_cast<int32_t>(offsetof(DataTableRelationCollection_t1264289065, ___dataTable_5)); }
	inline DataTable_t168666095 * get_dataTable_5() const { return ___dataTable_5; }
	inline DataTable_t168666095 ** get_address_of_dataTable_5() { return &___dataTable_5; }
	inline void set_dataTable_5(DataTable_t168666095 * value)
	{
		___dataTable_5 = value;
		Il2CppCodeGenWriteBarrier((&___dataTable_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLERELATIONCOLLECTION_T1264289065_H
#ifndef DATARELATIONPROPERTYDESCRIPTOR_T1002787180_H
#define DATARELATIONPROPERTYDESCRIPTOR_T1002787180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationPropertyDescriptor
struct  DataRelationPropertyDescriptor_t1002787180  : public PropertyDescriptor_t2823072288
{
public:
	// System.Data.DataRelation System.Data.DataRelationPropertyDescriptor::_relation
	DataRelation_t4097826169 * ____relation_6;

public:
	inline static int32_t get_offset_of__relation_6() { return static_cast<int32_t>(offsetof(DataRelationPropertyDescriptor_t1002787180, ____relation_6)); }
	inline DataRelation_t4097826169 * get__relation_6() const { return ____relation_6; }
	inline DataRelation_t4097826169 ** get_address_of__relation_6() { return &____relation_6; }
	inline void set__relation_6(DataRelation_t4097826169 * value)
	{
		____relation_6 = value;
		Il2CppCodeGenWriteBarrier((&____relation_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATARELATIONPROPERTYDESCRIPTOR_T1002787180_H
#ifndef DATACOLUMNPROPERTYDESCRIPTOR_T2343717365_H
#define DATACOLUMNPROPERTYDESCRIPTOR_T2343717365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumnPropertyDescriptor
struct  DataColumnPropertyDescriptor_t2343717365  : public PropertyDescriptor_t2823072288
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
	inline static int32_t get_offset_of_readOnly_6() { return static_cast<int32_t>(offsetof(DataColumnPropertyDescriptor_t2343717365, ___readOnly_6)); }
	inline bool get_readOnly_6() const { return ___readOnly_6; }
	inline bool* get_address_of_readOnly_6() { return &___readOnly_6; }
	inline void set_readOnly_6(bool value)
	{
		___readOnly_6 = value;
	}

	inline static int32_t get_offset_of_componentType_7() { return static_cast<int32_t>(offsetof(DataColumnPropertyDescriptor_t2343717365, ___componentType_7)); }
	inline Type_t * get_componentType_7() const { return ___componentType_7; }
	inline Type_t ** get_address_of_componentType_7() { return &___componentType_7; }
	inline void set_componentType_7(Type_t * value)
	{
		___componentType_7 = value;
		Il2CppCodeGenWriteBarrier((&___componentType_7), value);
	}

	inline static int32_t get_offset_of_propertyType_8() { return static_cast<int32_t>(offsetof(DataColumnPropertyDescriptor_t2343717365, ___propertyType_8)); }
	inline Type_t * get_propertyType_8() const { return ___propertyType_8; }
	inline Type_t ** get_address_of_propertyType_8() { return &___propertyType_8; }
	inline void set_propertyType_8(Type_t * value)
	{
		___propertyType_8 = value;
		Il2CppCodeGenWriteBarrier((&___propertyType_8), value);
	}

	inline static int32_t get_offset_of_browsable_9() { return static_cast<int32_t>(offsetof(DataColumnPropertyDescriptor_t2343717365, ___browsable_9)); }
	inline bool get_browsable_9() const { return ___browsable_9; }
	inline bool* get_address_of_browsable_9() { return &___browsable_9; }
	inline void set_browsable_9(bool value)
	{
		___browsable_9 = value;
	}

	inline static int32_t get_offset_of_columnIndex_10() { return static_cast<int32_t>(offsetof(DataColumnPropertyDescriptor_t2343717365, ___columnIndex_10)); }
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
#endif // DATACOLUMNPROPERTYDESCRIPTOR_T2343717365_H
#ifndef DATAVIEWROWSTATE_T864285947_H
#define DATAVIEWROWSTATE_T864285947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataViewRowState
struct  DataViewRowState_t864285947 
{
public:
	// System.Int32 System.Data.DataViewRowState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataViewRowState_t864285947, ___value___1)); }
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
#endif // DATAVIEWROWSTATE_T864285947_H
#ifndef REFERENCEDTABLE_T3168711824_H
#define REFERENCEDTABLE_T3168711824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.ReferencedTable
struct  ReferencedTable_t3168711824 
{
public:
	// System.Int32 Mono.Data.SqlExpressions.ReferencedTable::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReferencedTable_t3168711824, ___value___1)); }
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
#endif // REFERENCEDTABLE_T3168711824_H
#ifndef STRINGDATACONTAINER_T3494841369_H
#define STRINGDATACONTAINER_T3494841369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.StringDataContainer
struct  StringDataContainer_t3494841369  : public ObjectDataContainer_t67022101
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGDATACONTAINER_T3494841369_H
#ifndef DATETIMEDATACONTAINER_T272337683_H
#define DATETIMEDATACONTAINER_T272337683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DateTimeDataContainer
struct  DateTimeDataContainer_t272337683  : public ObjectDataContainer_t67022101
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEDATACONTAINER_T272337683_H
#ifndef DECIMALDATACONTAINER_T314530191_H
#define DECIMALDATACONTAINER_T314530191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DecimalDataContainer
struct  DecimalDataContainer_t314530191  : public ObjectDataContainer_t67022101
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALDATACONTAINER_T314530191_H
#ifndef CONSTRAINTCONVERTER_T1747567165_H
#define CONSTRAINTCONVERTER_T1747567165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintConverter
struct  ConstraintConverter_t1747567165  : public ExpandableObjectConverter_t462174659
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTCONVERTER_T1747567165_H
#ifndef DBCOMMAND_T2216824801_H
#define DBCOMMAND_T2216824801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbCommand
struct  DbCommand_t2216824801  : public Component_t2570807151
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBCOMMAND_T2216824801_H
#ifndef DBCONNECTION_T483962279_H
#define DBCONNECTION_T483962279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbConnection
struct  DbConnection_t483962279  : public Component_t2570807151
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBCONNECTION_T483962279_H
#ifndef STRINGFUNCTION_T502340972_H
#define STRINGFUNCTION_T502340972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.StringFunction
struct  StringFunction_t502340972  : public UnaryExpression_t1348685487
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGFUNCTION_T502340972_H
#ifndef LIKE_T1632909363_H
#define LIKE_T1632909363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Like
struct  Like_t1632909363  : public UnaryExpression_t1348685487
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.Like::_pattern
	RuntimeObject* ____pattern_1;

public:
	inline static int32_t get_offset_of__pattern_1() { return static_cast<int32_t>(offsetof(Like_t1632909363, ____pattern_1)); }
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
#endif // LIKE_T1632909363_H
#ifndef IN_T3271301122_H
#define IN_T3271301122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.In
struct  In_t3271301122  : public UnaryExpression_t1348685487
{
public:
	// System.Collections.IList Mono.Data.SqlExpressions.In::set
	RuntimeObject* ___set_1;

public:
	inline static int32_t get_offset_of_set_1() { return static_cast<int32_t>(offsetof(In_t3271301122, ___set_1)); }
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
#endif // IN_T3271301122_H
#ifndef CONVERTFUNCTION_T2404818101_H
#define CONVERTFUNCTION_T2404818101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.ConvertFunction
struct  ConvertFunction_t2404818101  : public UnaryExpression_t1348685487
{
public:
	// System.Type Mono.Data.SqlExpressions.ConvertFunction::targetType
	Type_t * ___targetType_1;

public:
	inline static int32_t get_offset_of_targetType_1() { return static_cast<int32_t>(offsetof(ConvertFunction_t2404818101, ___targetType_1)); }
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
#endif // CONVERTFUNCTION_T2404818101_H
#ifndef ISNULLFUNCTION_T4061123635_H
#define ISNULLFUNCTION_T4061123635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.IsNullFunction
struct  IsNullFunction_t4061123635  : public UnaryExpression_t1348685487
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.IsNullFunction::defaultExpr
	RuntimeObject* ___defaultExpr_1;

public:
	inline static int32_t get_offset_of_defaultExpr_1() { return static_cast<int32_t>(offsetof(IsNullFunction_t4061123635, ___defaultExpr_1)); }
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
#endif // ISNULLFUNCTION_T4061123635_H
#ifndef DATAADAPTER_T3612032214_H
#define DATAADAPTER_T3612032214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataAdapter
struct  DataAdapter_t3612032214  : public Component_t2570807151
{
public:
	// System.Data.Common.DataTableMappingCollection System.Data.Common.DataAdapter::tableMappings
	DataTableMappingCollection_t2254394270 * ___tableMappings_4;

public:
	inline static int32_t get_offset_of_tableMappings_4() { return static_cast<int32_t>(offsetof(DataAdapter_t3612032214, ___tableMappings_4)); }
	inline DataTableMappingCollection_t2254394270 * get_tableMappings_4() const { return ___tableMappings_4; }
	inline DataTableMappingCollection_t2254394270 ** get_address_of_tableMappings_4() { return &___tableMappings_4; }
	inline void set_tableMappings_4(DataTableMappingCollection_t2254394270 * value)
	{
		___tableMappings_4 = value;
		Il2CppCodeGenWriteBarrier((&___tableMappings_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAADAPTER_T3612032214_H
#ifndef SQLCOMPAREOPTIONS_T520896826_H
#define SQLCOMPAREOPTIONS_T520896826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlCompareOptions
struct  SqlCompareOptions_t520896826 
{
public:
	// System.Int32 System.Data.SqlTypes.SqlCompareOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SqlCompareOptions_t520896826, ___value___1)); }
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
#endif // SQLCOMPAREOPTIONS_T520896826_H
#ifndef SQLMONEY_T1341691440_H
#define SQLMONEY_T1341691440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlMoney
struct  SqlMoney_t1341691440 
{
public:
	// System.Decimal System.Data.SqlTypes.SqlMoney::value
	Decimal_t1082249906  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlMoney::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlMoney_t1341691440, ___value_0)); }
	inline Decimal_t1082249906  get_value_0() const { return ___value_0; }
	inline Decimal_t1082249906 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Decimal_t1082249906  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlMoney_t1341691440, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlMoney_t1341691440_StaticFields
{
public:
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MaxValue
	SqlMoney_t1341691440  ___MaxValue_2;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MinValue
	SqlMoney_t1341691440  ___MinValue_3;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Null
	SqlMoney_t1341691440  ___Null_4;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Zero
	SqlMoney_t1341691440  ___Zero_5;
	// System.Globalization.NumberFormatInfo System.Data.SqlTypes.SqlMoney::MoneyFormat
	NumberFormatInfo_t641628636 * ___MoneyFormat_6;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlMoney_t1341691440_StaticFields, ___MaxValue_2)); }
	inline SqlMoney_t1341691440  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlMoney_t1341691440 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlMoney_t1341691440  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlMoney_t1341691440_StaticFields, ___MinValue_3)); }
	inline SqlMoney_t1341691440  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlMoney_t1341691440 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlMoney_t1341691440  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlMoney_t1341691440_StaticFields, ___Null_4)); }
	inline SqlMoney_t1341691440  get_Null_4() const { return ___Null_4; }
	inline SqlMoney_t1341691440 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlMoney_t1341691440  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlMoney_t1341691440_StaticFields, ___Zero_5)); }
	inline SqlMoney_t1341691440  get_Zero_5() const { return ___Zero_5; }
	inline SqlMoney_t1341691440 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlMoney_t1341691440  value)
	{
		___Zero_5 = value;
	}

	inline static int32_t get_offset_of_MoneyFormat_6() { return static_cast<int32_t>(offsetof(SqlMoney_t1341691440_StaticFields, ___MoneyFormat_6)); }
	inline NumberFormatInfo_t641628636 * get_MoneyFormat_6() const { return ___MoneyFormat_6; }
	inline NumberFormatInfo_t641628636 ** get_address_of_MoneyFormat_6() { return &___MoneyFormat_6; }
	inline void set_MoneyFormat_6(NumberFormatInfo_t641628636 * value)
	{
		___MoneyFormat_6 = value;
		Il2CppCodeGenWriteBarrier((&___MoneyFormat_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlMoney
struct SqlMoney_t1341691440_marshaled_pinvoke
{
	Decimal_t1082249906  ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlMoney
struct SqlMoney_t1341691440_marshaled_com
{
	Decimal_t1082249906  ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLMONEY_T1341691440_H
#ifndef IIFFUNCTION_T919622408_H
#define IIFFUNCTION_T919622408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.IifFunction
struct  IifFunction_t919622408  : public UnaryExpression_t1348685487
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.IifFunction::trueExpr
	RuntimeObject* ___trueExpr_1;
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.IifFunction::falseExpr
	RuntimeObject* ___falseExpr_2;

public:
	inline static int32_t get_offset_of_trueExpr_1() { return static_cast<int32_t>(offsetof(IifFunction_t919622408, ___trueExpr_1)); }
	inline RuntimeObject* get_trueExpr_1() const { return ___trueExpr_1; }
	inline RuntimeObject** get_address_of_trueExpr_1() { return &___trueExpr_1; }
	inline void set_trueExpr_1(RuntimeObject* value)
	{
		___trueExpr_1 = value;
		Il2CppCodeGenWriteBarrier((&___trueExpr_1), value);
	}

	inline static int32_t get_offset_of_falseExpr_2() { return static_cast<int32_t>(offsetof(IifFunction_t919622408, ___falseExpr_2)); }
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
#endif // IIFFUNCTION_T919622408_H
#ifndef OPERATION_T1749525387_H
#define OPERATION_T1749525387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Operation
struct  Operation_t1749525387 
{
public:
	// System.Int32 Mono.Data.SqlExpressions.Operation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Operation_t1749525387, ___value___1)); }
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
#endif // OPERATION_T1749525387_H
#ifndef SQLTYPEEXCEPTION_T2721010012_H
#define SQLTYPEEXCEPTION_T2721010012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlTypeException
struct  SqlTypeException_t2721010012  : public SystemException_t1005328593
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLTYPEEXCEPTION_T2721010012_H
#ifndef STORAGESTATE_T1609131926_H
#define STORAGESTATE_T1609131926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.StorageState
struct  StorageState_t1609131926 
{
public:
	// System.Int32 System.Data.SqlTypes.StorageState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StorageState_t1609131926, ___value___1)); }
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
#endif // STORAGESTATE_T1609131926_H
#ifndef ACCEPTREJECTRULE_T3239091683_H
#define ACCEPTREJECTRULE_T3239091683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.AcceptRejectRule
struct  AcceptRejectRule_t3239091683 
{
public:
	// System.Int32 System.Data.AcceptRejectRule::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AcceptRejectRule_t3239091683, ___value___1)); }
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
#endif // ACCEPTREJECTRULE_T3239091683_H
#ifndef COLUMNTYPECONVERTER_T831589478_H
#define COLUMNTYPECONVERTER_T831589478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ColumnTypeConverter
struct  ColumnTypeConverter_t831589478  : public ExpandableObjectConverter_t462174659
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLUMNTYPECONVERTER_T831589478_H
#ifndef COMMANDTYPE_T3975917981_H
#define COMMANDTYPE_T3975917981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.CommandType
struct  CommandType_t3975917981 
{
public:
	// System.Int32 System.Data.CommandType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CommandType_t3975917981, ___value___1)); }
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
#endif // COMMANDTYPE_T3975917981_H
#ifndef SQLGUID_T994896636_H
#define SQLGUID_T994896636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlGuid
struct  SqlGuid_t994896636 
{
public:
	// System.Guid System.Data.SqlTypes.SqlGuid::value
	Guid_t  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlGuid::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlGuid_t994896636, ___value_0)); }
	inline Guid_t  get_value_0() const { return ___value_0; }
	inline Guid_t * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Guid_t  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlGuid_t994896636, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlGuid_t994896636_StaticFields
{
public:
	// System.Data.SqlTypes.SqlGuid System.Data.SqlTypes.SqlGuid::Null
	SqlGuid_t994896636  ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(SqlGuid_t994896636_StaticFields, ___Null_2)); }
	inline SqlGuid_t994896636  get_Null_2() const { return ___Null_2; }
	inline SqlGuid_t994896636 * get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(SqlGuid_t994896636  value)
	{
		___Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlGuid
struct SqlGuid_t994896636_marshaled_pinvoke
{
	Guid_t  ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlGuid
struct SqlGuid_t994896636_marshaled_com
{
	Guid_t  ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLGUID_T994896636_H
#ifndef BINARYOPEXPRESSION_T3064155083_H
#define BINARYOPEXPRESSION_T3064155083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.BinaryOpExpression
struct  BinaryOpExpression_t3064155083  : public BinaryExpression_t2677845598
{
public:
	// Mono.Data.SqlExpressions.Operation Mono.Data.SqlExpressions.BinaryOpExpression::op
	int32_t ___op_2;

public:
	inline static int32_t get_offset_of_op_2() { return static_cast<int32_t>(offsetof(BinaryOpExpression_t3064155083, ___op_2)); }
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
#endif // BINARYOPEXPRESSION_T3064155083_H
#ifndef COLUMNREFERENCE_T1039697959_H
#define COLUMNREFERENCE_T1039697959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.ColumnReference
struct  ColumnReference_t1039697959  : public BaseExpression_t278409257
{
public:
	// Mono.Data.SqlExpressions.ReferencedTable Mono.Data.SqlExpressions.ColumnReference::refTable
	int32_t ___refTable_0;
	// System.String Mono.Data.SqlExpressions.ColumnReference::relationName
	String_t* ___relationName_1;
	// System.String Mono.Data.SqlExpressions.ColumnReference::columnName
	String_t* ___columnName_2;
	// System.Data.DataColumn Mono.Data.SqlExpressions.ColumnReference::_cachedColumn
	DataColumn_t4119188540 * ____cachedColumn_3;
	// System.Data.DataRelation Mono.Data.SqlExpressions.ColumnReference::_cachedRelation
	DataRelation_t4097826169 * ____cachedRelation_4;

public:
	inline static int32_t get_offset_of_refTable_0() { return static_cast<int32_t>(offsetof(ColumnReference_t1039697959, ___refTable_0)); }
	inline int32_t get_refTable_0() const { return ___refTable_0; }
	inline int32_t* get_address_of_refTable_0() { return &___refTable_0; }
	inline void set_refTable_0(int32_t value)
	{
		___refTable_0 = value;
	}

	inline static int32_t get_offset_of_relationName_1() { return static_cast<int32_t>(offsetof(ColumnReference_t1039697959, ___relationName_1)); }
	inline String_t* get_relationName_1() const { return ___relationName_1; }
	inline String_t** get_address_of_relationName_1() { return &___relationName_1; }
	inline void set_relationName_1(String_t* value)
	{
		___relationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___relationName_1), value);
	}

	inline static int32_t get_offset_of_columnName_2() { return static_cast<int32_t>(offsetof(ColumnReference_t1039697959, ___columnName_2)); }
	inline String_t* get_columnName_2() const { return ___columnName_2; }
	inline String_t** get_address_of_columnName_2() { return &___columnName_2; }
	inline void set_columnName_2(String_t* value)
	{
		___columnName_2 = value;
		Il2CppCodeGenWriteBarrier((&___columnName_2), value);
	}

	inline static int32_t get_offset_of__cachedColumn_3() { return static_cast<int32_t>(offsetof(ColumnReference_t1039697959, ____cachedColumn_3)); }
	inline DataColumn_t4119188540 * get__cachedColumn_3() const { return ____cachedColumn_3; }
	inline DataColumn_t4119188540 ** get_address_of__cachedColumn_3() { return &____cachedColumn_3; }
	inline void set__cachedColumn_3(DataColumn_t4119188540 * value)
	{
		____cachedColumn_3 = value;
		Il2CppCodeGenWriteBarrier((&____cachedColumn_3), value);
	}

	inline static int32_t get_offset_of__cachedRelation_4() { return static_cast<int32_t>(offsetof(ColumnReference_t1039697959, ____cachedRelation_4)); }
	inline DataRelation_t4097826169 * get__cachedRelation_4() const { return ____cachedRelation_4; }
	inline DataRelation_t4097826169 ** get_address_of__cachedRelation_4() { return &____cachedRelation_4; }
	inline void set__cachedRelation_4(DataRelation_t4097826169 * value)
	{
		____cachedRelation_4 = value;
		Il2CppCodeGenWriteBarrier((&____cachedRelation_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLUMNREFERENCE_T1039697959_H
#ifndef CONCATFUNCTION_T2311961794_H
#define CONCATFUNCTION_T2311961794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.ConcatFunction
struct  ConcatFunction_t2311961794  : public StringFunction_t502340972
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.ConcatFunction::_add
	RuntimeObject* ____add_1;

public:
	inline static int32_t get_offset_of__add_1() { return static_cast<int32_t>(offsetof(ConcatFunction_t2311961794, ____add_1)); }
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
#endif // CONCATFUNCTION_T2311961794_H
#ifndef SUBSTRINGFUNCTION_T713133104_H
#define SUBSTRINGFUNCTION_T713133104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.SubstringFunction
struct  SubstringFunction_t713133104  : public StringFunction_t502340972
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.SubstringFunction::start
	RuntimeObject* ___start_1;
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.SubstringFunction::len
	RuntimeObject* ___len_2;

public:
	inline static int32_t get_offset_of_start_1() { return static_cast<int32_t>(offsetof(SubstringFunction_t713133104, ___start_1)); }
	inline RuntimeObject* get_start_1() const { return ___start_1; }
	inline RuntimeObject** get_address_of_start_1() { return &___start_1; }
	inline void set_start_1(RuntimeObject* value)
	{
		___start_1 = value;
		Il2CppCodeGenWriteBarrier((&___start_1), value);
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(SubstringFunction_t713133104, ___len_2)); }
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
#endif // SUBSTRINGFUNCTION_T713133104_H
#ifndef CONSTRAINTEXCEPTION_T4283754268_H
#define CONSTRAINTEXCEPTION_T4283754268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintException
struct  ConstraintException_t4283754268  : public DataException_t1958642054
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTEXCEPTION_T4283754268_H
#ifndef TRIMFUNCTION_T41491268_H
#define TRIMFUNCTION_T41491268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.TrimFunction
struct  TrimFunction_t41491268  : public StringFunction_t502340972
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIMFUNCTION_T41491268_H
#ifndef DATETIME_T2690699335_H
#define DATETIME_T2690699335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t2690699335 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t3820074238  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t2690699335, ___ticks_0)); }
	inline TimeSpan_t3820074238  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t3820074238 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t3820074238  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t2690699335, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t2690699335_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t2690699335  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t2690699335  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1258614724* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1258614724* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1258614724* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1258614724* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1258614724* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1258614724* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1258614724* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t1952577767* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t1952577767* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t2690699335_StaticFields, ___MaxValue_2)); }
	inline DateTime_t2690699335  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t2690699335 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t2690699335  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t2690699335_StaticFields, ___MinValue_3)); }
	inline DateTime_t2690699335  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t2690699335 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t2690699335  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t2690699335_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1258614724* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1258614724** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1258614724* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t2690699335_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1258614724* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1258614724** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1258614724* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t2690699335_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1258614724* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1258614724** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1258614724* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t2690699335_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1258614724* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1258614724** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1258614724* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t2690699335_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1258614724* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1258614724** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1258614724* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t2690699335_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1258614724* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1258614724** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1258614724* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t2690699335_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1258614724* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1258614724** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1258614724* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t2690699335_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t1952577767* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t1952577767** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t1952577767* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t2690699335_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t1952577767* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t1952577767** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t1952577767* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t2690699335_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t2690699335_StaticFields, ___last_now_14)); }
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
#endif // DATETIME_T2690699335_H
#ifndef DBDATAADAPTER_T3958335031_H
#define DBDATAADAPTER_T3958335031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbDataAdapter
struct  DbDataAdapter_t3958335031  : public DataAdapter_t3612032214
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
	inline static int32_t get_offset_of__selectCommand_5() { return static_cast<int32_t>(offsetof(DbDataAdapter_t3958335031, ____selectCommand_5)); }
	inline RuntimeObject* get__selectCommand_5() const { return ____selectCommand_5; }
	inline RuntimeObject** get_address_of__selectCommand_5() { return &____selectCommand_5; }
	inline void set__selectCommand_5(RuntimeObject* value)
	{
		____selectCommand_5 = value;
		Il2CppCodeGenWriteBarrier((&____selectCommand_5), value);
	}

	inline static int32_t get_offset_of__updateCommand_6() { return static_cast<int32_t>(offsetof(DbDataAdapter_t3958335031, ____updateCommand_6)); }
	inline RuntimeObject* get__updateCommand_6() const { return ____updateCommand_6; }
	inline RuntimeObject** get_address_of__updateCommand_6() { return &____updateCommand_6; }
	inline void set__updateCommand_6(RuntimeObject* value)
	{
		____updateCommand_6 = value;
		Il2CppCodeGenWriteBarrier((&____updateCommand_6), value);
	}

	inline static int32_t get_offset_of__deleteCommand_7() { return static_cast<int32_t>(offsetof(DbDataAdapter_t3958335031, ____deleteCommand_7)); }
	inline RuntimeObject* get__deleteCommand_7() const { return ____deleteCommand_7; }
	inline RuntimeObject** get_address_of__deleteCommand_7() { return &____deleteCommand_7; }
	inline void set__deleteCommand_7(RuntimeObject* value)
	{
		____deleteCommand_7 = value;
		Il2CppCodeGenWriteBarrier((&____deleteCommand_7), value);
	}

	inline static int32_t get_offset_of__insertCommand_8() { return static_cast<int32_t>(offsetof(DbDataAdapter_t3958335031, ____insertCommand_8)); }
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
#endif // DBDATAADAPTER_T3958335031_H
#ifndef DATAROWCHANGEEVENTARGS_T2265238086_H
#define DATAROWCHANGEEVENTARGS_T2265238086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowChangeEventArgs
struct  DataRowChangeEventArgs_t2265238086  : public EventArgs_t3419184384
{
public:
	// System.Data.DataRow System.Data.DataRowChangeEventArgs::row
	DataRow_t154029508 * ___row_1;
	// System.Data.DataRowAction System.Data.DataRowChangeEventArgs::action
	int32_t ___action_2;

public:
	inline static int32_t get_offset_of_row_1() { return static_cast<int32_t>(offsetof(DataRowChangeEventArgs_t2265238086, ___row_1)); }
	inline DataRow_t154029508 * get_row_1() const { return ___row_1; }
	inline DataRow_t154029508 ** get_address_of_row_1() { return &___row_1; }
	inline void set_row_1(DataRow_t154029508 * value)
	{
		___row_1 = value;
		Il2CppCodeGenWriteBarrier((&___row_1), value);
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(DataRowChangeEventArgs_t2265238086, ___action_2)); }
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
#endif // DATAROWCHANGEEVENTARGS_T2265238086_H
#ifndef KEY_T2145850626_H
#define KEY_T2145850626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Key
struct  Key_t2145850626  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.Common.Key::_table
	DataTable_t168666095 * ____table_0;
	// System.Data.DataColumn[] System.Data.Common.Key::_columns
	DataColumnU5BU5D_t2355267413* ____columns_1;
	// System.ComponentModel.ListSortDirection[] System.Data.Common.Key::_sortDirection
	ListSortDirectionU5BU5D_t3062874959* ____sortDirection_2;
	// System.Data.DataViewRowState System.Data.Common.Key::_rowStateFilter
	int32_t ____rowStateFilter_3;
	// Mono.Data.SqlExpressions.IExpression System.Data.Common.Key::_filter
	RuntimeObject* ____filter_4;
	// System.Data.DataRow System.Data.Common.Key::_tmpRow
	DataRow_t154029508 * ____tmpRow_5;

public:
	inline static int32_t get_offset_of__table_0() { return static_cast<int32_t>(offsetof(Key_t2145850626, ____table_0)); }
	inline DataTable_t168666095 * get__table_0() const { return ____table_0; }
	inline DataTable_t168666095 ** get_address_of__table_0() { return &____table_0; }
	inline void set__table_0(DataTable_t168666095 * value)
	{
		____table_0 = value;
		Il2CppCodeGenWriteBarrier((&____table_0), value);
	}

	inline static int32_t get_offset_of__columns_1() { return static_cast<int32_t>(offsetof(Key_t2145850626, ____columns_1)); }
	inline DataColumnU5BU5D_t2355267413* get__columns_1() const { return ____columns_1; }
	inline DataColumnU5BU5D_t2355267413** get_address_of__columns_1() { return &____columns_1; }
	inline void set__columns_1(DataColumnU5BU5D_t2355267413* value)
	{
		____columns_1 = value;
		Il2CppCodeGenWriteBarrier((&____columns_1), value);
	}

	inline static int32_t get_offset_of__sortDirection_2() { return static_cast<int32_t>(offsetof(Key_t2145850626, ____sortDirection_2)); }
	inline ListSortDirectionU5BU5D_t3062874959* get__sortDirection_2() const { return ____sortDirection_2; }
	inline ListSortDirectionU5BU5D_t3062874959** get_address_of__sortDirection_2() { return &____sortDirection_2; }
	inline void set__sortDirection_2(ListSortDirectionU5BU5D_t3062874959* value)
	{
		____sortDirection_2 = value;
		Il2CppCodeGenWriteBarrier((&____sortDirection_2), value);
	}

	inline static int32_t get_offset_of__rowStateFilter_3() { return static_cast<int32_t>(offsetof(Key_t2145850626, ____rowStateFilter_3)); }
	inline int32_t get__rowStateFilter_3() const { return ____rowStateFilter_3; }
	inline int32_t* get_address_of__rowStateFilter_3() { return &____rowStateFilter_3; }
	inline void set__rowStateFilter_3(int32_t value)
	{
		____rowStateFilter_3 = value;
	}

	inline static int32_t get_offset_of__filter_4() { return static_cast<int32_t>(offsetof(Key_t2145850626, ____filter_4)); }
	inline RuntimeObject* get__filter_4() const { return ____filter_4; }
	inline RuntimeObject** get_address_of__filter_4() { return &____filter_4; }
	inline void set__filter_4(RuntimeObject* value)
	{
		____filter_4 = value;
		Il2CppCodeGenWriteBarrier((&____filter_4), value);
	}

	inline static int32_t get_offset_of__tmpRow_5() { return static_cast<int32_t>(offsetof(Key_t2145850626, ____tmpRow_5)); }
	inline DataRow_t154029508 * get__tmpRow_5() const { return ____tmpRow_5; }
	inline DataRow_t154029508 ** get_address_of__tmpRow_5() { return &____tmpRow_5; }
	inline void set__tmpRow_5(DataRow_t154029508 * value)
	{
		____tmpRow_5 = value;
		Il2CppCodeGenWriteBarrier((&____tmpRow_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEY_T2145850626_H
#ifndef SQLBYTES_T3787212004_H
#define SQLBYTES_T3787212004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBytes
struct  SqlBytes_t3787212004  : public RuntimeObject
{
public:
	// System.Boolean System.Data.SqlTypes.SqlBytes::notNull
	bool ___notNull_0;
	// System.Byte[] System.Data.SqlTypes.SqlBytes::buffer
	ByteU5BU5D_t2203878315* ___buffer_1;
	// System.Data.SqlTypes.StorageState System.Data.SqlTypes.SqlBytes::storage
	int32_t ___storage_2;

public:
	inline static int32_t get_offset_of_notNull_0() { return static_cast<int32_t>(offsetof(SqlBytes_t3787212004, ___notNull_0)); }
	inline bool get_notNull_0() const { return ___notNull_0; }
	inline bool* get_address_of_notNull_0() { return &___notNull_0; }
	inline void set_notNull_0(bool value)
	{
		___notNull_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(SqlBytes_t3787212004, ___buffer_1)); }
	inline ByteU5BU5D_t2203878315* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_t2203878315** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_t2203878315* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_1), value);
	}

	inline static int32_t get_offset_of_storage_2() { return static_cast<int32_t>(offsetof(SqlBytes_t3787212004, ___storage_2)); }
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
#endif // SQLBYTES_T3787212004_H
#ifndef SQLCHARS_T2078742121_H
#define SQLCHARS_T2078742121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlChars
struct  SqlChars_t2078742121  : public RuntimeObject
{
public:
	// System.Boolean System.Data.SqlTypes.SqlChars::notNull
	bool ___notNull_0;
	// System.Char[] System.Data.SqlTypes.SqlChars::buffer
	CharU5BU5D_t52468358* ___buffer_1;
	// System.Data.SqlTypes.StorageState System.Data.SqlTypes.SqlChars::storage
	int32_t ___storage_2;

public:
	inline static int32_t get_offset_of_notNull_0() { return static_cast<int32_t>(offsetof(SqlChars_t2078742121, ___notNull_0)); }
	inline bool get_notNull_0() const { return ___notNull_0; }
	inline bool* get_address_of_notNull_0() { return &___notNull_0; }
	inline void set_notNull_0(bool value)
	{
		___notNull_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(SqlChars_t2078742121, ___buffer_1)); }
	inline CharU5BU5D_t52468358* get_buffer_1() const { return ___buffer_1; }
	inline CharU5BU5D_t52468358** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(CharU5BU5D_t52468358* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_1), value);
	}

	inline static int32_t get_offset_of_storage_2() { return static_cast<int32_t>(offsetof(SqlChars_t2078742121, ___storage_2)); }
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
#endif // SQLCHARS_T2078742121_H
#ifndef SQLNULLVALUEEXCEPTION_T2031172554_H
#define SQLNULLVALUEEXCEPTION_T2031172554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlNullValueException
struct  SqlNullValueException_t2031172554  : public SqlTypeException_t2721010012
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLNULLVALUEEXCEPTION_T2031172554_H
#ifndef SQLSTRING_T1056924696_H
#define SQLSTRING_T1056924696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlString
struct  SqlString_t1056924696 
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
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlString_t1056924696, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlString_t1056924696, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}

	inline static int32_t get_offset_of_lcid_2() { return static_cast<int32_t>(offsetof(SqlString_t1056924696, ___lcid_2)); }
	inline int32_t get_lcid_2() const { return ___lcid_2; }
	inline int32_t* get_address_of_lcid_2() { return &___lcid_2; }
	inline void set_lcid_2(int32_t value)
	{
		___lcid_2 = value;
	}

	inline static int32_t get_offset_of_compareOptions_3() { return static_cast<int32_t>(offsetof(SqlString_t1056924696, ___compareOptions_3)); }
	inline int32_t get_compareOptions_3() const { return ___compareOptions_3; }
	inline int32_t* get_address_of_compareOptions_3() { return &___compareOptions_3; }
	inline void set_compareOptions_3(int32_t value)
	{
		___compareOptions_3 = value;
	}
};

struct SqlString_t1056924696_StaticFields
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
	SqlString_t1056924696  ___Null_9;
	// System.Globalization.NumberFormatInfo System.Data.SqlTypes.SqlString::DecimalFormat
	NumberFormatInfo_t641628636 * ___DecimalFormat_10;

public:
	inline static int32_t get_offset_of_BinarySort_4() { return static_cast<int32_t>(offsetof(SqlString_t1056924696_StaticFields, ___BinarySort_4)); }
	inline int32_t get_BinarySort_4() const { return ___BinarySort_4; }
	inline int32_t* get_address_of_BinarySort_4() { return &___BinarySort_4; }
	inline void set_BinarySort_4(int32_t value)
	{
		___BinarySort_4 = value;
	}

	inline static int32_t get_offset_of_IgnoreCase_5() { return static_cast<int32_t>(offsetof(SqlString_t1056924696_StaticFields, ___IgnoreCase_5)); }
	inline int32_t get_IgnoreCase_5() const { return ___IgnoreCase_5; }
	inline int32_t* get_address_of_IgnoreCase_5() { return &___IgnoreCase_5; }
	inline void set_IgnoreCase_5(int32_t value)
	{
		___IgnoreCase_5 = value;
	}

	inline static int32_t get_offset_of_IgnoreKanaType_6() { return static_cast<int32_t>(offsetof(SqlString_t1056924696_StaticFields, ___IgnoreKanaType_6)); }
	inline int32_t get_IgnoreKanaType_6() const { return ___IgnoreKanaType_6; }
	inline int32_t* get_address_of_IgnoreKanaType_6() { return &___IgnoreKanaType_6; }
	inline void set_IgnoreKanaType_6(int32_t value)
	{
		___IgnoreKanaType_6 = value;
	}

	inline static int32_t get_offset_of_IgnoreNonSpace_7() { return static_cast<int32_t>(offsetof(SqlString_t1056924696_StaticFields, ___IgnoreNonSpace_7)); }
	inline int32_t get_IgnoreNonSpace_7() const { return ___IgnoreNonSpace_7; }
	inline int32_t* get_address_of_IgnoreNonSpace_7() { return &___IgnoreNonSpace_7; }
	inline void set_IgnoreNonSpace_7(int32_t value)
	{
		___IgnoreNonSpace_7 = value;
	}

	inline static int32_t get_offset_of_IgnoreWidth_8() { return static_cast<int32_t>(offsetof(SqlString_t1056924696_StaticFields, ___IgnoreWidth_8)); }
	inline int32_t get_IgnoreWidth_8() const { return ___IgnoreWidth_8; }
	inline int32_t* get_address_of_IgnoreWidth_8() { return &___IgnoreWidth_8; }
	inline void set_IgnoreWidth_8(int32_t value)
	{
		___IgnoreWidth_8 = value;
	}

	inline static int32_t get_offset_of_Null_9() { return static_cast<int32_t>(offsetof(SqlString_t1056924696_StaticFields, ___Null_9)); }
	inline SqlString_t1056924696  get_Null_9() const { return ___Null_9; }
	inline SqlString_t1056924696 * get_address_of_Null_9() { return &___Null_9; }
	inline void set_Null_9(SqlString_t1056924696  value)
	{
		___Null_9 = value;
	}

	inline static int32_t get_offset_of_DecimalFormat_10() { return static_cast<int32_t>(offsetof(SqlString_t1056924696_StaticFields, ___DecimalFormat_10)); }
	inline NumberFormatInfo_t641628636 * get_DecimalFormat_10() const { return ___DecimalFormat_10; }
	inline NumberFormatInfo_t641628636 ** get_address_of_DecimalFormat_10() { return &___DecimalFormat_10; }
	inline void set_DecimalFormat_10(NumberFormatInfo_t641628636 * value)
	{
		___DecimalFormat_10 = value;
		Il2CppCodeGenWriteBarrier((&___DecimalFormat_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlString
struct SqlString_t1056924696_marshaled_pinvoke
{
	char* ___value_0;
	int32_t ___notNull_1;
	int32_t ___lcid_2;
	int32_t ___compareOptions_3;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlString
struct SqlString_t1056924696_marshaled_com
{
	Il2CppChar* ___value_0;
	int32_t ___notNull_1;
	int32_t ___lcid_2;
	int32_t ___compareOptions_3;
};
#endif // SQLSTRING_T1056924696_H
#ifndef SQLTRUNCATEEXCEPTION_T2920985823_H
#define SQLTRUNCATEEXCEPTION_T2920985823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlTruncateException
struct  SqlTruncateException_t2920985823  : public SqlTypeException_t2721010012
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLTRUNCATEEXCEPTION_T2920985823_H
#ifndef DATACOLUMN_T4119188540_H
#define DATACOLUMN_T4119188540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumn
struct  DataColumn_t4119188540  : public MarshalByValueComponent_t2238373968
{
public:
	// System.ComponentModel.EventHandlerList System.Data.DataColumn::_eventHandlers
	EventHandlerList_t2096071630 * ____eventHandlers_3;
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
	PropertyCollection_t3380870831 * ____extendedProperties_16;
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
	DataTable_t168666095 * ____table_22;
	// System.Boolean System.Data.DataColumn::_unique
	bool ____unique_23;
	// System.Data.Common.DataContainer System.Data.DataColumn::_dataContainer
	DataContainer_t3901026517 * ____dataContainer_24;
	// System.Data.DataSetDateTime System.Data.DataColumn::_datetimeMode
	int32_t ____datetimeMode_25;

public:
	inline static int32_t get_offset_of__eventHandlers_3() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540, ____eventHandlers_3)); }
	inline EventHandlerList_t2096071630 * get__eventHandlers_3() const { return ____eventHandlers_3; }
	inline EventHandlerList_t2096071630 ** get_address_of__eventHandlers_3() { return &____eventHandlers_3; }
	inline void set__eventHandlers_3(EventHandlerList_t2096071630 * value)
	{
		____eventHandlers_3 = value;
		Il2CppCodeGenWriteBarrier((&____eventHandlers_3), value);
	}

	inline static int32_t get_offset_of__allowDBNull_5() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540, ____allowDBNull_5)); }
	inline bool get__allowDBNull_5() const { return ____allowDBNull_5; }
	inline bool* get_address_of__allowDBNull_5() { return &____allowDBNull_5; }
	inline void set__allowDBNull_5(bool value)
	{
		____allowDBNull_5 = value;
	}

	inline static int32_t get_offset_of__autoIncrement_6() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540, ____autoIncrement_6)); }
	inline bool get__autoIncrement_6() const { return ____autoIncrement_6; }
	inline bool* get_address_of__autoIncrement_6() { return &____autoIncrement_6; }
	inline void set__autoIncrement_6(bool value)
	{
		____autoIncrement_6 = value;
	}

	inline static int32_t get_offset_of__autoIncrementSeed_7() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540, ____autoIncrementSeed_7)); }
	inline int64_t get__autoIncrementSeed_7() const { return ____autoIncrementSeed_7; }
	inline int64_t* get_address_of__autoIncrementSeed_7() { return &____autoIncrementSeed_7; }
	inline void set__autoIncrementSeed_7(int64_t value)
	{
		____autoIncrementSeed_7 = value;
	}

	inline static int32_t get_offset_of__autoIncrementStep_8() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540, ____autoIncrementStep_8)); }
	inline int64_t get__autoIncrementStep_8() const { return ____autoIncrementStep_8; }
	inline int64_t* get_address_of__autoIncrementStep_8() { return &____autoIncrementStep_8; }
	inline void set__autoIncrementStep_8(int64_t value)
	{
		____autoIncrementStep_8 = value;
	}

	inline static int32_t get_offset_of__nextAutoIncrementValue_9() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540, ____nextAutoIncrementValue_9)); }
	inline int64_t get__nextAutoIncrementValue_9() const { return ____nextAutoIncrementValue_9; }
	inline int64_t* get_address_of__nextAutoIncrementValue_9() { return &____nextAutoIncrementValue_9; }
	inline void set__nextAutoIncrementValue_9(int64_t value)
	{
		____nextAutoIncrementValue_9 = value;
	}

	inline static int32_t get_offset_of__caption_10() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540, ____caption_10)); }
	inline String_t* get__caption_10() const { return ____caption_10; }
	inline String_t** get_address_of__caption_10() { return &____caption_10; }
	inline void set__caption_10(String_t* value)
	{
		____caption_10 = value;
		Il2CppCodeGenWriteBarrier((&____caption_10), value);
	}

	inline static int32_t get_offset_of__columnMapping_11() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540, ____columnMapping_11)); }
	inline int32_t get__columnMapping_11() const { return ____columnMapping_11; }
	inline int32_t* get_address_of__columnMapping_11() { return &____columnMapping_11; }
	inline void set__columnMapping_11(int32_t value)
	{
		____columnMapping_11 = value;
	}

	inline static int32_t get_offset_of__columnName_12() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540, ____columnName_12)); }
	inline String_t* get__columnName_12() const { return ____columnName_12; }
	inline String_t** get_address_of__columnName_12() { return &____columnName_12; }
	inline void set__columnName_12(String_t* value)
	{
		____columnName_12 = value;
		Il2CppCodeGenWriteBarrier((&____columnName_12), value);
	}

	inline static int32_t get_offset_of__defaultValue_13() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540, ____defaultValue_13)); }
	inline RuntimeObject * get__defaultValue_13() const { return ____defaultValue_13; }
	inline RuntimeObject ** get_address_of__defaultValue_13() { return &____defaultValue_13; }
	inline void set__defaultValue_13(RuntimeObject * value)
	{
		____defaultValue_13 = value;
		Il2CppCodeGenWriteBarrier((&____defaultValue_13), value);
	}

	inline static int32_t get_offset_of__expression_14() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540, ____expression_14)); }
	inline String_t* get__expression_14() const { return ____expression_14; }
	inline String_t** get_address_of__expression_14() { return &____expression_14; }
	inline void set__expression_14(String_t* value)
	{
		____expression_14 = value;
		Il2CppCodeGenWriteBarrier((&____expression_14), value);
	}

	inline static int32_t get_offset_of__compiledExpression_15() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540, ____compiledExpression_15)); }
	inline RuntimeObject* get__compiledExpression_15() const { return ____compiledExpression_15; }
	inline RuntimeObject** get_address_of__compiledExpression_15() { return &____compiledExpression_15; }
	inline void set__compiledExpression_15(RuntimeObject* value)
	{
		____compiledExpression_15 = value;
		Il2CppCodeGenWriteBarrier((&____compiledExpression_15), value);
	}

	inline static int32_t get_offset_of__extendedProperties_16() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540, ____extendedProperties_16)); }
	inline PropertyCollection_t3380870831 * get__extendedProperties_16() const { return ____extendedProperties_16; }
	inline PropertyCollection_t3380870831 ** get_address_of__extendedProperties_16() { return &____extendedProperties_16; }
	inline void set__extendedProperties_16(PropertyCollection_t3380870831 * value)
	{
		____extendedProperties_16 = value;
		Il2CppCodeGenWriteBarrier((&____extendedProperties_16), value);
	}

	inline static int32_t get_offset_of__maxLength_17() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540, ____maxLength_17)); }
	inline int32_t get__maxLength_17() const { return ____maxLength_17; }
	inline int32_t* get_address_of__maxLength_17() { return &____maxLength_17; }
	inline void set__maxLength_17(int32_t value)
	{
		____maxLength_17 = value;
	}

	inline static int32_t get_offset_of__nameSpace_18() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540, ____nameSpace_18)); }
	inline String_t* get__nameSpace_18() const { return ____nameSpace_18; }
	inline String_t** get_address_of__nameSpace_18() { return &____nameSpace_18; }
	inline void set__nameSpace_18(String_t* value)
	{
		____nameSpace_18 = value;
		Il2CppCodeGenWriteBarrier((&____nameSpace_18), value);
	}

	inline static int32_t get_offset_of__ordinal_19() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540, ____ordinal_19)); }
	inline int32_t get__ordinal_19() const { return ____ordinal_19; }
	inline int32_t* get_address_of__ordinal_19() { return &____ordinal_19; }
	inline void set__ordinal_19(int32_t value)
	{
		____ordinal_19 = value;
	}

	inline static int32_t get_offset_of__prefix_20() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540, ____prefix_20)); }
	inline String_t* get__prefix_20() const { return ____prefix_20; }
	inline String_t** get_address_of__prefix_20() { return &____prefix_20; }
	inline void set__prefix_20(String_t* value)
	{
		____prefix_20 = value;
		Il2CppCodeGenWriteBarrier((&____prefix_20), value);
	}

	inline static int32_t get_offset_of__readOnly_21() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540, ____readOnly_21)); }
	inline bool get__readOnly_21() const { return ____readOnly_21; }
	inline bool* get_address_of__readOnly_21() { return &____readOnly_21; }
	inline void set__readOnly_21(bool value)
	{
		____readOnly_21 = value;
	}

	inline static int32_t get_offset_of__table_22() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540, ____table_22)); }
	inline DataTable_t168666095 * get__table_22() const { return ____table_22; }
	inline DataTable_t168666095 ** get_address_of__table_22() { return &____table_22; }
	inline void set__table_22(DataTable_t168666095 * value)
	{
		____table_22 = value;
		Il2CppCodeGenWriteBarrier((&____table_22), value);
	}

	inline static int32_t get_offset_of__unique_23() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540, ____unique_23)); }
	inline bool get__unique_23() const { return ____unique_23; }
	inline bool* get_address_of__unique_23() { return &____unique_23; }
	inline void set__unique_23(bool value)
	{
		____unique_23 = value;
	}

	inline static int32_t get_offset_of__dataContainer_24() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540, ____dataContainer_24)); }
	inline DataContainer_t3901026517 * get__dataContainer_24() const { return ____dataContainer_24; }
	inline DataContainer_t3901026517 ** get_address_of__dataContainer_24() { return &____dataContainer_24; }
	inline void set__dataContainer_24(DataContainer_t3901026517 * value)
	{
		____dataContainer_24 = value;
		Il2CppCodeGenWriteBarrier((&____dataContainer_24), value);
	}

	inline static int32_t get_offset_of__datetimeMode_25() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540, ____datetimeMode_25)); }
	inline int32_t get__datetimeMode_25() const { return ____datetimeMode_25; }
	inline int32_t* get_address_of__datetimeMode_25() { return &____datetimeMode_25; }
	inline void set__datetimeMode_25(int32_t value)
	{
		____datetimeMode_25 = value;
	}
};

struct DataColumn_t4119188540_StaticFields
{
public:
	// System.Object System.Data.DataColumn::_propertyChangedKey
	RuntimeObject * ____propertyChangedKey_4;

public:
	inline static int32_t get_offset_of__propertyChangedKey_4() { return static_cast<int32_t>(offsetof(DataColumn_t4119188540_StaticFields, ____propertyChangedKey_4)); }
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
#endif // DATACOLUMN_T4119188540_H
#ifndef LENFUNCTION_T923522571_H
#define LENFUNCTION_T923522571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.LenFunction
struct  LenFunction_t923522571  : public StringFunction_t502340972
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LENFUNCTION_T923522571_H
#ifndef COMPARISON_T2856718847_H
#define COMPARISON_T2856718847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.Comparison
struct  Comparison_t2856718847  : public BinaryOpExpression_t3064155083
{
public:

public:
};

struct Comparison_t2856718847_StaticFields
{
public:
	// System.Char[] Mono.Data.SqlExpressions.Comparison::IgnoredTrailingChars
	CharU5BU5D_t52468358* ___IgnoredTrailingChars_3;

public:
	inline static int32_t get_offset_of_IgnoredTrailingChars_3() { return static_cast<int32_t>(offsetof(Comparison_t2856718847_StaticFields, ___IgnoredTrailingChars_3)); }
	inline CharU5BU5D_t52468358* get_IgnoredTrailingChars_3() const { return ___IgnoredTrailingChars_3; }
	inline CharU5BU5D_t52468358** get_address_of_IgnoredTrailingChars_3() { return &___IgnoredTrailingChars_3; }
	inline void set_IgnoredTrailingChars_3(CharU5BU5D_t52468358* value)
	{
		___IgnoredTrailingChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___IgnoredTrailingChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_T2856718847_H
#ifndef SQLDATETIME_T15934454_H
#define SQLDATETIME_T15934454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlDateTime
struct  SqlDateTime_t15934454 
{
public:
	// System.DateTime System.Data.SqlTypes.SqlDateTime::value
	DateTime_t2690699335  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlDateTime::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlDateTime_t15934454, ___value_0)); }
	inline DateTime_t2690699335  get_value_0() const { return ___value_0; }
	inline DateTime_t2690699335 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t2690699335  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlDateTime_t15934454, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlDateTime_t15934454_StaticFields
{
public:
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::MaxValue
	SqlDateTime_t15934454  ___MaxValue_2;
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::MinValue
	SqlDateTime_t15934454  ___MinValue_3;
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::Null
	SqlDateTime_t15934454  ___Null_4;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerHour
	int32_t ___SQLTicksPerHour_5;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerMinute
	int32_t ___SQLTicksPerMinute_6;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerSecond
	int32_t ___SQLTicksPerSecond_7;
	// System.DateTime System.Data.SqlTypes.SqlDateTime::zero_day
	DateTime_t2690699335  ___zero_day_8;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlDateTime_t15934454_StaticFields, ___MaxValue_2)); }
	inline SqlDateTime_t15934454  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlDateTime_t15934454 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlDateTime_t15934454  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlDateTime_t15934454_StaticFields, ___MinValue_3)); }
	inline SqlDateTime_t15934454  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlDateTime_t15934454 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlDateTime_t15934454  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlDateTime_t15934454_StaticFields, ___Null_4)); }
	inline SqlDateTime_t15934454  get_Null_4() const { return ___Null_4; }
	inline SqlDateTime_t15934454 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlDateTime_t15934454  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerHour_5() { return static_cast<int32_t>(offsetof(SqlDateTime_t15934454_StaticFields, ___SQLTicksPerHour_5)); }
	inline int32_t get_SQLTicksPerHour_5() const { return ___SQLTicksPerHour_5; }
	inline int32_t* get_address_of_SQLTicksPerHour_5() { return &___SQLTicksPerHour_5; }
	inline void set_SQLTicksPerHour_5(int32_t value)
	{
		___SQLTicksPerHour_5 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerMinute_6() { return static_cast<int32_t>(offsetof(SqlDateTime_t15934454_StaticFields, ___SQLTicksPerMinute_6)); }
	inline int32_t get_SQLTicksPerMinute_6() const { return ___SQLTicksPerMinute_6; }
	inline int32_t* get_address_of_SQLTicksPerMinute_6() { return &___SQLTicksPerMinute_6; }
	inline void set_SQLTicksPerMinute_6(int32_t value)
	{
		___SQLTicksPerMinute_6 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerSecond_7() { return static_cast<int32_t>(offsetof(SqlDateTime_t15934454_StaticFields, ___SQLTicksPerSecond_7)); }
	inline int32_t get_SQLTicksPerSecond_7() const { return ___SQLTicksPerSecond_7; }
	inline int32_t* get_address_of_SQLTicksPerSecond_7() { return &___SQLTicksPerSecond_7; }
	inline void set_SQLTicksPerSecond_7(int32_t value)
	{
		___SQLTicksPerSecond_7 = value;
	}

	inline static int32_t get_offset_of_zero_day_8() { return static_cast<int32_t>(offsetof(SqlDateTime_t15934454_StaticFields, ___zero_day_8)); }
	inline DateTime_t2690699335  get_zero_day_8() const { return ___zero_day_8; }
	inline DateTime_t2690699335 * get_address_of_zero_day_8() { return &___zero_day_8; }
	inline void set_zero_day_8(DateTime_t2690699335  value)
	{
		___zero_day_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDateTime
struct SqlDateTime_t15934454_marshaled_pinvoke
{
	DateTime_t2690699335  ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDateTime
struct SqlDateTime_t15934454_marshaled_com
{
	DateTime_t2690699335  ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLDATETIME_T15934454_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2800 = { sizeof (ReferencedTable_t3168711824)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2800[4] = 
{
	ReferencedTable_t3168711824::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2801 = { sizeof (ColumnReference_t1039697959), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2801[5] = 
{
	ColumnReference_t1039697959::get_offset_of_refTable_0(),
	ColumnReference_t1039697959::get_offset_of_relationName_1(),
	ColumnReference_t1039697959::get_offset_of_columnName_2(),
	ColumnReference_t1039697959::get_offset_of__cachedColumn_3(),
	ColumnReference_t1039697959::get_offset_of__cachedRelation_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2802 = { sizeof (Comparison_t2856718847), -1, sizeof(Comparison_t2856718847_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2802[1] = 
{
	Comparison_t2856718847_StaticFields::get_offset_of_IgnoredTrailingChars_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2803 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2804 = { sizeof (BaseExpression_t278409257), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2805 = { sizeof (UnaryExpression_t1348685487), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2805[1] = 
{
	UnaryExpression_t1348685487::get_offset_of_expr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2806 = { sizeof (BinaryExpression_t2677845598), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2806[2] = 
{
	BinaryExpression_t2677845598::get_offset_of_expr1_0(),
	BinaryExpression_t2677845598::get_offset_of_expr2_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2807 = { sizeof (Operation_t1749525387)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2807[14] = 
{
	Operation_t1749525387::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2808 = { sizeof (BinaryOpExpression_t3064155083), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2808[1] = 
{
	BinaryOpExpression_t3064155083::get_offset_of_op_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2809 = { sizeof (IifFunction_t919622408), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2809[2] = 
{
	IifFunction_t919622408::get_offset_of_trueExpr_1(),
	IifFunction_t919622408::get_offset_of_falseExpr_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2810 = { sizeof (IsNullFunction_t4061123635), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2810[1] = 
{
	IsNullFunction_t4061123635::get_offset_of_defaultExpr_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2811 = { sizeof (ConvertFunction_t2404818101), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2811[1] = 
{
	ConvertFunction_t2404818101::get_offset_of_targetType_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2812 = { sizeof (In_t3271301122), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2812[1] = 
{
	In_t3271301122::get_offset_of_set_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2813 = { sizeof (Like_t1632909363), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2813[1] = 
{
	Like_t1632909363::get_offset_of__pattern_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2814 = { sizeof (Literal_t81928004), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2814[1] = 
{
	Literal_t81928004::get_offset_of_val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2815 = { sizeof (Numeric_t2754890094), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2816 = { sizeof (StringFunction_t502340972), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2817 = { sizeof (ConcatFunction_t2311961794), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2817[1] = 
{
	ConcatFunction_t2311961794::get_offset_of__add_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2818 = { sizeof (SubstringFunction_t713133104), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2818[2] = 
{
	SubstringFunction_t713133104::get_offset_of_start_1(),
	SubstringFunction_t713133104::get_offset_of_len_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2819 = { sizeof (LenFunction_t923522571), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2820 = { sizeof (TrimFunction_t41491268), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2821 = { sizeof (Tokenizer_t265589161), -1, sizeof(Tokenizer_t265589161_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2821[6] = 
{
	Tokenizer_t265589161_StaticFields::get_offset_of_tokenMap_0(),
	Tokenizer_t265589161_StaticFields::get_offset_of_tokens_1(),
	Tokenizer_t265589161::get_offset_of_input_2(),
	Tokenizer_t265589161::get_offset_of_pos_3(),
	Tokenizer_t265589161::get_offset_of_tok_4(),
	Tokenizer_t265589161::get_offset_of_val_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2822 = { sizeof (DataAdapter_t3612032214), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2822[1] = 
{
	DataAdapter_t3612032214::get_offset_of_tableMappings_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2823 = { sizeof (DataColumnMapping_t1346157783), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2823[2] = 
{
	DataColumnMapping_t1346157783::get_offset_of_sourceColumn_1(),
	DataColumnMapping_t1346157783::get_offset_of_dataSetColumn_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2824 = { sizeof (DataColumnMappingCollection_t822547184), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2824[3] = 
{
	DataColumnMappingCollection_t822547184::get_offset_of_list_1(),
	DataColumnMappingCollection_t822547184::get_offset_of_sourceColumns_2(),
	DataColumnMappingCollection_t822547184::get_offset_of_dataSetColumns_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2825 = { sizeof (DataContainer_t3901026517), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2825[3] = 
{
	DataContainer_t3901026517::get_offset_of_null_values_0(),
	DataContainer_t3901026517::get_offset_of__type_1(),
	DataContainer_t3901026517::get_offset_of__column_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2826 = { sizeof (BitDataContainer_t1233599451), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2826[1] = 
{
	BitDataContainer_t1233599451::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2827 = { sizeof (CharDataContainer_t3202311924), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2827[1] = 
{
	CharDataContainer_t3202311924::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2828 = { sizeof (ByteDataContainer_t924525391), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2828[1] = 
{
	ByteDataContainer_t924525391::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2829 = { sizeof (SByteDataContainer_t2483184676), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2829[1] = 
{
	SByteDataContainer_t2483184676::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2830 = { sizeof (Int16DataContainer_t1737933968), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2830[1] = 
{
	Int16DataContainer_t1737933968::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2831 = { sizeof (UInt16DataContainer_t2634730604), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2831[1] = 
{
	UInt16DataContainer_t2634730604::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2832 = { sizeof (Int32DataContainer_t2979488455), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2832[1] = 
{
	Int32DataContainer_t2979488455::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2833 = { sizeof (UInt32DataContainer_t291105656), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2833[1] = 
{
	UInt32DataContainer_t291105656::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2834 = { sizeof (Int64DataContainer_t1317311898), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2834[1] = 
{
	Int64DataContainer_t1317311898::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2835 = { sizeof (UInt64DataContainer_t3144989489), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2835[1] = 
{
	UInt64DataContainer_t3144989489::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2836 = { sizeof (SingleDataContainer_t3344172609), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2836[1] = 
{
	SingleDataContainer_t3344172609::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2837 = { sizeof (DoubleDataContainer_t3674409810), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2837[1] = 
{
	DoubleDataContainer_t3674409810::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2838 = { sizeof (ObjectDataContainer_t67022101), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2838[1] = 
{
	ObjectDataContainer_t67022101::get_offset_of__values_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2839 = { sizeof (DateTimeDataContainer_t272337683), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2840 = { sizeof (DecimalDataContainer_t314530191), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2841 = { sizeof (StringDataContainer_t3494841369), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2842 = { sizeof (DataTableMapping_t647878141), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2842[3] = 
{
	DataTableMapping_t647878141::get_offset_of_sourceTable_1(),
	DataTableMapping_t647878141::get_offset_of_dataSetTable_2(),
	DataTableMapping_t647878141::get_offset_of_columnMappings_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2843 = { sizeof (DataTableMappingCollection_t2254394270), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2843[3] = 
{
	DataTableMappingCollection_t2254394270::get_offset_of_mappings_1(),
	DataTableMappingCollection_t2254394270::get_offset_of_sourceTables_2(),
	DataTableMappingCollection_t2254394270::get_offset_of_dataSetTables_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2844 = { sizeof (DbCommand_t2216824801), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2845 = { sizeof (DbConnection_t483962279), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2846 = { sizeof (DbDataAdapter_t3958335031), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2846[4] = 
{
	DbDataAdapter_t3958335031::get_offset_of__selectCommand_5(),
	DbDataAdapter_t3958335031::get_offset_of__updateCommand_6(),
	DbDataAdapter_t3958335031::get_offset_of__deleteCommand_7(),
	DbDataAdapter_t3958335031::get_offset_of__insertCommand_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2847 = { sizeof (DbDataRecord_t1334473479), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2848 = { sizeof (DbParameter_t3940582048), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2849 = { sizeof (DbParameterCollection_t648823250), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2850 = { sizeof (DbProviderFactory_t807457549), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2851 = { sizeof (DbTypes_t4093268175), -1, sizeof(DbTypes_t4093268175_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2851[21] = 
{
	DbTypes_t4093268175_StaticFields::get_offset_of_TypeOfBoolean_0(),
	DbTypes_t4093268175_StaticFields::get_offset_of_TypeOfSByte_1(),
	DbTypes_t4093268175_StaticFields::get_offset_of_TypeOfChar_2(),
	DbTypes_t4093268175_StaticFields::get_offset_of_TypeOfInt16_3(),
	DbTypes_t4093268175_StaticFields::get_offset_of_TypeOfInt32_4(),
	DbTypes_t4093268175_StaticFields::get_offset_of_TypeOfInt64_5(),
	DbTypes_t4093268175_StaticFields::get_offset_of_TypeOfByte_6(),
	DbTypes_t4093268175_StaticFields::get_offset_of_TypeOfUInt16_7(),
	DbTypes_t4093268175_StaticFields::get_offset_of_TypeOfUInt32_8(),
	DbTypes_t4093268175_StaticFields::get_offset_of_TypeOfUInt64_9(),
	DbTypes_t4093268175_StaticFields::get_offset_of_TypeOfDouble_10(),
	DbTypes_t4093268175_StaticFields::get_offset_of_TypeOfSingle_11(),
	DbTypes_t4093268175_StaticFields::get_offset_of_TypeOfDecimal_12(),
	DbTypes_t4093268175_StaticFields::get_offset_of_TypeOfString_13(),
	DbTypes_t4093268175_StaticFields::get_offset_of_TypeOfDateTime_14(),
	DbTypes_t4093268175_StaticFields::get_offset_of_TypeOfObject_15(),
	DbTypes_t4093268175_StaticFields::get_offset_of_TypeOfGuid_16(),
	DbTypes_t4093268175_StaticFields::get_offset_of_TypeOfType_17(),
	DbTypes_t4093268175_StaticFields::get_offset_of_TypeOfByteArray_18(),
	DbTypes_t4093268175_StaticFields::get_offset_of_TypeOfFloat_19(),
	DbTypes_t4093268175_StaticFields::get_offset_of_TypeOfTimespan_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2852 = { sizeof (Index_t473838862), -1, sizeof(Index_t473838862_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2852[7] = 
{
	Index_t473838862_StaticFields::get_offset_of_empty_0(),
	Index_t473838862::get_offset_of__array_1(),
	Index_t473838862::get_offset_of__size_2(),
	Index_t473838862::get_offset_of__key_3(),
	Index_t473838862::get_offset_of__refCount_4(),
	Index_t473838862::get_offset_of_know_have_duplicates_5(),
	Index_t473838862::get_offset_of_know_no_duplicates_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2853 = { sizeof (Key_t2145850626), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2853[6] = 
{
	Key_t2145850626::get_offset_of__table_0(),
	Key_t2145850626::get_offset_of__columns_1(),
	Key_t2145850626::get_offset_of__sortDirection_2(),
	Key_t2145850626::get_offset_of__rowStateFilter_3(),
	Key_t2145850626::get_offset_of__filter_4(),
	Key_t2145850626::get_offset_of__tmpRow_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2854 = { sizeof (RecordCache_t1150675034), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2854[5] = 
{
	RecordCache_t1150675034::get_offset_of__records_0(),
	RecordCache_t1150675034::get_offset_of__nextFreeIndex_1(),
	RecordCache_t1150675034::get_offset_of__currentCapacity_2(),
	RecordCache_t1150675034::get_offset_of__table_3(),
	RecordCache_t1150675034::get_offset_of__rowsToRecords_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2855 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2856 = { sizeof (SqlBinary_t931723275)+ sizeof (RuntimeObject), sizeof(SqlBinary_t931723275_marshaled_pinvoke), sizeof(SqlBinary_t931723275_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2856[3] = 
{
	SqlBinary_t931723275::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBinary_t931723275::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBinary_t931723275_StaticFields::get_offset_of_Null_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2857 = { sizeof (SqlBoolean_t1375703340)+ sizeof (RuntimeObject), sizeof(SqlBoolean_t1375703340_marshaled_pinvoke), sizeof(SqlBoolean_t1375703340_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2857[7] = 
{
	SqlBoolean_t1375703340::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBoolean_t1375703340::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBoolean_t1375703340_StaticFields::get_offset_of_False_2(),
	SqlBoolean_t1375703340_StaticFields::get_offset_of_Null_3(),
	SqlBoolean_t1375703340_StaticFields::get_offset_of_One_4(),
	SqlBoolean_t1375703340_StaticFields::get_offset_of_True_5(),
	SqlBoolean_t1375703340_StaticFields::get_offset_of_Zero_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2858 = { sizeof (SqlByte_t2197509168)+ sizeof (RuntimeObject), sizeof(SqlByte_t2197509168_marshaled_pinvoke), sizeof(SqlByte_t2197509168_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2858[6] = 
{
	SqlByte_t2197509168::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlByte_t2197509168::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlByte_t2197509168_StaticFields::get_offset_of_MaxValue_2(),
	SqlByte_t2197509168_StaticFields::get_offset_of_MinValue_3(),
	SqlByte_t2197509168_StaticFields::get_offset_of_Null_4(),
	SqlByte_t2197509168_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2859 = { sizeof (SqlBytes_t3787212004), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2859[3] = 
{
	SqlBytes_t3787212004::get_offset_of_notNull_0(),
	SqlBytes_t3787212004::get_offset_of_buffer_1(),
	SqlBytes_t3787212004::get_offset_of_storage_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2860 = { sizeof (SqlChars_t2078742121), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2860[3] = 
{
	SqlChars_t2078742121::get_offset_of_notNull_0(),
	SqlChars_t2078742121::get_offset_of_buffer_1(),
	SqlChars_t2078742121::get_offset_of_storage_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2861 = { sizeof (SqlCompareOptions_t520896826)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2861[7] = 
{
	SqlCompareOptions_t520896826::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2862 = { sizeof (SqlDateTime_t15934454)+ sizeof (RuntimeObject), -1, sizeof(SqlDateTime_t15934454_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2862[9] = 
{
	SqlDateTime_t15934454::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDateTime_t15934454::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDateTime_t15934454_StaticFields::get_offset_of_MaxValue_2(),
	SqlDateTime_t15934454_StaticFields::get_offset_of_MinValue_3(),
	SqlDateTime_t15934454_StaticFields::get_offset_of_Null_4(),
	SqlDateTime_t15934454_StaticFields::get_offset_of_SQLTicksPerHour_5(),
	SqlDateTime_t15934454_StaticFields::get_offset_of_SQLTicksPerMinute_6(),
	SqlDateTime_t15934454_StaticFields::get_offset_of_SQLTicksPerSecond_7(),
	SqlDateTime_t15934454_StaticFields::get_offset_of_zero_day_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2863 = { sizeof (SqlDecimal_t123739225)+ sizeof (RuntimeObject), sizeof(SqlDecimal_t123739225_marshaled_pinvoke), sizeof(SqlDecimal_t123739225_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2863[11] = 
{
	SqlDecimal_t123739225::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t123739225::get_offset_of_precision_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t123739225::get_offset_of_scale_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t123739225::get_offset_of_positive_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t123739225::get_offset_of_notNull_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t123739225_StaticFields::get_offset_of_constantsDecadeInt32Factors_5(),
	SqlDecimal_t123739225_StaticFields::get_offset_of_MaxPrecision_6(),
	SqlDecimal_t123739225_StaticFields::get_offset_of_MaxScale_7(),
	SqlDecimal_t123739225_StaticFields::get_offset_of_MaxValue_8(),
	SqlDecimal_t123739225_StaticFields::get_offset_of_MinValue_9(),
	SqlDecimal_t123739225_StaticFields::get_offset_of_Null_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2864 = { sizeof (SqlDouble_t1377277590)+ sizeof (RuntimeObject), sizeof(SqlDouble_t1377277590_marshaled_pinvoke), sizeof(SqlDouble_t1377277590_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2864[6] = 
{
	SqlDouble_t1377277590::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDouble_t1377277590::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDouble_t1377277590_StaticFields::get_offset_of_MaxValue_2(),
	SqlDouble_t1377277590_StaticFields::get_offset_of_MinValue_3(),
	SqlDouble_t1377277590_StaticFields::get_offset_of_Null_4(),
	SqlDouble_t1377277590_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2865 = { sizeof (SqlGuid_t994896636)+ sizeof (RuntimeObject), sizeof(SqlGuid_t994896636_marshaled_pinvoke), sizeof(SqlGuid_t994896636_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2865[3] = 
{
	SqlGuid_t994896636::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlGuid_t994896636::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlGuid_t994896636_StaticFields::get_offset_of_Null_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2866 = { sizeof (SqlInt16_t3580813485)+ sizeof (RuntimeObject), sizeof(SqlInt16_t3580813485_marshaled_pinvoke), sizeof(SqlInt16_t3580813485_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2866[6] = 
{
	SqlInt16_t3580813485::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt16_t3580813485::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt16_t3580813485_StaticFields::get_offset_of_MaxValue_2(),
	SqlInt16_t3580813485_StaticFields::get_offset_of_MinValue_3(),
	SqlInt16_t3580813485_StaticFields::get_offset_of_Null_4(),
	SqlInt16_t3580813485_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2867 = { sizeof (SqlInt32_t1536397096)+ sizeof (RuntimeObject), sizeof(SqlInt32_t1536397096_marshaled_pinvoke), sizeof(SqlInt32_t1536397096_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2867[6] = 
{
	SqlInt32_t1536397096::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt32_t1536397096::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt32_t1536397096_StaticFields::get_offset_of_MaxValue_2(),
	SqlInt32_t1536397096_StaticFields::get_offset_of_MinValue_3(),
	SqlInt32_t1536397096_StaticFields::get_offset_of_Null_4(),
	SqlInt32_t1536397096_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2868 = { sizeof (SqlInt64_t3813632183)+ sizeof (RuntimeObject), sizeof(SqlInt64_t3813632183_marshaled_pinvoke), sizeof(SqlInt64_t3813632183_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2868[6] = 
{
	SqlInt64_t3813632183::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt64_t3813632183::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt64_t3813632183_StaticFields::get_offset_of_MaxValue_2(),
	SqlInt64_t3813632183_StaticFields::get_offset_of_MinValue_3(),
	SqlInt64_t3813632183_StaticFields::get_offset_of_Null_4(),
	SqlInt64_t3813632183_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2869 = { sizeof (SqlMoney_t1341691440)+ sizeof (RuntimeObject), sizeof(SqlMoney_t1341691440_marshaled_pinvoke), sizeof(SqlMoney_t1341691440_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2869[7] = 
{
	SqlMoney_t1341691440::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlMoney_t1341691440::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlMoney_t1341691440_StaticFields::get_offset_of_MaxValue_2(),
	SqlMoney_t1341691440_StaticFields::get_offset_of_MinValue_3(),
	SqlMoney_t1341691440_StaticFields::get_offset_of_Null_4(),
	SqlMoney_t1341691440_StaticFields::get_offset_of_Zero_5(),
	SqlMoney_t1341691440_StaticFields::get_offset_of_MoneyFormat_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2870 = { sizeof (SqlNullValueException_t2031172554), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2871 = { sizeof (SqlSingle_t1597424872)+ sizeof (RuntimeObject), sizeof(SqlSingle_t1597424872_marshaled_pinvoke), sizeof(SqlSingle_t1597424872_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2871[6] = 
{
	SqlSingle_t1597424872::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlSingle_t1597424872::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlSingle_t1597424872_StaticFields::get_offset_of_MaxValue_2(),
	SqlSingle_t1597424872_StaticFields::get_offset_of_MinValue_3(),
	SqlSingle_t1597424872_StaticFields::get_offset_of_Null_4(),
	SqlSingle_t1597424872_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2872 = { sizeof (SqlString_t1056924696)+ sizeof (RuntimeObject), sizeof(SqlString_t1056924696_marshaled_pinvoke), sizeof(SqlString_t1056924696_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2872[11] = 
{
	SqlString_t1056924696::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t1056924696::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t1056924696::get_offset_of_lcid_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t1056924696::get_offset_of_compareOptions_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t1056924696_StaticFields::get_offset_of_BinarySort_4(),
	SqlString_t1056924696_StaticFields::get_offset_of_IgnoreCase_5(),
	SqlString_t1056924696_StaticFields::get_offset_of_IgnoreKanaType_6(),
	SqlString_t1056924696_StaticFields::get_offset_of_IgnoreNonSpace_7(),
	SqlString_t1056924696_StaticFields::get_offset_of_IgnoreWidth_8(),
	SqlString_t1056924696_StaticFields::get_offset_of_Null_9(),
	SqlString_t1056924696_StaticFields::get_offset_of_DecimalFormat_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2873 = { sizeof (SqlTruncateException_t2920985823), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2874 = { sizeof (SqlTypeException_t2721010012), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2875 = { sizeof (SqlXml_t2647999563), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2875[2] = 
{
	SqlXml_t2647999563::get_offset_of_notNull_0(),
	SqlXml_t2647999563::get_offset_of_xmlValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2876 = { sizeof (StorageState_t1609131926)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2876[4] = 
{
	StorageState_t1609131926::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2877 = { sizeof (AcceptRejectRule_t3239091683)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2877[3] = 
{
	AcceptRejectRule_t3239091683::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2878 = { sizeof (ColumnTypeConverter_t831589478), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2879 = { sizeof (CommandType_t3975917981)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2879[4] = 
{
	CommandType_t3975917981::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2880 = { sizeof (Constraint_t633203400), -1, sizeof(Constraint_t633203400_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2880[8] = 
{
	Constraint_t633203400_StaticFields::get_offset_of_beforeConstraintNameChange_0(),
	Constraint_t633203400::get_offset_of_events_1(),
	Constraint_t633203400::get_offset_of__constraintName_2(),
	Constraint_t633203400::get_offset_of__properties_3(),
	Constraint_t633203400::get_offset_of__index_4(),
	Constraint_t633203400::get_offset_of__constraintCollection_5(),
	Constraint_t633203400::get_offset_of_dataSet_6(),
	Constraint_t633203400::get_offset_of_initInProgress_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2881 = { sizeof (ConstraintCollection_t1054117791), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2881[3] = 
{
	ConstraintCollection_t1054117791::get_offset_of_table_2(),
	ConstraintCollection_t1054117791::get_offset_of__mostRecentConstraints_3(),
	ConstraintCollection_t1054117791::get_offset_of_CollectionChanged_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2882 = { sizeof (ConstraintConverter_t1747567165), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2883 = { sizeof (ConstraintException_t4283754268), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2884 = { sizeof (DataCategoryAttribute_t3066291168), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2885 = { sizeof (DataColumn_t4119188540), -1, sizeof(DataColumn_t4119188540_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2885[23] = 
{
	DataColumn_t4119188540::get_offset_of__eventHandlers_3(),
	DataColumn_t4119188540_StaticFields::get_offset_of__propertyChangedKey_4(),
	DataColumn_t4119188540::get_offset_of__allowDBNull_5(),
	DataColumn_t4119188540::get_offset_of__autoIncrement_6(),
	DataColumn_t4119188540::get_offset_of__autoIncrementSeed_7(),
	DataColumn_t4119188540::get_offset_of__autoIncrementStep_8(),
	DataColumn_t4119188540::get_offset_of__nextAutoIncrementValue_9(),
	DataColumn_t4119188540::get_offset_of__caption_10(),
	DataColumn_t4119188540::get_offset_of__columnMapping_11(),
	DataColumn_t4119188540::get_offset_of__columnName_12(),
	DataColumn_t4119188540::get_offset_of__defaultValue_13(),
	DataColumn_t4119188540::get_offset_of__expression_14(),
	DataColumn_t4119188540::get_offset_of__compiledExpression_15(),
	DataColumn_t4119188540::get_offset_of__extendedProperties_16(),
	DataColumn_t4119188540::get_offset_of__maxLength_17(),
	DataColumn_t4119188540::get_offset_of__nameSpace_18(),
	DataColumn_t4119188540::get_offset_of__ordinal_19(),
	DataColumn_t4119188540::get_offset_of__prefix_20(),
	DataColumn_t4119188540::get_offset_of__readOnly_21(),
	DataColumn_t4119188540::get_offset_of__table_22(),
	DataColumn_t4119188540::get_offset_of__unique_23(),
	DataColumn_t4119188540::get_offset_of__dataContainer_24(),
	DataColumn_t4119188540::get_offset_of__datetimeMode_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2886 = { sizeof (DataColumnChangeEventArgs_t3358949532), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2886[3] = 
{
	DataColumnChangeEventArgs_t3358949532::get_offset_of__column_1(),
	DataColumnChangeEventArgs_t3358949532::get_offset_of__row_2(),
	DataColumnChangeEventArgs_t3358949532::get_offset_of__proposedValue_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2887 = { sizeof (Doublet_t148389317), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2887[2] = 
{
	Doublet_t148389317::get_offset_of_count_0(),
	Doublet_t148389317::get_offset_of_columnNames_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2888 = { sizeof (DataColumnCollection_t580795536), -1, sizeof(DataColumnCollection_t580795536_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2888[10] = 
{
	DataColumnCollection_t580795536::get_offset_of_columnNameCount_2(),
	DataColumnCollection_t580795536::get_offset_of_columnFromName_3(),
	DataColumnCollection_t580795536::get_offset_of_autoIncrement_4(),
	DataColumnCollection_t580795536::get_offset_of_defaultColumnIndex_5(),
	DataColumnCollection_t580795536::get_offset_of_parentTable_6(),
	DataColumnCollection_t580795536::get_offset_of__mostRecentColumns_7(),
	DataColumnCollection_t580795536_StaticFields::get_offset_of_ColumnPrefix_8(),
	DataColumnCollection_t580795536_StaticFields::get_offset_of_TenColumns_9(),
	DataColumnCollection_t580795536::get_offset_of_CollectionChanged_10(),
	DataColumnCollection_t580795536::get_offset_of_CollectionMetaDataChanged_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2889 = { sizeof (DataColumnPropertyDescriptor_t2343717365), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2889[5] = 
{
	DataColumnPropertyDescriptor_t2343717365::get_offset_of_readOnly_6(),
	DataColumnPropertyDescriptor_t2343717365::get_offset_of_componentType_7(),
	DataColumnPropertyDescriptor_t2343717365::get_offset_of_propertyType_8(),
	DataColumnPropertyDescriptor_t2343717365::get_offset_of_browsable_9(),
	DataColumnPropertyDescriptor_t2343717365::get_offset_of_columnIndex_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2890 = { sizeof (DataException_t1958642054), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2891 = { sizeof (DataRelation_t4097826169), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2891[19] = 
{
	DataRelation_t4097826169::get_offset_of_dataSet_0(),
	DataRelation_t4097826169::get_offset_of_relationName_1(),
	DataRelation_t4097826169::get_offset_of_parentKeyConstraint_2(),
	DataRelation_t4097826169::get_offset_of_childKeyConstraint_3(),
	DataRelation_t4097826169::get_offset_of_parentColumns_4(),
	DataRelation_t4097826169::get_offset_of_childColumns_5(),
	DataRelation_t4097826169::get_offset_of_nested_6(),
	DataRelation_t4097826169::get_offset_of_createConstraints_7(),
	DataRelation_t4097826169::get_offset_of_initFinished_8(),
	DataRelation_t4097826169::get_offset_of_extendedProperties_9(),
	DataRelation_t4097826169::get_offset_of__relationName_10(),
	DataRelation_t4097826169::get_offset_of__parentTableName_11(),
	DataRelation_t4097826169::get_offset_of__childTableName_12(),
	DataRelation_t4097826169::get_offset_of__parentColumnNames_13(),
	DataRelation_t4097826169::get_offset_of__childColumnNames_14(),
	DataRelation_t4097826169::get_offset_of__nested_15(),
	DataRelation_t4097826169::get_offset_of_initInProgress_16(),
	DataRelation_t4097826169::get_offset_of__parentTableNameSpace_17(),
	DataRelation_t4097826169::get_offset_of__childTableNameSpace_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2892 = { sizeof (DataRelationCollection_t2080198525), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2892[3] = 
{
	DataRelationCollection_t2080198525::get_offset_of_inTransition_2(),
	DataRelationCollection_t2080198525::get_offset_of_index_3(),
	DataRelationCollection_t2080198525::get_offset_of_CollectionChanged_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2893 = { sizeof (DataSetRelationCollection_t824848074), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2893[2] = 
{
	DataSetRelationCollection_t824848074::get_offset_of_dataSet_5(),
	DataSetRelationCollection_t824848074::get_offset_of_mostRecentRelations_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2894 = { sizeof (DataTableRelationCollection_t1264289065), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2894[1] = 
{
	DataTableRelationCollection_t1264289065::get_offset_of_dataTable_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2895 = { sizeof (DataRelationPropertyDescriptor_t1002787180), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2895[1] = 
{
	DataRelationPropertyDescriptor_t1002787180::get_offset_of__relation_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2896 = { sizeof (DataRow_t154029508), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2896[13] = 
{
	DataRow_t154029508::get_offset_of__table_0(),
	DataRow_t154029508::get_offset_of__original_1(),
	DataRow_t154029508::get_offset_of__current_2(),
	DataRow_t154029508::get_offset_of__proposed_3(),
	DataRow_t154029508::get_offset_of__columnErrors_4(),
	DataRow_t154029508::get_offset_of_rowError_5(),
	DataRow_t154029508::get_offset_of_xmlRowID_6(),
	DataRow_t154029508::get_offset_of__nullConstraintViolation_7(),
	DataRow_t154029508::get_offset_of__nullConstraintMessage_8(),
	DataRow_t154029508::get_offset_of__inChangingEvent_9(),
	DataRow_t154029508::get_offset_of__rowId_10(),
	DataRow_t154029508::get_offset_of__rowChanged_11(),
	DataRow_t154029508::get_offset_of__inExpressionEvaluation_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2897 = { sizeof (DataRowAction_t3636484368)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2897[9] = 
{
	DataRowAction_t3636484368::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2898 = { sizeof (DataRowBuilder_t907103255), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2898[2] = 
{
	DataRowBuilder_t907103255::get_offset_of_table_0(),
	DataRowBuilder_t907103255::get_offset_of__rowId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2899 = { sizeof (DataRowChangeEventArgs_t2265238086), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2899[2] = 
{
	DataRowChangeEventArgs_t2265238086::get_offset_of_row_1(),
	DataRowChangeEventArgs_t2265238086::get_offset_of_action_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
