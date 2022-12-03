#pragma once
#include "CoreMinimal.h"
#include "MenuEntryStatus.generated.h"

UENUM(BlueprintType)
enum class MenuEntryStatus : uint8 {
    None,
    Default,
    Normal,
};

