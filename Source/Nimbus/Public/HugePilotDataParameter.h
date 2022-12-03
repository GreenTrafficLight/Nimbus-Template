#pragma once
#include "CoreMinimal.h"
#include "HugePilotDataParameter.generated.h"

class UTexture2D;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FHugePilotDataParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* GrayedPilotDataMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* PilotDataTexture;
    
    NIMBUS_API FHugePilotDataParameter();
};

