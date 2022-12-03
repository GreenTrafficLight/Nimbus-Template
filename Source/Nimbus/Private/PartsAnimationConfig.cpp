#include "PartsAnimationConfig.h"

FPartsAnimationConfig::FPartsAnimationConfig() {
    this->OptionsElv = EPartsAnimationConfig_OptionsElv::ANIM_ELV_NONE;
    this->OptionsRud = EPartsAnimationConfig_OptionsRud::ANIM_RUD_NONE;
    this->OptionsAlr = EPartsAnimationConfig_OptionsAlr::ANIM_ALR_NONE;
    this->bOptionsAnimCndAbk = false;
    this->bOptionsAnimControlCnd = false;
    this->bOptionsAnimRudLimit = false;
    this->bOptionsAnimAlrVwg = false;
    this->bOptionsAnimAbkLcover = false;
    this->bOptionsAnimWpCover = false;
    this->bOptionsAnimGearDownFixedVcth = false;
    this->bPartsExistsPartsElvLrExist = false;
    this->bPartsExistsPartsRudLrExist = false;
    this->bPartsExistsPartsCndLrExist = false;
    this->bPartsExistsPartsVctLrExist = false;
    this->bPartsExistsPartsGuncoverExist = false;
    this->bPartsExistsPartsMsslcoverExist = false;
    this->bPartsExistsPartsSpwccoverExist = false;
    this->bPartsExistsPartsSpw1coverExist = false;
    this->bPartsExistsPartsSpw2coverExist = false;
    this->bPartsExistsPartsSpw3coverExist = false;
    this->bPartsExistsPartsCndExist = false;
    this->MoveMin = 0.00f;
    this->MoveMax = 0.00f;
    this->MoveRate = 0.00f;
    this->TefMin = 0.00f;
    this->TefMax = 0.00f;
    this->VctMin = 0.00f;
    this->VctMax = 0.00f;
    this->RmpMin = 0.00f;
    this->RmpMax = 0.00f;
    this->bOptionsAnimRmpAoa = false;
    this->LefMin = 0.00f;
    this->LefMax = 0.00f;
    this->bOptionsAnimLefAoa = false;
    this->VwgMin = 0.00f;
    this->VwgMax = 0.00f;
    this->LipMin = 0.00f;
    this->LipMax = 0.00f;
    this->OptionsLipRot = EPartsAnimationConfig_OptionsLipRot::ANIM_ETC_NONE;
    this->RotSpeed = 0.00f;
    this->bOptionsAnimRotSpd = false;
    this->TimeGearAmount = 0.00f;
}

