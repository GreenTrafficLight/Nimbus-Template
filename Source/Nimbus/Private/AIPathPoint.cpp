#include "AIPathPoint.h"

AAIPathPoint::AAIPathPoint() {
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	SetRootComponent(RootComponent);
    this->RadiusInMeter = 0.00f;
    this->bEnableSpeed = false;
    this->bEnableAcceleration = false;
    this->bEnableRotationSpeed = false;
    this->bEnableSnapSetting = false;
    this->SpeedKmph = 0.00f;
    this->AccelerationInMeter = 0.00f;
    this->RotationSpeedDegree = 0.00f;
    this->SnapSetting = EAIPathMovingActorSnap::ObjectSetting;
}

