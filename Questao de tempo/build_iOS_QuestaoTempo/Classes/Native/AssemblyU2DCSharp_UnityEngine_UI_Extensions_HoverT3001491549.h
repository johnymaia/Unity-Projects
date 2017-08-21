#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_RenderMode4280533217.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.HorizontalLayoutGroup
struct HorizontalLayoutGroup_t2875670365;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.HoverTooltip
struct  HoverTooltip_t3001491549  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 UnityEngine.UI.Extensions.HoverTooltip::horizontalPadding
	int32_t ___horizontalPadding_2;
	// System.Int32 UnityEngine.UI.Extensions.HoverTooltip::verticalPadding
	int32_t ___verticalPadding_3;
	// UnityEngine.UI.Text UnityEngine.UI.Extensions.HoverTooltip::thisText
	Text_t356221433 * ___thisText_4;
	// UnityEngine.UI.HorizontalLayoutGroup UnityEngine.UI.Extensions.HoverTooltip::hlG
	HorizontalLayoutGroup_t2875670365 * ___hlG_5;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.HoverTooltip::bgImage
	RectTransform_t3349966182 * ___bgImage_6;
	// UnityEngine.UI.Image UnityEngine.UI.Extensions.HoverTooltip::bgImageSource
	Image_t2042527209 * ___bgImageSource_7;
	// System.Boolean UnityEngine.UI.Extensions.HoverTooltip::firstUpdate
	bool ___firstUpdate_8;
	// System.Boolean UnityEngine.UI.Extensions.HoverTooltip::inside
	bool ___inside_9;
	// System.Int32 UnityEngine.UI.Extensions.HoverTooltip::canvasMode
	int32_t ___canvasMode_10;
	// UnityEngine.RenderMode UnityEngine.UI.Extensions.HoverTooltip::GUIMode
	int32_t ___GUIMode_11;
	// UnityEngine.Camera UnityEngine.UI.Extensions.HoverTooltip::GUICamera
	Camera_t189460977 * ___GUICamera_12;
	// UnityEngine.Vector3 UnityEngine.UI.Extensions.HoverTooltip::lowerLeft
	Vector3_t2243707580  ___lowerLeft_13;
	// UnityEngine.Vector3 UnityEngine.UI.Extensions.HoverTooltip::upperRight
	Vector3_t2243707580  ___upperRight_14;
	// System.Single UnityEngine.UI.Extensions.HoverTooltip::currentYScaleFactor
	float ___currentYScaleFactor_15;
	// System.Single UnityEngine.UI.Extensions.HoverTooltip::currentXScaleFactor
	float ___currentXScaleFactor_16;
	// System.Single UnityEngine.UI.Extensions.HoverTooltip::defaultYOffset
	float ___defaultYOffset_17;
	// System.Single UnityEngine.UI.Extensions.HoverTooltip::defaultXOffset
	float ___defaultXOffset_18;
	// System.Single UnityEngine.UI.Extensions.HoverTooltip::tooltipRealHeight
	float ___tooltipRealHeight_19;
	// System.Single UnityEngine.UI.Extensions.HoverTooltip::tooltipRealWidth
	float ___tooltipRealWidth_20;

public:
	inline static int32_t get_offset_of_horizontalPadding_2() { return static_cast<int32_t>(offsetof(HoverTooltip_t3001491549, ___horizontalPadding_2)); }
	inline int32_t get_horizontalPadding_2() const { return ___horizontalPadding_2; }
	inline int32_t* get_address_of_horizontalPadding_2() { return &___horizontalPadding_2; }
	inline void set_horizontalPadding_2(int32_t value)
	{
		___horizontalPadding_2 = value;
	}

	inline static int32_t get_offset_of_verticalPadding_3() { return static_cast<int32_t>(offsetof(HoverTooltip_t3001491549, ___verticalPadding_3)); }
	inline int32_t get_verticalPadding_3() const { return ___verticalPadding_3; }
	inline int32_t* get_address_of_verticalPadding_3() { return &___verticalPadding_3; }
	inline void set_verticalPadding_3(int32_t value)
	{
		___verticalPadding_3 = value;
	}

	inline static int32_t get_offset_of_thisText_4() { return static_cast<int32_t>(offsetof(HoverTooltip_t3001491549, ___thisText_4)); }
	inline Text_t356221433 * get_thisText_4() const { return ___thisText_4; }
	inline Text_t356221433 ** get_address_of_thisText_4() { return &___thisText_4; }
	inline void set_thisText_4(Text_t356221433 * value)
	{
		___thisText_4 = value;
		Il2CppCodeGenWriteBarrier(&___thisText_4, value);
	}

	inline static int32_t get_offset_of_hlG_5() { return static_cast<int32_t>(offsetof(HoverTooltip_t3001491549, ___hlG_5)); }
	inline HorizontalLayoutGroup_t2875670365 * get_hlG_5() const { return ___hlG_5; }
	inline HorizontalLayoutGroup_t2875670365 ** get_address_of_hlG_5() { return &___hlG_5; }
	inline void set_hlG_5(HorizontalLayoutGroup_t2875670365 * value)
	{
		___hlG_5 = value;
		Il2CppCodeGenWriteBarrier(&___hlG_5, value);
	}

	inline static int32_t get_offset_of_bgImage_6() { return static_cast<int32_t>(offsetof(HoverTooltip_t3001491549, ___bgImage_6)); }
	inline RectTransform_t3349966182 * get_bgImage_6() const { return ___bgImage_6; }
	inline RectTransform_t3349966182 ** get_address_of_bgImage_6() { return &___bgImage_6; }
	inline void set_bgImage_6(RectTransform_t3349966182 * value)
	{
		___bgImage_6 = value;
		Il2CppCodeGenWriteBarrier(&___bgImage_6, value);
	}

	inline static int32_t get_offset_of_bgImageSource_7() { return static_cast<int32_t>(offsetof(HoverTooltip_t3001491549, ___bgImageSource_7)); }
	inline Image_t2042527209 * get_bgImageSource_7() const { return ___bgImageSource_7; }
	inline Image_t2042527209 ** get_address_of_bgImageSource_7() { return &___bgImageSource_7; }
	inline void set_bgImageSource_7(Image_t2042527209 * value)
	{
		___bgImageSource_7 = value;
		Il2CppCodeGenWriteBarrier(&___bgImageSource_7, value);
	}

	inline static int32_t get_offset_of_firstUpdate_8() { return static_cast<int32_t>(offsetof(HoverTooltip_t3001491549, ___firstUpdate_8)); }
	inline bool get_firstUpdate_8() const { return ___firstUpdate_8; }
	inline bool* get_address_of_firstUpdate_8() { return &___firstUpdate_8; }
	inline void set_firstUpdate_8(bool value)
	{
		___firstUpdate_8 = value;
	}

	inline static int32_t get_offset_of_inside_9() { return static_cast<int32_t>(offsetof(HoverTooltip_t3001491549, ___inside_9)); }
	inline bool get_inside_9() const { return ___inside_9; }
	inline bool* get_address_of_inside_9() { return &___inside_9; }
	inline void set_inside_9(bool value)
	{
		___inside_9 = value;
	}

	inline static int32_t get_offset_of_canvasMode_10() { return static_cast<int32_t>(offsetof(HoverTooltip_t3001491549, ___canvasMode_10)); }
	inline int32_t get_canvasMode_10() const { return ___canvasMode_10; }
	inline int32_t* get_address_of_canvasMode_10() { return &___canvasMode_10; }
	inline void set_canvasMode_10(int32_t value)
	{
		___canvasMode_10 = value;
	}

	inline static int32_t get_offset_of_GUIMode_11() { return static_cast<int32_t>(offsetof(HoverTooltip_t3001491549, ___GUIMode_11)); }
	inline int32_t get_GUIMode_11() const { return ___GUIMode_11; }
	inline int32_t* get_address_of_GUIMode_11() { return &___GUIMode_11; }
	inline void set_GUIMode_11(int32_t value)
	{
		___GUIMode_11 = value;
	}

	inline static int32_t get_offset_of_GUICamera_12() { return static_cast<int32_t>(offsetof(HoverTooltip_t3001491549, ___GUICamera_12)); }
	inline Camera_t189460977 * get_GUICamera_12() const { return ___GUICamera_12; }
	inline Camera_t189460977 ** get_address_of_GUICamera_12() { return &___GUICamera_12; }
	inline void set_GUICamera_12(Camera_t189460977 * value)
	{
		___GUICamera_12 = value;
		Il2CppCodeGenWriteBarrier(&___GUICamera_12, value);
	}

	inline static int32_t get_offset_of_lowerLeft_13() { return static_cast<int32_t>(offsetof(HoverTooltip_t3001491549, ___lowerLeft_13)); }
	inline Vector3_t2243707580  get_lowerLeft_13() const { return ___lowerLeft_13; }
	inline Vector3_t2243707580 * get_address_of_lowerLeft_13() { return &___lowerLeft_13; }
	inline void set_lowerLeft_13(Vector3_t2243707580  value)
	{
		___lowerLeft_13 = value;
	}

	inline static int32_t get_offset_of_upperRight_14() { return static_cast<int32_t>(offsetof(HoverTooltip_t3001491549, ___upperRight_14)); }
	inline Vector3_t2243707580  get_upperRight_14() const { return ___upperRight_14; }
	inline Vector3_t2243707580 * get_address_of_upperRight_14() { return &___upperRight_14; }
	inline void set_upperRight_14(Vector3_t2243707580  value)
	{
		___upperRight_14 = value;
	}

	inline static int32_t get_offset_of_currentYScaleFactor_15() { return static_cast<int32_t>(offsetof(HoverTooltip_t3001491549, ___currentYScaleFactor_15)); }
	inline float get_currentYScaleFactor_15() const { return ___currentYScaleFactor_15; }
	inline float* get_address_of_currentYScaleFactor_15() { return &___currentYScaleFactor_15; }
	inline void set_currentYScaleFactor_15(float value)
	{
		___currentYScaleFactor_15 = value;
	}

	inline static int32_t get_offset_of_currentXScaleFactor_16() { return static_cast<int32_t>(offsetof(HoverTooltip_t3001491549, ___currentXScaleFactor_16)); }
	inline float get_currentXScaleFactor_16() const { return ___currentXScaleFactor_16; }
	inline float* get_address_of_currentXScaleFactor_16() { return &___currentXScaleFactor_16; }
	inline void set_currentXScaleFactor_16(float value)
	{
		___currentXScaleFactor_16 = value;
	}

	inline static int32_t get_offset_of_defaultYOffset_17() { return static_cast<int32_t>(offsetof(HoverTooltip_t3001491549, ___defaultYOffset_17)); }
	inline float get_defaultYOffset_17() const { return ___defaultYOffset_17; }
	inline float* get_address_of_defaultYOffset_17() { return &___defaultYOffset_17; }
	inline void set_defaultYOffset_17(float value)
	{
		___defaultYOffset_17 = value;
	}

	inline static int32_t get_offset_of_defaultXOffset_18() { return static_cast<int32_t>(offsetof(HoverTooltip_t3001491549, ___defaultXOffset_18)); }
	inline float get_defaultXOffset_18() const { return ___defaultXOffset_18; }
	inline float* get_address_of_defaultXOffset_18() { return &___defaultXOffset_18; }
	inline void set_defaultXOffset_18(float value)
	{
		___defaultXOffset_18 = value;
	}

	inline static int32_t get_offset_of_tooltipRealHeight_19() { return static_cast<int32_t>(offsetof(HoverTooltip_t3001491549, ___tooltipRealHeight_19)); }
	inline float get_tooltipRealHeight_19() const { return ___tooltipRealHeight_19; }
	inline float* get_address_of_tooltipRealHeight_19() { return &___tooltipRealHeight_19; }
	inline void set_tooltipRealHeight_19(float value)
	{
		___tooltipRealHeight_19 = value;
	}

	inline static int32_t get_offset_of_tooltipRealWidth_20() { return static_cast<int32_t>(offsetof(HoverTooltip_t3001491549, ___tooltipRealWidth_20)); }
	inline float get_tooltipRealWidth_20() const { return ___tooltipRealWidth_20; }
	inline float* get_address_of_tooltipRealWidth_20() { return &___tooltipRealWidth_20; }
	inline void set_tooltipRealWidth_20(float value)
	{
		___tooltipRealWidth_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
