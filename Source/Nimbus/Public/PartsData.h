#pragma once
#include "CoreMinimal.h"
#include "EParameterOperationType.h"
#include "EPartsParameterList.h"
#include "PartsData.generated.h"

USTRUCT(BlueprintType)
struct FPartsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartsParameterList ParameterLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EParameterOperationType OperationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParameterValue;
    
    NIMBUS_API FPartsData();
};

