#include "PostSpawnWeaponProjectileParam.h"

FPostSpawnWeaponProjectileParam::FPostSpawnWeaponProjectileParam() {
    this->bEnable = false;
    this->LoadedSlotIndex = 0;
    this->UsedWeaponSlot = 0;
    this->WeaponNumber = EWeaponNumber::WN_WEAPON_1;
    this->WeaponLevel = 0;
    this->HomeTarget = NULL;
    this->bIsFirstShot = false;
    this->BehaviorType = EWeaponSpecialBehaviorType::None;
    this->ExtraAttribute = 0;
    this->bRelative = false;
}

