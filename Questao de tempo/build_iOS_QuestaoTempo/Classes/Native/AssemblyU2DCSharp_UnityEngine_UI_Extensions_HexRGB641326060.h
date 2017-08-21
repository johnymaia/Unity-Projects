#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.InputField
struct InputField_t1631627530;
// UnityEngine.UI.Extensions.HSVPicker
struct HSVPicker_t60325509;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.HexRGB
struct  HexRGB_t641326060  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.InputField UnityEngine.UI.Extensions.HexRGB::hexInput
	InputField_t1631627530 * ___hexInput_2;
	// UnityEngine.UI.Extensions.HSVPicker UnityEngine.UI.Extensions.HexRGB::hsvpicker
	HSVPicker_t60325509 * ___hsvpicker_3;

public:
	inline static int32_t get_offset_of_hexInput_2() { return static_cast<int32_t>(offsetof(HexRGB_t641326060, ___hexInput_2)); }
	inline InputField_t1631627530 * get_hexInput_2() const { return ___hexInput_2; }
	inline InputField_t1631627530 ** get_address_of_hexInput_2() { return &___hexInput_2; }
	inline void set_hexInput_2(InputField_t1631627530 * value)
	{
		___hexInput_2 = value;
		Il2CppCodeGenWriteBarrier(&___hexInput_2, value);
	}

	inline static int32_t get_offset_of_hsvpicker_3() { return static_cast<int32_t>(offsetof(HexRGB_t641326060, ___hsvpicker_3)); }
	inline HSVPicker_t60325509 * get_hsvpicker_3() const { return ___hsvpicker_3; }
	inline HSVPicker_t60325509 ** get_address_of_hsvpicker_3() { return &___hsvpicker_3; }
	inline void set_hsvpicker_3(HSVPicker_t60325509 * value)
	{
		___hsvpicker_3 = value;
		Il2CppCodeGenWriteBarrier(&___hsvpicker_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
