#pragma once
#include "CoreMinimal.h"
#include "ThumbnailPilotDataParameter.generated.h"

class UTexture2D;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FThumbnailPilotDataParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* GrayedPilotDataMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* PilotDataTexture;
    
    NIMBUS_API FThumbnailPilotDataParameter();
};

