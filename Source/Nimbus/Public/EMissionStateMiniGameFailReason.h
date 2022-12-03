#pragma once
#include "CoreMinimal.h"
#include "EMissionStateMiniGameFailReason.generated.h"

UENUM(BlueprintType)
enum class EMissionStateMiniGameFailReason : uint8 {
    TimeOut,
};

