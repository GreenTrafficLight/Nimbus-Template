#pragma once
#include "CoreMinimal.h"
#include "ViewerMRPBase.h"
#include "ViewerMRPVR.generated.h"

USTRUCT(BlueprintType)
struct FViewerMRPVR {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewerMRPBase MRPBase;
    
    NIMBUS_API FViewerMRPVR();
};

