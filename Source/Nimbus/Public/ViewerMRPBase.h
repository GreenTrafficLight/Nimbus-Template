#pragma once
#include "CoreMinimal.h"
#include "ViewerMissionMRP.h"
#include "ViewerMRPBase.generated.h"

USTRUCT(BlueprintType)
struct FViewerMRPBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint64 TotalScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FViewerMissionMRP> MissionMRP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FViewerMissionMRP> DLCMissionMRP;
    
    NIMBUS_API FViewerMRPBase();
};

