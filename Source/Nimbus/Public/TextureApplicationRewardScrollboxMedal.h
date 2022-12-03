#pragma once
#include "CoreMinimal.h"
#include "TextureApplicationRewardScrollboxMedal.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTextureApplicationRewardScrollboxMedal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Tex;
    
    NIMBUS_API FTextureApplicationRewardScrollboxMedal();
};

