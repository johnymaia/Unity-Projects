#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Extensions.HSVPicker
struct HSVPicker_t60325509;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.HsvBoxSelector
struct  HsvBoxSelector_t2686674535  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Extensions.HSVPicker UnityEngine.UI.Extensions.HsvBoxSelector::picker
	HSVPicker_t60325509 * ___picker_2;

public:
	inline static int32_t get_offset_of_picker_2() { return static_cast<int32_t>(offsetof(HsvBoxSelector_t2686674535, ___picker_2)); }
	inline HSVPicker_t60325509 * get_picker_2() const { return ___picker_2; }
	inline HSVPicker_t60325509 ** get_address_of_picker_2() { return &___picker_2; }
	inline void set_picker_2(HSVPicker_t60325509 * value)
	{
		___picker_2 = value;
		Il2CppCodeGenWriteBarrier(&___picker_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
