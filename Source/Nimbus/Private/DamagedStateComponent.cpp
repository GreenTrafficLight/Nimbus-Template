#include "DamagedStateComponent.h"

class AGameObject;
class AActor;
class UPrimitiveComponent;

void UDamagedStateComponent::OnVisibilityChanged(bool bVisibility) {
}

void UDamagedStateComponent::OnRestored() {
}

void UDamagedStateComponent::OnOwnerChildObjectRecoveryTriggered(AGameObject* ChildGameObject) {
}

void UDamagedStateComponent::OnComponentHitSurface(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UDamagedStateComponent::OnCameraViewChanged(ECameraType CameraViewType) {
}

void UDamagedStateComponent::ForceCauseFinalExplosion() {
}

void UDamagedStateComponent::DamageStateLifeSpanExpired(int32 StateIndex) {
}

UDamagedStateComponent::UDamagedStateComponent() {
    this->bAreDamagedStatesCompounded = false;
    this->MainBodySpinParam = NULL;
    this->DamageBreakApartSequence = NULL;
    this->DestroyedBodyMeshComponentName = TEXT("DamagedMainBodyMesh");
    this->DestroyedPartsMeshComponentName = TEXT("DamagedPartsMesh");
    this->ExplosionSoundOverride = SoundChannelType::None;
    this->FallingSoundPlayEvent = NULL;
    this->FallingSoundStopEvent = NULL;
    this->bShowExtraDestroyedVFX = false;
    this->bIsDetachExtraVfxInfoWithFinalExplosion = false;
    this->bShowGroundDecal = false;
    this->bIsShownInFirstPersonView = false;
    this->bIsShownInCockpitView = false;
    this->bIsShownInThirdPersonView = false;
    this->TimeToDeactivateAfterDeathForMultiPlayer = 3.00f;
    this->VRDeathFadeOutDuration = 1.50f;
    this->FinalExplosionShakeType = ENimbusCameraShakeType::EnemyExplosion;
    this->bEnableDamagedBodyMeshCollision = false;
    this->OwnerGameObject = NULL;
    this->OwnerMesh = NULL;
    this->OwnerDamagedMesh = NULL;
    this->OwnerPlayerPlane = NULL;
    this->OwnerAIPlane = NULL;
    this->OwnerAIHeli = NULL;
    this->DamagedBodyMeshComponent = NULL;
    this->DamagedPartsMeshComponent = NULL;
    this->DamagedStaticMeshComponent = NULL;
}

