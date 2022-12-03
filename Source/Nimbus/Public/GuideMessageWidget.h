#pragma once
#include "CoreMinimal.h"
#include "NimbusUserWidget.h"
#include "EGuideMessageType.h"
#include "ECameraType.h"
#include "GuideMessageWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UGuideMessageWidget : public UNimbusUserWidget {
    GENERATED_BODY()
public:
    UGuideMessageWidget();
    UFUNCTION(BlueprintCallable)
    void OnHUDEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnHUDDisabled();
    
    UFUNCTION(BlueprintCallable)
    void OnCameraViewChanged(ECameraType CameraType);
    
    UFUNCTION(BlueprintCallable)
    void HideGuideMessage();
    
    UFUNCTION(BlueprintCallable)
    void DisplayGuideMessage(EGuideMessageType GuideMessageType);
    
};

