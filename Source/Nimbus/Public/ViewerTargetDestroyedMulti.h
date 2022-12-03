#pragma once
#include "CoreMinimal.h"
#include "ViewerTargetDestroyedBase.h"
#include "ViewerTargetDestroyedMulti.generated.h"

USTRUCT(BlueprintType)
struct FViewerTargetDestroyedMulti {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewerTargetDestroyedBase TargetDestroyedBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BRTargetDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TDMTargetDestroyed;
    
    NIMBUS_API FViewerTargetDestroyedMulti();
};

