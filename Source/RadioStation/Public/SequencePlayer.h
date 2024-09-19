#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SequencePlayer.generated.h"

UCLASS()
class RADIOSTATION_API ASequencePlayer : public AActor
{
    GENERATED_BODY()

public:
    ASequencePlayer();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sequence Player")
    FString InputString;

    UFUNCTION(BlueprintCallable, CallInEditor, Category = "Sequence Player")
    void PlaySequence();

    UFUNCTION(BlueprintCallable, CallInEditor, Category = "Sequence Player")
    void StopSequence();

    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio Effects|Distortion")
    float MinDistortionAmount = 0.2f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio Effects|Distortion")
    float MaxDistortionAmount = 0.7f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio Effects|Reverb")
    float MinReverbAmount = 0.2f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio Effects|Reverb")
    float MaxReverbAmount = 0.8f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio Effects|Flanger")
    float MinFlangerAmount = 0.25f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio Effects|Flanger")
    float MaxFlangerAmount = 0.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Randomization|Volume")
    float MinVolume = 0.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Randomization|Volume")
    float MaxVolume = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Randomization|Pitch")
    float MinPitch = 0.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Randomization|Pitch")
    float MaxPitch = 1.9f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Randomization|Delay")
    float MinDelay = 0.6f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Randomization|Delay")
    float MaxDelay = 1.5f;

private:
    USoundBase* PlaySoundForCharacter(int32 Character);
    FTimerHandle SoundTimerHandle;
    int32 currentIndex;
    TArray<int32> SequenceArray;

    UPROPERTY()
    UAudioComponent* CreepyChatterComponent;
    UPROPERTY()
    TArray<UAudioComponent*> ActiveAudioComponents;

    UPROPERTY()
    UAudioComponent* FilmStaticComponent;

    void PlayBackgroundNoise();
    void PlaySignOn();
    void PlaySignOff();
    void PlayNextSound();

};
