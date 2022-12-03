#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "MultiPlayerStart.generated.h"

class AMultiIGCTargetPoint;

UCLASS(Blueprintable)
class AMultiPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMultiIGCTargetPoint* MultiIGCTargetPoint;
    
    AMultiPlayerStart();
};

