#include "Bomb_TGTP.h"
#include "Components/SceneComponent.h"

void ABomb_TGTP::ReacquireLocationRotation() {
}

FVector ABomb_TGTP::GetTGTP_DropLocation() {
    return FVector{};
}

ETGTP_AttackResult ABomb_TGTP::GetAttackResult() {
    return ETGTP_AttackResult::Drop;
}

ABomb_TGTP::ABomb_TGTP() {
    this->WeaponImpactRadius = 100.00f;
    this->VeryEasy_WeaponImpactRadius = 0.00f;
    this->WeaponExplosionRadius = 100.00f;
    this->VeryEasy_WeaponExplosionRadius = 0.00f;
    this->Damage_TGTP = 0.00f;
    this->TargetrRadius = 0.00f;
    this->bPipperFixed = false;
    this->PipperFixedRadius = 100.00f;
    this->bPipperHeightOuterCircumference = true;
    this->PipperHeightIgnoredDifference = 0.00f;
    this->ParticleSpawnType = ETGTP_ParticleSpawnType::TagNotHit;
    this->ParticleSpawnHeightIgnoredDifference = 320.00f;
    this->OuterCircumferenceCheckCnt = 8;
    this->AttackResult = ETGTP_AttackResult::Drop;
    this->FallingPointSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("FallingPointSceneComponent"));
    this->MyTarget = NULL;
}

