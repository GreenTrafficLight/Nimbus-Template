#pragma once
#include "CoreMinimal.h"
#include "WeaponMovementParameters.h"
#include "BombMovementParameters.generated.h"

UCLASS(Blueprintable)
class UBombMovementParameters : public UWeaponMovementParameters {
    GENERATED_BODY()
public:
    UBombMovementParameters();
};

