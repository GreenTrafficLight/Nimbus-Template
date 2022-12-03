#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MiniGameAerialRefuelingSettings.generated.h"

class AAIPlane;
class AActor;
class USceneComponent;

UCLASS(Blueprintable)
class UMiniGameAerialRefuelingSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIPlane* RefuelingAircraft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* AerialRefuelingStartMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* RefuelProbeOffMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* RefuelProbeNavyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* RefuelProbeAirforceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* RefuelProbeMesh;
    
    UMiniGameAerialRefuelingSettings();
};

