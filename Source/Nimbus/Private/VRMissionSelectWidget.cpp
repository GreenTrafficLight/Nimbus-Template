#include "VRMissionSelectWidget.h"

void UVRMissionSelectWidget::SetVRMissionSelectBgAlreadyFrameInFlag(bool Flag) {
}

bool UVRMissionSelectWidget::IsToPlayFrameInAnimation() {
    return false;
}

UVRMissionSelectWidget::UVRMissionSelectWidget() {
    this->InfoPanel = NULL;
    this->MissionThumbnailImage = NULL;
    this->SelectorUnitWidget = NULL;
    this->FadeInSeconds = 5.00f;
    this->FadeOutSeconds = 3.00f;
}

