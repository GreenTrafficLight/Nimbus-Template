#pragma once
#include "CoreMinimal.h"
#include "AnimatedCameraComponent.h"
#include "FirstPersonCameraComponent.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UFirstPersonCameraComponent : public UAnimatedCameraComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimData;
    
public:
    UFirstPersonCameraComponent();
};

