#include "GameObject.h"
#include "Templates/SubclassOf.h"
#include "Components/SphereComponent.h"

class AWeaponBase;
class AActor;
class AGameObject;
class APawn;
class AUnit;

void AGameObject::SetMinHealth(float InHealth) {
}

void AGameObject::SetIsUnidentified(bool bUnidentified) {
}

void AGameObject::SetIsInvincibleFromAI(bool bInvincible) {
}

void AGameObject::SetIsInvincible(bool bInvincible) {
}

void AGameObject::SetIsExcludeFromGunAutoFire(bool bExcludeFromGunAutoFire) {
}

void AGameObject::SetIsAttackTargetsException(bool bAttackTargetsException) {
}

void AGameObject::SetHudBoxAttribute(EHudBoxAttribute Type) {
}

void AGameObject::SetActive(bool bActive, bool bReset) {
}




void AGameObject::OnRestored_Implementation() {
}

void AGameObject::OnReposition_Implementation() {
}


void AGameObject::OnHitByGun_Implementation(AActor* Attacker) {
}


void AGameObject::OnDeath_Implementation(AGameObject* DeadGameObject) {
}



void AGameObject::OnAttachedActorLockedOnByEnemy(AGameObject* LockedObject, AGameObject* EnemyObject) {
}


float AGameObject::ModifyHealth(float InValue, APawn* DamageCauser, bool bCauseDamageEvent) {
    return 0.0f;
}

void AGameObject::K2_DestroyActor() {
}

bool AGameObject::IsStruckByLightning() const {
    return false;
}

bool AGameObject::IsPlayerTarget() const {
    return false;
}

bool AGameObject::IsNimbusOverlappingActor(const AActor* Other) const {
    return false;
}

bool AGameObject::IsAttackedBySpecialWeapon() const {
    return false;
}

bool AGameObject::IsAttackedByOpponent() const {
    return false;
}

bool AGameObject::IsAttackedByMainWeapon() const {
    return false;
}

bool AGameObject::IsAlive() const {
    return false;
}

bool AGameObject::IsActivated() const {
    return false;
}

AUnit* AGameObject::GetUnit() {
    return NULL;
}

int32 AGameObject::GetTrueSkyQueryID(int32 RelativeID) const {
    return 0;
}

float AGameObject::GetSpeedMps() const {
    return 0.0f;
}

float AGameObject::GetSpeedKmph() const {
    return 0.0f;
}

FString AGameObject::GetSpeakerID() const {
    return TEXT("");
}

FVector AGameObject::GetPursuitPoint() const {
    return FVector{};
}

FString AGameObject::GetObjNameID() const {
    return TEXT("");
}

FString AGameObject::GetObjName() const {
    return TEXT("");
}

void AGameObject::GetNimbusOverlappingActors(TArray<AActor*>& OverlappingActors, TSubclassOf<AActor> ClassFilter) const {
}

float AGameObject::GetMinHealth() const {
    return 0.0f;
}

float AGameObject::GetMaxHealth() const {
    return 0.0f;
}

AGameObject* AGameObject::GetLockedOnTarget() {
    return NULL;
}

FVector AGameObject::GetLeadPoint() const {
    return FVector{};
}

bool AGameObject::GetIsUnidentified() const {
    return false;
}

bool AGameObject::GetIsInStealth(const FVector& PlayerLocation, const AGameObject* GameObject) const {
    return false;
}

bool AGameObject::GetIsDetected() const {
    return false;
}

float AGameObject::GetHealth() const {
    return 0.0f;
}

float AGameObject::GetDamagePercentage() const {
    return 0.0f;
}

FString AGameObject::GetCallsignID() const {
    return TEXT("");
}

FString AGameObject::GetCallsign() const {
    return TEXT("");
}

TArray<AWeaponBase*> AGameObject::GetAttackingMainWeaponArray() const {
    return TArray<AWeaponBase*>();
}

float AGameObject::GetAltitudeMeters() const {
    return 0.0f;
}

void AGameObject::ForceShowHudBoxInSand(bool bShow) {
}

void AGameObject::ForceDetection() {
}

void AGameObject::ExecRecordableEvent(int32 EventID) {
}

void AGameObject::EnableKDSMode(bool bIsEnabled) {
}

void AGameObject::EnableFriendlyFireDamage(bool bEnable) {
}

AGameObject::AGameObject() {
    this->OverlapCollision = CreateDefaultSubobject<USphereComponent>(TEXT("OverlapCollision"));
    this->SphereCollision = NULL;
    this->GameObjectCategory = EGameObjectCategory::Category_None;
    this->GameObjectSubCategory = EGameObjectSubCategory::SubCategory_None;
    this->MaxHealth = 100.00f;
    this->MinHealth = 0.00f;
    this->Speed = 0.00f;
    this->StealthLevel = 0;
    this->KillBountyScore = -1;
    this->bIsActivated = true;
    this->bIsInvincible = false;
    this->bIsReplayMode = false;
    this->bIsIGCMode = false;
    this->bIsShownDuringIGC = false;
    this->bIsAttackTargetsException = false;
    this->bIsExcludeFromGunAutoFire = false;
    this->LookAheadTimeSec = 3.00f;
    this->LastAttackingSpecialWeaponOwner = NULL;
    this->MissileAlert = EMissileAlert::MissileAlertStandby;
    this->bIsMissileAlertedByAI = false;
    this->AlertedWeapon = NULL;
    this->DeathVFX = NULL;
    this->StruckByLightningVFX = NULL;
    this->StruckByLightningSound = NULL;
    this->FrontViewHalfConeAngle = 45.00f;
    this->AirCurrentPositionInfluenceModifier = 1.00f;
    this->AirCurrentRotationInfluenceModifier = 1.00f;
    this->TimeToRecoverFromLightningStrike = 0.00f;
    this->LightningAffectModifier = 1.00f;
    this->bIsUnidentified = false;
    this->bNeedsDetection = false;
    this->DetectionDistanceMeters = 600.00f;
    this->IdentifyDistanceMeters = 200.00f;
    this->WeaponManager = NULL;
    this->bIsPlayerTarget = false;
    this->OwningParent = NULL;
    this->ChildGameObjectParent = NULL;
    this->CloudEnterDensity = 0.25f;
    this->CloudExitDensity = 0.10f;
    this->TimeToDeactivateAfterDeath = 0.00f;
    this->TargetContainerActor = NULL;
    this->bIsPersistentForceLOD = false;
    this->PilotDataID = 0;
    this->bEnableOverlapEvent = false;
    this->BackBlindZoneTransitionDuration = 0.50f;
    this->GunHitMeshComponent = NULL;
    this->bIsDeathCameraShake = false;
    this->DeathCameraShakeType = ENimbusCameraShakeType::EnemyExplosion;
    this->bDrowHUDMessage = true;
    this->FullDisplayTimeAfterStealthAttack = 1.00f;
    this->ReturnToStealthTimeAfterStealthAttack = 1.50f;
    this->JammingMeasures = NULL;
    this->SupportMeasures = NULL;
    this->HealthInternal = 1000;
    this->NimbusHUDCache = NULL;
}

