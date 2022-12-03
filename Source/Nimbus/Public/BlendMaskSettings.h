#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BlendMaskSettings.generated.h"

USTRUCT(BlueprintType)
struct FBlendMaskSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BlendAreaSize;
    
    NIMBUS_API FBlendMaskSettings();
};

