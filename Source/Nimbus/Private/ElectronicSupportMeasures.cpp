#include "ElectronicSupportMeasures.h"
#include "Components/PostProcessComponent.h"

AElectronicSupportMeasures::AElectronicSupportMeasures() {
    this->bOverlapEquilibrium = false;
    this->EffectPriority = 0;
    this->EffectRangeMeter = 4000.00f;
    this->EffectHitCylinder = false;
    this->IconScaleInTime = 1.00f;
    this->MyJammingSupportFade = 0.50f;
    this->IconAlphaCurveCampaign = NULL;
    this->IconAlphaCurveMulti = NULL;
    this->IconEndFadeTime = 1.00f;
    this->bSupportEnable = true;
    this->SupportTimeCampaign = 20.00f;
    this->SupportTimeMulti = 10.00f;
    this->bJammingEnable = true;
    this->JammingTimeCampaign = 15.00f;
    this->JammingTimeMulti = 3.00f;
    this->JammingHomingAngle = 30.00f;
    this->JammingRotationAngle = 20.00f;
    this->JammingLockonAngle = 20.00f;
    this->JammingLockonInitialSpeed = 7.00f;
    this->JammingLockonMaximumSpeed = 7.00f;
    this->JammingFCSActiveTime = 0.00f;
    this->JammingFCSActiveDistance = 0.00f;
    this->bLockonSeekerJamming = true;
    this->ElectronicFlareTarget = EElectronicFlareTarget::Myself;
    this->PostProcessTime = 3.00f;
    this->PostProcessRadiusCurve = NULL;
    this->BlurAmountCurve = NULL;
    this->PostProcessMaterial = NULL;
    this->PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComponent"));
    this->PostProcessMID = NULL;
}

