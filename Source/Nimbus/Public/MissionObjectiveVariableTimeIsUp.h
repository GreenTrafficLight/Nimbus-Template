#pragma once
#include "CoreMinimal.h"
#include "MissionObjectiveVariable.h"
#include "MissionObjectiveVariableTimeIsUp.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMissionObjectiveVariableTimeIsUp : public UMissionObjectiveVariable {
    GENERATED_BODY()
public:
    UMissionObjectiveVariableTimeIsUp();
};

