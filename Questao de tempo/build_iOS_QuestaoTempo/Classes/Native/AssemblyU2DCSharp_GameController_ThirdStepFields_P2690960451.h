#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/ThirdStepFields/PairsOfCards
struct  PairsOfCards_t2690960451  : public Il2CppObject
{
public:
	// UnityEngine.GameObject GameController/ThirdStepFields/PairsOfCards::cardImg
	GameObject_t1756533147 * ___cardImg_0;
	// UnityEngine.GameObject GameController/ThirdStepFields/PairsOfCards::cardText
	GameObject_t1756533147 * ___cardText_1;

public:
	inline static int32_t get_offset_of_cardImg_0() { return static_cast<int32_t>(offsetof(PairsOfCards_t2690960451, ___cardImg_0)); }
	inline GameObject_t1756533147 * get_cardImg_0() const { return ___cardImg_0; }
	inline GameObject_t1756533147 ** get_address_of_cardImg_0() { return &___cardImg_0; }
	inline void set_cardImg_0(GameObject_t1756533147 * value)
	{
		___cardImg_0 = value;
		Il2CppCodeGenWriteBarrier(&___cardImg_0, value);
	}

	inline static int32_t get_offset_of_cardText_1() { return static_cast<int32_t>(offsetof(PairsOfCards_t2690960451, ___cardText_1)); }
	inline GameObject_t1756533147 * get_cardText_1() const { return ___cardText_1; }
	inline GameObject_t1756533147 ** get_address_of_cardText_1() { return &___cardText_1; }
	inline void set_cardText_1(GameObject_t1756533147 * value)
	{
		___cardText_1 = value;
		Il2CppCodeGenWriteBarrier(&___cardText_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
