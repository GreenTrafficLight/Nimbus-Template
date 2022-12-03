#include "CampaignBriefingWidget.h"

void UCampaignBriefingWidget::OnMapMeshLoaded() {
}

void UCampaignBriefingWidget::OnCloudMaterialLoaded() {
}

void UCampaignBriefingWidget::OnBriefingLevelLoaded() {
}

UCampaignBriefingWidget::UCampaignBriefingWidget() {
    this->BriefingMesh = NULL;
    this->BriefingCloudMaterial = NULL;
    this->BriefingMeshActor = NULL;
}

