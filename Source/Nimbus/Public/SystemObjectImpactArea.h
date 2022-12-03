#pragma once
#include "CoreMinimal.h"
#include "SystemObject.h"
#include "SystemObjectImpactArea.generated.h"

UCLASS(Abstract, Blueprintable)
class NIMBUS_API ASystemObjectImpactArea : public ASystemObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInsideImpactAreaIsOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAreaOutlineSliceDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImpactAreaSliceDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAltitudeInMeter;
    
public:
    ASystemObjectImpactArea();
    UFUNCTION(BlueprintCallable)
    void SetAreaModeShrinking(float InTime, float InWaitTime);
    
    UFUNCTION(BlueprintCallable)
    void SetAreaModeExpansion(float InFallDelaySeconds, float InHeliosRadioForeWarnTime);
    
};

