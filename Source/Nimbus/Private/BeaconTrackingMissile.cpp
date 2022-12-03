#include "BeaconTrackingMissile.h"

ABeaconTrackingMissile::ABeaconTrackingMissile() {
    this->SpawnWeaponClass = NULL;
    this->HitRange = 100.00f;
    this->NoLockExplosionTime = 0.00f;
    this->bIsBeaconSetting = false;
    this->FallDelaySeconds = 0.00f;
    this->HeliosRadioForeWarnTime = 0.00f;
    this->HeliosRadioFadeTime = 1.00f;
    this->HeliosRadioMaxWaitTime = 1.00f;
}

