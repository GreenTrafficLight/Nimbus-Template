#pragma once
#include "CoreMinimal.h"
#include "ThumbnailMedalParameter.generated.h"

class UTexture2D;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FThumbnailMedalParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* GrayedMedalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* MedalTexture;
    
    NIMBUS_API FThumbnailMedalParameter();
};

