#pragma once
#include "CoreMinimal.h"
#include "LobbyGameMode.h"
#include "UIGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class NIMBUS_API AUIGameMode : public ALobbyGameMode {
    GENERATED_BODY()
public:
    AUIGameMode();
};

