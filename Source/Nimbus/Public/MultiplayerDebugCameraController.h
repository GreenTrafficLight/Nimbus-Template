#pragma once
#include "CoreMinimal.h"
#include "Engine/DebugCameraController.h"
#include "MultiplayerDebugCameraController.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API AMultiplayerDebugCameraController : public ADebugCameraController {
    GENERATED_BODY()
public:
    AMultiplayerDebugCameraController();
};

