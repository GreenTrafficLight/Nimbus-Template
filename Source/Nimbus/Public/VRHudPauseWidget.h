#pragma once
#include "CoreMinimal.h"
#include "MissionBaseWidget.h"
#include "VRHudPauseWidget.generated.h"

class UTextBlock;
class ANimbusHUD;
class UBorder;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRHudPauseWidget : public UMissionBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANimbusHUD* HUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* UmgDescriptionTextVR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBorder*> UmgBorderNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBorder*> UmgBorderSelected;
    
    UPROPERTY(EditAnywhere, Instanced)
    UTextBlock* UmgDialogNormalItemText[4];
    
    UPROPERTY(EditAnywhere, Instanced)
    UTextBlock* UmgDialogSelectedItemText[4];
    
public:
    UVRHudPauseWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFrameOutAnimBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFrameInAnimBP();
    
    UFUNCTION(BlueprintCallable)
    void OnFrameOutAnimationEndBP();
    
};

