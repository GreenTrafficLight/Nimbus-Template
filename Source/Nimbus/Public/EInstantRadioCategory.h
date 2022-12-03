#pragma once
#include "CoreMinimal.h"
#include "EInstantRadioCategory.generated.h"

UENUM(BlueprintType)
enum class EInstantRadioCategory : uint8 {
    All,
    Greetings,
    Replies,
    BattleSituation,
    Feelings,
    Strategy,
    Action,
    Other,
    Special,
};

