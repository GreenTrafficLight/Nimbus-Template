#pragma once
#include "CoreMinimal.h"
#include "EMissileAlert.generated.h"

UENUM(BlueprintType)
enum class EMissileAlert : uint8 {
    MissileAlertStandby,
    MissileAlertNear,
    MissileAlertVeryNear,
};

