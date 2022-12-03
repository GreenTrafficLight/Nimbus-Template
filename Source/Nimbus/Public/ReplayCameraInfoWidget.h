#pragma once
#include "CoreMinimal.h"
#include "CameraSettings.h"
#include "Blueprint/UserWidget.h"
#include "ReplayCameraInfoWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UReplayCameraInfoWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UReplayCameraInfoWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void OnCameraSettingsUpdate(uint8 CameraId, const FCameraSettings& CameraSettings);
    
};

