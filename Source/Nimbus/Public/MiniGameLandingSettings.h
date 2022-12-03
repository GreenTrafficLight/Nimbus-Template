#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MiniGameLandingSettings.generated.h"

class AVolume;
class UMiniGameVolumeSet;
class AActor;

UCLASS(Blueprintable)
class UMiniGameLandingSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameVolumeSet* LandingRunwayVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* LandingStartMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVolume* LandingMiniMapVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVolume* LandingAssistVolume;
    
    UMiniGameLandingSettings();
};

