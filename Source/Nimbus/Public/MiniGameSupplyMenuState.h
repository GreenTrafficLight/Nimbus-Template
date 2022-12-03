#pragma once
#include "CoreMinimal.h"
#include "MissionStateBase.h"
#include "MiniGameSupplyMenuState.generated.h"

class UMiniGameTakeoffSettings;
class UMiniGameHUDManager;
class UMiniGamePlayerManager;
class UMiniGameScriptEventManager;
class UMiniGameCameraManager;
class UMissionFadeSoundManager;
class APlayerPlane;

UCLASS(Blueprintable)
class UMiniGameSupplyMenuState : public UMissionStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionFadeSoundManager* FadeSoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameCameraManager* CameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGamePlayerManager* PlayerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameHUDManager* HUDManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameScriptEventManager* ScriptEventManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerPlane* PlayerPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameTakeoffSettings* Settings;
    
public:
    UMiniGameSupplyMenuState();
};

