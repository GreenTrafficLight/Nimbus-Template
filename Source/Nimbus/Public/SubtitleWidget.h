#pragma once
#include "CoreMinimal.h"
#include "NimbusUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "RadioText.h"
#include "Components/SlateWrapperTypes.h"
#include "ECameraType.h"
#include "UObject/NoExportTypes.h"
#include "SubtitleWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API USubtitleWidget : public UNimbusUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MessageTextColorOverride;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility RadioBracketLeftVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility RadioBracketRightTopVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility RadioBracketRightCenterVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility RadioBracketRightBottomVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarningBlinkTimeSeconds;
    
public:
    USubtitleWidget();
    UFUNCTION(BlueprintCallable)
    void RadioMessageReceived(const FRadioText& RadioText);
    
    UFUNCTION(BlueprintCallable)
    void OnHUDEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnHUDDisabled();
    
    UFUNCTION(BlueprintCallable)
    void OnHUDAlertEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnHUDAlertBegin();
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentHUDAlertColorUpdated(const FLinearColor& NewColor, bool bIsDefaultColor);
    
    UFUNCTION(BlueprintCallable)
    void OnCameraViewChanged(ECameraType CameraType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnalyzeAnimationStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnalyzeAnimationShow(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnalyzeAnimationEnd();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetVRLocation(const FVector2D& NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void DebugPrintVRLocation();
    
};

