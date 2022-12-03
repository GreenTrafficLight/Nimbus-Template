#include "NimbusRibbonCollectionActor.h"
#include "Particles/ParticleSystemComponent.h"

void ANimbusRibbonCollectionActor::OnPreRestartPhaseEvent() {
}

void ANimbusRibbonCollectionActor::OnIGCEnableEvent(bool bEnabled) {
}

ANimbusRibbonCollectionActor::ANimbusRibbonCollectionActor() {
    this->RibbonType = ERibbonCollectionType::ERC_AI_WING_TIP;
    this->PSComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RibbonVFX"));
    this->MaxActiveSources = 0;
}

