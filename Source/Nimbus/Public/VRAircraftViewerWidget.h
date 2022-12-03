#pragma once
#include "CoreMinimal.h"
#include "VRMenuBaseWidget.h"
#include "VRAircraftViewerWidget.generated.h"

class AStaticMeshActor;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRAircraftViewerWidget : public UVRMenuBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* HangarLadder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* UmgControlText;
    
public:
    UVRAircraftViewerWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnFrameInAnimationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFadeOutStarted();
    
};

