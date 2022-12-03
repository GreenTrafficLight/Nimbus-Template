#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PassSoundDistanceRow.generated.h"

USTRUCT(BlueprintType)
struct FPassSoundDistanceRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceMeters;
    
    NIMBUS_API FPassSoundDistanceRow();
};

