#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UILayerMenuParamTextDecorationItem.h"
#include "UILayerMenuParamTextDecorationGroup.generated.h"

USTRUCT(BlueprintType)
struct NIMBUS_API FUILayerMenuParamTextDecorationGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BasePosMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BasePosMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimListTableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUILayerMenuParamTextDecorationItem> ItemList;
    
    FUILayerMenuParamTextDecorationGroup();
};

