#pragma once
#include "CoreMinimal.h"
#include "MissionVariableEvent.generated.h"

class UVariableComparator;
class ALevelScriptActor;

USTRUCT(BlueprintType)
struct FMissionVariableEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVariableComparator* Comparator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelScriptActor* LevelScriptActor;
    
    NIMBUS_API FMissionVariableEvent();
};

