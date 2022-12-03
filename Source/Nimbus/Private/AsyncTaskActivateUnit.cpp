#include "AsyncTaskActivateUnit.h"

class AUnit;
class AActor;
class UVariableComparator;
class UAsyncTaskActivateUnit;

UAsyncTaskActivateUnit* UAsyncTaskActivateUnit::ActivateUnit(AUnit* Unit, UVariableComparator* ConditionToActivate, float DelayInSeconds, UnitActivationType ActivationType, FVector Position, FRotator Rotation, AActor* TransformReferenceActor, bool bAddHeightOfGroundToZ, const FString& Comment, bool bEnabledDelay) {
    return NULL;
}

UAsyncTaskActivateUnit::UAsyncTaskActivateUnit() {
    this->ActivationCondition = NULL;
    this->UnitToActivate = NULL;
    this->ReferenceActor = NULL;
}

