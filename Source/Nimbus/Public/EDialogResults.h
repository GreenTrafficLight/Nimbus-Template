#pragma once
#include "CoreMinimal.h"
#include "EDialogResults.generated.h"

UENUM(BlueprintType)
enum class EDialogResults : uint8 {
    None,
    Cancel,
    First,
    Second,
    Num,
};

