#pragma once
#include "CoreMinimal.h"
#include "WeaponParamModifiers.h"
#include "WeaponParamModifiers_EXPLOSIVE.generated.h"

USTRUCT(BlueprintType)
struct FWeaponParamModifiers_EXPLOSIVE : public FWeaponParamModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaOfEffectDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IgnitionInitialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreefallAcceleration;
    
    NIMBUS_API FWeaponParamModifiers_EXPLOSIVE();
};

