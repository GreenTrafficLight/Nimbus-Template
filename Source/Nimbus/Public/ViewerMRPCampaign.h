#pragma once
#include "CoreMinimal.h"
#include "ViewerMRPBase.h"
#include "ViewerMRPCampaign.generated.h"

USTRUCT(BlueprintType)
struct FViewerMRPCampaign {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint64 CumulativeMRP;
    
    UPROPERTY(EditAnywhere)
    uint64 CampaignMRP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewerMRPBase MRPBase;
    
    NIMBUS_API FViewerMRPCampaign();
};

