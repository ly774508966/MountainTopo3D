﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Core_System_Linq_OrderedEnumerable_1_gen1558155246.h"
#include "System_Core_System_Linq_SortDirection759359329.h"

// System.Linq.OrderedEnumerable`1<Mapbox.Json.Serialization.JsonProperty>
struct OrderedEnumerable_1_t1558155246;
// System.Func`2<Mapbox.Json.Serialization.JsonProperty,System.Int32>
struct Func_2_t1394051314;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t26340570;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.OrderedSequence`2<Mapbox.Json.Serialization.JsonProperty,System.Int32>
struct  OrderedSequence_2_t896335240  : public OrderedEnumerable_1_t1558155246
{
public:
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedSequence`2::parent
	OrderedEnumerable_1_t1558155246 * ___parent_1;
	// System.Func`2<TElement,TKey> System.Linq.OrderedSequence`2::selector
	Func_2_t1394051314 * ___selector_2;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.OrderedSequence`2::comparer
	Il2CppObject* ___comparer_3;
	// System.Linq.SortDirection System.Linq.OrderedSequence`2::direction
	int32_t ___direction_4;

public:
	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(OrderedSequence_2_t896335240, ___parent_1)); }
	inline OrderedEnumerable_1_t1558155246 * get_parent_1() const { return ___parent_1; }
	inline OrderedEnumerable_1_t1558155246 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(OrderedEnumerable_1_t1558155246 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier(&___parent_1, value);
	}

	inline static int32_t get_offset_of_selector_2() { return static_cast<int32_t>(offsetof(OrderedSequence_2_t896335240, ___selector_2)); }
	inline Func_2_t1394051314 * get_selector_2() const { return ___selector_2; }
	inline Func_2_t1394051314 ** get_address_of_selector_2() { return &___selector_2; }
	inline void set_selector_2(Func_2_t1394051314 * value)
	{
		___selector_2 = value;
		Il2CppCodeGenWriteBarrier(&___selector_2, value);
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(OrderedSequence_2_t896335240, ___comparer_3)); }
	inline Il2CppObject* get_comparer_3() const { return ___comparer_3; }
	inline Il2CppObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(Il2CppObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier(&___comparer_3, value);
	}

	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(OrderedSequence_2_t896335240, ___direction_4)); }
	inline int32_t get_direction_4() const { return ___direction_4; }
	inline int32_t* get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(int32_t value)
	{
		___direction_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
