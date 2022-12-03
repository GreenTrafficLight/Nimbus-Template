#include "NimbusGameInformation.h"

int32 UNimbusGameInformation::PlaneStringIDToPlaneID(const FString& PlaneStringID) {
    return 0;
}

FString UNimbusGameInformation::PlaneIDToPlaneStringID(int32 PlaneID) {
    return TEXT("");
}

UNimbusGameInformation::UNimbusGameInformation() {
    this->MissionDataTable = NULL;
    this->PlaneDataTable = NULL;
    this->WeaponDataTable = NULL;
    this->EmblemDataTable = NULL;
    this->MedalDataTable = NULL;
    this->NicknameDataTable = NULL;
    this->NicknameCategoryDataTable = NULL;
    this->PartsDataTable = NULL;
    this->PartsGraphDataTable = NULL;
    this->SkinDataTable = NULL;
    this->SceneDataTable = NULL;
    this->MultiplayerRankingTable = NULL;
    this->MultiplayerMedalTable = NULL;
    this->MultiplayerPerformanceEvaluationDataTable = NULL;
    this->MultiplayerMedalCreditTable = NULL;
    this->MultiplayerLoadingScreenTable = NULL;
    this->MultiplayerInstantRadioTable = NULL;
    this->MultiplayerInstantRadioCategoryTable = NULL;
    this->MultiplayerLobbyChatTable = NULL;
    this->MultiplayerLobbyChatCategoryTable = NULL;
    this->MultiplayerKickDataTable = NULL;
    this->MultiplayerTimeLimitDataTable = NULL;
    this->MultiplayerVictoryPointDataTable = NULL;
    this->MultiplayerAircraftRegulationTable = NULL;
    this->GenericLoadingScreenTable = NULL;
    this->PilotDataDataTable = NULL;
    this->AircraftViewerDataTable = NULL;
    this->VrAircraftViewerDataTable = NULL;
    this->AntiPlayerStealthDataTable = NULL;
    this->AntiAIStealthDataTable = NULL;
    this->CallsignDataTable = NULL;
    this->GuideImageDataTable = NULL;
    this->ViewerMusicDataTable = NULL;
    this->VRHangarWeaponPlacementDataTable = NULL;
    this->StaffCreditsDataTable = NULL;
    this->OptionSoundDataTable = NULL;
    this->LocalizeTextIdDataTable = NULL;
}

