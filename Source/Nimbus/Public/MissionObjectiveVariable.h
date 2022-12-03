#pragma once
#include "CoreMinimal.h"
#include "MissionObjectiveBase.h"
#include "VariableCondition.h"
#include "MissionObjectiveVariable.generated.h"

class UVariableComparator;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMissionObjectiveVariable : public UMissionObjectiveBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVariableCondition> VariableConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccessForVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVariableComparator* VariableComparator;
    
public:
    UMissionObjectiveVariable();
};

