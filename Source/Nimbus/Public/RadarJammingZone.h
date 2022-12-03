#pragma once
#include "CoreMinimal.h"
#include "MultiplayerZone.h"
#include "RadarJammingZone.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API ARadarJammingZone : public AMultiplayerZone {
    GENERATED_BODY()
public:
    ARadarJammingZone();
};

