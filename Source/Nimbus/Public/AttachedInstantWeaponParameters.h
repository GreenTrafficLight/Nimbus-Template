#pragma once
#include "CoreMinimal.h"
#include "WeaponParameters.h"
#include "AttachedInstantWeaponParameters.generated.h"

UCLASS(Blueprintable)
class UAttachedInstantWeaponParameters : public UWeaponParameters {
    GENERATED_BODY()
public:
    UAttachedInstantWeaponParameters();
};

