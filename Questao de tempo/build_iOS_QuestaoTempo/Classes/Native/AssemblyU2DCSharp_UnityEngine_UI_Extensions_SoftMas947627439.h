#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Canvas
struct Canvas_t209405766;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.SoftMaskScript
struct  SoftMaskScript_t947627439  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material UnityEngine.UI.Extensions.SoftMaskScript::mat
	Material_t193706927 * ___mat_2;
	// UnityEngine.Canvas UnityEngine.UI.Extensions.SoftMaskScript::canvas
	Canvas_t209405766 * ___canvas_3;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.SoftMaskScript::MaskArea
	RectTransform_t3349966182 * ___MaskArea_4;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.SoftMaskScript::myRect
	RectTransform_t3349966182 * ___myRect_5;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.SoftMaskScript::maskScalingRect
	RectTransform_t3349966182 * ___maskScalingRect_6;
	// UnityEngine.Texture UnityEngine.UI.Extensions.SoftMaskScript::AlphaMask
	Texture_t2243626319 * ___AlphaMask_7;
	// System.Single UnityEngine.UI.Extensions.SoftMaskScript::CutOff
	float ___CutOff_8;
	// System.Boolean UnityEngine.UI.Extensions.SoftMaskScript::HardBlend
	bool ___HardBlend_9;
	// System.Boolean UnityEngine.UI.Extensions.SoftMaskScript::FlipAlphaMask
	bool ___FlipAlphaMask_10;
	// UnityEngine.Vector3[] UnityEngine.UI.Extensions.SoftMaskScript::worldCorners
	Vector3U5BU5D_t1172311765* ___worldCorners_11;
	// UnityEngine.Vector2 UnityEngine.UI.Extensions.SoftMaskScript::AlphaUV
	Vector2_t2243707579  ___AlphaUV_12;
	// UnityEngine.Vector2 UnityEngine.UI.Extensions.SoftMaskScript::min
	Vector2_t2243707579  ___min_13;
	// UnityEngine.Vector2 UnityEngine.UI.Extensions.SoftMaskScript::max
	Vector2_t2243707579  ___max_14;
	// UnityEngine.Vector2 UnityEngine.UI.Extensions.SoftMaskScript::p
	Vector2_t2243707579  ___p_15;
	// UnityEngine.Vector2 UnityEngine.UI.Extensions.SoftMaskScript::siz
	Vector2_t2243707579  ___siz_16;
	// UnityEngine.Rect UnityEngine.UI.Extensions.SoftMaskScript::maskRect
	Rect_t3681755626  ___maskRect_17;
	// UnityEngine.Rect UnityEngine.UI.Extensions.SoftMaskScript::contentRect
	Rect_t3681755626  ___contentRect_18;
	// UnityEngine.Vector2 UnityEngine.UI.Extensions.SoftMaskScript::centre
	Vector2_t2243707579  ___centre_19;
	// System.Boolean UnityEngine.UI.Extensions.SoftMaskScript::isText
	bool ___isText_20;

public:
	inline static int32_t get_offset_of_mat_2() { return static_cast<int32_t>(offsetof(SoftMaskScript_t947627439, ___mat_2)); }
	inline Material_t193706927 * get_mat_2() const { return ___mat_2; }
	inline Material_t193706927 ** get_address_of_mat_2() { return &___mat_2; }
	inline void set_mat_2(Material_t193706927 * value)
	{
		___mat_2 = value;
		Il2CppCodeGenWriteBarrier(&___mat_2, value);
	}

	inline static int32_t get_offset_of_canvas_3() { return static_cast<int32_t>(offsetof(SoftMaskScript_t947627439, ___canvas_3)); }
	inline Canvas_t209405766 * get_canvas_3() const { return ___canvas_3; }
	inline Canvas_t209405766 ** get_address_of_canvas_3() { return &___canvas_3; }
	inline void set_canvas_3(Canvas_t209405766 * value)
	{
		___canvas_3 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_3, value);
	}

	inline static int32_t get_offset_of_MaskArea_4() { return static_cast<int32_t>(offsetof(SoftMaskScript_t947627439, ___MaskArea_4)); }
	inline RectTransform_t3349966182 * get_MaskArea_4() const { return ___MaskArea_4; }
	inline RectTransform_t3349966182 ** get_address_of_MaskArea_4() { return &___MaskArea_4; }
	inline void set_MaskArea_4(RectTransform_t3349966182 * value)
	{
		___MaskArea_4 = value;
		Il2CppCodeGenWriteBarrier(&___MaskArea_4, value);
	}

	inline static int32_t get_offset_of_myRect_5() { return static_cast<int32_t>(offsetof(SoftMaskScript_t947627439, ___myRect_5)); }
	inline RectTransform_t3349966182 * get_myRect_5() const { return ___myRect_5; }
	inline RectTransform_t3349966182 ** get_address_of_myRect_5() { return &___myRect_5; }
	inline void set_myRect_5(RectTransform_t3349966182 * value)
	{
		___myRect_5 = value;
		Il2CppCodeGenWriteBarrier(&___myRect_5, value);
	}

	inline static int32_t get_offset_of_maskScalingRect_6() { return static_cast<int32_t>(offsetof(SoftMaskScript_t947627439, ___maskScalingRect_6)); }
	inline RectTransform_t3349966182 * get_maskScalingRect_6() const { return ___maskScalingRect_6; }
	inline RectTransform_t3349966182 ** get_address_of_maskScalingRect_6() { return &___maskScalingRect_6; }
	inline void set_maskScalingRect_6(RectTransform_t3349966182 * value)
	{
		___maskScalingRect_6 = value;
		Il2CppCodeGenWriteBarrier(&___maskScalingRect_6, value);
	}

	inline static int32_t get_offset_of_AlphaMask_7() { return static_cast<int32_t>(offsetof(SoftMaskScript_t947627439, ___AlphaMask_7)); }
	inline Texture_t2243626319 * get_AlphaMask_7() const { return ___AlphaMask_7; }
	inline Texture_t2243626319 ** get_address_of_AlphaMask_7() { return &___AlphaMask_7; }
	inline void set_AlphaMask_7(Texture_t2243626319 * value)
	{
		___AlphaMask_7 = value;
		Il2CppCodeGenWriteBarrier(&___AlphaMask_7, value);
	}

	inline static int32_t get_offset_of_CutOff_8() { return static_cast<int32_t>(offsetof(SoftMaskScript_t947627439, ___CutOff_8)); }
	inline float get_CutOff_8() const { return ___CutOff_8; }
	inline float* get_address_of_CutOff_8() { return &___CutOff_8; }
	inline void set_CutOff_8(float value)
	{
		___CutOff_8 = value;
	}

	inline static int32_t get_offset_of_HardBlend_9() { return static_cast<int32_t>(offsetof(SoftMaskScript_t947627439, ___HardBlend_9)); }
	inline bool get_HardBlend_9() const { return ___HardBlend_9; }
	inline bool* get_address_of_HardBlend_9() { return &___HardBlend_9; }
	inline void set_HardBlend_9(bool value)
	{
		___HardBlend_9 = value;
	}

	inline static int32_t get_offset_of_FlipAlphaMask_10() { return static_cast<int32_t>(offsetof(SoftMaskScript_t947627439, ___FlipAlphaMask_10)); }
	inline bool get_FlipAlphaMask_10() const { return ___FlipAlphaMask_10; }
	inline bool* get_address_of_FlipAlphaMask_10() { return &___FlipAlphaMask_10; }
	inline void set_FlipAlphaMask_10(bool value)
	{
		___FlipAlphaMask_10 = value;
	}

	inline static int32_t get_offset_of_worldCorners_11() { return static_cast<int32_t>(offsetof(SoftMaskScript_t947627439, ___worldCorners_11)); }
	inline Vector3U5BU5D_t1172311765* get_worldCorners_11() const { return ___worldCorners_11; }
	inline Vector3U5BU5D_t1172311765** get_address_of_worldCorners_11() { return &___worldCorners_11; }
	inline void set_worldCorners_11(Vector3U5BU5D_t1172311765* value)
	{
		___worldCorners_11 = value;
		Il2CppCodeGenWriteBarrier(&___worldCorners_11, value);
	}

	inline static int32_t get_offset_of_AlphaUV_12() { return static_cast<int32_t>(offsetof(SoftMaskScript_t947627439, ___AlphaUV_12)); }
	inline Vector2_t2243707579  get_AlphaUV_12() const { return ___AlphaUV_12; }
	inline Vector2_t2243707579 * get_address_of_AlphaUV_12() { return &___AlphaUV_12; }
	inline void set_AlphaUV_12(Vector2_t2243707579  value)
	{
		___AlphaUV_12 = value;
	}

	inline static int32_t get_offset_of_min_13() { return static_cast<int32_t>(offsetof(SoftMaskScript_t947627439, ___min_13)); }
	inline Vector2_t2243707579  get_min_13() const { return ___min_13; }
	inline Vector2_t2243707579 * get_address_of_min_13() { return &___min_13; }
	inline void set_min_13(Vector2_t2243707579  value)
	{
		___min_13 = value;
	}

	inline static int32_t get_offset_of_max_14() { return static_cast<int32_t>(offsetof(SoftMaskScript_t947627439, ___max_14)); }
	inline Vector2_t2243707579  get_max_14() const { return ___max_14; }
	inline Vector2_t2243707579 * get_address_of_max_14() { return &___max_14; }
	inline void set_max_14(Vector2_t2243707579  value)
	{
		___max_14 = value;
	}

	inline static int32_t get_offset_of_p_15() { return static_cast<int32_t>(offsetof(SoftMaskScript_t947627439, ___p_15)); }
	inline Vector2_t2243707579  get_p_15() const { return ___p_15; }
	inline Vector2_t2243707579 * get_address_of_p_15() { return &___p_15; }
	inline void set_p_15(Vector2_t2243707579  value)
	{
		___p_15 = value;
	}

	inline static int32_t get_offset_of_siz_16() { return static_cast<int32_t>(offsetof(SoftMaskScript_t947627439, ___siz_16)); }
	inline Vector2_t2243707579  get_siz_16() const { return ___siz_16; }
	inline Vector2_t2243707579 * get_address_of_siz_16() { return &___siz_16; }
	inline void set_siz_16(Vector2_t2243707579  value)
	{
		___siz_16 = value;
	}

	inline static int32_t get_offset_of_maskRect_17() { return static_cast<int32_t>(offsetof(SoftMaskScript_t947627439, ___maskRect_17)); }
	inline Rect_t3681755626  get_maskRect_17() const { return ___maskRect_17; }
	inline Rect_t3681755626 * get_address_of_maskRect_17() { return &___maskRect_17; }
	inline void set_maskRect_17(Rect_t3681755626  value)
	{
		___maskRect_17 = value;
	}

	inline static int32_t get_offset_of_contentRect_18() { return static_cast<int32_t>(offsetof(SoftMaskScript_t947627439, ___contentRect_18)); }
	inline Rect_t3681755626  get_contentRect_18() const { return ___contentRect_18; }
	inline Rect_t3681755626 * get_address_of_contentRect_18() { return &___contentRect_18; }
	inline void set_contentRect_18(Rect_t3681755626  value)
	{
		___contentRect_18 = value;
	}

	inline static int32_t get_offset_of_centre_19() { return static_cast<int32_t>(offsetof(SoftMaskScript_t947627439, ___centre_19)); }
	inline Vector2_t2243707579  get_centre_19() const { return ___centre_19; }
	inline Vector2_t2243707579 * get_address_of_centre_19() { return &___centre_19; }
	inline void set_centre_19(Vector2_t2243707579  value)
	{
		___centre_19 = value;
	}

	inline static int32_t get_offset_of_isText_20() { return static_cast<int32_t>(offsetof(SoftMaskScript_t947627439, ___isText_20)); }
	inline bool get_isText_20() const { return ___isText_20; }
	inline bool* get_address_of_isText_20() { return &___isText_20; }
	inline void set_isText_20(bool value)
	{
		___isText_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
