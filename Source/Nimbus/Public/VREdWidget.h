#pragma once
#include "CoreMinimal.h"
#include "VRMenuBaseWidget.h"
#include "UObject/NoExportTypes.h"
#include "VREdWidget.generated.h"

class UMovieSubtitleWidget;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVREdWidget : public UVRMenuBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstKeepingBlackSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastKeepingBlackSeconds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SubtitleDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSubtitleWidget* UmgMovieSubtitle;
    
public:
    UVREdWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySubtitleAnimationBP(int32 Index);
    
};

