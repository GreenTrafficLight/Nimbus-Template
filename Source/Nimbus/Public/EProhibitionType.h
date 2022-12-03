#pragma once
#include "CoreMinimal.h"
#include "EProhibitionType.generated.h"

UENUM(BlueprintType)
enum class EProhibitionType : uint8 {
    HandOverController,
    Screenshot,
    VideoClip,
    Broadcast,
    ScreenSharing,
    RemotePlay,
    Count,
};

