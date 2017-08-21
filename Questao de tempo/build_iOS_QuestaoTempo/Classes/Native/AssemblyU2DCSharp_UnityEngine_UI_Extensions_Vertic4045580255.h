#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t1199013257;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.VerticalScrollSnap
struct  VerticalScrollSnap_t4045580255  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform UnityEngine.UI.Extensions.VerticalScrollSnap::_screensContainer
	Transform_t3275118058 * ____screensContainer_2;
	// System.Int32 UnityEngine.UI.Extensions.VerticalScrollSnap::_screens
	int32_t ____screens_3;
	// System.Int32 UnityEngine.UI.Extensions.VerticalScrollSnap::_startingScreen
	int32_t ____startingScreen_4;
	// System.Boolean UnityEngine.UI.Extensions.VerticalScrollSnap::_fastSwipeTimer
	bool ____fastSwipeTimer_5;
	// System.Int32 UnityEngine.UI.Extensions.VerticalScrollSnap::_fastSwipeCounter
	int32_t ____fastSwipeCounter_6;
	// System.Int32 UnityEngine.UI.Extensions.VerticalScrollSnap::_fastSwipeTarget
	int32_t ____fastSwipeTarget_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.Extensions.VerticalScrollSnap::_positions
	List_1_t1612828712 * ____positions_8;
	// UnityEngine.UI.ScrollRect UnityEngine.UI.Extensions.VerticalScrollSnap::_scroll_rect
	ScrollRect_t1199013257 * ____scroll_rect_9;
	// UnityEngine.Vector3 UnityEngine.UI.Extensions.VerticalScrollSnap::_lerp_target
	Vector3_t2243707580  ____lerp_target_10;
	// System.Boolean UnityEngine.UI.Extensions.VerticalScrollSnap::_lerp
	bool ____lerp_11;
	// System.Int32 UnityEngine.UI.Extensions.VerticalScrollSnap::_containerSize
	int32_t ____containerSize_12;
	// UnityEngine.GameObject UnityEngine.UI.Extensions.VerticalScrollSnap::Pagination
	GameObject_t1756533147 * ___Pagination_13;
	// UnityEngine.GameObject UnityEngine.UI.Extensions.VerticalScrollSnap::NextButton
	GameObject_t1756533147 * ___NextButton_14;
	// UnityEngine.GameObject UnityEngine.UI.Extensions.VerticalScrollSnap::PrevButton
	GameObject_t1756533147 * ___PrevButton_15;
	// System.Boolean UnityEngine.UI.Extensions.VerticalScrollSnap::UseFastSwipe
	bool ___UseFastSwipe_16;
	// System.Int32 UnityEngine.UI.Extensions.VerticalScrollSnap::FastSwipeThreshold
	int32_t ___FastSwipeThreshold_17;
	// System.Boolean UnityEngine.UI.Extensions.VerticalScrollSnap::_startDrag
	bool ____startDrag_18;
	// UnityEngine.Vector3 UnityEngine.UI.Extensions.VerticalScrollSnap::_startPosition
	Vector3_t2243707580  ____startPosition_19;
	// System.Int32 UnityEngine.UI.Extensions.VerticalScrollSnap::_currentScreen
	int32_t ____currentScreen_20;
	// System.Boolean UnityEngine.UI.Extensions.VerticalScrollSnap::fastSwipe
	bool ___fastSwipe_21;

public:
	inline static int32_t get_offset_of__screensContainer_2() { return static_cast<int32_t>(offsetof(VerticalScrollSnap_t4045580255, ____screensContainer_2)); }
	inline Transform_t3275118058 * get__screensContainer_2() const { return ____screensContainer_2; }
	inline Transform_t3275118058 ** get_address_of__screensContainer_2() { return &____screensContainer_2; }
	inline void set__screensContainer_2(Transform_t3275118058 * value)
	{
		____screensContainer_2 = value;
		Il2CppCodeGenWriteBarrier(&____screensContainer_2, value);
	}

	inline static int32_t get_offset_of__screens_3() { return static_cast<int32_t>(offsetof(VerticalScrollSnap_t4045580255, ____screens_3)); }
	inline int32_t get__screens_3() const { return ____screens_3; }
	inline int32_t* get_address_of__screens_3() { return &____screens_3; }
	inline void set__screens_3(int32_t value)
	{
		____screens_3 = value;
	}

	inline static int32_t get_offset_of__startingScreen_4() { return static_cast<int32_t>(offsetof(VerticalScrollSnap_t4045580255, ____startingScreen_4)); }
	inline int32_t get__startingScreen_4() const { return ____startingScreen_4; }
	inline int32_t* get_address_of__startingScreen_4() { return &____startingScreen_4; }
	inline void set__startingScreen_4(int32_t value)
	{
		____startingScreen_4 = value;
	}

	inline static int32_t get_offset_of__fastSwipeTimer_5() { return static_cast<int32_t>(offsetof(VerticalScrollSnap_t4045580255, ____fastSwipeTimer_5)); }
	inline bool get__fastSwipeTimer_5() const { return ____fastSwipeTimer_5; }
	inline bool* get_address_of__fastSwipeTimer_5() { return &____fastSwipeTimer_5; }
	inline void set__fastSwipeTimer_5(bool value)
	{
		____fastSwipeTimer_5 = value;
	}

	inline static int32_t get_offset_of__fastSwipeCounter_6() { return static_cast<int32_t>(offsetof(VerticalScrollSnap_t4045580255, ____fastSwipeCounter_6)); }
	inline int32_t get__fastSwipeCounter_6() const { return ____fastSwipeCounter_6; }
	inline int32_t* get_address_of__fastSwipeCounter_6() { return &____fastSwipeCounter_6; }
	inline void set__fastSwipeCounter_6(int32_t value)
	{
		____fastSwipeCounter_6 = value;
	}

	inline static int32_t get_offset_of__fastSwipeTarget_7() { return static_cast<int32_t>(offsetof(VerticalScrollSnap_t4045580255, ____fastSwipeTarget_7)); }
	inline int32_t get__fastSwipeTarget_7() const { return ____fastSwipeTarget_7; }
	inline int32_t* get_address_of__fastSwipeTarget_7() { return &____fastSwipeTarget_7; }
	inline void set__fastSwipeTarget_7(int32_t value)
	{
		____fastSwipeTarget_7 = value;
	}

	inline static int32_t get_offset_of__positions_8() { return static_cast<int32_t>(offsetof(VerticalScrollSnap_t4045580255, ____positions_8)); }
	inline List_1_t1612828712 * get__positions_8() const { return ____positions_8; }
	inline List_1_t1612828712 ** get_address_of__positions_8() { return &____positions_8; }
	inline void set__positions_8(List_1_t1612828712 * value)
	{
		____positions_8 = value;
		Il2CppCodeGenWriteBarrier(&____positions_8, value);
	}

	inline static int32_t get_offset_of__scroll_rect_9() { return static_cast<int32_t>(offsetof(VerticalScrollSnap_t4045580255, ____scroll_rect_9)); }
	inline ScrollRect_t1199013257 * get__scroll_rect_9() const { return ____scroll_rect_9; }
	inline ScrollRect_t1199013257 ** get_address_of__scroll_rect_9() { return &____scroll_rect_9; }
	inline void set__scroll_rect_9(ScrollRect_t1199013257 * value)
	{
		____scroll_rect_9 = value;
		Il2CppCodeGenWriteBarrier(&____scroll_rect_9, value);
	}

	inline static int32_t get_offset_of__lerp_target_10() { return static_cast<int32_t>(offsetof(VerticalScrollSnap_t4045580255, ____lerp_target_10)); }
	inline Vector3_t2243707580  get__lerp_target_10() const { return ____lerp_target_10; }
	inline Vector3_t2243707580 * get_address_of__lerp_target_10() { return &____lerp_target_10; }
	inline void set__lerp_target_10(Vector3_t2243707580  value)
	{
		____lerp_target_10 = value;
	}

	inline static int32_t get_offset_of__lerp_11() { return static_cast<int32_t>(offsetof(VerticalScrollSnap_t4045580255, ____lerp_11)); }
	inline bool get__lerp_11() const { return ____lerp_11; }
	inline bool* get_address_of__lerp_11() { return &____lerp_11; }
	inline void set__lerp_11(bool value)
	{
		____lerp_11 = value;
	}

	inline static int32_t get_offset_of__containerSize_12() { return static_cast<int32_t>(offsetof(VerticalScrollSnap_t4045580255, ____containerSize_12)); }
	inline int32_t get__containerSize_12() const { return ____containerSize_12; }
	inline int32_t* get_address_of__containerSize_12() { return &____containerSize_12; }
	inline void set__containerSize_12(int32_t value)
	{
		____containerSize_12 = value;
	}

	inline static int32_t get_offset_of_Pagination_13() { return static_cast<int32_t>(offsetof(VerticalScrollSnap_t4045580255, ___Pagination_13)); }
	inline GameObject_t1756533147 * get_Pagination_13() const { return ___Pagination_13; }
	inline GameObject_t1756533147 ** get_address_of_Pagination_13() { return &___Pagination_13; }
	inline void set_Pagination_13(GameObject_t1756533147 * value)
	{
		___Pagination_13 = value;
		Il2CppCodeGenWriteBarrier(&___Pagination_13, value);
	}

	inline static int32_t get_offset_of_NextButton_14() { return static_cast<int32_t>(offsetof(VerticalScrollSnap_t4045580255, ___NextButton_14)); }
	inline GameObject_t1756533147 * get_NextButton_14() const { return ___NextButton_14; }
	inline GameObject_t1756533147 ** get_address_of_NextButton_14() { return &___NextButton_14; }
	inline void set_NextButton_14(GameObject_t1756533147 * value)
	{
		___NextButton_14 = value;
		Il2CppCodeGenWriteBarrier(&___NextButton_14, value);
	}

	inline static int32_t get_offset_of_PrevButton_15() { return static_cast<int32_t>(offsetof(VerticalScrollSnap_t4045580255, ___PrevButton_15)); }
	inline GameObject_t1756533147 * get_PrevButton_15() const { return ___PrevButton_15; }
	inline GameObject_t1756533147 ** get_address_of_PrevButton_15() { return &___PrevButton_15; }
	inline void set_PrevButton_15(GameObject_t1756533147 * value)
	{
		___PrevButton_15 = value;
		Il2CppCodeGenWriteBarrier(&___PrevButton_15, value);
	}

	inline static int32_t get_offset_of_UseFastSwipe_16() { return static_cast<int32_t>(offsetof(VerticalScrollSnap_t4045580255, ___UseFastSwipe_16)); }
	inline bool get_UseFastSwipe_16() const { return ___UseFastSwipe_16; }
	inline bool* get_address_of_UseFastSwipe_16() { return &___UseFastSwipe_16; }
	inline void set_UseFastSwipe_16(bool value)
	{
		___UseFastSwipe_16 = value;
	}

	inline static int32_t get_offset_of_FastSwipeThreshold_17() { return static_cast<int32_t>(offsetof(VerticalScrollSnap_t4045580255, ___FastSwipeThreshold_17)); }
	inline int32_t get_FastSwipeThreshold_17() const { return ___FastSwipeThreshold_17; }
	inline int32_t* get_address_of_FastSwipeThreshold_17() { return &___FastSwipeThreshold_17; }
	inline void set_FastSwipeThreshold_17(int32_t value)
	{
		___FastSwipeThreshold_17 = value;
	}

	inline static int32_t get_offset_of__startDrag_18() { return static_cast<int32_t>(offsetof(VerticalScrollSnap_t4045580255, ____startDrag_18)); }
	inline bool get__startDrag_18() const { return ____startDrag_18; }
	inline bool* get_address_of__startDrag_18() { return &____startDrag_18; }
	inline void set__startDrag_18(bool value)
	{
		____startDrag_18 = value;
	}

	inline static int32_t get_offset_of__startPosition_19() { return static_cast<int32_t>(offsetof(VerticalScrollSnap_t4045580255, ____startPosition_19)); }
	inline Vector3_t2243707580  get__startPosition_19() const { return ____startPosition_19; }
	inline Vector3_t2243707580 * get_address_of__startPosition_19() { return &____startPosition_19; }
	inline void set__startPosition_19(Vector3_t2243707580  value)
	{
		____startPosition_19 = value;
	}

	inline static int32_t get_offset_of__currentScreen_20() { return static_cast<int32_t>(offsetof(VerticalScrollSnap_t4045580255, ____currentScreen_20)); }
	inline int32_t get__currentScreen_20() const { return ____currentScreen_20; }
	inline int32_t* get_address_of__currentScreen_20() { return &____currentScreen_20; }
	inline void set__currentScreen_20(int32_t value)
	{
		____currentScreen_20 = value;
	}

	inline static int32_t get_offset_of_fastSwipe_21() { return static_cast<int32_t>(offsetof(VerticalScrollSnap_t4045580255, ___fastSwipe_21)); }
	inline bool get_fastSwipe_21() const { return ___fastSwipe_21; }
	inline bool* get_address_of_fastSwipe_21() { return &___fastSwipe_21; }
	inline void set_fastSwipe_21(bool value)
	{
		___fastSwipe_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
