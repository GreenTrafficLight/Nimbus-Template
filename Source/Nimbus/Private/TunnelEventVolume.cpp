#include "TunnelEventVolume.h"

ATunnelEventVolume::ATunnelEventVolume() {
    this->TunnelEventType = ETunnelEventType::Tunnel;
    this->ElevatorRadius = 0.00f;
    this->GravityRotateRete = 1.00f;
    this->ElevatorHeight = 0.00f;
    this->CollisionReductionRate = 1.00f;
    this->ForcedConditions = ETunnelForcedConditions::Overlap;
    this->ForcedAngle = 90.00f;
    this->ForcedCompensation = 1.00f;
    this->ForcedCompensationAngle = 1.00f;
    this->ForcedPassLine = 100.00f;
    this->bOffForcedSideways = false;
    this->bOffForcedVertical = false;
    this->bOffForcedRoll = false;
    this->ForcedType = ETunnelForcedType::Normal;
    this->ForcedLength = 1000.00f;
}

