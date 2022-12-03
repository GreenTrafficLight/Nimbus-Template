#pragma once
#include "CoreMinimal.h"
#include "ESubmarineRailgunEvent.generated.h"

UENUM(BlueprintType)
enum class ESubmarineRailgunEvent : uint8 {
    None,
    Extracted,
    Broken,
};

