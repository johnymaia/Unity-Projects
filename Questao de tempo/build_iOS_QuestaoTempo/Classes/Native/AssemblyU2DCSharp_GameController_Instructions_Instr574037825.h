#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/Instructions/InstructionsFields
struct  InstructionsFields_t574037825  : public Il2CppObject
{
public:
	// System.String GameController/Instructions/InstructionsFields::txt
	String_t* ___txt_0;
	// UnityEngine.Sprite GameController/Instructions/InstructionsFields::spr
	Sprite_t309593783 * ___spr_1;
	// UnityEngine.AudioClip GameController/Instructions/InstructionsFields::clip
	AudioClip_t1932558630 * ___clip_2;

public:
	inline static int32_t get_offset_of_txt_0() { return static_cast<int32_t>(offsetof(InstructionsFields_t574037825, ___txt_0)); }
	inline String_t* get_txt_0() const { return ___txt_0; }
	inline String_t** get_address_of_txt_0() { return &___txt_0; }
	inline void set_txt_0(String_t* value)
	{
		___txt_0 = value;
		Il2CppCodeGenWriteBarrier(&___txt_0, value);
	}

	inline static int32_t get_offset_of_spr_1() { return static_cast<int32_t>(offsetof(InstructionsFields_t574037825, ___spr_1)); }
	inline Sprite_t309593783 * get_spr_1() const { return ___spr_1; }
	inline Sprite_t309593783 ** get_address_of_spr_1() { return &___spr_1; }
	inline void set_spr_1(Sprite_t309593783 * value)
	{
		___spr_1 = value;
		Il2CppCodeGenWriteBarrier(&___spr_1, value);
	}

	inline static int32_t get_offset_of_clip_2() { return static_cast<int32_t>(offsetof(InstructionsFields_t574037825, ___clip_2)); }
	inline AudioClip_t1932558630 * get_clip_2() const { return ___clip_2; }
	inline AudioClip_t1932558630 ** get_address_of_clip_2() { return &___clip_2; }
	inline void set_clip_2(AudioClip_t1932558630 * value)
	{
		___clip_2 = value;
		Il2CppCodeGenWriteBarrier(&___clip_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
