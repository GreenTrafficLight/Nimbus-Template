#pragma once
#include "CoreMinimal.h"
#include "UILayerMenuParamAnim.h"
#include "UILayerMenuParamAnimList.generated.h"

USTRUCT(BlueprintType)
struct NIMBUS_API FUILayerMenuParamAnimList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUILayerMenuParamAnim> AnimList;
    
    FUILayerMenuParamAnimList();
};

