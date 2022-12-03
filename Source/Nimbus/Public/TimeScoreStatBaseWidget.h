#pragma once
#include "CoreMinimal.h"
#include "NimbusUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "TimeScoreStatBaseWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UTimeScoreStatBaseWidget : public UNimbusUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissionPhaseSecondsLeftToStartBlinking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimerBlinkRate;
    
public:
    UTimeScoreStatBaseWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnCurrentHUDAlertColorUpdated(const FLinearColor& NewColor, bool bIsDefaultColor);
    
};

