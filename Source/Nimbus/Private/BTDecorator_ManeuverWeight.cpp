#include "BTDecorator_ManeuverWeight.h"

UBTDecorator_ManeuverWeight::UBTDecorator_ManeuverWeight() {
    this->RookieWeight = 10.00f;
    this->NormalWeight = 10.00f;
    this->VeteranWeight = 10.00f;
    this->AceWeight = 10.00f;
    this->RivalWeight = 10.00f;
    this->AdditionalDyingWeight = 0.00f;
    this->AdditionalHighAltitudeWeight = 0.00f;
    this->AdditionalLowAltitudeWeight = 0.00f;
    this->AdditionalInCloudsWeight = 0.00f;
    this->AdditionalInCloudsDyingWeight = 0.00f;
    this->AdditionalNearCloudsWeight = 0.00f;
    this->AdditionalNearCloudsDyingWeight = 0.00f;
}

