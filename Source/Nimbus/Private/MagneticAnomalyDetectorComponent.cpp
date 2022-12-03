#include "MagneticAnomalyDetectorComponent.h"

void UMagneticAnomalyDetectorComponent::StopJammingMode() {
}

void UMagneticAnomalyDetectorComponent::SetJammingMode(bool bActive) {
}

FSearchResultDeta UMagneticAnomalyDetectorComponent::GetSearchResult() {
    return FSearchResultDeta{};
}

UMagneticAnomalyDetectorComponent::UMagneticAnomalyDetectorComponent() {
    this->bDebugDisplay = false;
    this->SearchDistance = 3000.00f;
    this->SearchDownwardAngle = 10.00f;
    this->MaxSearchRadius = 1000.00f;
    this->SearchDistanceRange = NULL;
    this->ObservationRange = NULL;
    this->ObservationOption = EMADObservationOption::CursorLocation;
    this->ObservationWaveDirectionOption = EMADObservationWaveDirectionOption::Angle90;
    this->MaxVibrationScale = 1.00f;
    this->WaveNumRange = NULL;
    this->WaveOffsetRange = NULL;
    this->WaveMinRatioRange = NULL;
    this->WaveMaxRatioRange = NULL;
    this->WaveMaxIntervalRange = NULL;
    this->WaveMaxTimeRange = NULL;
    this->WaveSharpnessRange = NULL;
    this->WaveScaleReference = EMADObservationWaveReferenceOption::ObservatRate;
    this->WaveNumReference = EMADObservationWaveReferenceOption::ObservatRate;
    this->WaveOffsetReference = EMADObservationWaveReferenceOption::ObservatRate;
    this->WaveMinReference = EMADObservationWaveReferenceOption::ObservatRate;
    this->WaveMaxReference = EMADObservationWaveReferenceOption::ObservatRate;
    this->bSearchUnderMode = true;
    this->JammingWavePeakMin = 0.00f;
    this->JammingWavePeakMax = 1.00f;
    this->JammingWaveScaleMin = 2.00f;
    this->JammingWaveScaleMax = 3.00f;
    this->JammingWaveNumMin = 4.00f;
    this->JammingWaveNumMax = 6.00f;
    this->JammingWaveOffsetMin = 2.00f;
    this->JammingWaveOffsetMax = 4.00f;
    this->JammingWaveMinRatioMin = 100.00f;
    this->JammingWaveMinRatioMax = 5000.00f;
    this->JammingWaveMaxRatioMin = 0.10f;
    this->JammingWaveMaxRatioMin2 = 0.80f;
    this->JammingWaveMaxRatioMin3 = 0.50f;
    this->JammingWaveMaxRatioMax = 1.00f;
    this->JammingSwitchingCycleTimeMin = 0.50f;
    this->JammingSwitchingCycleTimeMax = 3.00f;
    this->JammingWaveSharpMin = 4.00f;
    this->JammingWaveSharpMax = 8.00f;
    this->DecaySpeedLimitKmphMin = 800.00f;
    this->DecaySpeedLimitKmphMax = 825.00f;
    this->DecayAltLimitMeterMin = 1500.00f;
    this->DecayAltLimitMeterMax = 1600.00f;
    this->ObservatRateOffset = 0.10f;
    this->ReactivationTimeAfterDetectedSubmarineEvent = 1000.00f;
    this->ReactivationTimeAfterJamming = 2.00f;
}

