#pragma once
#include "CoreMinimal.h"
#include "ViewerFlightTrendData.h"
#include "ViewerFlightTrend.generated.h"

USTRUCT(BlueprintType)
struct FViewerFlightTrend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FViewerFlightTrendData> FlightTrend;
    
    NIMBUS_API FViewerFlightTrend();
};

