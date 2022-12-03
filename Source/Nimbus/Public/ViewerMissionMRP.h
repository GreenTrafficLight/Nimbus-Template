#pragma once
#include "CoreMinimal.h"
#include "EMissionRule.h"
#include "ViewerMissionMRP.generated.h"

USTRUCT(BlueprintType)
struct FViewerMissionMRP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageNo;
    
    UPROPERTY(EditAnywhere)
    uint64 Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMissionRule Rule;
    
    NIMBUS_API FViewerMissionMRP();
};

