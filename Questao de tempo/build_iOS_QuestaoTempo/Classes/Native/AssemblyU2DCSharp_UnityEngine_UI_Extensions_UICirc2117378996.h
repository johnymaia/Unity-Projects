#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic540192618.h"

// UnityEngine.Texture
struct Texture_t2243626319;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.UICircle
struct  UICircle_t2117378996  : public MaskableGraphic_t540192618
{
public:
	// UnityEngine.Texture UnityEngine.UI.Extensions.UICircle::m_Texture
	Texture_t2243626319 * ___m_Texture_28;
	// System.Int32 UnityEngine.UI.Extensions.UICircle::fillPercent
	int32_t ___fillPercent_29;
	// System.Boolean UnityEngine.UI.Extensions.UICircle::fill
	bool ___fill_30;
	// System.Single UnityEngine.UI.Extensions.UICircle::thickness
	float ___thickness_31;
	// System.Int32 UnityEngine.UI.Extensions.UICircle::segments
	int32_t ___segments_32;

public:
	inline static int32_t get_offset_of_m_Texture_28() { return static_cast<int32_t>(offsetof(UICircle_t2117378996, ___m_Texture_28)); }
	inline Texture_t2243626319 * get_m_Texture_28() const { return ___m_Texture_28; }
	inline Texture_t2243626319 ** get_address_of_m_Texture_28() { return &___m_Texture_28; }
	inline void set_m_Texture_28(Texture_t2243626319 * value)
	{
		___m_Texture_28 = value;
		Il2CppCodeGenWriteBarrier(&___m_Texture_28, value);
	}

	inline static int32_t get_offset_of_fillPercent_29() { return static_cast<int32_t>(offsetof(UICircle_t2117378996, ___fillPercent_29)); }
	inline int32_t get_fillPercent_29() const { return ___fillPercent_29; }
	inline int32_t* get_address_of_fillPercent_29() { return &___fillPercent_29; }
	inline void set_fillPercent_29(int32_t value)
	{
		___fillPercent_29 = value;
	}

	inline static int32_t get_offset_of_fill_30() { return static_cast<int32_t>(offsetof(UICircle_t2117378996, ___fill_30)); }
	inline bool get_fill_30() const { return ___fill_30; }
	inline bool* get_address_of_fill_30() { return &___fill_30; }
	inline void set_fill_30(bool value)
	{
		___fill_30 = value;
	}

	inline static int32_t get_offset_of_thickness_31() { return static_cast<int32_t>(offsetof(UICircle_t2117378996, ___thickness_31)); }
	inline float get_thickness_31() const { return ___thickness_31; }
	inline float* get_address_of_thickness_31() { return &___thickness_31; }
	inline void set_thickness_31(float value)
	{
		___thickness_31 = value;
	}

	inline static int32_t get_offset_of_segments_32() { return static_cast<int32_t>(offsetof(UICircle_t2117378996, ___segments_32)); }
	inline int32_t get_segments_32() const { return ___segments_32; }
	inline int32_t* get_address_of_segments_32() { return &___segments_32; }
	inline void set_segments_32(int32_t value)
	{
		___segments_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
