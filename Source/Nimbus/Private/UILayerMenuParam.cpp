#include "UILayerMenuParam.h"

UUILayerMenuParam::UUILayerMenuParam() {
    this->TransitionTime = 0.00f;
    this->SubMenuTransitionTime = 0.00f;
    this->LinkLineAnimationTime = 0.00f;
    this->CameraTransitionRateCurve = NULL;
    this->StartupTextHidingDelay = 0.00f;
    this->LineMatInstance = NULL;
    this->LineWidth = 0.00f;
    this->VisibleDecorationLines = false;
    this->TextHeight = 40.00f;
    this->IconHeight = 40.00f;
    this->GroupSpaceHeight = 20.00f;
    this->ItemShowHideAnimTimeTransition = 0.00f;
    this->ItemShowHideDelayDiffTimeTransition = 0.00f;
    this->ItemShowHideAnimTimeChangeItem = 0.00f;
    this->ItemShowHideAnimTimeStartupAlpha = 0.00f;
    this->ItemShowHideDelayDiffTimeStartup = 0.00f;
    this->MenuIndexWidgetClass = NULL;
    this->MenuVerticalBarWidgetClass = NULL;
    this->MenuLeftVerticalBarWidgetClass = NULL;
}

