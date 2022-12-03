#pragma once
#include "CoreMinimal.h"
#include "EMissionCategory.h"
#include "EMissionRank.h"
#include "GameFramework/CheatManager.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "NimbusCheatManager.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UNimbusCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UNimbusCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void ViewSelf();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ViewActor(FName ActorName);
    
    UFUNCTION(Exec)
    void UpdateDebugCondition(uint32 ConditionId, bool IsValid);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UpdateConditionAction();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockVRAircraftTree();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockSceneViewer(int32 ID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockPilotData(int32 PilotDataID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockParts(int32 PartsID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockOnlineNicknameByID(int32 ID, int32 NewID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockNickname(int32 NicknameID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockMultiplayAircraftTree();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockMedal(int32 MedalID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockFeatures();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockEntry(int32 EntryId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockEmblem(int32 EmblemID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockDLC(const FString& DLCID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllWithMaxData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllSceneViewer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllPilotData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllParts();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllNicknames();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllMedals();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllEmblems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllDLCs();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllAircraftSkins();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllAchievements();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAircraftTree();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAircraftSkin(int32 SkinID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAircraft(const FString& PlaneStringID, int32 WeaponNo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAchievement(const FString& AchievementID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleWeaponProcess();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleWeaponMovingLocus();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleWeaponDebugContainer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleWeaponCollision();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleWeaponAxis();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleWeaponAalysis();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleVRTestMissionMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleVREquipGunTrackingParts();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleUnlockLogOnScreen();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleUnlockDLC();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleUnitDebugContainer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleUnitAalysis();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleUI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleTimeOutTravelMap();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleTimeOutTransitionMap();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSurroundPursietTargetPoint();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSoundViewerDebugInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSoundEventRequestInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSoundEventInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSonobuoyProgressIcon();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSkipScenarioRadio();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSkipPlayByPlayRadio();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSkipChatterRadio();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowUnitRange();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowSoundPauseInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowSoundManagerInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowRibbonCollectionInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowReplayInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowRaycastTest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowRadioPortrait();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowPlayerLandingAOA();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowPlayerEnvCollisionLines();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowPlayByPlayRadioConditionLog();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowPauseInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowMissionObjectInfoUsually();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowMissionHitchInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowMissionDebugInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowMiniGameRadioGuideCourse();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowMapChangeInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowLevelDebugInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowAssetLoaderInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowAnalyzedNodes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShortMapChangeTimeOut();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleScenarioRadioEnabled();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSaveReplayFile();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSaveLoadUIIgnore();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSaveLoadSingleThread();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSaveLoadSimulatedMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleReplayRecording();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleRecordRadioReport();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleRadioSkipEnabled();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleRadioSilentGroup(int32 GroupIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleRadioRequeueingWaitGroupInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleRadioPotentializeAllTables();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleRadioPlayLimitOneTime();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleRadioForceOfflineEnabled();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleRadioEnemyTensionEnabled(int32 Tension);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleRadioDebugInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleRadioContinuousPlay();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleRadioAlwaysPlay();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleRadioAllyTensionEnabled(int32 Tension);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePlayerWeaponUnlimited();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePlayerWeaponQuickReload();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePlayerUpgradePartsInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePlayerInvincible();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePlayerDebugInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePlayerAttackTargetsException();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePlayByPlayRadioEnabled();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePassSoundDebugInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleParticleSystemDebugInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleOutOfCockpitWarning();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleObjectAxis();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleNimbusUserDebugMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleMultiplayerDebugMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleMissileCloudWavering();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleMiniGameAllDemoCamera();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleLogStreamingTexture();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleInvisibleFade();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleGameObjectProcess();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleForceSkipMiniGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleForceSkipIGC();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleForcePlayerPlaneInSand();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleForcePlayerPlaneInJamming();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleForcePlayerPlaneInCloud();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleEquipUpgardParts(int32 PartsID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDisableVibration();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDisableUnlimitedGunDueToDifficulty();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDisableReplayPassCameraMultiTargets();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDisableReplayPassCameraMissile();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDisableReplayPassCameraHorizon();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDisableRadioRequeueingWait();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDisableRadioQueueLimitLife();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDisableMiniGameSkip();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDisableEventTrigger();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDisableDrawVapor();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDisableDrawMissileTrail();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDisabledPreloadTransitionMap();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugShowBreakConstraint();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugObjectMapRadioSearchEnemyRange();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugObjectMap();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugLog();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugDisableWeaponDisabling();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugContainer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugCanopyState();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDamageStateDebugMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCooldownDebugDisplay();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCollectLoadedTexturePhase();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCollectLoadedTextureIGC();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCollectLoadedTexture();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleChatterRadioEnabled();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleBuildInformationPeak();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleBuildInformation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleBGMEventRequestInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAutoDumpReplayDataBuffer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleApplyMultiplayerParametersToCampaign();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAllExtraMeshVisibility();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAircraftLoadingTest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAIPlaneDebugInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAIDebugInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAheadLoadIGCPlane();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ThreeTimesFaster(float Multiplier);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestCheatTeamChangeValue(int32 TeamChangeValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestCheatPlayerCountValue(int32 PlayerCountValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestCheatOngoingState(int32 State);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestCheatMMRValue(int32 MMRValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestCheatMissionStageNo(int32 MissionStageNo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestCheatGameMode(int32 GameModeId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestCheatAllowHotjoin(bool bAllowHotJoin);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestCheatAircraftRegulation(int32 RegulationValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToTarget();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SuperF5(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopImpactCamera();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartConditions();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SoftReset();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_UnlockLocalSkin(int32 SkinID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_UnlockLocalNickname(int32 NicknameID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_UnlockLocalMedal(int32 MedalID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_UnlockLocalEmblem(int32 EmblemID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_UnlockAndEquipLocalNickname(int32 NicknameID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_UnlockAllNicknames();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_ToggleForceHostMigrationFailure();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_TestProgressionDataCheat();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_TestMRPDataTableCheat();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_TestMissionScoreDataTableCheat();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_TestMedalEvaluationResultCheat();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_TestGameSettingsCheat();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_TestGameRulesCheat();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_TestGameResultCheat();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_TestCheatWeaponDamage(bool bEnableCheating);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_TestCheatPlaneLocation(int32 ClientIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_TestCheatPlaneHealth();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_TestCheatPlaneAmmoCount();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_TestCheatOnCheatingProperty();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_TestCheatLocalPlaneLocation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_TeleportToHost();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_TeleportToAirCurrentVolume(int32 AirCurrentVolumeIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_SimulateNetworkLibInitFailure(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_ShowVCMemberList(bool bShow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_ShowSimpleVoiceChatPanel(bool bShow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_SetVoiceChatMinLightUpTime(float TimeInSeconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_SetRoomMMRValue(int32 NewMMRValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_SetRetrySaveAutoKickDurationInSeconds(float TimeInSeconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_SetRedBootShowTime(int32 Seconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_SetRedBootKickedPlayersThreshold(int32 Players);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_SetRedBootExpiryTime(int32 Seconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_SetPreventRejoinSessionTime(int32 Seconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_SetPlaneModel(int32 PlaneID, int32 WeaponNo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_SetMinimumRequiredBandwidthBPS(float MinimumRequiredBandwidthBPS);
    
    UFUNCTION(Exec)
    void SNL_SetLocalRankExp(uint32 RankExperience);
    
    UFUNCTION(Exec)
    void SNL_SetLocalRank(uint8 RankID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_SetLocalPlayerScore(int32 Score);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_SetLocalOnlineCreditValue(int32 MMRP);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_SetLocalMMRValue(int32 MMRValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_SetFlightFormation(int32 FlightFormationType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_SetErrorDelayDuration(float DurationInSeconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_SetCustomFlightFormation(const FString& FlightFormation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_SetAutoKickThreshold(int32 Seconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_SendTestMessage();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_SendAircraftSetsToAllClients();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_ResetLocalMMRValue();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_KillLocalPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_KickPlayerByID(int32 KickedClientID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_KickManagerDebugToggle();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_InitializeNetworkEmulator();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_ForceCompleteMission(int32 SecondToWait);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_ForceAbortMission(bool bShouldAbortMission);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_EnableUAVLaserPE(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_EnableSessionTimeoutDetection(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_EnableResetPlayerControllerOnPause(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_EnableProgressionDebug(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_EnablePlaneSync(bool bEnablePlaneSync);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_EnableNetworkLOD(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_EnableNetworkGodMode(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_EnableFlightEngine(bool bEnableFlightEngine);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_EnableDebugFakeSession(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_EnableAutoWeapon(bool bMGEnabled, bool bMainWeaponEnabled, bool bUseSpecialWeapon);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_EnableAirCurrentReplication(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_DisplayStats(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_DisplayLocalAircraftCost();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_DisplayDebugBox(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_DisplayAllHUDElements();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool SNL_CheckOnlineDataStatus();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_CheckOnlineCreditValue();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_CheckLocalRankInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_CheckLocalPlayerScore();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_CheckLocalMMRValue();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_CameraSideTargetFollow(int32 ClientIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_CameraSideSetOffset(float Right, float Forward, float Up);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_CameraSide(int32 ClientIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_CameraMovePlayer(int32 ClientIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_CameraFree();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_CameraFollowClient(int32 ClientIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_CameraDisable();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SNL_ArrangeWindows();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SkipToPhase(int32 PhaseNo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateSaveDataMinSizeKB(int32 KiloByteSize);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateSaveDataMinSize(int32 ByteSize);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateMissileDeath();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateCorruptedSaveDataInMemory(bool bIsCorruptedSave);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShutdownAutomationTest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowWeatherParticleLocation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowTunnelInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowSnapPositionDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowSearchLightDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowImpactCameraInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowDialogStack();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowAIASSeaExplosionDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetWeaponDebugContainerDisplayMode(int32 Mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRWidgetDistance(float DistanceOffset);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRWeaponInfoYaw(float Yaw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRWeaponInfoScale(float X, float Y);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRWeaponInfoPosition(float X, float Y, float Z);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRWeaponInfoPitch(float Pitch);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRVelocityVectorScale(float Scale);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRTextInfoYaw(float Yaw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRTextInfoScale(float X, float Y);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRTextInfoPosition(float X, float Y, float Z);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRTextInfoPitch(float Pitch);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRSubtitlePosition(float X, float Y);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRRadarYaw(float Yaw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRRadarScale(float X, float Y);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRRadarPosition(float X, float Y, float Z);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRRadarPitch(float Pitch);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRPlaneInfoYaw(float Yaw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRPlaneInfoScale(float X, float Y);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRPlaneInfoPosition(float X, float Y, float Z);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRPlaneInfoPitch(float Pitch);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRPitchMeterScale(float X, float Y);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRPitchMeterDepth(float Depth);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVROverlayGlow(float R, float G, float B, float A);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVROverlayCurve(float Distance, float curveParam);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRHangarCameraRotationYaw(float Yaw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRHangarCameraRotationRoll(float Roll);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRHangarCameraRotationPitch(float Pitch);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRHangarCameraRotation(FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRHangarCameraPositionZ(float Z);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRHangarCameraPositionY(float Y);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRHangarCameraPositionX(float X);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRHangarCameraPosition(FVector Position);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRCompassScale(float X, float Y);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRCompassHeight(float Depth);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRCompassDepth(float Depth);
    
    UFUNCTION(Exec)
    void SetVRCampaignMRP(uint64 NewMRP);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRCameraPositionZ(float Z);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRCameraPositionY(float Y);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVRCameraPositionX(float X);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVoiceLanguage(int32 Languange);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVibrationScalar(float Scalar);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVeryEasyMode(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetTrueSkyEnabled(const bool Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetTransitionAsyncLoadingTimeLimit(float TimeLimit);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetTeleportDistance(float DistanceUU);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetTargetSelectionWideMode(bool bWideMode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetTargetSelectionAngleFirst(bool bAngleFirst);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSubtitleLanguage(int32 Languange);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetStreamingInstallProgress(int32 Percentage, int32 Seconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetStreamingInstallChunk(int32 FinishedChunkNo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetStereoDepthDirectly(float Depth);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetStereoDepth(float Depth);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSearchEnemyRangeDisplayMode(int32 DisplayMode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSaveLoadThreadMinDelay(float Duration);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSaveLoadSimulatedStatus(int32 StatusValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSaveLoadDialogMinDelay(float Duration);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetReplaySlowMotionSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetReplayFastForwardSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerTickRate(float Rate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerSpecialWeapon(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerSkin(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerMissilePowerCoefficient(float Coefficient);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerJamming(bool bIsJamming);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerEmblem(int32 EmblemID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerControlType(int32 Type);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerBrakingForce(float Force);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetNimbusUserState(int32 StateIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMissionSetupPauseFrame(int32 frame);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMissionPhaseTimeLeft(float TimeLeftSeconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetLoadingTips(int32 TipsID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetLanguage(int32 Languange);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetIsInJammingArea(bool bIsJamming);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetIdleIconWaitingTime(float Seconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHudMADParameter(float Peak, float Scale, float WaveNum, float WaveOffset);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHUDDistortionScale(float NewScale);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHealthPercentage(float Percentage);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGamma(int32 OptionsValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetForceSandDensity(float Density);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetForceEquipUpgradeParts(const FString& PartsIDs);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetForceEmblemID(int32 EmblemID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetForceCloudDensity(float Density);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDistanceUnit(int32 UnitType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDisableRadioGroupFilter(const FString& RadioGroups);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDebugObjectMapMode(int32 Mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDebugContainerVisibilityDistance(float DistanceUU);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDebugContainerDisplayMode(int32 DisplayMode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDebugAssistAngleForRemotePlayer(float AssistAngle);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCollectLoadedTextureIncreaseInMipLevel(int32 InMipLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCollectLoadedTextureIGCNo(int32 InIGCNo);
    
    UFUNCTION(Exec)
    void SetCampaignMRP(uint64 NewMRP);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAllAttackTargetsException(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAIWeaponFilter(const FString& WeaponLabel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAIPlaneTickRateDuringMission(float Rate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAIPlaneTickRate(float Rate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SelectRandomMenuItem();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SelectNextMenuItem();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SaveSigmaData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SaveAllGameData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReturnToBoot();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RestockEquipment();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetUserSetting();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetSigmaSaveData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetRadioPlayCounts();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetFPSTracking();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAutomaticSpeakerIDs();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAllSaveData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAchievements();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReplayRandomCameraCondition(int32 Mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReloadSoundBank();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReloadLevel();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RadioSuspendToMiniGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RadioResumeFromMiniGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void QueryUIStatus();
    
    UFUNCTION(BlueprintCallable, Exec)
    void QueryStorageInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintVRSubtitlePosition();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintConditionActionMap();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlaySavedReplay(const FString& ReplayName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayRadioTable(const FString& RadioTableName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayImpactCamera(FName CameraName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayIGC(int32 IGCNumber);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayerStruckByLightning();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PingTargettedEnemyInRadar();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PingHelpInRadar();
    
    UFUNCTION(BlueprintCallable, Exec)
    void OpenDialog(int32 DialogID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void NearClip_NotTouch();
    
    UFUNCTION(BlueprintCallable, Exec)
    void NearClip_AlwaysReset();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MoreFireworksPlease(int32 Count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MissionTimeLeftToExpire(float RemainingTimeInSeconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LockVRAircraftTree();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LockMultiplayAircraftTree();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LockAircraftTree();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LockAircraft(const FString& PlaneStringID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadSigmaSaveData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadAllSaveData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillTGT();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillTarget();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillSelf();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillNonTGT();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillNextTarget();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillLockedOnTargets();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillCameraChangeMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillAllies();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ItsOver9000(float Multiplier, bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void IsConnectedToOnlineService(bool bForceCheck);
    
    UFUNCTION(BlueprintCallable, Exec)
    void IsConnectedToNetwork(bool bForceCheck);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ImpactCameraForcedPlayCameraName(FName CameraName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ImpactCameraForcedEmergencyMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ImpactCameraChangeMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ImpactCameraChangeDebugSphereMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void HideStaticMesh(const FString& FilterStr, bool bHide);
    
    UFUNCTION(BlueprintCallable, Exec)
    void HideDebugInfo(bool bHide);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GundariumUpgrade(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GodAI(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetOnlineConnectivity(bool bForceCheck);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceStaticMeshLOD(const FString& FilterStr, int32 InForcedLOD);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceMultiplayerSortie();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceMapChange(const FString& MapName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceFailSave(bool bFail);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceDisableHUD(bool bDisable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FindDevelopersAssetReference();
    
    UFUNCTION(Exec)
    void FillVRCampaignMissionRecords(const FString& DifficultyLevel, EMissionRank ClearRank, uint32 Score, float TimeSec, bool bSkipLastMission);
    
    UFUNCTION(Exec)
    void FillMissionRecord(const FString& MissionStringID, const FString& DifficultyLevel, EMissionRank ClearRank, uint32 Score, float TimeSec);
    
    UFUNCTION(Exec)
    void FillCampaignMissionRecords(const FString& DifficultyLevel, EMissionRank ClearRank, uint32 Score, float TimeSec, bool bSkipLastMission);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FadeOut(float Duration);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FadeIn(float Duration);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EULAFlow(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableWeaponExtrapolation(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableWeaponDebugPath(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableNimbusUserManagerListeningEvent();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableNewTargetSelectionAlgorithm(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableMiniMapRadar(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableHudMAD(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableHUDDistortion();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpReplayDataBuffer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpMemoryStats();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpDependencedPackages(const FString& ObjectName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableSound();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableReplayExit(bool Disabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableProhibitionBlock(const FString& BlockType, bool bShouldDisable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisablePlayerAirCurrent();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableHUDDistortion();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableAIAttack(bool bDisable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DeleteSigmaSaveFile();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DeleteDebugSaveFile();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DeleteAllSaveFiles();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowTLSLength();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowRainLineParameter();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowPathPointTimeout();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowImageEffectParameter();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowAirCurrent();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDummyAirCurrent();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DataviewerSortieRandomAircraft(int32 Mode);
    
    UFUNCTION(Exec)
    void DataviewerSortieMPAircraft(int32 PlaneID, int32 Sortie, int32 StageNum, int32 SWPNo, int32 KillSWP, uint32 Aircraft, uint32 UAV, uint32 ground, uint32 Vessel, uint64 FlightTimeMS, uint64 FlightDistanceMeters, int32 Score, int32 MRP, bool bIsBestPlayer, int32 PerformanceEvaluID, int32 PerformanceEvaluIDCount, int32 Mode);
    
    UFUNCTION(Exec)
    void DataviewerSortieAircraft(int32 PlaneID, int32 Sortie, int32 MissionID, int32 SWPNo, int32 KillSWP, uint32 Aircraft, uint32 UAV, uint32 ground, uint32 Vessel, uint64 FlightTimeMS, uint64 FlightDistanceMeters, int32 Score, int32 MRP, int32 Mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CreateGarbageUObject(int32 ObjectSize, int32 ObjectNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CrashDump();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteVRCampaign();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteSaveLoadSimulatedTask();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteMission();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteCampaign();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CloseDialog(int32 DialogID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CloseAllDialogs();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearPhase();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatPause(int32 ChannelIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeMenuByIndex(int32 MenuIDIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeMenu(const FString& MenuIDStringName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CameraShakeIntermittent();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BowToSlimForAmmo(int32 WeaponNumber, int32 WeaponCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BowToPPForAmmo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AUTOM_StopRecording();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AUTOM_StopPlaying();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AUTOM_StopLoopingPlayback();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AUTOM_StartRecording(const FString& InSaveFileName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AUTOM_SetSaveFileType(bool bBinary);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AUTOM_SetPaused(bool bIsPaused);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AUTOM_SetLoopCountLimit(int32 LoopCountLimist);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AUTOM_SetDisplayLog(bool bShow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AUTOM_SaveToFile(const FString& InSaveFileName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AUTOM_PlayFilesInSubFolderRandom(const FString& SubDirectoryName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AUTOM_PlayFilesInSubFolder(const FString& SubDirectoryName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AUTOM_PlaybackFileLoop(const FString& InLoadFileName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AUTOM_PlaybackFile(const FString& InLoadFileName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AUTOM_PlaybackCurrentLoop();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AUTOM_PlaybackCurrent();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AUTOM_PlayAllFilesRandom();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AUTOM_PlayAllFiles();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AUTOM_OutputLog();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AUTOM_MemReport(bool bFull);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AUTOM_ListPlaybackFiles();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ApplyDamageToPlayer(float DamageAmount);
    
    UFUNCTION(Exec)
    void AddFlightDistanceAndKillCount(EMissionCategory MissionCategory, uint32 FlightDistance, uint32 KillCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddCompletedMission(int32 CompletedMission);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActivateDebugMenuMode();
    
    UFUNCTION(Exec)
    void ActivateDebugCondition(uint32 ConditionId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ActivateAllConditionActionEntries();
    
};

