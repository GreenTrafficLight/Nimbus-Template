#include "CriWarePluginSettings.h"

UCriWarePluginSettings::UCriWarePluginSettings() {
    this->bNoExistCriWareIni = false;
    this->ContentDir = TEXT("CriWare");
    this->NumBinders = 8;
    this->MaxBinds = 8;
    this->NumLoaders = 32;
    this->MaxFiles = 32;
    this->OutputsLogFileSystem = false;
    this->PS4_FileAccessThreadAffinityMask = 63;
    this->PS4_DataDecompressionThreadAffinityMask = 63;
    this->PS4_MemoryFileSystemThreadAffinityMask = 63;
    this->PS4_FileAccessThreadPriority = 500;
    this->PS4_DataDecompressionThreadPriority = 730;
    this->PS4_MemoryFileSystemThreadPriority = 720;
    this->MaxVirtualVoices = 64;
    this->UsesInGamePreview = true;
    this->OutputsLogAtom = false;
    this->NumStandardMemoryVoices = 32;
    this->StandardMemoryVoiceNumChannels = 2;
    this->StandardMemoryVoiceSamplingRate = 96000;
    this->NumStandardStreamingVoices = 4;
    this->StandardStreamingVoiceNumChannels = 6;
    this->StandardStreamingVoiceSamplingRate = 48000;
    this->DistanceFactor = 1.00f;
    this->SoundRendererTypeUI = EAtomSoundRendererType::Native;
    this->SoundRendererType = 1;
    this->HcaMxVoiceSamplingRate = 48000;
    this->NumHcaMxMemoryVoices = 0;
    this->HcaMxMemoryVoiceNumChannels = 2;
    this->NumHcaMxStreamingVoices = 0;
    this->HcaMxStreamingVoiceNumChannels = 2;
    this->WASAPI_IsExclusive = false;
    this->WASAPI_BitsPerSample = 0;
    this->WASAPI_SamplingRate = 0;
    this->WASAPI_NumChannels = 0;
    this->PS4_ServerThreadAffinityMask = 63;
    this->PS4_OutputThreadAffinityMask = 63;
    this->PS4_ServerThreadPriority = 400;
    this->PS4_OutputThreadPriority = 300;
    this->PS4_UseAudio3d = false;
    this->PS4_NumberOfAudio3dMemoryVoices = 0;
    this->PS4_SamplingRateOfAudio3dMemoryVoices = 0;
    this->PS4_NumberOfAudio3dStreamingVoices = 0;
    this->PS4_SamplingRateOfAudio3dStreamingVoices = 0;
    this->InitializeMana = true;
    this->EnableDecodeSkip = true;
    this->MaxDecoderHandles = 4;
    this->MaxManaBPS = 0;
    this->UseH264Decoder = false;
    this->bUseManaStartupMovies = false;
    this->bWaitForMoviesToComplete = false;
    this->bMoviesAreSkippable = false;
}

