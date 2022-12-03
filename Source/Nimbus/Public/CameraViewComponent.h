#pragma once
#include "CoreMinimal.h"
#include "ECameraType.h"
#include "CameraViewChangedDelegateDelegate.h"
#include "Components/SceneComponent.h"
#include "EMiniGameCameraType.h"
#include "CameraViewComponent.generated.h"

class UCurveFloat;
class UCameraComponent;
class UCameraInputComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UCameraViewComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraViewChangedDelegate OnCameraViewChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoExposureBiasCurveForLightning;
    
    UCameraViewComponent();
    UFUNCTION(BlueprintCallable)
    void SwitchToThirdPersonView();
    
    UFUNCTION(BlueprintCallable)
    void SwitchToMiniGameView(EMiniGameCameraType MiniGameCameraType);
    
    UFUNCTION(BlueprintCallable)
    void SwitchToFirstPersonView();
    
    UFUNCTION(BlueprintCallable)
    void SwitchToCockpitView();
    
    UFUNCTION(BlueprintCallable)
    void OnIGCStart();
    
    UFUNCTION(BlueprintCallable)
    void OnIGCEnd();
    
    UFUNCTION(BlueprintCallable)
    void InitializeCameras(UCameraComponent* FirstPersonCam, UCameraComponent* CockpitCam, UCameraComponent* ThirdPersonCam, UCameraComponent* MiniGameCam, UCameraInputComponent* FirstPersonCamInput, UCameraInputComponent* CockpitCamInput, UCameraInputComponent* ThirdPersonCamInput);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECameraType GetCurrentCameraViewType() const;
    
};

