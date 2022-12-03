#pragma once
#include "CoreMinimal.h"
#include "VRMenuBaseWidget.h"
#include "UObject/NoExportTypes.h"
#include "VRMissionSelectWidget.generated.h"

class UVRSelectorUnit;
class UTexture2D;
class UPanelWidget;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRMissionSelectWidget : public UVRMenuBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> ThumbnailAssetReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> ThumbnailTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* InfoPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MissionThumbnailImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVRSelectorUnit* SelectorUnitWidget;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutSeconds;
    
    UVRMissionSelectWidget();
    UFUNCTION(BlueprintCallable)
    static void SetVRMissionSelectBgAlreadyFrameInFlag(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    bool IsToPlayFrameInAnimation();
    
};

