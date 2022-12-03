#pragma once
#include "CoreMinimal.h"
#include "NimbusUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "RadioText.h"
#include "UObject/NoExportTypes.h"
#include "ECameraType.h"
#include "HUDMessageWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UHUDMessageWidget : public UNimbusUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D HUDMessagePanelGap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D HUDMessagePanelGapVR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HUDWarningMessageBlinkTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HUDWeaponMessageBlinkTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HUDMessageColorDesaturationMaxComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ComWindowImage;
    
public:
    UHUDMessageWidget();
    UFUNCTION(BlueprintCallable)
    void TurnOffGlowForPortrait(float InLuminanceRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPortraitEvent();
    
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
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCurrentHUDAlertColorUpdated(const FLinearColor& NewColor, bool bIsDefaultColor);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCameraViewChanged(ECameraType CameraType);
    
};

