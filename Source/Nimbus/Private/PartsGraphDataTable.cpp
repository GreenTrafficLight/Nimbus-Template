#include "PartsGraphDataTable.h"

FPartsGraphDataTable::FPartsGraphDataTable() {
    this->ParameterLabel = EPartsParameterList::None;
    this->bGraphAirToAir = false;
    this->bGraphAirToGround = false;
    this->bGraphSpeed = false;
    this->bGraphMobirity = false;
    this->bGraphStability = false;
    this->bGraphDefense = false;
    this->bGraphAirToAirWeapon = false;
    this->bGraphAirToGroundWeapon = false;
    this->bGraphHoming = false;
    this->bGraphReload = false;
    this->bGraphLongRange = false;
    this->bGraphDamageRange = false;
}

