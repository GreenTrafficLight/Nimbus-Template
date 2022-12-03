#pragma once
#include "CoreMinimal.h"
#include "WeaponParamModifiers_MISSILE.h"
#include "WeaponParamModifiers_VLSMISSILE.generated.h"

USTRUCT(BlueprintType)
struct FWeaponParamModifiers_VLSMISSILE : public FWeaponParamModifiers_MISSILE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OmnidirectionalDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OmnidirectionalAbility;
    
    NIMBUS_API FWeaponParamModifiers_VLSMISSILE();
};

