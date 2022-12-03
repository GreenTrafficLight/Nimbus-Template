#pragma once
#include "CoreMinimal.h"
#include "CampaignRetryWidget.h"
#include "VRRetryWidget.generated.h"

class UTextBlock;
class UBorder;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRRetryWidget : public UCampaignRetryWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* UmgDescriptionTextVR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBorder*> UmgBorderNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBorder*> UmgBorderSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutSeconds;
    
public:
    UVRRetryWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFrameOutAnimBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFrameInAnimBP();
    
    UFUNCTION(BlueprintCallable)
    void OnFrameOutAnimationEndBP();
    
};

