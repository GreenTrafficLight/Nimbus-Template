#include "CampaignDebriefingWidget.h"

void UCampaignDebriefingWidget::OnMapTextureLoaded() {
}

void UCampaignDebriefingWidget::OnLevelLoaded() {
}

UCampaignDebriefingWidget::UCampaignDebriefingWidget() {
    this->DebriefingParameters = NULL;
    this->DebriefingLevel = NULL;
    this->CameraActor = NULL;
    this->DebriefingCamera = NULL;
    this->PlayerController = NULL;
    this->MapTexture = NULL;
    this->UmgSubtitle = NULL;
    this->UmgDebriefButtonText = NULL;
    this->ResultPanel = NULL;
}

