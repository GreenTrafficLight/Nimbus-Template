#pragma once
#include "CoreMinimal.h"
#include "ViewerTargetDestroyedBase.h"
#include "ViewerTargetDestroyedVR.generated.h"

USTRUCT(BlueprintType)
struct FViewerTargetDestroyedVR {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewerTargetDestroyedBase TargetDestroyedBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AircraftDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UAVDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SurperficiesDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VesselsDestroyed;
    
    NIMBUS_API FViewerTargetDestroyedVR();
};

