#include "NimbusGameInstance.h"

void UNimbusGameInstance::SetShowWeaponsInHangar(bool bShouldShowWeaponsInHangar) {
}

void UNimbusGameInstance::SetShowWeaponOnPlaneInHangar(bool bShouldShowWeaponOnPlaneInHangar) {
}

void UNimbusGameInstance::SetShowPlaneInHangar(bool bShouldShowPlaneInHangar) {
}

void UNimbusGameInstance::SetShowPilotInHangar(bool bShouldShowPilotInHangar) {
}

void UNimbusGameInstance::SetShowHangar(bool bShouldShowHangar) {
}

void UNimbusGameInstance::SetSelectedPlaneSkinNo(int32 SelectedPlaneSkinNo) {
}

void UNimbusGameInstance::SetSelectedPlaneEmblemID(int32 SelectedPlaneEmblemID) {
}

void UNimbusGameInstance::SetSelectedHangarCameraType(EHangarCameraType HangarCameraType) {
}

void UNimbusGameInstance::SetPlaneAndSWP(int32 SelectedPlaneType, int32 SelectedPlaneSWP) {
}

void UNimbusGameInstance::SetMissionID(int32 MissionID) {
}

void UNimbusGameInstance::SetCurrentGameSaveSlot(EGameSaveSlot NewGameSaveSlot) {
}

bool UNimbusGameInstance::IsVRUIMode() {
    return false;
}

bool UNimbusGameInstance::IsVRMode() {
    return false;
}

bool UNimbusGameInstance::IsVRGameMode() {
    return false;
}

bool UNimbusGameInstance::IsStereoMode() {
    return false;
}

bool UNimbusGameInstance::IsShippingMode() {
    return false;
}

bool UNimbusGameInstance::GetShowWeaponsInHangar() const {
    return false;
}

bool UNimbusGameInstance::GetShowWeaponOnPlaneInHangar() const {
    return false;
}

bool UNimbusGameInstance::GetShowPlaneInHangar() const {
    return false;
}

bool UNimbusGameInstance::GetShowPilotInHangar() const {
    return false;
}

bool UNimbusGameInstance::GetShowHangar() const {
    return false;
}

int32 UNimbusGameInstance::GetSelectedPlaneSWP() const {
    return 0;
}

int32 UNimbusGameInstance::GetSelectedPlaneSkinNo() const {
    return 0;
}

int32 UNimbusGameInstance::GetSelectedPlaneID() const {
    return 0;
}

int32 UNimbusGameInstance::GetSelectedPlaneEmblemID() const {
    return 0;
}

EHangarCameraType UNimbusGameInstance::GetSelectedHangarCameraType() const {
    return EHangarCameraType::HCAM_STATIC;
}

FString UNimbusGameInstance::GetPhysicalMaterialName(EPhysicalMaterialType MaterialType) const {
    return TEXT("");
}

int32 UNimbusGameInstance::GetMissionID() const {
    return 0;
}

EGameSaveSlot UNimbusGameInstance::GetCurrentGameSaveSlot() const {
    return EGameSaveSlot::GS_CAMPAIGN1;
}

bool UNimbusGameInstance::AsyncSaveOnlineData() {
    return false;
}

bool UNimbusGameInstance::AsyncSaveGameplaySettings(EGameSaveSlot GameSaveSlot) {
    return false;
}

bool UNimbusGameInstance::AsyncSaveAccountSettings() {
    return false;
}

bool UNimbusGameInstance::AsyncLoadOnlineData() {
    return false;
}

bool UNimbusGameInstance::AsyncLoadGameplaySettings(EGameSaveSlot GameSaveSlot) {
    return false;
}

bool UNimbusGameInstance::AsyncLoadAccountSettings() {
    return false;
}

UNimbusGameInstance::UNimbusGameInstance() {
    this->HangarManager = NULL;
    this->HMDOverlayCutoffPitch = -5.00f;
    this->HUDWidgetRenderTexture = NULL;
    this->StereoUIRenderTexture = NULL;
    this->MenuDecoTexture = NULL;
    this->bUseMenuDecoTexture = false;
    this->SkyLightAboveCloudCubeMap = NULL;
    this->SkyLightBelowCloudCubeMap = NULL;
    this->AssetLoader = NULL;
    this->TextureManager = NULL;
    this->BootMenuMapName = TEXT("/Game/UI/Menu/Boot");
    this->StreamingInstallManager = NULL;
    this->AIWingTipRibbonCollectionClass = NULL;
    this->MissileRibbonCollectionClass = NULL;
    this->DebriefingRibbonCollectionClass = NULL;
    this->AIWingTipRibbonCollectionClassVR = NULL;
    this->MissileRibbonCollectionClassVR = NULL;
    this->LoadingScreenManager = NULL;
    this->ConditionActionManager = NULL;
    this->TickObject = NULL;
    this->MapChangeManager = NULL;
    this->FadeManager = NULL;
    this->SubLevelManager = NULL;
    this->PauseManager = NULL;
    this->SoundReverbManager = NULL;
    this->GarbageCollectManager = NULL;
    this->SoundPauseManager = NULL;
    this->SystemUserPause = NULL;
    this->MusicPlayer = NULL;
    this->GameInformation = NULL;
    this->DLCInformation = NULL;
    this->MenuSequenseManager = NULL;
    this->SeaMaterial = NULL;
    this->GroundMaterial = NULL;
    this->ConcreteMaterial = NULL;
    this->GlassMaterial = NULL;
    this->IceMaterial = NULL;
    this->BossMaterial = NULL;
    this->MetalMaterial = NULL;
    this->DebugFontObject = NULL;
    this->DebugLog = NULL;
    this->TempScreenshot = NULL;
    this->EULAHelper = NULL;
    this->SoundManager = NULL;
    this->ReplayDataManager = NULL;
    this->DebugMissionHitchChecker = NULL;
}

