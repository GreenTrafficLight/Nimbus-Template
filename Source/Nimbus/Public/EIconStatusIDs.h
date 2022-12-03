#pragma once
#include "CoreMinimal.h"
#include "EIconStatusIDs.generated.h"

UENUM(BlueprintType)
enum class EIconStatusIDs : uint8 {
    None,
    New,
    Dlc,
    Locked,
    Updated,
    Menu,
    NewStore,
    Num,
};

