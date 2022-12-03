#pragma once
#include "CoreMinimal.h"
#include "AircraftTreeAnimationBase.h"
#include "AircraftTreeAnimationFadeNode.generated.h"

class UAircraftTreeGroup;

UCLASS(Blueprintable)
class NIMBUS_API UAircraftTreeAnimationFadeNode : public UAircraftTreeAnimationBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAircraftTreeGroup* Group;
    
public:
    UAircraftTreeAnimationFadeNode();
};

