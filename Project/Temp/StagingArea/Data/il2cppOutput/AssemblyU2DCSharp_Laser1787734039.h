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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Laser
struct  Laser_t1787734039  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Laser::speed
	float ___speed_2;
	// UnityEngine.GameObject Laser::effect
	GameObject_t1756533147 * ___effect_3;
	// System.Int32 Laser::damage
	int32_t ___damage_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Laser_t1787734039, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_effect_3() { return static_cast<int32_t>(offsetof(Laser_t1787734039, ___effect_3)); }
	inline GameObject_t1756533147 * get_effect_3() const { return ___effect_3; }
	inline GameObject_t1756533147 ** get_address_of_effect_3() { return &___effect_3; }
	inline void set_effect_3(GameObject_t1756533147 * value)
	{
		___effect_3 = value;
		Il2CppCodeGenWriteBarrier(&___effect_3, value);
	}

	inline static int32_t get_offset_of_damage_4() { return static_cast<int32_t>(offsetof(Laser_t1787734039, ___damage_4)); }
	inline int32_t get_damage_4() const { return ___damage_4; }
	inline int32_t* get_address_of_damage_4() { return &___damage_4; }
	inline void set_damage_4(int32_t value)
	{
		___damage_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
