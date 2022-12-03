#include "VRHudPauseWidget.h"



void UVRHudPauseWidget::OnFrameOutAnimationEndBP() {
}

UVRHudPauseWidget::UVRHudPauseWidget() {
    this->HUD = NULL;
    this->UmgDescriptionTextVR = NULL;
    this->UmgDialogNormalItemText[0] = NULL;
    this->UmgDialogNormalItemText[1] = NULL;
    this->UmgDialogNormalItemText[2] = NULL;
    this->UmgDialogNormalItemText[3] = NULL;
    this->UmgDialogSelectedItemText[0] = NULL;
    this->UmgDialogSelectedItemText[1] = NULL;
    this->UmgDialogSelectedItemText[2] = NULL;
    this->UmgDialogSelectedItemText[3] = NULL;
}

