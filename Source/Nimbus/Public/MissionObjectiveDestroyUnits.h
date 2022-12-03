#pragma once
#include "CoreMinimal.h"
#include "MissionObjectiveBase.h"
#include "MissionObjectiveDestroyUnits.generated.h"

class AUnit;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMissionObjectiveDestroyUnits : public UMissionObjectiveBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TLazyObjectPtr<AUnit>> TargetUnitsToDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AUnit>> TargetUnitsToDestroySoftRefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 version;
    
public:
    UMissionObjectiveDestroyUnits();
};

