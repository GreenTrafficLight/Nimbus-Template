#include "AircraftTreeInfoDataAsset.h"

UAircraftTreeInfoDataAsset::UAircraftTreeInfoDataAsset() {
    this->NodeColor = NULL;
    this->NodeIconColor = NULL;
    this->LineThicknessLock = 0.00f;
    this->LineThicknessUnLock = 0.00f;
    this->FindLRNodeLimitDistance = 0;
    this->FindLRNodeLimitAxisDistance = 0;
    this->FindUDNodeLimitDistance = 0;
    this->FindUDNodeLimitAxisDistance = 0;
    this->AnimHeadMatInstance = NULL;
    this->AnimTimeFirstVisitFocusWait = 0.00f;
    this->AnimTimeMoveFocus = 0.00f;
    this->AnimTimeDrawLine = 0.00f;
    this->AnimTimeDrawBox = 0.00f;
    this->AnimTimeFadeInNode = 0.00f;
    this->AnimTimeWait = 0.00f;
    this->CursorMoveSpeed = 1200.00f;
    this->CursorMoveTimeLimit = 0.80f;
}

