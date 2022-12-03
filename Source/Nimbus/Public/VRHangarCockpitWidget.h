#pragma once
#include "CoreMinimal.h"
#include "VRMenuBaseWidget.h"
#include "VRHangarCockpitWidget.generated.h"

class UMovieSubtitleWidget;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRHangarCockpitWidget : public UVRMenuBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutSeconds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSubtitleWidget* UmgMovieSubtitle;
    
public:
    UVRHangarCockpitWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializedCustom();
    
};

