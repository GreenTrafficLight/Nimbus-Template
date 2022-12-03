#pragma once
#include "CoreMinimal.h"
#include "EPlayerSystemDamageType.generated.h"

UENUM(BlueprintType)
enum class EPlayerSystemDamageType : uint8 {
    CrashOnEnvironment,
    CrashOnEnvironmentGround,
    CrashOnEnvironmentSea,
    OutOfCombatZone,
    OutOfRunwayZone,
};

