#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UI3DWidgetActor.generated.h"

class UWidgetComponent;

UCLASS(Blueprintable)
class NIMBUS_API AUI3DWidgetActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUpdateTransformByCamera: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent;
    
public:
    AUI3DWidgetActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidgetComponent* GetWidgetComponent();
    
};

