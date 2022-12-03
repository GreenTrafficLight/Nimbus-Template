#include "NicknameDataTable.h"

FNicknameDataTable::FNicknameDataTable() {
    this->NicknameID = 0;
    this->Category = ENicknameCategory::Others;
    this->GameModeCategory = ENicknameGameModeCategory::Campaign;
    this->IsEnabled = false;
    this->SortNumber = 0;
}

