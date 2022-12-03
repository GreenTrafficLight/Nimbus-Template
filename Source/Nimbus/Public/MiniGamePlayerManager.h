#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MiniGamePlayerManager.generated.h"

class UPlayerWeaponActivator;
class APlayerPlane;
class UMiniGameAerialRefuelingSettings;
class UMiniGameRefuelInterpolator;

UCLASS(Blueprintable)
class UMiniGamePlayerManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerPlane* PlayerPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlayerWeaponActivator* WeaponActivator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameAerialRefuelingSettings* AerialRefuelingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameRefuelInterpolator* RefuelInterpolator;
    
public:
    UMiniGamePlayerManager();
};

