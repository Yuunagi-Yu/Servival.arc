#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Player
struct Player_t1147783557;
// UnityEngine.Collider
struct Collider_t3497673348;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"

// System.Void Player::.ctor()
extern "C"  void Player__ctor_m1986401168 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Start()
extern "C"  void Player_Start_m3139373552 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Update()
extern "C"  void Player_Update_m717746161 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::LateUpdate()
extern "C"  void Player_LateUpdate_m2879147389 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Shot(UnityEngine.Ray)
extern "C"  void Player_Shot_m2355551345 (Player_t1147783557 * __this, Ray_t2469606224  ___ray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnDamage(System.Int32)
extern "C"  void Player_OnDamage_m2708014555 (Player_t1147783557 * __this, int32_t ___damage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void Player_OnTriggerEnter_m3976017644 (Player_t1147783557 * __this, Collider_t3497673348 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Player::shotWait(System.Single)
extern "C"  Il2CppObject * Player_shotWait_m2270549048 (Player_t1147783557 * __this, float ___waitTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
