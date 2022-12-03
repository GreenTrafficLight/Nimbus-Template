#pragma once
#include "CoreMinimal.h"
#include "MissionObjectiveBase.h"
#include "MissionObjectiveDestroyTargets.generated.h"

class AAIGameObject;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMissionObjectiveDestroyTargets : public UMissionObjectiveBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TLazyObjectPtr<AAIGameObject>> TargetObjectsToDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AAIGameObject>> TargetObjectsToDestroySoftRefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 version;
    
public:
    UMissionObjectiveDestroyTargets();
};

