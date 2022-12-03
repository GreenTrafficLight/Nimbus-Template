#pragma once
#include "CoreMinimal.h"
#include "EGunCaliber.generated.h"

UENUM(BlueprintType)
enum class EGunCaliber : uint8 {
    GunCaliber20mm,
    GunCaliber27mm,
    GunCaliber30mm,
    GunCaliberAvenger,
    GunCaliberPGun,
};

