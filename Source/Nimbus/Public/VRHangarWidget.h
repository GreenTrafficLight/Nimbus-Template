#pragma once
#include "CoreMinimal.h"
#include "VRMenuBaseWidget.h"
#include "VRHangarWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRHangarWidget : public UVRMenuBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstKeepingBlackSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HangarFadeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreStartDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutSeconds;
    
    UVRHangarWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SkipVisorAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVRFadingCompletedCustom(bool IsFadeIn);
    
    UFUNCTION(BlueprintCallable)
    void OnVisorStartupAnimFinishedBP();
    
    UFUNCTION(BlueprintCallable)
    void ChangeNextMenu();
    
};

