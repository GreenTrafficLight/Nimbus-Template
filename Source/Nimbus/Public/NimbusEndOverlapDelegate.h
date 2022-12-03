#pragma once
#include "CoreMinimal.h"
#include "NimbusEndOverlapDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNimbusEndOverlap, AActor*, OverlappedActor, AActor*, OtherActor);

