#pragma once
#include "CoreMinimal.h"
#include "EGraphicsSettingsWindowsScreenMode.h"
#include "GraphicsSettingsWindowsResolution.h"
#include "GraphicsSettingsWindowsScreenSetting.generated.h"

USTRUCT(BlueprintType)
struct FGraphicsSettingsWindowsScreenSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGraphicsSettingsWindowsScreenMode ScreenMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGraphicsSettingsWindowsResolution Resolution;
    
    NIMBUS_API FGraphicsSettingsWindowsScreenSetting();
};

