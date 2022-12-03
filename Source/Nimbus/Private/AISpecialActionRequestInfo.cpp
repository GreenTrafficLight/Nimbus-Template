#include "AISpecialActionRequestInfo.h"

FAISpecialActionRequestInfo::FAISpecialActionRequestInfo() {
    this->SpecialActionBT = NULL;
    this->Trigger = EAIPlaneSpecialActionTrigger::Always;
    this->SpecifiedObject = NULL;
}

