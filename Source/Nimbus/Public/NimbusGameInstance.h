#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/GameInstance.h"
#include "EGameSaveSlot.h"
#include "UObject/NoExportTypes.h"
#include "MapLoadedEventDelegateDelegate.h"
#include "EHangarCameraType.h"
#include "EPhysicalMaterialType.h"
#include "NimbusGameInstance.generated.h"

class UNimbusMusicPlayer;
class UNimbusTextureManager;
class UAkAudioBank;
class UTextureCube;
class UTexture2D;
class ANimbusHangarMeshManager;
class ANimbusRibbonCollectionActor;
class UNimbusAssetLoader;
class UTextureRenderTarget2D;
class UNimbusLoadingScreenManager;
class UNimbusStreamingInstallManager;
class UConditionActionManager;
class UNimbusGameInstanceTickObject;
class UNimbusSystemUserPause;
class UNimbusMapChangeManager;
class UNimbusFadeManager;
class UNimbusSubLevelManager;
class UNimbusDLCInformation;
class UNimbusPauseManager;
class UNimbusSoundReverbManager;
class UNimbusGarbageCollectManager;
class UNimbusSoundPauseManager;
class UEULAHelper;
class UNimbusGameInformation;
class UMenuSequenceManager;
class UPhysicalMaterial;
class UFont;
class UDebugLog;
class UNimbusSoundManager;
class UNimbusReplayDataManager;
class UDebugMissionHitchChecker;

UCLASS(Blueprintable, NonTransient)
class NIMBUS_API UNimbusGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANimbusHangarMeshManager* HangarManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HMDOverlayCutoffPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* HUDWidgetRenderTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* StereoUIRenderTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MenuDecoTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUseMenuDecoTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureCube* SkyLightAboveCloudCubeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureCube* SkyLightBelowCloudCubeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusAssetLoader* AssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusTextureManager* TextureManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ResidentAssetReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainMenuMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BootMenuMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CampaignMissionClearMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TransitionMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusStreamingInstallManager* StreamingInstallManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANimbusRibbonCollectionActor> AIWingTipRibbonCollectionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANimbusRibbonCollectionActor> MissileRibbonCollectionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANimbusRibbonCollectionActor> DebriefingRibbonCollectionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANimbusRibbonCollectionActor> AIWingTipRibbonCollectionClassVR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANimbusRibbonCollectionActor> MissileRibbonCollectionClassVR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusLoadingScreenManager* LoadingScreenManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UConditionActionManager* ConditionActionManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusGameInstanceTickObject* TickObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusMapChangeManager* MapChangeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNimbusFadeManager* FadeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusSubLevelManager* SubLevelManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNimbusPauseManager* PauseManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNimbusSoundReverbManager* SoundReverbManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNimbusGarbageCollectManager* GarbageCollectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNimbusSoundPauseManager* SoundPauseManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNimbusSystemUserPause* SystemUserPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusMusicPlayer* MusicPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNimbusGameInformation* GameInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNimbusDLCInformation* DLCInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuSequenceManager* MenuSequenseManager;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapLoadedEventDelegate MapLoadedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* SeaMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* GroundMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* ConcreteMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* GlassMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* IceMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* BossMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* MetalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioBank*> SoundBanks;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFont* DebugFontObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDebugLog* DebugLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* TempScreenshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEULAHelper* EULAHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusSoundManager* SoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusReplayDataManager* ReplayDataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDebugMissionHitchChecker* DebugMissionHitchChecker;
    
public:
    UNimbusGameInstance();
    UFUNCTION(BlueprintCallable)
    void SetShowWeaponsInHangar(bool bShouldShowWeaponsInHangar);
    
    UFUNCTION(BlueprintCallable)
    void SetShowWeaponOnPlaneInHangar(bool bShouldShowWeaponOnPlaneInHangar);
    
    UFUNCTION(BlueprintCallable)
    void SetShowPlaneInHangar(bool bShouldShowPlaneInHangar);
    
    UFUNCTION(BlueprintCallable)
    void SetShowPilotInHangar(bool bShouldShowPilotInHangar);
    
    UFUNCTION(BlueprintCallable)
    void SetShowHangar(bool bShouldShowHangar);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedPlaneSkinNo(int32 SelectedPlaneSkinNo);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedPlaneEmblemID(int32 SelectedPlaneEmblemID);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedHangarCameraType(EHangarCameraType HangarCameraType);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaneAndSWP(int32 SelectedPlaneType, int32 SelectedPlaneSWP);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionID(int32 MissionID);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentGameSaveSlot(EGameSaveSlot NewGameSaveSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVRUIMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVRMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVRGameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStereoMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShippingMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowWeaponsInHangar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowWeaponOnPlaneInHangar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowPlaneInHangar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowPilotInHangar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowHangar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedPlaneSWP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedPlaneSkinNo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedPlaneID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedPlaneEmblemID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHangarCameraType GetSelectedHangarCameraType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPhysicalMaterialName(EPhysicalMaterialType MaterialType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameSaveSlot GetCurrentGameSaveSlot() const;
    
    UFUNCTION(BlueprintCallable)
    bool AsyncSaveOnlineData();
    
    UFUNCTION(BlueprintCallable)
    bool AsyncSaveGameplaySettings(EGameSaveSlot GameSaveSlot);
    
    UFUNCTION(BlueprintCallable)
    bool AsyncSaveAccountSettings();
    
    UFUNCTION(BlueprintCallable)
    bool AsyncLoadOnlineData();
    
    UFUNCTION(BlueprintCallable)
    bool AsyncLoadGameplaySettings(EGameSaveSlot GameSaveSlot);
    
    UFUNCTION(BlueprintCallable)
    bool AsyncLoadAccountSettings();
    
};

