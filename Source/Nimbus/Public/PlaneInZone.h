#pragma once
#include "CoreMinimal.h"
#include "PlaneInZone.generated.h"

class APlayerPlane;

USTRUCT(BlueprintType)
struct FPlaneInZone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerPlane* PlayerPlane;
    
    NIMBUS_API FPlaneInZone();
};

