#pragma once
#include "CoreMinimal.h"
#include "VRMenuBaseWidget.h"
#include "UObject/NoExportTypes.h"
#include "VRPrologueWidget.generated.h"

class UMovieSubtitleWidget;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRPrologueWidget : public UVRMenuBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SubtitleDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BgmDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastWaitSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeepingBlackSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSubtitleWidget* UmgMovieSubtitle;
    
public:
    UVRPrologueWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySubtitleAnimationBP(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool IsToPlayFrameInAnimation();
    
};

