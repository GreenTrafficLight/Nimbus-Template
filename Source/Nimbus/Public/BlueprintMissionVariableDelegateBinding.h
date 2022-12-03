#pragma once
#include "CoreMinimal.h"
#include "VariableCondition.h"
#include "BlueprintMissionVariableDelegateBinding.generated.h"

USTRUCT(BlueprintType)
struct NIMBUS_API FBlueprintMissionVariableDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVariableCondition VariableCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionNameToBind;
    
    FBlueprintMissionVariableDelegateBinding();
};

