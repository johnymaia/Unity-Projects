﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BackgroundAudio
struct  BackgroundAudio_t561638434  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource BackgroundAudio::audioSource
	AudioSource_t1135106623 * ___audioSource_3;
	// System.Single BackgroundAudio::volume
	float ___volume_4;

public:
	inline static int32_t get_offset_of_audioSource_3() { return static_cast<int32_t>(offsetof(BackgroundAudio_t561638434, ___audioSource_3)); }
	inline AudioSource_t1135106623 * get_audioSource_3() const { return ___audioSource_3; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_3() { return &___audioSource_3; }
	inline void set_audioSource_3(AudioSource_t1135106623 * value)
	{
		___audioSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_3, value);
	}

	inline static int32_t get_offset_of_volume_4() { return static_cast<int32_t>(offsetof(BackgroundAudio_t561638434, ___volume_4)); }
	inline float get_volume_4() const { return ___volume_4; }
	inline float* get_address_of_volume_4() { return &___volume_4; }
	inline void set_volume_4(float value)
	{
		___volume_4 = value;
	}
};

struct BackgroundAudio_t561638434_StaticFields
{
public:
	// UnityEngine.GameObject BackgroundAudio::instance
	GameObject_t1756533147 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(BackgroundAudio_t561638434_StaticFields, ___instance_2)); }
	inline GameObject_t1756533147 * get_instance_2() const { return ___instance_2; }
	inline GameObject_t1756533147 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GameObject_t1756533147 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
