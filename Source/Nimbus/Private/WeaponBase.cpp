#include "WeaponBase.h"
#include "Components/StaticMeshComponent.h"

class AGameObject;



void AWeaponBase::OnImpact(const FHitResult& HitResult, const FVector& OldVelocity) {
}


bool AWeaponBase::IsDestroyed() const {
    return false;
}

EWeaponID AWeaponBase::GetWeaponID() const {
    return EWeaponID::WID_mg;
}

AGameObject* AWeaponBase::GetTargetToHome() const {
    return NULL;
}

float AWeaponBase::GetSelectionAssistRange_Implementation() const {
    return 0.0f;
}

float AWeaponBase::GetSelectionAssistRadius_Implementation() const {
    return 0.0f;
}

float AWeaponBase::GetSelectionAssistLockOnTime_Implementation() const {
    return 0.0f;
}

float AWeaponBase::GetSelectionAssistAngle_Implementation() const {
    return 0.0f;
}

float AWeaponBase::GetLifeTime() const {
    return 0.0f;
}

AWeaponBase::AWeaponBase() {
    this->WeaponID = EWeaponID::WID_NONE;
    this->OwningGameObject = NULL;
    this->OwnerWeapon = NULL;
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
    this->AnimationMesh = NULL;
    this->AnimationEndStaticMesh = NULL;
    this->WeaponMovement = NULL;
    this->TargetToHome = NULL;
    this->bCollided = false;
    this->Damage = 0.00f;
    this->VeryEasy_Damage = 0.00f;
    this->LifeTime = 0.00f;
    this->LoadTime = 0.00f;
    this->VeryEasy_LoadTime = 0.00f;
    this->SpawnAngleLimit = 180.00f;
    this->MaxSpawnAngle = 0.00f;
    this->MaxLoadedCount = 1;
    this->bFireAllInOneShot = false;
    this->bAutoFireOnHold = false;
    this->VolleyRestInterval = 0.00f;
    this->bReloadOnFire = true;
    this->bReloadAfterAllFired = false;
    this->bShouldTreatAsOneWeapon = false;
    this->bCanUseSameSlot = false;
    this->bGeneratePlayerFiringEvents = false;
    this->bSwitchWeaponOnLastDestroyed = false;
    this->bIsHoming = false;
    this->bRequiresHomeTarget = false;
    this->HomingForesightAmount = 0.00f;
    this->VeryEasy_HomingForesightAmount = 0.00f;
    this->bUseCameraLockOn = false;
    this->LockOnTargetType = ETargetType::AIR_AND_GROUND;
    this->PotentialTargets = 4;
    this->bMultipleLockOn = false;
    this->MultipleLockOnMaxNum = 4;
    this->LockonAngle = 60.00f;
    this->VeryEasy_LockonAngle = 0.00f;
    this->LockonRange = 20000.00f;
    this->VeryEasy_LockonRange = 0.00f;
    this->TargetSelectionMidRange = 50000.00f;
    this->LockonInitialSpeed = 60.00f;
    this->LockonMaximumSpeed = 60.00f;
    this->LockonAccelerationTime = 1.00f;
    this->LockonDelayBetweenSeekers = 0.50f;
    this->LockonReductionInCloud = 0.30f;
    this->LockonRangeReductionInCloud = 0.30f;
    this->SelectionAssistType = ESelectionAssistType::NONE;
    this->SelectionAssistRange = 8000.00f;
    this->SelectionAssistRadius = 0.00f;
    this->SelectionAssistAngle = 5.00f;
    this->SelectionAssistAngleForRemotePlayer = 0.00f;
    this->SelectionAssistLockOnTime = 0.00f;
    this->LevelModifiersDataTable = NULL;
    this->bFCSUseBaseLockOn = false;
    this->bFCSUseObjectLockOn = false;
    this->FCSAngleLimit = 0.00f;
    this->FCSActivationTime = 0.00f;
    this->FCSVolleyTime = 0.00f;
    this->FCSVolleyFireInterval = 0.00f;
    this->FCSVolleyRestInterval = 0.00f;
    this->FCSForesightAmount = 0.00f;
    this->bShouldResetTimer = true;
    this->bGunReaction = false;
    this->FCSActivationDist = 0.00f;
    this->FCSActivationMinDist = 0.00f;
    this->TrailTime = 0.00f;
    this->OnSpawnParticles = NULL;
    this->bAttachSpawnParticlesToOwner = true;
    this->OnCollisionParticles = NULL;
    this->OnSeaCollisionParticle = NULL;
    this->OnGroundCollisionParticle = NULL;
    this->OnConcreteCollisionParticle = NULL;
    this->OnGlassCollisionParticle = NULL;
    this->OnIceCollisionParticle = NULL;
    this->WeaponBackgroundTexture = NULL;
    this->WeaponFillTexture = NULL;
    this->OnOthersCollisionDecal = NULL;
    this->OnConcreteCollisionDecal = NULL;
    this->ContinuousFireStartSoundEvent = NULL;
    this->ContinuousFireStopSoundEvent = NULL;
    this->OneShotSoundEvent = NULL;
    this->LoopStartSoundEvent = NULL;
    this->LoopStopSoundEvent = NULL;
    this->SpecializedCollisionSound = SoundChannelType::None;
    this->bIsOneShotSoundEventOwner = false;
    this->bIsPlayCameraShakeImpactResponse = false;
    this->PlayCameraShakeImpactResponse_Conditions = ENimbusCameraShakeConditions::None;
    this->PlayCameraShakeImpactResponse_Type = ENimbusCameraShakeType::None;
    this->bBreaksOwnerStealthWhileActive = false;
}

