#include "CampaignDebriefingKillMark.h"

UCampaignDebriefingKillMark::UCampaignDebriefingKillMark() {
    this->IsFreeFlag = false;
    this->MarkSize = 8.00f;
    this->LineWidth = 2.00f;
    this->Alpha = 1.00f;
    this->ForceAlpha = -1.00f;
    this->Material = NULL;
    this->SectionIdx = -1;
    this->IsDirty = false;
}

