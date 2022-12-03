#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "AkSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class AKAUDIO_API UAkSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    uint8 MaxSimultaneousReverbVolumes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath WwiseProjectPath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath WwiseWindowsInstallationPath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath WwiseMacInstallationPath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SuppressWwiseProjectPathWarnings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseAlternateObstructionOcclusionFeature;
    
    UAkSettings();
};

