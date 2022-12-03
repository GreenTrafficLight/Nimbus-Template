#pragma once
#include "CoreMinimal.h"
#include "VRMenuBaseWidget.h"
#include "UObject/NoExportTypes.h"
#include "VRDebriefingWidget.generated.h"

class UMovieSubtitleWidget;
class UTexture2D;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRDebriefingWidget : public UVRMenuBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInSeconds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSubtitleWidget* UmgMovieSubtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ThumbnailAssetReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ThumbnailTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MissionThumbnailImage;
    
public:
    UVRDebriefingWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializedCustom();
    
};

