#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "PlayerBlockingVolume.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API APlayerBlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    APlayerBlockingVolume();
};

