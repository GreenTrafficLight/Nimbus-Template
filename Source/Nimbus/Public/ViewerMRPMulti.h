#pragma once
#include "CoreMinimal.h"
#include "ViewerMRPBase.h"
#include "ViewerMRPMulti.generated.h"

USTRUCT(BlueprintType)
struct FViewerMRPMulti {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewerMRPBase MRPBase;
    
    UPROPERTY(EditAnywhere)
    uint64 CumulativeMMRP;
    
    UPROPERTY(EditAnywhere)
    uint64 MultiMMRP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BRTotalFirstPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BRTotalScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TDMTotalMVP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TDMTotalWinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TDMTotalScore;
    
    NIMBUS_API FViewerMRPMulti();
};

