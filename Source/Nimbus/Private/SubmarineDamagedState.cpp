#include "SubmarineDamagedState.h"

class AActor;
class UPrimitiveComponent;

void USubmarineDamagedState::OnVisibilityChanged(bool bVisibility) {
}

void USubmarineDamagedState::OnRestored() {
}

void USubmarineDamagedState::OnComponentHitSurface(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

USubmarineDamagedState::USubmarineDamagedState() {
    this->bApplyExplosionPhysics = false;
    this->PhysicsMesh = NULL;
    this->PartsDestroyedVFX = NULL;
    this->bPlayDeathAnimation = false;
    this->AnimationMesh = NULL;
    this->DeathAnimationDelay = 0.00f;
    this->bApplySeaSprayForPhysicsMesh = false;
    this->bIsHorizontalPitch = false;
    this->PitchRotationPerSec = 0.00f;
    this->MainBodyDestructionDelayTime = 5.00f;
    this->OwnerGameObject = NULL;
    this->OwnerMeshComponent = NULL;
    this->OwnerBridgeMeshComponent = NULL;
    this->PhysicsMeshComponent = NULL;
    this->AnimationMeshComponent = NULL;
    this->VfxAttachedComponent = NULL;
}

