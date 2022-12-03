#pragma once
#include "CoreMinimal.h"
#include "EChangeMenuState.generated.h"

UENUM(BlueprintType)
enum class EChangeMenuState : uint8 {
    WaitChange,
    Start,
    StartClose,
    WaitClose,
    EndClose,
    WaitRefreshEntitlement,
    ChangeMenu,
    StartOpen,
    StartOpenAnim,
    WaitOpen,
    EndOpen,
    End,
};

