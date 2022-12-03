#include "VFXSocketDataTable.h"

FVFXSocketDataTable::FVFXSocketDataTable() {
    this->UseForNoneVR = false;
    this->UseForVR = false;
    this->Reference = NULL;
    this->IsShadowPass = false;
    this->bApplyScaling = false;
    this->bShowInCockpit = false;
    this->bAdditionalVFXForAI = false;
}

