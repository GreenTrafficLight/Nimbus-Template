#include "Bomb.h"

ABomb::ABomb() {
    this->HomingDelayFromStart = 0.00f;
    this->MaxHomingAngle = 0.00f;
    this->MaxRotationAngle = 0.00f;
    this->GlideLiftPercentage = 95.00f;
    this->bHasRollAnimation = false;
    this->RollAnimationTargetRoll = 180.00f;
    this->RollAnimationDelay = 0.00f;
    this->RollAnimationRate = 0.00f;
    this->HeightToExplodeMeter = 0.00f;
}

