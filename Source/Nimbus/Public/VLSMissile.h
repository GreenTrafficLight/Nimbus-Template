#pragma once
#include "CoreMinimal.h"
#include "Missile.h"
#include "VLSMissile.generated.h"

UCLASS(Abstract, Blueprintable)
class NIMBUS_API AVLSMissile : public AMissile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OmnidirectionalDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OmnidirectionalAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ADMM_ExternalVelocityDecaySpeed;
    
public:
    AVLSMissile();
};

