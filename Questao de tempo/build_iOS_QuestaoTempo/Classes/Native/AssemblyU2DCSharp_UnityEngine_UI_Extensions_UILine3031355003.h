#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic540192618.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UILineRenderer
struct  UILineRenderer_t3031355003  : public MaskableGraphic_t540192618
{
public:
	// UnityEngine.Texture UnityEngine.UI.Extensions.UILineRenderer::m_Texture
	Texture_t2243626319 * ___m_Texture_28;
	// UnityEngine.Rect UnityEngine.UI.Extensions.UILineRenderer::m_UVRect
	Rect_t3681755626  ___m_UVRect_29;
	// System.Single UnityEngine.UI.Extensions.UILineRenderer::LineThickness
	float ___LineThickness_30;
	// System.Boolean UnityEngine.UI.Extensions.UILineRenderer::UseMargins
	bool ___UseMargins_31;
	// UnityEngine.Vector2 UnityEngine.UI.Extensions.UILineRenderer::Margin
	Vector2_t2243707579  ___Margin_32;
	// UnityEngine.Vector2[] UnityEngine.UI.Extensions.UILineRenderer::Points
	Vector2U5BU5D_t686124026* ___Points_33;
	// System.Boolean UnityEngine.UI.Extensions.UILineRenderer::relativeSize
	bool ___relativeSize_34;

public:
	inline static int32_t get_offset_of_m_Texture_28() { return static_cast<int32_t>(offsetof(UILineRenderer_t3031355003, ___m_Texture_28)); }
	inline Texture_t2243626319 * get_m_Texture_28() const { return ___m_Texture_28; }
	inline Texture_t2243626319 ** get_address_of_m_Texture_28() { return &___m_Texture_28; }
	inline void set_m_Texture_28(Texture_t2243626319 * value)
	{
		___m_Texture_28 = value;
		Il2CppCodeGenWriteBarrier(&___m_Texture_28, value);
	}

	inline static int32_t get_offset_of_m_UVRect_29() { return static_cast<int32_t>(offsetof(UILineRenderer_t3031355003, ___m_UVRect_29)); }
	inline Rect_t3681755626  get_m_UVRect_29() const { return ___m_UVRect_29; }
	inline Rect_t3681755626 * get_address_of_m_UVRect_29() { return &___m_UVRect_29; }
	inline void set_m_UVRect_29(Rect_t3681755626  value)
	{
		___m_UVRect_29 = value;
	}

	inline static int32_t get_offset_of_LineThickness_30() { return static_cast<int32_t>(offsetof(UILineRenderer_t3031355003, ___LineThickness_30)); }
	inline float get_LineThickness_30() const { return ___LineThickness_30; }
	inline float* get_address_of_LineThickness_30() { return &___LineThickness_30; }
	inline void set_LineThickness_30(float value)
	{
		___LineThickness_30 = value;
	}

	inline static int32_t get_offset_of_UseMargins_31() { return static_cast<int32_t>(offsetof(UILineRenderer_t3031355003, ___UseMargins_31)); }
	inline bool get_UseMargins_31() const { return ___UseMargins_31; }
	inline bool* get_address_of_UseMargins_31() { return &___UseMargins_31; }
	inline void set_UseMargins_31(bool value)
	{
		___UseMargins_31 = value;
	}

	inline static int32_t get_offset_of_Margin_32() { return static_cast<int32_t>(offsetof(UILineRenderer_t3031355003, ___Margin_32)); }
	inline Vector2_t2243707579  get_Margin_32() const { return ___Margin_32; }
	inline Vector2_t2243707579 * get_address_of_Margin_32() { return &___Margin_32; }
	inline void set_Margin_32(Vector2_t2243707579  value)
	{
		___Margin_32 = value;
	}

	inline static int32_t get_offset_of_Points_33() { return static_cast<int32_t>(offsetof(UILineRenderer_t3031355003, ___Points_33)); }
	inline Vector2U5BU5D_t686124026* get_Points_33() const { return ___Points_33; }
	inline Vector2U5BU5D_t686124026** get_address_of_Points_33() { return &___Points_33; }
	inline void set_Points_33(Vector2U5BU5D_t686124026* value)
	{
		___Points_33 = value;
		Il2CppCodeGenWriteBarrier(&___Points_33, value);
	}

	inline static int32_t get_offset_of_relativeSize_34() { return static_cast<int32_t>(offsetof(UILineRenderer_t3031355003, ___relativeSize_34)); }
	inline bool get_relativeSize_34() const { return ___relativeSize_34; }
	inline bool* get_address_of_relativeSize_34() { return &___relativeSize_34; }
	inline void set_relativeSize_34(bool value)
	{
		___relativeSize_34 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
