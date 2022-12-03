#include "SearchResultDeta.h"

FSearchResultDeta::FSearchResultDeta() {
    this->bSeaHit = false;
    this->SeaHitLength = 0.00f;
    this->bTargetHit = false;
    this->SearchRate = 0.00f;
    this->SearchRadiusUU = 0.00f;
    this->ObservatRate = 0.00f;
    this->ObservationLeftRightRate = 0.00f;
    this->TargetDistanceMeter = 0.00f;
    this->ObservationOption = EMADObservationOption::CursorLocation;
    this->ObservationWaveDirectionOption = EMADObservationWaveDirectionOption::Angle90;
}

