#include "CampaignHangarWeaponViewerWidget.h"

UCampaignHangarWeaponViewerWidget::UCampaignHangarWeaponViewerWidget() {
    this->PlayerCamControlSpeed = 1.00f;
    this->PlayerCamViewAngleOffset = 30.00f;
    this->PlayerCamLookDistOffsetDefault = 3.00f;
    this->PlayerCamFovOffsetMin = -60.00f;
    this->PlayerCamFovOffsetMax = 40.00f;
    this->PlayerCamPitchMin = 10.00f;
    this->PlayerCamPitchMax = 45.00f;
    this->HangarManager = NULL;
}

