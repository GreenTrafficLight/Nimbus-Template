#pragma once
#include "CoreMinimal.h"
#include "EMFDColorType.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGraphicsSettings.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMenuIDs.h"
#include "EPlayerSystemDamageType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Texture.h"
#include "NimbusBlueprintLibraryVR.generated.h"

class APlayerPlane;
class UNimbusGameInstance;
class USubtitleWidget;
class ARadioManager;
class AGameObject;
class ANimbusHUD;
class UUserWidget;
class AActor;
class UNimbusUserWidget;
class UObject;
class UMenuBaseWidget;
class USceneComponent;
class UTextureRenderTarget2D;
class UStaticMeshComponent;
class UMiniMapLayerWidget;

UCLASS(Blueprintable)
class NIMBUS_API UNimbusBlueprintLibraryVR : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNimbusBlueprintLibraryVR();
    UFUNCTION(BlueprintCallable)
    static void SubTitleAutoBind(USubtitleWidget* SubtitleWidget, ARadioManager* RadioManager, bool bBind);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopPlayingID(const int32 in_playingID);
    
    UFUNCTION(BlueprintCallable)
    static void StopPlayerPlaneVibrations(APlayerPlane* PlayerPlane);
    
    UFUNCTION(BlueprintCallable)
    static void StopPlayerPlaneSounds(APlayerPlane* PlayerPlane);
    
    UFUNCTION(BlueprintCallable)
    static void StopAllLoopingSound(ANimbusHUD* NimbusHUD);
    
    UFUNCTION(BlueprintCallable)
    static void StartFading(UNimbusGameInstance* GameInstance, bool bIsFadingIn, float InDuration);
    
    UFUNCTION(BlueprintCallable)
    static void ShowCanopyEffect(APlayerPlane* PlayerPlane, bool bShouldShow, float DropletIntensityScalar, float RainIntensityScalar, float IceBlendScalar, float IceIntensityScalar);
    
    UFUNCTION(BlueprintCallable)
    static void SetWorldBlackFade(bool IsClear);
    
    UFUNCTION(BlueprintCallable)
    static bool SetVRFlatCaptureMode(bool bCaptureEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetRainSpeedScalarParameterValue(APlayerPlane* PlayerPlane, const float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetRainScalarParameterValue(APlayerPlane* PlayerPlane, const float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetNimbusVFXComponentParam(int32 Index, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetNimbusStereoLayers(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetNimbusStereoLayerCurve(float Distance, float curve0to1);
    
    UFUNCTION(BlueprintCallable)
    static void SetNimbusDefaultGravityZ(const float gravityZ, float& prevGravityZ);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableHUDTestMode(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetDropletScalarParameterValue(APlayerPlane* PlayerPlane, const float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentGraphicsSetteingsForDevelop(EGraphicsSettings Preset);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoDeactive(AGameObject* GameObject, const bool Value);
    
    UFUNCTION(BlueprintCallable)
    static int32 PostEventVR(const FString& EventName, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static int32 PostEventAtLocationVR(UNimbusGameInstance* pGameInstance, const FString& EventName, FVector Location, FRotator Orientation);
    
    UFUNCTION(BlueprintCallable)
    static void NimbusDelayGarbageCollection();
    
    UFUNCTION(BlueprintCallable)
    static bool IsVRDLCOwned();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsSuperMode(bool& bSuper);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNimbusDialogOpen();
    
    UFUNCTION(BlueprintCallable)
    static bool IsFreeFlight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnableNimbusOverlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnableLocalToViewForCockpit(APlayerPlane* PlayerPlane);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetVRFlatCaptureMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPhaseNoAndElapsedTime(bool& bValid, int32& PhaseNo, float& PhaseElapsedTime);
    
    UFUNCTION(BlueprintCallable)
    static float GetNoInputElapsedTime(bool& bValid);
    
    UFUNCTION(BlueprintCallable)
    static EMFDColorType GetMFDColorType(const UNimbusUserWidget* Widget, const ANimbusHUD* nimbus_hud);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetHitActor(APlayerPlane* PlayerPlane);
    
    UFUNCTION(BlueprintCallable)
    static UMenuBaseWidget* GetFocusedMenuWidget();
    
    UFUNCTION(BlueprintCallable)
    static EMenuIDs GetFocusedMenuID();
    
    UFUNCTION(BlueprintCallable)
    static EPlayerSystemDamageType GetEnvironmentDamageType(APlayerPlane* PlayerPlane);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDefaultCameraRelativeTransform(FTransform& Transform, const APlayerPlane* PlayerPlane);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCurrentScene(bool& bMission, bool& bHangar, bool& bAirshow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetConsoleVariable(const FString& consoleName, bool& bEnable, int32& valueInt, float& valueFloat);
    
    UFUNCTION(BlueprintCallable)
    static bool GetChildSceneComponents(const AActor* Actor, TArray<USceneComponent*>& ComponentList);
    
    UFUNCTION(BlueprintCallable)
    static void EnablePostEventVR(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void EnableLocalToViewForCockpit(APlayerPlane* PlayerPlane, const bool bInEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void EnableIGCSkipModeVR(bool bSkip);
    
    UFUNCTION(BlueprintCallable)
    static void DrawWidgetToTarget(UTextureRenderTarget2D* Target, UUserWidget* WidgetToRender, FVector2D DrawSize, bool UseGamma, TEnumAsByte<TextureFilter> Filter, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UTextureRenderTarget2D* CreateRenderTarget2DVR(UObject* WorldContextObject, int32 Width, int32 Height, FLinearColor ClearColor);
    
    UFUNCTION(BlueprintCallable)
    static UStaticMeshComponent* CreateAndCopyStaticMeshForVR(AActor* Target, const UStaticMeshComponent* Base);
    
    UFUNCTION(BlueprintCallable)
    static void ClearStereoLayerBuffer();
    
    UFUNCTION(BlueprintCallable)
    static void ClearMiniMapData(UMiniMapLayerWidget* TargetMiniMap);
    
    UFUNCTION(BlueprintCallable)
    static void ClearHUDMessage(ANimbusHUD* NimbusHUD);
    
    UFUNCTION(BlueprintCallable)
    static void CheckAndApplyVrRenderSetting();
    
};

