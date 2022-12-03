#pragma once
#include "CoreMinimal.h"
#include "IGCSaveData.h"
#include "MatineeRequestData.generated.h"

class AMatineeActor;

USTRUCT(BlueprintType)
struct FMatineeRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMatineeActor* MatineeActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGCSaveData SaveData;
    
    NIMBUS_API FMatineeRequestData();
};

