﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<Mapbox.Geocoding.ReverseGeocodeResponse>
struct Action_1_t3448100041;
// Mapbox.Geocoding.Geocoder
struct Geocoder_t429800012;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Geocoding.Geocoder/<Geocode>c__AnonStorey0`1<System.Object>
struct  U3CGeocodeU3Ec__AnonStorey0_1_t418509359  : public Il2CppObject
{
public:
	// System.Action`1<Mapbox.Geocoding.ReverseGeocodeResponse> Mapbox.Geocoding.Geocoder/<Geocode>c__AnonStorey0`1::callback
	Action_1_t3448100041 * ___callback_0;
	// Mapbox.Geocoding.Geocoder Mapbox.Geocoding.Geocoder/<Geocode>c__AnonStorey0`1::$this
	Geocoder_t429800012 * ___U24this_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CGeocodeU3Ec__AnonStorey0_1_t418509359, ___callback_0)); }
	inline Action_1_t3448100041 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t3448100041 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t3448100041 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CGeocodeU3Ec__AnonStorey0_1_t418509359, ___U24this_1)); }
	inline Geocoder_t429800012 * get_U24this_1() const { return ___U24this_1; }
	inline Geocoder_t429800012 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(Geocoder_t429800012 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
