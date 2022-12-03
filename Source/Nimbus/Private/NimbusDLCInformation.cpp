#include "NimbusDLCInformation.h"

bool UNimbusDLCInformation::IsDLCOwned(const FString& DLCID) const {
    return false;
}

UNimbusDLCInformation::UNimbusDLCInformation() {
    this->DLCDataTable = NULL;
    this->DLCBaseStringID = TEXT("Base");
}

