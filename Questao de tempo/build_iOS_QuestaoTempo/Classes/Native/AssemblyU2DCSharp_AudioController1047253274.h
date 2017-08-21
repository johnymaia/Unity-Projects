#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioController
struct  AudioController_t1047253274  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource AudioController::audioSource
	AudioSource_t1135106623 * ___audioSource_3;
	// System.Single AudioController::maxVolume
	float ___maxVolume_4;
	// System.Single AudioController::targetVolume
	float ___targetVolume_5;

public:
	inline static int32_t get_offset_of_audioSource_3() { return static_cast<int32_t>(offsetof(AudioController_t1047253274, ___audioSource_3)); }
	inline AudioSource_t1135106623 * get_audioSource_3() const { return ___audioSource_3; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_3() { return &___audioSource_3; }
	inline void set_audioSource_3(AudioSource_t1135106623 * value)
	{
		___audioSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_3, value);
	}

	inline static int32_t get_offset_of_maxVolume_4() { return static_cast<int32_t>(offsetof(AudioController_t1047253274, ___maxVolume_4)); }
	inline float get_maxVolume_4() const { return ___maxVolume_4; }
	inline float* get_address_of_maxVolume_4() { return &___maxVolume_4; }
	inline void set_maxVolume_4(float value)
	{
		___maxVolume_4 = value;
	}

	inline static int32_t get_offset_of_targetVolume_5() { return static_cast<int32_t>(offsetof(AudioController_t1047253274, ___targetVolume_5)); }
	inline float get_targetVolume_5() const { return ___targetVolume_5; }
	inline float* get_address_of_targetVolume_5() { return &___targetVolume_5; }
	inline void set_targetVolume_5(float value)
	{
		___targetVolume_5 = value;
	}
};

struct AudioController_t1047253274_StaticFields
{
public:
	// System.Boolean AudioController::audioHabilitado
	bool ___audioHabilitado_2;

public:
	inline static int32_t get_offset_of_audioHabilitado_2() { return static_cast<int32_t>(offsetof(AudioController_t1047253274_StaticFields, ___audioHabilitado_2)); }
	inline bool get_audioHabilitado_2() const { return ___audioHabilitado_2; }
	inline bool* get_address_of_audioHabilitado_2() { return &___audioHabilitado_2; }
	inline void set_audioHabilitado_2(bool value)
	{
		___audioHabilitado_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
