#include "StereoWidgetActor.h"

AStereoWidgetActor::AStereoWidgetActor() {
    this->RootUserWidgetClass = NULL;
    this->StereoWidgetConverter = NULL;
    this->OverlayTextureConverter = NULL;
    this->StereoWidget = NULL;
    this->StereoWidgetClass = NULL;
    this->StereoUIMaterial = NULL;
    this->OutOfCockpitWanringWidget = NULL;
    this->OutOfCockpitWarningFadeTime = 0.25f;
    this->OutOfCockpitMiniOpacity = 0.50f;
    this->OutOfCockpitWanringWidgetObject = NULL;
    this->RootWidget = NULL;
}

