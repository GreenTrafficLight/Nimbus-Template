#include "AirCurrentVolume.h"
#include "Components/ArrowComponent.h"

void AAirCurrentVolume::OnPreRestartPhaseEvent() {
}

AAirCurrentVolume::AAirCurrentVolume() {
    this->DirectionComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("DirectionComponent"));
    this->Strength = 100.00f;
    this->TurbulenceRange = 30.00f;
    this->bAllowTurbulenceInOppDir = true;
    this->OppDirProbability = 50.00f;
    this->TurbulenceStableDurationMin = 0.10f;
    this->TurbulenceStableDurationMax = 0.15f;
    this->TurbulenceMaxEffectDelay = 10.00f;
    this->TurbulenceFadeDelay = 10.00f;
    this->TurbulenceRotationRate = 5.00f;
    this->TurbulenceMaxRotationAngle = 45.00f;
    this->TurbulenceRotationDelay = 5.00f;
}

