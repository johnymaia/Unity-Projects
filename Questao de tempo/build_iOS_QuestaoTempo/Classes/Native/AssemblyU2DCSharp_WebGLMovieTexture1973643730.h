#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebGLMovieTexture
struct  WebGLMovieTexture_t1973643730  : public Il2CppObject
{
public:
	// UnityEngine.Texture2D WebGLMovieTexture::m_Texture
	Texture2D_t3542995729 * ___m_Texture_0;
	// System.Int32 WebGLMovieTexture::m_Instance
	int32_t ___m_Instance_1;
	// System.Boolean WebGLMovieTexture::m_Loop
	bool ___m_Loop_2;

public:
	inline static int32_t get_offset_of_m_Texture_0() { return static_cast<int32_t>(offsetof(WebGLMovieTexture_t1973643730, ___m_Texture_0)); }
	inline Texture2D_t3542995729 * get_m_Texture_0() const { return ___m_Texture_0; }
	inline Texture2D_t3542995729 ** get_address_of_m_Texture_0() { return &___m_Texture_0; }
	inline void set_m_Texture_0(Texture2D_t3542995729 * value)
	{
		___m_Texture_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Texture_0, value);
	}

	inline static int32_t get_offset_of_m_Instance_1() { return static_cast<int32_t>(offsetof(WebGLMovieTexture_t1973643730, ___m_Instance_1)); }
	inline int32_t get_m_Instance_1() const { return ___m_Instance_1; }
	inline int32_t* get_address_of_m_Instance_1() { return &___m_Instance_1; }
	inline void set_m_Instance_1(int32_t value)
	{
		___m_Instance_1 = value;
	}

	inline static int32_t get_offset_of_m_Loop_2() { return static_cast<int32_t>(offsetof(WebGLMovieTexture_t1973643730, ___m_Loop_2)); }
	inline bool get_m_Loop_2() const { return ___m_Loop_2; }
	inline bool* get_address_of_m_Loop_2() { return &___m_Loop_2; }
	inline void set_m_Loop_2(bool value)
	{
		___m_Loop_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
