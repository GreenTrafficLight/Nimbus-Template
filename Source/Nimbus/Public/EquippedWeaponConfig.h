#pragma once
#include "CoreMinimal.h"
#include "EquippedWeaponConfig.generated.h"

class UWeaponParameters;

USTRUCT(BlueprintType)
struct FEquippedWeaponConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWeaponParameters* WeaponParameters;
    
    NIMBUS_API FEquippedWeaponConfig();
};

