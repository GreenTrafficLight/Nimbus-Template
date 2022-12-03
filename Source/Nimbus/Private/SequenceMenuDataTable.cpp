#include "SequenceMenuDataTable.h"

FSequenceMenuDataTable::FSequenceMenuDataTable() {
    this->MenuSpaceType = EMenuSpaceType::MenuSpaceNone;
    this->SequenceGroup = ESequenceGroup::Boot;
    this->WidgetMenuID = EMenuIDs::None;
    this->LayerIndex = 0;
}

