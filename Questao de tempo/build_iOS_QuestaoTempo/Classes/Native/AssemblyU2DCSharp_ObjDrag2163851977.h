#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GameController_TypeToys1699515306.h"
#include "AssemblyU2DCSharp_GameController_TypeClothes2187538233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t410733016;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t3685274804;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjDrag
struct  ObjDrag_t2163851977  : public MonoBehaviour_t1158329972
{
public:
	// GameController/TypeToys ObjDrag::type
	int32_t ___type_2;
	// GameController/TypeClothes ObjDrag::typeClothes
	int32_t ___typeClothes_3;
	// System.Int32 ObjDrag::id
	int32_t ___id_4;
	// UnityEngine.Vector2 ObjDrag::sizeCorrect
	Vector2_t2243707579  ___sizeCorrect_5;
	// UnityEngine.Transform ObjDrag::dragTransform
	Transform_t3275118058 * ___dragTransform_6;
	// UnityEngine.Transform ObjDrag::parentToReturnTo
	Transform_t3275118058 * ___parentToReturnTo_7;
	// UnityEngine.UI.GraphicRaycaster ObjDrag::rc
	GraphicRaycaster_t410733016 * ___rc_8;
	// System.Boolean ObjDrag::movingSlot
	bool ___movingSlot_9;
	// UnityEngine.Vector2 ObjDrag::dragOffset
	Vector2_t2243707579  ___dragOffset_10;
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> ObjDrag::raycastResults
	List_1_t3685274804 * ___raycastResults_11;

public:
	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(ObjDrag_t2163851977, ___type_2)); }
	inline int32_t get_type_2() const { return ___type_2; }
	inline int32_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(int32_t value)
	{
		___type_2 = value;
	}

	inline static int32_t get_offset_of_typeClothes_3() { return static_cast<int32_t>(offsetof(ObjDrag_t2163851977, ___typeClothes_3)); }
	inline int32_t get_typeClothes_3() const { return ___typeClothes_3; }
	inline int32_t* get_address_of_typeClothes_3() { return &___typeClothes_3; }
	inline void set_typeClothes_3(int32_t value)
	{
		___typeClothes_3 = value;
	}

	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(ObjDrag_t2163851977, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_sizeCorrect_5() { return static_cast<int32_t>(offsetof(ObjDrag_t2163851977, ___sizeCorrect_5)); }
	inline Vector2_t2243707579  get_sizeCorrect_5() const { return ___sizeCorrect_5; }
	inline Vector2_t2243707579 * get_address_of_sizeCorrect_5() { return &___sizeCorrect_5; }
	inline void set_sizeCorrect_5(Vector2_t2243707579  value)
	{
		___sizeCorrect_5 = value;
	}

	inline static int32_t get_offset_of_dragTransform_6() { return static_cast<int32_t>(offsetof(ObjDrag_t2163851977, ___dragTransform_6)); }
	inline Transform_t3275118058 * get_dragTransform_6() const { return ___dragTransform_6; }
	inline Transform_t3275118058 ** get_address_of_dragTransform_6() { return &___dragTransform_6; }
	inline void set_dragTransform_6(Transform_t3275118058 * value)
	{
		___dragTransform_6 = value;
		Il2CppCodeGenWriteBarrier(&___dragTransform_6, value);
	}

	inline static int32_t get_offset_of_parentToReturnTo_7() { return static_cast<int32_t>(offsetof(ObjDrag_t2163851977, ___parentToReturnTo_7)); }
	inline Transform_t3275118058 * get_parentToReturnTo_7() const { return ___parentToReturnTo_7; }
	inline Transform_t3275118058 ** get_address_of_parentToReturnTo_7() { return &___parentToReturnTo_7; }
	inline void set_parentToReturnTo_7(Transform_t3275118058 * value)
	{
		___parentToReturnTo_7 = value;
		Il2CppCodeGenWriteBarrier(&___parentToReturnTo_7, value);
	}

	inline static int32_t get_offset_of_rc_8() { return static_cast<int32_t>(offsetof(ObjDrag_t2163851977, ___rc_8)); }
	inline GraphicRaycaster_t410733016 * get_rc_8() const { return ___rc_8; }
	inline GraphicRaycaster_t410733016 ** get_address_of_rc_8() { return &___rc_8; }
	inline void set_rc_8(GraphicRaycaster_t410733016 * value)
	{
		___rc_8 = value;
		Il2CppCodeGenWriteBarrier(&___rc_8, value);
	}

	inline static int32_t get_offset_of_movingSlot_9() { return static_cast<int32_t>(offsetof(ObjDrag_t2163851977, ___movingSlot_9)); }
	inline bool get_movingSlot_9() const { return ___movingSlot_9; }
	inline bool* get_address_of_movingSlot_9() { return &___movingSlot_9; }
	inline void set_movingSlot_9(bool value)
	{
		___movingSlot_9 = value;
	}

	inline static int32_t get_offset_of_dragOffset_10() { return static_cast<int32_t>(offsetof(ObjDrag_t2163851977, ___dragOffset_10)); }
	inline Vector2_t2243707579  get_dragOffset_10() const { return ___dragOffset_10; }
	inline Vector2_t2243707579 * get_address_of_dragOffset_10() { return &___dragOffset_10; }
	inline void set_dragOffset_10(Vector2_t2243707579  value)
	{
		___dragOffset_10 = value;
	}

	inline static int32_t get_offset_of_raycastResults_11() { return static_cast<int32_t>(offsetof(ObjDrag_t2163851977, ___raycastResults_11)); }
	inline List_1_t3685274804 * get_raycastResults_11() const { return ___raycastResults_11; }
	inline List_1_t3685274804 ** get_address_of_raycastResults_11() { return &___raycastResults_11; }
	inline void set_raycastResults_11(List_1_t3685274804 * value)
	{
		___raycastResults_11 = value;
		Il2CppCodeGenWriteBarrier(&___raycastResults_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
