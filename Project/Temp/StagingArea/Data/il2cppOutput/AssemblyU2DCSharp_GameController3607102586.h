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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.Audio.AudioMixer
struct AudioMixer_t3244290001;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t3607102586  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GameController::enemy
	GameObject_t1756533147 * ___enemy_2;
	// UnityEngine.GameObject GameController::healHP
	GameObject_t1756533147 * ___healHP_3;
	// UnityEngine.GameObject GameController::levelUI
	GameObject_t1756533147 * ___levelUI_4;
	// UnityEngine.GameObject GameController::scoreUI
	GameObject_t1756533147 * ___scoreUI_5;
	// UnityEngine.GameObject GameController::upUI
	GameObject_t1756533147 * ___upUI_6;
	// UnityEngine.GameObject GameController::resultUI
	GameObject_t1756533147 * ___resultUI_7;
	// UnityEngine.GameObject GameController::resultScoreUI
	GameObject_t1756533147 * ___resultScoreUI_8;
	// UnityEngine.GameObject GameController::highScoreUI
	GameObject_t1756533147 * ___highScoreUI_9;
	// UnityEngine.GameObject GameController::upTarget1
	GameObject_t1756533147 * ___upTarget1_10;
	// UnityEngine.GameObject GameController::upTarget2
	GameObject_t1756533147 * ___upTarget2_11;
	// UnityEngine.GameObject GameController::upTarget3
	GameObject_t1756533147 * ___upTarget3_12;
	// UnityEngine.GameObject GameController::levelTarget1
	GameObject_t1756533147 * ___levelTarget1_13;
	// UnityEngine.GameObject GameController::levelTarget2
	GameObject_t1756533147 * ___levelTarget2_14;
	// UnityEngine.GameObject GameController::BGMBox
	GameObject_t1756533147 * ___BGMBox_15;
	// UnityEngine.GameObject GameController::player
	GameObject_t1756533147 * ___player_16;
	// UnityEngine.GameObject GameController::HPBall
	GameObject_t1756533147 * ___HPBall_17;
	// UnityEngine.GameObject[] GameController::enemys
	GameObjectU5BU5D_t3057952154* ___enemys_18;
	// UnityEngine.AudioSource GameController::sound_levelUP
	AudioSource_t1135106623 * ___sound_levelUP_19;
	// UnityEngine.AudioSource GameController::sound_Spawn
	AudioSource_t1135106623 * ___sound_Spawn_20;
	// UnityEngine.Audio.AudioMixer GameController::mixer
	AudioMixer_t3244290001 * ___mixer_21;
	// System.Collections.Generic.List`1<System.Int32> GameController::enemyList
	List_1_t1440998580 * ___enemyList_22;
	// System.Int32 GameController::levelBase
	int32_t ___levelBase_23;
	// System.Int32 GameController::enemyCount
	int32_t ___enemyCount_24;
	// System.Int32 GameController::first_Score
	int32_t ___first_Score_25;
	// System.Int32 GameController::phase
	int32_t ___phase_26;
	// UnityEngine.UI.Text GameController::level
	Text_t356221433 * ___level_27;
	// UnityEngine.UI.Text GameController::score
	Text_t356221433 * ___score_28;
	// UnityEngine.UI.Text GameController::resultScore
	Text_t356221433 * ___resultScore_29;
	// UnityEngine.UI.Text GameController::highScore
	Text_t356221433 * ___highScore_30;

public:
	inline static int32_t get_offset_of_enemy_2() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___enemy_2)); }
	inline GameObject_t1756533147 * get_enemy_2() const { return ___enemy_2; }
	inline GameObject_t1756533147 ** get_address_of_enemy_2() { return &___enemy_2; }
	inline void set_enemy_2(GameObject_t1756533147 * value)
	{
		___enemy_2 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_2, value);
	}

	inline static int32_t get_offset_of_healHP_3() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___healHP_3)); }
	inline GameObject_t1756533147 * get_healHP_3() const { return ___healHP_3; }
	inline GameObject_t1756533147 ** get_address_of_healHP_3() { return &___healHP_3; }
	inline void set_healHP_3(GameObject_t1756533147 * value)
	{
		___healHP_3 = value;
		Il2CppCodeGenWriteBarrier(&___healHP_3, value);
	}

	inline static int32_t get_offset_of_levelUI_4() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___levelUI_4)); }
	inline GameObject_t1756533147 * get_levelUI_4() const { return ___levelUI_4; }
	inline GameObject_t1756533147 ** get_address_of_levelUI_4() { return &___levelUI_4; }
	inline void set_levelUI_4(GameObject_t1756533147 * value)
	{
		___levelUI_4 = value;
		Il2CppCodeGenWriteBarrier(&___levelUI_4, value);
	}

	inline static int32_t get_offset_of_scoreUI_5() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___scoreUI_5)); }
	inline GameObject_t1756533147 * get_scoreUI_5() const { return ___scoreUI_5; }
	inline GameObject_t1756533147 ** get_address_of_scoreUI_5() { return &___scoreUI_5; }
	inline void set_scoreUI_5(GameObject_t1756533147 * value)
	{
		___scoreUI_5 = value;
		Il2CppCodeGenWriteBarrier(&___scoreUI_5, value);
	}

	inline static int32_t get_offset_of_upUI_6() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___upUI_6)); }
	inline GameObject_t1756533147 * get_upUI_6() const { return ___upUI_6; }
	inline GameObject_t1756533147 ** get_address_of_upUI_6() { return &___upUI_6; }
	inline void set_upUI_6(GameObject_t1756533147 * value)
	{
		___upUI_6 = value;
		Il2CppCodeGenWriteBarrier(&___upUI_6, value);
	}

	inline static int32_t get_offset_of_resultUI_7() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___resultUI_7)); }
	inline GameObject_t1756533147 * get_resultUI_7() const { return ___resultUI_7; }
	inline GameObject_t1756533147 ** get_address_of_resultUI_7() { return &___resultUI_7; }
	inline void set_resultUI_7(GameObject_t1756533147 * value)
	{
		___resultUI_7 = value;
		Il2CppCodeGenWriteBarrier(&___resultUI_7, value);
	}

	inline static int32_t get_offset_of_resultScoreUI_8() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___resultScoreUI_8)); }
	inline GameObject_t1756533147 * get_resultScoreUI_8() const { return ___resultScoreUI_8; }
	inline GameObject_t1756533147 ** get_address_of_resultScoreUI_8() { return &___resultScoreUI_8; }
	inline void set_resultScoreUI_8(GameObject_t1756533147 * value)
	{
		___resultScoreUI_8 = value;
		Il2CppCodeGenWriteBarrier(&___resultScoreUI_8, value);
	}

	inline static int32_t get_offset_of_highScoreUI_9() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___highScoreUI_9)); }
	inline GameObject_t1756533147 * get_highScoreUI_9() const { return ___highScoreUI_9; }
	inline GameObject_t1756533147 ** get_address_of_highScoreUI_9() { return &___highScoreUI_9; }
	inline void set_highScoreUI_9(GameObject_t1756533147 * value)
	{
		___highScoreUI_9 = value;
		Il2CppCodeGenWriteBarrier(&___highScoreUI_9, value);
	}

	inline static int32_t get_offset_of_upTarget1_10() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___upTarget1_10)); }
	inline GameObject_t1756533147 * get_upTarget1_10() const { return ___upTarget1_10; }
	inline GameObject_t1756533147 ** get_address_of_upTarget1_10() { return &___upTarget1_10; }
	inline void set_upTarget1_10(GameObject_t1756533147 * value)
	{
		___upTarget1_10 = value;
		Il2CppCodeGenWriteBarrier(&___upTarget1_10, value);
	}

	inline static int32_t get_offset_of_upTarget2_11() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___upTarget2_11)); }
	inline GameObject_t1756533147 * get_upTarget2_11() const { return ___upTarget2_11; }
	inline GameObject_t1756533147 ** get_address_of_upTarget2_11() { return &___upTarget2_11; }
	inline void set_upTarget2_11(GameObject_t1756533147 * value)
	{
		___upTarget2_11 = value;
		Il2CppCodeGenWriteBarrier(&___upTarget2_11, value);
	}

	inline static int32_t get_offset_of_upTarget3_12() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___upTarget3_12)); }
	inline GameObject_t1756533147 * get_upTarget3_12() const { return ___upTarget3_12; }
	inline GameObject_t1756533147 ** get_address_of_upTarget3_12() { return &___upTarget3_12; }
	inline void set_upTarget3_12(GameObject_t1756533147 * value)
	{
		___upTarget3_12 = value;
		Il2CppCodeGenWriteBarrier(&___upTarget3_12, value);
	}

	inline static int32_t get_offset_of_levelTarget1_13() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___levelTarget1_13)); }
	inline GameObject_t1756533147 * get_levelTarget1_13() const { return ___levelTarget1_13; }
	inline GameObject_t1756533147 ** get_address_of_levelTarget1_13() { return &___levelTarget1_13; }
	inline void set_levelTarget1_13(GameObject_t1756533147 * value)
	{
		___levelTarget1_13 = value;
		Il2CppCodeGenWriteBarrier(&___levelTarget1_13, value);
	}

	inline static int32_t get_offset_of_levelTarget2_14() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___levelTarget2_14)); }
	inline GameObject_t1756533147 * get_levelTarget2_14() const { return ___levelTarget2_14; }
	inline GameObject_t1756533147 ** get_address_of_levelTarget2_14() { return &___levelTarget2_14; }
	inline void set_levelTarget2_14(GameObject_t1756533147 * value)
	{
		___levelTarget2_14 = value;
		Il2CppCodeGenWriteBarrier(&___levelTarget2_14, value);
	}

	inline static int32_t get_offset_of_BGMBox_15() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___BGMBox_15)); }
	inline GameObject_t1756533147 * get_BGMBox_15() const { return ___BGMBox_15; }
	inline GameObject_t1756533147 ** get_address_of_BGMBox_15() { return &___BGMBox_15; }
	inline void set_BGMBox_15(GameObject_t1756533147 * value)
	{
		___BGMBox_15 = value;
		Il2CppCodeGenWriteBarrier(&___BGMBox_15, value);
	}

	inline static int32_t get_offset_of_player_16() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___player_16)); }
	inline GameObject_t1756533147 * get_player_16() const { return ___player_16; }
	inline GameObject_t1756533147 ** get_address_of_player_16() { return &___player_16; }
	inline void set_player_16(GameObject_t1756533147 * value)
	{
		___player_16 = value;
		Il2CppCodeGenWriteBarrier(&___player_16, value);
	}

	inline static int32_t get_offset_of_HPBall_17() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___HPBall_17)); }
	inline GameObject_t1756533147 * get_HPBall_17() const { return ___HPBall_17; }
	inline GameObject_t1756533147 ** get_address_of_HPBall_17() { return &___HPBall_17; }
	inline void set_HPBall_17(GameObject_t1756533147 * value)
	{
		___HPBall_17 = value;
		Il2CppCodeGenWriteBarrier(&___HPBall_17, value);
	}

	inline static int32_t get_offset_of_enemys_18() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___enemys_18)); }
	inline GameObjectU5BU5D_t3057952154* get_enemys_18() const { return ___enemys_18; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_enemys_18() { return &___enemys_18; }
	inline void set_enemys_18(GameObjectU5BU5D_t3057952154* value)
	{
		___enemys_18 = value;
		Il2CppCodeGenWriteBarrier(&___enemys_18, value);
	}

	inline static int32_t get_offset_of_sound_levelUP_19() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___sound_levelUP_19)); }
	inline AudioSource_t1135106623 * get_sound_levelUP_19() const { return ___sound_levelUP_19; }
	inline AudioSource_t1135106623 ** get_address_of_sound_levelUP_19() { return &___sound_levelUP_19; }
	inline void set_sound_levelUP_19(AudioSource_t1135106623 * value)
	{
		___sound_levelUP_19 = value;
		Il2CppCodeGenWriteBarrier(&___sound_levelUP_19, value);
	}

	inline static int32_t get_offset_of_sound_Spawn_20() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___sound_Spawn_20)); }
	inline AudioSource_t1135106623 * get_sound_Spawn_20() const { return ___sound_Spawn_20; }
	inline AudioSource_t1135106623 ** get_address_of_sound_Spawn_20() { return &___sound_Spawn_20; }
	inline void set_sound_Spawn_20(AudioSource_t1135106623 * value)
	{
		___sound_Spawn_20 = value;
		Il2CppCodeGenWriteBarrier(&___sound_Spawn_20, value);
	}

	inline static int32_t get_offset_of_mixer_21() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___mixer_21)); }
	inline AudioMixer_t3244290001 * get_mixer_21() const { return ___mixer_21; }
	inline AudioMixer_t3244290001 ** get_address_of_mixer_21() { return &___mixer_21; }
	inline void set_mixer_21(AudioMixer_t3244290001 * value)
	{
		___mixer_21 = value;
		Il2CppCodeGenWriteBarrier(&___mixer_21, value);
	}

	inline static int32_t get_offset_of_enemyList_22() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___enemyList_22)); }
	inline List_1_t1440998580 * get_enemyList_22() const { return ___enemyList_22; }
	inline List_1_t1440998580 ** get_address_of_enemyList_22() { return &___enemyList_22; }
	inline void set_enemyList_22(List_1_t1440998580 * value)
	{
		___enemyList_22 = value;
		Il2CppCodeGenWriteBarrier(&___enemyList_22, value);
	}

	inline static int32_t get_offset_of_levelBase_23() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___levelBase_23)); }
	inline int32_t get_levelBase_23() const { return ___levelBase_23; }
	inline int32_t* get_address_of_levelBase_23() { return &___levelBase_23; }
	inline void set_levelBase_23(int32_t value)
	{
		___levelBase_23 = value;
	}

	inline static int32_t get_offset_of_enemyCount_24() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___enemyCount_24)); }
	inline int32_t get_enemyCount_24() const { return ___enemyCount_24; }
	inline int32_t* get_address_of_enemyCount_24() { return &___enemyCount_24; }
	inline void set_enemyCount_24(int32_t value)
	{
		___enemyCount_24 = value;
	}

	inline static int32_t get_offset_of_first_Score_25() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___first_Score_25)); }
	inline int32_t get_first_Score_25() const { return ___first_Score_25; }
	inline int32_t* get_address_of_first_Score_25() { return &___first_Score_25; }
	inline void set_first_Score_25(int32_t value)
	{
		___first_Score_25 = value;
	}

	inline static int32_t get_offset_of_phase_26() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___phase_26)); }
	inline int32_t get_phase_26() const { return ___phase_26; }
	inline int32_t* get_address_of_phase_26() { return &___phase_26; }
	inline void set_phase_26(int32_t value)
	{
		___phase_26 = value;
	}

	inline static int32_t get_offset_of_level_27() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___level_27)); }
	inline Text_t356221433 * get_level_27() const { return ___level_27; }
	inline Text_t356221433 ** get_address_of_level_27() { return &___level_27; }
	inline void set_level_27(Text_t356221433 * value)
	{
		___level_27 = value;
		Il2CppCodeGenWriteBarrier(&___level_27, value);
	}

	inline static int32_t get_offset_of_score_28() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___score_28)); }
	inline Text_t356221433 * get_score_28() const { return ___score_28; }
	inline Text_t356221433 ** get_address_of_score_28() { return &___score_28; }
	inline void set_score_28(Text_t356221433 * value)
	{
		___score_28 = value;
		Il2CppCodeGenWriteBarrier(&___score_28, value);
	}

	inline static int32_t get_offset_of_resultScore_29() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___resultScore_29)); }
	inline Text_t356221433 * get_resultScore_29() const { return ___resultScore_29; }
	inline Text_t356221433 ** get_address_of_resultScore_29() { return &___resultScore_29; }
	inline void set_resultScore_29(Text_t356221433 * value)
	{
		___resultScore_29 = value;
		Il2CppCodeGenWriteBarrier(&___resultScore_29, value);
	}

	inline static int32_t get_offset_of_highScore_30() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___highScore_30)); }
	inline Text_t356221433 * get_highScore_30() const { return ___highScore_30; }
	inline Text_t356221433 ** get_address_of_highScore_30() { return &___highScore_30; }
	inline void set_highScore_30(Text_t356221433 * value)
	{
		___highScore_30 = value;
		Il2CppCodeGenWriteBarrier(&___highScore_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
