#pragma once
#include "CoreMinimal.h"
#include "MultiMissionMenuBaseWidget.h"
#include "MultiResultWinLoseWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMultiResultWinLoseWidget : public UMultiMissionMenuBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreRollingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxScoreRollingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimationResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimationMVP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimationNextScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowAllPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InactivePeriodAfterAnimationCompletion;
    
public:
    UMultiResultWinLoseWidget();
private:
    UFUNCTION(BlueprintCallable)
    void ProceedToNextAnimationPhase();
    
};

