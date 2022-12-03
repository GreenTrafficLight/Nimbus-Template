#pragma once
#include "CoreMinimal.h"
#include "ETGTP_AttackResult.generated.h"

UENUM(BlueprintType)
enum class ETGTP_AttackResult : uint8 {
    Drop,
    MISS,
    HIT,
    CRITICAL,
    ETGTP_MAX UMETA(Hidden),
};

