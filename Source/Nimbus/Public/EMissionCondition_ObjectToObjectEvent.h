#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_ObjectToObjectEvent.generated.h"

UENUM(BlueprintType)
enum class EMissionCondition_ObjectToObjectEvent : uint8 {
    None,
    EnterLockonWarningArea,
    EnterGunRange,
    EnterSearchRange,
    EMissionCondition_MAX UMETA(Hidden),
};

