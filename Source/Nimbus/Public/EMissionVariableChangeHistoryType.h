#pragma once
#include "CoreMinimal.h"
#include "EMissionVariableChangeHistoryType.generated.h"

UENUM(BlueprintType)
enum class EMissionVariableChangeHistoryType : uint8 {
    MissionVariableChangeHistory_None,
    MissionVariableChangeHistory_Int,
    MissionVariableChangeHistory_Bool,
    MissionVariableChangeHistory_Str,
    MissionVariableChangeHistory_MAX UMETA(Hidden),
};

