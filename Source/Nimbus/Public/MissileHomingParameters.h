#pragma once
#include "CoreMinimal.h"
#include "WeaponHomingParameters.h"
#include "MissileHomingParameters.generated.h"

UCLASS(Blueprintable)
class UMissileHomingParameters : public UWeaponHomingParameters {
    GENERATED_BODY()
public:
    UMissileHomingParameters();
};

