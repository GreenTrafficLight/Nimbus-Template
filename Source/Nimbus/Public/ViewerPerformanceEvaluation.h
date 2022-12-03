#pragma once
#include "CoreMinimal.h"
#include "ViewerMedalTitleAwarded.h"
#include "ViewerPerformanceEvaluation.generated.h"

USTRUCT(BlueprintType)
struct FViewerPerformanceEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 Total;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FViewerMedalTitleAwarded> MedalTitle;
    
    NIMBUS_API FViewerPerformanceEvaluation();
};

