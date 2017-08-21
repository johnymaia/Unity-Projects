#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// VinhetaController
struct VinhetaController_t944467451;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VinhetaController
struct  VinhetaController_t944467451  : public MonoBehaviour_t1158329972
{
public:
	// System.String VinhetaController::sceneToLoad
	String_t* ___sceneToLoad_3;

public:
	inline static int32_t get_offset_of_sceneToLoad_3() { return static_cast<int32_t>(offsetof(VinhetaController_t944467451, ___sceneToLoad_3)); }
	inline String_t* get_sceneToLoad_3() const { return ___sceneToLoad_3; }
	inline String_t** get_address_of_sceneToLoad_3() { return &___sceneToLoad_3; }
	inline void set_sceneToLoad_3(String_t* value)
	{
		___sceneToLoad_3 = value;
		Il2CppCodeGenWriteBarrier(&___sceneToLoad_3, value);
	}
};

struct VinhetaController_t944467451_StaticFields
{
public:
	// VinhetaController VinhetaController::instance
	VinhetaController_t944467451 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(VinhetaController_t944467451_StaticFields, ___instance_2)); }
	inline VinhetaController_t944467451 * get_instance_2() const { return ___instance_2; }
	inline VinhetaController_t944467451 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(VinhetaController_t944467451 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
