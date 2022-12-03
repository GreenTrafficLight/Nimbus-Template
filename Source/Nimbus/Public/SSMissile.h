#pragma once
#include "CoreMinimal.h"
#include "Missile.h"
#include "SSMissile.generated.h"

UCLASS(Abstract, Blueprintable)
class NIMBUS_API ASSMissile : public AMissile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AltitudeFromLaunch;
    
public:
    ASSMissile();
};

