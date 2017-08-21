#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.UI.Extensions.DropDownListItem
struct DropDownListItem_t1818608950;
// System.Collections.Generic.List`1<UnityEngine.UI.Extensions.DropDownListItem>
struct List_1_t1187730082;
// System.Action`1<System.Int32>
struct Action_1_t1873676830;
// UnityEngine.UI.Extensions.DropDownListButton
struct DropDownListButton_t188411761;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.Canvas
struct Canvas_t209405766;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t1199013257;
// System.Collections.Generic.List`1<UnityEngine.UI.Extensions.DropDownListButton>
struct List_1_t3852500189;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Extensions.DropDownList
struct  DropDownList_t2509108757  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Color UnityEngine.UI.Extensions.DropDownList::disabledTextColor
	Color_t2020392075  ___disabledTextColor_2;
	// UnityEngine.UI.Extensions.DropDownListItem UnityEngine.UI.Extensions.DropDownList::<SelectedItem>k__BackingField
	DropDownListItem_t1818608950 * ___U3CSelectedItemU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.UI.Extensions.DropDownListItem> UnityEngine.UI.Extensions.DropDownList::Items
	List_1_t1187730082 * ___Items_4;
	// System.Action`1<System.Int32> UnityEngine.UI.Extensions.DropDownList::OnSelectionChanged
	Action_1_t1873676830 * ___OnSelectionChanged_5;
	// System.Boolean UnityEngine.UI.Extensions.DropDownList::_isPanelActive
	bool ____isPanelActive_6;
	// System.Boolean UnityEngine.UI.Extensions.DropDownList::_hasDrawnOnce
	bool ____hasDrawnOnce_7;
	// UnityEngine.UI.Extensions.DropDownListButton UnityEngine.UI.Extensions.DropDownList::_mainButton
	DropDownListButton_t188411761 * ____mainButton_8;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.DropDownList::_rectTransform
	RectTransform_t3349966182 * ____rectTransform_9;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.DropDownList::_overlayRT
	RectTransform_t3349966182 * ____overlayRT_10;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.DropDownList::_scrollPanelRT
	RectTransform_t3349966182 * ____scrollPanelRT_11;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.DropDownList::_scrollBarRT
	RectTransform_t3349966182 * ____scrollBarRT_12;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.DropDownList::_slidingAreaRT
	RectTransform_t3349966182 * ____slidingAreaRT_13;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.DropDownList::_itemsPanelRT
	RectTransform_t3349966182 * ____itemsPanelRT_14;
	// UnityEngine.Canvas UnityEngine.UI.Extensions.DropDownList::_canvas
	Canvas_t209405766 * ____canvas_15;
	// UnityEngine.RectTransform UnityEngine.UI.Extensions.DropDownList::_canvasRT
	RectTransform_t3349966182 * ____canvasRT_16;
	// UnityEngine.UI.ScrollRect UnityEngine.UI.Extensions.DropDownList::_scrollRect
	ScrollRect_t1199013257 * ____scrollRect_17;
	// System.Collections.Generic.List`1<UnityEngine.UI.Extensions.DropDownListButton> UnityEngine.UI.Extensions.DropDownList::_panelItems
	List_1_t3852500189 * ____panelItems_18;
	// UnityEngine.GameObject UnityEngine.UI.Extensions.DropDownList::_itemTemplate
	GameObject_t1756533147 * ____itemTemplate_19;
	// System.Single UnityEngine.UI.Extensions.DropDownList::_scrollBarWidth
	float ____scrollBarWidth_20;
	// System.Int32 UnityEngine.UI.Extensions.DropDownList::_selectedIndex
	int32_t ____selectedIndex_21;
	// System.Int32 UnityEngine.UI.Extensions.DropDownList::_itemsToDisplay
	int32_t ____itemsToDisplay_22;

public:
	inline static int32_t get_offset_of_disabledTextColor_2() { return static_cast<int32_t>(offsetof(DropDownList_t2509108757, ___disabledTextColor_2)); }
	inline Color_t2020392075  get_disabledTextColor_2() const { return ___disabledTextColor_2; }
	inline Color_t2020392075 * get_address_of_disabledTextColor_2() { return &___disabledTextColor_2; }
	inline void set_disabledTextColor_2(Color_t2020392075  value)
	{
		___disabledTextColor_2 = value;
	}

	inline static int32_t get_offset_of_U3CSelectedItemU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DropDownList_t2509108757, ___U3CSelectedItemU3Ek__BackingField_3)); }
	inline DropDownListItem_t1818608950 * get_U3CSelectedItemU3Ek__BackingField_3() const { return ___U3CSelectedItemU3Ek__BackingField_3; }
	inline DropDownListItem_t1818608950 ** get_address_of_U3CSelectedItemU3Ek__BackingField_3() { return &___U3CSelectedItemU3Ek__BackingField_3; }
	inline void set_U3CSelectedItemU3Ek__BackingField_3(DropDownListItem_t1818608950 * value)
	{
		___U3CSelectedItemU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSelectedItemU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_Items_4() { return static_cast<int32_t>(offsetof(DropDownList_t2509108757, ___Items_4)); }
	inline List_1_t1187730082 * get_Items_4() const { return ___Items_4; }
	inline List_1_t1187730082 ** get_address_of_Items_4() { return &___Items_4; }
	inline void set_Items_4(List_1_t1187730082 * value)
	{
		___Items_4 = value;
		Il2CppCodeGenWriteBarrier(&___Items_4, value);
	}

	inline static int32_t get_offset_of_OnSelectionChanged_5() { return static_cast<int32_t>(offsetof(DropDownList_t2509108757, ___OnSelectionChanged_5)); }
	inline Action_1_t1873676830 * get_OnSelectionChanged_5() const { return ___OnSelectionChanged_5; }
	inline Action_1_t1873676830 ** get_address_of_OnSelectionChanged_5() { return &___OnSelectionChanged_5; }
	inline void set_OnSelectionChanged_5(Action_1_t1873676830 * value)
	{
		___OnSelectionChanged_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnSelectionChanged_5, value);
	}

	inline static int32_t get_offset_of__isPanelActive_6() { return static_cast<int32_t>(offsetof(DropDownList_t2509108757, ____isPanelActive_6)); }
	inline bool get__isPanelActive_6() const { return ____isPanelActive_6; }
	inline bool* get_address_of__isPanelActive_6() { return &____isPanelActive_6; }
	inline void set__isPanelActive_6(bool value)
	{
		____isPanelActive_6 = value;
	}

	inline static int32_t get_offset_of__hasDrawnOnce_7() { return static_cast<int32_t>(offsetof(DropDownList_t2509108757, ____hasDrawnOnce_7)); }
	inline bool get__hasDrawnOnce_7() const { return ____hasDrawnOnce_7; }
	inline bool* get_address_of__hasDrawnOnce_7() { return &____hasDrawnOnce_7; }
	inline void set__hasDrawnOnce_7(bool value)
	{
		____hasDrawnOnce_7 = value;
	}

	inline static int32_t get_offset_of__mainButton_8() { return static_cast<int32_t>(offsetof(DropDownList_t2509108757, ____mainButton_8)); }
	inline DropDownListButton_t188411761 * get__mainButton_8() const { return ____mainButton_8; }
	inline DropDownListButton_t188411761 ** get_address_of__mainButton_8() { return &____mainButton_8; }
	inline void set__mainButton_8(DropDownListButton_t188411761 * value)
	{
		____mainButton_8 = value;
		Il2CppCodeGenWriteBarrier(&____mainButton_8, value);
	}

	inline static int32_t get_offset_of__rectTransform_9() { return static_cast<int32_t>(offsetof(DropDownList_t2509108757, ____rectTransform_9)); }
	inline RectTransform_t3349966182 * get__rectTransform_9() const { return ____rectTransform_9; }
	inline RectTransform_t3349966182 ** get_address_of__rectTransform_9() { return &____rectTransform_9; }
	inline void set__rectTransform_9(RectTransform_t3349966182 * value)
	{
		____rectTransform_9 = value;
		Il2CppCodeGenWriteBarrier(&____rectTransform_9, value);
	}

	inline static int32_t get_offset_of__overlayRT_10() { return static_cast<int32_t>(offsetof(DropDownList_t2509108757, ____overlayRT_10)); }
	inline RectTransform_t3349966182 * get__overlayRT_10() const { return ____overlayRT_10; }
	inline RectTransform_t3349966182 ** get_address_of__overlayRT_10() { return &____overlayRT_10; }
	inline void set__overlayRT_10(RectTransform_t3349966182 * value)
	{
		____overlayRT_10 = value;
		Il2CppCodeGenWriteBarrier(&____overlayRT_10, value);
	}

	inline static int32_t get_offset_of__scrollPanelRT_11() { return static_cast<int32_t>(offsetof(DropDownList_t2509108757, ____scrollPanelRT_11)); }
	inline RectTransform_t3349966182 * get__scrollPanelRT_11() const { return ____scrollPanelRT_11; }
	inline RectTransform_t3349966182 ** get_address_of__scrollPanelRT_11() { return &____scrollPanelRT_11; }
	inline void set__scrollPanelRT_11(RectTransform_t3349966182 * value)
	{
		____scrollPanelRT_11 = value;
		Il2CppCodeGenWriteBarrier(&____scrollPanelRT_11, value);
	}

	inline static int32_t get_offset_of__scrollBarRT_12() { return static_cast<int32_t>(offsetof(DropDownList_t2509108757, ____scrollBarRT_12)); }
	inline RectTransform_t3349966182 * get__scrollBarRT_12() const { return ____scrollBarRT_12; }
	inline RectTransform_t3349966182 ** get_address_of__scrollBarRT_12() { return &____scrollBarRT_12; }
	inline void set__scrollBarRT_12(RectTransform_t3349966182 * value)
	{
		____scrollBarRT_12 = value;
		Il2CppCodeGenWriteBarrier(&____scrollBarRT_12, value);
	}

	inline static int32_t get_offset_of__slidingAreaRT_13() { return static_cast<int32_t>(offsetof(DropDownList_t2509108757, ____slidingAreaRT_13)); }
	inline RectTransform_t3349966182 * get__slidingAreaRT_13() const { return ____slidingAreaRT_13; }
	inline RectTransform_t3349966182 ** get_address_of__slidingAreaRT_13() { return &____slidingAreaRT_13; }
	inline void set__slidingAreaRT_13(RectTransform_t3349966182 * value)
	{
		____slidingAreaRT_13 = value;
		Il2CppCodeGenWriteBarrier(&____slidingAreaRT_13, value);
	}

	inline static int32_t get_offset_of__itemsPanelRT_14() { return static_cast<int32_t>(offsetof(DropDownList_t2509108757, ____itemsPanelRT_14)); }
	inline RectTransform_t3349966182 * get__itemsPanelRT_14() const { return ____itemsPanelRT_14; }
	inline RectTransform_t3349966182 ** get_address_of__itemsPanelRT_14() { return &____itemsPanelRT_14; }
	inline void set__itemsPanelRT_14(RectTransform_t3349966182 * value)
	{
		____itemsPanelRT_14 = value;
		Il2CppCodeGenWriteBarrier(&____itemsPanelRT_14, value);
	}

	inline static int32_t get_offset_of__canvas_15() { return static_cast<int32_t>(offsetof(DropDownList_t2509108757, ____canvas_15)); }
	inline Canvas_t209405766 * get__canvas_15() const { return ____canvas_15; }
	inline Canvas_t209405766 ** get_address_of__canvas_15() { return &____canvas_15; }
	inline void set__canvas_15(Canvas_t209405766 * value)
	{
		____canvas_15 = value;
		Il2CppCodeGenWriteBarrier(&____canvas_15, value);
	}

	inline static int32_t get_offset_of__canvasRT_16() { return static_cast<int32_t>(offsetof(DropDownList_t2509108757, ____canvasRT_16)); }
	inline RectTransform_t3349966182 * get__canvasRT_16() const { return ____canvasRT_16; }
	inline RectTransform_t3349966182 ** get_address_of__canvasRT_16() { return &____canvasRT_16; }
	inline void set__canvasRT_16(RectTransform_t3349966182 * value)
	{
		____canvasRT_16 = value;
		Il2CppCodeGenWriteBarrier(&____canvasRT_16, value);
	}

	inline static int32_t get_offset_of__scrollRect_17() { return static_cast<int32_t>(offsetof(DropDownList_t2509108757, ____scrollRect_17)); }
	inline ScrollRect_t1199013257 * get__scrollRect_17() const { return ____scrollRect_17; }
	inline ScrollRect_t1199013257 ** get_address_of__scrollRect_17() { return &____scrollRect_17; }
	inline void set__scrollRect_17(ScrollRect_t1199013257 * value)
	{
		____scrollRect_17 = value;
		Il2CppCodeGenWriteBarrier(&____scrollRect_17, value);
	}

	inline static int32_t get_offset_of__panelItems_18() { return static_cast<int32_t>(offsetof(DropDownList_t2509108757, ____panelItems_18)); }
	inline List_1_t3852500189 * get__panelItems_18() const { return ____panelItems_18; }
	inline List_1_t3852500189 ** get_address_of__panelItems_18() { return &____panelItems_18; }
	inline void set__panelItems_18(List_1_t3852500189 * value)
	{
		____panelItems_18 = value;
		Il2CppCodeGenWriteBarrier(&____panelItems_18, value);
	}

	inline static int32_t get_offset_of__itemTemplate_19() { return static_cast<int32_t>(offsetof(DropDownList_t2509108757, ____itemTemplate_19)); }
	inline GameObject_t1756533147 * get__itemTemplate_19() const { return ____itemTemplate_19; }
	inline GameObject_t1756533147 ** get_address_of__itemTemplate_19() { return &____itemTemplate_19; }
	inline void set__itemTemplate_19(GameObject_t1756533147 * value)
	{
		____itemTemplate_19 = value;
		Il2CppCodeGenWriteBarrier(&____itemTemplate_19, value);
	}

	inline static int32_t get_offset_of__scrollBarWidth_20() { return static_cast<int32_t>(offsetof(DropDownList_t2509108757, ____scrollBarWidth_20)); }
	inline float get__scrollBarWidth_20() const { return ____scrollBarWidth_20; }
	inline float* get_address_of__scrollBarWidth_20() { return &____scrollBarWidth_20; }
	inline void set__scrollBarWidth_20(float value)
	{
		____scrollBarWidth_20 = value;
	}

	inline static int32_t get_offset_of__selectedIndex_21() { return static_cast<int32_t>(offsetof(DropDownList_t2509108757, ____selectedIndex_21)); }
	inline int32_t get__selectedIndex_21() const { return ____selectedIndex_21; }
	inline int32_t* get_address_of__selectedIndex_21() { return &____selectedIndex_21; }
	inline void set__selectedIndex_21(int32_t value)
	{
		____selectedIndex_21 = value;
	}

	inline static int32_t get_offset_of__itemsToDisplay_22() { return static_cast<int32_t>(offsetof(DropDownList_t2509108757, ____itemsToDisplay_22)); }
	inline int32_t get__itemsToDisplay_22() const { return ____itemsToDisplay_22; }
	inline int32_t* get_address_of__itemsToDisplay_22() { return &____itemsToDisplay_22; }
	inline void set__itemsToDisplay_22(int32_t value)
	{
		____itemsToDisplay_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
