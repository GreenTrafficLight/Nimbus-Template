#pragma once
#include "CoreMinimal.h"
#include "TextureApplicationRewardScrollboxMedal.h"
#include "RewardScrollboxBaseWidget.h"
#include "StringAssetReferenceAsyncLoadRequestRewardMedal.h"
#include "RewardScrollboxMedalWidget.generated.h"

class UImage;
class UMaterialInterface;
class UMedalWidget;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API URewardScrollboxMedalWidget : public URewardScrollboxBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMedalWidget*> MedalImageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReferenceAsyncLoadRequestRewardMedal> AsyncLoadRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTextureApplicationRewardScrollboxMedal> LoadedTextures;
    
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
    URewardScrollboxMedalWidget();
};

