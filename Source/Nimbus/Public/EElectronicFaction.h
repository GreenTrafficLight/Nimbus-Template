#pragma once
#include "CoreMinimal.h"
#include "EElectronicFaction.generated.h"

UENUM(BlueprintType)
enum class EElectronicFaction : uint8 {
    Myself,
    Friend,
    Enemy,
};

