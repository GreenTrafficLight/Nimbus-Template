#pragma once
#include "CoreMinimal.h"
#include "MenuBaseWidget.h"
#include "VRMissionLoadWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRMissionLoadWidget : public UMenuBaseWidget {
    GENERATED_BODY()
public:
    UVRMissionLoadWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFrameOutAnimBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFrameInAnimBP();
    
    UFUNCTION(BlueprintCallable)
    void OnFrameOutAnimationEndBP();
    
};

