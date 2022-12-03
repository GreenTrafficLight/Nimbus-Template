#pragma once
#include "CoreMinimal.h"
#include "WeaponSlot.h"
#include "FlareSlot.generated.h"

USTRUCT(BlueprintType)
struct FFlareSlot : public FWeaponSlot {
    GENERATED_BODY()
public:
    NIMBUS_API FFlareSlot();
};

