#pragma once
#include "CoreMinimal.h"
#include "EAIAlert.generated.h"

UENUM(BlueprintType)
enum class EAIAlert : uint8 {
    None,
    Gun,
    Missle,
    SpecialWeapon,
};

