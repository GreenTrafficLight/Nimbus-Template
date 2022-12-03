#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "CombatZone.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API ACombatZone : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIFlightBufferDist;
    
public:
    ACombatZone();
};

