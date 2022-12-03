#include "SeekerJammingParameters.h"

FSeekerJammingParameters::FSeekerJammingParameters() {
    this->SeekerReturnToCenterTimeJammed = 0.00f;
    this->JammedMinWaverFactor = 0.00f;
    this->JammedMaxWaverFactor = 0.00f;
    this->JammedWaverFactorMultiplyForTimeCurve = NULL;
    this->LockingMinJammingTime = 0.00f;
    this->LockingMaxJammingTime = 0.00f;
    this->LockingTimeMultiplyForDistanceCurve = NULL;
    this->LockedMinJammingTime = 0.00f;
    this->LockedMaxJammingTime = 0.00f;
    this->LockedTimeMultiplyForDistanceCurve = NULL;
    this->LockingInJammingChangeDirectionMinTime = 0.00f;
    this->LockingInJammingChangeDirectionMaxTime = 0.00f;
    this->MaxWaverDistanceMeters = 0.00f;
}

