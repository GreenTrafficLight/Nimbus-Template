#include "BriefUnitDataTableRow.h"

FBriefUnitDataTableRow::FBriefUnitDataTableRow() {
    this->ID = 0;
    this->GroupID = 0;
    this->Yaw = 0.00f;
    this->bIsAlly = false;
    this->bIsWingman = false;
    this->bIsTarget = false;
    this->bIsFocusable = false;
    this->Type = EBriefUnitDataType::Air;
}

