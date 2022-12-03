#pragma once
#include "CoreMinimal.h"
#include "MissionVariableChangeHistory.generated.h"

class UStrProperty;
class UBoolProperty;
class UIntProperty;

USTRUCT(BlueprintType)
struct FMissionVariableChangeHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIntProperty* IntProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBoolProperty* BoolProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStrProperty* StrProperty;
    
    NIMBUS_API FMissionVariableChangeHistory();
};

