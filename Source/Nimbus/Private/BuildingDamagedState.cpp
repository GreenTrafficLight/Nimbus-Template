#include "BuildingDamagedState.h"

class AActor;
class UPrimitiveComponent;

void UBuildingDamagedState::OnVisibilityChanged(bool bVisibility) {
}

void UBuildingDamagedState::OnRestored() {
}

void UBuildingDamagedState::OnComponentHitSurface(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

UBuildingDamagedState::UBuildingDamagedState() {
    this->bHasDestructiblePart = false;
    this->bShowDamagedStaticMesh = false;
    this->DamagedMesh = NULL;
    this->bApplyExplosionPhysics = false;
    this->PhysicsMesh = NULL;
    this->PartsDestroyedVFX = NULL;
    this->bPlayDeathAnimation = false;
    this->AnimationMesh = NULL;
    this->DeathAnimationDelay = 0.00f;
    this->BuildingType = EBuildingType::Normal;
    this->bApplySeaSprayForPhysicsMesh = false;
    this->OwnerGameObject = NULL;
    this->DestructibleObject = NULL;
    this->OwnerMeshComponent = NULL;
    this->UndamagedMesh = NULL;
    this->PhysicsMeshComponent = NULL;
    this->AnimationMeshComponent = NULL;
    this->VfxAttachedComponent = NULL;
}

