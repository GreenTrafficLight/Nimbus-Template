#include "SystemObjectSearchLight.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

class AActor;
class UPrimitiveComponent;
class AGameObject;

void ASystemObjectSearchLight::TurnOn() {
}

void ASystemObjectSearchLight::TurnOff() {
}

void ASystemObjectSearchLight::StopAmbientSound() {
}

void ASystemObjectSearchLight::PlayAmbientSound() {
}

void ASystemObjectSearchLight::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASystemObjectSearchLight::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo) {
}

bool ASystemObjectSearchLight::IsTurnOn() {
    return false;
}

bool ASystemObjectSearchLight::IsTracking() {
    return false;
}

AGameObject* ASystemObjectSearchLight::GetTrackingTarget() {
    return NULL;
}

ASystemObjectSearchLight::ASystemObjectSearchLight() {
    this->SearchTargetDeg = 120.00f;
    this->SearchMoveMode = ESearchMoveMode::Move_Pitch;
    this->SearchWaitTime = 0.00f;
    this->SearchingRotateSpeedNew = 20.00f;
    this->TrackingPitch = 180.00f;
    this->TrackingYaw = 180.00f;
    this->TrackingRotateSpeedNew = 40.00f;
    this->bSeeingAproaching = false;
    this->SeeingAproachingDistance = 0.00f;
    this->SeeingAproachingSpeed = 40.00f;
    this->TargetPriority = ESearchLightTargetPriority::All;
    this->RadiationAngle = 1.00f;
    this->CollisionAngle = 1.00f;
    this->Radius = 20000.00f;
    this->SeeingAproachingDistanceUU = 10000.00f;
    this->ThicknessRete = 5.00f;
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("BoundingComponent"));
    this->SearchLightRoot = CreateDefaultSubobject<USphereComponent>(TEXT("SearchLightRoot"));
    this->SearchLightCollisionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SearchLightCollisionMesh"));
    this->SpotLightComponent = NULL;
    this->LightBeamMeshComponent = NULL;
    this->LightBaseMeshComponent = NULL;
    this->PostProcessComponent = NULL;
    this->TrackingTarget = NULL;
    this->SwapAproachingTarget = NULL;
}

