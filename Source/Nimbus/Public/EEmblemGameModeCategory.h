#pragma once
#include "CoreMinimal.h"
#include "EEmblemGameModeCategory.generated.h"

UENUM(BlueprintType)
enum class EEmblemGameModeCategory : uint8 {
    Campaign,
    Multiplayer,
    VR,
    Count,
};

