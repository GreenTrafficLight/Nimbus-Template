#pragma once
#include "CoreMinimal.h"
#include "BasePersonCameraInputComponent.h"
#include "UObject/NoExportTypes.h"
#include "ThirdPersonCameraInputComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UThirdPersonCameraInputComponent : public UBasePersonCameraInputComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NeutralCameraLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookAroundCameraLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookAroundOriginLocation;
    
public:
    UThirdPersonCameraInputComponent();
};

