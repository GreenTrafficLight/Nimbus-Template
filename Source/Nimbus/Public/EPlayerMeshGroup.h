#pragma once
#include "CoreMinimal.h"
#include "EPlayerMeshGroup.generated.h"

UENUM(BlueprintType)
enum class EPlayerMeshGroup : uint8 {
    MeshGroup_ThirdPerson,
    MeshGroup_Cockpit,
    MeshGroup_HUD,
    MeshGroup_MAX UMETA(Hidden),
};

