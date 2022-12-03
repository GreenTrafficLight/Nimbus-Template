#pragma once
#include "CoreMinimal.h"
#include "EGameSaveSlot.generated.h"

UENUM(BlueprintType)
enum class EGameSaveSlot : uint8 {
    GS_CAMPAIGN1,
    GS_CAMPAIGN2,
    GS_CAMPAIGN3,
    GS_MAX UMETA(Hidden),
};

