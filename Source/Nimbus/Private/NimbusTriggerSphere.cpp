#include "NimbusTriggerSphere.h"
#include "Components/SphereComponent.h"

ANimbusTriggerSphere::ANimbusTriggerSphere(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USphereComponent>(TEXT("CollisionComp")))
{

}

