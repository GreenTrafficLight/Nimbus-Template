#pragma once
#include "CoreMinimal.h"
#include "WeaponHomingParameters.h"
#include "BombHomingParameters.generated.h"

UCLASS(Blueprintable)
class UBombHomingParameters : public UWeaponHomingParameters {
    GENERATED_BODY()
public:
    UBombHomingParameters();
};

