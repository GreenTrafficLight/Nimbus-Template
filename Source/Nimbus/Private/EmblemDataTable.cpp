#include "EmblemDataTable.h"

FEmblemDataTable::FEmblemDataTable() {
    this->EmblemID = 0;
    this->EmblemCategory = EEmblemCategory::Normal;
    this->EmblemGameModeCategory = EEmblemGameModeCategory::Campaign;
    this->IsEnabled = false;
    this->CanFlip = false;
    this->SortNumber = 0;
}

