#include "RailgunControliComponent.h"

void URailgunControliComponent::PlayChargeSound() {
}

ERailgunControliResult URailgunControliComponent::GetHitResult_AndReset() {
    return ERailgunControliResult::Hit;
}

void URailgunControliComponent::EndChargeSound() {
}

URailgunControliComponent::URailgunControliComponent() {
    this->Aim_RangeDistanceMeter = 100000.00f;
    this->Aim_Angle = 10.00f;
    this->DummyTargetDistanceToTit = 50.00f;
    this->Aim_HeadOnAngle = 0.00f;
    this->Aim_OutRangeAngle = 30.00f;
    this->Draw_Angle = 360.00f;
    this->Draw_FadeTime = 0.50f;
    this->Aim_Time = 10.00f;
    this->Aim_BlendRateCurves = NULL;
    this->Aim_AlphaCurves = NULL;
    this->RailgunChargeRTPCName = TEXT("EX03_RAILGUN_CHARGE");
    this->RailgunChargeStartEventName = TEXT("DLC_OBJ_EX03_CHARGE");
    this->RailgunChargeStopEventName = TEXT("DLC_OBJ_EX03_CHARGE_Stop");
    this->RailgunChargeEndEventName = TEXT("DLC_OBJ_EX03_CHARGE_END");
    this->RTPCResetEventName = TEXT("DLC_OBJ_EX03_RTPC_Reset");
    this->Target = NULL;
    this->DummyTarget = NULL;
}

