#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GameController_ScreenState560310848.h"

// GameController
struct GameController_t3607102586;
// GameController/MenuFields
struct MenuFields_t2911882149;
// GameController/FirstStepFields
struct FirstStepFields_t3517665956;
// GameController/SecondStepFields
struct SecondStepFields_t1698930504;
// GameController/ThirdStepFields
struct ThirdStepFields_t2140921063;
// GameController/PopupFeed
struct PopupFeed_t1739013851;
// GameController/Instructions
struct Instructions_t593130494;
// GameController/Instructions/InstructionsFields
struct InstructionsFields_t574037825;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t3607102586  : public MonoBehaviour_t1158329972
{
public:
	// GameController/MenuFields GameController::menuFields
	MenuFields_t2911882149 * ___menuFields_3;
	// GameController/FirstStepFields GameController::firstStepFields
	FirstStepFields_t3517665956 * ___firstStepFields_4;
	// GameController/SecondStepFields GameController::secondStepFields
	SecondStepFields_t1698930504 * ___secondStepFields_5;
	// GameController/ThirdStepFields GameController::thirdStepFields
	ThirdStepFields_t2140921063 * ___thirdStepFields_6;
	// GameController/PopupFeed GameController::popupFeed
	PopupFeed_t1739013851 * ___popupFeed_7;
	// GameController/Instructions GameController::instructions
	Instructions_t593130494 * ___instructions_8;
	// System.Boolean GameController::hasFinish
	bool ___hasFinish_9;
	// GameController/ScreenState GameController::state
	int32_t ___state_10;
	// GameController/Instructions/InstructionsFields GameController::currentInstrutions
	InstructionsFields_t574037825 * ___currentInstrutions_11;
	// UnityEngine.Animator GameController::stepAnimator
	Animator_t69676727 * ___stepAnimator_12;
	// UnityEngine.GameObject GameController::currentObj
	GameObject_t1756533147 * ___currentObj_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameController::toysToSpawn
	List_1_t1125654279 * ___toysToSpawn_14;

public:
	inline static int32_t get_offset_of_menuFields_3() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___menuFields_3)); }
	inline MenuFields_t2911882149 * get_menuFields_3() const { return ___menuFields_3; }
	inline MenuFields_t2911882149 ** get_address_of_menuFields_3() { return &___menuFields_3; }
	inline void set_menuFields_3(MenuFields_t2911882149 * value)
	{
		___menuFields_3 = value;
		Il2CppCodeGenWriteBarrier(&___menuFields_3, value);
	}

	inline static int32_t get_offset_of_firstStepFields_4() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___firstStepFields_4)); }
	inline FirstStepFields_t3517665956 * get_firstStepFields_4() const { return ___firstStepFields_4; }
	inline FirstStepFields_t3517665956 ** get_address_of_firstStepFields_4() { return &___firstStepFields_4; }
	inline void set_firstStepFields_4(FirstStepFields_t3517665956 * value)
	{
		___firstStepFields_4 = value;
		Il2CppCodeGenWriteBarrier(&___firstStepFields_4, value);
	}

	inline static int32_t get_offset_of_secondStepFields_5() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___secondStepFields_5)); }
	inline SecondStepFields_t1698930504 * get_secondStepFields_5() const { return ___secondStepFields_5; }
	inline SecondStepFields_t1698930504 ** get_address_of_secondStepFields_5() { return &___secondStepFields_5; }
	inline void set_secondStepFields_5(SecondStepFields_t1698930504 * value)
	{
		___secondStepFields_5 = value;
		Il2CppCodeGenWriteBarrier(&___secondStepFields_5, value);
	}

	inline static int32_t get_offset_of_thirdStepFields_6() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___thirdStepFields_6)); }
	inline ThirdStepFields_t2140921063 * get_thirdStepFields_6() const { return ___thirdStepFields_6; }
	inline ThirdStepFields_t2140921063 ** get_address_of_thirdStepFields_6() { return &___thirdStepFields_6; }
	inline void set_thirdStepFields_6(ThirdStepFields_t2140921063 * value)
	{
		___thirdStepFields_6 = value;
		Il2CppCodeGenWriteBarrier(&___thirdStepFields_6, value);
	}

	inline static int32_t get_offset_of_popupFeed_7() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___popupFeed_7)); }
	inline PopupFeed_t1739013851 * get_popupFeed_7() const { return ___popupFeed_7; }
	inline PopupFeed_t1739013851 ** get_address_of_popupFeed_7() { return &___popupFeed_7; }
	inline void set_popupFeed_7(PopupFeed_t1739013851 * value)
	{
		___popupFeed_7 = value;
		Il2CppCodeGenWriteBarrier(&___popupFeed_7, value);
	}

	inline static int32_t get_offset_of_instructions_8() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___instructions_8)); }
	inline Instructions_t593130494 * get_instructions_8() const { return ___instructions_8; }
	inline Instructions_t593130494 ** get_address_of_instructions_8() { return &___instructions_8; }
	inline void set_instructions_8(Instructions_t593130494 * value)
	{
		___instructions_8 = value;
		Il2CppCodeGenWriteBarrier(&___instructions_8, value);
	}

	inline static int32_t get_offset_of_hasFinish_9() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___hasFinish_9)); }
	inline bool get_hasFinish_9() const { return ___hasFinish_9; }
	inline bool* get_address_of_hasFinish_9() { return &___hasFinish_9; }
	inline void set_hasFinish_9(bool value)
	{
		___hasFinish_9 = value;
	}

	inline static int32_t get_offset_of_state_10() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___state_10)); }
	inline int32_t get_state_10() const { return ___state_10; }
	inline int32_t* get_address_of_state_10() { return &___state_10; }
	inline void set_state_10(int32_t value)
	{
		___state_10 = value;
	}

	inline static int32_t get_offset_of_currentInstrutions_11() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___currentInstrutions_11)); }
	inline InstructionsFields_t574037825 * get_currentInstrutions_11() const { return ___currentInstrutions_11; }
	inline InstructionsFields_t574037825 ** get_address_of_currentInstrutions_11() { return &___currentInstrutions_11; }
	inline void set_currentInstrutions_11(InstructionsFields_t574037825 * value)
	{
		___currentInstrutions_11 = value;
		Il2CppCodeGenWriteBarrier(&___currentInstrutions_11, value);
	}

	inline static int32_t get_offset_of_stepAnimator_12() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___stepAnimator_12)); }
	inline Animator_t69676727 * get_stepAnimator_12() const { return ___stepAnimator_12; }
	inline Animator_t69676727 ** get_address_of_stepAnimator_12() { return &___stepAnimator_12; }
	inline void set_stepAnimator_12(Animator_t69676727 * value)
	{
		___stepAnimator_12 = value;
		Il2CppCodeGenWriteBarrier(&___stepAnimator_12, value);
	}

	inline static int32_t get_offset_of_currentObj_13() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___currentObj_13)); }
	inline GameObject_t1756533147 * get_currentObj_13() const { return ___currentObj_13; }
	inline GameObject_t1756533147 ** get_address_of_currentObj_13() { return &___currentObj_13; }
	inline void set_currentObj_13(GameObject_t1756533147 * value)
	{
		___currentObj_13 = value;
		Il2CppCodeGenWriteBarrier(&___currentObj_13, value);
	}

	inline static int32_t get_offset_of_toysToSpawn_14() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___toysToSpawn_14)); }
	inline List_1_t1125654279 * get_toysToSpawn_14() const { return ___toysToSpawn_14; }
	inline List_1_t1125654279 ** get_address_of_toysToSpawn_14() { return &___toysToSpawn_14; }
	inline void set_toysToSpawn_14(List_1_t1125654279 * value)
	{
		___toysToSpawn_14 = value;
		Il2CppCodeGenWriteBarrier(&___toysToSpawn_14, value);
	}
};

struct GameController_t3607102586_StaticFields
{
public:
	// GameController GameController::instance
	GameController_t3607102586 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(GameController_t3607102586_StaticFields, ___instance_2)); }
	inline GameController_t3607102586 * get_instance_2() const { return ___instance_2; }
	inline GameController_t3607102586 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GameController_t3607102586 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
