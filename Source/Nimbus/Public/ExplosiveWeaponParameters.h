#pragma once
#include "CoreMinimal.h"
#include "WeaponParameters.h"
#include "ExplosiveWeaponParameters.generated.h"

UCLASS(Blueprintable)
class UExplosiveWeaponParameters : public UWeaponParameters {
    GENERATED_BODY()
public:
    UExplosiveWeaponParameters();
};

