#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WeaponParameters.generated.h"

class UWeaponParameters;

UCLASS(Blueprintable)
class UWeaponParameters : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWeaponParameters* ChildWeaponParameters;
    
    UWeaponParameters();
};

