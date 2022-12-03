#pragma once
#include "CoreMinimal.h"
#include "EMissionSuccessNotificationType.generated.h"

UENUM(BlueprintType)
enum class EMissionSuccessNotificationType : uint8 {
    MissionAccomplished,
    MissionAccomplishedSilent,
    None,
};

