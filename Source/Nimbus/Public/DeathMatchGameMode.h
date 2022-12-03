#pragma once
#include "CoreMinimal.h"
#include "TeamDeathMatchGameMode.h"
#include "DeathMatchGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class NIMBUS_API ADeathMatchGameMode : public ATeamDeathMatchGameMode {
    GENERATED_BODY()
public:
    ADeathMatchGameMode();
};

