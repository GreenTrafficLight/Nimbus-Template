#include "CommonAircraftTreeWidget.h"

UCommonAircraftTreeWidget::UCommonAircraftTreeWidget() {
    this->NodeItemWidgetClass = NULL;
    this->NodeWeaponWidgetClass = NULL;
    this->NodeUnlockWidgetClass = NULL;
    this->NodeDataTable = NULL;
    this->LinkDataTable = NULL;
    this->ImageDataAsset = NULL;
    this->InfoData = NULL;
    this->WeaponGroupOffset = 0.40f;
    this->WeaponGroupSpacing = 1.27f;
    this->FocusedNode = NULL;
    this->selector = NULL;
    this->HangarStatus = NULL;
    this->HangarStatusEx[0] = NULL;
    this->HangarStatusEx[1] = NULL;
    this->HangarStatusEx[2] = NULL;
    this->HangarMRPInfo = NULL;
    this->AnimationPlayer = NULL;
    this->TreeMenuBaseWidget = NULL;
    this->AircraftTreeCommon = NULL;
    this->AircraftWeaponInformation = NULL;
    this->MRPInformation = NULL;
    this->DescriptionText = NULL;
    this->DescriptionTextBlock = NULL;
    this->TreeButtonTextBlock = NULL;
    this->UnderlayImage = NULL;
    this->UmgPurchaseCost = NULL;
    this->UmgLoadIcon = NULL;
    this->ObtainItemNode[0] = NULL;
    this->ObtainItemNode[1] = NULL;
    this->UmgMovieSubtitle = NULL;
}

