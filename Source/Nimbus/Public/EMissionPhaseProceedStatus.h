#pragma once
#include "CoreMinimal.h"
#include "EMissionPhaseProceedStatus.generated.h"

UENUM(BlueprintType)
enum class EMissionPhaseProceedStatus : uint8 {
    Succeeded,
    Failed,
};

