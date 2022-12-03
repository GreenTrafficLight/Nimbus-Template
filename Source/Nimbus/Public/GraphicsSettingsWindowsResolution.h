#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GraphicsSettingsWindowsResolution.generated.h"

USTRUCT(BlueprintType)
struct FGraphicsSettingsWindowsResolution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint Resolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint Aspect;
    
    NIMBUS_API FGraphicsSettingsWindowsResolution();
};

