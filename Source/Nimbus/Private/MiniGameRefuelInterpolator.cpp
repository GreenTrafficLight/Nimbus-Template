#include "MiniGameRefuelInterpolator.h"

void UMiniGameRefuelInterpolator::OnPlayerAdjustMovedTransformHandler(float DeltaTime, bool& bInOutChangedTransform, FVector& InOutNextLocation, FRotator& InOutNextRotation, FRotator& InOutNextMomentSpeed) {
}

UMiniGameRefuelInterpolator::UMiniGameRefuelInterpolator() {
    this->PlayerPlane = NULL;
    this->WeaponActivator = NULL;
    this->Settings = NULL;
}

