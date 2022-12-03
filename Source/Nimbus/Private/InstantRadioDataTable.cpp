#include "InstantRadioDataTable.h"

FInstantRadioDataTable::FInstantRadioDataTable() {
    this->ID = 0;
    this->Category = EInstantRadioCategory::All;
    this->bPingPlayerLocation = false;
    this->bPingTargetLocation = false;
    this->SortNumber = 0;
}

