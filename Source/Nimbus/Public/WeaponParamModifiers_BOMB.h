#pragma once
#include "CoreMinimal.h"
#include "WeaponParamModifiers_EXPLOSIVE.h"
#include "WeaponParamModifiers_BOMB.generated.h"

USTRUCT(BlueprintType)
struct FWeaponParamModifiers_BOMB : public FWeaponParamModifiers_EXPLOSIVE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHomingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnAngleLimit;
    
    NIMBUS_API FWeaponParamModifiers_BOMB();
};

