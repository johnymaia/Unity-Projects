#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3296560743;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/Instructions
struct  Instructions_t593130494  : public Il2CppObject
{
public:
	// UnityEngine.UI.Text GameController/Instructions::text
	Text_t356221433 * ___text_0;
	// UnityEngine.UI.Image GameController/Instructions::img
	Image_t2042527209 * ___img_1;
	// UnityEngine.CanvasGroup GameController/Instructions::cg
	CanvasGroup_t3296560743 * ___cg_2;
	// UnityEngine.Animator GameController/Instructions::anim
	Animator_t69676727 * ___anim_3;
	// UnityEngine.GameObject GameController/Instructions::btnInstructions
	GameObject_t1756533147 * ___btnInstructions_4;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(Instructions_t593130494, ___text_0)); }
	inline Text_t356221433 * get_text_0() const { return ___text_0; }
	inline Text_t356221433 ** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(Text_t356221433 * value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier(&___text_0, value);
	}

	inline static int32_t get_offset_of_img_1() { return static_cast<int32_t>(offsetof(Instructions_t593130494, ___img_1)); }
	inline Image_t2042527209 * get_img_1() const { return ___img_1; }
	inline Image_t2042527209 ** get_address_of_img_1() { return &___img_1; }
	inline void set_img_1(Image_t2042527209 * value)
	{
		___img_1 = value;
		Il2CppCodeGenWriteBarrier(&___img_1, value);
	}

	inline static int32_t get_offset_of_cg_2() { return static_cast<int32_t>(offsetof(Instructions_t593130494, ___cg_2)); }
	inline CanvasGroup_t3296560743 * get_cg_2() const { return ___cg_2; }
	inline CanvasGroup_t3296560743 ** get_address_of_cg_2() { return &___cg_2; }
	inline void set_cg_2(CanvasGroup_t3296560743 * value)
	{
		___cg_2 = value;
		Il2CppCodeGenWriteBarrier(&___cg_2, value);
	}

	inline static int32_t get_offset_of_anim_3() { return static_cast<int32_t>(offsetof(Instructions_t593130494, ___anim_3)); }
	inline Animator_t69676727 * get_anim_3() const { return ___anim_3; }
	inline Animator_t69676727 ** get_address_of_anim_3() { return &___anim_3; }
	inline void set_anim_3(Animator_t69676727 * value)
	{
		___anim_3 = value;
		Il2CppCodeGenWriteBarrier(&___anim_3, value);
	}

	inline static int32_t get_offset_of_btnInstructions_4() { return static_cast<int32_t>(offsetof(Instructions_t593130494, ___btnInstructions_4)); }
	inline GameObject_t1756533147 * get_btnInstructions_4() const { return ___btnInstructions_4; }
	inline GameObject_t1756533147 ** get_address_of_btnInstructions_4() { return &___btnInstructions_4; }
	inline void set_btnInstructions_4(GameObject_t1756533147 * value)
	{
		___btnInstructions_4 = value;
		Il2CppCodeGenWriteBarrier(&___btnInstructions_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
