#pragma once
#include "CoreMinimal.h"
#include "ExplosiveWeaponParameters.h"
#include "ArtilleryParameters.generated.h"

UCLASS(Blueprintable)
class UArtilleryParameters : public UExplosiveWeaponParameters {
    GENERATED_BODY()
public:
    UArtilleryParameters();
};

