#include "StaffCreditsWidget.h"

UStaffCreditsWidget::UStaffCreditsWidget() {
    this->CampaignModeTime = 60.00f;
    this->CampaignModeFirstTime = 12.00f;
    this->OptionsMenuModeTime = 30.00f;
    this->Size_FirstSpace = 60.00f;
    this->Size_CreditsAce7 = 60.00f;
    this->Size_CreditsTitle = 60.00f;
    this->Size_CreditsJobpart = 60.00f;
    this->Size_CreditsPostandName = 60.00f;
    this->Size_CreditsDescription = 60.00f;
    this->Size_CreditsCompany = 60.00f;
    this->Size_CreditsNameDouble = 60.00f;
    this->Size_CreditsNameQuintuple = 60.00f;
    this->Size_CreditsLicenseL = 60.00f;
    this->Size_CreditsSpace = 60.00f;
    this->PlayFastSpeed = 2.00f;
    this->SkipDisplayDuration = 3.00f;
    this->MovieMaterialPath = TEXT("MaterialInstanceConstant'/Game/Movies/Scene/mv99_VideoMat.mv99_VideoMat'");
    this->ManaTexturePath = TEXT("ManaTexture'/Game/Movies/Scene/mv99.mv99'");
}

