#pragma once
#include "CoreMinimal.h"
#include "Engine/SceneCapture.h"
#include "OfflineCapture.generated.h"

UCLASS(Abstract, Blueprintable)
class NIMBUS_API AOfflineCapture : public ASceneCapture {
    GENERATED_BODY()
public:
    AOfflineCapture();
};

