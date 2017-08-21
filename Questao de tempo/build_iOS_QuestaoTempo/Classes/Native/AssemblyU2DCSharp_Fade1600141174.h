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

// Fade
struct Fade_t1600141174;
// UnityEngine.UI.Image
struct Image_t2042527209;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fade
struct  Fade_t1600141174  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Fade::fadeSpeed
	float ___fadeSpeed_3;
	// UnityEngine.Color Fade::targetColor
	Color_t2020392075  ___targetColor_4;
	// UnityEngine.UI.Image Fade::image
	Image_t2042527209 * ___image_5;
	// System.String Fade::sceneToLoad
	String_t* ___sceneToLoad_6;
	// System.Boolean Fade::endScene
	bool ___endScene_7;

public:
	inline static int32_t get_offset_of_fadeSpeed_3() { return static_cast<int32_t>(offsetof(Fade_t1600141174, ___fadeSpeed_3)); }
	inline float get_fadeSpeed_3() const { return ___fadeSpeed_3; }
	inline float* get_address_of_fadeSpeed_3() { return &___fadeSpeed_3; }
	inline void set_fadeSpeed_3(float value)
	{
		___fadeSpeed_3 = value;
	}

	inline static int32_t get_offset_of_targetColor_4() { return static_cast<int32_t>(offsetof(Fade_t1600141174, ___targetColor_4)); }
	inline Color_t2020392075  get_targetColor_4() const { return ___targetColor_4; }
	inline Color_t2020392075 * get_address_of_targetColor_4() { return &___targetColor_4; }
	inline void set_targetColor_4(Color_t2020392075  value)
	{
		___targetColor_4 = value;
	}

	inline static int32_t get_offset_of_image_5() { return static_cast<int32_t>(offsetof(Fade_t1600141174, ___image_5)); }
	inline Image_t2042527209 * get_image_5() const { return ___image_5; }
	inline Image_t2042527209 ** get_address_of_image_5() { return &___image_5; }
	inline void set_image_5(Image_t2042527209 * value)
	{
		___image_5 = value;
		Il2CppCodeGenWriteBarrier(&___image_5, value);
	}

	inline static int32_t get_offset_of_sceneToLoad_6() { return static_cast<int32_t>(offsetof(Fade_t1600141174, ___sceneToLoad_6)); }
	inline String_t* get_sceneToLoad_6() const { return ___sceneToLoad_6; }
	inline String_t** get_address_of_sceneToLoad_6() { return &___sceneToLoad_6; }
	inline void set_sceneToLoad_6(String_t* value)
	{
		___sceneToLoad_6 = value;
		Il2CppCodeGenWriteBarrier(&___sceneToLoad_6, value);
	}

	inline static int32_t get_offset_of_endScene_7() { return static_cast<int32_t>(offsetof(Fade_t1600141174, ___endScene_7)); }
	inline bool get_endScene_7() const { return ___endScene_7; }
	inline bool* get_address_of_endScene_7() { return &___endScene_7; }
	inline void set_endScene_7(bool value)
	{
		___endScene_7 = value;
	}
};

struct Fade_t1600141174_StaticFields
{
public:
	// Fade Fade::Instance
	Fade_t1600141174 * ___Instance_2;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(Fade_t1600141174_StaticFields, ___Instance_2)); }
	inline Fade_t1600141174 * get_Instance_2() const { return ___Instance_2; }
	inline Fade_t1600141174 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(Fade_t1600141174 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
