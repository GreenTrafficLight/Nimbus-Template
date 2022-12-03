#pragma once
#include "CoreMinimal.h"
#include "WeaponParamModifiers_MISSILE.h"
#include "WeaponParamModifiers_SODBOMB.generated.h"

USTRUCT(BlueprintType)
struct FWeaponParamModifiers_SODBOMB : public FWeaponParamModifiers_MISSILE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DispersionStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DispersionInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DispersionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DispersionCount;
    
    NIMBUS_API FWeaponParamModifiers_SODBOMB();
};

