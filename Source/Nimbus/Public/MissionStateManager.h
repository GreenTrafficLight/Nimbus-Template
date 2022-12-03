#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MissionStateManager.generated.h"

class UMissionStateBase;
class UMissionSetupFrameManager;
class UMissionTransitionStateFactory;

UCLASS(Blueprintable)
class UMissionStateManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionSetupFrameManager* SetupFrameManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionTransitionStateFactory* TransitionStateFactory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMissionStateBase*> MissionStateStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMissionStateBase*> RequestedMissionStateQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMissionStateBase*> InterruptMissionStateQueue;
    
public:
    UMissionStateManager();
};

