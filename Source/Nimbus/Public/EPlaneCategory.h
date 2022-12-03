#pragma once
#include "CoreMinimal.h"
#include "EPlaneCategory.generated.h"

UENUM(BlueprintType)
enum class EPlaneCategory : uint8 {
    Fighter,
    Multirole,
    Attacker,
    Bomber,
};

