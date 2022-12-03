#pragma once
#include "CoreMinimal.h"
#include "UILayerMenuParamTextDecorationGroup.h"
#include "UILayerMenuParamTextDecoration.generated.h"

USTRUCT(BlueprintType)
struct NIMBUS_API FUILayerMenuParamTextDecoration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUILayerMenuParamTextDecorationGroup> GroupList;
    
    FUILayerMenuParamTextDecoration();
};

