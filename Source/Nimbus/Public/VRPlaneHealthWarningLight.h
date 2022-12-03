#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VRPlaneHealthWarningLight.generated.h"

class UMaterialInstanceDynamic;
class UPointLightComponent;
class APlayerPlane;

UCLASS(Blueprintable)
class NIMBUS_API AVRPlaneHealthWarningLight : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerPlane* PlayerPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WarningLightName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* WarningLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* WarningMat;
    
    AVRPlaneHealthWarningLight();
    UFUNCTION(BlueprintCallable)
    void SetPlayerPlane(APlayerPlane* Plane);
    
};

