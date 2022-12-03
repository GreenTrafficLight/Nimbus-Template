#include "PartsDataTable.h"

FPartsDataTable::FPartsDataTable() {
    this->PartsID = 0;
    this->bEnabled = false;
    this->PartsGroup = EPartsGroup::PartsGroupNone;
    this->PartsIconCategory = EPartsIconCategory::PIC_None;
    this->PartsSize = EPartsSize::PS_None;
    this->PartsRank = 0.00f;
    this->Category = EPartsCategory::Body;
    this->SlotCost = 0;
    this->PartsEnableGameMode = EPartsEnableGameMode::AllGameModeEnable;
    this->GraphAirToAir = 0;
    this->GraphAirToGround = 0;
    this->GraphSpeed = 0;
    this->GraphMobirity = 0;
    this->GraphStability = 0;
    this->GraphDefense = 0;
    this->GraphAirToAirWeapon = 0;
    this->GraphAirToGroundWeapon = 0;
    this->GraphHoming = 0;
    this->GraphReload = 0;
    this->GraphLongRange = 0;
    this->GraphDamageRange = 0;
    this->HangarSpecOverride = EHangarSpecCategory::Default;
    this->SortNumber = 0;
    this->PartsCost = 0;
}

