#include "PlayerWeaponDataTable.h"

FPlayerWeaponDataTable::FPlayerWeaponDataTable() {
    this->WeaponID = 0;
    this->Category = EWeaponCategory::Air;
    this->WeaponDurabilityCategory = EWeaponDurabilityCategory::Category00;
    this->WeaponCost = 0;
    this->GraphAirToAir = 0;
    this->GraphAirToGround = 0;
    this->GraphHoming = 0;
    this->GraphReload = 0;
    this->GraphLongRange = 0;
    this->GraphDamageRange = 0;
    this->HomingDelay_MP = 0.00f;
    this->HomingForesightAmount_MP = 0.00f;
    this->MaxHomingAngle_MP = 0.00f;
    this->MaxRotationAngle_MP = 0.00f;
    this->MaxHomingAngleNotCaptured_MP = 0.00f;
    this->MaxRotationAngleNotCaptured_MP = 0.00f;
    this->ReducedHomingDuration_MP = 0.00f;
    this->ReducedHomingRotationAngle_MP = 0.00f;
    this->HomingReductionInCloud_MP = 0.00f;
    this->HomingCloudThreshold_MP = 0.00f;
    this->SpeedMaxKmph_MP = 0.00f;
    this->AccelerationKmph_MP = 0.00f;
    this->SpeedInitKmph_MP = 0.00f;
    this->IgnitionInitialSpeedKmph_MP = 0.00f;
    this->Damage_MP = 0.00f;
    this->AreaOfEffectDamage_MP = 0.00f;
    this->ImpactRadiusMeters_MP = 0.00f;
    this->ExplosionRadiusMeters_MP = 0.00f;
    this->LifeTime_MP = 0.00f;
    this->LoadTime_MP = 0.00f;
    this->LockonReductionInCloud_MP = 0.00f;
    this->LockonRangeReductionInCloud_MP = 0.00f;
    this->LockonAngle_MP = 0.00f;
    this->LockonRangeInMeters_MP = 0.00f;
    this->LockonInitialSpeed_MP = 0.00f;
    this->LockonMaximumSpeed_MP = 0.00f;
    this->LockonAccelerationTime_MP = 0.00f;
    this->DummyNumber_MP = 0;
    this->MinTargetSwitchTime_MP = 0.00f;
    this->MaxTargetSwitchTime_MP = 0.00f;
    this->DistanceFromBodyMeters_MP = 0.00f;
    this->MinDistanceToFollowMainMeters_MP = 0.00f;
}

