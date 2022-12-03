#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "EMultiplayerIGCType.h"
#include "MultiIGCTargetPoint.generated.h"

UCLASS(Blueprintable)
class AMultiIGCTargetPoint : public ATargetPoint {
    GENERATED_BODY()
public:
    AMultiIGCTargetPoint();
private:
    UFUNCTION(BlueprintCallable)
    void MultiIGCTest(EMultiplayerIGCType IGCType, int32 IGCIndex);
    
};

