#pragma once
#include "CoreMinimal.h"
#include "ENicknameGameModeCategory.generated.h"

UENUM(BlueprintType)
enum class ENicknameGameModeCategory : uint8 {
    Campaign,
    Multiplayer,
    VR,
    UnKnown,
    Count,
};

