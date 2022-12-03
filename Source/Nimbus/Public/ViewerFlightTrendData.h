#pragma once
#include "CoreMinimal.h"
#include "EViewerFlightTrendType.h"
#include "ViewerFlightTrendData.generated.h"

USTRUCT(BlueprintType)
struct FViewerFlightTrendData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EViewerFlightTrendType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Sortie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetsDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Usage;
    
    UPROPERTY(EditAnywhere)
    uint64 FlightTime;
    
    UPROPERTY(EditAnywhere)
    uint64 FlightDistance;
    
    NIMBUS_API FViewerFlightTrendData();
};

