#include "AIFireControlSystem.h"

void UAIFireControlSystem::SetInitialPose(const FVector& Location) {
}

bool UAIFireControlSystem::CanActivateFlares() const {
    return false;
}

UAIFireControlSystem::UAIFireControlSystem() {
    this->EnemySearchLockRadius = 60000.00f;
    this->EnemySearchLockRadiusSquared = 3600000000.00f;
    this->EnemySearchLossRadius = 65000.00f;
    this->EnemySearchLossRadiusSquared = 4224999936.00f;
    this->bRegulateTick = true;
    this->bIsHighPriority = false;
    this->MinRegulateTickDistanceUU = 40000.00f;
    this->MaxRegulateTickDistanceUU = 80000.00f;
    this->HighPriorityMinTickInterval = 0.00f;
    this->HighPriorityMaxTickInterval = 2.00f;
    this->LowPriorityMinTickInterval = 2.00f;
    this->LowPriorityMaxTickInterval = 8.00f;
    this->EnemySearchType = ETargetType::AIR_AND_GROUND;
    this->EnemySearchRefreshRateMin = 0.40f;
    this->EnemySearchRefreshRateMax = 0.60f;
    this->EnemyTargetUpdateRate = 5.00f;
    this->LostTargetInCloudTime = 0.00f;
    this->LostTargetInCloudRecoveryTime = 0.00f;
    this->Weapon1 = NULL;
    this->Weapon2 = NULL;
    this->Weapon3 = NULL;
    this->FlareClass = NULL;
    this->FlareParticlePerActivation = 0;
    this->FlareParticlePeriod = 0.00f;
    this->FlareParticleMaxSpawnAngle = 10.00f;
    this->EnemySearchAngleLimit = 0.00f;
    this->EnemySearchFilter = NULL;
    this->ExceptionTarget = NULL;
    this->TrackingTarget = NULL;
    this->FCSLockedTarget = NULL;
}

