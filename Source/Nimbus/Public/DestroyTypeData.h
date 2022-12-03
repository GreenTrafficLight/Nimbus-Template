#pragma once
#include "CoreMinimal.h"
#include "DestroyTypeData.generated.h"

USTRUCT(BlueprintType)
struct FDestroyTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UnitType;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> DebriefUnitDataIndex;
    
    NIMBUS_API FDestroyTypeData();
};

