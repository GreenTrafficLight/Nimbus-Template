#pragma once
#include "CoreMinimal.h"
#include "EGuideMessageType.generated.h"

UENUM(BlueprintType)
enum class EGuideMessageType : uint8 {
    Takeoff,
    ViewChange,
    IGCSkip,
};

