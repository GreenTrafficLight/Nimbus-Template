#include "MissionConditionChecker.h"

class AGameObject;
class AWeaponBase;
class AActor;

void AMissionConditionChecker::OnMissionPhaseRestarted(const FString& Dummy) {
}

int32 AMissionConditionChecker::Get_TargetModifierStar(AGameObject* GameObject) {
    return 0;
}

int32 AMissionConditionChecker::Get_StealthContainerOpacityPercentage(const AGameObject* GameObject) {
    return 0;
}

EMissionCondition_MiniGameCourseAssistant AMissionConditionChecker::Get_LandingCourseAssistant(float TouchdownRate, float TopSlopeRate, float BottomSlopeRate, float SideLineRate, float TopExpandAngle, float BottomExpandAngle, float SideExpandAngle, float LimitGauge, float LimitRoll) {
    return EMissionCondition_MiniGameCourseAssistant::None;
}

EMissionCondition_AzimuthOfDegrees AMissionConditionChecker::Get_AzimuthOfDegreesToObject(const AGameObject* GameObject, const AGameObject* Target, bool bIsRelativePosition) {
    return EMissionCondition_AzimuthOfDegrees::None;
}

EMissionCondition_AzimuthOfClock AMissionConditionChecker::Get_AzimuthOfClockToObject(const AGameObject* GameObject, const AGameObject* Target, bool bIsRelativePosition) {
    return EMissionCondition_AzimuthOfClock::None;
}

EMissionCondition_MiniGameCourseAssistant AMissionConditionChecker::Get_AerialRefuellingCourseAssistant(float ThresholdSideDistance, float ThresholdTopDistance, float ThresholdBottomDistance, float SideExpandAngle, float TopExpandAngle, float BottomExpandAngle, float LimitGauge, float LimitRoll) {
    return EMissionCondition_MiniGameCourseAssistant::None;
}

bool AMissionConditionChecker::Check_WeaponType(const AWeaponBase* Weapon, EMissionCondition_WeaponType WeaponType, AWeaponBase*& OutWeapon) {
    return false;
}

bool AMissionConditionChecker::Check_WeaponLockedOnTarget(const AWeaponBase* HitWeapon, const AGameObject* DamagedObject) {
    return false;
}

bool AMissionConditionChecker::Check_WeaponInCloud(const AWeaponBase* Weapon) {
    return false;
}

bool AMissionConditionChecker::Check_WeaponFired(EMissionCondition_ObjectSpecificType OwnerType, EMissionCondition_ObjectSpecificType TargetType, EMissionCondition_WeaponType WeaponType) {
    return false;
}

bool AMissionConditionChecker::Check_WeaponCountRateLessThanOrEqualTo(int32 WeaponCount, int32 MaxCount, float Rate) {
    return false;
}

bool AMissionConditionChecker::Check_TeamDeathMatchSituation(const AGameObject* GameObject, EMissionCondition_TeamSituation Situation) {
    return false;
}

bool AMissionConditionChecker::Check_TeamDeathMatchScoreProgress(float Percent) {
    return false;
}

bool AMissionConditionChecker::Check_TargetPlaneRank(const AGameObject* GameObject, int32 Rank) {
    return false;
}

bool AMissionConditionChecker::Check_TargetLockon(EMissionCondition_ObjectSpecificType TargetType, EMissionCondition_ObjectSpecificType InstigatorType) {
    return false;
}

bool AMissionConditionChecker::Check_PhaseNo(int32 PhaseNo) {
    return false;
}

bool AMissionConditionChecker::Check_PhaseElapsedTime(float ElapsedTime) {
    return false;
}

bool AMissionConditionChecker::Check_OutOfCombatZone(AActor* Actor, bool bAdaptAIFlightBufferDist) {
    return false;
}

bool AMissionConditionChecker::Check_ObjectType(const AGameObject* GameObject, EMissionCondition_ObjectSpecificType SpecificType, AGameObject*& OutGameObject) {
    return false;
}

bool AMissionConditionChecker::Check_ObjectDestroyed(EMissionCondition_ObjectSpecificType TargetType, EMissionCondition_ObjectSpecificType InstigatorType) {
    return false;
}

bool AMissionConditionChecker::Check_ObjectDamaged(EMissionCondition_ObjectSpecificType TargetType, EMissionCondition_ObjectSpecificType InstigatorType, EMissionCondition_DamageType DamageType) {
    return false;
}

bool AMissionConditionChecker::Check_MissionFailure(EMissionCondition_FailureType FailureType) {
    return false;
}

bool AMissionConditionChecker::Check_MissileLostTarget(EMissionCondition_ObjectSpecificType TargetType, EMissionCondition_ObjectSpecificType OwnerType) {
    return false;
}

bool AMissionConditionChecker::Check_MiniGameType(EMissionCondition_MiniGameType Type) {
    return false;
}

bool AMissionConditionChecker::Check_MiniGameDistance(EMissionCondition_MiniGameDistanceType Type, float ThresholdDistanceMeter) {
    return false;
}

bool AMissionConditionChecker::Check_LessMissionTimeLeft(float CheckTime) {
    return false;
}

bool AMissionConditionChecker::Check_ElapsedTimeSinceEnteredCloud(const AGameObject* GameObject, float ElapsedTime, AGameObject*& OutGameObject) {
    return false;
}

bool AMissionConditionChecker::Check_ElapsedMissionTime(float CheckTime) {
    return false;
}

bool AMissionConditionChecker::Check_DistanceFromPlayer(const AActor* Actor, float Distance) {
    return false;
}

bool AMissionConditionChecker::Check_BattleRoyalSituation(const AGameObject* GameObject, EMissionCondition_BattleRoyalSituation Situation) {
    return false;
}

bool AMissionConditionChecker::Check_BattleRoyalRank(const AGameObject* GameObject, int32 Rank) {
    return false;
}

AMissionConditionChecker::AMissionConditionChecker() {
}

