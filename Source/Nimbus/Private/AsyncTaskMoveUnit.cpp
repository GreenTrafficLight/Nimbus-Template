#include "AsyncTaskMoveUnit.h"

class AUnit;
class AActor;
class UVariableComparator;
class UAsyncTaskMoveUnit;
class AAIPath;

UAsyncTaskMoveUnit* UAsyncTaskMoveUnit::MoveToLocation(AUnit* Target, FVector Location, UVariableComparator* InterruptCondition, float MinDistanceToLocationInMeters, float SpeedKmph, float TimeLimitInSeconds, bool bBoostable, const FString& Comment) {
    return NULL;
}

UAsyncTaskMoveUnit* UAsyncTaskMoveUnit::MoveToActor(AUnit* Target, AActor* NewActor, UVariableComparator* InterruptCondition, float MinDistanceToLocationInMeters, float SpeedKmph, float TimeLimitInSeconds, FVector OffsetFromActor, bool bBoostable, const FString& Comment) {
    return NULL;
}

UAsyncTaskMoveUnit* UAsyncTaskMoveUnit::MoveOnPath(AUnit* Target, AAIPath* NewAIPath, UVariableComparator* InterruptCondition, float TimeLimitInSeconds, float SpeedKmph, float AccelerationMpss, float RotationSpeedDegree, float PointRadiusMeter, bool bTeleportUnitLocation, bool bUseApproachActorForwardVector, bool bBoostable, const FString& Comment) {
    return NULL;
}

UAsyncTaskMoveUnit::UAsyncTaskMoveUnit() {
    this->Actor = NULL;
    this->SpeedRefActor = NULL;
    this->AIPath = NULL;
}

