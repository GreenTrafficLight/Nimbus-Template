#pragma once
#include "CoreMinimal.h"
#include "EVRSoundActor.generated.h"

UENUM(BlueprintType)
enum class EVRSoundActor : uint8 {
    WarningLight,
    FiringSwitch,
    ChangeWeaponSwitch,
    Count,
};

