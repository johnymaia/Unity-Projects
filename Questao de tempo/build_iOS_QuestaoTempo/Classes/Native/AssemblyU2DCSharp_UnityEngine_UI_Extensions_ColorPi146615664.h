#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.UI.Extensions.HSVPicker
struct HSVPicker_t60325509;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.ColorPickerTester
struct  ColorPickerTester_t146615664  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Renderer UnityEngine.UI.Extensions.ColorPickerTester::pickerRenderer
	Renderer_t257310565 * ___pickerRenderer_2;
	// UnityEngine.UI.Extensions.HSVPicker UnityEngine.UI.Extensions.ColorPickerTester::picker
	HSVPicker_t60325509 * ___picker_3;

public:
	inline static int32_t get_offset_of_pickerRenderer_2() { return static_cast<int32_t>(offsetof(ColorPickerTester_t146615664, ___pickerRenderer_2)); }
	inline Renderer_t257310565 * get_pickerRenderer_2() const { return ___pickerRenderer_2; }
	inline Renderer_t257310565 ** get_address_of_pickerRenderer_2() { return &___pickerRenderer_2; }
	inline void set_pickerRenderer_2(Renderer_t257310565 * value)
	{
		___pickerRenderer_2 = value;
		Il2CppCodeGenWriteBarrier(&___pickerRenderer_2, value);
	}

	inline static int32_t get_offset_of_picker_3() { return static_cast<int32_t>(offsetof(ColorPickerTester_t146615664, ___picker_3)); }
	inline HSVPicker_t60325509 * get_picker_3() const { return ___picker_3; }
	inline HSVPicker_t60325509 ** get_address_of_picker_3() { return &___picker_3; }
	inline void set_picker_3(HSVPicker_t60325509 * value)
	{
		___picker_3 = value;
		Il2CppCodeGenWriteBarrier(&___picker_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
