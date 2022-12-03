#pragma once
#include "CoreMinimal.h"
#include "UI3DWidgetActor.h"
#include "UIBackgroundActor.generated.h"

class UManaComponent;

UCLASS(Blueprintable)
class NIMBUS_API AUIBackgroundActor : public AUI3DWidgetActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UManaComponent* ManaComponent;
    
public:
    AUIBackgroundActor();
};

