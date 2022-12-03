#pragma once
#include "CoreMinimal.h"
#include "ScrollboxMenuBaseWidget.h"
#include "StringAssetReferenceAsyncLoadRequest.h"
#include "MedalTextureApplication.h"
#include "RewardMedalWidget.generated.h"

class UMaterialInterface;
class UMedalWidget;
class UMaterialInstanceDynamic;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API URewardMedalWidget : public UScrollboxMenuBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeLeftToShowNextButtonSeconds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMedalWidget*> MedalImageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReferenceAsyncLoadRequest> AsyncLoadRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMedalTextureApplication> LoadedTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DynamicGlowMaterialTemplateRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> GlowDynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> ImageForBGDots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* UsmMaterialToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllAsyncLoadedTextureApplied;
    
public:
    URewardMedalWidget();
};

