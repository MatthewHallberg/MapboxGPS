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

// System.Globalization.CultureInfo
struct CultureInfo_t2669610510;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t796945479;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2326238209;
// System.Globalization.TextInfo
struct TextInfo_t1015740494;
// System.String
struct String_t;
// System.Globalization.CompareInfo
struct CompareInfo_t4004371;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t902127716;
// System.Globalization.Calendar
struct Calendar_t2168011545;
// System.Byte[]
struct ByteU5BU5D_t2378657911;
// System.Collections.Hashtable
struct Hashtable_t188184851;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t516645805;
// System.Int32
struct Int32_t3844565088;
// System.Void
struct Void_t3918784447;
// System.Reflection.MethodBase
struct MethodBase_t1717017879;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t1762809324;
// System.String[]
struct StringU5BU5D_t1002137567;
// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t1198303708;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t3788841045;
// System.Int32[]
struct Int32U5BU5D_t1719863841;
// System.Collections.Hashtable/HashKeys
struct HashKeys_t1746839694;
// System.Collections.Hashtable/HashValues
struct HashValues_t4108664002;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t3028027891;
// System.Collections.IComparer
struct IComparer_t820638711;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t214215410;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t898017456;
// System.IO.Stream
struct Stream_t2967449720;
// System.Text.Encoding
struct Encoding_t2463672681;
// System.Text.Decoder
struct Decoder_t685057947;
// System.Char[]
struct CharU5BU5D_t3282355116;
// System.IntPtr[]
struct IntPtrU5BU5D_t271461801;
// System.Collections.IDictionary
struct IDictionary_t1279208843;
// System.Exception
struct Exception_t76254738;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t3072164400;
// System.AsyncCallback
struct AsyncCallback_t1487541470;
// System.Object[]
struct ObjectU5BU5D_t864419831;
// System.Collections.Queue
struct Queue_t1728721708;
// System.Collections.ArrayList
struct ArrayList_t1090370772;
// System.Collections.SortedList/Slot[]
struct SlotU5BU5D_t1208527227;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1040753827;
// System.Collections.SortedList
struct SortedList_t1937438985;
// System.Collections.Stack
struct Stack_t1828224996;
// System.IFormatProvider
struct IFormatProvider_t1318217027;
// System.Text.StringBuilder
struct StringBuilder_t548394584;
// System.IO.TextReader
struct TextReader_t3170198631;
// System.IO.TextWriter
struct TextWriter_t675367350;
// System.Boolean[]
struct BooleanU5BU5D_t2673653913;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2296229153;
// System.EventHandler
struct EventHandler_t2878087027;
// System.IAsyncResult
struct IAsyncResult_t326317600;




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
#ifndef CULTUREINFO_T2669610510_H
#define CULTUREINFO_T2669610510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t2669610510  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t796945479 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2326238209 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t1015740494 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4004371 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t902127716* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t2669610510 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t2168011545 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t2378657911* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___numInfo_14)); }
	inline NumberFormatInfo_t796945479 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t796945479 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t796945479 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2326238209 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2326238209 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2326238209 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___textInfo_16)); }
	inline TextInfo_t1015740494 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t1015740494 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t1015740494 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___compareInfo_26)); }
	inline CompareInfo_t4004371 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t4004371 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t4004371 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t902127716* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t902127716** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t902127716* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___parent_culture_30)); }
	inline CultureInfo_t2669610510 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t2669610510 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t2669610510 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___calendar_32)); }
	inline Calendar_t2168011545 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t2168011545 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t2168011545 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t2378657911* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t2378657911** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t2378657911* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t2669610510_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t2669610510 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t188184851 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t188184851 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t516645805 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t516645805 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t2669610510 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t2669610510 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t2669610510 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t188184851 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t188184851 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t188184851 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t188184851 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t188184851 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t188184851 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t516645805 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t516645805 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t516645805 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t2669610510_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t516645805 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t516645805 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t516645805 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T2669610510_H
#ifndef FILE_T2421248939_H
#define FILE_T2421248939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.File
struct  File_t2421248939  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILE_T2421248939_H
#ifndef STACKFRAME_T3131219505_H
#define STACKFRAME_T3131219505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.StackFrame
struct  StackFrame_t3131219505  : public RuntimeObject
{
public:
	// System.Int32 System.Diagnostics.StackFrame::ilOffset
	int32_t ___ilOffset_1;
	// System.Int32 System.Diagnostics.StackFrame::nativeOffset
	int32_t ___nativeOffset_2;
	// System.Reflection.MethodBase System.Diagnostics.StackFrame::methodBase
	MethodBase_t1717017879 * ___methodBase_3;
	// System.String System.Diagnostics.StackFrame::fileName
	String_t* ___fileName_4;
	// System.Int32 System.Diagnostics.StackFrame::lineNumber
	int32_t ___lineNumber_5;
	// System.Int32 System.Diagnostics.StackFrame::columnNumber
	int32_t ___columnNumber_6;
	// System.String System.Diagnostics.StackFrame::internalMethodName
	String_t* ___internalMethodName_7;

public:
	inline static int32_t get_offset_of_ilOffset_1() { return static_cast<int32_t>(offsetof(StackFrame_t3131219505, ___ilOffset_1)); }
	inline int32_t get_ilOffset_1() const { return ___ilOffset_1; }
	inline int32_t* get_address_of_ilOffset_1() { return &___ilOffset_1; }
	inline void set_ilOffset_1(int32_t value)
	{
		___ilOffset_1 = value;
	}

	inline static int32_t get_offset_of_nativeOffset_2() { return static_cast<int32_t>(offsetof(StackFrame_t3131219505, ___nativeOffset_2)); }
	inline int32_t get_nativeOffset_2() const { return ___nativeOffset_2; }
	inline int32_t* get_address_of_nativeOffset_2() { return &___nativeOffset_2; }
	inline void set_nativeOffset_2(int32_t value)
	{
		___nativeOffset_2 = value;
	}

	inline static int32_t get_offset_of_methodBase_3() { return static_cast<int32_t>(offsetof(StackFrame_t3131219505, ___methodBase_3)); }
	inline MethodBase_t1717017879 * get_methodBase_3() const { return ___methodBase_3; }
	inline MethodBase_t1717017879 ** get_address_of_methodBase_3() { return &___methodBase_3; }
	inline void set_methodBase_3(MethodBase_t1717017879 * value)
	{
		___methodBase_3 = value;
		Il2CppCodeGenWriteBarrier((&___methodBase_3), value);
	}

	inline static int32_t get_offset_of_fileName_4() { return static_cast<int32_t>(offsetof(StackFrame_t3131219505, ___fileName_4)); }
	inline String_t* get_fileName_4() const { return ___fileName_4; }
	inline String_t** get_address_of_fileName_4() { return &___fileName_4; }
	inline void set_fileName_4(String_t* value)
	{
		___fileName_4 = value;
		Il2CppCodeGenWriteBarrier((&___fileName_4), value);
	}

	inline static int32_t get_offset_of_lineNumber_5() { return static_cast<int32_t>(offsetof(StackFrame_t3131219505, ___lineNumber_5)); }
	inline int32_t get_lineNumber_5() const { return ___lineNumber_5; }
	inline int32_t* get_address_of_lineNumber_5() { return &___lineNumber_5; }
	inline void set_lineNumber_5(int32_t value)
	{
		___lineNumber_5 = value;
	}

	inline static int32_t get_offset_of_columnNumber_6() { return static_cast<int32_t>(offsetof(StackFrame_t3131219505, ___columnNumber_6)); }
	inline int32_t get_columnNumber_6() const { return ___columnNumber_6; }
	inline int32_t* get_address_of_columnNumber_6() { return &___columnNumber_6; }
	inline void set_columnNumber_6(int32_t value)
	{
		___columnNumber_6 = value;
	}

	inline static int32_t get_offset_of_internalMethodName_7() { return static_cast<int32_t>(offsetof(StackFrame_t3131219505, ___internalMethodName_7)); }
	inline String_t* get_internalMethodName_7() const { return ___internalMethodName_7; }
	inline String_t** get_address_of_internalMethodName_7() { return &___internalMethodName_7; }
	inline void set_internalMethodName_7(String_t* value)
	{
		___internalMethodName_7 = value;
		Il2CppCodeGenWriteBarrier((&___internalMethodName_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKFRAME_T3131219505_H
#ifndef STACKTRACE_T4174235613_H
#define STACKTRACE_T4174235613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.StackTrace
struct  StackTrace_t4174235613  : public RuntimeObject
{
public:
	// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::frames
	StackFrameU5BU5D_t1762809324* ___frames_1;
	// System.Boolean System.Diagnostics.StackTrace::debug_info
	bool ___debug_info_2;

public:
	inline static int32_t get_offset_of_frames_1() { return static_cast<int32_t>(offsetof(StackTrace_t4174235613, ___frames_1)); }
	inline StackFrameU5BU5D_t1762809324* get_frames_1() const { return ___frames_1; }
	inline StackFrameU5BU5D_t1762809324** get_address_of_frames_1() { return &___frames_1; }
	inline void set_frames_1(StackFrameU5BU5D_t1762809324* value)
	{
		___frames_1 = value;
		Il2CppCodeGenWriteBarrier((&___frames_1), value);
	}

	inline static int32_t get_offset_of_debug_info_2() { return static_cast<int32_t>(offsetof(StackTrace_t4174235613, ___debug_info_2)); }
	inline bool get_debug_info_2() const { return ___debug_info_2; }
	inline bool* get_address_of_debug_info_2() { return &___debug_info_2; }
	inline void set_debug_info_2(bool value)
	{
		___debug_info_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACE_T4174235613_H
#ifndef CALENDAR_T2168011545_H
#define CALENDAR_T2168011545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.Calendar
struct  Calendar_t2168011545  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.Calendar::m_isReadOnly
	bool ___m_isReadOnly_0;
	// System.Int32 System.Globalization.Calendar::twoDigitYearMax
	int32_t ___twoDigitYearMax_1;
	// System.String[] System.Globalization.Calendar::M_AbbrEraNames
	StringU5BU5D_t1002137567* ___M_AbbrEraNames_2;
	// System.String[] System.Globalization.Calendar::M_EraNames
	StringU5BU5D_t1002137567* ___M_EraNames_3;

public:
	inline static int32_t get_offset_of_m_isReadOnly_0() { return static_cast<int32_t>(offsetof(Calendar_t2168011545, ___m_isReadOnly_0)); }
	inline bool get_m_isReadOnly_0() const { return ___m_isReadOnly_0; }
	inline bool* get_address_of_m_isReadOnly_0() { return &___m_isReadOnly_0; }
	inline void set_m_isReadOnly_0(bool value)
	{
		___m_isReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_twoDigitYearMax_1() { return static_cast<int32_t>(offsetof(Calendar_t2168011545, ___twoDigitYearMax_1)); }
	inline int32_t get_twoDigitYearMax_1() const { return ___twoDigitYearMax_1; }
	inline int32_t* get_address_of_twoDigitYearMax_1() { return &___twoDigitYearMax_1; }
	inline void set_twoDigitYearMax_1(int32_t value)
	{
		___twoDigitYearMax_1 = value;
	}

	inline static int32_t get_offset_of_M_AbbrEraNames_2() { return static_cast<int32_t>(offsetof(Calendar_t2168011545, ___M_AbbrEraNames_2)); }
	inline StringU5BU5D_t1002137567* get_M_AbbrEraNames_2() const { return ___M_AbbrEraNames_2; }
	inline StringU5BU5D_t1002137567** get_address_of_M_AbbrEraNames_2() { return &___M_AbbrEraNames_2; }
	inline void set_M_AbbrEraNames_2(StringU5BU5D_t1002137567* value)
	{
		___M_AbbrEraNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___M_AbbrEraNames_2), value);
	}

	inline static int32_t get_offset_of_M_EraNames_3() { return static_cast<int32_t>(offsetof(Calendar_t2168011545, ___M_EraNames_3)); }
	inline StringU5BU5D_t1002137567* get_M_EraNames_3() const { return ___M_EraNames_3; }
	inline StringU5BU5D_t1002137567** get_address_of_M_EraNames_3() { return &___M_EraNames_3; }
	inline void set_M_EraNames_3(StringU5BU5D_t1002137567* value)
	{
		___M_EraNames_3 = value;
		Il2CppCodeGenWriteBarrier((&___M_EraNames_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALENDAR_T2168011545_H
#ifndef CCMATH_T420514786_H
#define CCMATH_T420514786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CCMath
struct  CCMath_t420514786  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CCMATH_T420514786_H
#ifndef CCFIXED_T756559661_H
#define CCFIXED_T756559661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CCFixed
struct  CCFixed_t756559661  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CCFIXED_T756559661_H
#ifndef CCGREGORIANCALENDAR_T3740195573_H
#define CCGREGORIANCALENDAR_T3740195573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CCGregorianCalendar
struct  CCGregorianCalendar_t3740195573  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CCGREGORIANCALENDAR_T3740195573_H
#ifndef COMPAREINFO_T4004371_H
#define COMPAREINFO_T4004371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareInfo
struct  CompareInfo_t4004371  : public RuntimeObject
{
public:
	// System.Int32 System.Globalization.CompareInfo::culture
	int32_t ___culture_1;
	// System.String System.Globalization.CompareInfo::icu_name
	String_t* ___icu_name_2;
	// Mono.Globalization.Unicode.SimpleCollator System.Globalization.CompareInfo::collator
	SimpleCollator_t1198303708 * ___collator_3;

public:
	inline static int32_t get_offset_of_culture_1() { return static_cast<int32_t>(offsetof(CompareInfo_t4004371, ___culture_1)); }
	inline int32_t get_culture_1() const { return ___culture_1; }
	inline int32_t* get_address_of_culture_1() { return &___culture_1; }
	inline void set_culture_1(int32_t value)
	{
		___culture_1 = value;
	}

	inline static int32_t get_offset_of_icu_name_2() { return static_cast<int32_t>(offsetof(CompareInfo_t4004371, ___icu_name_2)); }
	inline String_t* get_icu_name_2() const { return ___icu_name_2; }
	inline String_t** get_address_of_icu_name_2() { return &___icu_name_2; }
	inline void set_icu_name_2(String_t* value)
	{
		___icu_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_2), value);
	}

	inline static int32_t get_offset_of_collator_3() { return static_cast<int32_t>(offsetof(CompareInfo_t4004371, ___collator_3)); }
	inline SimpleCollator_t1198303708 * get_collator_3() const { return ___collator_3; }
	inline SimpleCollator_t1198303708 ** get_address_of_collator_3() { return &___collator_3; }
	inline void set_collator_3(SimpleCollator_t1198303708 * value)
	{
		___collator_3 = value;
		Il2CppCodeGenWriteBarrier((&___collator_3), value);
	}
};

struct CompareInfo_t4004371_StaticFields
{
public:
	// System.Boolean System.Globalization.CompareInfo::useManagedCollation
	bool ___useManagedCollation_0;
	// System.Collections.Hashtable System.Globalization.CompareInfo::collators
	Hashtable_t188184851 * ___collators_4;
	// System.Object System.Globalization.CompareInfo::monitor
	RuntimeObject * ___monitor_5;

public:
	inline static int32_t get_offset_of_useManagedCollation_0() { return static_cast<int32_t>(offsetof(CompareInfo_t4004371_StaticFields, ___useManagedCollation_0)); }
	inline bool get_useManagedCollation_0() const { return ___useManagedCollation_0; }
	inline bool* get_address_of_useManagedCollation_0() { return &___useManagedCollation_0; }
	inline void set_useManagedCollation_0(bool value)
	{
		___useManagedCollation_0 = value;
	}

	inline static int32_t get_offset_of_collators_4() { return static_cast<int32_t>(offsetof(CompareInfo_t4004371_StaticFields, ___collators_4)); }
	inline Hashtable_t188184851 * get_collators_4() const { return ___collators_4; }
	inline Hashtable_t188184851 ** get_address_of_collators_4() { return &___collators_4; }
	inline void set_collators_4(Hashtable_t188184851 * value)
	{
		___collators_4 = value;
		Il2CppCodeGenWriteBarrier((&___collators_4), value);
	}

	inline static int32_t get_offset_of_monitor_5() { return static_cast<int32_t>(offsetof(CompareInfo_t4004371_StaticFields, ___monitor_5)); }
	inline RuntimeObject * get_monitor_5() const { return ___monitor_5; }
	inline RuntimeObject ** get_address_of_monitor_5() { return &___monitor_5; }
	inline void set_monitor_5(RuntimeObject * value)
	{
		___monitor_5 = value;
		Il2CppCodeGenWriteBarrier((&___monitor_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREINFO_T4004371_H
#ifndef TEXTREADER_T3170198631_H
#define TEXTREADER_T3170198631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t3170198631  : public RuntimeObject
{
public:

public:
};

struct TextReader_t3170198631_StaticFields
{
public:
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t3170198631 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(TextReader_t3170198631_StaticFields, ___Null_0)); }
	inline TextReader_t3170198631 * get_Null_0() const { return ___Null_0; }
	inline TextReader_t3170198631 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(TextReader_t3170198631 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T3170198631_H
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
#ifndef HASHTABLE_T188184851_H
#define HASHTABLE_T188184851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t188184851  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Hashtable::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.Hashtable::modificationCount
	int32_t ___modificationCount_2;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_3;
	// System.Collections.Hashtable/Slot[] System.Collections.Hashtable::table
	SlotU5BU5D_t3788841045* ___table_4;
	// System.Int32[] System.Collections.Hashtable::hashes
	Int32U5BU5D_t1719863841* ___hashes_5;
	// System.Int32 System.Collections.Hashtable::threshold
	int32_t ___threshold_6;
	// System.Collections.Hashtable/HashKeys System.Collections.Hashtable::hashKeys
	HashKeys_t1746839694 * ___hashKeys_7;
	// System.Collections.Hashtable/HashValues System.Collections.Hashtable::hashValues
	HashValues_t4108664002 * ___hashValues_8;
	// System.Collections.IHashCodeProvider System.Collections.Hashtable::hcpRef
	RuntimeObject* ___hcpRef_9;
	// System.Collections.IComparer System.Collections.Hashtable::comparerRef
	RuntimeObject* ___comparerRef_10;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Hashtable::serializationInfo
	SerializationInfo_t214215410 * ___serializationInfo_11;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::equalityComparer
	RuntimeObject* ___equalityComparer_12;

public:
	inline static int32_t get_offset_of_inUse_1() { return static_cast<int32_t>(offsetof(Hashtable_t188184851, ___inUse_1)); }
	inline int32_t get_inUse_1() const { return ___inUse_1; }
	inline int32_t* get_address_of_inUse_1() { return &___inUse_1; }
	inline void set_inUse_1(int32_t value)
	{
		___inUse_1 = value;
	}

	inline static int32_t get_offset_of_modificationCount_2() { return static_cast<int32_t>(offsetof(Hashtable_t188184851, ___modificationCount_2)); }
	inline int32_t get_modificationCount_2() const { return ___modificationCount_2; }
	inline int32_t* get_address_of_modificationCount_2() { return &___modificationCount_2; }
	inline void set_modificationCount_2(int32_t value)
	{
		___modificationCount_2 = value;
	}

	inline static int32_t get_offset_of_loadFactor_3() { return static_cast<int32_t>(offsetof(Hashtable_t188184851, ___loadFactor_3)); }
	inline float get_loadFactor_3() const { return ___loadFactor_3; }
	inline float* get_address_of_loadFactor_3() { return &___loadFactor_3; }
	inline void set_loadFactor_3(float value)
	{
		___loadFactor_3 = value;
	}

	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Hashtable_t188184851, ___table_4)); }
	inline SlotU5BU5D_t3788841045* get_table_4() const { return ___table_4; }
	inline SlotU5BU5D_t3788841045** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(SlotU5BU5D_t3788841045* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_hashes_5() { return static_cast<int32_t>(offsetof(Hashtable_t188184851, ___hashes_5)); }
	inline Int32U5BU5D_t1719863841* get_hashes_5() const { return ___hashes_5; }
	inline Int32U5BU5D_t1719863841** get_address_of_hashes_5() { return &___hashes_5; }
	inline void set_hashes_5(Int32U5BU5D_t1719863841* value)
	{
		___hashes_5 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_5), value);
	}

	inline static int32_t get_offset_of_threshold_6() { return static_cast<int32_t>(offsetof(Hashtable_t188184851, ___threshold_6)); }
	inline int32_t get_threshold_6() const { return ___threshold_6; }
	inline int32_t* get_address_of_threshold_6() { return &___threshold_6; }
	inline void set_threshold_6(int32_t value)
	{
		___threshold_6 = value;
	}

	inline static int32_t get_offset_of_hashKeys_7() { return static_cast<int32_t>(offsetof(Hashtable_t188184851, ___hashKeys_7)); }
	inline HashKeys_t1746839694 * get_hashKeys_7() const { return ___hashKeys_7; }
	inline HashKeys_t1746839694 ** get_address_of_hashKeys_7() { return &___hashKeys_7; }
	inline void set_hashKeys_7(HashKeys_t1746839694 * value)
	{
		___hashKeys_7 = value;
		Il2CppCodeGenWriteBarrier((&___hashKeys_7), value);
	}

	inline static int32_t get_offset_of_hashValues_8() { return static_cast<int32_t>(offsetof(Hashtable_t188184851, ___hashValues_8)); }
	inline HashValues_t4108664002 * get_hashValues_8() const { return ___hashValues_8; }
	inline HashValues_t4108664002 ** get_address_of_hashValues_8() { return &___hashValues_8; }
	inline void set_hashValues_8(HashValues_t4108664002 * value)
	{
		___hashValues_8 = value;
		Il2CppCodeGenWriteBarrier((&___hashValues_8), value);
	}

	inline static int32_t get_offset_of_hcpRef_9() { return static_cast<int32_t>(offsetof(Hashtable_t188184851, ___hcpRef_9)); }
	inline RuntimeObject* get_hcpRef_9() const { return ___hcpRef_9; }
	inline RuntimeObject** get_address_of_hcpRef_9() { return &___hcpRef_9; }
	inline void set_hcpRef_9(RuntimeObject* value)
	{
		___hcpRef_9 = value;
		Il2CppCodeGenWriteBarrier((&___hcpRef_9), value);
	}

	inline static int32_t get_offset_of_comparerRef_10() { return static_cast<int32_t>(offsetof(Hashtable_t188184851, ___comparerRef_10)); }
	inline RuntimeObject* get_comparerRef_10() const { return ___comparerRef_10; }
	inline RuntimeObject** get_address_of_comparerRef_10() { return &___comparerRef_10; }
	inline void set_comparerRef_10(RuntimeObject* value)
	{
		___comparerRef_10 = value;
		Il2CppCodeGenWriteBarrier((&___comparerRef_10), value);
	}

	inline static int32_t get_offset_of_serializationInfo_11() { return static_cast<int32_t>(offsetof(Hashtable_t188184851, ___serializationInfo_11)); }
	inline SerializationInfo_t214215410 * get_serializationInfo_11() const { return ___serializationInfo_11; }
	inline SerializationInfo_t214215410 ** get_address_of_serializationInfo_11() { return &___serializationInfo_11; }
	inline void set_serializationInfo_11(SerializationInfo_t214215410 * value)
	{
		___serializationInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___serializationInfo_11), value);
	}

	inline static int32_t get_offset_of_equalityComparer_12() { return static_cast<int32_t>(offsetof(Hashtable_t188184851, ___equalityComparer_12)); }
	inline RuntimeObject* get_equalityComparer_12() const { return ___equalityComparer_12; }
	inline RuntimeObject** get_address_of_equalityComparer_12() { return &___equalityComparer_12; }
	inline void set_equalityComparer_12(RuntimeObject* value)
	{
		___equalityComparer_12 = value;
		Il2CppCodeGenWriteBarrier((&___equalityComparer_12), value);
	}
};

struct Hashtable_t188184851_StaticFields
{
public:
	// System.Int32[] System.Collections.Hashtable::primeTbl
	Int32U5BU5D_t1719863841* ___primeTbl_13;

public:
	inline static int32_t get_offset_of_primeTbl_13() { return static_cast<int32_t>(offsetof(Hashtable_t188184851_StaticFields, ___primeTbl_13)); }
	inline Int32U5BU5D_t1719863841* get_primeTbl_13() const { return ___primeTbl_13; }
	inline Int32U5BU5D_t1719863841** get_address_of_primeTbl_13() { return &___primeTbl_13; }
	inline void set_primeTbl_13(Int32U5BU5D_t1719863841* value)
	{
		___primeTbl_13 = value;
		Il2CppCodeGenWriteBarrier((&___primeTbl_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T188184851_H
#ifndef DIRECTORY_T693237478_H
#define DIRECTORY_T693237478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Directory
struct  Directory_t693237478  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORY_T693237478_H
#ifndef BINARYWRITER_T2410200442_H
#define BINARYWRITER_T2410200442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.BinaryWriter
struct  BinaryWriter_t2410200442  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_t2967449720 * ___OutStream_1;
	// System.Text.Encoding System.IO.BinaryWriter::m_encoding
	Encoding_t2463672681 * ___m_encoding_2;
	// System.Byte[] System.IO.BinaryWriter::buffer
	ByteU5BU5D_t2378657911* ___buffer_3;
	// System.Boolean System.IO.BinaryWriter::disposed
	bool ___disposed_4;
	// System.Byte[] System.IO.BinaryWriter::stringBuffer
	ByteU5BU5D_t2378657911* ___stringBuffer_5;
	// System.Int32 System.IO.BinaryWriter::maxCharsPerRound
	int32_t ___maxCharsPerRound_6;

public:
	inline static int32_t get_offset_of_OutStream_1() { return static_cast<int32_t>(offsetof(BinaryWriter_t2410200442, ___OutStream_1)); }
	inline Stream_t2967449720 * get_OutStream_1() const { return ___OutStream_1; }
	inline Stream_t2967449720 ** get_address_of_OutStream_1() { return &___OutStream_1; }
	inline void set_OutStream_1(Stream_t2967449720 * value)
	{
		___OutStream_1 = value;
		Il2CppCodeGenWriteBarrier((&___OutStream_1), value);
	}

	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(BinaryWriter_t2410200442, ___m_encoding_2)); }
	inline Encoding_t2463672681 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_t2463672681 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_t2463672681 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_2), value);
	}

	inline static int32_t get_offset_of_buffer_3() { return static_cast<int32_t>(offsetof(BinaryWriter_t2410200442, ___buffer_3)); }
	inline ByteU5BU5D_t2378657911* get_buffer_3() const { return ___buffer_3; }
	inline ByteU5BU5D_t2378657911** get_address_of_buffer_3() { return &___buffer_3; }
	inline void set_buffer_3(ByteU5BU5D_t2378657911* value)
	{
		___buffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_3), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(BinaryWriter_t2410200442, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}

	inline static int32_t get_offset_of_stringBuffer_5() { return static_cast<int32_t>(offsetof(BinaryWriter_t2410200442, ___stringBuffer_5)); }
	inline ByteU5BU5D_t2378657911* get_stringBuffer_5() const { return ___stringBuffer_5; }
	inline ByteU5BU5D_t2378657911** get_address_of_stringBuffer_5() { return &___stringBuffer_5; }
	inline void set_stringBuffer_5(ByteU5BU5D_t2378657911* value)
	{
		___stringBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___stringBuffer_5), value);
	}

	inline static int32_t get_offset_of_maxCharsPerRound_6() { return static_cast<int32_t>(offsetof(BinaryWriter_t2410200442, ___maxCharsPerRound_6)); }
	inline int32_t get_maxCharsPerRound_6() const { return ___maxCharsPerRound_6; }
	inline int32_t* get_address_of_maxCharsPerRound_6() { return &___maxCharsPerRound_6; }
	inline void set_maxCharsPerRound_6(int32_t value)
	{
		___maxCharsPerRound_6 = value;
	}
};

struct BinaryWriter_t2410200442_StaticFields
{
public:
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t2410200442 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(BinaryWriter_t2410200442_StaticFields, ___Null_0)); }
	inline BinaryWriter_t2410200442 * get_Null_0() const { return ___Null_0; }
	inline BinaryWriter_t2410200442 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(BinaryWriter_t2410200442 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYWRITER_T2410200442_H
#ifndef BINARYREADER_T901000103_H
#define BINARYREADER_T901000103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.BinaryReader
struct  BinaryReader_t901000103  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t2967449720 * ___m_stream_0;
	// System.Text.Encoding System.IO.BinaryReader::m_encoding
	Encoding_t2463672681 * ___m_encoding_1;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_t2378657911* ___m_buffer_2;
	// System.Text.Decoder System.IO.BinaryReader::decoder
	Decoder_t685057947 * ___decoder_3;
	// System.Char[] System.IO.BinaryReader::charBuffer
	CharU5BU5D_t3282355116* ___charBuffer_4;
	// System.Boolean System.IO.BinaryReader::m_disposed
	bool ___m_disposed_5;

public:
	inline static int32_t get_offset_of_m_stream_0() { return static_cast<int32_t>(offsetof(BinaryReader_t901000103, ___m_stream_0)); }
	inline Stream_t2967449720 * get_m_stream_0() const { return ___m_stream_0; }
	inline Stream_t2967449720 ** get_address_of_m_stream_0() { return &___m_stream_0; }
	inline void set_m_stream_0(Stream_t2967449720 * value)
	{
		___m_stream_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stream_0), value);
	}

	inline static int32_t get_offset_of_m_encoding_1() { return static_cast<int32_t>(offsetof(BinaryReader_t901000103, ___m_encoding_1)); }
	inline Encoding_t2463672681 * get_m_encoding_1() const { return ___m_encoding_1; }
	inline Encoding_t2463672681 ** get_address_of_m_encoding_1() { return &___m_encoding_1; }
	inline void set_m_encoding_1(Encoding_t2463672681 * value)
	{
		___m_encoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_1), value);
	}

	inline static int32_t get_offset_of_m_buffer_2() { return static_cast<int32_t>(offsetof(BinaryReader_t901000103, ___m_buffer_2)); }
	inline ByteU5BU5D_t2378657911* get_m_buffer_2() const { return ___m_buffer_2; }
	inline ByteU5BU5D_t2378657911** get_address_of_m_buffer_2() { return &___m_buffer_2; }
	inline void set_m_buffer_2(ByteU5BU5D_t2378657911* value)
	{
		___m_buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_buffer_2), value);
	}

	inline static int32_t get_offset_of_decoder_3() { return static_cast<int32_t>(offsetof(BinaryReader_t901000103, ___decoder_3)); }
	inline Decoder_t685057947 * get_decoder_3() const { return ___decoder_3; }
	inline Decoder_t685057947 ** get_address_of_decoder_3() { return &___decoder_3; }
	inline void set_decoder_3(Decoder_t685057947 * value)
	{
		___decoder_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_3), value);
	}

	inline static int32_t get_offset_of_charBuffer_4() { return static_cast<int32_t>(offsetof(BinaryReader_t901000103, ___charBuffer_4)); }
	inline CharU5BU5D_t3282355116* get_charBuffer_4() const { return ___charBuffer_4; }
	inline CharU5BU5D_t3282355116** get_address_of_charBuffer_4() { return &___charBuffer_4; }
	inline void set_charBuffer_4(CharU5BU5D_t3282355116* value)
	{
		___charBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&___charBuffer_4), value);
	}

	inline static int32_t get_offset_of_m_disposed_5() { return static_cast<int32_t>(offsetof(BinaryReader_t901000103, ___m_disposed_5)); }
	inline bool get_m_disposed_5() const { return ___m_disposed_5; }
	inline bool* get_address_of_m_disposed_5() { return &___m_disposed_5; }
	inline void set_m_disposed_5(bool value)
	{
		___m_disposed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYREADER_T901000103_H
#ifndef NUMBERFORMATINFO_T796945479_H
#define NUMBERFORMATINFO_T796945479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_t796945479  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_0;
	// System.String System.Globalization.NumberFormatInfo::decimalFormats
	String_t* ___decimalFormats_1;
	// System.String System.Globalization.NumberFormatInfo::currencyFormats
	String_t* ___currencyFormats_2;
	// System.String System.Globalization.NumberFormatInfo::percentFormats
	String_t* ___percentFormats_3;
	// System.String System.Globalization.NumberFormatInfo::digitPattern
	String_t* ___digitPattern_4;
	// System.String System.Globalization.NumberFormatInfo::zeroPattern
	String_t* ___zeroPattern_5;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_6;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t1719863841* ___currencyGroupSizes_9;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_10;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_11;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_12;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_15;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_16;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_17;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_18;
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t1719863841* ___numberGroupSizes_19;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_20;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_21;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_22;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_23;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t1719863841* ___percentGroupSizes_24;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_27;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_28;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_29;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_30;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_31;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_32;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_34;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_35;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t1002137567* ___nativeDigits_36;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_37;

public:
	inline static int32_t get_offset_of_isReadOnly_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___isReadOnly_0)); }
	inline bool get_isReadOnly_0() const { return ___isReadOnly_0; }
	inline bool* get_address_of_isReadOnly_0() { return &___isReadOnly_0; }
	inline void set_isReadOnly_0(bool value)
	{
		___isReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_decimalFormats_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___decimalFormats_1)); }
	inline String_t* get_decimalFormats_1() const { return ___decimalFormats_1; }
	inline String_t** get_address_of_decimalFormats_1() { return &___decimalFormats_1; }
	inline void set_decimalFormats_1(String_t* value)
	{
		___decimalFormats_1 = value;
		Il2CppCodeGenWriteBarrier((&___decimalFormats_1), value);
	}

	inline static int32_t get_offset_of_currencyFormats_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___currencyFormats_2)); }
	inline String_t* get_currencyFormats_2() const { return ___currencyFormats_2; }
	inline String_t** get_address_of_currencyFormats_2() { return &___currencyFormats_2; }
	inline void set_currencyFormats_2(String_t* value)
	{
		___currencyFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___currencyFormats_2), value);
	}

	inline static int32_t get_offset_of_percentFormats_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___percentFormats_3)); }
	inline String_t* get_percentFormats_3() const { return ___percentFormats_3; }
	inline String_t** get_address_of_percentFormats_3() { return &___percentFormats_3; }
	inline void set_percentFormats_3(String_t* value)
	{
		___percentFormats_3 = value;
		Il2CppCodeGenWriteBarrier((&___percentFormats_3), value);
	}

	inline static int32_t get_offset_of_digitPattern_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___digitPattern_4)); }
	inline String_t* get_digitPattern_4() const { return ___digitPattern_4; }
	inline String_t** get_address_of_digitPattern_4() { return &___digitPattern_4; }
	inline void set_digitPattern_4(String_t* value)
	{
		___digitPattern_4 = value;
		Il2CppCodeGenWriteBarrier((&___digitPattern_4), value);
	}

	inline static int32_t get_offset_of_zeroPattern_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___zeroPattern_5)); }
	inline String_t* get_zeroPattern_5() const { return ___zeroPattern_5; }
	inline String_t** get_address_of_zeroPattern_5() { return &___zeroPattern_5; }
	inline void set_zeroPattern_5(String_t* value)
	{
		___zeroPattern_5 = value;
		Il2CppCodeGenWriteBarrier((&___zeroPattern_5), value);
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___currencyDecimalDigits_6)); }
	inline int32_t get_currencyDecimalDigits_6() const { return ___currencyDecimalDigits_6; }
	inline int32_t* get_address_of_currencyDecimalDigits_6() { return &___currencyDecimalDigits_6; }
	inline void set_currencyDecimalDigits_6(int32_t value)
	{
		___currencyDecimalDigits_6 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___currencyDecimalSeparator_7)); }
	inline String_t* get_currencyDecimalSeparator_7() const { return ___currencyDecimalSeparator_7; }
	inline String_t** get_address_of_currencyDecimalSeparator_7() { return &___currencyDecimalSeparator_7; }
	inline void set_currencyDecimalSeparator_7(String_t* value)
	{
		___currencyDecimalSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((&___currencyDecimalSeparator_7), value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSeparator_8), value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___currencyGroupSizes_9)); }
	inline Int32U5BU5D_t1719863841* get_currencyGroupSizes_9() const { return ___currencyGroupSizes_9; }
	inline Int32U5BU5D_t1719863841** get_address_of_currencyGroupSizes_9() { return &___currencyGroupSizes_9; }
	inline void set_currencyGroupSizes_9(Int32U5BU5D_t1719863841* value)
	{
		___currencyGroupSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSizes_9), value);
	}

	inline static int32_t get_offset_of_currencyNegativePattern_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___currencyNegativePattern_10)); }
	inline int32_t get_currencyNegativePattern_10() const { return ___currencyNegativePattern_10; }
	inline int32_t* get_address_of_currencyNegativePattern_10() { return &___currencyNegativePattern_10; }
	inline void set_currencyNegativePattern_10(int32_t value)
	{
		___currencyNegativePattern_10 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___currencyPositivePattern_11)); }
	inline int32_t get_currencyPositivePattern_11() const { return ___currencyPositivePattern_11; }
	inline int32_t* get_address_of_currencyPositivePattern_11() { return &___currencyPositivePattern_11; }
	inline void set_currencyPositivePattern_11(int32_t value)
	{
		___currencyPositivePattern_11 = value;
	}

	inline static int32_t get_offset_of_currencySymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___currencySymbol_12)); }
	inline String_t* get_currencySymbol_12() const { return ___currencySymbol_12; }
	inline String_t** get_address_of_currencySymbol_12() { return &___currencySymbol_12; }
	inline void set_currencySymbol_12(String_t* value)
	{
		___currencySymbol_12 = value;
		Il2CppCodeGenWriteBarrier((&___currencySymbol_12), value);
	}

	inline static int32_t get_offset_of_nanSymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___nanSymbol_13)); }
	inline String_t* get_nanSymbol_13() const { return ___nanSymbol_13; }
	inline String_t** get_address_of_nanSymbol_13() { return &___nanSymbol_13; }
	inline void set_nanSymbol_13(String_t* value)
	{
		___nanSymbol_13 = value;
		Il2CppCodeGenWriteBarrier((&___nanSymbol_13), value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((&___negativeInfinitySymbol_14), value);
	}

	inline static int32_t get_offset_of_negativeSign_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___negativeSign_15)); }
	inline String_t* get_negativeSign_15() const { return ___negativeSign_15; }
	inline String_t** get_address_of_negativeSign_15() { return &___negativeSign_15; }
	inline void set_negativeSign_15(String_t* value)
	{
		___negativeSign_15 = value;
		Il2CppCodeGenWriteBarrier((&___negativeSign_15), value);
	}

	inline static int32_t get_offset_of_numberDecimalDigits_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___numberDecimalDigits_16)); }
	inline int32_t get_numberDecimalDigits_16() const { return ___numberDecimalDigits_16; }
	inline int32_t* get_address_of_numberDecimalDigits_16() { return &___numberDecimalDigits_16; }
	inline void set_numberDecimalDigits_16(int32_t value)
	{
		___numberDecimalDigits_16 = value;
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___numberDecimalSeparator_17)); }
	inline String_t* get_numberDecimalSeparator_17() const { return ___numberDecimalSeparator_17; }
	inline String_t** get_address_of_numberDecimalSeparator_17() { return &___numberDecimalSeparator_17; }
	inline void set_numberDecimalSeparator_17(String_t* value)
	{
		___numberDecimalSeparator_17 = value;
		Il2CppCodeGenWriteBarrier((&___numberDecimalSeparator_17), value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___numberGroupSeparator_18)); }
	inline String_t* get_numberGroupSeparator_18() const { return ___numberGroupSeparator_18; }
	inline String_t** get_address_of_numberGroupSeparator_18() { return &___numberGroupSeparator_18; }
	inline void set_numberGroupSeparator_18(String_t* value)
	{
		___numberGroupSeparator_18 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSeparator_18), value);
	}

	inline static int32_t get_offset_of_numberGroupSizes_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___numberGroupSizes_19)); }
	inline Int32U5BU5D_t1719863841* get_numberGroupSizes_19() const { return ___numberGroupSizes_19; }
	inline Int32U5BU5D_t1719863841** get_address_of_numberGroupSizes_19() { return &___numberGroupSizes_19; }
	inline void set_numberGroupSizes_19(Int32U5BU5D_t1719863841* value)
	{
		___numberGroupSizes_19 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSizes_19), value);
	}

	inline static int32_t get_offset_of_numberNegativePattern_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___numberNegativePattern_20)); }
	inline int32_t get_numberNegativePattern_20() const { return ___numberNegativePattern_20; }
	inline int32_t* get_address_of_numberNegativePattern_20() { return &___numberNegativePattern_20; }
	inline void set_numberNegativePattern_20(int32_t value)
	{
		___numberNegativePattern_20 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___percentDecimalDigits_21)); }
	inline int32_t get_percentDecimalDigits_21() const { return ___percentDecimalDigits_21; }
	inline int32_t* get_address_of_percentDecimalDigits_21() { return &___percentDecimalDigits_21; }
	inline void set_percentDecimalDigits_21(int32_t value)
	{
		___percentDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___percentDecimalSeparator_22)); }
	inline String_t* get_percentDecimalSeparator_22() const { return ___percentDecimalSeparator_22; }
	inline String_t** get_address_of_percentDecimalSeparator_22() { return &___percentDecimalSeparator_22; }
	inline void set_percentDecimalSeparator_22(String_t* value)
	{
		___percentDecimalSeparator_22 = value;
		Il2CppCodeGenWriteBarrier((&___percentDecimalSeparator_22), value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___percentGroupSeparator_23)); }
	inline String_t* get_percentGroupSeparator_23() const { return ___percentGroupSeparator_23; }
	inline String_t** get_address_of_percentGroupSeparator_23() { return &___percentGroupSeparator_23; }
	inline void set_percentGroupSeparator_23(String_t* value)
	{
		___percentGroupSeparator_23 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSeparator_23), value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___percentGroupSizes_24)); }
	inline Int32U5BU5D_t1719863841* get_percentGroupSizes_24() const { return ___percentGroupSizes_24; }
	inline Int32U5BU5D_t1719863841** get_address_of_percentGroupSizes_24() { return &___percentGroupSizes_24; }
	inline void set_percentGroupSizes_24(Int32U5BU5D_t1719863841* value)
	{
		___percentGroupSizes_24 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSizes_24), value);
	}

	inline static int32_t get_offset_of_percentNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___percentNegativePattern_25)); }
	inline int32_t get_percentNegativePattern_25() const { return ___percentNegativePattern_25; }
	inline int32_t* get_address_of_percentNegativePattern_25() { return &___percentNegativePattern_25; }
	inline void set_percentNegativePattern_25(int32_t value)
	{
		___percentNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentSymbol_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___percentSymbol_27)); }
	inline String_t* get_percentSymbol_27() const { return ___percentSymbol_27; }
	inline String_t** get_address_of_percentSymbol_27() { return &___percentSymbol_27; }
	inline void set_percentSymbol_27(String_t* value)
	{
		___percentSymbol_27 = value;
		Il2CppCodeGenWriteBarrier((&___percentSymbol_27), value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___perMilleSymbol_28)); }
	inline String_t* get_perMilleSymbol_28() const { return ___perMilleSymbol_28; }
	inline String_t** get_address_of_perMilleSymbol_28() { return &___perMilleSymbol_28; }
	inline void set_perMilleSymbol_28(String_t* value)
	{
		___perMilleSymbol_28 = value;
		Il2CppCodeGenWriteBarrier((&___perMilleSymbol_28), value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___positiveInfinitySymbol_29)); }
	inline String_t* get_positiveInfinitySymbol_29() const { return ___positiveInfinitySymbol_29; }
	inline String_t** get_address_of_positiveInfinitySymbol_29() { return &___positiveInfinitySymbol_29; }
	inline void set_positiveInfinitySymbol_29(String_t* value)
	{
		___positiveInfinitySymbol_29 = value;
		Il2CppCodeGenWriteBarrier((&___positiveInfinitySymbol_29), value);
	}

	inline static int32_t get_offset_of_positiveSign_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___positiveSign_30)); }
	inline String_t* get_positiveSign_30() const { return ___positiveSign_30; }
	inline String_t** get_address_of_positiveSign_30() { return &___positiveSign_30; }
	inline void set_positiveSign_30(String_t* value)
	{
		___positiveSign_30 = value;
		Il2CppCodeGenWriteBarrier((&___positiveSign_30), value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___ansiCurrencySymbol_31)); }
	inline String_t* get_ansiCurrencySymbol_31() const { return ___ansiCurrencySymbol_31; }
	inline String_t** get_address_of_ansiCurrencySymbol_31() { return &___ansiCurrencySymbol_31; }
	inline void set_ansiCurrencySymbol_31(String_t* value)
	{
		___ansiCurrencySymbol_31 = value;
		Il2CppCodeGenWriteBarrier((&___ansiCurrencySymbol_31), value);
	}

	inline static int32_t get_offset_of_m_dataItem_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___m_dataItem_32)); }
	inline int32_t get_m_dataItem_32() const { return ___m_dataItem_32; }
	inline int32_t* get_address_of_m_dataItem_32() { return &___m_dataItem_32; }
	inline void set_m_dataItem_32(int32_t value)
	{
		___m_dataItem_32 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___m_useUserOverride_33)); }
	inline bool get_m_useUserOverride_33() const { return ___m_useUserOverride_33; }
	inline bool* get_address_of_m_useUserOverride_33() { return &___m_useUserOverride_33; }
	inline void set_m_useUserOverride_33(bool value)
	{
		___m_useUserOverride_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___validForParseAsNumber_34)); }
	inline bool get_validForParseAsNumber_34() const { return ___validForParseAsNumber_34; }
	inline bool* get_address_of_validForParseAsNumber_34() { return &___validForParseAsNumber_34; }
	inline void set_validForParseAsNumber_34(bool value)
	{
		___validForParseAsNumber_34 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_35() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___validForParseAsCurrency_35)); }
	inline bool get_validForParseAsCurrency_35() const { return ___validForParseAsCurrency_35; }
	inline bool* get_address_of_validForParseAsCurrency_35() { return &___validForParseAsCurrency_35; }
	inline void set_validForParseAsCurrency_35(bool value)
	{
		___validForParseAsCurrency_35 = value;
	}

	inline static int32_t get_offset_of_nativeDigits_36() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___nativeDigits_36)); }
	inline StringU5BU5D_t1002137567* get_nativeDigits_36() const { return ___nativeDigits_36; }
	inline StringU5BU5D_t1002137567** get_address_of_nativeDigits_36() { return &___nativeDigits_36; }
	inline void set_nativeDigits_36(StringU5BU5D_t1002137567* value)
	{
		___nativeDigits_36 = value;
		Il2CppCodeGenWriteBarrier((&___nativeDigits_36), value);
	}

	inline static int32_t get_offset_of_digitSubstitution_37() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479, ___digitSubstitution_37)); }
	inline int32_t get_digitSubstitution_37() const { return ___digitSubstitution_37; }
	inline int32_t* get_address_of_digitSubstitution_37() { return &___digitSubstitution_37; }
	inline void set_digitSubstitution_37(int32_t value)
	{
		___digitSubstitution_37 = value;
	}
};

struct NumberFormatInfo_t796945479_StaticFields
{
public:
	// System.String[] System.Globalization.NumberFormatInfo::invariantNativeDigits
	StringU5BU5D_t1002137567* ___invariantNativeDigits_38;

public:
	inline static int32_t get_offset_of_invariantNativeDigits_38() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t796945479_StaticFields, ___invariantNativeDigits_38)); }
	inline StringU5BU5D_t1002137567* get_invariantNativeDigits_38() const { return ___invariantNativeDigits_38; }
	inline StringU5BU5D_t1002137567** get_address_of_invariantNativeDigits_38() { return &___invariantNativeDigits_38; }
	inline void set_invariantNativeDigits_38(StringU5BU5D_t1002137567* value)
	{
		___invariantNativeDigits_38 = value;
		Il2CppCodeGenWriteBarrier((&___invariantNativeDigits_38), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATINFO_T796945479_H
#ifndef DEBUGGER_T1384979307_H
#define DEBUGGER_T1384979307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Debugger
struct  Debugger_t1384979307  : public RuntimeObject
{
public:

public:
};

struct Debugger_t1384979307_StaticFields
{
public:
	// System.String System.Diagnostics.Debugger::DefaultCategory
	String_t* ___DefaultCategory_0;

public:
	inline static int32_t get_offset_of_DefaultCategory_0() { return static_cast<int32_t>(offsetof(Debugger_t1384979307_StaticFields, ___DefaultCategory_0)); }
	inline String_t* get_DefaultCategory_0() const { return ___DefaultCategory_0; }
	inline String_t** get_address_of_DefaultCategory_0() { return &___DefaultCategory_0; }
	inline void set_DefaultCategory_0(String_t* value)
	{
		___DefaultCategory_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultCategory_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGER_T1384979307_H
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
#ifndef STREAMASYNCRESULT_T3892884463_H
#define STREAMASYNCRESULT_T3892884463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamAsyncResult
struct  StreamAsyncResult_t3892884463  : public RuntimeObject
{
public:
	// System.Object System.IO.StreamAsyncResult::state
	RuntimeObject * ___state_0;
	// System.Boolean System.IO.StreamAsyncResult::completed
	bool ___completed_1;
	// System.Boolean System.IO.StreamAsyncResult::done
	bool ___done_2;
	// System.Exception System.IO.StreamAsyncResult::exc
	Exception_t76254738 * ___exc_3;
	// System.Int32 System.IO.StreamAsyncResult::nbytes
	int32_t ___nbytes_4;
	// System.Threading.ManualResetEvent System.IO.StreamAsyncResult::wh
	ManualResetEvent_t3072164400 * ___wh_5;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t3892884463, ___state_0)); }
	inline RuntimeObject * get_state_0() const { return ___state_0; }
	inline RuntimeObject ** get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(RuntimeObject * value)
	{
		___state_0 = value;
		Il2CppCodeGenWriteBarrier((&___state_0), value);
	}

	inline static int32_t get_offset_of_completed_1() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t3892884463, ___completed_1)); }
	inline bool get_completed_1() const { return ___completed_1; }
	inline bool* get_address_of_completed_1() { return &___completed_1; }
	inline void set_completed_1(bool value)
	{
		___completed_1 = value;
	}

	inline static int32_t get_offset_of_done_2() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t3892884463, ___done_2)); }
	inline bool get_done_2() const { return ___done_2; }
	inline bool* get_address_of_done_2() { return &___done_2; }
	inline void set_done_2(bool value)
	{
		___done_2 = value;
	}

	inline static int32_t get_offset_of_exc_3() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t3892884463, ___exc_3)); }
	inline Exception_t76254738 * get_exc_3() const { return ___exc_3; }
	inline Exception_t76254738 ** get_address_of_exc_3() { return &___exc_3; }
	inline void set_exc_3(Exception_t76254738 * value)
	{
		___exc_3 = value;
		Il2CppCodeGenWriteBarrier((&___exc_3), value);
	}

	inline static int32_t get_offset_of_nbytes_4() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t3892884463, ___nbytes_4)); }
	inline int32_t get_nbytes_4() const { return ___nbytes_4; }
	inline int32_t* get_address_of_nbytes_4() { return &___nbytes_4; }
	inline void set_nbytes_4(int32_t value)
	{
		___nbytes_4 = value;
	}

	inline static int32_t get_offset_of_wh_5() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t3892884463, ___wh_5)); }
	inline ManualResetEvent_t3072164400 * get_wh_5() const { return ___wh_5; }
	inline ManualResetEvent_t3072164400 ** get_address_of_wh_5() { return &___wh_5; }
	inline void set_wh_5(ManualResetEvent_t3072164400 * value)
	{
		___wh_5 = value;
		Il2CppCodeGenWriteBarrier((&___wh_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMASYNCRESULT_T3892884463_H
#ifndef HASHKEYS_T1746839694_H
#define HASHKEYS_T1746839694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/HashKeys
struct  HashKeys_t1746839694  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/HashKeys::host
	Hashtable_t188184851 * ___host_0;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(HashKeys_t1746839694, ___host_0)); }
	inline Hashtable_t188184851 * get_host_0() const { return ___host_0; }
	inline Hashtable_t188184851 ** get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(Hashtable_t188184851 * value)
	{
		___host_0 = value;
		Il2CppCodeGenWriteBarrier((&___host_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHKEYS_T1746839694_H
#ifndef HASHVALUES_T4108664002_H
#define HASHVALUES_T4108664002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/HashValues
struct  HashValues_t4108664002  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/HashValues::host
	Hashtable_t188184851 * ___host_0;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(HashValues_t4108664002, ___host_0)); }
	inline Hashtable_t188184851 * get_host_0() const { return ___host_0; }
	inline Hashtable_t188184851 ** get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(Hashtable_t188184851 * value)
	{
		___host_0 = value;
		Il2CppCodeGenWriteBarrier((&___host_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHVALUES_T4108664002_H
#ifndef FILESTREAMASYNCRESULT_T3577736120_H
#define FILESTREAMASYNCRESULT_T3577736120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStreamAsyncResult
struct  FileStreamAsyncResult_t3577736120  : public RuntimeObject
{
public:
	// System.Object System.IO.FileStreamAsyncResult::state
	RuntimeObject * ___state_0;
	// System.Boolean System.IO.FileStreamAsyncResult::completed
	bool ___completed_1;
	// System.Threading.ManualResetEvent System.IO.FileStreamAsyncResult::wh
	ManualResetEvent_t3072164400 * ___wh_2;
	// System.AsyncCallback System.IO.FileStreamAsyncResult::cb
	AsyncCallback_t1487541470 * ___cb_3;
	// System.Boolean System.IO.FileStreamAsyncResult::completedSynch
	bool ___completedSynch_4;
	// System.Int32 System.IO.FileStreamAsyncResult::Count
	int32_t ___Count_5;
	// System.Int32 System.IO.FileStreamAsyncResult::OriginalCount
	int32_t ___OriginalCount_6;
	// System.Int32 System.IO.FileStreamAsyncResult::BytesRead
	int32_t ___BytesRead_7;
	// System.AsyncCallback System.IO.FileStreamAsyncResult::realcb
	AsyncCallback_t1487541470 * ___realcb_8;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t3577736120, ___state_0)); }
	inline RuntimeObject * get_state_0() const { return ___state_0; }
	inline RuntimeObject ** get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(RuntimeObject * value)
	{
		___state_0 = value;
		Il2CppCodeGenWriteBarrier((&___state_0), value);
	}

	inline static int32_t get_offset_of_completed_1() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t3577736120, ___completed_1)); }
	inline bool get_completed_1() const { return ___completed_1; }
	inline bool* get_address_of_completed_1() { return &___completed_1; }
	inline void set_completed_1(bool value)
	{
		___completed_1 = value;
	}

	inline static int32_t get_offset_of_wh_2() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t3577736120, ___wh_2)); }
	inline ManualResetEvent_t3072164400 * get_wh_2() const { return ___wh_2; }
	inline ManualResetEvent_t3072164400 ** get_address_of_wh_2() { return &___wh_2; }
	inline void set_wh_2(ManualResetEvent_t3072164400 * value)
	{
		___wh_2 = value;
		Il2CppCodeGenWriteBarrier((&___wh_2), value);
	}

	inline static int32_t get_offset_of_cb_3() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t3577736120, ___cb_3)); }
	inline AsyncCallback_t1487541470 * get_cb_3() const { return ___cb_3; }
	inline AsyncCallback_t1487541470 ** get_address_of_cb_3() { return &___cb_3; }
	inline void set_cb_3(AsyncCallback_t1487541470 * value)
	{
		___cb_3 = value;
		Il2CppCodeGenWriteBarrier((&___cb_3), value);
	}

	inline static int32_t get_offset_of_completedSynch_4() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t3577736120, ___completedSynch_4)); }
	inline bool get_completedSynch_4() const { return ___completedSynch_4; }
	inline bool* get_address_of_completedSynch_4() { return &___completedSynch_4; }
	inline void set_completedSynch_4(bool value)
	{
		___completedSynch_4 = value;
	}

	inline static int32_t get_offset_of_Count_5() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t3577736120, ___Count_5)); }
	inline int32_t get_Count_5() const { return ___Count_5; }
	inline int32_t* get_address_of_Count_5() { return &___Count_5; }
	inline void set_Count_5(int32_t value)
	{
		___Count_5 = value;
	}

	inline static int32_t get_offset_of_OriginalCount_6() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t3577736120, ___OriginalCount_6)); }
	inline int32_t get_OriginalCount_6() const { return ___OriginalCount_6; }
	inline int32_t* get_address_of_OriginalCount_6() { return &___OriginalCount_6; }
	inline void set_OriginalCount_6(int32_t value)
	{
		___OriginalCount_6 = value;
	}

	inline static int32_t get_offset_of_BytesRead_7() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t3577736120, ___BytesRead_7)); }
	inline int32_t get_BytesRead_7() const { return ___BytesRead_7; }
	inline int32_t* get_address_of_BytesRead_7() { return &___BytesRead_7; }
	inline void set_BytesRead_7(int32_t value)
	{
		___BytesRead_7 = value;
	}

	inline static int32_t get_offset_of_realcb_8() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t3577736120, ___realcb_8)); }
	inline AsyncCallback_t1487541470 * get_realcb_8() const { return ___realcb_8; }
	inline AsyncCallback_t1487541470 ** get_address_of_realcb_8() { return &___realcb_8; }
	inline void set_realcb_8(AsyncCallback_t1487541470 * value)
	{
		___realcb_8 = value;
		Il2CppCodeGenWriteBarrier((&___realcb_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAMASYNCRESULT_T3577736120_H
#ifndef QUEUE_T1728721708_H
#define QUEUE_T1728721708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue
struct  Queue_t1728721708  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Queue::_array
	ObjectU5BU5D_t864419831* ____array_0;
	// System.Int32 System.Collections.Queue::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Queue::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Queue::_tail
	int32_t ____tail_3;
	// System.Int32 System.Collections.Queue::_growFactor
	int32_t ____growFactor_4;
	// System.Int32 System.Collections.Queue::_version
	int32_t ____version_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_t1728721708, ____array_0)); }
	inline ObjectU5BU5D_t864419831* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t864419831** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t864419831* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_t1728721708, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(Queue_t1728721708, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__tail_3() { return static_cast<int32_t>(offsetof(Queue_t1728721708, ____tail_3)); }
	inline int32_t get__tail_3() const { return ____tail_3; }
	inline int32_t* get_address_of__tail_3() { return &____tail_3; }
	inline void set__tail_3(int32_t value)
	{
		____tail_3 = value;
	}

	inline static int32_t get_offset_of__growFactor_4() { return static_cast<int32_t>(offsetof(Queue_t1728721708, ____growFactor_4)); }
	inline int32_t get__growFactor_4() const { return ____growFactor_4; }
	inline int32_t* get_address_of__growFactor_4() { return &____growFactor_4; }
	inline void set__growFactor_4(int32_t value)
	{
		____growFactor_4 = value;
	}

	inline static int32_t get_offset_of__version_5() { return static_cast<int32_t>(offsetof(Queue_t1728721708, ____version_5)); }
	inline int32_t get__version_5() const { return ____version_5; }
	inline int32_t* get_address_of__version_5() { return &____version_5; }
	inline void set__version_5(int32_t value)
	{
		____version_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_T1728721708_H
#ifndef QUEUEENUMERATOR_T1010910589_H
#define QUEUEENUMERATOR_T1010910589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue/QueueEnumerator
struct  QueueEnumerator_t1010910589  : public RuntimeObject
{
public:
	// System.Collections.Queue System.Collections.Queue/QueueEnumerator::queue
	Queue_t1728721708 * ___queue_0;
	// System.Int32 System.Collections.Queue/QueueEnumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Queue/QueueEnumerator::current
	int32_t ___current_2;

public:
	inline static int32_t get_offset_of_queue_0() { return static_cast<int32_t>(offsetof(QueueEnumerator_t1010910589, ___queue_0)); }
	inline Queue_t1728721708 * get_queue_0() const { return ___queue_0; }
	inline Queue_t1728721708 ** get_address_of_queue_0() { return &___queue_0; }
	inline void set_queue_0(Queue_t1728721708 * value)
	{
		___queue_0 = value;
		Il2CppCodeGenWriteBarrier((&___queue_0), value);
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(QueueEnumerator_t1010910589, ____version_1)); }
	inline int32_t get__version_1() const { return ____version_1; }
	inline int32_t* get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(int32_t value)
	{
		____version_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(QueueEnumerator_t1010910589, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUEENUMERATOR_T1010910589_H
#ifndef READONLYCOLLECTIONBASE_T594653574_H
#define READONLYCOLLECTIONBASE_T594653574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t594653574  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t1090370772 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t594653574, ___list_0)); }
	inline ArrayList_t1090370772 * get_list_0() const { return ___list_0; }
	inline ArrayList_t1090370772 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t1090370772 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T594653574_H
#ifndef SORTEDLIST_T1937438985_H
#define SORTEDLIST_T1937438985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList
struct  SortedList_t1937438985  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.SortedList::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.SortedList::modificationCount
	int32_t ___modificationCount_2;
	// System.Collections.SortedList/Slot[] System.Collections.SortedList::table
	SlotU5BU5D_t1208527227* ___table_3;
	// System.Collections.IComparer System.Collections.SortedList::comparer
	RuntimeObject* ___comparer_4;
	// System.Int32 System.Collections.SortedList::defaultCapacity
	int32_t ___defaultCapacity_5;

public:
	inline static int32_t get_offset_of_inUse_1() { return static_cast<int32_t>(offsetof(SortedList_t1937438985, ___inUse_1)); }
	inline int32_t get_inUse_1() const { return ___inUse_1; }
	inline int32_t* get_address_of_inUse_1() { return &___inUse_1; }
	inline void set_inUse_1(int32_t value)
	{
		___inUse_1 = value;
	}

	inline static int32_t get_offset_of_modificationCount_2() { return static_cast<int32_t>(offsetof(SortedList_t1937438985, ___modificationCount_2)); }
	inline int32_t get_modificationCount_2() const { return ___modificationCount_2; }
	inline int32_t* get_address_of_modificationCount_2() { return &___modificationCount_2; }
	inline void set_modificationCount_2(int32_t value)
	{
		___modificationCount_2 = value;
	}

	inline static int32_t get_offset_of_table_3() { return static_cast<int32_t>(offsetof(SortedList_t1937438985, ___table_3)); }
	inline SlotU5BU5D_t1208527227* get_table_3() const { return ___table_3; }
	inline SlotU5BU5D_t1208527227** get_address_of_table_3() { return &___table_3; }
	inline void set_table_3(SlotU5BU5D_t1208527227* value)
	{
		___table_3 = value;
		Il2CppCodeGenWriteBarrier((&___table_3), value);
	}

	inline static int32_t get_offset_of_comparer_4() { return static_cast<int32_t>(offsetof(SortedList_t1937438985, ___comparer_4)); }
	inline RuntimeObject* get_comparer_4() const { return ___comparer_4; }
	inline RuntimeObject** get_address_of_comparer_4() { return &___comparer_4; }
	inline void set_comparer_4(RuntimeObject* value)
	{
		___comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_4), value);
	}

	inline static int32_t get_offset_of_defaultCapacity_5() { return static_cast<int32_t>(offsetof(SortedList_t1937438985, ___defaultCapacity_5)); }
	inline int32_t get_defaultCapacity_5() const { return ___defaultCapacity_5; }
	inline int32_t* get_address_of_defaultCapacity_5() { return &___defaultCapacity_5; }
	inline void set_defaultCapacity_5(int32_t value)
	{
		___defaultCapacity_5 = value;
	}
};

struct SortedList_t1937438985_StaticFields
{
public:
	// System.Int32 System.Collections.SortedList::INITIAL_SIZE
	int32_t ___INITIAL_SIZE_0;

public:
	inline static int32_t get_offset_of_INITIAL_SIZE_0() { return static_cast<int32_t>(offsetof(SortedList_t1937438985_StaticFields, ___INITIAL_SIZE_0)); }
	inline int32_t get_INITIAL_SIZE_0() const { return ___INITIAL_SIZE_0; }
	inline int32_t* get_address_of_INITIAL_SIZE_0() { return &___INITIAL_SIZE_0; }
	inline void set_INITIAL_SIZE_0(int32_t value)
	{
		___INITIAL_SIZE_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDLIST_T1937438985_H
#ifndef PATH_T4210848886_H
#define PATH_T4210848886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Path
struct  Path_t4210848886  : public RuntimeObject
{
public:

public:
};

struct Path_t4210848886_StaticFields
{
public:
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t3282355116* ___InvalidPathChars_0;
	// System.Char System.IO.Path::AltDirectorySeparatorChar
	Il2CppChar ___AltDirectorySeparatorChar_1;
	// System.Char System.IO.Path::DirectorySeparatorChar
	Il2CppChar ___DirectorySeparatorChar_2;
	// System.Char System.IO.Path::PathSeparator
	Il2CppChar ___PathSeparator_3;
	// System.String System.IO.Path::DirectorySeparatorStr
	String_t* ___DirectorySeparatorStr_4;
	// System.Char System.IO.Path::VolumeSeparatorChar
	Il2CppChar ___VolumeSeparatorChar_5;
	// System.Char[] System.IO.Path::PathSeparatorChars
	CharU5BU5D_t3282355116* ___PathSeparatorChars_6;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume_7;

public:
	inline static int32_t get_offset_of_InvalidPathChars_0() { return static_cast<int32_t>(offsetof(Path_t4210848886_StaticFields, ___InvalidPathChars_0)); }
	inline CharU5BU5D_t3282355116* get_InvalidPathChars_0() const { return ___InvalidPathChars_0; }
	inline CharU5BU5D_t3282355116** get_address_of_InvalidPathChars_0() { return &___InvalidPathChars_0; }
	inline void set_InvalidPathChars_0(CharU5BU5D_t3282355116* value)
	{
		___InvalidPathChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___InvalidPathChars_0), value);
	}

	inline static int32_t get_offset_of_AltDirectorySeparatorChar_1() { return static_cast<int32_t>(offsetof(Path_t4210848886_StaticFields, ___AltDirectorySeparatorChar_1)); }
	inline Il2CppChar get_AltDirectorySeparatorChar_1() const { return ___AltDirectorySeparatorChar_1; }
	inline Il2CppChar* get_address_of_AltDirectorySeparatorChar_1() { return &___AltDirectorySeparatorChar_1; }
	inline void set_AltDirectorySeparatorChar_1(Il2CppChar value)
	{
		___AltDirectorySeparatorChar_1 = value;
	}

	inline static int32_t get_offset_of_DirectorySeparatorChar_2() { return static_cast<int32_t>(offsetof(Path_t4210848886_StaticFields, ___DirectorySeparatorChar_2)); }
	inline Il2CppChar get_DirectorySeparatorChar_2() const { return ___DirectorySeparatorChar_2; }
	inline Il2CppChar* get_address_of_DirectorySeparatorChar_2() { return &___DirectorySeparatorChar_2; }
	inline void set_DirectorySeparatorChar_2(Il2CppChar value)
	{
		___DirectorySeparatorChar_2 = value;
	}

	inline static int32_t get_offset_of_PathSeparator_3() { return static_cast<int32_t>(offsetof(Path_t4210848886_StaticFields, ___PathSeparator_3)); }
	inline Il2CppChar get_PathSeparator_3() const { return ___PathSeparator_3; }
	inline Il2CppChar* get_address_of_PathSeparator_3() { return &___PathSeparator_3; }
	inline void set_PathSeparator_3(Il2CppChar value)
	{
		___PathSeparator_3 = value;
	}

	inline static int32_t get_offset_of_DirectorySeparatorStr_4() { return static_cast<int32_t>(offsetof(Path_t4210848886_StaticFields, ___DirectorySeparatorStr_4)); }
	inline String_t* get_DirectorySeparatorStr_4() const { return ___DirectorySeparatorStr_4; }
	inline String_t** get_address_of_DirectorySeparatorStr_4() { return &___DirectorySeparatorStr_4; }
	inline void set_DirectorySeparatorStr_4(String_t* value)
	{
		___DirectorySeparatorStr_4 = value;
		Il2CppCodeGenWriteBarrier((&___DirectorySeparatorStr_4), value);
	}

	inline static int32_t get_offset_of_VolumeSeparatorChar_5() { return static_cast<int32_t>(offsetof(Path_t4210848886_StaticFields, ___VolumeSeparatorChar_5)); }
	inline Il2CppChar get_VolumeSeparatorChar_5() const { return ___VolumeSeparatorChar_5; }
	inline Il2CppChar* get_address_of_VolumeSeparatorChar_5() { return &___VolumeSeparatorChar_5; }
	inline void set_VolumeSeparatorChar_5(Il2CppChar value)
	{
		___VolumeSeparatorChar_5 = value;
	}

	inline static int32_t get_offset_of_PathSeparatorChars_6() { return static_cast<int32_t>(offsetof(Path_t4210848886_StaticFields, ___PathSeparatorChars_6)); }
	inline CharU5BU5D_t3282355116* get_PathSeparatorChars_6() const { return ___PathSeparatorChars_6; }
	inline CharU5BU5D_t3282355116** get_address_of_PathSeparatorChars_6() { return &___PathSeparatorChars_6; }
	inline void set_PathSeparatorChars_6(CharU5BU5D_t3282355116* value)
	{
		___PathSeparatorChars_6 = value;
		Il2CppCodeGenWriteBarrier((&___PathSeparatorChars_6), value);
	}

	inline static int32_t get_offset_of_dirEqualsVolume_7() { return static_cast<int32_t>(offsetof(Path_t4210848886_StaticFields, ___dirEqualsVolume_7)); }
	inline bool get_dirEqualsVolume_7() const { return ___dirEqualsVolume_7; }
	inline bool* get_address_of_dirEqualsVolume_7() { return &___dirEqualsVolume_7; }
	inline void set_dirEqualsVolume_7(bool value)
	{
		___dirEqualsVolume_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATH_T4210848886_H
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
#ifndef SEARCHPATTERN_T3748705636_H
#define SEARCHPATTERN_T3748705636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SearchPattern
struct  SearchPattern_t3748705636  : public RuntimeObject
{
public:

public:
};

struct SearchPattern_t3748705636_StaticFields
{
public:
	// System.Char[] System.IO.SearchPattern::WildcardChars
	CharU5BU5D_t3282355116* ___WildcardChars_0;
	// System.Char[] System.IO.SearchPattern::InvalidChars
	CharU5BU5D_t3282355116* ___InvalidChars_1;

public:
	inline static int32_t get_offset_of_WildcardChars_0() { return static_cast<int32_t>(offsetof(SearchPattern_t3748705636_StaticFields, ___WildcardChars_0)); }
	inline CharU5BU5D_t3282355116* get_WildcardChars_0() const { return ___WildcardChars_0; }
	inline CharU5BU5D_t3282355116** get_address_of_WildcardChars_0() { return &___WildcardChars_0; }
	inline void set_WildcardChars_0(CharU5BU5D_t3282355116* value)
	{
		___WildcardChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___WildcardChars_0), value);
	}

	inline static int32_t get_offset_of_InvalidChars_1() { return static_cast<int32_t>(offsetof(SearchPattern_t3748705636_StaticFields, ___InvalidChars_1)); }
	inline CharU5BU5D_t3282355116* get_InvalidChars_1() const { return ___InvalidChars_1; }
	inline CharU5BU5D_t3282355116** get_address_of_InvalidChars_1() { return &___InvalidChars_1; }
	inline void set_InvalidChars_1(CharU5BU5D_t3282355116* value)
	{
		___InvalidChars_1 = value;
		Il2CppCodeGenWriteBarrier((&___InvalidChars_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEARCHPATTERN_T3748705636_H
#ifndef LISTVALUES_T3632317156_H
#define LISTVALUES_T3632317156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/ListValues
struct  ListValues_t3632317156  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/ListValues::host
	SortedList_t1937438985 * ___host_0;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(ListValues_t3632317156, ___host_0)); }
	inline SortedList_t1937438985 * get_host_0() const { return ___host_0; }
	inline SortedList_t1937438985 ** get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(SortedList_t1937438985 * value)
	{
		___host_0 = value;
		Il2CppCodeGenWriteBarrier((&___host_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTVALUES_T3632317156_H
#ifndef STACK_T1828224996_H
#define STACK_T1828224996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack
struct  Stack_t1828224996  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::contents
	ObjectU5BU5D_t864419831* ___contents_0;
	// System.Int32 System.Collections.Stack::current
	int32_t ___current_1;
	// System.Int32 System.Collections.Stack::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Stack::capacity
	int32_t ___capacity_3;
	// System.Int32 System.Collections.Stack::modCount
	int32_t ___modCount_4;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(Stack_t1828224996, ___contents_0)); }
	inline ObjectU5BU5D_t864419831* get_contents_0() const { return ___contents_0; }
	inline ObjectU5BU5D_t864419831** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(ObjectU5BU5D_t864419831* value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(Stack_t1828224996, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Stack_t1828224996, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(Stack_t1828224996, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_modCount_4() { return static_cast<int32_t>(offsetof(Stack_t1828224996, ___modCount_4)); }
	inline int32_t get_modCount_4() const { return ___modCount_4; }
	inline int32_t* get_address_of_modCount_4() { return &___modCount_4; }
	inline void set_modCount_4(int32_t value)
	{
		___modCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_T1828224996_H
#ifndef ENUMERATOR_T3805982844_H
#define ENUMERATOR_T3805982844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack/Enumerator
struct  Enumerator_t3805982844  : public RuntimeObject
{
public:
	// System.Collections.Stack System.Collections.Stack/Enumerator::stack
	Stack_t1828224996 * ___stack_0;
	// System.Int32 System.Collections.Stack/Enumerator::modCount
	int32_t ___modCount_1;
	// System.Int32 System.Collections.Stack/Enumerator::current
	int32_t ___current_2;

public:
	inline static int32_t get_offset_of_stack_0() { return static_cast<int32_t>(offsetof(Enumerator_t3805982844, ___stack_0)); }
	inline Stack_t1828224996 * get_stack_0() const { return ___stack_0; }
	inline Stack_t1828224996 ** get_address_of_stack_0() { return &___stack_0; }
	inline void set_stack_0(Stack_t1828224996 * value)
	{
		___stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___stack_0), value);
	}

	inline static int32_t get_offset_of_modCount_1() { return static_cast<int32_t>(offsetof(Enumerator_t3805982844, ___modCount_1)); }
	inline int32_t get_modCount_1() const { return ___modCount_1; }
	inline int32_t* get_address_of_modCount_1() { return &___modCount_1; }
	inline void set_modCount_1(int32_t value)
	{
		___modCount_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Enumerator_t3805982844, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3805982844_H
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
#ifndef LISTKEYS_T958862122_H
#define LISTKEYS_T958862122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/ListKeys
struct  ListKeys_t958862122  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/ListKeys::host
	SortedList_t1937438985 * ___host_0;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(ListKeys_t958862122, ___host_0)); }
	inline SortedList_t1937438985 * get_host_0() const { return ___host_0; }
	inline SortedList_t1937438985 ** get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(SortedList_t1937438985 * value)
	{
		___host_0 = value;
		Il2CppCodeGenWriteBarrier((&___host_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTKEYS_T958862122_H
#ifndef TEXTWRITER_T675367350_H
#define TEXTWRITER_T675367350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t675367350  : public RuntimeObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t3282355116* ___CoreNewLine_0;
	// System.IFormatProvider System.IO.TextWriter::internalFormatProvider
	RuntimeObject* ___internalFormatProvider_1;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t675367350, ___CoreNewLine_0)); }
	inline CharU5BU5D_t3282355116* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t3282355116** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t3282355116* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_0), value);
	}

	inline static int32_t get_offset_of_internalFormatProvider_1() { return static_cast<int32_t>(offsetof(TextWriter_t675367350, ___internalFormatProvider_1)); }
	inline RuntimeObject* get_internalFormatProvider_1() const { return ___internalFormatProvider_1; }
	inline RuntimeObject** get_address_of_internalFormatProvider_1() { return &___internalFormatProvider_1; }
	inline void set_internalFormatProvider_1(RuntimeObject* value)
	{
		___internalFormatProvider_1 = value;
		Il2CppCodeGenWriteBarrier((&___internalFormatProvider_1), value);
	}
};

struct TextWriter_t675367350_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t675367350 * ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(TextWriter_t675367350_StaticFields, ___Null_2)); }
	inline TextWriter_t675367350 * get_Null_2() const { return ___Null_2; }
	inline TextWriter_t675367350 ** get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(TextWriter_t675367350 * value)
	{
		___Null_2 = value;
		Il2CppCodeGenWriteBarrier((&___Null_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T675367350_H
#ifndef STREAMREADER_T2455118396_H
#define STREAMREADER_T2455118396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamReader
struct  StreamReader_t2455118396  : public TextReader_t3170198631
{
public:
	// System.Byte[] System.IO.StreamReader::input_buffer
	ByteU5BU5D_t2378657911* ___input_buffer_1;
	// System.Char[] System.IO.StreamReader::decoded_buffer
	CharU5BU5D_t3282355116* ___decoded_buffer_2;
	// System.Int32 System.IO.StreamReader::decoded_count
	int32_t ___decoded_count_3;
	// System.Int32 System.IO.StreamReader::pos
	int32_t ___pos_4;
	// System.Int32 System.IO.StreamReader::buffer_size
	int32_t ___buffer_size_5;
	// System.Int32 System.IO.StreamReader::do_checks
	int32_t ___do_checks_6;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t2463672681 * ___encoding_7;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t685057947 * ___decoder_8;
	// System.IO.Stream System.IO.StreamReader::base_stream
	Stream_t2967449720 * ___base_stream_9;
	// System.Boolean System.IO.StreamReader::mayBlock
	bool ___mayBlock_10;
	// System.Text.StringBuilder System.IO.StreamReader::line_builder
	StringBuilder_t548394584 * ___line_builder_11;
	// System.Boolean System.IO.StreamReader::foundCR
	bool ___foundCR_13;

public:
	inline static int32_t get_offset_of_input_buffer_1() { return static_cast<int32_t>(offsetof(StreamReader_t2455118396, ___input_buffer_1)); }
	inline ByteU5BU5D_t2378657911* get_input_buffer_1() const { return ___input_buffer_1; }
	inline ByteU5BU5D_t2378657911** get_address_of_input_buffer_1() { return &___input_buffer_1; }
	inline void set_input_buffer_1(ByteU5BU5D_t2378657911* value)
	{
		___input_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___input_buffer_1), value);
	}

	inline static int32_t get_offset_of_decoded_buffer_2() { return static_cast<int32_t>(offsetof(StreamReader_t2455118396, ___decoded_buffer_2)); }
	inline CharU5BU5D_t3282355116* get_decoded_buffer_2() const { return ___decoded_buffer_2; }
	inline CharU5BU5D_t3282355116** get_address_of_decoded_buffer_2() { return &___decoded_buffer_2; }
	inline void set_decoded_buffer_2(CharU5BU5D_t3282355116* value)
	{
		___decoded_buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___decoded_buffer_2), value);
	}

	inline static int32_t get_offset_of_decoded_count_3() { return static_cast<int32_t>(offsetof(StreamReader_t2455118396, ___decoded_count_3)); }
	inline int32_t get_decoded_count_3() const { return ___decoded_count_3; }
	inline int32_t* get_address_of_decoded_count_3() { return &___decoded_count_3; }
	inline void set_decoded_count_3(int32_t value)
	{
		___decoded_count_3 = value;
	}

	inline static int32_t get_offset_of_pos_4() { return static_cast<int32_t>(offsetof(StreamReader_t2455118396, ___pos_4)); }
	inline int32_t get_pos_4() const { return ___pos_4; }
	inline int32_t* get_address_of_pos_4() { return &___pos_4; }
	inline void set_pos_4(int32_t value)
	{
		___pos_4 = value;
	}

	inline static int32_t get_offset_of_buffer_size_5() { return static_cast<int32_t>(offsetof(StreamReader_t2455118396, ___buffer_size_5)); }
	inline int32_t get_buffer_size_5() const { return ___buffer_size_5; }
	inline int32_t* get_address_of_buffer_size_5() { return &___buffer_size_5; }
	inline void set_buffer_size_5(int32_t value)
	{
		___buffer_size_5 = value;
	}

	inline static int32_t get_offset_of_do_checks_6() { return static_cast<int32_t>(offsetof(StreamReader_t2455118396, ___do_checks_6)); }
	inline int32_t get_do_checks_6() const { return ___do_checks_6; }
	inline int32_t* get_address_of_do_checks_6() { return &___do_checks_6; }
	inline void set_do_checks_6(int32_t value)
	{
		___do_checks_6 = value;
	}

	inline static int32_t get_offset_of_encoding_7() { return static_cast<int32_t>(offsetof(StreamReader_t2455118396, ___encoding_7)); }
	inline Encoding_t2463672681 * get_encoding_7() const { return ___encoding_7; }
	inline Encoding_t2463672681 ** get_address_of_encoding_7() { return &___encoding_7; }
	inline void set_encoding_7(Encoding_t2463672681 * value)
	{
		___encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_7), value);
	}

	inline static int32_t get_offset_of_decoder_8() { return static_cast<int32_t>(offsetof(StreamReader_t2455118396, ___decoder_8)); }
	inline Decoder_t685057947 * get_decoder_8() const { return ___decoder_8; }
	inline Decoder_t685057947 ** get_address_of_decoder_8() { return &___decoder_8; }
	inline void set_decoder_8(Decoder_t685057947 * value)
	{
		___decoder_8 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_8), value);
	}

	inline static int32_t get_offset_of_base_stream_9() { return static_cast<int32_t>(offsetof(StreamReader_t2455118396, ___base_stream_9)); }
	inline Stream_t2967449720 * get_base_stream_9() const { return ___base_stream_9; }
	inline Stream_t2967449720 ** get_address_of_base_stream_9() { return &___base_stream_9; }
	inline void set_base_stream_9(Stream_t2967449720 * value)
	{
		___base_stream_9 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_9), value);
	}

	inline static int32_t get_offset_of_mayBlock_10() { return static_cast<int32_t>(offsetof(StreamReader_t2455118396, ___mayBlock_10)); }
	inline bool get_mayBlock_10() const { return ___mayBlock_10; }
	inline bool* get_address_of_mayBlock_10() { return &___mayBlock_10; }
	inline void set_mayBlock_10(bool value)
	{
		___mayBlock_10 = value;
	}

	inline static int32_t get_offset_of_line_builder_11() { return static_cast<int32_t>(offsetof(StreamReader_t2455118396, ___line_builder_11)); }
	inline StringBuilder_t548394584 * get_line_builder_11() const { return ___line_builder_11; }
	inline StringBuilder_t548394584 ** get_address_of_line_builder_11() { return &___line_builder_11; }
	inline void set_line_builder_11(StringBuilder_t548394584 * value)
	{
		___line_builder_11 = value;
		Il2CppCodeGenWriteBarrier((&___line_builder_11), value);
	}

	inline static int32_t get_offset_of_foundCR_13() { return static_cast<int32_t>(offsetof(StreamReader_t2455118396, ___foundCR_13)); }
	inline bool get_foundCR_13() const { return ___foundCR_13; }
	inline bool* get_address_of_foundCR_13() { return &___foundCR_13; }
	inline void set_foundCR_13(bool value)
	{
		___foundCR_13 = value;
	}
};

struct StreamReader_t2455118396_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t2455118396 * ___Null_12;

public:
	inline static int32_t get_offset_of_Null_12() { return static_cast<int32_t>(offsetof(StreamReader_t2455118396_StaticFields, ___Null_12)); }
	inline StreamReader_t2455118396 * get_Null_12() const { return ___Null_12; }
	inline StreamReader_t2455118396 ** get_address_of_Null_12() { return &___Null_12; }
	inline void set_Null_12(StreamReader_t2455118396 * value)
	{
		___Null_12 = value;
		Il2CppCodeGenWriteBarrier((&___Null_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMREADER_T2455118396_H
#ifndef NULLTEXTREADER_T3065414229_H
#define NULLTEXTREADER_T3065414229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader/NullTextReader
struct  NullTextReader_t3065414229  : public TextReader_t3170198631
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLTEXTREADER_T3065414229_H
#ifndef STRINGWRITER_T2296248994_H
#define STRINGWRITER_T2296248994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringWriter
struct  StringWriter_t2296248994  : public TextWriter_t675367350
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t548394584 * ___internalString_3;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_internalString_3() { return static_cast<int32_t>(offsetof(StringWriter_t2296248994, ___internalString_3)); }
	inline StringBuilder_t548394584 * get_internalString_3() const { return ___internalString_3; }
	inline StringBuilder_t548394584 ** get_address_of_internalString_3() { return &___internalString_3; }
	inline void set_internalString_3(StringBuilder_t548394584 * value)
	{
		___internalString_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalString_3), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(StringWriter_t2296248994, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGWRITER_T2296248994_H
#ifndef NULLSTREAM_T1803732316_H
#define NULLSTREAM_T1803732316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.NullStream
struct  NullStream_t1803732316  : public Stream_t2967449720
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLSTREAM_T1803732316_H
#ifndef STRINGREADER_T2331713704_H
#define STRINGREADER_T2331713704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringReader
struct  StringReader_t2331713704  : public TextReader_t3170198631
{
public:
	// System.String System.IO.StringReader::source
	String_t* ___source_1;
	// System.Int32 System.IO.StringReader::nextChar
	int32_t ___nextChar_2;
	// System.Int32 System.IO.StringReader::sourceLength
	int32_t ___sourceLength_3;

public:
	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(StringReader_t2331713704, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_nextChar_2() { return static_cast<int32_t>(offsetof(StringReader_t2331713704, ___nextChar_2)); }
	inline int32_t get_nextChar_2() const { return ___nextChar_2; }
	inline int32_t* get_address_of_nextChar_2() { return &___nextChar_2; }
	inline void set_nextChar_2(int32_t value)
	{
		___nextChar_2 = value;
	}

	inline static int32_t get_offset_of_sourceLength_3() { return static_cast<int32_t>(offsetof(StringReader_t2331713704, ___sourceLength_3)); }
	inline int32_t get_sourceLength_3() const { return ___sourceLength_3; }
	inline int32_t* get_address_of_sourceLength_3() { return &___sourceLength_3; }
	inline void set_sourceLength_3(int32_t value)
	{
		___sourceLength_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGREADER_T2331713704_H
#ifndef SYNCHRONIZEDREADER_T2484596036_H
#define SYNCHRONIZEDREADER_T2484596036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SynchronizedReader
struct  SynchronizedReader_t2484596036  : public TextReader_t3170198631
{
public:
	// System.IO.TextReader System.IO.SynchronizedReader::reader
	TextReader_t3170198631 * ___reader_1;

public:
	inline static int32_t get_offset_of_reader_1() { return static_cast<int32_t>(offsetof(SynchronizedReader_t2484596036, ___reader_1)); }
	inline TextReader_t3170198631 * get_reader_1() const { return ___reader_1; }
	inline TextReader_t3170198631 ** get_address_of_reader_1() { return &___reader_1; }
	inline void set_reader_1(TextReader_t3170198631 * value)
	{
		___reader_1 = value;
		Il2CppCodeGenWriteBarrier((&___reader_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDREADER_T2484596036_H
#ifndef ISOLATEDSTORAGEEXCEPTION_T874190833_H
#define ISOLATEDSTORAGEEXCEPTION_T874190833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.IsolatedStorage.IsolatedStorageException
struct  IsolatedStorageException_t874190833  : public Exception_t76254738
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISOLATEDSTORAGEEXCEPTION_T874190833_H
#ifndef STREAMWRITER_T2545229667_H
#define STREAMWRITER_T2545229667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamWriter
struct  StreamWriter_t2545229667  : public TextWriter_t675367350
{
public:
	// System.Text.Encoding System.IO.StreamWriter::internalEncoding
	Encoding_t2463672681 * ___internalEncoding_3;
	// System.IO.Stream System.IO.StreamWriter::internalStream
	Stream_t2967449720 * ___internalStream_4;
	// System.Boolean System.IO.StreamWriter::iflush
	bool ___iflush_5;
	// System.Byte[] System.IO.StreamWriter::byte_buf
	ByteU5BU5D_t2378657911* ___byte_buf_6;
	// System.Int32 System.IO.StreamWriter::byte_pos
	int32_t ___byte_pos_7;
	// System.Char[] System.IO.StreamWriter::decode_buf
	CharU5BU5D_t3282355116* ___decode_buf_8;
	// System.Int32 System.IO.StreamWriter::decode_pos
	int32_t ___decode_pos_9;
	// System.Boolean System.IO.StreamWriter::DisposedAlready
	bool ___DisposedAlready_10;
	// System.Boolean System.IO.StreamWriter::preamble_done
	bool ___preamble_done_11;

public:
	inline static int32_t get_offset_of_internalEncoding_3() { return static_cast<int32_t>(offsetof(StreamWriter_t2545229667, ___internalEncoding_3)); }
	inline Encoding_t2463672681 * get_internalEncoding_3() const { return ___internalEncoding_3; }
	inline Encoding_t2463672681 ** get_address_of_internalEncoding_3() { return &___internalEncoding_3; }
	inline void set_internalEncoding_3(Encoding_t2463672681 * value)
	{
		___internalEncoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalEncoding_3), value);
	}

	inline static int32_t get_offset_of_internalStream_4() { return static_cast<int32_t>(offsetof(StreamWriter_t2545229667, ___internalStream_4)); }
	inline Stream_t2967449720 * get_internalStream_4() const { return ___internalStream_4; }
	inline Stream_t2967449720 ** get_address_of_internalStream_4() { return &___internalStream_4; }
	inline void set_internalStream_4(Stream_t2967449720 * value)
	{
		___internalStream_4 = value;
		Il2CppCodeGenWriteBarrier((&___internalStream_4), value);
	}

	inline static int32_t get_offset_of_iflush_5() { return static_cast<int32_t>(offsetof(StreamWriter_t2545229667, ___iflush_5)); }
	inline bool get_iflush_5() const { return ___iflush_5; }
	inline bool* get_address_of_iflush_5() { return &___iflush_5; }
	inline void set_iflush_5(bool value)
	{
		___iflush_5 = value;
	}

	inline static int32_t get_offset_of_byte_buf_6() { return static_cast<int32_t>(offsetof(StreamWriter_t2545229667, ___byte_buf_6)); }
	inline ByteU5BU5D_t2378657911* get_byte_buf_6() const { return ___byte_buf_6; }
	inline ByteU5BU5D_t2378657911** get_address_of_byte_buf_6() { return &___byte_buf_6; }
	inline void set_byte_buf_6(ByteU5BU5D_t2378657911* value)
	{
		___byte_buf_6 = value;
		Il2CppCodeGenWriteBarrier((&___byte_buf_6), value);
	}

	inline static int32_t get_offset_of_byte_pos_7() { return static_cast<int32_t>(offsetof(StreamWriter_t2545229667, ___byte_pos_7)); }
	inline int32_t get_byte_pos_7() const { return ___byte_pos_7; }
	inline int32_t* get_address_of_byte_pos_7() { return &___byte_pos_7; }
	inline void set_byte_pos_7(int32_t value)
	{
		___byte_pos_7 = value;
	}

	inline static int32_t get_offset_of_decode_buf_8() { return static_cast<int32_t>(offsetof(StreamWriter_t2545229667, ___decode_buf_8)); }
	inline CharU5BU5D_t3282355116* get_decode_buf_8() const { return ___decode_buf_8; }
	inline CharU5BU5D_t3282355116** get_address_of_decode_buf_8() { return &___decode_buf_8; }
	inline void set_decode_buf_8(CharU5BU5D_t3282355116* value)
	{
		___decode_buf_8 = value;
		Il2CppCodeGenWriteBarrier((&___decode_buf_8), value);
	}

	inline static int32_t get_offset_of_decode_pos_9() { return static_cast<int32_t>(offsetof(StreamWriter_t2545229667, ___decode_pos_9)); }
	inline int32_t get_decode_pos_9() const { return ___decode_pos_9; }
	inline int32_t* get_address_of_decode_pos_9() { return &___decode_pos_9; }
	inline void set_decode_pos_9(int32_t value)
	{
		___decode_pos_9 = value;
	}

	inline static int32_t get_offset_of_DisposedAlready_10() { return static_cast<int32_t>(offsetof(StreamWriter_t2545229667, ___DisposedAlready_10)); }
	inline bool get_DisposedAlready_10() const { return ___DisposedAlready_10; }
	inline bool* get_address_of_DisposedAlready_10() { return &___DisposedAlready_10; }
	inline void set_DisposedAlready_10(bool value)
	{
		___DisposedAlready_10 = value;
	}

	inline static int32_t get_offset_of_preamble_done_11() { return static_cast<int32_t>(offsetof(StreamWriter_t2545229667, ___preamble_done_11)); }
	inline bool get_preamble_done_11() const { return ___preamble_done_11; }
	inline bool* get_address_of_preamble_done_11() { return &___preamble_done_11; }
	inline void set_preamble_done_11(bool value)
	{
		___preamble_done_11 = value;
	}
};

struct StreamWriter_t2545229667_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t2545229667 * ___Null_12;

public:
	inline static int32_t get_offset_of_Null_12() { return static_cast<int32_t>(offsetof(StreamWriter_t2545229667_StaticFields, ___Null_12)); }
	inline StreamWriter_t2545229667 * get_Null_12() const { return ___Null_12; }
	inline StreamWriter_t2545229667 ** get_address_of_Null_12() { return &___Null_12; }
	inline void set_Null_12(StreamWriter_t2545229667 * value)
	{
		___Null_12 = value;
		Il2CppCodeGenWriteBarrier((&___Null_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMWRITER_T2545229667_H
#ifndef MEMORYSTREAM_T1222863450_H
#define MEMORYSTREAM_T1222863450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MemoryStream
struct  MemoryStream_t1222863450  : public Stream_t2967449720
{
public:
	// System.Boolean System.IO.MemoryStream::canWrite
	bool ___canWrite_1;
	// System.Boolean System.IO.MemoryStream::allowGetBuffer
	bool ___allowGetBuffer_2;
	// System.Int32 System.IO.MemoryStream::capacity
	int32_t ___capacity_3;
	// System.Int32 System.IO.MemoryStream::length
	int32_t ___length_4;
	// System.Byte[] System.IO.MemoryStream::internalBuffer
	ByteU5BU5D_t2378657911* ___internalBuffer_5;
	// System.Int32 System.IO.MemoryStream::initialIndex
	int32_t ___initialIndex_6;
	// System.Boolean System.IO.MemoryStream::expandable
	bool ___expandable_7;
	// System.Boolean System.IO.MemoryStream::streamClosed
	bool ___streamClosed_8;
	// System.Int32 System.IO.MemoryStream::position
	int32_t ___position_9;
	// System.Int32 System.IO.MemoryStream::dirty_bytes
	int32_t ___dirty_bytes_10;

public:
	inline static int32_t get_offset_of_canWrite_1() { return static_cast<int32_t>(offsetof(MemoryStream_t1222863450, ___canWrite_1)); }
	inline bool get_canWrite_1() const { return ___canWrite_1; }
	inline bool* get_address_of_canWrite_1() { return &___canWrite_1; }
	inline void set_canWrite_1(bool value)
	{
		___canWrite_1 = value;
	}

	inline static int32_t get_offset_of_allowGetBuffer_2() { return static_cast<int32_t>(offsetof(MemoryStream_t1222863450, ___allowGetBuffer_2)); }
	inline bool get_allowGetBuffer_2() const { return ___allowGetBuffer_2; }
	inline bool* get_address_of_allowGetBuffer_2() { return &___allowGetBuffer_2; }
	inline void set_allowGetBuffer_2(bool value)
	{
		___allowGetBuffer_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(MemoryStream_t1222863450, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(MemoryStream_t1222863450, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_internalBuffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t1222863450, ___internalBuffer_5)); }
	inline ByteU5BU5D_t2378657911* get_internalBuffer_5() const { return ___internalBuffer_5; }
	inline ByteU5BU5D_t2378657911** get_address_of_internalBuffer_5() { return &___internalBuffer_5; }
	inline void set_internalBuffer_5(ByteU5BU5D_t2378657911* value)
	{
		___internalBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___internalBuffer_5), value);
	}

	inline static int32_t get_offset_of_initialIndex_6() { return static_cast<int32_t>(offsetof(MemoryStream_t1222863450, ___initialIndex_6)); }
	inline int32_t get_initialIndex_6() const { return ___initialIndex_6; }
	inline int32_t* get_address_of_initialIndex_6() { return &___initialIndex_6; }
	inline void set_initialIndex_6(int32_t value)
	{
		___initialIndex_6 = value;
	}

	inline static int32_t get_offset_of_expandable_7() { return static_cast<int32_t>(offsetof(MemoryStream_t1222863450, ___expandable_7)); }
	inline bool get_expandable_7() const { return ___expandable_7; }
	inline bool* get_address_of_expandable_7() { return &___expandable_7; }
	inline void set_expandable_7(bool value)
	{
		___expandable_7 = value;
	}

	inline static int32_t get_offset_of_streamClosed_8() { return static_cast<int32_t>(offsetof(MemoryStream_t1222863450, ___streamClosed_8)); }
	inline bool get_streamClosed_8() const { return ___streamClosed_8; }
	inline bool* get_address_of_streamClosed_8() { return &___streamClosed_8; }
	inline void set_streamClosed_8(bool value)
	{
		___streamClosed_8 = value;
	}

	inline static int32_t get_offset_of_position_9() { return static_cast<int32_t>(offsetof(MemoryStream_t1222863450, ___position_9)); }
	inline int32_t get_position_9() const { return ___position_9; }
	inline int32_t* get_address_of_position_9() { return &___position_9; }
	inline void set_position_9(int32_t value)
	{
		___position_9 = value;
	}

	inline static int32_t get_offset_of_dirty_bytes_10() { return static_cast<int32_t>(offsetof(MemoryStream_t1222863450, ___dirty_bytes_10)); }
	inline int32_t get_dirty_bytes_10() const { return ___dirty_bytes_10; }
	inline int32_t* get_address_of_dirty_bytes_10() { return &___dirty_bytes_10; }
	inline void set_dirty_bytes_10(int32_t value)
	{
		___dirty_bytes_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYSTREAM_T1222863450_H
#ifndef NULLTEXTWRITER_T3732764272_H
#define NULLTEXTWRITER_T3732764272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter/NullTextWriter
struct  NullTextWriter_t3732764272  : public TextWriter_t675367350
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLTEXTWRITER_T3732764272_H
#ifndef SYNCHRONIZEDWRITER_T3699379180_H
#define SYNCHRONIZEDWRITER_T3699379180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SynchronizedWriter
struct  SynchronizedWriter_t3699379180  : public TextWriter_t675367350
{
public:
	// System.IO.TextWriter System.IO.SynchronizedWriter::writer
	TextWriter_t675367350 * ___writer_3;
	// System.Boolean System.IO.SynchronizedWriter::neverClose
	bool ___neverClose_4;

public:
	inline static int32_t get_offset_of_writer_3() { return static_cast<int32_t>(offsetof(SynchronizedWriter_t3699379180, ___writer_3)); }
	inline TextWriter_t675367350 * get_writer_3() const { return ___writer_3; }
	inline TextWriter_t675367350 ** get_address_of_writer_3() { return &___writer_3; }
	inline void set_writer_3(TextWriter_t675367350 * value)
	{
		___writer_3 = value;
		Il2CppCodeGenWriteBarrier((&___writer_3), value);
	}

	inline static int32_t get_offset_of_neverClose_4() { return static_cast<int32_t>(offsetof(SynchronizedWriter_t3699379180, ___neverClose_4)); }
	inline bool get_neverClose_4() const { return ___neverClose_4; }
	inline bool* get_address_of_neverClose_4() { return &___neverClose_4; }
	inline void set_neverClose_4(bool value)
	{
		___neverClose_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDWRITER_T3699379180_H
#ifndef SYNCHASHTABLE_T4223980992_H
#define SYNCHASHTABLE_T4223980992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/SyncHashtable
struct  SyncHashtable_t4223980992  : public Hashtable_t188184851
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/SyncHashtable::host
	Hashtable_t188184851 * ___host_14;

public:
	inline static int32_t get_offset_of_host_14() { return static_cast<int32_t>(offsetof(SyncHashtable_t4223980992, ___host_14)); }
	inline Hashtable_t188184851 * get_host_14() const { return ___host_14; }
	inline Hashtable_t188184851 ** get_address_of_host_14() { return &___host_14; }
	inline void set_host_14(Hashtable_t188184851 * value)
	{
		___host_14 = value;
		Il2CppCodeGenWriteBarrier((&___host_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHASHTABLE_T4223980992_H
#ifndef SLOT_T2528459918_H
#define SLOT_T2528459918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/Slot
struct  Slot_t2528459918 
{
public:
	// System.Object System.Collections.SortedList/Slot::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.SortedList/Slot::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Slot_t2528459918, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Slot_t2528459918, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.SortedList/Slot
struct Slot_t2528459918_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Collections.SortedList/Slot
struct Slot_t2528459918_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
#endif // SLOT_T2528459918_H
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
#ifndef DEBUGGERTYPEPROXYATTRIBUTE_T3951296034_H
#define DEBUGGERTYPEPROXYATTRIBUTE_T3951296034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerTypeProxyAttribute
struct  DebuggerTypeProxyAttribute_t3951296034  : public Attribute_t2136411158
{
public:
	// System.String System.Diagnostics.DebuggerTypeProxyAttribute::proxy_type_name
	String_t* ___proxy_type_name_0;

public:
	inline static int32_t get_offset_of_proxy_type_name_0() { return static_cast<int32_t>(offsetof(DebuggerTypeProxyAttribute_t3951296034, ___proxy_type_name_0)); }
	inline String_t* get_proxy_type_name_0() const { return ___proxy_type_name_0; }
	inline String_t** get_address_of_proxy_type_name_0() { return &___proxy_type_name_0; }
	inline void set_proxy_type_name_0(String_t* value)
	{
		___proxy_type_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___proxy_type_name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERTYPEPROXYATTRIBUTE_T3951296034_H
#ifndef DEBUGGERSTEPTHROUGHATTRIBUTE_T3006563842_H
#define DEBUGGERSTEPTHROUGHATTRIBUTE_T3006563842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerStepThroughAttribute
struct  DebuggerStepThroughAttribute_t3006563842  : public Attribute_t2136411158
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERSTEPTHROUGHATTRIBUTE_T3006563842_H
#ifndef DEBUGGERDISPLAYATTRIBUTE_T3774826810_H
#define DEBUGGERDISPLAYATTRIBUTE_T3774826810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerDisplayAttribute
struct  DebuggerDisplayAttribute_t3774826810  : public Attribute_t2136411158
{
public:
	// System.String System.Diagnostics.DebuggerDisplayAttribute::value
	String_t* ___value_0;
	// System.String System.Diagnostics.DebuggerDisplayAttribute::type
	String_t* ___type_1;
	// System.String System.Diagnostics.DebuggerDisplayAttribute::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(DebuggerDisplayAttribute_t3774826810, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(DebuggerDisplayAttribute_t3774826810, ___type_1)); }
	inline String_t* get_type_1() const { return ___type_1; }
	inline String_t** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(String_t* value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(DebuggerDisplayAttribute_t3774826810, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERDISPLAYATTRIBUTE_T3774826810_H
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
#ifndef DATA_T3112185696_H
#define DATA_T3112185696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TextInfo/Data
struct  Data_t3112185696 
{
public:
	// System.Int32 System.Globalization.TextInfo/Data::ansi
	int32_t ___ansi_0;
	// System.Int32 System.Globalization.TextInfo/Data::ebcdic
	int32_t ___ebcdic_1;
	// System.Int32 System.Globalization.TextInfo/Data::mac
	int32_t ___mac_2;
	// System.Int32 System.Globalization.TextInfo/Data::oem
	int32_t ___oem_3;
	// System.Byte System.Globalization.TextInfo/Data::list_sep
	uint8_t ___list_sep_4;

public:
	inline static int32_t get_offset_of_ansi_0() { return static_cast<int32_t>(offsetof(Data_t3112185696, ___ansi_0)); }
	inline int32_t get_ansi_0() const { return ___ansi_0; }
	inline int32_t* get_address_of_ansi_0() { return &___ansi_0; }
	inline void set_ansi_0(int32_t value)
	{
		___ansi_0 = value;
	}

	inline static int32_t get_offset_of_ebcdic_1() { return static_cast<int32_t>(offsetof(Data_t3112185696, ___ebcdic_1)); }
	inline int32_t get_ebcdic_1() const { return ___ebcdic_1; }
	inline int32_t* get_address_of_ebcdic_1() { return &___ebcdic_1; }
	inline void set_ebcdic_1(int32_t value)
	{
		___ebcdic_1 = value;
	}

	inline static int32_t get_offset_of_mac_2() { return static_cast<int32_t>(offsetof(Data_t3112185696, ___mac_2)); }
	inline int32_t get_mac_2() const { return ___mac_2; }
	inline int32_t* get_address_of_mac_2() { return &___mac_2; }
	inline void set_mac_2(int32_t value)
	{
		___mac_2 = value;
	}

	inline static int32_t get_offset_of_oem_3() { return static_cast<int32_t>(offsetof(Data_t3112185696, ___oem_3)); }
	inline int32_t get_oem_3() const { return ___oem_3; }
	inline int32_t* get_address_of_oem_3() { return &___oem_3; }
	inline void set_oem_3(int32_t value)
	{
		___oem_3 = value;
	}

	inline static int32_t get_offset_of_list_sep_4() { return static_cast<int32_t>(offsetof(Data_t3112185696, ___list_sep_4)); }
	inline uint8_t get_list_sep_4() const { return ___list_sep_4; }
	inline uint8_t* get_address_of_list_sep_4() { return &___list_sep_4; }
	inline void set_list_sep_4(uint8_t value)
	{
		___list_sep_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATA_T3112185696_H
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
#ifndef SUPPRESSMESSAGEATTRIBUTE_T3415584592_H
#define SUPPRESSMESSAGEATTRIBUTE_T3415584592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
struct  SuppressMessageAttribute_t3415584592  : public Attribute_t2136411158
{
public:
	// System.String System.Diagnostics.CodeAnalysis.SuppressMessageAttribute::category
	String_t* ___category_0;
	// System.String System.Diagnostics.CodeAnalysis.SuppressMessageAttribute::checkId
	String_t* ___checkId_1;
	// System.String System.Diagnostics.CodeAnalysis.SuppressMessageAttribute::messageId
	String_t* ___messageId_2;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(SuppressMessageAttribute_t3415584592, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_checkId_1() { return static_cast<int32_t>(offsetof(SuppressMessageAttribute_t3415584592, ___checkId_1)); }
	inline String_t* get_checkId_1() const { return ___checkId_1; }
	inline String_t** get_address_of_checkId_1() { return &___checkId_1; }
	inline void set_checkId_1(String_t* value)
	{
		___checkId_1 = value;
		Il2CppCodeGenWriteBarrier((&___checkId_1), value);
	}

	inline static int32_t get_offset_of_messageId_2() { return static_cast<int32_t>(offsetof(SuppressMessageAttribute_t3415584592, ___messageId_2)); }
	inline String_t* get_messageId_2() const { return ___messageId_2; }
	inline String_t** get_address_of_messageId_2() { return &___messageId_2; }
	inline void set_messageId_2(String_t* value)
	{
		___messageId_2 = value;
		Il2CppCodeGenWriteBarrier((&___messageId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPRESSMESSAGEATTRIBUTE_T3415584592_H
#ifndef INT32_T3844565088_H
#define INT32_T3844565088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t3844565088 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t3844565088, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T3844565088_H
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
#ifndef MONOIOERROR_T3383166626_H
#define MONOIOERROR_T3383166626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoIOError
struct  MonoIOError_t3383166626 
{
public:
	// System.Int32 System.IO.MonoIOError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MonoIOError_t3383166626, ___value___1)); }
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
#endif // MONOIOERROR_T3383166626_H
#ifndef NULLSTREAMREADER_T2158021774_H
#define NULLSTREAMREADER_T2158021774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamReader/NullStreamReader
struct  NullStreamReader_t2158021774  : public StreamReader_t2455118396
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLSTREAMREADER_T2158021774_H
#ifndef MONOFILETYPE_T30294204_H
#define MONOFILETYPE_T30294204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoFileType
struct  MonoFileType_t30294204 
{
public:
	// System.Int32 System.IO.MonoFileType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MonoFileType_t30294204, ___value___1)); }
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
#endif // MONOFILETYPE_T30294204_H
#ifndef ENUMERATORMODE_T54187740_H
#define ENUMERATORMODE_T54187740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/EnumeratorMode
struct  EnumeratorMode_t54187740 
{
public:
	// System.Int32 System.Collections.Hashtable/EnumeratorMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EnumeratorMode_t54187740, ___value___1)); }
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
#endif // ENUMERATORMODE_T54187740_H
#ifndef UNEXCEPTIONALSTREAMWRITER_T2253313918_H
#define UNEXCEPTIONALSTREAMWRITER_T2253313918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.UnexceptionalStreamWriter
struct  UnexceptionalStreamWriter_t2253313918  : public StreamWriter_t2545229667
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNEXCEPTIONALSTREAMWRITER_T2253313918_H
#ifndef UNEXCEPTIONALSTREAMREADER_T1586664982_H
#define UNEXCEPTIONALSTREAMREADER_T1586664982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.UnexceptionalStreamReader
struct  UnexceptionalStreamReader_t1586664982  : public StreamReader_t2455118396
{
public:

public:
};

struct UnexceptionalStreamReader_t1586664982_StaticFields
{
public:
	// System.Boolean[] System.IO.UnexceptionalStreamReader::newline
	BooleanU5BU5D_t2673653913* ___newline_14;
	// System.Char System.IO.UnexceptionalStreamReader::newlineChar
	Il2CppChar ___newlineChar_15;

public:
	inline static int32_t get_offset_of_newline_14() { return static_cast<int32_t>(offsetof(UnexceptionalStreamReader_t1586664982_StaticFields, ___newline_14)); }
	inline BooleanU5BU5D_t2673653913* get_newline_14() const { return ___newline_14; }
	inline BooleanU5BU5D_t2673653913** get_address_of_newline_14() { return &___newline_14; }
	inline void set_newline_14(BooleanU5BU5D_t2673653913* value)
	{
		___newline_14 = value;
		Il2CppCodeGenWriteBarrier((&___newline_14), value);
	}

	inline static int32_t get_offset_of_newlineChar_15() { return static_cast<int32_t>(offsetof(UnexceptionalStreamReader_t1586664982_StaticFields, ___newlineChar_15)); }
	inline Il2CppChar get_newlineChar_15() const { return ___newlineChar_15; }
	inline Il2CppChar* get_address_of_newlineChar_15() { return &___newlineChar_15; }
	inline void set_newlineChar_15(Il2CppChar value)
	{
		___newlineChar_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNEXCEPTIONALSTREAMREADER_T1586664982_H
#ifndef SEEKORIGIN_T316084627_H
#define SEEKORIGIN_T316084627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SeekOrigin
struct  SeekOrigin_t316084627 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SeekOrigin_t316084627, ___value___1)); }
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
#endif // SEEKORIGIN_T316084627_H
#ifndef FILEACCESS_T3057088677_H
#define FILEACCESS_T3057088677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t3057088677 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t3057088677, ___value___1)); }
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
#endif // FILEACCESS_T3057088677_H
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
#ifndef GREGORIANCALENDARTYPES_T3662930107_H
#define GREGORIANCALENDARTYPES_T3662930107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.GregorianCalendarTypes
struct  GregorianCalendarTypes_t3662930107 
{
public:
	// System.Int32 System.Globalization.GregorianCalendarTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GregorianCalendarTypes_t3662930107, ___value___1)); }
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
#endif // GREGORIANCALENDARTYPES_T3662930107_H
#ifndef DATETIMEFORMATFLAGS_T881228467_H
#define DATETIMEFORMATFLAGS_T881228467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatFlags
struct  DateTimeFormatFlags_t881228467 
{
public:
	// System.Int32 System.Globalization.DateTimeFormatFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeFormatFlags_t881228467, ___value___1)); }
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
#endif // DATETIMEFORMATFLAGS_T881228467_H
#ifndef CULTURETYPES_T3460380487_H
#define CULTURETYPES_T3460380487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureTypes
struct  CultureTypes_t3460380487 
{
public:
	// System.Int32 System.Globalization.CultureTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CultureTypes_t3460380487, ___value___1)); }
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
#endif // CULTURETYPES_T3460380487_H
#ifndef IOEXCEPTION_T670336194_H
#define IOEXCEPTION_T670336194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.IOException
struct  IOException_t670336194  : public SystemException_t1160535744
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOEXCEPTION_T670336194_H
#ifndef NUMBERSTYLES_T1245864980_H
#define NUMBERSTYLES_T1245864980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberStyles
struct  NumberStyles_t1245864980 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NumberStyles_t1245864980, ___value___1)); }
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
#endif // NUMBERSTYLES_T1245864980_H
#ifndef TEXTINFO_T1015740494_H
#define TEXTINFO_T1015740494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TextInfo
struct  TextInfo_t1015740494  : public RuntimeObject
{
public:
	// System.String System.Globalization.TextInfo::m_listSeparator
	String_t* ___m_listSeparator_0;
	// System.Boolean System.Globalization.TextInfo::m_isReadOnly
	bool ___m_isReadOnly_1;
	// System.String System.Globalization.TextInfo::customCultureName
	String_t* ___customCultureName_2;
	// System.Int32 System.Globalization.TextInfo::m_nDataItem
	int32_t ___m_nDataItem_3;
	// System.Boolean System.Globalization.TextInfo::m_useUserOverride
	bool ___m_useUserOverride_4;
	// System.Int32 System.Globalization.TextInfo::m_win32LangID
	int32_t ___m_win32LangID_5;
	// System.Globalization.CultureInfo System.Globalization.TextInfo::ci
	CultureInfo_t2669610510 * ___ci_6;
	// System.Boolean System.Globalization.TextInfo::handleDotI
	bool ___handleDotI_7;
	// System.Globalization.TextInfo/Data System.Globalization.TextInfo::data
	Data_t3112185696  ___data_8;

public:
	inline static int32_t get_offset_of_m_listSeparator_0() { return static_cast<int32_t>(offsetof(TextInfo_t1015740494, ___m_listSeparator_0)); }
	inline String_t* get_m_listSeparator_0() const { return ___m_listSeparator_0; }
	inline String_t** get_address_of_m_listSeparator_0() { return &___m_listSeparator_0; }
	inline void set_m_listSeparator_0(String_t* value)
	{
		___m_listSeparator_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_listSeparator_0), value);
	}

	inline static int32_t get_offset_of_m_isReadOnly_1() { return static_cast<int32_t>(offsetof(TextInfo_t1015740494, ___m_isReadOnly_1)); }
	inline bool get_m_isReadOnly_1() const { return ___m_isReadOnly_1; }
	inline bool* get_address_of_m_isReadOnly_1() { return &___m_isReadOnly_1; }
	inline void set_m_isReadOnly_1(bool value)
	{
		___m_isReadOnly_1 = value;
	}

	inline static int32_t get_offset_of_customCultureName_2() { return static_cast<int32_t>(offsetof(TextInfo_t1015740494, ___customCultureName_2)); }
	inline String_t* get_customCultureName_2() const { return ___customCultureName_2; }
	inline String_t** get_address_of_customCultureName_2() { return &___customCultureName_2; }
	inline void set_customCultureName_2(String_t* value)
	{
		___customCultureName_2 = value;
		Il2CppCodeGenWriteBarrier((&___customCultureName_2), value);
	}

	inline static int32_t get_offset_of_m_nDataItem_3() { return static_cast<int32_t>(offsetof(TextInfo_t1015740494, ___m_nDataItem_3)); }
	inline int32_t get_m_nDataItem_3() const { return ___m_nDataItem_3; }
	inline int32_t* get_address_of_m_nDataItem_3() { return &___m_nDataItem_3; }
	inline void set_m_nDataItem_3(int32_t value)
	{
		___m_nDataItem_3 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_4() { return static_cast<int32_t>(offsetof(TextInfo_t1015740494, ___m_useUserOverride_4)); }
	inline bool get_m_useUserOverride_4() const { return ___m_useUserOverride_4; }
	inline bool* get_address_of_m_useUserOverride_4() { return &___m_useUserOverride_4; }
	inline void set_m_useUserOverride_4(bool value)
	{
		___m_useUserOverride_4 = value;
	}

	inline static int32_t get_offset_of_m_win32LangID_5() { return static_cast<int32_t>(offsetof(TextInfo_t1015740494, ___m_win32LangID_5)); }
	inline int32_t get_m_win32LangID_5() const { return ___m_win32LangID_5; }
	inline int32_t* get_address_of_m_win32LangID_5() { return &___m_win32LangID_5; }
	inline void set_m_win32LangID_5(int32_t value)
	{
		___m_win32LangID_5 = value;
	}

	inline static int32_t get_offset_of_ci_6() { return static_cast<int32_t>(offsetof(TextInfo_t1015740494, ___ci_6)); }
	inline CultureInfo_t2669610510 * get_ci_6() const { return ___ci_6; }
	inline CultureInfo_t2669610510 ** get_address_of_ci_6() { return &___ci_6; }
	inline void set_ci_6(CultureInfo_t2669610510 * value)
	{
		___ci_6 = value;
		Il2CppCodeGenWriteBarrier((&___ci_6), value);
	}

	inline static int32_t get_offset_of_handleDotI_7() { return static_cast<int32_t>(offsetof(TextInfo_t1015740494, ___handleDotI_7)); }
	inline bool get_handleDotI_7() const { return ___handleDotI_7; }
	inline bool* get_address_of_handleDotI_7() { return &___handleDotI_7; }
	inline void set_handleDotI_7(bool value)
	{
		___handleDotI_7 = value;
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(TextInfo_t1015740494, ___data_8)); }
	inline Data_t3112185696  get_data_8() const { return ___data_8; }
	inline Data_t3112185696 * get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(Data_t3112185696  value)
	{
		___data_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTINFO_T1015740494_H
#ifndef UNICODECATEGORY_T3164168048_H
#define UNICODECATEGORY_T3164168048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.UnicodeCategory
struct  UnicodeCategory_t3164168048 
{
public:
	// System.Int32 System.Globalization.UnicodeCategory::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnicodeCategory_t3164168048, ___value___1)); }
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
#endif // UNICODECATEGORY_T3164168048_H
#ifndef COMPAREOPTIONS_T3164485570_H
#define COMPAREOPTIONS_T3164485570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareOptions
struct  CompareOptions_t3164485570 
{
public:
	// System.Int32 System.Globalization.CompareOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompareOptions_t3164485570, ___value___1)); }
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
#endif // COMPAREOPTIONS_T3164485570_H
#ifndef DEBUGGERBROWSABLESTATE_T821780340_H
#define DEBUGGERBROWSABLESTATE_T821780340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerBrowsableState
struct  DebuggerBrowsableState_t821780340 
{
public:
	// System.Int32 System.Diagnostics.DebuggerBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DebuggerBrowsableState_t821780340, ___value___1)); }
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
#endif // DEBUGGERBROWSABLESTATE_T821780340_H
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
#ifndef FILEATTRIBUTES_T2079618843_H
#define FILEATTRIBUTES_T2079618843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAttributes
struct  FileAttributes_t2079618843 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAttributes_t2079618843, ___value___1)); }
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
#endif // FILEATTRIBUTES_T2079618843_H
#ifndef DEBUGGINGMODES_T2468431366_H
#define DEBUGGINGMODES_T2468431366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct  DebuggingModes_t2468431366 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DebuggingModes_t2468431366, ___value___1)); }
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
#endif // DEBUGGINGMODES_T2468431366_H
#ifndef FILEOPTIONS_T409857209_H
#define FILEOPTIONS_T409857209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileOptions
struct  FileOptions_t409857209 
{
public:
	// System.Int32 System.IO.FileOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileOptions_t409857209, ___value___1)); }
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
#endif // FILEOPTIONS_T409857209_H
#ifndef FILESHARE_T1584719113_H
#define FILESHARE_T1584719113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileShare
struct  FileShare_t1584719113 
{
public:
	// System.Int32 System.IO.FileShare::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileShare_t1584719113, ___value___1)); }
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
#endif // FILESHARE_T1584719113_H
#ifndef ASSEMBLYVERSIONCOMPATIBILITY_T2954594434_H
#define ASSEMBLYVERSIONCOMPATIBILITY_T2954594434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_t2954594434 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_t2954594434, ___value___1)); }
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
#endif // ASSEMBLYVERSIONCOMPATIBILITY_T2954594434_H
#ifndef ASSEMBLYHASHALGORITHM_T564227168_H
#define ASSEMBLYHASHALGORITHM_T564227168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t564227168 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t564227168, ___value___1)); }
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
#endif // ASSEMBLYHASHALGORITHM_T564227168_H
#ifndef ENUMERATORMODE_T1561046223_H
#define ENUMERATORMODE_T1561046223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/EnumeratorMode
struct  EnumeratorMode_t1561046223 
{
public:
	// System.Int32 System.Collections.SortedList/EnumeratorMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EnumeratorMode_t1561046223, ___value___1)); }
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
#endif // ENUMERATORMODE_T1561046223_H
#ifndef FILEMODE_T3215720377_H
#define FILEMODE_T3215720377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileMode
struct  FileMode_t3215720377 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileMode_t3215720377, ___value___1)); }
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
#endif // FILEMODE_T3215720377_H
#ifndef DATETIMESTYLES_T1970899261_H
#define DATETIMESTYLES_T1970899261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeStyles
struct  DateTimeStyles_t1970899261 
{
public:
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeStyles_t1970899261, ___value___1)); }
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
#endif // DATETIMESTYLES_T1970899261_H
#ifndef DEBUGGERBROWSABLEATTRIBUTE_T3888084580_H
#define DEBUGGERBROWSABLEATTRIBUTE_T3888084580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerBrowsableAttribute
struct  DebuggerBrowsableAttribute_t3888084580  : public Attribute_t2136411158
{
public:
	// System.Diagnostics.DebuggerBrowsableState System.Diagnostics.DebuggerBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(DebuggerBrowsableAttribute_t3888084580, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERBROWSABLEATTRIBUTE_T3888084580_H
#ifndef DATETIMEFORMATINFO_T2326238209_H
#define DATETIMEFORMATINFO_T2326238209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatInfo
struct  DateTimeFormatInfo_t2326238209  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isReadOnly
	bool ___m_isReadOnly_10;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator_11;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator_12;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator_13;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator_14;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern_15;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern_16;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern_17;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern_18;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern_19;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern_20;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern_21;
	// System.String System.Globalization.DateTimeFormatInfo::_RFC1123Pattern
	String_t* ____RFC1123Pattern_22;
	// System.String System.Globalization.DateTimeFormatInfo::_SortableDateTimePattern
	String_t* ____SortableDateTimePattern_23;
	// System.String System.Globalization.DateTimeFormatInfo::_UniversalSortableDateTimePattern
	String_t* ____UniversalSortableDateTimePattern_24;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek_25;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_t2168011545 * ___calendar_26;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule_27;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_t1002137567* ___abbreviatedDayNames_28;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_t1002137567* ___dayNames_29;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_t1002137567* ___monthNames_30;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_t1002137567* ___abbreviatedMonthNames_31;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_t1002137567* ___allShortDatePatterns_32;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_t1002137567* ___allLongDatePatterns_33;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_t1002137567* ___allShortTimePatterns_34;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_t1002137567* ___allLongTimePatterns_35;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthDayPatterns
	StringU5BU5D_t1002137567* ___monthDayPatterns_36;
	// System.String[] System.Globalization.DateTimeFormatInfo::yearMonthPatterns
	StringU5BU5D_t1002137567* ___yearMonthPatterns_37;
	// System.String[] System.Globalization.DateTimeFormatInfo::shortDayNames
	StringU5BU5D_t1002137567* ___shortDayNames_38;
	// System.Int32 System.Globalization.DateTimeFormatInfo::nDataItem
	int32_t ___nDataItem_39;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_40;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isDefaultCalendar
	bool ___m_isDefaultCalendar_41;
	// System.Int32 System.Globalization.DateTimeFormatInfo::CultureID
	int32_t ___CultureID_42;
	// System.Boolean System.Globalization.DateTimeFormatInfo::bUseCalendarInfo
	bool ___bUseCalendarInfo_43;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern_44;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern_45;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_t1002137567* ___m_eraNames_46;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_t1002137567* ___m_abbrevEraNames_47;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_t1002137567* ___m_abbrevEnglishEraNames_48;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_dateWords
	StringU5BU5D_t1002137567* ___m_dateWords_49;
	// System.Int32[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	Int32U5BU5D_t1719863841* ___optionalCalendars_50;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_t1002137567* ___m_superShortDayNames_51;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_t1002137567* ___genitiveMonthNames_52;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_t1002137567* ___m_genitiveAbbreviatedMonthNames_53;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_t1002137567* ___leapYearMonthNames_54;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags_55;
	// System.String System.Globalization.DateTimeFormatInfo::m_name
	String_t* ___m_name_56;
	// System.String[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::all_date_time_patterns
	StringU5BU5D_t1002137567* ___all_date_time_patterns_57;

public:
	inline static int32_t get_offset_of_m_isReadOnly_10() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___m_isReadOnly_10)); }
	inline bool get_m_isReadOnly_10() const { return ___m_isReadOnly_10; }
	inline bool* get_address_of_m_isReadOnly_10() { return &___m_isReadOnly_10; }
	inline void set_m_isReadOnly_10(bool value)
	{
		___m_isReadOnly_10 = value;
	}

	inline static int32_t get_offset_of_amDesignator_11() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___amDesignator_11)); }
	inline String_t* get_amDesignator_11() const { return ___amDesignator_11; }
	inline String_t** get_address_of_amDesignator_11() { return &___amDesignator_11; }
	inline void set_amDesignator_11(String_t* value)
	{
		___amDesignator_11 = value;
		Il2CppCodeGenWriteBarrier((&___amDesignator_11), value);
	}

	inline static int32_t get_offset_of_pmDesignator_12() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___pmDesignator_12)); }
	inline String_t* get_pmDesignator_12() const { return ___pmDesignator_12; }
	inline String_t** get_address_of_pmDesignator_12() { return &___pmDesignator_12; }
	inline void set_pmDesignator_12(String_t* value)
	{
		___pmDesignator_12 = value;
		Il2CppCodeGenWriteBarrier((&___pmDesignator_12), value);
	}

	inline static int32_t get_offset_of_dateSeparator_13() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___dateSeparator_13)); }
	inline String_t* get_dateSeparator_13() const { return ___dateSeparator_13; }
	inline String_t** get_address_of_dateSeparator_13() { return &___dateSeparator_13; }
	inline void set_dateSeparator_13(String_t* value)
	{
		___dateSeparator_13 = value;
		Il2CppCodeGenWriteBarrier((&___dateSeparator_13), value);
	}

	inline static int32_t get_offset_of_timeSeparator_14() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___timeSeparator_14)); }
	inline String_t* get_timeSeparator_14() const { return ___timeSeparator_14; }
	inline String_t** get_address_of_timeSeparator_14() { return &___timeSeparator_14; }
	inline void set_timeSeparator_14(String_t* value)
	{
		___timeSeparator_14 = value;
		Il2CppCodeGenWriteBarrier((&___timeSeparator_14), value);
	}

	inline static int32_t get_offset_of_shortDatePattern_15() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___shortDatePattern_15)); }
	inline String_t* get_shortDatePattern_15() const { return ___shortDatePattern_15; }
	inline String_t** get_address_of_shortDatePattern_15() { return &___shortDatePattern_15; }
	inline void set_shortDatePattern_15(String_t* value)
	{
		___shortDatePattern_15 = value;
		Il2CppCodeGenWriteBarrier((&___shortDatePattern_15), value);
	}

	inline static int32_t get_offset_of_longDatePattern_16() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___longDatePattern_16)); }
	inline String_t* get_longDatePattern_16() const { return ___longDatePattern_16; }
	inline String_t** get_address_of_longDatePattern_16() { return &___longDatePattern_16; }
	inline void set_longDatePattern_16(String_t* value)
	{
		___longDatePattern_16 = value;
		Il2CppCodeGenWriteBarrier((&___longDatePattern_16), value);
	}

	inline static int32_t get_offset_of_shortTimePattern_17() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___shortTimePattern_17)); }
	inline String_t* get_shortTimePattern_17() const { return ___shortTimePattern_17; }
	inline String_t** get_address_of_shortTimePattern_17() { return &___shortTimePattern_17; }
	inline void set_shortTimePattern_17(String_t* value)
	{
		___shortTimePattern_17 = value;
		Il2CppCodeGenWriteBarrier((&___shortTimePattern_17), value);
	}

	inline static int32_t get_offset_of_longTimePattern_18() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___longTimePattern_18)); }
	inline String_t* get_longTimePattern_18() const { return ___longTimePattern_18; }
	inline String_t** get_address_of_longTimePattern_18() { return &___longTimePattern_18; }
	inline void set_longTimePattern_18(String_t* value)
	{
		___longTimePattern_18 = value;
		Il2CppCodeGenWriteBarrier((&___longTimePattern_18), value);
	}

	inline static int32_t get_offset_of_monthDayPattern_19() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___monthDayPattern_19)); }
	inline String_t* get_monthDayPattern_19() const { return ___monthDayPattern_19; }
	inline String_t** get_address_of_monthDayPattern_19() { return &___monthDayPattern_19; }
	inline void set_monthDayPattern_19(String_t* value)
	{
		___monthDayPattern_19 = value;
		Il2CppCodeGenWriteBarrier((&___monthDayPattern_19), value);
	}

	inline static int32_t get_offset_of_yearMonthPattern_20() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___yearMonthPattern_20)); }
	inline String_t* get_yearMonthPattern_20() const { return ___yearMonthPattern_20; }
	inline String_t** get_address_of_yearMonthPattern_20() { return &___yearMonthPattern_20; }
	inline void set_yearMonthPattern_20(String_t* value)
	{
		___yearMonthPattern_20 = value;
		Il2CppCodeGenWriteBarrier((&___yearMonthPattern_20), value);
	}

	inline static int32_t get_offset_of_fullDateTimePattern_21() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___fullDateTimePattern_21)); }
	inline String_t* get_fullDateTimePattern_21() const { return ___fullDateTimePattern_21; }
	inline String_t** get_address_of_fullDateTimePattern_21() { return &___fullDateTimePattern_21; }
	inline void set_fullDateTimePattern_21(String_t* value)
	{
		___fullDateTimePattern_21 = value;
		Il2CppCodeGenWriteBarrier((&___fullDateTimePattern_21), value);
	}

	inline static int32_t get_offset_of__RFC1123Pattern_22() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ____RFC1123Pattern_22)); }
	inline String_t* get__RFC1123Pattern_22() const { return ____RFC1123Pattern_22; }
	inline String_t** get_address_of__RFC1123Pattern_22() { return &____RFC1123Pattern_22; }
	inline void set__RFC1123Pattern_22(String_t* value)
	{
		____RFC1123Pattern_22 = value;
		Il2CppCodeGenWriteBarrier((&____RFC1123Pattern_22), value);
	}

	inline static int32_t get_offset_of__SortableDateTimePattern_23() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ____SortableDateTimePattern_23)); }
	inline String_t* get__SortableDateTimePattern_23() const { return ____SortableDateTimePattern_23; }
	inline String_t** get_address_of__SortableDateTimePattern_23() { return &____SortableDateTimePattern_23; }
	inline void set__SortableDateTimePattern_23(String_t* value)
	{
		____SortableDateTimePattern_23 = value;
		Il2CppCodeGenWriteBarrier((&____SortableDateTimePattern_23), value);
	}

	inline static int32_t get_offset_of__UniversalSortableDateTimePattern_24() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ____UniversalSortableDateTimePattern_24)); }
	inline String_t* get__UniversalSortableDateTimePattern_24() const { return ____UniversalSortableDateTimePattern_24; }
	inline String_t** get_address_of__UniversalSortableDateTimePattern_24() { return &____UniversalSortableDateTimePattern_24; }
	inline void set__UniversalSortableDateTimePattern_24(String_t* value)
	{
		____UniversalSortableDateTimePattern_24 = value;
		Il2CppCodeGenWriteBarrier((&____UniversalSortableDateTimePattern_24), value);
	}

	inline static int32_t get_offset_of_firstDayOfWeek_25() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___firstDayOfWeek_25)); }
	inline int32_t get_firstDayOfWeek_25() const { return ___firstDayOfWeek_25; }
	inline int32_t* get_address_of_firstDayOfWeek_25() { return &___firstDayOfWeek_25; }
	inline void set_firstDayOfWeek_25(int32_t value)
	{
		___firstDayOfWeek_25 = value;
	}

	inline static int32_t get_offset_of_calendar_26() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___calendar_26)); }
	inline Calendar_t2168011545 * get_calendar_26() const { return ___calendar_26; }
	inline Calendar_t2168011545 ** get_address_of_calendar_26() { return &___calendar_26; }
	inline void set_calendar_26(Calendar_t2168011545 * value)
	{
		___calendar_26 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_26), value);
	}

	inline static int32_t get_offset_of_calendarWeekRule_27() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___calendarWeekRule_27)); }
	inline int32_t get_calendarWeekRule_27() const { return ___calendarWeekRule_27; }
	inline int32_t* get_address_of_calendarWeekRule_27() { return &___calendarWeekRule_27; }
	inline void set_calendarWeekRule_27(int32_t value)
	{
		___calendarWeekRule_27 = value;
	}

	inline static int32_t get_offset_of_abbreviatedDayNames_28() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___abbreviatedDayNames_28)); }
	inline StringU5BU5D_t1002137567* get_abbreviatedDayNames_28() const { return ___abbreviatedDayNames_28; }
	inline StringU5BU5D_t1002137567** get_address_of_abbreviatedDayNames_28() { return &___abbreviatedDayNames_28; }
	inline void set_abbreviatedDayNames_28(StringU5BU5D_t1002137567* value)
	{
		___abbreviatedDayNames_28 = value;
		Il2CppCodeGenWriteBarrier((&___abbreviatedDayNames_28), value);
	}

	inline static int32_t get_offset_of_dayNames_29() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___dayNames_29)); }
	inline StringU5BU5D_t1002137567* get_dayNames_29() const { return ___dayNames_29; }
	inline StringU5BU5D_t1002137567** get_address_of_dayNames_29() { return &___dayNames_29; }
	inline void set_dayNames_29(StringU5BU5D_t1002137567* value)
	{
		___dayNames_29 = value;
		Il2CppCodeGenWriteBarrier((&___dayNames_29), value);
	}

	inline static int32_t get_offset_of_monthNames_30() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___monthNames_30)); }
	inline StringU5BU5D_t1002137567* get_monthNames_30() const { return ___monthNames_30; }
	inline StringU5BU5D_t1002137567** get_address_of_monthNames_30() { return &___monthNames_30; }
	inline void set_monthNames_30(StringU5BU5D_t1002137567* value)
	{
		___monthNames_30 = value;
		Il2CppCodeGenWriteBarrier((&___monthNames_30), value);
	}

	inline static int32_t get_offset_of_abbreviatedMonthNames_31() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___abbreviatedMonthNames_31)); }
	inline StringU5BU5D_t1002137567* get_abbreviatedMonthNames_31() const { return ___abbreviatedMonthNames_31; }
	inline StringU5BU5D_t1002137567** get_address_of_abbreviatedMonthNames_31() { return &___abbreviatedMonthNames_31; }
	inline void set_abbreviatedMonthNames_31(StringU5BU5D_t1002137567* value)
	{
		___abbreviatedMonthNames_31 = value;
		Il2CppCodeGenWriteBarrier((&___abbreviatedMonthNames_31), value);
	}

	inline static int32_t get_offset_of_allShortDatePatterns_32() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___allShortDatePatterns_32)); }
	inline StringU5BU5D_t1002137567* get_allShortDatePatterns_32() const { return ___allShortDatePatterns_32; }
	inline StringU5BU5D_t1002137567** get_address_of_allShortDatePatterns_32() { return &___allShortDatePatterns_32; }
	inline void set_allShortDatePatterns_32(StringU5BU5D_t1002137567* value)
	{
		___allShortDatePatterns_32 = value;
		Il2CppCodeGenWriteBarrier((&___allShortDatePatterns_32), value);
	}

	inline static int32_t get_offset_of_allLongDatePatterns_33() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___allLongDatePatterns_33)); }
	inline StringU5BU5D_t1002137567* get_allLongDatePatterns_33() const { return ___allLongDatePatterns_33; }
	inline StringU5BU5D_t1002137567** get_address_of_allLongDatePatterns_33() { return &___allLongDatePatterns_33; }
	inline void set_allLongDatePatterns_33(StringU5BU5D_t1002137567* value)
	{
		___allLongDatePatterns_33 = value;
		Il2CppCodeGenWriteBarrier((&___allLongDatePatterns_33), value);
	}

	inline static int32_t get_offset_of_allShortTimePatterns_34() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___allShortTimePatterns_34)); }
	inline StringU5BU5D_t1002137567* get_allShortTimePatterns_34() const { return ___allShortTimePatterns_34; }
	inline StringU5BU5D_t1002137567** get_address_of_allShortTimePatterns_34() { return &___allShortTimePatterns_34; }
	inline void set_allShortTimePatterns_34(StringU5BU5D_t1002137567* value)
	{
		___allShortTimePatterns_34 = value;
		Il2CppCodeGenWriteBarrier((&___allShortTimePatterns_34), value);
	}

	inline static int32_t get_offset_of_allLongTimePatterns_35() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___allLongTimePatterns_35)); }
	inline StringU5BU5D_t1002137567* get_allLongTimePatterns_35() const { return ___allLongTimePatterns_35; }
	inline StringU5BU5D_t1002137567** get_address_of_allLongTimePatterns_35() { return &___allLongTimePatterns_35; }
	inline void set_allLongTimePatterns_35(StringU5BU5D_t1002137567* value)
	{
		___allLongTimePatterns_35 = value;
		Il2CppCodeGenWriteBarrier((&___allLongTimePatterns_35), value);
	}

	inline static int32_t get_offset_of_monthDayPatterns_36() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___monthDayPatterns_36)); }
	inline StringU5BU5D_t1002137567* get_monthDayPatterns_36() const { return ___monthDayPatterns_36; }
	inline StringU5BU5D_t1002137567** get_address_of_monthDayPatterns_36() { return &___monthDayPatterns_36; }
	inline void set_monthDayPatterns_36(StringU5BU5D_t1002137567* value)
	{
		___monthDayPatterns_36 = value;
		Il2CppCodeGenWriteBarrier((&___monthDayPatterns_36), value);
	}

	inline static int32_t get_offset_of_yearMonthPatterns_37() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___yearMonthPatterns_37)); }
	inline StringU5BU5D_t1002137567* get_yearMonthPatterns_37() const { return ___yearMonthPatterns_37; }
	inline StringU5BU5D_t1002137567** get_address_of_yearMonthPatterns_37() { return &___yearMonthPatterns_37; }
	inline void set_yearMonthPatterns_37(StringU5BU5D_t1002137567* value)
	{
		___yearMonthPatterns_37 = value;
		Il2CppCodeGenWriteBarrier((&___yearMonthPatterns_37), value);
	}

	inline static int32_t get_offset_of_shortDayNames_38() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___shortDayNames_38)); }
	inline StringU5BU5D_t1002137567* get_shortDayNames_38() const { return ___shortDayNames_38; }
	inline StringU5BU5D_t1002137567** get_address_of_shortDayNames_38() { return &___shortDayNames_38; }
	inline void set_shortDayNames_38(StringU5BU5D_t1002137567* value)
	{
		___shortDayNames_38 = value;
		Il2CppCodeGenWriteBarrier((&___shortDayNames_38), value);
	}

	inline static int32_t get_offset_of_nDataItem_39() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___nDataItem_39)); }
	inline int32_t get_nDataItem_39() const { return ___nDataItem_39; }
	inline int32_t* get_address_of_nDataItem_39() { return &___nDataItem_39; }
	inline void set_nDataItem_39(int32_t value)
	{
		___nDataItem_39 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_40() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___m_useUserOverride_40)); }
	inline bool get_m_useUserOverride_40() const { return ___m_useUserOverride_40; }
	inline bool* get_address_of_m_useUserOverride_40() { return &___m_useUserOverride_40; }
	inline void set_m_useUserOverride_40(bool value)
	{
		___m_useUserOverride_40 = value;
	}

	inline static int32_t get_offset_of_m_isDefaultCalendar_41() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___m_isDefaultCalendar_41)); }
	inline bool get_m_isDefaultCalendar_41() const { return ___m_isDefaultCalendar_41; }
	inline bool* get_address_of_m_isDefaultCalendar_41() { return &___m_isDefaultCalendar_41; }
	inline void set_m_isDefaultCalendar_41(bool value)
	{
		___m_isDefaultCalendar_41 = value;
	}

	inline static int32_t get_offset_of_CultureID_42() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___CultureID_42)); }
	inline int32_t get_CultureID_42() const { return ___CultureID_42; }
	inline int32_t* get_address_of_CultureID_42() { return &___CultureID_42; }
	inline void set_CultureID_42(int32_t value)
	{
		___CultureID_42 = value;
	}

	inline static int32_t get_offset_of_bUseCalendarInfo_43() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___bUseCalendarInfo_43)); }
	inline bool get_bUseCalendarInfo_43() const { return ___bUseCalendarInfo_43; }
	inline bool* get_address_of_bUseCalendarInfo_43() { return &___bUseCalendarInfo_43; }
	inline void set_bUseCalendarInfo_43(bool value)
	{
		___bUseCalendarInfo_43 = value;
	}

	inline static int32_t get_offset_of_generalShortTimePattern_44() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___generalShortTimePattern_44)); }
	inline String_t* get_generalShortTimePattern_44() const { return ___generalShortTimePattern_44; }
	inline String_t** get_address_of_generalShortTimePattern_44() { return &___generalShortTimePattern_44; }
	inline void set_generalShortTimePattern_44(String_t* value)
	{
		___generalShortTimePattern_44 = value;
		Il2CppCodeGenWriteBarrier((&___generalShortTimePattern_44), value);
	}

	inline static int32_t get_offset_of_generalLongTimePattern_45() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___generalLongTimePattern_45)); }
	inline String_t* get_generalLongTimePattern_45() const { return ___generalLongTimePattern_45; }
	inline String_t** get_address_of_generalLongTimePattern_45() { return &___generalLongTimePattern_45; }
	inline void set_generalLongTimePattern_45(String_t* value)
	{
		___generalLongTimePattern_45 = value;
		Il2CppCodeGenWriteBarrier((&___generalLongTimePattern_45), value);
	}

	inline static int32_t get_offset_of_m_eraNames_46() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___m_eraNames_46)); }
	inline StringU5BU5D_t1002137567* get_m_eraNames_46() const { return ___m_eraNames_46; }
	inline StringU5BU5D_t1002137567** get_address_of_m_eraNames_46() { return &___m_eraNames_46; }
	inline void set_m_eraNames_46(StringU5BU5D_t1002137567* value)
	{
		___m_eraNames_46 = value;
		Il2CppCodeGenWriteBarrier((&___m_eraNames_46), value);
	}

	inline static int32_t get_offset_of_m_abbrevEraNames_47() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___m_abbrevEraNames_47)); }
	inline StringU5BU5D_t1002137567* get_m_abbrevEraNames_47() const { return ___m_abbrevEraNames_47; }
	inline StringU5BU5D_t1002137567** get_address_of_m_abbrevEraNames_47() { return &___m_abbrevEraNames_47; }
	inline void set_m_abbrevEraNames_47(StringU5BU5D_t1002137567* value)
	{
		___m_abbrevEraNames_47 = value;
		Il2CppCodeGenWriteBarrier((&___m_abbrevEraNames_47), value);
	}

	inline static int32_t get_offset_of_m_abbrevEnglishEraNames_48() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___m_abbrevEnglishEraNames_48)); }
	inline StringU5BU5D_t1002137567* get_m_abbrevEnglishEraNames_48() const { return ___m_abbrevEnglishEraNames_48; }
	inline StringU5BU5D_t1002137567** get_address_of_m_abbrevEnglishEraNames_48() { return &___m_abbrevEnglishEraNames_48; }
	inline void set_m_abbrevEnglishEraNames_48(StringU5BU5D_t1002137567* value)
	{
		___m_abbrevEnglishEraNames_48 = value;
		Il2CppCodeGenWriteBarrier((&___m_abbrevEnglishEraNames_48), value);
	}

	inline static int32_t get_offset_of_m_dateWords_49() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___m_dateWords_49)); }
	inline StringU5BU5D_t1002137567* get_m_dateWords_49() const { return ___m_dateWords_49; }
	inline StringU5BU5D_t1002137567** get_address_of_m_dateWords_49() { return &___m_dateWords_49; }
	inline void set_m_dateWords_49(StringU5BU5D_t1002137567* value)
	{
		___m_dateWords_49 = value;
		Il2CppCodeGenWriteBarrier((&___m_dateWords_49), value);
	}

	inline static int32_t get_offset_of_optionalCalendars_50() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___optionalCalendars_50)); }
	inline Int32U5BU5D_t1719863841* get_optionalCalendars_50() const { return ___optionalCalendars_50; }
	inline Int32U5BU5D_t1719863841** get_address_of_optionalCalendars_50() { return &___optionalCalendars_50; }
	inline void set_optionalCalendars_50(Int32U5BU5D_t1719863841* value)
	{
		___optionalCalendars_50 = value;
		Il2CppCodeGenWriteBarrier((&___optionalCalendars_50), value);
	}

	inline static int32_t get_offset_of_m_superShortDayNames_51() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___m_superShortDayNames_51)); }
	inline StringU5BU5D_t1002137567* get_m_superShortDayNames_51() const { return ___m_superShortDayNames_51; }
	inline StringU5BU5D_t1002137567** get_address_of_m_superShortDayNames_51() { return &___m_superShortDayNames_51; }
	inline void set_m_superShortDayNames_51(StringU5BU5D_t1002137567* value)
	{
		___m_superShortDayNames_51 = value;
		Il2CppCodeGenWriteBarrier((&___m_superShortDayNames_51), value);
	}

	inline static int32_t get_offset_of_genitiveMonthNames_52() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___genitiveMonthNames_52)); }
	inline StringU5BU5D_t1002137567* get_genitiveMonthNames_52() const { return ___genitiveMonthNames_52; }
	inline StringU5BU5D_t1002137567** get_address_of_genitiveMonthNames_52() { return &___genitiveMonthNames_52; }
	inline void set_genitiveMonthNames_52(StringU5BU5D_t1002137567* value)
	{
		___genitiveMonthNames_52 = value;
		Il2CppCodeGenWriteBarrier((&___genitiveMonthNames_52), value);
	}

	inline static int32_t get_offset_of_m_genitiveAbbreviatedMonthNames_53() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___m_genitiveAbbreviatedMonthNames_53)); }
	inline StringU5BU5D_t1002137567* get_m_genitiveAbbreviatedMonthNames_53() const { return ___m_genitiveAbbreviatedMonthNames_53; }
	inline StringU5BU5D_t1002137567** get_address_of_m_genitiveAbbreviatedMonthNames_53() { return &___m_genitiveAbbreviatedMonthNames_53; }
	inline void set_m_genitiveAbbreviatedMonthNames_53(StringU5BU5D_t1002137567* value)
	{
		___m_genitiveAbbreviatedMonthNames_53 = value;
		Il2CppCodeGenWriteBarrier((&___m_genitiveAbbreviatedMonthNames_53), value);
	}

	inline static int32_t get_offset_of_leapYearMonthNames_54() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___leapYearMonthNames_54)); }
	inline StringU5BU5D_t1002137567* get_leapYearMonthNames_54() const { return ___leapYearMonthNames_54; }
	inline StringU5BU5D_t1002137567** get_address_of_leapYearMonthNames_54() { return &___leapYearMonthNames_54; }
	inline void set_leapYearMonthNames_54(StringU5BU5D_t1002137567* value)
	{
		___leapYearMonthNames_54 = value;
		Il2CppCodeGenWriteBarrier((&___leapYearMonthNames_54), value);
	}

	inline static int32_t get_offset_of_formatFlags_55() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___formatFlags_55)); }
	inline int32_t get_formatFlags_55() const { return ___formatFlags_55; }
	inline int32_t* get_address_of_formatFlags_55() { return &___formatFlags_55; }
	inline void set_formatFlags_55(int32_t value)
	{
		___formatFlags_55 = value;
	}

	inline static int32_t get_offset_of_m_name_56() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___m_name_56)); }
	inline String_t* get_m_name_56() const { return ___m_name_56; }
	inline String_t** get_address_of_m_name_56() { return &___m_name_56; }
	inline void set_m_name_56(String_t* value)
	{
		___m_name_56 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_56), value);
	}

	inline static int32_t get_offset_of_all_date_time_patterns_57() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209, ___all_date_time_patterns_57)); }
	inline StringU5BU5D_t1002137567* get_all_date_time_patterns_57() const { return ___all_date_time_patterns_57; }
	inline StringU5BU5D_t1002137567** get_address_of_all_date_time_patterns_57() { return &___all_date_time_patterns_57; }
	inline void set_all_date_time_patterns_57(StringU5BU5D_t1002137567* value)
	{
		___all_date_time_patterns_57 = value;
		Il2CppCodeGenWriteBarrier((&___all_date_time_patterns_57), value);
	}
};

struct DateTimeFormatInfo_t2326238209_StaticFields
{
public:
	// System.String System.Globalization.DateTimeFormatInfo::MSG_READONLY
	String_t* ___MSG_READONLY_1;
	// System.String System.Globalization.DateTimeFormatInfo::MSG_ARRAYSIZE_MONTH
	String_t* ___MSG_ARRAYSIZE_MONTH_2;
	// System.String System.Globalization.DateTimeFormatInfo::MSG_ARRAYSIZE_DAY
	String_t* ___MSG_ARRAYSIZE_DAY_3;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_ABBREVIATED_DAY_NAMES
	StringU5BU5D_t1002137567* ___INVARIANT_ABBREVIATED_DAY_NAMES_4;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_DAY_NAMES
	StringU5BU5D_t1002137567* ___INVARIANT_DAY_NAMES_5;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_ABBREVIATED_MONTH_NAMES
	StringU5BU5D_t1002137567* ___INVARIANT_ABBREVIATED_MONTH_NAMES_6;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_MONTH_NAMES
	StringU5BU5D_t1002137567* ___INVARIANT_MONTH_NAMES_7;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_SHORT_DAY_NAMES
	StringU5BU5D_t1002137567* ___INVARIANT_SHORT_DAY_NAMES_8;
	// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::theInvariantDateTimeFormatInfo
	DateTimeFormatInfo_t2326238209 * ___theInvariantDateTimeFormatInfo_9;

public:
	inline static int32_t get_offset_of_MSG_READONLY_1() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209_StaticFields, ___MSG_READONLY_1)); }
	inline String_t* get_MSG_READONLY_1() const { return ___MSG_READONLY_1; }
	inline String_t** get_address_of_MSG_READONLY_1() { return &___MSG_READONLY_1; }
	inline void set_MSG_READONLY_1(String_t* value)
	{
		___MSG_READONLY_1 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_1), value);
	}

	inline static int32_t get_offset_of_MSG_ARRAYSIZE_MONTH_2() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209_StaticFields, ___MSG_ARRAYSIZE_MONTH_2)); }
	inline String_t* get_MSG_ARRAYSIZE_MONTH_2() const { return ___MSG_ARRAYSIZE_MONTH_2; }
	inline String_t** get_address_of_MSG_ARRAYSIZE_MONTH_2() { return &___MSG_ARRAYSIZE_MONTH_2; }
	inline void set_MSG_ARRAYSIZE_MONTH_2(String_t* value)
	{
		___MSG_ARRAYSIZE_MONTH_2 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_ARRAYSIZE_MONTH_2), value);
	}

	inline static int32_t get_offset_of_MSG_ARRAYSIZE_DAY_3() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209_StaticFields, ___MSG_ARRAYSIZE_DAY_3)); }
	inline String_t* get_MSG_ARRAYSIZE_DAY_3() const { return ___MSG_ARRAYSIZE_DAY_3; }
	inline String_t** get_address_of_MSG_ARRAYSIZE_DAY_3() { return &___MSG_ARRAYSIZE_DAY_3; }
	inline void set_MSG_ARRAYSIZE_DAY_3(String_t* value)
	{
		___MSG_ARRAYSIZE_DAY_3 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_ARRAYSIZE_DAY_3), value);
	}

	inline static int32_t get_offset_of_INVARIANT_ABBREVIATED_DAY_NAMES_4() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209_StaticFields, ___INVARIANT_ABBREVIATED_DAY_NAMES_4)); }
	inline StringU5BU5D_t1002137567* get_INVARIANT_ABBREVIATED_DAY_NAMES_4() const { return ___INVARIANT_ABBREVIATED_DAY_NAMES_4; }
	inline StringU5BU5D_t1002137567** get_address_of_INVARIANT_ABBREVIATED_DAY_NAMES_4() { return &___INVARIANT_ABBREVIATED_DAY_NAMES_4; }
	inline void set_INVARIANT_ABBREVIATED_DAY_NAMES_4(StringU5BU5D_t1002137567* value)
	{
		___INVARIANT_ABBREVIATED_DAY_NAMES_4 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_ABBREVIATED_DAY_NAMES_4), value);
	}

	inline static int32_t get_offset_of_INVARIANT_DAY_NAMES_5() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209_StaticFields, ___INVARIANT_DAY_NAMES_5)); }
	inline StringU5BU5D_t1002137567* get_INVARIANT_DAY_NAMES_5() const { return ___INVARIANT_DAY_NAMES_5; }
	inline StringU5BU5D_t1002137567** get_address_of_INVARIANT_DAY_NAMES_5() { return &___INVARIANT_DAY_NAMES_5; }
	inline void set_INVARIANT_DAY_NAMES_5(StringU5BU5D_t1002137567* value)
	{
		___INVARIANT_DAY_NAMES_5 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_DAY_NAMES_5), value);
	}

	inline static int32_t get_offset_of_INVARIANT_ABBREVIATED_MONTH_NAMES_6() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209_StaticFields, ___INVARIANT_ABBREVIATED_MONTH_NAMES_6)); }
	inline StringU5BU5D_t1002137567* get_INVARIANT_ABBREVIATED_MONTH_NAMES_6() const { return ___INVARIANT_ABBREVIATED_MONTH_NAMES_6; }
	inline StringU5BU5D_t1002137567** get_address_of_INVARIANT_ABBREVIATED_MONTH_NAMES_6() { return &___INVARIANT_ABBREVIATED_MONTH_NAMES_6; }
	inline void set_INVARIANT_ABBREVIATED_MONTH_NAMES_6(StringU5BU5D_t1002137567* value)
	{
		___INVARIANT_ABBREVIATED_MONTH_NAMES_6 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_ABBREVIATED_MONTH_NAMES_6), value);
	}

	inline static int32_t get_offset_of_INVARIANT_MONTH_NAMES_7() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209_StaticFields, ___INVARIANT_MONTH_NAMES_7)); }
	inline StringU5BU5D_t1002137567* get_INVARIANT_MONTH_NAMES_7() const { return ___INVARIANT_MONTH_NAMES_7; }
	inline StringU5BU5D_t1002137567** get_address_of_INVARIANT_MONTH_NAMES_7() { return &___INVARIANT_MONTH_NAMES_7; }
	inline void set_INVARIANT_MONTH_NAMES_7(StringU5BU5D_t1002137567* value)
	{
		___INVARIANT_MONTH_NAMES_7 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_MONTH_NAMES_7), value);
	}

	inline static int32_t get_offset_of_INVARIANT_SHORT_DAY_NAMES_8() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209_StaticFields, ___INVARIANT_SHORT_DAY_NAMES_8)); }
	inline StringU5BU5D_t1002137567* get_INVARIANT_SHORT_DAY_NAMES_8() const { return ___INVARIANT_SHORT_DAY_NAMES_8; }
	inline StringU5BU5D_t1002137567** get_address_of_INVARIANT_SHORT_DAY_NAMES_8() { return &___INVARIANT_SHORT_DAY_NAMES_8; }
	inline void set_INVARIANT_SHORT_DAY_NAMES_8(StringU5BU5D_t1002137567* value)
	{
		___INVARIANT_SHORT_DAY_NAMES_8 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_SHORT_DAY_NAMES_8), value);
	}

	inline static int32_t get_offset_of_theInvariantDateTimeFormatInfo_9() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2326238209_StaticFields, ___theInvariantDateTimeFormatInfo_9)); }
	inline DateTimeFormatInfo_t2326238209 * get_theInvariantDateTimeFormatInfo_9() const { return ___theInvariantDateTimeFormatInfo_9; }
	inline DateTimeFormatInfo_t2326238209 ** get_address_of_theInvariantDateTimeFormatInfo_9() { return &___theInvariantDateTimeFormatInfo_9; }
	inline void set_theInvariantDateTimeFormatInfo_9(DateTimeFormatInfo_t2326238209 * value)
	{
		___theInvariantDateTimeFormatInfo_9 = value;
		Il2CppCodeGenWriteBarrier((&___theInvariantDateTimeFormatInfo_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEFORMATINFO_T2326238209_H
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
#ifndef DEBUGGABLEATTRIBUTE_T3773356535_H
#define DEBUGGABLEATTRIBUTE_T3773356535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggableAttribute
struct  DebuggableAttribute_t3773356535  : public Attribute_t2136411158
{
public:
	// System.Boolean System.Diagnostics.DebuggableAttribute::JITTrackingEnabledFlag
	bool ___JITTrackingEnabledFlag_0;
	// System.Boolean System.Diagnostics.DebuggableAttribute::JITOptimizerDisabledFlag
	bool ___JITOptimizerDisabledFlag_1;
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::debuggingModes
	int32_t ___debuggingModes_2;

public:
	inline static int32_t get_offset_of_JITTrackingEnabledFlag_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_t3773356535, ___JITTrackingEnabledFlag_0)); }
	inline bool get_JITTrackingEnabledFlag_0() const { return ___JITTrackingEnabledFlag_0; }
	inline bool* get_address_of_JITTrackingEnabledFlag_0() { return &___JITTrackingEnabledFlag_0; }
	inline void set_JITTrackingEnabledFlag_0(bool value)
	{
		___JITTrackingEnabledFlag_0 = value;
	}

	inline static int32_t get_offset_of_JITOptimizerDisabledFlag_1() { return static_cast<int32_t>(offsetof(DebuggableAttribute_t3773356535, ___JITOptimizerDisabledFlag_1)); }
	inline bool get_JITOptimizerDisabledFlag_1() const { return ___JITOptimizerDisabledFlag_1; }
	inline bool* get_address_of_JITOptimizerDisabledFlag_1() { return &___JITOptimizerDisabledFlag_1; }
	inline void set_JITOptimizerDisabledFlag_1(bool value)
	{
		___JITOptimizerDisabledFlag_1 = value;
	}

	inline static int32_t get_offset_of_debuggingModes_2() { return static_cast<int32_t>(offsetof(DebuggableAttribute_t3773356535, ___debuggingModes_2)); }
	inline int32_t get_debuggingModes_2() const { return ___debuggingModes_2; }
	inline int32_t* get_address_of_debuggingModes_2() { return &___debuggingModes_2; }
	inline void set_debuggingModes_2(int32_t value)
	{
		___debuggingModes_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGABLEATTRIBUTE_T3773356535_H
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
#ifndef ENUMERATOR_T3541969671_H
#define ENUMERATOR_T3541969671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/Enumerator
struct  Enumerator_t3541969671  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/Enumerator::host
	SortedList_t1937438985 * ___host_0;
	// System.Int32 System.Collections.SortedList/Enumerator::stamp
	int32_t ___stamp_1;
	// System.Int32 System.Collections.SortedList/Enumerator::pos
	int32_t ___pos_2;
	// System.Int32 System.Collections.SortedList/Enumerator::size
	int32_t ___size_3;
	// System.Collections.SortedList/EnumeratorMode System.Collections.SortedList/Enumerator::mode
	int32_t ___mode_4;
	// System.Object System.Collections.SortedList/Enumerator::currentKey
	RuntimeObject * ___currentKey_5;
	// System.Object System.Collections.SortedList/Enumerator::currentValue
	RuntimeObject * ___currentValue_6;
	// System.Boolean System.Collections.SortedList/Enumerator::invalid
	bool ___invalid_7;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(Enumerator_t3541969671, ___host_0)); }
	inline SortedList_t1937438985 * get_host_0() const { return ___host_0; }
	inline SortedList_t1937438985 ** get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(SortedList_t1937438985 * value)
	{
		___host_0 = value;
		Il2CppCodeGenWriteBarrier((&___host_0), value);
	}

	inline static int32_t get_offset_of_stamp_1() { return static_cast<int32_t>(offsetof(Enumerator_t3541969671, ___stamp_1)); }
	inline int32_t get_stamp_1() const { return ___stamp_1; }
	inline int32_t* get_address_of_stamp_1() { return &___stamp_1; }
	inline void set_stamp_1(int32_t value)
	{
		___stamp_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(Enumerator_t3541969671, ___pos_2)); }
	inline int32_t get_pos_2() const { return ___pos_2; }
	inline int32_t* get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(int32_t value)
	{
		___pos_2 = value;
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(Enumerator_t3541969671, ___size_3)); }
	inline int32_t get_size_3() const { return ___size_3; }
	inline int32_t* get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(int32_t value)
	{
		___size_3 = value;
	}

	inline static int32_t get_offset_of_mode_4() { return static_cast<int32_t>(offsetof(Enumerator_t3541969671, ___mode_4)); }
	inline int32_t get_mode_4() const { return ___mode_4; }
	inline int32_t* get_address_of_mode_4() { return &___mode_4; }
	inline void set_mode_4(int32_t value)
	{
		___mode_4 = value;
	}

	inline static int32_t get_offset_of_currentKey_5() { return static_cast<int32_t>(offsetof(Enumerator_t3541969671, ___currentKey_5)); }
	inline RuntimeObject * get_currentKey_5() const { return ___currentKey_5; }
	inline RuntimeObject ** get_address_of_currentKey_5() { return &___currentKey_5; }
	inline void set_currentKey_5(RuntimeObject * value)
	{
		___currentKey_5 = value;
		Il2CppCodeGenWriteBarrier((&___currentKey_5), value);
	}

	inline static int32_t get_offset_of_currentValue_6() { return static_cast<int32_t>(offsetof(Enumerator_t3541969671, ___currentValue_6)); }
	inline RuntimeObject * get_currentValue_6() const { return ___currentValue_6; }
	inline RuntimeObject ** get_address_of_currentValue_6() { return &___currentValue_6; }
	inline void set_currentValue_6(RuntimeObject * value)
	{
		___currentValue_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentValue_6), value);
	}

	inline static int32_t get_offset_of_invalid_7() { return static_cast<int32_t>(offsetof(Enumerator_t3541969671, ___invalid_7)); }
	inline bool get_invalid_7() const { return ___invalid_7; }
	inline bool* get_address_of_invalid_7() { return &___invalid_7; }
	inline void set_invalid_7(bool value)
	{
		___invalid_7 = value;
	}
};

struct Enumerator_t3541969671_StaticFields
{
public:
	// System.String System.Collections.SortedList/Enumerator::xstr
	String_t* ___xstr_8;

public:
	inline static int32_t get_offset_of_xstr_8() { return static_cast<int32_t>(offsetof(Enumerator_t3541969671_StaticFields, ___xstr_8)); }
	inline String_t* get_xstr_8() const { return ___xstr_8; }
	inline String_t** get_address_of_xstr_8() { return &___xstr_8; }
	inline void set_xstr_8(String_t* value)
	{
		___xstr_8 = value;
		Il2CppCodeGenWriteBarrier((&___xstr_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3541969671_H
#ifndef MONOIO_T293420956_H
#define MONOIO_T293420956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoIO
struct  MonoIO_t293420956  : public RuntimeObject
{
public:

public:
};

struct MonoIO_t293420956_StaticFields
{
public:
	// System.IO.FileAttributes System.IO.MonoIO::InvalidFileAttributes
	int32_t ___InvalidFileAttributes_0;
	// System.IntPtr System.IO.MonoIO::InvalidHandle
	IntPtr_t ___InvalidHandle_1;

public:
	inline static int32_t get_offset_of_InvalidFileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIO_t293420956_StaticFields, ___InvalidFileAttributes_0)); }
	inline int32_t get_InvalidFileAttributes_0() const { return ___InvalidFileAttributes_0; }
	inline int32_t* get_address_of_InvalidFileAttributes_0() { return &___InvalidFileAttributes_0; }
	inline void set_InvalidFileAttributes_0(int32_t value)
	{
		___InvalidFileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_InvalidHandle_1() { return static_cast<int32_t>(offsetof(MonoIO_t293420956_StaticFields, ___InvalidHandle_1)); }
	inline IntPtr_t get_InvalidHandle_1() const { return ___InvalidHandle_1; }
	inline IntPtr_t* get_address_of_InvalidHandle_1() { return &___InvalidHandle_1; }
	inline void set_InvalidHandle_1(IntPtr_t value)
	{
		___InvalidHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOIO_T293420956_H
#ifndef GREGORIANCALENDAR_T2540616049_H
#define GREGORIANCALENDAR_T2540616049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.GregorianCalendar
struct  GregorianCalendar_t2540616049  : public Calendar_t2168011545
{
public:
	// System.Globalization.GregorianCalendarTypes System.Globalization.GregorianCalendar::m_type
	int32_t ___m_type_4;

public:
	inline static int32_t get_offset_of_m_type_4() { return static_cast<int32_t>(offsetof(GregorianCalendar_t2540616049, ___m_type_4)); }
	inline int32_t get_m_type_4() const { return ___m_type_4; }
	inline int32_t* get_address_of_m_type_4() { return &___m_type_4; }
	inline void set_m_type_4(int32_t value)
	{
		___m_type_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GREGORIANCALENDAR_T2540616049_H
#ifndef DIRECTORYNOTFOUNDEXCEPTION_T217238420_H
#define DIRECTORYNOTFOUNDEXCEPTION_T217238420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.DirectoryNotFoundException
struct  DirectoryNotFoundException_t217238420  : public IOException_t670336194
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORYNOTFOUNDEXCEPTION_T217238420_H
#ifndef ENDOFSTREAMEXCEPTION_T672796968_H
#define ENDOFSTREAMEXCEPTION_T672796968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.EndOfStreamException
struct  EndOfStreamException_t672796968  : public IOException_t670336194
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDOFSTREAMEXCEPTION_T672796968_H
#ifndef FILELOADEXCEPTION_T2559997937_H
#define FILELOADEXCEPTION_T2559997937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileLoadException
struct  FileLoadException_t2559997937  : public IOException_t670336194
{
public:
	// System.String System.IO.FileLoadException::msg
	String_t* ___msg_12;
	// System.String System.IO.FileLoadException::fileName
	String_t* ___fileName_13;
	// System.String System.IO.FileLoadException::fusionLog
	String_t* ___fusionLog_14;

public:
	inline static int32_t get_offset_of_msg_12() { return static_cast<int32_t>(offsetof(FileLoadException_t2559997937, ___msg_12)); }
	inline String_t* get_msg_12() const { return ___msg_12; }
	inline String_t** get_address_of_msg_12() { return &___msg_12; }
	inline void set_msg_12(String_t* value)
	{
		___msg_12 = value;
		Il2CppCodeGenWriteBarrier((&___msg_12), value);
	}

	inline static int32_t get_offset_of_fileName_13() { return static_cast<int32_t>(offsetof(FileLoadException_t2559997937, ___fileName_13)); }
	inline String_t* get_fileName_13() const { return ___fileName_13; }
	inline String_t** get_address_of_fileName_13() { return &___fileName_13; }
	inline void set_fileName_13(String_t* value)
	{
		___fileName_13 = value;
		Il2CppCodeGenWriteBarrier((&___fileName_13), value);
	}

	inline static int32_t get_offset_of_fusionLog_14() { return static_cast<int32_t>(offsetof(FileLoadException_t2559997937, ___fusionLog_14)); }
	inline String_t* get_fusionLog_14() const { return ___fusionLog_14; }
	inline String_t** get_address_of_fusionLog_14() { return &___fusionLog_14; }
	inline void set_fusionLog_14(String_t* value)
	{
		___fusionLog_14 = value;
		Il2CppCodeGenWriteBarrier((&___fusionLog_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILELOADEXCEPTION_T2559997937_H
#ifndef FILENOTFOUNDEXCEPTION_T889387022_H
#define FILENOTFOUNDEXCEPTION_T889387022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileNotFoundException
struct  FileNotFoundException_t889387022  : public IOException_t670336194
{
public:
	// System.String System.IO.FileNotFoundException::fileName
	String_t* ___fileName_11;
	// System.String System.IO.FileNotFoundException::fusionLog
	String_t* ___fusionLog_12;

public:
	inline static int32_t get_offset_of_fileName_11() { return static_cast<int32_t>(offsetof(FileNotFoundException_t889387022, ___fileName_11)); }
	inline String_t* get_fileName_11() const { return ___fileName_11; }
	inline String_t** get_address_of_fileName_11() { return &___fileName_11; }
	inline void set_fileName_11(String_t* value)
	{
		___fileName_11 = value;
		Il2CppCodeGenWriteBarrier((&___fileName_11), value);
	}

	inline static int32_t get_offset_of_fusionLog_12() { return static_cast<int32_t>(offsetof(FileNotFoundException_t889387022, ___fusionLog_12)); }
	inline String_t* get_fusionLog_12() const { return ___fusionLog_12; }
	inline String_t** get_address_of_fusionLog_12() { return &___fusionLog_12; }
	inline void set_fusionLog_12(String_t* value)
	{
		___fusionLog_12 = value;
		Il2CppCodeGenWriteBarrier((&___fusionLog_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILENOTFOUNDEXCEPTION_T889387022_H
#ifndef FILESTREAM_T1036346566_H
#define FILESTREAM_T1036346566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t1036346566  : public Stream_t2967449720
{
public:
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_1;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_2;
	// System.Boolean System.IO.FileStream::async
	bool ___async_3;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_4;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_5;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_6;
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t2378657911* ___buf_7;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_8;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_9;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_10;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_11;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_12;
	// System.String System.IO.FileStream::name
	String_t* ___name_13;
	// System.IntPtr System.IO.FileStream::handle
	IntPtr_t ___handle_14;

public:
	inline static int32_t get_offset_of_access_1() { return static_cast<int32_t>(offsetof(FileStream_t1036346566, ___access_1)); }
	inline int32_t get_access_1() const { return ___access_1; }
	inline int32_t* get_address_of_access_1() { return &___access_1; }
	inline void set_access_1(int32_t value)
	{
		___access_1 = value;
	}

	inline static int32_t get_offset_of_owner_2() { return static_cast<int32_t>(offsetof(FileStream_t1036346566, ___owner_2)); }
	inline bool get_owner_2() const { return ___owner_2; }
	inline bool* get_address_of_owner_2() { return &___owner_2; }
	inline void set_owner_2(bool value)
	{
		___owner_2 = value;
	}

	inline static int32_t get_offset_of_async_3() { return static_cast<int32_t>(offsetof(FileStream_t1036346566, ___async_3)); }
	inline bool get_async_3() const { return ___async_3; }
	inline bool* get_address_of_async_3() { return &___async_3; }
	inline void set_async_3(bool value)
	{
		___async_3 = value;
	}

	inline static int32_t get_offset_of_canseek_4() { return static_cast<int32_t>(offsetof(FileStream_t1036346566, ___canseek_4)); }
	inline bool get_canseek_4() const { return ___canseek_4; }
	inline bool* get_address_of_canseek_4() { return &___canseek_4; }
	inline void set_canseek_4(bool value)
	{
		___canseek_4 = value;
	}

	inline static int32_t get_offset_of_append_startpos_5() { return static_cast<int32_t>(offsetof(FileStream_t1036346566, ___append_startpos_5)); }
	inline int64_t get_append_startpos_5() const { return ___append_startpos_5; }
	inline int64_t* get_address_of_append_startpos_5() { return &___append_startpos_5; }
	inline void set_append_startpos_5(int64_t value)
	{
		___append_startpos_5 = value;
	}

	inline static int32_t get_offset_of_anonymous_6() { return static_cast<int32_t>(offsetof(FileStream_t1036346566, ___anonymous_6)); }
	inline bool get_anonymous_6() const { return ___anonymous_6; }
	inline bool* get_address_of_anonymous_6() { return &___anonymous_6; }
	inline void set_anonymous_6(bool value)
	{
		___anonymous_6 = value;
	}

	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_t1036346566, ___buf_7)); }
	inline ByteU5BU5D_t2378657911* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_t2378657911** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_t2378657911* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((&___buf_7), value);
	}

	inline static int32_t get_offset_of_buf_size_8() { return static_cast<int32_t>(offsetof(FileStream_t1036346566, ___buf_size_8)); }
	inline int32_t get_buf_size_8() const { return ___buf_size_8; }
	inline int32_t* get_address_of_buf_size_8() { return &___buf_size_8; }
	inline void set_buf_size_8(int32_t value)
	{
		___buf_size_8 = value;
	}

	inline static int32_t get_offset_of_buf_length_9() { return static_cast<int32_t>(offsetof(FileStream_t1036346566, ___buf_length_9)); }
	inline int32_t get_buf_length_9() const { return ___buf_length_9; }
	inline int32_t* get_address_of_buf_length_9() { return &___buf_length_9; }
	inline void set_buf_length_9(int32_t value)
	{
		___buf_length_9 = value;
	}

	inline static int32_t get_offset_of_buf_offset_10() { return static_cast<int32_t>(offsetof(FileStream_t1036346566, ___buf_offset_10)); }
	inline int32_t get_buf_offset_10() const { return ___buf_offset_10; }
	inline int32_t* get_address_of_buf_offset_10() { return &___buf_offset_10; }
	inline void set_buf_offset_10(int32_t value)
	{
		___buf_offset_10 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_11() { return static_cast<int32_t>(offsetof(FileStream_t1036346566, ___buf_dirty_11)); }
	inline bool get_buf_dirty_11() const { return ___buf_dirty_11; }
	inline bool* get_address_of_buf_dirty_11() { return &___buf_dirty_11; }
	inline void set_buf_dirty_11(bool value)
	{
		___buf_dirty_11 = value;
	}

	inline static int32_t get_offset_of_buf_start_12() { return static_cast<int32_t>(offsetof(FileStream_t1036346566, ___buf_start_12)); }
	inline int64_t get_buf_start_12() const { return ___buf_start_12; }
	inline int64_t* get_address_of_buf_start_12() { return &___buf_start_12; }
	inline void set_buf_start_12(int64_t value)
	{
		___buf_start_12 = value;
	}

	inline static int32_t get_offset_of_name_13() { return static_cast<int32_t>(offsetof(FileStream_t1036346566, ___name_13)); }
	inline String_t* get_name_13() const { return ___name_13; }
	inline String_t** get_address_of_name_13() { return &___name_13; }
	inline void set_name_13(String_t* value)
	{
		___name_13 = value;
		Il2CppCodeGenWriteBarrier((&___name_13), value);
	}

	inline static int32_t get_offset_of_handle_14() { return static_cast<int32_t>(offsetof(FileStream_t1036346566, ___handle_14)); }
	inline IntPtr_t get_handle_14() const { return ___handle_14; }
	inline IntPtr_t* get_address_of_handle_14() { return &___handle_14; }
	inline void set_handle_14(IntPtr_t value)
	{
		___handle_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T1036346566_H
#ifndef PATHTOOLONGEXCEPTION_T3739855409_H
#define PATHTOOLONGEXCEPTION_T3739855409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.PathTooLongException
struct  PathTooLongException_t3739855409  : public IOException_t670336194
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATHTOOLONGEXCEPTION_T3739855409_H
#ifndef MONOIOSTAT_T2408378089_H
#define MONOIOSTAT_T2408378089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoIOStat
struct  MonoIOStat_t2408378089 
{
public:
	// System.String System.IO.MonoIOStat::Name
	String_t* ___Name_0;
	// System.IO.FileAttributes System.IO.MonoIOStat::Attributes
	int32_t ___Attributes_1;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_2;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_3;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_4;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t2408378089, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Attributes_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t2408378089, ___Attributes_1)); }
	inline int32_t get_Attributes_1() const { return ___Attributes_1; }
	inline int32_t* get_address_of_Attributes_1() { return &___Attributes_1; }
	inline void set_Attributes_1(int32_t value)
	{
		___Attributes_1 = value;
	}

	inline static int32_t get_offset_of_Length_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t2408378089, ___Length_2)); }
	inline int64_t get_Length_2() const { return ___Length_2; }
	inline int64_t* get_address_of_Length_2() { return &___Length_2; }
	inline void set_Length_2(int64_t value)
	{
		___Length_2 = value;
	}

	inline static int32_t get_offset_of_CreationTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t2408378089, ___CreationTime_3)); }
	inline int64_t get_CreationTime_3() const { return ___CreationTime_3; }
	inline int64_t* get_address_of_CreationTime_3() { return &___CreationTime_3; }
	inline void set_CreationTime_3(int64_t value)
	{
		___CreationTime_3 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t2408378089, ___LastAccessTime_4)); }
	inline int64_t get_LastAccessTime_4() const { return ___LastAccessTime_4; }
	inline int64_t* get_address_of_LastAccessTime_4() { return &___LastAccessTime_4; }
	inline void set_LastAccessTime_4(int64_t value)
	{
		___LastAccessTime_4 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_5() { return static_cast<int32_t>(offsetof(MonoIOStat_t2408378089, ___LastWriteTime_5)); }
	inline int64_t get_LastWriteTime_5() const { return ___LastWriteTime_5; }
	inline int64_t* get_address_of_LastWriteTime_5() { return &___LastWriteTime_5; }
	inline void set_LastWriteTime_5(int64_t value)
	{
		___LastWriteTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.IO.MonoIOStat
struct MonoIOStat_t2408378089_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
// Native definition for COM marshalling of System.IO.MonoIOStat
struct MonoIOStat_t2408378089_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
#endif // MONOIOSTAT_T2408378089_H
#ifndef UNMANAGEDMEMORYSTREAM_T3844749578_H
#define UNMANAGEDMEMORYSTREAM_T3844749578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.UnmanagedMemoryStream
struct  UnmanagedMemoryStream_t3844749578  : public Stream_t2967449720
{
public:
	// System.Int64 System.IO.UnmanagedMemoryStream::length
	int64_t ___length_1;
	// System.Boolean System.IO.UnmanagedMemoryStream::closed
	bool ___closed_2;
	// System.Int64 System.IO.UnmanagedMemoryStream::capacity
	int64_t ___capacity_3;
	// System.IO.FileAccess System.IO.UnmanagedMemoryStream::fileaccess
	int32_t ___fileaccess_4;
	// System.IntPtr System.IO.UnmanagedMemoryStream::initial_pointer
	IntPtr_t ___initial_pointer_5;
	// System.Int64 System.IO.UnmanagedMemoryStream::initial_position
	int64_t ___initial_position_6;
	// System.Int64 System.IO.UnmanagedMemoryStream::current_position
	int64_t ___current_position_7;
	// System.EventHandler System.IO.UnmanagedMemoryStream::Closed
	EventHandler_t2878087027 * ___Closed_8;

public:
	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t3844749578, ___length_1)); }
	inline int64_t get_length_1() const { return ___length_1; }
	inline int64_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int64_t value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_closed_2() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t3844749578, ___closed_2)); }
	inline bool get_closed_2() const { return ___closed_2; }
	inline bool* get_address_of_closed_2() { return &___closed_2; }
	inline void set_closed_2(bool value)
	{
		___closed_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t3844749578, ___capacity_3)); }
	inline int64_t get_capacity_3() const { return ___capacity_3; }
	inline int64_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int64_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_fileaccess_4() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t3844749578, ___fileaccess_4)); }
	inline int32_t get_fileaccess_4() const { return ___fileaccess_4; }
	inline int32_t* get_address_of_fileaccess_4() { return &___fileaccess_4; }
	inline void set_fileaccess_4(int32_t value)
	{
		___fileaccess_4 = value;
	}

	inline static int32_t get_offset_of_initial_pointer_5() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t3844749578, ___initial_pointer_5)); }
	inline IntPtr_t get_initial_pointer_5() const { return ___initial_pointer_5; }
	inline IntPtr_t* get_address_of_initial_pointer_5() { return &___initial_pointer_5; }
	inline void set_initial_pointer_5(IntPtr_t value)
	{
		___initial_pointer_5 = value;
	}

	inline static int32_t get_offset_of_initial_position_6() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t3844749578, ___initial_position_6)); }
	inline int64_t get_initial_position_6() const { return ___initial_position_6; }
	inline int64_t* get_address_of_initial_position_6() { return &___initial_position_6; }
	inline void set_initial_position_6(int64_t value)
	{
		___initial_position_6 = value;
	}

	inline static int32_t get_offset_of_current_position_7() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t3844749578, ___current_position_7)); }
	inline int64_t get_current_position_7() const { return ___current_position_7; }
	inline int64_t* get_address_of_current_position_7() { return &___current_position_7; }
	inline void set_current_position_7(int64_t value)
	{
		___current_position_7 = value;
	}

	inline static int32_t get_offset_of_Closed_8() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t3844749578, ___Closed_8)); }
	inline EventHandler_t2878087027 * get_Closed_8() const { return ___Closed_8; }
	inline EventHandler_t2878087027 ** get_address_of_Closed_8() { return &___Closed_8; }
	inline void set_Closed_8(EventHandler_t2878087027 * value)
	{
		___Closed_8 = value;
		Il2CppCodeGenWriteBarrier((&___Closed_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDMEMORYSTREAM_T3844749578_H
#ifndef ENUMERATOR_T4249023733_H
#define ENUMERATOR_T4249023733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/Enumerator
struct  Enumerator_t4249023733  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/Enumerator::host
	Hashtable_t188184851 * ___host_0;
	// System.Int32 System.Collections.Hashtable/Enumerator::stamp
	int32_t ___stamp_1;
	// System.Int32 System.Collections.Hashtable/Enumerator::pos
	int32_t ___pos_2;
	// System.Int32 System.Collections.Hashtable/Enumerator::size
	int32_t ___size_3;
	// System.Collections.Hashtable/EnumeratorMode System.Collections.Hashtable/Enumerator::mode
	int32_t ___mode_4;
	// System.Object System.Collections.Hashtable/Enumerator::currentKey
	RuntimeObject * ___currentKey_5;
	// System.Object System.Collections.Hashtable/Enumerator::currentValue
	RuntimeObject * ___currentValue_6;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(Enumerator_t4249023733, ___host_0)); }
	inline Hashtable_t188184851 * get_host_0() const { return ___host_0; }
	inline Hashtable_t188184851 ** get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(Hashtable_t188184851 * value)
	{
		___host_0 = value;
		Il2CppCodeGenWriteBarrier((&___host_0), value);
	}

	inline static int32_t get_offset_of_stamp_1() { return static_cast<int32_t>(offsetof(Enumerator_t4249023733, ___stamp_1)); }
	inline int32_t get_stamp_1() const { return ___stamp_1; }
	inline int32_t* get_address_of_stamp_1() { return &___stamp_1; }
	inline void set_stamp_1(int32_t value)
	{
		___stamp_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(Enumerator_t4249023733, ___pos_2)); }
	inline int32_t get_pos_2() const { return ___pos_2; }
	inline int32_t* get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(int32_t value)
	{
		___pos_2 = value;
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(Enumerator_t4249023733, ___size_3)); }
	inline int32_t get_size_3() const { return ___size_3; }
	inline int32_t* get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(int32_t value)
	{
		___size_3 = value;
	}

	inline static int32_t get_offset_of_mode_4() { return static_cast<int32_t>(offsetof(Enumerator_t4249023733, ___mode_4)); }
	inline int32_t get_mode_4() const { return ___mode_4; }
	inline int32_t* get_address_of_mode_4() { return &___mode_4; }
	inline void set_mode_4(int32_t value)
	{
		___mode_4 = value;
	}

	inline static int32_t get_offset_of_currentKey_5() { return static_cast<int32_t>(offsetof(Enumerator_t4249023733, ___currentKey_5)); }
	inline RuntimeObject * get_currentKey_5() const { return ___currentKey_5; }
	inline RuntimeObject ** get_address_of_currentKey_5() { return &___currentKey_5; }
	inline void set_currentKey_5(RuntimeObject * value)
	{
		___currentKey_5 = value;
		Il2CppCodeGenWriteBarrier((&___currentKey_5), value);
	}

	inline static int32_t get_offset_of_currentValue_6() { return static_cast<int32_t>(offsetof(Enumerator_t4249023733, ___currentValue_6)); }
	inline RuntimeObject * get_currentValue_6() const { return ___currentValue_6; }
	inline RuntimeObject ** get_address_of_currentValue_6() { return &___currentValue_6; }
	inline void set_currentValue_6(RuntimeObject * value)
	{
		___currentValue_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentValue_6), value);
	}
};

struct Enumerator_t4249023733_StaticFields
{
public:
	// System.String System.Collections.Hashtable/Enumerator::xstr
	String_t* ___xstr_7;

public:
	inline static int32_t get_offset_of_xstr_7() { return static_cast<int32_t>(offsetof(Enumerator_t4249023733_StaticFields, ___xstr_7)); }
	inline String_t* get_xstr_7() const { return ___xstr_7; }
	inline String_t** get_address_of_xstr_7() { return &___xstr_7; }
	inline void set_xstr_7(String_t* value)
	{
		___xstr_7 = value;
		Il2CppCodeGenWriteBarrier((&___xstr_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T4249023733_H
#ifndef DAYLIGHTTIME_T2714658036_H
#define DAYLIGHTTIME_T2714658036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DaylightTime
struct  DaylightTime_t2714658036  : public RuntimeObject
{
public:
	// System.DateTime System.Globalization.DaylightTime::m_start
	DateTime_t2321164601  ___m_start_0;
	// System.DateTime System.Globalization.DaylightTime::m_end
	DateTime_t2321164601  ___m_end_1;
	// System.TimeSpan System.Globalization.DaylightTime::m_delta
	TimeSpan_t4050686296  ___m_delta_2;

public:
	inline static int32_t get_offset_of_m_start_0() { return static_cast<int32_t>(offsetof(DaylightTime_t2714658036, ___m_start_0)); }
	inline DateTime_t2321164601  get_m_start_0() const { return ___m_start_0; }
	inline DateTime_t2321164601 * get_address_of_m_start_0() { return &___m_start_0; }
	inline void set_m_start_0(DateTime_t2321164601  value)
	{
		___m_start_0 = value;
	}

	inline static int32_t get_offset_of_m_end_1() { return static_cast<int32_t>(offsetof(DaylightTime_t2714658036, ___m_end_1)); }
	inline DateTime_t2321164601  get_m_end_1() const { return ___m_end_1; }
	inline DateTime_t2321164601 * get_address_of_m_end_1() { return &___m_end_1; }
	inline void set_m_end_1(DateTime_t2321164601  value)
	{
		___m_end_1 = value;
	}

	inline static int32_t get_offset_of_m_delta_2() { return static_cast<int32_t>(offsetof(DaylightTime_t2714658036, ___m_delta_2)); }
	inline TimeSpan_t4050686296  get_m_delta_2() const { return ___m_delta_2; }
	inline TimeSpan_t4050686296 * get_address_of_m_delta_2() { return &___m_delta_2; }
	inline void set_m_delta_2(TimeSpan_t4050686296  value)
	{
		___m_delta_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DAYLIGHTTIME_T2714658036_H
#ifndef READDELEGATE_T60105204_H
#define READDELEGATE_T60105204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream/ReadDelegate
struct  ReadDelegate_t60105204  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READDELEGATE_T60105204_H
#ifndef WRITEDELEGATE_T2814347465_H
#define WRITEDELEGATE_T2814347465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream/WriteDelegate
struct  WriteDelegate_t2814347465  : public MulticastDelegate_t905511653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEDELEGATE_T2814347465_H
#ifndef FILESYSTEMINFO_T3293963559_H
#define FILESYSTEMINFO_T3293963559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileSystemInfo
struct  FileSystemInfo_t3293963559  : public MarshalByRefObject_t2387283355
{
public:
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_1;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_2;
	// System.IO.MonoIOStat System.IO.FileSystemInfo::stat
	MonoIOStat_t2408378089  ___stat_3;
	// System.Boolean System.IO.FileSystemInfo::valid
	bool ___valid_4;

public:
	inline static int32_t get_offset_of_FullPath_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3293963559, ___FullPath_1)); }
	inline String_t* get_FullPath_1() const { return ___FullPath_1; }
	inline String_t** get_address_of_FullPath_1() { return &___FullPath_1; }
	inline void set_FullPath_1(String_t* value)
	{
		___FullPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___FullPath_1), value);
	}

	inline static int32_t get_offset_of_OriginalPath_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3293963559, ___OriginalPath_2)); }
	inline String_t* get_OriginalPath_2() const { return ___OriginalPath_2; }
	inline String_t** get_address_of_OriginalPath_2() { return &___OriginalPath_2; }
	inline void set_OriginalPath_2(String_t* value)
	{
		___OriginalPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalPath_2), value);
	}

	inline static int32_t get_offset_of_stat_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3293963559, ___stat_3)); }
	inline MonoIOStat_t2408378089  get_stat_3() const { return ___stat_3; }
	inline MonoIOStat_t2408378089 * get_address_of_stat_3() { return &___stat_3; }
	inline void set_stat_3(MonoIOStat_t2408378089  value)
	{
		___stat_3 = value;
	}

	inline static int32_t get_offset_of_valid_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3293963559, ___valid_4)); }
	inline bool get_valid_4() const { return ___valid_4; }
	inline bool* get_address_of_valid_4() { return &___valid_4; }
	inline void set_valid_4(bool value)
	{
		___valid_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESYSTEMINFO_T3293963559_H
#ifndef DIRECTORYINFO_T3843500669_H
#define DIRECTORYINFO_T3843500669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.DirectoryInfo
struct  DirectoryInfo_t3843500669  : public FileSystemInfo_t3293963559
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_5;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_6;

public:
	inline static int32_t get_offset_of_current_5() { return static_cast<int32_t>(offsetof(DirectoryInfo_t3843500669, ___current_5)); }
	inline String_t* get_current_5() const { return ___current_5; }
	inline String_t** get_address_of_current_5() { return &___current_5; }
	inline void set_current_5(String_t* value)
	{
		___current_5 = value;
		Il2CppCodeGenWriteBarrier((&___current_5), value);
	}

	inline static int32_t get_offset_of_parent_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t3843500669, ___parent_6)); }
	inline String_t* get_parent_6() const { return ___parent_6; }
	inline String_t** get_address_of_parent_6() { return &___parent_6; }
	inline void set_parent_6(String_t* value)
	{
		___parent_6 = value;
		Il2CppCodeGenWriteBarrier((&___parent_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORYINFO_T3843500669_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize200 = { sizeof (Enumerator_t4249023733), -1, sizeof(Enumerator_t4249023733_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable200[8] = 
{
	Enumerator_t4249023733::get_offset_of_host_0(),
	Enumerator_t4249023733::get_offset_of_stamp_1(),
	Enumerator_t4249023733::get_offset_of_pos_2(),
	Enumerator_t4249023733::get_offset_of_size_3(),
	Enumerator_t4249023733::get_offset_of_mode_4(),
	Enumerator_t4249023733::get_offset_of_currentKey_5(),
	Enumerator_t4249023733::get_offset_of_currentValue_6(),
	Enumerator_t4249023733_StaticFields::get_offset_of_xstr_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize201 = { sizeof (HashKeys_t1746839694), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable201[1] = 
{
	HashKeys_t1746839694::get_offset_of_host_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize202 = { sizeof (HashValues_t4108664002), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable202[1] = 
{
	HashValues_t4108664002::get_offset_of_host_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize203 = { sizeof (SyncHashtable_t4223980992), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable203[1] = 
{
	SyncHashtable_t4223980992::get_offset_of_host_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize204 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize205 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize206 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize207 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize208 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize209 = { sizeof (Queue_t1728721708), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable209[6] = 
{
	Queue_t1728721708::get_offset_of__array_0(),
	Queue_t1728721708::get_offset_of__head_1(),
	Queue_t1728721708::get_offset_of__size_2(),
	Queue_t1728721708::get_offset_of__tail_3(),
	Queue_t1728721708::get_offset_of__growFactor_4(),
	Queue_t1728721708::get_offset_of__version_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize210 = { sizeof (QueueEnumerator_t1010910589), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable210[3] = 
{
	QueueEnumerator_t1010910589::get_offset_of_queue_0(),
	QueueEnumerator_t1010910589::get_offset_of__version_1(),
	QueueEnumerator_t1010910589::get_offset_of_current_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize211 = { sizeof (ReadOnlyCollectionBase_t594653574), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable211[1] = 
{
	ReadOnlyCollectionBase_t594653574::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize212 = { sizeof (SortedList_t1937438985), -1, sizeof(SortedList_t1937438985_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable212[6] = 
{
	SortedList_t1937438985_StaticFields::get_offset_of_INITIAL_SIZE_0(),
	SortedList_t1937438985::get_offset_of_inUse_1(),
	SortedList_t1937438985::get_offset_of_modificationCount_2(),
	SortedList_t1937438985::get_offset_of_table_3(),
	SortedList_t1937438985::get_offset_of_comparer_4(),
	SortedList_t1937438985::get_offset_of_defaultCapacity_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize213 = { sizeof (Slot_t2528459918)+ sizeof (RuntimeObject), sizeof(Slot_t2528459918_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable213[2] = 
{
	Slot_t2528459918::get_offset_of_key_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Slot_t2528459918::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize214 = { sizeof (EnumeratorMode_t1561046223)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable214[4] = 
{
	EnumeratorMode_t1561046223::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize215 = { sizeof (Enumerator_t3541969671), -1, sizeof(Enumerator_t3541969671_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable215[9] = 
{
	Enumerator_t3541969671::get_offset_of_host_0(),
	Enumerator_t3541969671::get_offset_of_stamp_1(),
	Enumerator_t3541969671::get_offset_of_pos_2(),
	Enumerator_t3541969671::get_offset_of_size_3(),
	Enumerator_t3541969671::get_offset_of_mode_4(),
	Enumerator_t3541969671::get_offset_of_currentKey_5(),
	Enumerator_t3541969671::get_offset_of_currentValue_6(),
	Enumerator_t3541969671::get_offset_of_invalid_7(),
	Enumerator_t3541969671_StaticFields::get_offset_of_xstr_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize216 = { sizeof (ListKeys_t958862122), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable216[1] = 
{
	ListKeys_t958862122::get_offset_of_host_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize217 = { sizeof (ListValues_t3632317156), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable217[1] = 
{
	ListValues_t3632317156::get_offset_of_host_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize218 = { sizeof (Stack_t1828224996), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable218[5] = 
{
	Stack_t1828224996::get_offset_of_contents_0(),
	Stack_t1828224996::get_offset_of_current_1(),
	Stack_t1828224996::get_offset_of_count_2(),
	Stack_t1828224996::get_offset_of_capacity_3(),
	Stack_t1828224996::get_offset_of_modCount_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize219 = { sizeof (Enumerator_t3805982844), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable219[3] = 
{
	Enumerator_t3805982844::get_offset_of_stack_0(),
	Enumerator_t3805982844::get_offset_of_modCount_1(),
	Enumerator_t3805982844::get_offset_of_current_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize220 = { sizeof (AssemblyHashAlgorithm_t564227168)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable220[4] = 
{
	AssemblyHashAlgorithm_t564227168::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize221 = { sizeof (AssemblyVersionCompatibility_t2954594434)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable221[4] = 
{
	AssemblyVersionCompatibility_t2954594434::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize222 = { sizeof (SuppressMessageAttribute_t3415584592), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable222[3] = 
{
	SuppressMessageAttribute_t3415584592::get_offset_of_category_0(),
	SuppressMessageAttribute_t3415584592::get_offset_of_checkId_1(),
	SuppressMessageAttribute_t3415584592::get_offset_of_messageId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize223 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize224 = { sizeof (DebuggableAttribute_t3773356535), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable224[3] = 
{
	DebuggableAttribute_t3773356535::get_offset_of_JITTrackingEnabledFlag_0(),
	DebuggableAttribute_t3773356535::get_offset_of_JITOptimizerDisabledFlag_1(),
	DebuggableAttribute_t3773356535::get_offset_of_debuggingModes_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize225 = { sizeof (DebuggingModes_t2468431366)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable225[6] = 
{
	DebuggingModes_t2468431366::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize226 = { sizeof (Debugger_t1384979307), -1, sizeof(Debugger_t1384979307_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable226[1] = 
{
	Debugger_t1384979307_StaticFields::get_offset_of_DefaultCategory_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize227 = { sizeof (DebuggerBrowsableAttribute_t3888084580), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable227[1] = 
{
	DebuggerBrowsableAttribute_t3888084580::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize228 = { sizeof (DebuggerBrowsableState_t821780340)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable228[4] = 
{
	DebuggerBrowsableState_t821780340::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize229 = { sizeof (DebuggerDisplayAttribute_t3774826810), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable229[3] = 
{
	DebuggerDisplayAttribute_t3774826810::get_offset_of_value_0(),
	DebuggerDisplayAttribute_t3774826810::get_offset_of_type_1(),
	DebuggerDisplayAttribute_t3774826810::get_offset_of_name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize230 = { sizeof (DebuggerStepThroughAttribute_t3006563842), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize231 = { sizeof (DebuggerTypeProxyAttribute_t3951296034), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable231[1] = 
{
	DebuggerTypeProxyAttribute_t3951296034::get_offset_of_proxy_type_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize232 = { sizeof (StackFrame_t3131219505), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable232[8] = 
{
	0,
	StackFrame_t3131219505::get_offset_of_ilOffset_1(),
	StackFrame_t3131219505::get_offset_of_nativeOffset_2(),
	StackFrame_t3131219505::get_offset_of_methodBase_3(),
	StackFrame_t3131219505::get_offset_of_fileName_4(),
	StackFrame_t3131219505::get_offset_of_lineNumber_5(),
	StackFrame_t3131219505::get_offset_of_columnNumber_6(),
	StackFrame_t3131219505::get_offset_of_internalMethodName_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize233 = { sizeof (StackTrace_t4174235613), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable233[3] = 
{
	0,
	StackTrace_t4174235613::get_offset_of_frames_1(),
	StackTrace_t4174235613::get_offset_of_debug_info_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize234 = { sizeof (Calendar_t2168011545), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable234[4] = 
{
	Calendar_t2168011545::get_offset_of_m_isReadOnly_0(),
	Calendar_t2168011545::get_offset_of_twoDigitYearMax_1(),
	Calendar_t2168011545::get_offset_of_M_AbbrEraNames_2(),
	Calendar_t2168011545::get_offset_of_M_EraNames_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize235 = { sizeof (CCMath_t420514786), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize236 = { sizeof (CCFixed_t756559661), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize237 = { sizeof (CCGregorianCalendar_t3740195573), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize238 = { sizeof (CompareInfo_t4004371), -1, sizeof(CompareInfo_t4004371_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable238[6] = 
{
	CompareInfo_t4004371_StaticFields::get_offset_of_useManagedCollation_0(),
	CompareInfo_t4004371::get_offset_of_culture_1(),
	CompareInfo_t4004371::get_offset_of_icu_name_2(),
	CompareInfo_t4004371::get_offset_of_collator_3(),
	CompareInfo_t4004371_StaticFields::get_offset_of_collators_4(),
	CompareInfo_t4004371_StaticFields::get_offset_of_monitor_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize239 = { sizeof (CompareOptions_t3164485570)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable239[10] = 
{
	CompareOptions_t3164485570::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize240 = { sizeof (CultureInfo_t2669610510), -1, sizeof(CultureInfo_t2669610510_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable240[40] = 
{
	0,
	0,
	0,
	0,
	CultureInfo_t2669610510_StaticFields::get_offset_of_invariant_culture_info_4(),
	CultureInfo_t2669610510_StaticFields::get_offset_of_shared_table_lock_5(),
	CultureInfo_t2669610510_StaticFields::get_offset_of_BootstrapCultureID_6(),
	CultureInfo_t2669610510::get_offset_of_m_isReadOnly_7(),
	CultureInfo_t2669610510::get_offset_of_cultureID_8(),
	CultureInfo_t2669610510::get_offset_of_parent_lcid_9(),
	CultureInfo_t2669610510::get_offset_of_specific_lcid_10(),
	CultureInfo_t2669610510::get_offset_of_datetime_index_11(),
	CultureInfo_t2669610510::get_offset_of_number_index_12(),
	CultureInfo_t2669610510::get_offset_of_m_useUserOverride_13(),
	CultureInfo_t2669610510::get_offset_of_numInfo_14(),
	CultureInfo_t2669610510::get_offset_of_dateTimeInfo_15(),
	CultureInfo_t2669610510::get_offset_of_textInfo_16(),
	CultureInfo_t2669610510::get_offset_of_m_name_17(),
	CultureInfo_t2669610510::get_offset_of_displayname_18(),
	CultureInfo_t2669610510::get_offset_of_englishname_19(),
	CultureInfo_t2669610510::get_offset_of_nativename_20(),
	CultureInfo_t2669610510::get_offset_of_iso3lang_21(),
	CultureInfo_t2669610510::get_offset_of_iso2lang_22(),
	CultureInfo_t2669610510::get_offset_of_icu_name_23(),
	CultureInfo_t2669610510::get_offset_of_win3lang_24(),
	CultureInfo_t2669610510::get_offset_of_territory_25(),
	CultureInfo_t2669610510::get_offset_of_compareInfo_26(),
	CultureInfo_t2669610510::get_offset_of_calendar_data_27(),
	CultureInfo_t2669610510::get_offset_of_textinfo_data_28(),
	CultureInfo_t2669610510::get_offset_of_optional_calendars_29(),
	CultureInfo_t2669610510::get_offset_of_parent_culture_30(),
	CultureInfo_t2669610510::get_offset_of_m_dataItem_31(),
	CultureInfo_t2669610510::get_offset_of_calendar_32(),
	CultureInfo_t2669610510::get_offset_of_constructed_33(),
	CultureInfo_t2669610510::get_offset_of_cached_serialized_form_34(),
	CultureInfo_t2669610510_StaticFields::get_offset_of_MSG_READONLY_35(),
	CultureInfo_t2669610510_StaticFields::get_offset_of_shared_by_number_36(),
	CultureInfo_t2669610510_StaticFields::get_offset_of_shared_by_name_37(),
	CultureInfo_t2669610510_StaticFields::get_offset_of_U3CU3Ef__switchU24map19_38(),
	CultureInfo_t2669610510_StaticFields::get_offset_of_U3CU3Ef__switchU24map1A_39(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize241 = { sizeof (CultureTypes_t3460380487)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable241[9] = 
{
	CultureTypes_t3460380487::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize242 = { sizeof (DateTimeFormatFlags_t881228467)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable242[6] = 
{
	DateTimeFormatFlags_t881228467::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize243 = { sizeof (DateTimeFormatInfo_t2326238209), -1, sizeof(DateTimeFormatInfo_t2326238209_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable243[58] = 
{
	0,
	DateTimeFormatInfo_t2326238209_StaticFields::get_offset_of_MSG_READONLY_1(),
	DateTimeFormatInfo_t2326238209_StaticFields::get_offset_of_MSG_ARRAYSIZE_MONTH_2(),
	DateTimeFormatInfo_t2326238209_StaticFields::get_offset_of_MSG_ARRAYSIZE_DAY_3(),
	DateTimeFormatInfo_t2326238209_StaticFields::get_offset_of_INVARIANT_ABBREVIATED_DAY_NAMES_4(),
	DateTimeFormatInfo_t2326238209_StaticFields::get_offset_of_INVARIANT_DAY_NAMES_5(),
	DateTimeFormatInfo_t2326238209_StaticFields::get_offset_of_INVARIANT_ABBREVIATED_MONTH_NAMES_6(),
	DateTimeFormatInfo_t2326238209_StaticFields::get_offset_of_INVARIANT_MONTH_NAMES_7(),
	DateTimeFormatInfo_t2326238209_StaticFields::get_offset_of_INVARIANT_SHORT_DAY_NAMES_8(),
	DateTimeFormatInfo_t2326238209_StaticFields::get_offset_of_theInvariantDateTimeFormatInfo_9(),
	DateTimeFormatInfo_t2326238209::get_offset_of_m_isReadOnly_10(),
	DateTimeFormatInfo_t2326238209::get_offset_of_amDesignator_11(),
	DateTimeFormatInfo_t2326238209::get_offset_of_pmDesignator_12(),
	DateTimeFormatInfo_t2326238209::get_offset_of_dateSeparator_13(),
	DateTimeFormatInfo_t2326238209::get_offset_of_timeSeparator_14(),
	DateTimeFormatInfo_t2326238209::get_offset_of_shortDatePattern_15(),
	DateTimeFormatInfo_t2326238209::get_offset_of_longDatePattern_16(),
	DateTimeFormatInfo_t2326238209::get_offset_of_shortTimePattern_17(),
	DateTimeFormatInfo_t2326238209::get_offset_of_longTimePattern_18(),
	DateTimeFormatInfo_t2326238209::get_offset_of_monthDayPattern_19(),
	DateTimeFormatInfo_t2326238209::get_offset_of_yearMonthPattern_20(),
	DateTimeFormatInfo_t2326238209::get_offset_of_fullDateTimePattern_21(),
	DateTimeFormatInfo_t2326238209::get_offset_of__RFC1123Pattern_22(),
	DateTimeFormatInfo_t2326238209::get_offset_of__SortableDateTimePattern_23(),
	DateTimeFormatInfo_t2326238209::get_offset_of__UniversalSortableDateTimePattern_24(),
	DateTimeFormatInfo_t2326238209::get_offset_of_firstDayOfWeek_25(),
	DateTimeFormatInfo_t2326238209::get_offset_of_calendar_26(),
	DateTimeFormatInfo_t2326238209::get_offset_of_calendarWeekRule_27(),
	DateTimeFormatInfo_t2326238209::get_offset_of_abbreviatedDayNames_28(),
	DateTimeFormatInfo_t2326238209::get_offset_of_dayNames_29(),
	DateTimeFormatInfo_t2326238209::get_offset_of_monthNames_30(),
	DateTimeFormatInfo_t2326238209::get_offset_of_abbreviatedMonthNames_31(),
	DateTimeFormatInfo_t2326238209::get_offset_of_allShortDatePatterns_32(),
	DateTimeFormatInfo_t2326238209::get_offset_of_allLongDatePatterns_33(),
	DateTimeFormatInfo_t2326238209::get_offset_of_allShortTimePatterns_34(),
	DateTimeFormatInfo_t2326238209::get_offset_of_allLongTimePatterns_35(),
	DateTimeFormatInfo_t2326238209::get_offset_of_monthDayPatterns_36(),
	DateTimeFormatInfo_t2326238209::get_offset_of_yearMonthPatterns_37(),
	DateTimeFormatInfo_t2326238209::get_offset_of_shortDayNames_38(),
	DateTimeFormatInfo_t2326238209::get_offset_of_nDataItem_39(),
	DateTimeFormatInfo_t2326238209::get_offset_of_m_useUserOverride_40(),
	DateTimeFormatInfo_t2326238209::get_offset_of_m_isDefaultCalendar_41(),
	DateTimeFormatInfo_t2326238209::get_offset_of_CultureID_42(),
	DateTimeFormatInfo_t2326238209::get_offset_of_bUseCalendarInfo_43(),
	DateTimeFormatInfo_t2326238209::get_offset_of_generalShortTimePattern_44(),
	DateTimeFormatInfo_t2326238209::get_offset_of_generalLongTimePattern_45(),
	DateTimeFormatInfo_t2326238209::get_offset_of_m_eraNames_46(),
	DateTimeFormatInfo_t2326238209::get_offset_of_m_abbrevEraNames_47(),
	DateTimeFormatInfo_t2326238209::get_offset_of_m_abbrevEnglishEraNames_48(),
	DateTimeFormatInfo_t2326238209::get_offset_of_m_dateWords_49(),
	DateTimeFormatInfo_t2326238209::get_offset_of_optionalCalendars_50(),
	DateTimeFormatInfo_t2326238209::get_offset_of_m_superShortDayNames_51(),
	DateTimeFormatInfo_t2326238209::get_offset_of_genitiveMonthNames_52(),
	DateTimeFormatInfo_t2326238209::get_offset_of_m_genitiveAbbreviatedMonthNames_53(),
	DateTimeFormatInfo_t2326238209::get_offset_of_leapYearMonthNames_54(),
	DateTimeFormatInfo_t2326238209::get_offset_of_formatFlags_55(),
	DateTimeFormatInfo_t2326238209::get_offset_of_m_name_56(),
	DateTimeFormatInfo_t2326238209::get_offset_of_all_date_time_patterns_57(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize244 = { sizeof (DateTimeStyles_t1970899261)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable244[11] = 
{
	DateTimeStyles_t1970899261::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize245 = { sizeof (DaylightTime_t2714658036), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable245[3] = 
{
	DaylightTime_t2714658036::get_offset_of_m_start_0(),
	DaylightTime_t2714658036::get_offset_of_m_end_1(),
	DaylightTime_t2714658036::get_offset_of_m_delta_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize246 = { sizeof (GregorianCalendar_t2540616049), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable246[1] = 
{
	GregorianCalendar_t2540616049::get_offset_of_m_type_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize247 = { sizeof (GregorianCalendarTypes_t3662930107)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable247[7] = 
{
	GregorianCalendarTypes_t3662930107::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize248 = { sizeof (NumberFormatInfo_t796945479), -1, sizeof(NumberFormatInfo_t796945479_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable248[39] = 
{
	NumberFormatInfo_t796945479::get_offset_of_isReadOnly_0(),
	NumberFormatInfo_t796945479::get_offset_of_decimalFormats_1(),
	NumberFormatInfo_t796945479::get_offset_of_currencyFormats_2(),
	NumberFormatInfo_t796945479::get_offset_of_percentFormats_3(),
	NumberFormatInfo_t796945479::get_offset_of_digitPattern_4(),
	NumberFormatInfo_t796945479::get_offset_of_zeroPattern_5(),
	NumberFormatInfo_t796945479::get_offset_of_currencyDecimalDigits_6(),
	NumberFormatInfo_t796945479::get_offset_of_currencyDecimalSeparator_7(),
	NumberFormatInfo_t796945479::get_offset_of_currencyGroupSeparator_8(),
	NumberFormatInfo_t796945479::get_offset_of_currencyGroupSizes_9(),
	NumberFormatInfo_t796945479::get_offset_of_currencyNegativePattern_10(),
	NumberFormatInfo_t796945479::get_offset_of_currencyPositivePattern_11(),
	NumberFormatInfo_t796945479::get_offset_of_currencySymbol_12(),
	NumberFormatInfo_t796945479::get_offset_of_nanSymbol_13(),
	NumberFormatInfo_t796945479::get_offset_of_negativeInfinitySymbol_14(),
	NumberFormatInfo_t796945479::get_offset_of_negativeSign_15(),
	NumberFormatInfo_t796945479::get_offset_of_numberDecimalDigits_16(),
	NumberFormatInfo_t796945479::get_offset_of_numberDecimalSeparator_17(),
	NumberFormatInfo_t796945479::get_offset_of_numberGroupSeparator_18(),
	NumberFormatInfo_t796945479::get_offset_of_numberGroupSizes_19(),
	NumberFormatInfo_t796945479::get_offset_of_numberNegativePattern_20(),
	NumberFormatInfo_t796945479::get_offset_of_percentDecimalDigits_21(),
	NumberFormatInfo_t796945479::get_offset_of_percentDecimalSeparator_22(),
	NumberFormatInfo_t796945479::get_offset_of_percentGroupSeparator_23(),
	NumberFormatInfo_t796945479::get_offset_of_percentGroupSizes_24(),
	NumberFormatInfo_t796945479::get_offset_of_percentNegativePattern_25(),
	NumberFormatInfo_t796945479::get_offset_of_percentPositivePattern_26(),
	NumberFormatInfo_t796945479::get_offset_of_percentSymbol_27(),
	NumberFormatInfo_t796945479::get_offset_of_perMilleSymbol_28(),
	NumberFormatInfo_t796945479::get_offset_of_positiveInfinitySymbol_29(),
	NumberFormatInfo_t796945479::get_offset_of_positiveSign_30(),
	NumberFormatInfo_t796945479::get_offset_of_ansiCurrencySymbol_31(),
	NumberFormatInfo_t796945479::get_offset_of_m_dataItem_32(),
	NumberFormatInfo_t796945479::get_offset_of_m_useUserOverride_33(),
	NumberFormatInfo_t796945479::get_offset_of_validForParseAsNumber_34(),
	NumberFormatInfo_t796945479::get_offset_of_validForParseAsCurrency_35(),
	NumberFormatInfo_t796945479::get_offset_of_nativeDigits_36(),
	NumberFormatInfo_t796945479::get_offset_of_digitSubstitution_37(),
	NumberFormatInfo_t796945479_StaticFields::get_offset_of_invariantNativeDigits_38(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize249 = { sizeof (NumberStyles_t1245864980)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable249[18] = 
{
	NumberStyles_t1245864980::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize250 = { sizeof (TextInfo_t1015740494), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable250[9] = 
{
	TextInfo_t1015740494::get_offset_of_m_listSeparator_0(),
	TextInfo_t1015740494::get_offset_of_m_isReadOnly_1(),
	TextInfo_t1015740494::get_offset_of_customCultureName_2(),
	TextInfo_t1015740494::get_offset_of_m_nDataItem_3(),
	TextInfo_t1015740494::get_offset_of_m_useUserOverride_4(),
	TextInfo_t1015740494::get_offset_of_m_win32LangID_5(),
	TextInfo_t1015740494::get_offset_of_ci_6(),
	TextInfo_t1015740494::get_offset_of_handleDotI_7(),
	TextInfo_t1015740494::get_offset_of_data_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize251 = { sizeof (Data_t3112185696)+ sizeof (RuntimeObject), sizeof(Data_t3112185696 ), 0, 0 };
extern const int32_t g_FieldOffsetTable251[5] = 
{
	Data_t3112185696::get_offset_of_ansi_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Data_t3112185696::get_offset_of_ebcdic_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Data_t3112185696::get_offset_of_mac_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Data_t3112185696::get_offset_of_oem_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Data_t3112185696::get_offset_of_list_sep_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize252 = { sizeof (UnicodeCategory_t3164168048)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable252[31] = 
{
	UnicodeCategory_t3164168048::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize253 = { sizeof (IsolatedStorageException_t874190833), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize254 = { sizeof (BinaryReader_t901000103), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable254[6] = 
{
	BinaryReader_t901000103::get_offset_of_m_stream_0(),
	BinaryReader_t901000103::get_offset_of_m_encoding_1(),
	BinaryReader_t901000103::get_offset_of_m_buffer_2(),
	BinaryReader_t901000103::get_offset_of_decoder_3(),
	BinaryReader_t901000103::get_offset_of_charBuffer_4(),
	BinaryReader_t901000103::get_offset_of_m_disposed_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize255 = { sizeof (BinaryWriter_t2410200442), -1, sizeof(BinaryWriter_t2410200442_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable255[7] = 
{
	BinaryWriter_t2410200442_StaticFields::get_offset_of_Null_0(),
	BinaryWriter_t2410200442::get_offset_of_OutStream_1(),
	BinaryWriter_t2410200442::get_offset_of_m_encoding_2(),
	BinaryWriter_t2410200442::get_offset_of_buffer_3(),
	BinaryWriter_t2410200442::get_offset_of_disposed_4(),
	BinaryWriter_t2410200442::get_offset_of_stringBuffer_5(),
	BinaryWriter_t2410200442::get_offset_of_maxCharsPerRound_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize256 = { sizeof (Directory_t693237478), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize257 = { sizeof (DirectoryInfo_t3843500669), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable257[2] = 
{
	DirectoryInfo_t3843500669::get_offset_of_current_5(),
	DirectoryInfo_t3843500669::get_offset_of_parent_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize258 = { sizeof (DirectoryNotFoundException_t217238420), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize259 = { sizeof (EndOfStreamException_t672796968), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize260 = { sizeof (File_t2421248939), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize261 = { sizeof (FileAccess_t3057088677)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable261[4] = 
{
	FileAccess_t3057088677::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize262 = { sizeof (FileAttributes_t2079618843)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable262[15] = 
{
	FileAttributes_t2079618843::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize263 = { sizeof (FileLoadException_t2559997937), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable263[4] = 
{
	0,
	FileLoadException_t2559997937::get_offset_of_msg_12(),
	FileLoadException_t2559997937::get_offset_of_fileName_13(),
	FileLoadException_t2559997937::get_offset_of_fusionLog_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize264 = { sizeof (FileMode_t3215720377)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable264[7] = 
{
	FileMode_t3215720377::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize265 = { sizeof (FileNotFoundException_t889387022), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable265[2] = 
{
	FileNotFoundException_t889387022::get_offset_of_fileName_11(),
	FileNotFoundException_t889387022::get_offset_of_fusionLog_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize266 = { sizeof (FileOptions_t409857209)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable266[8] = 
{
	FileOptions_t409857209::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize267 = { sizeof (FileShare_t1584719113)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable267[7] = 
{
	FileShare_t1584719113::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize268 = { sizeof (FileStream_t1036346566), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable268[14] = 
{
	FileStream_t1036346566::get_offset_of_access_1(),
	FileStream_t1036346566::get_offset_of_owner_2(),
	FileStream_t1036346566::get_offset_of_async_3(),
	FileStream_t1036346566::get_offset_of_canseek_4(),
	FileStream_t1036346566::get_offset_of_append_startpos_5(),
	FileStream_t1036346566::get_offset_of_anonymous_6(),
	FileStream_t1036346566::get_offset_of_buf_7(),
	FileStream_t1036346566::get_offset_of_buf_size_8(),
	FileStream_t1036346566::get_offset_of_buf_length_9(),
	FileStream_t1036346566::get_offset_of_buf_offset_10(),
	FileStream_t1036346566::get_offset_of_buf_dirty_11(),
	FileStream_t1036346566::get_offset_of_buf_start_12(),
	FileStream_t1036346566::get_offset_of_name_13(),
	FileStream_t1036346566::get_offset_of_handle_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize269 = { sizeof (ReadDelegate_t60105204), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize270 = { sizeof (WriteDelegate_t2814347465), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize271 = { sizeof (FileStreamAsyncResult_t3577736120), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable271[9] = 
{
	FileStreamAsyncResult_t3577736120::get_offset_of_state_0(),
	FileStreamAsyncResult_t3577736120::get_offset_of_completed_1(),
	FileStreamAsyncResult_t3577736120::get_offset_of_wh_2(),
	FileStreamAsyncResult_t3577736120::get_offset_of_cb_3(),
	FileStreamAsyncResult_t3577736120::get_offset_of_completedSynch_4(),
	FileStreamAsyncResult_t3577736120::get_offset_of_Count_5(),
	FileStreamAsyncResult_t3577736120::get_offset_of_OriginalCount_6(),
	FileStreamAsyncResult_t3577736120::get_offset_of_BytesRead_7(),
	FileStreamAsyncResult_t3577736120::get_offset_of_realcb_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize272 = { sizeof (FileSystemInfo_t3293963559), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable272[4] = 
{
	FileSystemInfo_t3293963559::get_offset_of_FullPath_1(),
	FileSystemInfo_t3293963559::get_offset_of_OriginalPath_2(),
	FileSystemInfo_t3293963559::get_offset_of_stat_3(),
	FileSystemInfo_t3293963559::get_offset_of_valid_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize273 = { sizeof (IOException_t670336194), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize274 = { sizeof (MemoryStream_t1222863450), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable274[10] = 
{
	MemoryStream_t1222863450::get_offset_of_canWrite_1(),
	MemoryStream_t1222863450::get_offset_of_allowGetBuffer_2(),
	MemoryStream_t1222863450::get_offset_of_capacity_3(),
	MemoryStream_t1222863450::get_offset_of_length_4(),
	MemoryStream_t1222863450::get_offset_of_internalBuffer_5(),
	MemoryStream_t1222863450::get_offset_of_initialIndex_6(),
	MemoryStream_t1222863450::get_offset_of_expandable_7(),
	MemoryStream_t1222863450::get_offset_of_streamClosed_8(),
	MemoryStream_t1222863450::get_offset_of_position_9(),
	MemoryStream_t1222863450::get_offset_of_dirty_bytes_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize275 = { sizeof (MonoFileType_t30294204)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable275[6] = 
{
	MonoFileType_t30294204::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize276 = { sizeof (MonoIO_t293420956), -1, sizeof(MonoIO_t293420956_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable276[2] = 
{
	MonoIO_t293420956_StaticFields::get_offset_of_InvalidFileAttributes_0(),
	MonoIO_t293420956_StaticFields::get_offset_of_InvalidHandle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize277 = { sizeof (MonoIOError_t3383166626)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable277[25] = 
{
	MonoIOError_t3383166626::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize278 = { sizeof (MonoIOStat_t2408378089)+ sizeof (RuntimeObject), sizeof(MonoIOStat_t2408378089_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable278[6] = 
{
	MonoIOStat_t2408378089::get_offset_of_Name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoIOStat_t2408378089::get_offset_of_Attributes_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoIOStat_t2408378089::get_offset_of_Length_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoIOStat_t2408378089::get_offset_of_CreationTime_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoIOStat_t2408378089::get_offset_of_LastAccessTime_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoIOStat_t2408378089::get_offset_of_LastWriteTime_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize279 = { sizeof (Path_t4210848886), -1, sizeof(Path_t4210848886_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable279[8] = 
{
	Path_t4210848886_StaticFields::get_offset_of_InvalidPathChars_0(),
	Path_t4210848886_StaticFields::get_offset_of_AltDirectorySeparatorChar_1(),
	Path_t4210848886_StaticFields::get_offset_of_DirectorySeparatorChar_2(),
	Path_t4210848886_StaticFields::get_offset_of_PathSeparator_3(),
	Path_t4210848886_StaticFields::get_offset_of_DirectorySeparatorStr_4(),
	Path_t4210848886_StaticFields::get_offset_of_VolumeSeparatorChar_5(),
	Path_t4210848886_StaticFields::get_offset_of_PathSeparatorChars_6(),
	Path_t4210848886_StaticFields::get_offset_of_dirEqualsVolume_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize280 = { sizeof (PathTooLongException_t3739855409), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize281 = { sizeof (SearchPattern_t3748705636), -1, sizeof(SearchPattern_t3748705636_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable281[2] = 
{
	SearchPattern_t3748705636_StaticFields::get_offset_of_WildcardChars_0(),
	SearchPattern_t3748705636_StaticFields::get_offset_of_InvalidChars_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize282 = { sizeof (SeekOrigin_t316084627)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable282[4] = 
{
	SeekOrigin_t316084627::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize283 = { sizeof (Stream_t2967449720), -1, sizeof(Stream_t2967449720_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable283[1] = 
{
	Stream_t2967449720_StaticFields::get_offset_of_Null_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize284 = { sizeof (NullStream_t1803732316), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize285 = { sizeof (StreamAsyncResult_t3892884463), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable285[6] = 
{
	StreamAsyncResult_t3892884463::get_offset_of_state_0(),
	StreamAsyncResult_t3892884463::get_offset_of_completed_1(),
	StreamAsyncResult_t3892884463::get_offset_of_done_2(),
	StreamAsyncResult_t3892884463::get_offset_of_exc_3(),
	StreamAsyncResult_t3892884463::get_offset_of_nbytes_4(),
	StreamAsyncResult_t3892884463::get_offset_of_wh_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize286 = { sizeof (StreamReader_t2455118396), -1, sizeof(StreamReader_t2455118396_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable286[13] = 
{
	StreamReader_t2455118396::get_offset_of_input_buffer_1(),
	StreamReader_t2455118396::get_offset_of_decoded_buffer_2(),
	StreamReader_t2455118396::get_offset_of_decoded_count_3(),
	StreamReader_t2455118396::get_offset_of_pos_4(),
	StreamReader_t2455118396::get_offset_of_buffer_size_5(),
	StreamReader_t2455118396::get_offset_of_do_checks_6(),
	StreamReader_t2455118396::get_offset_of_encoding_7(),
	StreamReader_t2455118396::get_offset_of_decoder_8(),
	StreamReader_t2455118396::get_offset_of_base_stream_9(),
	StreamReader_t2455118396::get_offset_of_mayBlock_10(),
	StreamReader_t2455118396::get_offset_of_line_builder_11(),
	StreamReader_t2455118396_StaticFields::get_offset_of_Null_12(),
	StreamReader_t2455118396::get_offset_of_foundCR_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize287 = { sizeof (NullStreamReader_t2158021774), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize288 = { sizeof (StreamWriter_t2545229667), -1, sizeof(StreamWriter_t2545229667_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable288[10] = 
{
	StreamWriter_t2545229667::get_offset_of_internalEncoding_3(),
	StreamWriter_t2545229667::get_offset_of_internalStream_4(),
	StreamWriter_t2545229667::get_offset_of_iflush_5(),
	StreamWriter_t2545229667::get_offset_of_byte_buf_6(),
	StreamWriter_t2545229667::get_offset_of_byte_pos_7(),
	StreamWriter_t2545229667::get_offset_of_decode_buf_8(),
	StreamWriter_t2545229667::get_offset_of_decode_pos_9(),
	StreamWriter_t2545229667::get_offset_of_DisposedAlready_10(),
	StreamWriter_t2545229667::get_offset_of_preamble_done_11(),
	StreamWriter_t2545229667_StaticFields::get_offset_of_Null_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize289 = { sizeof (StringReader_t2331713704), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable289[3] = 
{
	StringReader_t2331713704::get_offset_of_source_1(),
	StringReader_t2331713704::get_offset_of_nextChar_2(),
	StringReader_t2331713704::get_offset_of_sourceLength_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize290 = { sizeof (StringWriter_t2296248994), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable290[2] = 
{
	StringWriter_t2296248994::get_offset_of_internalString_3(),
	StringWriter_t2296248994::get_offset_of_disposed_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize291 = { sizeof (TextReader_t3170198631), -1, sizeof(TextReader_t3170198631_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable291[1] = 
{
	TextReader_t3170198631_StaticFields::get_offset_of_Null_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize292 = { sizeof (NullTextReader_t3065414229), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize293 = { sizeof (SynchronizedReader_t2484596036), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable293[1] = 
{
	SynchronizedReader_t2484596036::get_offset_of_reader_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize294 = { sizeof (TextWriter_t675367350), -1, sizeof(TextWriter_t675367350_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable294[3] = 
{
	TextWriter_t675367350::get_offset_of_CoreNewLine_0(),
	TextWriter_t675367350::get_offset_of_internalFormatProvider_1(),
	TextWriter_t675367350_StaticFields::get_offset_of_Null_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize295 = { sizeof (NullTextWriter_t3732764272), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize296 = { sizeof (SynchronizedWriter_t3699379180), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable296[2] = 
{
	SynchronizedWriter_t3699379180::get_offset_of_writer_3(),
	SynchronizedWriter_t3699379180::get_offset_of_neverClose_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize297 = { sizeof (UnexceptionalStreamReader_t1586664982), -1, sizeof(UnexceptionalStreamReader_t1586664982_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable297[2] = 
{
	UnexceptionalStreamReader_t1586664982_StaticFields::get_offset_of_newline_14(),
	UnexceptionalStreamReader_t1586664982_StaticFields::get_offset_of_newlineChar_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize298 = { sizeof (UnexceptionalStreamWriter_t2253313918), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize299 = { sizeof (UnmanagedMemoryStream_t3844749578), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable299[8] = 
{
	UnmanagedMemoryStream_t3844749578::get_offset_of_length_1(),
	UnmanagedMemoryStream_t3844749578::get_offset_of_closed_2(),
	UnmanagedMemoryStream_t3844749578::get_offset_of_capacity_3(),
	UnmanagedMemoryStream_t3844749578::get_offset_of_fileaccess_4(),
	UnmanagedMemoryStream_t3844749578::get_offset_of_initial_pointer_5(),
	UnmanagedMemoryStream_t3844749578::get_offset_of_initial_position_6(),
	UnmanagedMemoryStream_t3844749578::get_offset_of_current_position_7(),
	UnmanagedMemoryStream_t3844749578::get_offset_of_Closed_8(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
