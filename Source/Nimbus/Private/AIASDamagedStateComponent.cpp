#include "AIASDamagedStateComponent.h"

class AActor;
class UPrimitiveComponent;

void UAIASDamagedStateComponent::OnVisibilityChanged(bool bVisibility) {
}

void UAIASDamagedStateComponent::OnRestored() {
}

void UAIASDamagedStateComponent::OnComponentHitSurface(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UAIASDamagedStateComponent::ForceShowExtraDestroyedVFX() {
}

void UAIASDamagedStateComponent::DamageStateLifeSpanExpired(FDamagedStateInstance& DamagedStateInstance) {
}

UAIASDamagedStateComponent::UAIASDamagedStateComponent() {
    this->bAreDamagedStatesCompounded = false;
    this->bActivateBeginning = false;
    this->bShowOwnerComponent = false;
    this->bEnableCheckGroundHit = false;
    this->MainBodySpinParam = NULL;
    this->DamageBreakApartSequence = NULL;
    this->DestroyedBodyMeshComponentName = TEXT("DamagedMainBodyMesh");
    this->DestroyedPartsMeshComponentName = TEXT("DamagedPartsMesh");
    this->FallingSoundPlayEvent = NULL;
    this->FallingSoundStopEvent = NULL;
    this->bShowExtraDestroyedVFX = false;
    this->bShowGroundDecal = false;
    this->bIsShownInFirstPersonView = false;
    this->bIsShownInCockpitView = false;
    this->bIsShownInThirdPersonView = false;
    this->OwnerGameObject = NULL;
    this->OwnerMesh = NULL;
    this->OwnerDamagedMesh = NULL;
    this->OwnerAIPlane = NULL;
    this->PlaneBodyMeshComponent = NULL;
    this->DamagedBodyMeshComponent = NULL;
    this->DamagedPartsMeshComponent = NULL;
    this->DamagedStaticMeshComponent = NULL;
    this->GameInstance = NULL;
}

