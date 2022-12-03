#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncTaskProcessUnit.generated.h"

class UVariableComparator;
class AUnit;

UCLASS(Blueprintable)
class NIMBUS_API UAsyncTaskProcessUnit : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVariableComparator* ExitCondition;
    
public:
    UAsyncTaskProcessUnit();
    UFUNCTION(BlueprintCallable)
    static void StopTask(AUnit* Target, bool bIsInterrupted, bool bCallExit);
    
};

