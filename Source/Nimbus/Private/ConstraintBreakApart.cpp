#include "ConstraintBreakApart.h"

UConstraintBreakApart::UConstraintBreakApart() {
    this->ParentConstraint = NULL;
    this->bUseRandomBreak = true;
    this->bSpawnTrailVfx = false;
    this->bSpawnDestroyedVfx = false;
    this->bHideOnDestroy = true;
    this->TimeToLive = -1.00f;
    this->DecayTimeMin = 0.10f;
    this->DecayTimeMax = 0.50f;
    this->BreakProbability = 1.00f;
    this->Gravity = 98.00f;
    this->AngularVelocityMinMultiplier = 0.90f;
    this->AngularVelocityMaxMultiplier = 1.10f;
    this->OwnerMeshComponent = NULL;
}

