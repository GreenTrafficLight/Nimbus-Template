#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "Camera/CameraTypes.h"
#include "ReplayPassCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UReplayPassCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    UReplayPassCameraComponent();
    UFUNCTION(BlueprintCallable)
    void GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate(bool bReset);
    
};

