#pragma once
#include "CoreMinimal.h"
#include "MedalTextureApplication.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMedalTextureApplication {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Tex;
    
    NIMBUS_API FMedalTextureApplication();
};

