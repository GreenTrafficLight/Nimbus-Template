#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "TaskActivateUnitDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "UnitActivationType.h"
#include "UObject/NoExportTypes.h"
#include "AsyncTaskActivateUnit.generated.h"

class AActor;
class UVariableComparator;
class AUnit;
class UAsyncTaskActivateUnit;

UCLASS(Blueprintable)
class NIMBUS_API UAsyncTaskActivateUnit : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTaskActivateUnitDelegate OnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVariableComparator* ActivationCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUnit* UnitToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ReferenceActor;
    
public:
    UAsyncTaskActivateUnit();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskActivateUnit* ActivateUnit(AUnit* Unit, UVariableComparator* ConditionToActivate, float DelayInSeconds, UnitActivationType ActivationType, FVector Position, FRotator Rotation, AActor* TransformReferenceActor, bool bAddHeightOfGroundToZ, const FString& Comment, bool bEnabledDelay);
    
};

