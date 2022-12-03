#pragma once
#include "CoreMinimal.h"
#include "MultiplayerZone.h"
#include "PlaneInZone.h"
#include "AirSuperiorityZone.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API AAirSuperiorityZone : public AMultiplayerZone {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlaneInZone> AllPlanesInZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScorePerSecond;
    
public:
    AAirSuperiorityZone();
};

