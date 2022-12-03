#include "LayerMenuLineInfo.h"

FLayerMenuLineInfo::FLayerMenuLineInfo() {
    this->ID = 0;
    this->Width = 0.00f;
    this->CurrentRate = 0.00f;
    this->Material = NULL;
    this->SectionIdx = 0;
    this->IsDirty = false;
    this->IsVisible = false;
}

