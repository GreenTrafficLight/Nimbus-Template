#pragma once
#include "CoreMinimal.h"
#include "WeaponParamModifiers_EXPLOSIVE.h"
#include "WeaponParamModifiers_ARTILLERY.generated.h"

USTRUCT(BlueprintType)
struct FWeaponParamModifiers_ARTILLERY : public FWeaponParamModifiers_EXPLOSIVE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpreadRadius;
    
    NIMBUS_API FWeaponParamModifiers_ARTILLERY();
};

