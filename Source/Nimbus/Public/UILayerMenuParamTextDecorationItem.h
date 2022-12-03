#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UILayerMenuParamTextDecorationItem.generated.h"

USTRUCT(BlueprintType)
struct NIMBUS_API FUILayerMenuParamTextDecorationItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomTextTableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OffsetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetTime;
    
    FUILayerMenuParamTextDecorationItem();
};

