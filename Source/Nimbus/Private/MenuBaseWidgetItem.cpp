#include "MenuBaseWidgetItem.h"

FMenuBaseWidgetItem::FMenuBaseWidgetItem() {
    this->SubItemNumber = 0;
    this->SelectedSubItem = 0;
    this->bIsItemSelected = false;
    this->bIsItemLocked = false;
    this->bIsItemSecret = false;
    this->bIsItemHidden = false;
    this->ItemIconStatus = EIconStatusIDs::None;
    this->ItemIconCategory = EIconCategoryIDs::None;
    this->bIsItemTextWithNumber = false;
    this->bItemTextRequireLocalization = false;
    this->bSubItemTextRequireLocalization = false;
    this->bIsSubItemSlider = false;
    this->bDescriptionTextRequireLocalization = false;
    this->DescriptionTextState = EDescriptionTextState::SHOWDEFAULTONLY;
    this->Link = EMenuIDs::None;
    this->DialogID = EDialogIDs::None;
    this->NewIconTimer = 0.00f;
    this->bIsSubItemArrowHidden = false;
}

