#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AkSpotReflector.generated.h"

class UAkAcousticTexture;
class UAkAuxBus;

UCLASS(Blueprintable)
class AKAUDIO_API AAkSpotReflector : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAuxBus* AuxBus;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AuxBusName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAcousticTexture* AcousticTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceScalingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Level;
    
    AAkSpotReflector();
};

