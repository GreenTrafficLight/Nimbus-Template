#pragma once
#include "CoreMinimal.h"
#include "ExplosiveWeaponParameters.h"
#include "MissileParameters.generated.h"

UCLASS(Blueprintable)
class UMissileParameters : public UExplosiveWeaponParameters {
    GENERATED_BODY()
public:
    UMissileParameters();
};

