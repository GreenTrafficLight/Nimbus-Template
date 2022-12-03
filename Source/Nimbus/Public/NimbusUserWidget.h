#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ECameraType.h"
#include "UObject/NoExportTypes.h"
#include "NimbusUserWidget.generated.h"

class UCameraViewComponent;
class APlayerPlane;
class ANimbusHUD;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UNimbusUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableOnPause;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerPlane* PlayerPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCameraViewComponent* CameraViewComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANimbusHUD* HUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShowGroup;
    
public:
    UNimbusUserWidget();
    UFUNCTION(BlueprintCallable)
    void OnVRFadeOut(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void OnSpecialWeaponChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetWeaponName();
    
    UFUNCTION(BlueprintCallable)
    void OnHUDShowGroup(int32 Group);
    
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

