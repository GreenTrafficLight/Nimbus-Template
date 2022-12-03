#pragma once
#include "CoreMinimal.h"
#include "UnitTaskDelegateDelegate.h"
#include "AsyncTaskProcessUnit.h"
#include "AsyncTaskStopUnit.generated.h"

class UVariableComparator;
class UAsyncTaskStopUnit;
class AUnit;

UCLASS(Blueprintable)
class NIMBUS_API UAsyncTaskStopUnit : public UAsyncTaskProcessUnit {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnitTaskDelegate OnExit;
    
public:
    UAsyncTaskStopUnit();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskStopUnit* StopUnit(AUnit* Target, UVariableComparator* InterruptCondition, float StopDurationInSeconds, const FString& Comment);
    
};

