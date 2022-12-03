#pragma once
#include "CoreMinimal.h"
#include "ExplosiveWeaponParameters.h"
#include "BombParameters.generated.h"

UCLASS(Blueprintable)
class UBombParameters : public UExplosiveWeaponParameters {
    GENERATED_BODY()
public:
    UBombParameters();
};

