#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraShake.h"
#include "CloudCameraShake.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UCloudCameraShake : public UCameraShake {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Magnitude;
    
    UCloudCameraShake();
};

