#pragma once
#include "CoreMinimal.h"
#include "ETGTP_PhaseType.generated.h"

UENUM(BlueprintType)
enum class ETGTP_PhaseType : uint8 {
    None,
    AimStart,
    AimComplete,
    Drop,
    AimFailure,
    MISS,
    HIT,
    CRITICAL,
    MAX,
};

