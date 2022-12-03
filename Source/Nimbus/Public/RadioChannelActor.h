#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RadioChannelActor.generated.h"

class UAkComponent;

UCLASS(Blueprintable, NotPlaceable)
class NIMBUS_API ARadioChannelActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AudioComponent;
    
public:
    ARadioChannelActor();
};

