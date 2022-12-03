#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIManagerActor.h"
#include "GlowParameters.h"
#include "MultiMissionUIManagerActor.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class NIMBUS_API AMultiMissionUIManagerActor : public AUIManagerActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlowParameters HUDGlowParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HudOpacityOnPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> ErrorBackgroundWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ErrorBackgroundWidget;
    
public:
    AMultiMissionUIManagerActor();
};

