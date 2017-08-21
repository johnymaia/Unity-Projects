#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.UI.Extensions.HexRGB
struct HexRGB_t641326060;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.RawImage
struct RawImage_t2749640213;
// UnityEngine.UI.Slider
struct Slider_t297367283;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Extensions.HSVSliderEvent
struct HSVSliderEvent_t2894018518;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.HSVPicker
struct  HSVPicker_t60325509  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Extensions.HexRGB UnityEngine.UI.Extensions.HSVPicker::hexrgb
	HexRGB_t641326060 * ___hexrgb_2;
	// UnityEngine.Color UnityEngine.UI.Extensions.HSVPicker::currentColor
	Color_t2020392075  ___currentColor_3;
	// UnityEngine.UI.Image UnityEngine.UI.Extensions.HSVPicker::colorImage
	Image_t2042527209 * ___colorImage_4;
	// UnityEngine.UI.Image UnityEngine.UI.Extensions.HSVPicker::pointer
	Image_t2042527209 * ___pointer_5;
	// UnityEngine.UI.Image UnityEngine.UI.Extensions.HSVPicker::cursor
	Image_t2042527209 * ___cursor_6;
	// UnityEngine.UI.RawImage UnityEngine.UI.Extensions.HSVPicker::hsvSlider
	RawImage_t2749640213 * ___hsvSlider_7;
	// UnityEngine.UI.RawImage UnityEngine.UI.Extensions.HSVPicker::hsvImage
	RawImage_t2749640213 * ___hsvImage_8;
	// UnityEngine.UI.Slider UnityEngine.UI.Extensions.HSVPicker::sliderR
	Slider_t297367283 * ___sliderR_9;
	// UnityEngine.UI.Slider UnityEngine.UI.Extensions.HSVPicker::sliderG
	Slider_t297367283 * ___sliderG_10;
	// UnityEngine.UI.Slider UnityEngine.UI.Extensions.HSVPicker::sliderB
	Slider_t297367283 * ___sliderB_11;
	// UnityEngine.UI.Text UnityEngine.UI.Extensions.HSVPicker::sliderRText
	Text_t356221433 * ___sliderRText_12;
	// UnityEngine.UI.Text UnityEngine.UI.Extensions.HSVPicker::sliderGText
	Text_t356221433 * ___sliderGText_13;
	// UnityEngine.UI.Text UnityEngine.UI.Extensions.HSVPicker::sliderBText
	Text_t356221433 * ___sliderBText_14;
	// System.Single UnityEngine.UI.Extensions.HSVPicker::pointerPos
	float ___pointerPos_15;
	// System.Single UnityEngine.UI.Extensions.HSVPicker::cursorX
	float ___cursorX_16;
	// System.Single UnityEngine.UI.Extensions.HSVPicker::cursorY
	float ___cursorY_17;
	// UnityEngine.UI.Extensions.HSVSliderEvent UnityEngine.UI.Extensions.HSVPicker::onValueChanged
	HSVSliderEvent_t2894018518 * ___onValueChanged_18;
	// System.Boolean UnityEngine.UI.Extensions.HSVPicker::dontAssignUpdate
	bool ___dontAssignUpdate_19;

public:
	inline static int32_t get_offset_of_hexrgb_2() { return static_cast<int32_t>(offsetof(HSVPicker_t60325509, ___hexrgb_2)); }
	inline HexRGB_t641326060 * get_hexrgb_2() const { return ___hexrgb_2; }
	inline HexRGB_t641326060 ** get_address_of_hexrgb_2() { return &___hexrgb_2; }
	inline void set_hexrgb_2(HexRGB_t641326060 * value)
	{
		___hexrgb_2 = value;
		Il2CppCodeGenWriteBarrier(&___hexrgb_2, value);
	}

	inline static int32_t get_offset_of_currentColor_3() { return static_cast<int32_t>(offsetof(HSVPicker_t60325509, ___currentColor_3)); }
	inline Color_t2020392075  get_currentColor_3() const { return ___currentColor_3; }
	inline Color_t2020392075 * get_address_of_currentColor_3() { return &___currentColor_3; }
	inline void set_currentColor_3(Color_t2020392075  value)
	{
		___currentColor_3 = value;
	}

	inline static int32_t get_offset_of_colorImage_4() { return static_cast<int32_t>(offsetof(HSVPicker_t60325509, ___colorImage_4)); }
	inline Image_t2042527209 * get_colorImage_4() const { return ___colorImage_4; }
	inline Image_t2042527209 ** get_address_of_colorImage_4() { return &___colorImage_4; }
	inline void set_colorImage_4(Image_t2042527209 * value)
	{
		___colorImage_4 = value;
		Il2CppCodeGenWriteBarrier(&___colorImage_4, value);
	}

	inline static int32_t get_offset_of_pointer_5() { return static_cast<int32_t>(offsetof(HSVPicker_t60325509, ___pointer_5)); }
	inline Image_t2042527209 * get_pointer_5() const { return ___pointer_5; }
	inline Image_t2042527209 ** get_address_of_pointer_5() { return &___pointer_5; }
	inline void set_pointer_5(Image_t2042527209 * value)
	{
		___pointer_5 = value;
		Il2CppCodeGenWriteBarrier(&___pointer_5, value);
	}

	inline static int32_t get_offset_of_cursor_6() { return static_cast<int32_t>(offsetof(HSVPicker_t60325509, ___cursor_6)); }
	inline Image_t2042527209 * get_cursor_6() const { return ___cursor_6; }
	inline Image_t2042527209 ** get_address_of_cursor_6() { return &___cursor_6; }
	inline void set_cursor_6(Image_t2042527209 * value)
	{
		___cursor_6 = value;
		Il2CppCodeGenWriteBarrier(&___cursor_6, value);
	}

	inline static int32_t get_offset_of_hsvSlider_7() { return static_cast<int32_t>(offsetof(HSVPicker_t60325509, ___hsvSlider_7)); }
	inline RawImage_t2749640213 * get_hsvSlider_7() const { return ___hsvSlider_7; }
	inline RawImage_t2749640213 ** get_address_of_hsvSlider_7() { return &___hsvSlider_7; }
	inline void set_hsvSlider_7(RawImage_t2749640213 * value)
	{
		___hsvSlider_7 = value;
		Il2CppCodeGenWriteBarrier(&___hsvSlider_7, value);
	}

	inline static int32_t get_offset_of_hsvImage_8() { return static_cast<int32_t>(offsetof(HSVPicker_t60325509, ___hsvImage_8)); }
	inline RawImage_t2749640213 * get_hsvImage_8() const { return ___hsvImage_8; }
	inline RawImage_t2749640213 ** get_address_of_hsvImage_8() { return &___hsvImage_8; }
	inline void set_hsvImage_8(RawImage_t2749640213 * value)
	{
		___hsvImage_8 = value;
		Il2CppCodeGenWriteBarrier(&___hsvImage_8, value);
	}

	inline static int32_t get_offset_of_sliderR_9() { return static_cast<int32_t>(offsetof(HSVPicker_t60325509, ___sliderR_9)); }
	inline Slider_t297367283 * get_sliderR_9() const { return ___sliderR_9; }
	inline Slider_t297367283 ** get_address_of_sliderR_9() { return &___sliderR_9; }
	inline void set_sliderR_9(Slider_t297367283 * value)
	{
		___sliderR_9 = value;
		Il2CppCodeGenWriteBarrier(&___sliderR_9, value);
	}

	inline static int32_t get_offset_of_sliderG_10() { return static_cast<int32_t>(offsetof(HSVPicker_t60325509, ___sliderG_10)); }
	inline Slider_t297367283 * get_sliderG_10() const { return ___sliderG_10; }
	inline Slider_t297367283 ** get_address_of_sliderG_10() { return &___sliderG_10; }
	inline void set_sliderG_10(Slider_t297367283 * value)
	{
		___sliderG_10 = value;
		Il2CppCodeGenWriteBarrier(&___sliderG_10, value);
	}

	inline static int32_t get_offset_of_sliderB_11() { return static_cast<int32_t>(offsetof(HSVPicker_t60325509, ___sliderB_11)); }
	inline Slider_t297367283 * get_sliderB_11() const { return ___sliderB_11; }
	inline Slider_t297367283 ** get_address_of_sliderB_11() { return &___sliderB_11; }
	inline void set_sliderB_11(Slider_t297367283 * value)
	{
		___sliderB_11 = value;
		Il2CppCodeGenWriteBarrier(&___sliderB_11, value);
	}

	inline static int32_t get_offset_of_sliderRText_12() { return static_cast<int32_t>(offsetof(HSVPicker_t60325509, ___sliderRText_12)); }
	inline Text_t356221433 * get_sliderRText_12() const { return ___sliderRText_12; }
	inline Text_t356221433 ** get_address_of_sliderRText_12() { return &___sliderRText_12; }
	inline void set_sliderRText_12(Text_t356221433 * value)
	{
		___sliderRText_12 = value;
		Il2CppCodeGenWriteBarrier(&___sliderRText_12, value);
	}

	inline static int32_t get_offset_of_sliderGText_13() { return static_cast<int32_t>(offsetof(HSVPicker_t60325509, ___sliderGText_13)); }
	inline Text_t356221433 * get_sliderGText_13() const { return ___sliderGText_13; }
	inline Text_t356221433 ** get_address_of_sliderGText_13() { return &___sliderGText_13; }
	inline void set_sliderGText_13(Text_t356221433 * value)
	{
		___sliderGText_13 = value;
		Il2CppCodeGenWriteBarrier(&___sliderGText_13, value);
	}

	inline static int32_t get_offset_of_sliderBText_14() { return static_cast<int32_t>(offsetof(HSVPicker_t60325509, ___sliderBText_14)); }
	inline Text_t356221433 * get_sliderBText_14() const { return ___sliderBText_14; }
	inline Text_t356221433 ** get_address_of_sliderBText_14() { return &___sliderBText_14; }
	inline void set_sliderBText_14(Text_t356221433 * value)
	{
		___sliderBText_14 = value;
		Il2CppCodeGenWriteBarrier(&___sliderBText_14, value);
	}

	inline static int32_t get_offset_of_pointerPos_15() { return static_cast<int32_t>(offsetof(HSVPicker_t60325509, ___pointerPos_15)); }
	inline float get_pointerPos_15() const { return ___pointerPos_15; }
	inline float* get_address_of_pointerPos_15() { return &___pointerPos_15; }
	inline void set_pointerPos_15(float value)
	{
		___pointerPos_15 = value;
	}

	inline static int32_t get_offset_of_cursorX_16() { return static_cast<int32_t>(offsetof(HSVPicker_t60325509, ___cursorX_16)); }
	inline float get_cursorX_16() const { return ___cursorX_16; }
	inline float* get_address_of_cursorX_16() { return &___cursorX_16; }
	inline void set_cursorX_16(float value)
	{
		___cursorX_16 = value;
	}

	inline static int32_t get_offset_of_cursorY_17() { return static_cast<int32_t>(offsetof(HSVPicker_t60325509, ___cursorY_17)); }
	inline float get_cursorY_17() const { return ___cursorY_17; }
	inline float* get_address_of_cursorY_17() { return &___cursorY_17; }
	inline void set_cursorY_17(float value)
	{
		___cursorY_17 = value;
	}

	inline static int32_t get_offset_of_onValueChanged_18() { return static_cast<int32_t>(offsetof(HSVPicker_t60325509, ___onValueChanged_18)); }
	inline HSVSliderEvent_t2894018518 * get_onValueChanged_18() const { return ___onValueChanged_18; }
	inline HSVSliderEvent_t2894018518 ** get_address_of_onValueChanged_18() { return &___onValueChanged_18; }
	inline void set_onValueChanged_18(HSVSliderEvent_t2894018518 * value)
	{
		___onValueChanged_18 = value;
		Il2CppCodeGenWriteBarrier(&___onValueChanged_18, value);
	}

	inline static int32_t get_offset_of_dontAssignUpdate_19() { return static_cast<int32_t>(offsetof(HSVPicker_t60325509, ___dontAssignUpdate_19)); }
	inline bool get_dontAssignUpdate_19() const { return ___dontAssignUpdate_19; }
	inline bool* get_address_of_dontAssignUpdate_19() { return &___dontAssignUpdate_19; }
	inline void set_dontAssignUpdate_19(bool value)
	{
		___dontAssignUpdate_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
