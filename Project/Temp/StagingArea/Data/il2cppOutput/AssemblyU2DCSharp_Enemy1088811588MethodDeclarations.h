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

// Enemy
struct Enemy_t1088811588;
// UnityEngine.Collider
struct Collider_t3497673348;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// PlayerDamage
struct PlayerDamage_t1064576524;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2681005625;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD2681005625.h"

// System.Void Enemy::.ctor()
extern "C"  void Enemy__ctor_m2474411757 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::Start()
extern "C"  void Enemy_Start_m4271536181 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::OnEnable()
extern "C"  void Enemy_OnEnable_m2363834197 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::OnDisable()
extern "C"  void Enemy_OnDisable_m2610728060 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::Update()
extern "C"  void Enemy_Update_m1726793138 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::OnDamage(System.Int32)
extern "C"  void Enemy_OnDamage_m2615545826 (Enemy_t1088811588 * __this, int32_t ___damage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void Enemy_OnTriggerEnter_m3715177521 (Enemy_t1088811588 * __this, Collider_t3497673348 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Enemy::waitTime()
extern "C"  Il2CppObject * Enemy_waitTime_m4065544333 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::<OnTriggerEnter>m__0(PlayerDamage,UnityEngine.EventSystems.BaseEventData)
extern "C"  void Enemy_U3COnTriggerEnterU3Em__0_m4056526561 (Enemy_t1088811588 * __this, Il2CppObject * ___target0, BaseEventData_t2681005625 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
