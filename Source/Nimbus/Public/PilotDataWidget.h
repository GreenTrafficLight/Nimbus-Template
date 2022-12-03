#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PilotDataWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UPilotDataWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* UmgUnlockAnimation;
    
    UPilotDataWidget();
};

