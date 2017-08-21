#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// GameController/Instructions/InstructionsFields
struct InstructionsFields_t574037825;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/MenuFields
struct  MenuFields_t2911882149  : public Il2CppObject
{
public:
	// GameController/Instructions/InstructionsFields GameController/MenuFields::instructions
	InstructionsFields_t574037825 * ___instructions_0;

public:
	inline static int32_t get_offset_of_instructions_0() { return static_cast<int32_t>(offsetof(MenuFields_t2911882149, ___instructions_0)); }
	inline InstructionsFields_t574037825 * get_instructions_0() const { return ___instructions_0; }
	inline InstructionsFields_t574037825 ** get_address_of_instructions_0() { return &___instructions_0; }
	inline void set_instructions_0(InstructionsFields_t574037825 * value)
	{
		___instructions_0 = value;
		Il2CppCodeGenWriteBarrier(&___instructions_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
