#include "AIGameObject.h"
#include "AIFireControlSystem.h"

class UCurveVector;
class AGameObject;
class AActor;
class AAIPath;
class AAIGameObject;

void AAIGameObject::StopFireContinuousShotWeapon() {
}

void AAIGameObject::SetWeaponSpecialBehavior(EWeaponNumber WeaponNumber, EWeaponSpecialBehaviorType BehaviorType) {
}

void AAIGameObject::SetWeaponSettings(bool bInCanDamageTGT, bool bInCanFireNoCollisionWeapon) {
}

void AAIGameObject::SetShowHudBox(bool bShow) {
}

void AAIGameObject::SetPathParameter(float InSpeedKmph, float InAccelerationMpss, float InRotationSpeedDegree, EAIPathMovingActorSnap InSnapSetting) {
}

void AAIGameObject::SetParkingMode(bool bParked, float DelayTime) {
}

void AAIGameObject::SetMoveOnPathApproachTimeOutValue(float InTime) {
}

void AAIGameObject::SetIsTGT(bool bIsTarget) {
}

void AAIGameObject::SetIsMissionSpecialObject(bool bIsMissionSpecial) {
}

void AAIGameObject::SetExceptionTarget(AGameObject* ExceptionTarget) {
}

void AAIGameObject::SetEnemySearchType(ETargetType InType) {
}

void AAIGameObject::RemoveFromDebriefingRecording() {
}

void AAIGameObject::ParkOnPoint(AActor* Point) {
}





void AAIGameObject::MoveWithCurve(UCurveVector* TransCurve, UCurveVector* RotCurve) {
}

void AAIGameObject::MoveOnPath(AAIPath* AIPath, float InSpeedKmph, float InAccelerationMpss, float InRotationSpeedDegree, EAIPathMovingActorSnap InSnapSetting, float InPointRadiusMeter, bool bTeleport, bool bUseApproachActorForwardVector, bool bKeepOnLastPathPoint, bool bUseQuaternionVersion) {
}

bool AAIGameObject::IsTrackingAirTarget() {
    return false;
}

bool AAIGameObject::IsTGT() const {
    return false;
}

bool AAIGameObject::IsSea() const {
    return false;
}

bool AAIGameObject::IsReallyOnGround() {
    return false;
}

bool AAIGameObject::IsParkingMode() const {
    return false;
}

bool AAIGameObject::IsAir() const {
    return false;
}

AGameObject* AAIGameObject::GetTrackingTarget() const {
    return NULL;
}

ESubFaction AAIGameObject::GetSubFaction() const {
    return ESubFaction::EnemyA;
}

AGameObject* AAIGameObject::GetLockedOnTarget() {
    return NULL;
}

EFaction AAIGameObject::GetFaction() const {
    return EFaction::Enemy;
}

AAIGameObject* AAIGameObject::GetChildGameObject(FName ComponentName) {
    return NULL;
}

void AAIGameObject::FireOneShotWeaponWithTargetTracking(EWeaponNumber WeaponNumber, AGameObject* Target, bool bIgnoreTargetRange, bool bContinueTrackingTarget) {
}

void AAIGameObject::FireOneShotWeaponWithLocationTracking(EWeaponNumber WeaponNumber, const FVector& Target, bool bIgnoreTargetRange, bool bContinueTrackingTarget) {
}

bool AAIGameObject::FireOneShotWeapon(EWeaponNumber WeaponNumber, AGameObject* Target, FVector DummyTargetOffset) {
    return false;
}

void AAIGameObject::FireContinuousShotWeapon(EWeaponNumber WeaponNumber, AGameObject* Target, FVector DummyTargetOffset, float InFCSVolleyTime, float InFCSVolleyFireInterval) {
}

void AAIGameObject::EngagementOrderOverride(EEngagement Order, AActor* TargetEnemy, EEnemySearchPriority SearchPriority, EEnemySearchPriorityExtension SearchPriorityExtension, bool bIgnoreUnidentifiedObject, bool IgnoreAttackQuota, bool CanFireWeapon1, bool CanFireWeapon2, bool CanFireWeapon3, bool PropogateToChild) {
}

void AAIGameObject::DisableRecovery(bool bDisable) {
}

void AAIGameObject::CheckOutOfWorld() {
}

void AAIGameObject::CancelMovingOnPath() {
}

void AAIGameObject::AddToDebriefingRecording() {
}

void AAIGameObject::ActivateFlares() {
}

AAIGameObject::AAIGameObject() {
    this->Unit = NULL;
    this->FCS = CreateDefaultSubobject<UAIFireControlSystem>(TEXT("Fire Control System"));
    this->AIPathComp = NULL;
    this->AILevel = 2;
    this->AIPilotDataTable = NULL;
    this->AIParamDataTable = NULL;
    this->AIParamModifierDataTable = NULL;
    this->AIFlaresDataTable = NULL;
    this->AIWeaponDurabilityDataTable = NULL;
    this->AIWeaponExplosionDurabilityDataTable = NULL;
    this->bScaleLevelWithDifficulty = true;
    this->bShouldShowInBriefing = false;
    this->bIsFocusableInBriefing = false;
    this->bIsTgtInBriefing = false;
    this->bShouldRecordForDebriefing = true;
    this->bForceDisplayObjNameIDForDebriefing = false;
    this->bShowHUDBox = true;
    this->bPermissionToEngage = true;
    this->bPermissionToFire = true;
    this->bPermissionToUseFlares = false;
    this->bPermissionToProvoke = true;
    this->bPermissionToEvade = true;
    this->bIgnoreAttackQuota = false;
    this->bIsTGT = false;
    this->bIsAir = true;
    this->bIsSea = false;
    this->bIsMissionSpecialObject = false;
    this->bIsICBM = false;
    this->ExplosionWeapon = NULL;
    this->bCauseExplosionOnDeath = false;
    this->bCauseExplosionWeaponOwnerIsKilledByAttacker = false;
    this->bNeedOutOfWldReact = false;
    this->CloudCoverDensity = 0.80f;
    this->bCanRecover = false;
    this->RecoveryTimes = 1;
    this->RecoveryDuration = 10.00f;
    this->bCanActivateFlares = true;
}

