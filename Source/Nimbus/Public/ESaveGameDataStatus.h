#pragma once
#include "CoreMinimal.h"
#include "ESaveGameDataStatus.generated.h"

UENUM(BlueprintType)
enum class ESaveGameDataStatus : uint8 {
    Unknown,
    Exist,
    NotExist,
    InProcess,
    InsufficientDiskSpace,
    ConcurrentSaveLoad,
    InvalidSaveGameInstance,
    MismatchChecksum,
    InvalidOnlineService,
    FailedOnlineServiceRequest,
    FailedDeletion,
    FailedFileBufferCopy,
    InvalidUser,
    RequestTimeout,
    VersionError,
    CorruptedSaveData,
    Num,
};

