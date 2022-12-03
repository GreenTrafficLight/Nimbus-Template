#include "AircraftTypeSaveData.h"

FAircraftTypeSaveData::FAircraftTypeSaveData() {
    this->PlaneID = 0;
    this->PlaneCategory = EPlaneCategory::Fighter;
    this->FlightDistance = 0;
    this->FlightTimeMilli = 0;
    this->SortieCount = 0;
    this->EnemyPlayerDestroyedCount = 0;
    this->AerialEnemyDestroyedCount = 0;
    this->GroundEnemyDestroyedCount = 0;
    this->UAVEnemyDestroyedCount = 0;
    this->NavalEnemyDestroyedCount = 0;
    this->HelicopterEnemyDestroyedCount = 0;
    this->AirObjectDestroyedCount = 0;
}

