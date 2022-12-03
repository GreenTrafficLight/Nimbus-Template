#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MiniGameCameraManager.generated.h"

class UCameraViewComponent;
class UAnimatedCameraComponent;
class UMiniGameCameraComponent;

UCLASS(Blueprintable)
class UMiniGameCameraManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCameraViewComponent* CameraViewComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameCameraComponent* MiniGameCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAnimatedCameraComponent* ThiredPersonCameraComponent;
    
public:
    UMiniGameCameraManager();
};

