#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "ReplayPassCameraActor.generated.h"

class UReplayCameraInfoWidget;
class ANimbusReplayPawn;
class AAIGameObject;
class UReplayWidget;

UCLASS(Blueprintable)
class NIMBUS_API AReplayPassCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANimbusReplayPawn* ReplayPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIGameObject* ConstraintObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UReplayWidget* ReplayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UReplayCameraInfoWidget* CameraInfoWidget;
    
public:
    AReplayPassCameraActor();
};

