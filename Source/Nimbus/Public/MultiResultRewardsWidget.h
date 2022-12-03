#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MultiMissionMenuBaseWidget.h"
#include "UObject/NoExportTypes.h"
#include "MultiResultRewardsWidget.generated.h"

class UWidgetAnimation;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMultiResultRewardsWidget : public UMultiMissionMenuBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* UmgRankUpAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* UmgPerformanceEvaluation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* UmgRankAppearAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* UmgMRPEndAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankScorePlaySpeed;
    
    UPROPERTY(EditAnywhere)
    uint64 MMRPScorePlaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> MedalItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterSectionAnimationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MRPShowAcquisitionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MRPRollingDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RankRollingDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MaxRankGoldColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MaxRankGoldGlowColor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowAllMedals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InactivePeriodAfterAnimationCompletion;
    
public:
    UMultiResultRewardsWidget();
private:
    UFUNCTION(BlueprintCallable)
    void ProceedToNextAnimationPhase();
    
    UFUNCTION(BlueprintCallable)
    void OnRankUpAnimationFinished();
    
};

