#pragma once
#include "CoreMinimal.h"
#include "ELocalPlayerQuitSessionReason.generated.h"

UENUM(BlueprintType)
enum class ELocalPlayerQuitSessionReason : uint8 {
    None,
    Manual,
    Kick,
    AutoKick,
    RetrySave,
    HostMigrationFailure,
    OnlineRestriction,
    NetworkError,
    NotConnectedToOnlineService,
    NotSignedIn,
    NotConnectedToInternet,
    InvalidMembershipSubscription,
    ROMMismatch,
    MapLoadFailure,
    Cheating,
};

