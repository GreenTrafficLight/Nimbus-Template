#include "CampaignDebriefingRibbon.h"

UCampaignDebriefingRibbon::UCampaignDebriefingRibbon() {
    this->IsFreeFlag = false;
    this->MaxLength = 0;
    this->RibbonWidth = 2.00f;
    this->HeadWidth = 4.00f;
    this->HeadLength = 4.00f;
    this->NotchLength = 2.00f;
    this->Alpha = 1.00f;
    this->ForceAlpha = -1.00f;
    this->IsBigRibbon = false;
    this->Material = NULL;
    this->SectionIdx = -1;
    this->IsDirty = false;
    this->CurrLength = 0;
}

