#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MiniGameTakeoffSettings.generated.h"

class UMiniGameVolumeSet;
class AActor;

UCLASS(Blueprintable)
class UMiniGameTakeoffSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameVolumeSet* TakeoffRunwayVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TakeoffStartMarker;
    
    UMiniGameTakeoffSettings();
};

