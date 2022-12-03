#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MissionOverlapActorManager.generated.h"

class UNimbusLevelSleepManager;
class AActor;

UCLASS(Blueprintable)
class UMissionOverlapActorManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusLevelSleepManager* LevelSleepManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> VolumeActors;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<uint8> VolumeOptions;
    
public:
    UMissionOverlapActorManager();
};

