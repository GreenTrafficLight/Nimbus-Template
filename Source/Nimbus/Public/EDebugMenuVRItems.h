#pragma once
#include "CoreMinimal.h"
#include "EDebugMenuVRItems.generated.h"

UENUM(BlueprintType)
enum class EDebugMenuVRItems : uint8 {
    EnableVRTestMissionMenu,
    ToggleOutOfCockpitWarning,
    SetVRPitchMeterDepth,
    ToggleVREquipGunTrackingParts,
    MAX,
};

