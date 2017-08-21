#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BtnAudio
struct  BtnAudio_t4222871270  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite BtnAudio::spriteAudioDesligado
	Sprite_t309593783 * ___spriteAudioDesligado_2;
	// UnityEngine.Sprite BtnAudio::spriteAudioLigado
	Sprite_t309593783 * ___spriteAudioLigado_3;
	// UnityEngine.UI.Image BtnAudio::image
	Image_t2042527209 * ___image_4;

public:
	inline static int32_t get_offset_of_spriteAudioDesligado_2() { return static_cast<int32_t>(offsetof(BtnAudio_t4222871270, ___spriteAudioDesligado_2)); }
	inline Sprite_t309593783 * get_spriteAudioDesligado_2() const { return ___spriteAudioDesligado_2; }
	inline Sprite_t309593783 ** get_address_of_spriteAudioDesligado_2() { return &___spriteAudioDesligado_2; }
	inline void set_spriteAudioDesligado_2(Sprite_t309593783 * value)
	{
		___spriteAudioDesligado_2 = value;
		Il2CppCodeGenWriteBarrier(&___spriteAudioDesligado_2, value);
	}

	inline static int32_t get_offset_of_spriteAudioLigado_3() { return static_cast<int32_t>(offsetof(BtnAudio_t4222871270, ___spriteAudioLigado_3)); }
	inline Sprite_t309593783 * get_spriteAudioLigado_3() const { return ___spriteAudioLigado_3; }
	inline Sprite_t309593783 ** get_address_of_spriteAudioLigado_3() { return &___spriteAudioLigado_3; }
	inline void set_spriteAudioLigado_3(Sprite_t309593783 * value)
	{
		___spriteAudioLigado_3 = value;
		Il2CppCodeGenWriteBarrier(&___spriteAudioLigado_3, value);
	}

	inline static int32_t get_offset_of_image_4() { return static_cast<int32_t>(offsetof(BtnAudio_t4222871270, ___image_4)); }
	inline Image_t2042527209 * get_image_4() const { return ___image_4; }
	inline Image_t2042527209 ** get_address_of_image_4() { return &___image_4; }
	inline void set_image_4(Image_t2042527209 * value)
	{
		___image_4 = value;
		Il2CppCodeGenWriteBarrier(&___image_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
