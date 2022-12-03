#pragma once
#include "CoreMinimal.h"
#include "AIPlaneBehaviorShieldWork.generated.h"

class AGameObject;
class AWeaponBase;

USTRUCT(BlueprintType)
struct FAIPlaneBehaviorShieldWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameObject* TargetObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWeaponBase* FiredWeaponObject;
    
    NIMBUS_API FAIPlaneBehaviorShieldWork();
};

