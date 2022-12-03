#pragma once
#include "CoreMinimal.h"
#include "AircraftTreeAnimationBase.h"
#include "AircraftTreeAnimationUnlock.generated.h"

class UAircraftTreeLink;

UCLASS(Blueprintable)
class NIMBUS_API UAircraftTreeAnimationUnlock : public UAircraftTreeAnimationBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAircraftTreeLink* Link;
    
public:
    UAircraftTreeAnimationUnlock();
};

