#include "DamageAreaWeapon.h"

ADamageAreaWeapon::ADamageAreaWeapon() {
    this->DamageAreaDamageStartTime = 0.00f;
    this->DamageAreaRadiusMeters = 350.00f;
    this->FirstImpactDamage = 80.00f;
    this->AreaDamage = 5.00f;
    this->AreaDamageInterval = 0.30f;
    this->DebugExplosionArea = true;
}

