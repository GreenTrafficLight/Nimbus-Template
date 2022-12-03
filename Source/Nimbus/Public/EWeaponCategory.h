#pragma once
#include "CoreMinimal.h"
#include "EWeaponCategory.generated.h"

UENUM(BlueprintType)
enum class EWeaponCategory : uint8 {
    Air,
    Ground,
    Other,
};

