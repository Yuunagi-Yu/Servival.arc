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
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FollowCamera
struct  FollowCamera_t821242602  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject FollowCamera::Target
	GameObject_t1756533147 * ___Target_2;
	// UnityEngine.Vector3 FollowCamera::targetRelative
	Vector3_t2243707580  ___targetRelative_3;
	// UnityEngine.Vector3 FollowCamera::newPosition
	Vector3_t2243707580  ___newPosition_4;

public:
	inline static int32_t get_offset_of_Target_2() { return static_cast<int32_t>(offsetof(FollowCamera_t821242602, ___Target_2)); }
	inline GameObject_t1756533147 * get_Target_2() const { return ___Target_2; }
	inline GameObject_t1756533147 ** get_address_of_Target_2() { return &___Target_2; }
	inline void set_Target_2(GameObject_t1756533147 * value)
	{
		___Target_2 = value;
		Il2CppCodeGenWriteBarrier(&___Target_2, value);
	}

	inline static int32_t get_offset_of_targetRelative_3() { return static_cast<int32_t>(offsetof(FollowCamera_t821242602, ___targetRelative_3)); }
	inline Vector3_t2243707580  get_targetRelative_3() const { return ___targetRelative_3; }
	inline Vector3_t2243707580 * get_address_of_targetRelative_3() { return &___targetRelative_3; }
	inline void set_targetRelative_3(Vector3_t2243707580  value)
	{
		___targetRelative_3 = value;
	}

	inline static int32_t get_offset_of_newPosition_4() { return static_cast<int32_t>(offsetof(FollowCamera_t821242602, ___newPosition_4)); }
	inline Vector3_t2243707580  get_newPosition_4() const { return ___newPosition_4; }
	inline Vector3_t2243707580 * get_address_of_newPosition_4() { return &___newPosition_4; }
	inline void set_newPosition_4(Vector3_t2243707580  value)
	{
		___newPosition_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
