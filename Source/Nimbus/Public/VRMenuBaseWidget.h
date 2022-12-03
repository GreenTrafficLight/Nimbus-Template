#pragma once
#include "CoreMinimal.h"
#include "MenuBaseWidget.h"
#include "VRMenuBaseWidget.generated.h"

class AActor;
class AStaticMeshActor;
class UTextBlockCustomized;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRMenuBaseWidget : public UMenuBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* HangarCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* ViewerIndicator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTextBlockCustomized*> AnimationTextList;
    
public:
    UVRMenuBaseWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayViewerFrameOutAnimBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayViewerFrameInAnimBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFrameOutAnimBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFrameInAnimBP();
    
    UFUNCTION(BlueprintCallable)
    void OnFrameOutAnimationEndBP();
    
};

