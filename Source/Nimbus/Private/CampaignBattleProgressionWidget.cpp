#include "CampaignBattleProgressionWidget.h"

UCampaignBattleProgressionWidget::UCampaignBattleProgressionWidget() {
    this->PlayerCamControlSpeed = 1.00f;
    this->GroupingDist = 150.00f;
    this->NameLineThickness = 1;
    this->IntroAnimationPitch = 10.00f;
    this->PitchMinLimit = 10.00f;
    this->PitchMaxLimit = 90.00f;
    this->IntroAnimationDistance = 100.00f;
    this->IntroAnimationDuration = 2.00f;
    this->FocusedNameOpacity = 0.80f;
    this->Focused3dIconOpacity = 0.80f;
    this->OffFocusedNameOpacity = 0.20f;
    this->OffFocused3dIconOpacity = 0.01f;
    this->PlaneIcon = NULL;
    this->GroundIcon = NULL;
    this->NavalIcon = NULL;
    this->LineBase = NULL;
    this->BillboardTarget = NULL;
    this->LineTemplate = NULL;
    this->PlayerIconMatInstance = NULL;
    this->AllyIconMatInstance = NULL;
    this->EnemyIconMatInstance = NULL;
    this->LineMeshOpacity = 0.50f;
    this->PlayerIconWireframeMatInstance = NULL;
    this->AllyIconWireframeMatInstance = NULL;
    this->EnemyIconWireframeMatInstance = NULL;
    this->PlayerIconLineMatInstance = NULL;
    this->AllyIconLineMatInstance = NULL;
    this->EnemyIconLineMatInstance = NULL;
    this->TargetRingMaterial = NULL;
    this->CloudHeightDataTable = NULL;
}

