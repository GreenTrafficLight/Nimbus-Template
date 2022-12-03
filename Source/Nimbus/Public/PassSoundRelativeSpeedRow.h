#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PassSoundRelativeSpeedRow.generated.h"

USTRUCT(BlueprintType)
struct FPassSoundRelativeSpeedRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedKmph;
    
    NIMBUS_API FPassSoundRelativeSpeedRow();
};

