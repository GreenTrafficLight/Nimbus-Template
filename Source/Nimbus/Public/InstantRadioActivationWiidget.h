#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InstantRadioActivationWiidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UInstantRadioActivationWiidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SelectionAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SendToTeamPlayerDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControlRepeatThresholdSeconds;
    
public:
    UInstantRadioActivationWiidget();
};

