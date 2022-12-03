#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Widget3D.generated.h"

class UWidgetComponent;

UCLASS(Blueprintable)
class NIMBUS_API AWidget3D : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* Widget2D;
    
    AWidget3D();
};

