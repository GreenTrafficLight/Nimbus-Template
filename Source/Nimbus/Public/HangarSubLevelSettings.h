#pragma once
#include "CoreMinimal.h"
#include "HangarSubLevelSettings.generated.h"

USTRUCT(BlueprintType)
struct FHangarSubLevelSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnvironmentSubLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LightingSubLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExtraSubLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PersistentLongName;
    
    NIMBUS_API FHangarSubLevelSettings();
};

