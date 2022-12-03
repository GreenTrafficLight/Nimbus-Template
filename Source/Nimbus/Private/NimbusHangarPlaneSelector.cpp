#include "NimbusHangarPlaneSelector.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/WidgetComponent.h"

ANimbusHangarPlaneSelector::ANimbusHangarPlaneSelector() {
    this->InfoWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Info"));
    this->PlaneMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PlaneMesh"));
}

