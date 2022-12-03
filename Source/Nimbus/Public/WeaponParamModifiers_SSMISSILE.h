#pragma once
#include "CoreMinimal.h"
#include "WeaponParamModifiers_MISSILE.h"
#include "WeaponParamModifiers_SSMISSILE.generated.h"

USTRUCT(BlueprintType)
struct FWeaponParamModifiers_SSMISSILE : public FWeaponParamModifiers_MISSILE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AltitudeFromLaunch;
    
    NIMBUS_API FWeaponParamModifiers_SSMISSILE();
};

