#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_CloudEvent.generated.h"

UENUM(BlueprintType)
enum class EMissionCondition_CloudEvent : uint8 {
    None,
    EnterCloud,
    ExitCloud,
    BeginIcing,
    Icing,
    EMissionCondition_MAX UMETA(Hidden),
};

