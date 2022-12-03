#pragma once
#include "CoreMinimal.h"
#include "WeaponMovementParameters.h"
#include "MissileMovementParameters.generated.h"

UCLASS(Blueprintable)
class UMissileMovementParameters : public UWeaponMovementParameters {
    GENERATED_BODY()
public:
    UMissileMovementParameters();
};

