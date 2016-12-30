#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GuideButton
struct  GuideButton_t1538277420  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GuideButton::guide
	GameObject_t1756533147 * ___guide_2;
	// UnityEngine.GameObject GuideButton::soundBase
	GameObject_t1756533147 * ___soundBase_3;
	// System.Boolean GuideButton::on_off
	bool ___on_off_4;
	// UnityEngine.AudioSource GuideButton::clickSourd
	AudioSource_t1135106623 * ___clickSourd_5;

public:
	inline static int32_t get_offset_of_guide_2() { return static_cast<int32_t>(offsetof(GuideButton_t1538277420, ___guide_2)); }
	inline GameObject_t1756533147 * get_guide_2() const { return ___guide_2; }
	inline GameObject_t1756533147 ** get_address_of_guide_2() { return &___guide_2; }
	inline void set_guide_2(GameObject_t1756533147 * value)
	{
		___guide_2 = value;
		Il2CppCodeGenWriteBarrier(&___guide_2, value);
	}

	inline static int32_t get_offset_of_soundBase_3() { return static_cast<int32_t>(offsetof(GuideButton_t1538277420, ___soundBase_3)); }
	inline GameObject_t1756533147 * get_soundBase_3() const { return ___soundBase_3; }
	inline GameObject_t1756533147 ** get_address_of_soundBase_3() { return &___soundBase_3; }
	inline void set_soundBase_3(GameObject_t1756533147 * value)
	{
		___soundBase_3 = value;
		Il2CppCodeGenWriteBarrier(&___soundBase_3, value);
	}

	inline static int32_t get_offset_of_on_off_4() { return static_cast<int32_t>(offsetof(GuideButton_t1538277420, ___on_off_4)); }
	inline bool get_on_off_4() const { return ___on_off_4; }
	inline bool* get_address_of_on_off_4() { return &___on_off_4; }
	inline void set_on_off_4(bool value)
	{
		___on_off_4 = value;
	}

	inline static int32_t get_offset_of_clickSourd_5() { return static_cast<int32_t>(offsetof(GuideButton_t1538277420, ___clickSourd_5)); }
	inline AudioSource_t1135106623 * get_clickSourd_5() const { return ___clickSourd_5; }
	inline AudioSource_t1135106623 ** get_address_of_clickSourd_5() { return &___clickSourd_5; }
	inline void set_clickSourd_5(AudioSource_t1135106623 * value)
	{
		___clickSourd_5 = value;
		Il2CppCodeGenWriteBarrier(&___clickSourd_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
