#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// GameController/ThirdStepFields/PairsOfCards[]
struct PairsOfCardsU5BU5D_t3437962066;
// GameController/PopupFeed/FeedMessage
struct FeedMessage_t2545096905;
// GameController/Instructions/InstructionsFields
struct InstructionsFields_t574037825;
// Card
struct Card_t34057406;
// System.Collections.Generic.List`1<Card>
struct List_1_t3698145834;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/ThirdStepFields
struct  ThirdStepFields_t2140921063  : public Il2CppObject
{
public:
	// System.Int32 GameController/ThirdStepFields::pairsAmount
	int32_t ___pairsAmount_0;
	// UnityEngine.Transform GameController/ThirdStepFields::gridSpawnCards
	Transform_t3275118058 * ___gridSpawnCards_1;
	// GameController/ThirdStepFields/PairsOfCards[] GameController/ThirdStepFields::cards
	PairsOfCardsU5BU5D_t3437962066* ___cards_2;
	// GameController/PopupFeed/FeedMessage GameController/ThirdStepFields::feedFinish
	FeedMessage_t2545096905 * ___feedFinish_3;
	// GameController/Instructions/InstructionsFields GameController/ThirdStepFields::instructions
	InstructionsFields_t574037825 * ___instructions_4;
	// Card GameController/ThirdStepFields::firstCard
	Card_t34057406 * ___firstCard_5;
	// Card GameController/ThirdStepFields::secondCard
	Card_t34057406 * ___secondCard_6;
	// System.Boolean GameController/ThirdStepFields::isEnlivening
	bool ___isEnlivening_7;
	// System.Collections.Generic.List`1<Card> GameController/ThirdStepFields::cardsSpawned
	List_1_t3698145834 * ___cardsSpawned_8;

public:
	inline static int32_t get_offset_of_pairsAmount_0() { return static_cast<int32_t>(offsetof(ThirdStepFields_t2140921063, ___pairsAmount_0)); }
	inline int32_t get_pairsAmount_0() const { return ___pairsAmount_0; }
	inline int32_t* get_address_of_pairsAmount_0() { return &___pairsAmount_0; }
	inline void set_pairsAmount_0(int32_t value)
	{
		___pairsAmount_0 = value;
	}

	inline static int32_t get_offset_of_gridSpawnCards_1() { return static_cast<int32_t>(offsetof(ThirdStepFields_t2140921063, ___gridSpawnCards_1)); }
	inline Transform_t3275118058 * get_gridSpawnCards_1() const { return ___gridSpawnCards_1; }
	inline Transform_t3275118058 ** get_address_of_gridSpawnCards_1() { return &___gridSpawnCards_1; }
	inline void set_gridSpawnCards_1(Transform_t3275118058 * value)
	{
		___gridSpawnCards_1 = value;
		Il2CppCodeGenWriteBarrier(&___gridSpawnCards_1, value);
	}

	inline static int32_t get_offset_of_cards_2() { return static_cast<int32_t>(offsetof(ThirdStepFields_t2140921063, ___cards_2)); }
	inline PairsOfCardsU5BU5D_t3437962066* get_cards_2() const { return ___cards_2; }
	inline PairsOfCardsU5BU5D_t3437962066** get_address_of_cards_2() { return &___cards_2; }
	inline void set_cards_2(PairsOfCardsU5BU5D_t3437962066* value)
	{
		___cards_2 = value;
		Il2CppCodeGenWriteBarrier(&___cards_2, value);
	}

	inline static int32_t get_offset_of_feedFinish_3() { return static_cast<int32_t>(offsetof(ThirdStepFields_t2140921063, ___feedFinish_3)); }
	inline FeedMessage_t2545096905 * get_feedFinish_3() const { return ___feedFinish_3; }
	inline FeedMessage_t2545096905 ** get_address_of_feedFinish_3() { return &___feedFinish_3; }
	inline void set_feedFinish_3(FeedMessage_t2545096905 * value)
	{
		___feedFinish_3 = value;
		Il2CppCodeGenWriteBarrier(&___feedFinish_3, value);
	}

	inline static int32_t get_offset_of_instructions_4() { return static_cast<int32_t>(offsetof(ThirdStepFields_t2140921063, ___instructions_4)); }
	inline InstructionsFields_t574037825 * get_instructions_4() const { return ___instructions_4; }
	inline InstructionsFields_t574037825 ** get_address_of_instructions_4() { return &___instructions_4; }
	inline void set_instructions_4(InstructionsFields_t574037825 * value)
	{
		___instructions_4 = value;
		Il2CppCodeGenWriteBarrier(&___instructions_4, value);
	}

	inline static int32_t get_offset_of_firstCard_5() { return static_cast<int32_t>(offsetof(ThirdStepFields_t2140921063, ___firstCard_5)); }
	inline Card_t34057406 * get_firstCard_5() const { return ___firstCard_5; }
	inline Card_t34057406 ** get_address_of_firstCard_5() { return &___firstCard_5; }
	inline void set_firstCard_5(Card_t34057406 * value)
	{
		___firstCard_5 = value;
		Il2CppCodeGenWriteBarrier(&___firstCard_5, value);
	}

	inline static int32_t get_offset_of_secondCard_6() { return static_cast<int32_t>(offsetof(ThirdStepFields_t2140921063, ___secondCard_6)); }
	inline Card_t34057406 * get_secondCard_6() const { return ___secondCard_6; }
	inline Card_t34057406 ** get_address_of_secondCard_6() { return &___secondCard_6; }
	inline void set_secondCard_6(Card_t34057406 * value)
	{
		___secondCard_6 = value;
		Il2CppCodeGenWriteBarrier(&___secondCard_6, value);
	}

	inline static int32_t get_offset_of_isEnlivening_7() { return static_cast<int32_t>(offsetof(ThirdStepFields_t2140921063, ___isEnlivening_7)); }
	inline bool get_isEnlivening_7() const { return ___isEnlivening_7; }
	inline bool* get_address_of_isEnlivening_7() { return &___isEnlivening_7; }
	inline void set_isEnlivening_7(bool value)
	{
		___isEnlivening_7 = value;
	}

	inline static int32_t get_offset_of_cardsSpawned_8() { return static_cast<int32_t>(offsetof(ThirdStepFields_t2140921063, ___cardsSpawned_8)); }
	inline List_1_t3698145834 * get_cardsSpawned_8() const { return ___cardsSpawned_8; }
	inline List_1_t3698145834 ** get_address_of_cardsSpawned_8() { return &___cardsSpawned_8; }
	inline void set_cardsSpawned_8(List_1_t3698145834 * value)
	{
		___cardsSpawned_8 = value;
		Il2CppCodeGenWriteBarrier(&___cardsSpawned_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
