#include "LayerMenuManager.h"

ALayerMenuManager::ALayerMenuManager() {
    this->LayerMenuParam = NULL;
    this->UIManagerActor = NULL;
    this->SubMenuObjects[0] = NULL;
    this->SubMenuObjects[1] = NULL;
    this->SubMenuObjects[2] = NULL;
    this->SubMenuObjects[3] = NULL;
    this->MenuVerticalBarWidget[0] = NULL;
    this->MenuVerticalBarWidget[1] = NULL;
    this->MenuVerticalBarWidget[2] = NULL;
    this->MenuVerticalBarWidget[3] = NULL;
    this->MenuVerticalBar3DWidgetActor[0] = NULL;
    this->MenuVerticalBar3DWidgetActor[1] = NULL;
    this->MenuVerticalBar3DWidgetActor[2] = NULL;
    this->MenuVerticalBar3DWidgetActor[3] = NULL;
    this->LayerMenuLineActor = NULL;
    this->FocusedMenuWidget = NULL;
    this->MenuForeground3DWidgetActor = NULL;
    this->MenuBackground3DWidgetActor = NULL;
    this->MenuLeftVerticalBar3DWidgetActor = NULL;
    this->MenuRightVerticalBar3DWidgetActor = NULL;
}

