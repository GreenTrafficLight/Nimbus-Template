#include "OutOfRangeDesc.h"

FOutOfRangeDesc::FOutOfRangeDesc() {
    this->DistSqToPlayer = 0.00f;
    this->Type = EOutOfRangeLocatorType::Enemy;
    this->StealthOpacityMultiplier = 0.00f;
}

