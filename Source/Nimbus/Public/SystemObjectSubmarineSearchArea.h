#pragma once
#include "CoreMinimal.h"
#include "SystemObject.h"
#include "UObject/NoExportTypes.h"
#include "SystemObjectSubmarineSearchArea.generated.h"

class UCurveFloat;

UCLASS(Abstract, Blueprintable)
class NIMBUS_API ASystemObjectSubmarineSearchArea : public ASystemObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContractionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconAlphaFadePerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* IconSubmarineSearchAreaAlphaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconDisableSubmarineSearchAreaAlpha;
    
public:
    ASystemObjectSubmarineSearchArea();
    UFUNCTION(BlueprintCallable)
    void SetSearchArea(const FVector NewPosition, float InRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetRadius(float InRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetEnable(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void PlaySonarEffect();
    
};

