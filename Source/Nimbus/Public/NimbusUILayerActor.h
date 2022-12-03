#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NimbusUILayerActor.generated.h"

class UWidgetComponent;

UCLASS(Blueprintable)
class NIMBUS_API ANimbusUILayerActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent;
    
public:
    ANimbusUILayerActor();
};

