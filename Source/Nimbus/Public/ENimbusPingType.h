#pragma once
#include "CoreMinimal.h"
#include "ENimbusPingType.generated.h"

UENUM(BlueprintType)
enum class ENimbusPingType : uint8 {
    PING_ATTACK,
    PING_HELP,
    PING_ALLY,
    PING_ENEMY,
    PING_DEFAULT,
    PING_MAX UMETA(Hidden),
};

