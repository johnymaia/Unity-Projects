#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Random
struct Random_t1044426839;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleSuffle.ThreadSafeRandom
struct  ThreadSafeRandom_t1943646478  : public Il2CppObject
{
public:

public:
};

struct ThreadSafeRandom_t1943646478_ThreadStaticFields
{
public:
	// System.Random SimpleSuffle.ThreadSafeRandom::Local
	Random_t1044426839 * ___Local_0;

public:
	inline static int32_t get_offset_of_Local_0() { return static_cast<int32_t>(offsetof(ThreadSafeRandom_t1943646478_ThreadStaticFields, ___Local_0)); }
	inline Random_t1044426839 * get_Local_0() const { return ___Local_0; }
	inline Random_t1044426839 ** get_address_of_Local_0() { return &___Local_0; }
	inline void set_Local_0(Random_t1044426839 * value)
	{
		___Local_0 = value;
		Il2CppCodeGenWriteBarrier(&___Local_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
