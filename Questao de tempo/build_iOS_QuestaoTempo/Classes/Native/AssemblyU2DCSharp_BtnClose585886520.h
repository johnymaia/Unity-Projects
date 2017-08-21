#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BtnClose
struct  BtnClose_t585886520  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator BtnClose::anim
	Animator_t69676727 * ___anim_2;
	// System.Boolean BtnClose::isOpen
	bool ___isOpen_3;

public:
	inline static int32_t get_offset_of_anim_2() { return static_cast<int32_t>(offsetof(BtnClose_t585886520, ___anim_2)); }
	inline Animator_t69676727 * get_anim_2() const { return ___anim_2; }
	inline Animator_t69676727 ** get_address_of_anim_2() { return &___anim_2; }
	inline void set_anim_2(Animator_t69676727 * value)
	{
		___anim_2 = value;
		Il2CppCodeGenWriteBarrier(&___anim_2, value);
	}

	inline static int32_t get_offset_of_isOpen_3() { return static_cast<int32_t>(offsetof(BtnClose_t585886520, ___isOpen_3)); }
	inline bool get_isOpen_3() const { return ___isOpen_3; }
	inline bool* get_address_of_isOpen_3() { return &___isOpen_3; }
	inline void set_isOpen_3(bool value)
	{
		___isOpen_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
