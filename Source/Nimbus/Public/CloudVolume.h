#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "CloudVolume.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API ACloudVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float intensity;
    
    ACloudVolume();
};

