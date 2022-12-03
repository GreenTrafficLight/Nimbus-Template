#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AircraftTreeAnimationPlayer.generated.h"

class UAircraftTreeAnimationBase;

UCLASS(Blueprintable)
class NIMBUS_API UAircraftTreeAnimationPlayer : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAircraftTreeAnimationBase*> Animations;
    
public:
    UAircraftTreeAnimationPlayer();
};

