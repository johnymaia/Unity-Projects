#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// AudioNarracao
struct AudioNarracao_t1106907155;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Sprite
struct Sprite_t309593783;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioNarracao
struct  AudioNarracao_t1106907155  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource AudioNarracao::audioSource
	AudioSource_t1135106623 * ___audioSource_3;
	// UnityEngine.UI.Image AudioNarracao::imgAudio
	Image_t2042527209 * ___imgAudio_4;
	// UnityEngine.Sprite AudioNarracao::spriteAudioDesligado
	Sprite_t309593783 * ___spriteAudioDesligado_5;
	// UnityEngine.Sprite AudioNarracao::spriteAudioLigado
	Sprite_t309593783 * ___spriteAudioLigado_6;
	// System.Boolean AudioNarracao::isEnable
	bool ___isEnable_7;
	// System.Single AudioNarracao::maxVolume
	float ___maxVolume_8;
	// System.Single AudioNarracao::targetVolume
	float ___targetVolume_9;

public:
	inline static int32_t get_offset_of_audioSource_3() { return static_cast<int32_t>(offsetof(AudioNarracao_t1106907155, ___audioSource_3)); }
	inline AudioSource_t1135106623 * get_audioSource_3() const { return ___audioSource_3; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_3() { return &___audioSource_3; }
	inline void set_audioSource_3(AudioSource_t1135106623 * value)
	{
		___audioSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_3, value);
	}

	inline static int32_t get_offset_of_imgAudio_4() { return static_cast<int32_t>(offsetof(AudioNarracao_t1106907155, ___imgAudio_4)); }
	inline Image_t2042527209 * get_imgAudio_4() const { return ___imgAudio_4; }
	inline Image_t2042527209 ** get_address_of_imgAudio_4() { return &___imgAudio_4; }
	inline void set_imgAudio_4(Image_t2042527209 * value)
	{
		___imgAudio_4 = value;
		Il2CppCodeGenWriteBarrier(&___imgAudio_4, value);
	}

	inline static int32_t get_offset_of_spriteAudioDesligado_5() { return static_cast<int32_t>(offsetof(AudioNarracao_t1106907155, ___spriteAudioDesligado_5)); }
	inline Sprite_t309593783 * get_spriteAudioDesligado_5() const { return ___spriteAudioDesligado_5; }
	inline Sprite_t309593783 ** get_address_of_spriteAudioDesligado_5() { return &___spriteAudioDesligado_5; }
	inline void set_spriteAudioDesligado_5(Sprite_t309593783 * value)
	{
		___spriteAudioDesligado_5 = value;
		Il2CppCodeGenWriteBarrier(&___spriteAudioDesligado_5, value);
	}

	inline static int32_t get_offset_of_spriteAudioLigado_6() { return static_cast<int32_t>(offsetof(AudioNarracao_t1106907155, ___spriteAudioLigado_6)); }
	inline Sprite_t309593783 * get_spriteAudioLigado_6() const { return ___spriteAudioLigado_6; }
	inline Sprite_t309593783 ** get_address_of_spriteAudioLigado_6() { return &___spriteAudioLigado_6; }
	inline void set_spriteAudioLigado_6(Sprite_t309593783 * value)
	{
		___spriteAudioLigado_6 = value;
		Il2CppCodeGenWriteBarrier(&___spriteAudioLigado_6, value);
	}

	inline static int32_t get_offset_of_isEnable_7() { return static_cast<int32_t>(offsetof(AudioNarracao_t1106907155, ___isEnable_7)); }
	inline bool get_isEnable_7() const { return ___isEnable_7; }
	inline bool* get_address_of_isEnable_7() { return &___isEnable_7; }
	inline void set_isEnable_7(bool value)
	{
		___isEnable_7 = value;
	}

	inline static int32_t get_offset_of_maxVolume_8() { return static_cast<int32_t>(offsetof(AudioNarracao_t1106907155, ___maxVolume_8)); }
	inline float get_maxVolume_8() const { return ___maxVolume_8; }
	inline float* get_address_of_maxVolume_8() { return &___maxVolume_8; }
	inline void set_maxVolume_8(float value)
	{
		___maxVolume_8 = value;
	}

	inline static int32_t get_offset_of_targetVolume_9() { return static_cast<int32_t>(offsetof(AudioNarracao_t1106907155, ___targetVolume_9)); }
	inline float get_targetVolume_9() const { return ___targetVolume_9; }
	inline float* get_address_of_targetVolume_9() { return &___targetVolume_9; }
	inline void set_targetVolume_9(float value)
	{
		___targetVolume_9 = value;
	}
};

struct AudioNarracao_t1106907155_StaticFields
{
public:
	// AudioNarracao AudioNarracao::instance
	AudioNarracao_t1106907155 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(AudioNarracao_t1106907155_StaticFields, ___instance_2)); }
	inline AudioNarracao_t1106907155 * get_instance_2() const { return ___instance_2; }
	inline AudioNarracao_t1106907155 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(AudioNarracao_t1106907155 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
