#pragma once
#include "CoreMinimal.h"
#include "VRMenuBaseWidget.h"
#include "VRBriefingWidget.generated.h"

class UMovieSubtitleWidget;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRBriefingWidget : public UVRMenuBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSubtitleWidget* UmgMovieSubtitle;
    
public:
    UVRBriefingWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMapAnimationBP(int32 Mission, int32 Index);
    
};

