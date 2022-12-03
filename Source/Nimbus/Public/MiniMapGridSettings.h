#pragma once
#include "CoreMinimal.h"
#include "MiniMapGridSettings.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMiniMapGridSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BackgroundTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBackgroundTextureFullMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableBackgroundColorTint;
    
    NIMBUS_API FMiniMapGridSettings();
};

