#pragma once
#include "CoreMinimal.h"
#include "HugePilotDataParameter.h"
#include "ThumbnailPilotDataParameter.h"
#include "PilotDataViewerParameter.generated.h"

USTRUCT(BlueprintType)
struct FPilotDataViewerParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FThumbnailPilotDataParameter ThumbnailPilotDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHugePilotDataParameter HugePilotData;
    
    NIMBUS_API FPilotDataViewerParameter();
};

