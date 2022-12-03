#pragma once
#include "CoreMinimal.h"
#include "EPlaneTargetMode.generated.h"

UENUM(BlueprintType)
enum class EPlaneTargetMode : uint8 {
    CampaignAndOnline,
    VR,
    FreeFlight,
};

