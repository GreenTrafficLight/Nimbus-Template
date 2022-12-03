#pragma once
#include "CoreMinimal.h"
#include "ViewerAircraftDataParameter.h"
#include "ViewerAircraftData.generated.h"

USTRUCT(BlueprintType)
struct FViewerAircraftData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FViewerAircraftDataParameter> AircraftData;
    
    NIMBUS_API FViewerAircraftData();
};

