#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "MultiplayerDebugCameraActor.generated.h"

class APlayerPlane;

UCLASS(Blueprintable)
class NIMBUS_API AMultiplayerDebugCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerPlane* PlaneToFollow;
    
    AMultiplayerDebugCameraActor();
};

