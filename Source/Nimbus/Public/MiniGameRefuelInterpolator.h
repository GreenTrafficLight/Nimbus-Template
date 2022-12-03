#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "MiniGameRefuelInterpolator.generated.h"

class UPlayerWeaponActivator;
class APlayerPlane;
class UMiniGameAerialRefuelingSettings;

UCLASS(Blueprintable)
class UMiniGameRefuelInterpolator : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerPlane* PlayerPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlayerWeaponActivator* WeaponActivator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameAerialRefuelingSettings* Settings;
    
public:
    UMiniGameRefuelInterpolator();
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerAdjustMovedTransformHandler(float DeltaTime, bool& bInOutChangedTransform, FVector& InOutNextLocation, FRotator& InOutNextRotation, FRotator& InOutNextMomentSpeed);
    
};

