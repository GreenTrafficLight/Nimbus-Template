#pragma once
#include "CoreMinimal.h"
#include "ThumbnailMedalParameter.h"
#include "HugeMedalParameter.h"
#include "MedalViewerParameter.generated.h"

USTRUCT(BlueprintType)
struct FMedalViewerParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FThumbnailMedalParameter ThumbnailMedal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHugeMedalParameter HugeMedal;
    
    NIMBUS_API FMedalViewerParameter();
};

