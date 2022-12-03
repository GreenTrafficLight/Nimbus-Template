#pragma once
#include "CoreMinimal.h"
#include "HugeMedalParameter.generated.h"

class UTexture2D;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FHugeMedalParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* GrayedMedalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* MedalTexture;
    
    NIMBUS_API FHugeMedalParameter();
};

