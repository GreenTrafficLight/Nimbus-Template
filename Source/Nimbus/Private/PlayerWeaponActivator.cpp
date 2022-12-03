#include "PlayerWeaponActivator.h"

class UWeaponParameters;
class AWeaponBase;

bool UPlayerWeaponActivator::ToggleSpecial() {
    return false;
}

void UPlayerWeaponActivator::ReleaseWeaponInput() {
}

void UPlayerWeaponActivator::MainWeaponReleased() {
}

void UPlayerWeaponActivator::MainWeaponPressed() {
}

void UPlayerWeaponActivator::MachineGunReleased() {
}

void UPlayerWeaponActivator::MachineGunPressed() {
}

FString UPlayerWeaponActivator::GetWeaponNameString(EWeaponNumber WeaponNumber) const {
    return TEXT("");
}

FString UPlayerWeaponActivator::GetSpecialWeaponNameString() const {
    return TEXT("");
}

int32 UPlayerWeaponActivator::GetSpecialWeaponCount() const {
    return 0;
}

FString UPlayerWeaponActivator::GetMainWeaponNameString() const {
    return TEXT("");
}

int32 UPlayerWeaponActivator::GetMainWeaponCount() const {
    return 0;
}

FString UPlayerWeaponActivator::GetGunWeaponNameString() const {
    return TEXT("");
}

int32 UPlayerWeaponActivator::GetGunCount() const {
    return 0;
}

int32 UPlayerWeaponActivator::GetFlareCount() const {
    return 0;
}

UWeaponParameters* UPlayerWeaponActivator::GetArmedWeaponParameters() const {
    return NULL;
}

AWeaponBase* UPlayerWeaponActivator::GetArmedWeapon() const {
    return NULL;
}

void UPlayerWeaponActivator::FlareReleased() {
}

void UPlayerWeaponActivator::FlarePressed() {
}

UPlayerWeaponActivator::UPlayerWeaponActivator() {
    this->MachineGunClass = NULL;
    this->MaxGunCount = -1;
    this->MainWeaponClass = NULL;
    this->MaxMainWeaponCount = 0;
    this->FreeRestockAmount = 2;
    this->FreeRestockTimeMultiplier = 3.00f;
    this->FreeRestockTime = 0.00f;
    this->bSpecialWeaponCoverTLSCheck = false;
    this->UAV_ReturnMoveSpline = NULL;
    this->SpecialWeaponClass = NULL;
    this->MaxSpecialWeaponCount = 0;
    this->FlareClass = NULL;
    this->FlareParticlePerActivation = 1;
    this->FlareParticlePeriod = 0.00f;
    this->FlareParticleMaxSpawnAngle = 10.00f;
    this->FlareEffectiveRangeSquared = 0.00f;
    this->FlareReloadTime = 0.00f;
    this->MaxFlareCount = -1;
    this->ActiveSWPMeshComponent = NULL;
    this->bCastInsetShadow = true;
    this->DummyPredictionWeapon = NULL;
}

