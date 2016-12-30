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
// System.String
struct String_t;
// UnityEngine.Audio.AudioMixer
struct AudioMixer_t3244290001;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneButton
struct  SceneButton_t3432437656  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject SceneButton::panel
	GameObject_t1756533147 * ___panel_2;
	// System.String SceneButton::scene_name
	String_t* ___scene_name_3;
	// UnityEngine.Audio.AudioMixer SceneButton::mixer
	AudioMixer_t3244290001 * ___mixer_4;
	// UnityEngine.AudioSource SceneButton::clickSound
	AudioSource_t1135106623 * ___clickSound_5;

public:
	inline static int32_t get_offset_of_panel_2() { return static_cast<int32_t>(offsetof(SceneButton_t3432437656, ___panel_2)); }
	inline GameObject_t1756533147 * get_panel_2() const { return ___panel_2; }
	inline GameObject_t1756533147 ** get_address_of_panel_2() { return &___panel_2; }
	inline void set_panel_2(GameObject_t1756533147 * value)
	{
		___panel_2 = value;
		Il2CppCodeGenWriteBarrier(&___panel_2, value);
	}

	inline static int32_t get_offset_of_scene_name_3() { return static_cast<int32_t>(offsetof(SceneButton_t3432437656, ___scene_name_3)); }
	inline String_t* get_scene_name_3() const { return ___scene_name_3; }
	inline String_t** get_address_of_scene_name_3() { return &___scene_name_3; }
	inline void set_scene_name_3(String_t* value)
	{
		___scene_name_3 = value;
		Il2CppCodeGenWriteBarrier(&___scene_name_3, value);
	}

	inline static int32_t get_offset_of_mixer_4() { return static_cast<int32_t>(offsetof(SceneButton_t3432437656, ___mixer_4)); }
	inline AudioMixer_t3244290001 * get_mixer_4() const { return ___mixer_4; }
	inline AudioMixer_t3244290001 ** get_address_of_mixer_4() { return &___mixer_4; }
	inline void set_mixer_4(AudioMixer_t3244290001 * value)
	{
		___mixer_4 = value;
		Il2CppCodeGenWriteBarrier(&___mixer_4, value);
	}

	inline static int32_t get_offset_of_clickSound_5() { return static_cast<int32_t>(offsetof(SceneButton_t3432437656, ___clickSound_5)); }
	inline AudioSource_t1135106623 * get_clickSound_5() const { return ___clickSound_5; }
	inline AudioSource_t1135106623 ** get_address_of_clickSound_5() { return &___clickSound_5; }
	inline void set_clickSound_5(AudioSource_t1135106623 * value)
	{
		___clickSound_5 = value;
		Il2CppCodeGenWriteBarrier(&___clickSound_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
