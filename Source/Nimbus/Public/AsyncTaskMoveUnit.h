#pragma once
#include "CoreMinimal.h"
#include "UnitTaskDelegateDelegate.h"
#include "AsyncTaskProcessUnit.h"
#include "UObject/NoExportTypes.h"
#include "AsyncTaskMoveUnit.generated.h"

class AActor;
class UAsyncTaskMoveUnit;
class AGameObject;
class AAIPath;
class AUnit;
class UVariableComparator;

UCLASS(Blueprintable)
class NIMBUS_API UAsyncTaskMoveUnit : public UAsyncTaskProcessUnit {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnitTaskDelegate OnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameObject* SpeedRefActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIPath* AIPath;
    
public:
    UAsyncTaskMoveUnit();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskMoveUnit* MoveToLocation(AUnit* Target, FVector Location, UVariableComparator* InterruptCondition, float MinDistanceToLocationInMeters, float SpeedKmph, float TimeLimitInSeconds, bool bBoostable, const FString& Comment);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskMoveUnit* MoveToActor(AUnit* Target, AActor* NewActor, UVariableComparator* InterruptCondition, float MinDistanceToLocationInMeters, float SpeedKmph, float TimeLimitInSeconds, FVector OffsetFromActor, bool bBoostable, const FString& Comment);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskMoveUnit* MoveOnPath(AUnit* Target, AAIPath* NewAIPath, UVariableComparator* InterruptCondition, float TimeLimitInSeconds, float SpeedKmph, float AccelerationMpss, float RotationSpeedDegree, float PointRadiusMeter, bool bTeleportUnitLocation, bool bUseApproachActorForwardVector, bool bBoostable, const FString& Comment);
    
};

