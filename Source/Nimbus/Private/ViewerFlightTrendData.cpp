#include "ViewerFlightTrendData.h"

FViewerFlightTrendData::FViewerFlightTrendData() {
    this->Type = EViewerFlightTrendType::FIGHTER;
    this->Sortie = 0;
    this->TargetsDestroyed = 0;
    this->Usage = 0.00f;
    this->FlightTime = 0;
    this->FlightDistance = 0;
}

