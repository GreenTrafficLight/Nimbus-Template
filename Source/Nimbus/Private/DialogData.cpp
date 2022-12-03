#include "DialogData.h"

FDialogData::FDialogData() {
    this->ID = EDialogIDs::None;
    this->Priority = 0;
    this->Type = EDialogType::None;
    this->Result = EDialogResults::None;
}

