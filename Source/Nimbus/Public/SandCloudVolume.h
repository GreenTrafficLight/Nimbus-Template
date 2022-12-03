#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "SandCloudVolume.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API ASandCloudVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Density;
    
    ASandCloudVolume();
};

