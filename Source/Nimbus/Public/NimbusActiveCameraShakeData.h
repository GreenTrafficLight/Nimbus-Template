#pragma once
#include "CoreMinimal.h"
#include "NimbusActiveCameraShakeData.generated.h"

class UCameraShake;

USTRUCT(BlueprintType)
struct FNimbusActiveCameraShakeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraShake* CameraShake;
    
    NIMBUS_API FNimbusActiveCameraShakeData();
};

