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
// UnityEngine.Collider
struct Collider_t3497673348;
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

// Enemy
struct  Enemy_t1088811588  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Enemy::destroy
	GameObject_t1756533147 * ___destroy_2;
	// UnityEngine.GameObject Enemy::GM
	GameObject_t1756533147 * ___GM_3;
	// UnityEngine.GameObject Enemy::player
	GameObject_t1756533147 * ___player_4;
	// UnityEngine.Vector3 Enemy::direction
	Vector3_t2243707580  ___direction_5;
	// UnityEngine.Collider Enemy::col
	Collider_t3497673348 * ___col_6;
	// UnityEngine.TextMesh Enemy::enemyLevel
	TextMesh_t1641806576 * ___enemyLevel_7;
	// System.Int32 Enemy::HP
	int32_t ___HP_8;
	// System.Int32 Enemy::isStraihgt
	int32_t ___isStraihgt_9;
	// System.Single Enemy::speed
	float ___speed_10;
	// System.Boolean Enemy::isChase
	bool ___isChase_11;
	// UnityEngine.AudioSource Enemy::sound
	AudioSource_t1135106623 * ___sound_12;

public:
	inline static int32_t get_offset_of_destroy_2() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___destroy_2)); }
	inline GameObject_t1756533147 * get_destroy_2() const { return ___destroy_2; }
	inline GameObject_t1756533147 ** get_address_of_destroy_2() { return &___destroy_2; }
	inline void set_destroy_2(GameObject_t1756533147 * value)
	{
		___destroy_2 = value;
		Il2CppCodeGenWriteBarrier(&___destroy_2, value);
	}

	inline static int32_t get_offset_of_GM_3() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___GM_3)); }
	inline GameObject_t1756533147 * get_GM_3() const { return ___GM_3; }
	inline GameObject_t1756533147 ** get_address_of_GM_3() { return &___GM_3; }
	inline void set_GM_3(GameObject_t1756533147 * value)
	{
		___GM_3 = value;
		Il2CppCodeGenWriteBarrier(&___GM_3, value);
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___player_4)); }
	inline GameObject_t1756533147 * get_player_4() const { return ___player_4; }
	inline GameObject_t1756533147 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t1756533147 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}

	inline static int32_t get_offset_of_direction_5() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___direction_5)); }
	inline Vector3_t2243707580  get_direction_5() const { return ___direction_5; }
	inline Vector3_t2243707580 * get_address_of_direction_5() { return &___direction_5; }
	inline void set_direction_5(Vector3_t2243707580  value)
	{
		___direction_5 = value;
	}

	inline static int32_t get_offset_of_col_6() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___col_6)); }
	inline Collider_t3497673348 * get_col_6() const { return ___col_6; }
	inline Collider_t3497673348 ** get_address_of_col_6() { return &___col_6; }
	inline void set_col_6(Collider_t3497673348 * value)
	{
		___col_6 = value;
		Il2CppCodeGenWriteBarrier(&___col_6, value);
	}

	inline static int32_t get_offset_of_enemyLevel_7() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___enemyLevel_7)); }
	inline TextMesh_t1641806576 * get_enemyLevel_7() const { return ___enemyLevel_7; }
	inline TextMesh_t1641806576 ** get_address_of_enemyLevel_7() { return &___enemyLevel_7; }
	inline void set_enemyLevel_7(TextMesh_t1641806576 * value)
	{
		___enemyLevel_7 = value;
		Il2CppCodeGenWriteBarrier(&___enemyLevel_7, value);
	}

	inline static int32_t get_offset_of_HP_8() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___HP_8)); }
	inline int32_t get_HP_8() const { return ___HP_8; }
	inline int32_t* get_address_of_HP_8() { return &___HP_8; }
	inline void set_HP_8(int32_t value)
	{
		___HP_8 = value;
	}

	inline static int32_t get_offset_of_isStraihgt_9() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___isStraihgt_9)); }
	inline int32_t get_isStraihgt_9() const { return ___isStraihgt_9; }
	inline int32_t* get_address_of_isStraihgt_9() { return &___isStraihgt_9; }
	inline void set_isStraihgt_9(int32_t value)
	{
		___isStraihgt_9 = value;
	}

	inline static int32_t get_offset_of_speed_10() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___speed_10)); }
	inline float get_speed_10() const { return ___speed_10; }
	inline float* get_address_of_speed_10() { return &___speed_10; }
	inline void set_speed_10(float value)
	{
		___speed_10 = value;
	}

	inline static int32_t get_offset_of_isChase_11() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___isChase_11)); }
	inline bool get_isChase_11() const { return ___isChase_11; }
	inline bool* get_address_of_isChase_11() { return &___isChase_11; }
	inline void set_isChase_11(bool value)
	{
		___isChase_11 = value;
	}

	inline static int32_t get_offset_of_sound_12() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___sound_12)); }
	inline AudioSource_t1135106623 * get_sound_12() const { return ___sound_12; }
	inline AudioSource_t1135106623 ** get_address_of_sound_12() { return &___sound_12; }
	inline void set_sound_12(AudioSource_t1135106623 * value)
	{
		___sound_12 = value;
		Il2CppCodeGenWriteBarrier(&___sound_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
