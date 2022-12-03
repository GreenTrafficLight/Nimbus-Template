#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "MiniGameHUDManager.generated.h"

class UMiniGameLandingSettings;
class AActor;
class UMiniGameAerialRefuelingSettings;

UCLASS(Blueprintable)
class UMiniGameHUDManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSuccessAerialRefuelingDelegate);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameLandingSettings* LandingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameAerialRefuelingSettings* AerialRefuelingSettings;
    
public:
    UMiniGameHUDManager();
private:
    UFUNCTION()
    void OnReferencedActorEndPlayHandler(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

