#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DebugMissionHitchChecker.generated.h"

class UNimbusGameInstance;

UCLASS(Blueprintable, NotPlaceable, Config=Game)
class UDebugMissionHitchChecker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitchCautionThresholdTimeMS;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitchWarningThresholdTimeMS;
    
    UPROPERTY(Config, EditAnywhere)
    double HitchMeasureTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitchThresholdTimeMSMultiplierForPIE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusGameInstance* NimbusGameInstance;
    
public:
    UDebugMissionHitchChecker();
};

