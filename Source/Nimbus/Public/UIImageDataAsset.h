#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UIImageDataAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class NIMBUS_API UUIImageDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> Images;
    
    UUIImageDataAsset();
};

