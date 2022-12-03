#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UIMenuColor.generated.h"

USTRUCT(BlueprintType)
struct FUIMenuColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor GlowColor;
    
    NIMBUS_API FUIMenuColor();
};

