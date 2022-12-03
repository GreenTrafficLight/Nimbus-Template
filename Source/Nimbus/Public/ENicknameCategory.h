#pragma once
#include "CoreMinimal.h"
#include "ENicknameCategory.generated.h"

UENUM(BlueprintType)
enum class ENicknameCategory : uint8 {
    Others,
    Performance,
    Rank,
    Stage,
    Mission,
    WeaponParts,
    Aircraft,
    Obtained,
    NotObtained,
    All,
    Campaign,
    Multiplayer,
    VR,
    UnKnown,
    Count,
};

