#include "AkAcousticPortal.h"

void AAkAcousticPortal::OpenPortal() {
}

AkAcousticPortalState AAkAcousticPortal::GetCurrentState() const {
    return AkAcousticPortalState::Closed;
}

void AAkAcousticPortal::ClosePortal() {
}

AAkAcousticPortal::AAkAcousticPortal() {
    this->Gain = 1.00f;
    this->InitialState = AkAcousticPortalState::Open;
}

