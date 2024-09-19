#include "SequencePlayer.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundEffectSource.h"
#include "Sound/SoundEffectPreset.h"
#include "Sound/SoundEffectSubmix.h"
#include "AudioDevice.h"
#include "TextToNumberConverterLib.h"
#include "Sound/SoundSubmix.h"

ASequencePlayer::ASequencePlayer()
{
    PrimaryActorTick.bCanEverTick = true;
    InputString = "Hello, World.";
}

void ASequencePlayer::BeginPlay()
{
    Super::BeginPlay();
}

void ASequencePlayer::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

USoundBase* ASequencePlayer::PlaySoundForCharacter(int32 Character)
{
    USoundBase* soundToPlay = nullptr;

    switch (Character)
    {
        case 10: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/10_Cue.10_Cue")); break;
        case 11: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/11_Cue.11_Cue")); break;
        case 12: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/12_Cue.12_Cue")); break;
        case 13: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/13_Cue.13_Cue")); break;
        case 14: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/14_Cue.14_Cue")); break;
        case 15: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/15_Cue.15_Cue")); break;
        case 16: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/16_Cue.16_Cue")); break;
        case 17: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/17_Cue.17_Cue")); break;
        case 18: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/18_Cue.18_Cue")); break;
        case 19: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/19_Cue.19_Cue")); break;
        case 20: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/20_Cue.20_Cue")); break;
        case 21: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/21_Cue.21_Cue")); break;
        case 22: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/22_Cue.22_Cue")); break;
        case 23: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/23_Cue.23_Cue")); break;
        case 24: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/24_Cue.24_Cue")); break;
        case 25: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/25_Cue.25_Cue")); break;
        case 26: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/26_Cue.26_Cue")); break;
        case 27: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/27_Cue.27_Cue")); break;
        case 28: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/28_Cue.28_Cue")); break;
        case 29: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/29_Cue.29_Cue")); break;
        case 30: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/30_Cue.30_Cue")); break;
        case 31: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/31_Cue.31_Cue")); break;
        case 32: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/32_Cue.32_Cue")); break;
        case 33: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/33_Cue.33_Cue")); break;
        case 34: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/34_Cue.34_Cue")); break;
        case 35: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/35_Cue.35_Cue")); break;
        case 36: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/36_Cue.36_Cue")); break;
        case 37: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/37_Cue.37_Cue")); break;
        case 38: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/38_Cue.38_Cue")); break;
        case 39: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/39_Cue.39_Cue")); break;
        case 40: soundToPlay = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Numbers/40_Cue.40_Cue")); break;
        default: soundToPlay = nullptr; break;
    }

    return soundToPlay;
}

void ASequencePlayer::PlaySequence()
{
    PlaySignOn();

    SequenceArray = UTextToNumberConverterLib::ConvertTextToNumbers(InputString);
    currentIndex = 0;

    USoundBase* CreepyChatter = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Background/creepy_background_chatter_Cue.creepy_background_chatter_Cue"));
    if (CreepyChatter)
    {
        CreepyChatterComponent = UGameplayStatics::SpawnSound2D(this, CreepyChatter, 0.2f);
        ActiveAudioComponents.Add(CreepyChatterComponent);
    }

    USoundBase* FilmStatic = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Background/film_static_endless_high_pitch_high_volume_Cue.film_static_endless_high_pitch_high_volume_Cue"));
    if (FilmStatic)
    {
        FilmStaticComponent = UGameplayStatics::SpawnSound2D(this, FilmStatic, 0.5f);
        ActiveAudioComponents.Add(FilmStaticComponent);
    }

    if (SequenceArray.Num() > 0)
    {
        PlayNextSound();
    }
}


void ASequencePlayer::PlayBackgroundNoise()
{
    TArray<FString> BackgroundSounds = {
        "/Game/NumberStationGenerator/Audio/CUE/Background/static_reverbed_Cue.static_reverbed_Cue",
        "/Game/NumberStationGenerator/Audio/CUE/Background/static_with_fadeout_Cue.static_with_fadeout_Cue",
        "/Game/NumberStationGenerator/Audio/CUE/Background/am_radio_noise_Cue.am_radio_noise_Cue",
        "/Game/NumberStationGenerator/Audio/CUE/Background/creepy_dial_up_static_Cue.creepy_dial_up_static_Cue",
        "/Game/NumberStationGenerator/Audio/CUE/Background/creepy_static_with_fadeout_Cue.creepy_static_with_fadeout_Cue",
        "/Game/NumberStationGenerator/Audio/CUE/Background/film_static_endless_high_pitch_high_volume_Cue.film_static_endless_high_pitch_high_volume_Cue",
        "/Game/NumberStationGenerator/Audio/CUE/Background/radio_music_with_static_Cue.radio_music_with_static_Cue",
        "/Game/NumberStationGenerator/Audio/CUE/Background/radio_noise_Cue.radio_noise_Cue",
        "/Game/NumberStationGenerator/Audio/CUE/Background/radio_opening_with_static_Cue.radio_opening_with_static_Cue"
    };

    FString RandomSoundPath = BackgroundSounds[FMath::RandRange(0, BackgroundSounds.Num() - 1)];
    USoundBase* RandomSound = LoadObject<USoundBase>(nullptr, *RandomSoundPath);

    if (RandomSound)
    {
        float RandomVolume = FMath::RandRange(MinVolume, MaxVolume);
        float RandomPitch = FMath::RandRange(MinPitch, MaxPitch);

        UAudioComponent* BackgroundSoundComponent = UGameplayStatics::SpawnSound2D(this, RandomSound, RandomVolume, RandomPitch);
        if (BackgroundSoundComponent)
        {
            ActiveAudioComponents.Add(BackgroundSoundComponent);
        }
    }
}

void ASequencePlayer::PlaySignOn()
{
    USoundBase* SignOnSound = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Background/signon_Cue.signon_Cue"));
    if (SignOnSound)
    {
        UAudioComponent* SignOnComponent = UGameplayStatics::SpawnSound2D(this, SignOnSound);
        if (SignOnComponent)
        {
            ActiveAudioComponents.Add(SignOnComponent);
        }
    }
}

void ASequencePlayer::PlayNextSound()
{
    if (currentIndex >= SequenceArray.Num())
    {
        PlaySignOff();
        StopSequence();
        return;
    }

    USoundBase* SoundToPlay = PlaySoundForCharacter(SequenceArray[currentIndex]);

    PlayBackgroundNoise();

    if (SoundToPlay)
    {
        float RandomVolume = FMath::RandRange(MinVolume, MaxVolume);
        float RandomPitch = FMath::RandRange(MinPitch, MaxPitch);

        UAudioComponent* SoundComponent = UGameplayStatics::SpawnSound2D(this, SoundToPlay, RandomVolume, RandomPitch);
        if (SoundComponent)
        {
            float RandomDistortion = FMath::RandRange(MinDistortionAmount, MaxDistortionAmount);
            float RandomReverb = FMath::RandRange(MinReverbAmount, MaxReverbAmount);
            float RandomFlanger = FMath::RandRange(MinFlangerAmount, MaxFlangerAmount);

            SoundComponent->SetFloatParameter(FName("DistortionAmount"), RandomDistortion);
            SoundComponent->SetFloatParameter(FName("ReverbAmount"), RandomReverb);
            SoundComponent->SetFloatParameter(FName("FlangerAmount"), RandomFlanger);

            ActiveAudioComponents.Add(SoundComponent)
        }

        float SoundDuration = SoundToPlay->GetDuration() > 0 ? SoundToPlay->GetDuration() : 0.5f;
        float RandomDelay = FMath::RandRange(MinDelay, MaxDelay);
        SoundDuration += RandomDelay;

        GetWorld()->GetTimerManager().SetTimer(SoundTimerHandle, this, &ASequencePlayer::PlayNextSound, SoundDuration, false);

        currentIndex++;
    }
}

void ASequencePlayer::PlaySignOff()
{
    USoundBase* SignOffSound = LoadObject<USoundBase>(nullptr, TEXT("/Game/NumberStationGenerator/Audio/CUE/Background/signoff_Cue.signoff_Cue"));
    if (SignOffSound)
    {
        UAudioComponent* SignOffComponent = UGameplayStatics::SpawnSound2D(this, SignOffSound);
        if (SignOffComponent)
        {
            ActiveAudioComponents.Add(SignOffComponent);
        }
    }
}

void ASequencePlayer::StopSequence()
{
    for (UAudioComponent* AudioComp : ActiveAudioComponents)
    {
        if (AudioComp)
        {
            AudioComp->Stop();
        }
    }

    ActiveAudioComponents.Empty();

    GetWorld()->GetTimerManager().ClearTimer(SoundTimerHandle);

    UE_LOG(LogTemp, Warning, TEXT("Sequence stopped."));
}