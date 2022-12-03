#pragma once
#include "CoreMinimal.h"
#include "AnimatedCameraComponent.h"
#include "CockpitCameraComponent.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UCockpitCameraComponent : public UAnimatedCameraComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOVForNonVRHeadTracking;
    
public:
    UCockpitCameraComponent();
};

