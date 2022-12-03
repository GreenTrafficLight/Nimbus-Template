#pragma once
#include "CoreMinimal.h"
#include "NimbusBeginOverlapDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNimbusBeginOverlap, AActor*, OverlappedActor, AActor*, OtherActor);

