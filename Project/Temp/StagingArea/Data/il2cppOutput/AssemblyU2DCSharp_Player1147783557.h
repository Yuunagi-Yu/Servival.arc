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
// UnityEngine.TextMesh
struct TextMesh_t1641806576;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t1147783557  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Player::speed
	float ___speed_2;
	// UnityEngine.GameObject Player::laser1
	GameObject_t1756533147 * ___laser1_3;
	// UnityEngine.GameObject Player::HealHP
	GameObject_t1756533147 * ___HealHP_4;
	// UnityEngine.GameObject Player::destroy
	GameObject_t1756533147 * ___destroy_5;
	// UnityEngine.Vector3 Player::moveDirection
	Vector3_t2243707580  ___moveDirection_6;
	// UnityEngine.Vector3 Player::targetPoint
	Vector3_t2243707580  ___targetPoint_7;
	// System.Int32 Player::HP
	int32_t ___HP_8;
	// UnityEngine.TextMesh Player::textMesh
	TextMesh_t1641806576 * ___textMesh_9;
	// System.Boolean Player::shot
	bool ___shot_10;
	// UnityEngine.AudioSource Player::sound
	AudioSource_t1135106623 * ___sound_11;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_laser1_3() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___laser1_3)); }
	inline GameObject_t1756533147 * get_laser1_3() const { return ___laser1_3; }
	inline GameObject_t1756533147 ** get_address_of_laser1_3() { return &___laser1_3; }
	inline void set_laser1_3(GameObject_t1756533147 * value)
	{
		___laser1_3 = value;
		Il2CppCodeGenWriteBarrier(&___laser1_3, value);
	}

	inline static int32_t get_offset_of_HealHP_4() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___HealHP_4)); }
	inline GameObject_t1756533147 * get_HealHP_4() const { return ___HealHP_4; }
	inline GameObject_t1756533147 ** get_address_of_HealHP_4() { return &___HealHP_4; }
	inline void set_HealHP_4(GameObject_t1756533147 * value)
	{
		___HealHP_4 = value;
		Il2CppCodeGenWriteBarrier(&___HealHP_4, value);
	}

	inline static int32_t get_offset_of_destroy_5() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___destroy_5)); }
	inline GameObject_t1756533147 * get_destroy_5() const { return ___destroy_5; }
	inline GameObject_t1756533147 ** get_address_of_destroy_5() { return &___destroy_5; }
	inline void set_destroy_5(GameObject_t1756533147 * value)
	{
		___destroy_5 = value;
		Il2CppCodeGenWriteBarrier(&___destroy_5, value);
	}

	inline static int32_t get_offset_of_moveDirection_6() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___moveDirection_6)); }
	inline Vector3_t2243707580  get_moveDirection_6() const { return ___moveDirection_6; }
	inline Vector3_t2243707580 * get_address_of_moveDirection_6() { return &___moveDirection_6; }
	inline void set_moveDirection_6(Vector3_t2243707580  value)
	{
		___moveDirection_6 = value;
	}

	inline static int32_t get_offset_of_targetPoint_7() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___targetPoint_7)); }
	inline Vector3_t2243707580  get_targetPoint_7() const { return ___targetPoint_7; }
	inline Vector3_t2243707580 * get_address_of_targetPoint_7() { return &___targetPoint_7; }
	inline void set_targetPoint_7(Vector3_t2243707580  value)
	{
		___targetPoint_7 = value;
	}

	inline static int32_t get_offset_of_HP_8() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___HP_8)); }
	inline int32_t get_HP_8() const { return ___HP_8; }
	inline int32_t* get_address_of_HP_8() { return &___HP_8; }
	inline void set_HP_8(int32_t value)
	{
		___HP_8 = value;
	}

	inline static int32_t get_offset_of_textMesh_9() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___textMesh_9)); }
	inline TextMesh_t1641806576 * get_textMesh_9() const { return ___textMesh_9; }
	inline TextMesh_t1641806576 ** get_address_of_textMesh_9() { return &___textMesh_9; }
	inline void set_textMesh_9(TextMesh_t1641806576 * value)
	{
		___textMesh_9 = value;
		Il2CppCodeGenWriteBarrier(&___textMesh_9, value);
	}

	inline static int32_t get_offset_of_shot_10() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___shot_10)); }
	inline bool get_shot_10() const { return ___shot_10; }
	inline bool* get_address_of_shot_10() { return &___shot_10; }
	inline void set_shot_10(bool value)
	{
		___shot_10 = value;
	}

	inline static int32_t get_offset_of_sound_11() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___sound_11)); }
	inline AudioSource_t1135106623 * get_sound_11() const { return ___sound_11; }
	inline AudioSource_t1135106623 ** get_address_of_sound_11() { return &___sound_11; }
	inline void set_sound_11(AudioSource_t1135106623 * value)
	{
		___sound_11 = value;
		Il2CppCodeGenWriteBarrier(&___sound_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
