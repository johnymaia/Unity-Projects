#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3296560743;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Card
struct  Card_t34057406  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Card::id
	int32_t ___id_2;
	// UnityEngine.Sprite Card::frontSprite
	Sprite_t309593783 * ___frontSprite_3;
	// UnityEngine.Sprite Card::backSprite
	Sprite_t309593783 * ___backSprite_4;
	// System.Boolean Card::cardHasText
	bool ___cardHasText_5;
	// UnityEngine.UI.Text Card::cardText
	Text_t356221433 * ___cardText_6;
	// System.Boolean Card::isOpening
	bool ___isOpening_7;
	// UnityEngine.Animator Card::anim
	Animator_t69676727 * ___anim_8;
	// UnityEngine.UI.Image Card::img
	Image_t2042527209 * ___img_9;
	// UnityEngine.CanvasGroup Card::cg
	CanvasGroup_t3296560743 * ___cg_10;

public:
	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(Card_t34057406, ___id_2)); }
	inline int32_t get_id_2() const { return ___id_2; }
	inline int32_t* get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(int32_t value)
	{
		___id_2 = value;
	}

	inline static int32_t get_offset_of_frontSprite_3() { return static_cast<int32_t>(offsetof(Card_t34057406, ___frontSprite_3)); }
	inline Sprite_t309593783 * get_frontSprite_3() const { return ___frontSprite_3; }
	inline Sprite_t309593783 ** get_address_of_frontSprite_3() { return &___frontSprite_3; }
	inline void set_frontSprite_3(Sprite_t309593783 * value)
	{
		___frontSprite_3 = value;
		Il2CppCodeGenWriteBarrier(&___frontSprite_3, value);
	}

	inline static int32_t get_offset_of_backSprite_4() { return static_cast<int32_t>(offsetof(Card_t34057406, ___backSprite_4)); }
	inline Sprite_t309593783 * get_backSprite_4() const { return ___backSprite_4; }
	inline Sprite_t309593783 ** get_address_of_backSprite_4() { return &___backSprite_4; }
	inline void set_backSprite_4(Sprite_t309593783 * value)
	{
		___backSprite_4 = value;
		Il2CppCodeGenWriteBarrier(&___backSprite_4, value);
	}

	inline static int32_t get_offset_of_cardHasText_5() { return static_cast<int32_t>(offsetof(Card_t34057406, ___cardHasText_5)); }
	inline bool get_cardHasText_5() const { return ___cardHasText_5; }
	inline bool* get_address_of_cardHasText_5() { return &___cardHasText_5; }
	inline void set_cardHasText_5(bool value)
	{
		___cardHasText_5 = value;
	}

	inline static int32_t get_offset_of_cardText_6() { return static_cast<int32_t>(offsetof(Card_t34057406, ___cardText_6)); }
	inline Text_t356221433 * get_cardText_6() const { return ___cardText_6; }
	inline Text_t356221433 ** get_address_of_cardText_6() { return &___cardText_6; }
	inline void set_cardText_6(Text_t356221433 * value)
	{
		___cardText_6 = value;
		Il2CppCodeGenWriteBarrier(&___cardText_6, value);
	}

	inline static int32_t get_offset_of_isOpening_7() { return static_cast<int32_t>(offsetof(Card_t34057406, ___isOpening_7)); }
	inline bool get_isOpening_7() const { return ___isOpening_7; }
	inline bool* get_address_of_isOpening_7() { return &___isOpening_7; }
	inline void set_isOpening_7(bool value)
	{
		___isOpening_7 = value;
	}

	inline static int32_t get_offset_of_anim_8() { return static_cast<int32_t>(offsetof(Card_t34057406, ___anim_8)); }
	inline Animator_t69676727 * get_anim_8() const { return ___anim_8; }
	inline Animator_t69676727 ** get_address_of_anim_8() { return &___anim_8; }
	inline void set_anim_8(Animator_t69676727 * value)
	{
		___anim_8 = value;
		Il2CppCodeGenWriteBarrier(&___anim_8, value);
	}

	inline static int32_t get_offset_of_img_9() { return static_cast<int32_t>(offsetof(Card_t34057406, ___img_9)); }
	inline Image_t2042527209 * get_img_9() const { return ___img_9; }
	inline Image_t2042527209 ** get_address_of_img_9() { return &___img_9; }
	inline void set_img_9(Image_t2042527209 * value)
	{
		___img_9 = value;
		Il2CppCodeGenWriteBarrier(&___img_9, value);
	}

	inline static int32_t get_offset_of_cg_10() { return static_cast<int32_t>(offsetof(Card_t34057406, ___cg_10)); }
	inline CanvasGroup_t3296560743 * get_cg_10() const { return ___cg_10; }
	inline CanvasGroup_t3296560743 ** get_address_of_cg_10() { return &___cg_10; }
	inline void set_cg_10(CanvasGroup_t3296560743 * value)
	{
		___cg_10 = value;
		Il2CppCodeGenWriteBarrier(&___cg_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
