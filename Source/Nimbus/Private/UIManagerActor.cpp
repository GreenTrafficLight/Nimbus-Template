#include "UIManagerActor.h"
#include "ManaComponent.h"

class AUIManagerActor;

void AUIManagerActor::RemoveAllMenus() {
}

void AUIManagerActor::OpenMenu(EMenuIDs MenuID) {
}

void AUIManagerActor::OnSetCurrentUIManagerActor() {
}

float AUIManagerActor::OnEvaluateGlowPulsing_Implementation() const {
    return 0.0f;
}

AUIManagerActor* AUIManagerActor::GetCurrentUIManagerActor() {
    return NULL;
}

void AUIManagerActor::CloseMenuAndResumePlay() {
}

AUIManagerActor::AUIManagerActor() {
    this->VRDistanceFromCameraOffset = 0.00f;
    this->IsUIManagarActorBoot = false;
    this->DelayTimeAfterTextHidingEnded = 0.00f;
    this->DialogWidgetClass = NULL;
    this->ScrollableDialogWidgetClass = NULL;
    this->EULADialogWidgetClass = NULL;
    this->VRDialogWidgetClass = NULL;
    this->KeyAssignDialogWidgetClass = NULL;
    this->GuideWidgetClass = NULL;
    this->FrontWindowWidgetClass = NULL;
    this->FrontScreenWidgetClass = NULL;
    this->FrontScreenFilterWidgetClass = NULL;
    this->MovieWidgetClass = NULL;
    this->FullscreenMovieWidgetClass = NULL;
    this->MultiSessionCommonWidgetClass = NULL;
    this->MultiSimpleVoiceChatWidgetClass = NULL;
    this->MenuForegroundWidgetClass = NULL;
    this->MenuBackgroundWidgetClass = NULL;
    this->MultiMenuBackgroundWidgetClass = NULL;
    this->AircraftTreeBackgroundWidgetClass = NULL;
    this->MenuIndexWidgetClass = NULL;
    this->MenuVerticalBarWidgetClass = NULL;
    this->MenuLeftVerticalBarWidgetClass = NULL;
    this->BootWidgetClass = NULL;
    this->CopyrightWidgetClass = NULL;
    this->MainTitleWidgetClass = NULL;
    this->SetupMenuControlsWidgetClass = NULL;
    this->SetupMenuVoiceWidgetClass = NULL;
    this->SetupMenuTextWidgetClass = NULL;
    this->MainMenuWidgetClass = NULL;
    this->StaffCreditsWidgetClass = NULL;
    this->RewardMedalWidgetClass = NULL;
    this->RewardItemWidgetClass = NULL;
    this->GenericLoadWidgetClass = NULL;
    this->CampaignHangarAircraftWidgetClass = NULL;
    this->CampaignAircraftViewerWidgetClass = NULL;
    this->CampaignHangarWeaponWidgetClass = NULL;
    this->CampaignHangarWeaponViewerWidgetClass = NULL;
    this->CampaignHangarPartsWidgetClass = NULL;
    this->CampaignHangarSkinWidgetClass = NULL;
    this->CampaignHangarEmblemWidgetClass = NULL;
    this->CampaignHangarEmblemSwitchWidgetClass = NULL;
    this->CampaignHangarReviewWidgetClass = NULL;
    this->CampaignHangarSortieWidgetClass = NULL;
    this->CampaignAircraftTreeWidgetClass = NULL;
    this->MultiHangarWidgetClass = NULL;
    this->MultiplayAircraftViewerWidgetClass = NULL;
    this->MultiHangarAircraftSetWidgetClass = NULL;
    this->MultiHangarAircraftTreeWidgetClass = NULL;
    this->MultiHangarRadioWidgetClass = NULL;
    this->MultiHangarAircraftWidgetClass = NULL;
    this->MultiHangarWeaponWidgetClass = NULL;
    this->MultiHangarPartsWidgetClass = NULL;
    this->MultiHangarEmblemWidgetClass = NULL;
    this->MultiHangarEmblemSwitchWidgetClass = NULL;
    this->MultiHangarSkinWidgetClass = NULL;
    this->MultiHangarReviewWidgetClass = NULL;
    this->MultiHangarNameWidgetClass = NULL;
    this->MultiHangarSortieSelectWidgetClass = NULL;
    this->CampaignMenuMainWidgetClass = NULL;
    this->CampaignMenuDifficultyWidgetClass = NULL;
    this->CampaignMvWidgetClass = NULL;
    this->CampaignMvNewsWidgetClass = NULL;
    this->CampaignMissionTitleWidgetClass = NULL;
    this->CampaignBriefingMvWidgetClass = NULL;
    this->CampaignBriefingMenuWidgetClass = NULL;
    this->CampaignMenuActionSelectWidgetClass = NULL;
    this->CampaignMissionLoadWidgetClass = NULL;
    this->CampaignEdWidgetClass = NULL;
    this->CampaignDebriefingWidgetClass = NULL;
    this->CampaignUnlockMenuWidgetClass = NULL;
    this->CampaignMenuNextWidgetClass = NULL;
    this->CampaignFreeMissionWidgetClass = NULL;
    this->CampaignFreeMissionDifficultyWidgetClass = NULL;
    this->CampaignFreeMissionNextWidgetClass = NULL;
    this->CampaignHudPauseWidgetClass = NULL;
    this->CampaignRetryWidgetClass = NULL;
    this->MissionFailWidgetClass = NULL;
    this->MissionSuccessWidgetClass = NULL;
    this->MissionResupplyWidgetClass = NULL;
    this->MultiMenuMainWidgetClass = NULL;
    this->MultiMenuStartWidgetClass = NULL;
    this->MultiMenuQuickMatchWigetClass = NULL;
    this->MultiMenuSessionWidgetClass = NULL;
    this->MultiMenuSessionBrowserWidgetClass = NULL;
    this->MultiMenuSessionConfirmWidgetClass = NULL;
    this->MultiMenuCreateSessionWidgetClass = NULL;
    this->MultiMenuLobbyWidgetClass = NULL;
    this->MultiMenuLobbyInfoWidgetClass = NULL;
    this->MultiMenuLobbyChatWidgetClass = NULL;
    this->MultiMissionLoadWidgetClass = NULL;
    this->MultiMenuInvitationWidgetClass = NULL;
    this->MultiPauseWidgetClass = NULL;
    this->MultiWinLoseTDWidgetClass = NULL;
    this->MultiWinLoseBRWidgetClass = NULL;
    this->MultiResultDetailsTDWidgetClass = NULL;
    this->MultiResultDetailsBRWidgetClass = NULL;
    this->MultiResultRewardWidgetClass = NULL;
    this->MultiRewardItemWidgetClass = NULL;
    this->MultiRewardMedalWidgetClass = NULL;
    this->MultiReviveWidgetClass = NULL;
    this->VRMenuMainWidgetClass = NULL;
    this->VRHmdWidgetClass = NULL;
    this->VRMainTitleWidgetClass = NULL;
    this->VRHangarWidgetClass = NULL;
    this->VRPrologueWidgetClass = NULL;
    this->VRDifficultyWidgetClass = NULL;
    this->VRMissionSelectWidgetClass = NULL;
    this->VRBriefingWidgetClass = NULL;
    this->VRAircraftWidgetClass = NULL;
    this->VRWeaponWidgetClass = NULL;
    this->VRReviewWidgetClass = NULL;
    this->VRAircraftViewerWidgetClass = NULL;
    this->VRHangarCockpitWidgetClass = NULL;
    this->VRMissionLoadWidgetClass = NULL;
    this->VRDebriefingWidgetClass = NULL;
    this->VRUnlockWidgetClass = NULL;
    this->VREdWidgetClass = NULL;
    this->VRWarningLookFrontWidgetClass = NULL;
    this->VRHudPauseWidgetClass = NULL;
    this->VRRetryWidgetClass = NULL;
    this->ViewerMenuWidgetClass = NULL;
    this->ViewerMenuCampaignWidgetClass = NULL;
    this->ViewerCampaignRecordsWidgetClass = NULL;
    this->ViewerCampaignMedalWidgetClass = NULL;
    this->ViewerCampaignPilotDataWidgetClass = NULL;
    this->ViewerMenuVRWidgetClass = NULL;
    this->ViewerVRRecordsWidgetClass = NULL;
    this->ViewerVRMedalWidgetClass = NULL;
    this->ViewerVRPilotDataWidgetClass = NULL;
    this->ViewerMenuMultiplayWidgetClass = NULL;
    this->ViewerMultiplayRecordsWidgetClass = NULL;
    this->ViewerMultiplayMedalWidgetClass = NULL;
    this->ViewerMenuGalleryWidgetClass = NULL;
    this->ViewerSceneWidgetClass = NULL;
    this->ViewerMusicWidgetClass = NULL;
    this->ViewerHangarReviewClass = NULL;
    this->ViewerHangarAircraftClass = NULL;
    this->ViewerHangarWeaponClass = NULL;
    this->ViewerHangarEmblemClass = NULL;
    this->ViewerHangarEmblemSwitchClass = NULL;
    this->ViewerHangarSkinClass = NULL;
    this->ViewerHangarNicknameClass = NULL;
    this->ViewerHangarSelectClass = NULL;
    this->OptionsMenuWidgetClass = NULL;
    this->OptionsFlightSystemWidgetClass = NULL;
    this->OptionsControllerWidgetClass = NULL;
    this->OptionsKeyboardWidgetClass = NULL;
    this->OptionsMouseWidgetClass = NULL;
    this->OptionsFlightStickWidgetClass = NULL;
    this->OptionsScreenWidgetClass = NULL;
    this->OptionsGraphicsSteamWidgetClass = NULL;
    this->OptionsSoundWidgetClass = NULL;
    this->OptionsLanguageWidgetClass = NULL;
    this->OptionsGraphicsScreenWidgetClass = NULL;
    this->OptionsGraphicsResolutionWidgetClass = NULL;
    this->OptionsGraphicsAdvancedWidgetClass = NULL;
    this->ReplayWidgetClass = NULL;
    this->MenuWidgetData = NULL;
    this->FrontWindowWidget = NULL;
    this->FrontWindowConverter = NULL;
    this->FrontScreenWidget = NULL;
    this->FrontScreenFilterWidget = NULL;
    this->FullscreenMovieWidget = NULL;
    this->VRDialogWidget = NULL;
    this->VRDialog3DWidgetActor = NULL;
    this->MultiSessionCommonWidget = NULL;
    this->MultiSessionCommon3DWidgetActor = NULL;
    this->MultiSimpleVoiceChatWidget = NULL;
    this->MenuForegroundWidget = NULL;
    this->MenuForeground3DWidgetActor = NULL;
    this->MenuBackgroundWidget = NULL;
    this->MultiMenuBackgroundWidget = NULL;
    this->AircraftTreeBackgroundWidget = NULL;
    this->MenuBackground3DWidgetActor = NULL;
    this->MenuLeftVerticalBarWidget = NULL;
    this->MenuLeftVerticalBar3DWidgetActor = NULL;
    this->MenuVerticalBarWidget = NULL;
    this->MenuVerticalBar3DWidgetActor = NULL;
    this->LayerMenuManager = NULL;
    this->VRWarningLookWidget = NULL;
    this->ManaComponent = CreateDefaultSubobject<UManaComponent>(TEXT("ManaComponent"));
}

