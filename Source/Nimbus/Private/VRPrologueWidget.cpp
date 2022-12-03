#include "VRPrologueWidget.h"


bool UVRPrologueWidget::IsToPlayFrameInAnimation() {
    return false;
}

UVRPrologueWidget::UVRPrologueWidget() {
    this->BgmDelaySeconds = 2.00f;
    this->LastWaitSeconds = 2.00f;
    this->KeepingBlackSeconds = 3.00f;
    this->FadeInSeconds = 5.00f;
    this->UmgMovieSubtitle = NULL;
}

