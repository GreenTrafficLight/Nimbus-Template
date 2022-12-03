#include "VRAircraftViewerTableRow.h"

FVRAircraftViewerTableRow::FVRAircraftViewerTableRow() {
    this->ViewID = 0;
    this->LeftLinkViewID = 0;
    this->RightLinkViewID = 0;
    this->UpLinkViewID = 0;
    this->DownLinkViewID = 0;
    this->bShouldPlaceLadder = false;
    this->IndicatorHeight = 0.00f;
}

