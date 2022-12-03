#pragma once
#include "CoreMinimal.h"
#include "WeaponParamModifiers_BOMB.h"
#include "WeaponParamModifiers_SFFSBOMB.generated.h"

USTRUCT(BlueprintType)
struct FWeaponParamModifiers_SFFSBOMB : public FWeaponParamModifiers_BOMB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScatterStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScatterInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScatterAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScatterCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChildInitialSpeed;
    
    NIMBUS_API FWeaponParamModifiers_SFFSBOMB();
};

