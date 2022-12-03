#include "AttachedInstantWeapon.h"



AAttachedInstantWeapon::AAttachedInstantWeapon() {
    this->DamageDistance = 40000.00f;
    this->DamageRadiusCampaign = 0.00f;
    this->DamageRadiusVersus = 0.00f;
    this->DamageStartDelay = 0.00f;
    this->DamageInterval = 0.00f;
    this->WeaponWarmUpTime = 0.00f;
    this->DamageRadiusCampaignCurves = NULL;
    this->DamageRadiusVersusCurves = NULL;
    this->RayDistance = 40000.00f;
    this->RayRadius = 1.00f;
    this->bCloudCheck = true;
    this->CheckLimitCount = 10;
    this->GuaranteedDistance = 72.00f;
    this->PassSoundEventName = TEXT("SPWP_OTH_TLS_PASS");
    this->PassSoundStopEventName = TEXT("SPWP_OTH_TLS_PASS_Stop");
    this->PassSoundActor = NULL;
}

