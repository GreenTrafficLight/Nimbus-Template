#pragma once
#include "CoreMinimal.h"
#include "EGraphicsSettings.generated.h"

UENUM(BlueprintType)
enum class EGraphicsSettings : uint8 {
    PS4Common,
    XBoxOneCommon,
    WindowsCommon,
    VRHangar,
    VRMission,
    VRAirShow,
    PS4Neo,
    PS4NeoVRHangar,
    PS4NeoVRMission,
    PS4NeoVRAirShow,
    Scorpio,
    Count,
};

