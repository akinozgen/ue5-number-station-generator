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

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio Effects|Distortion", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
    float MinDistortionAmount = 0.1f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio Effects|Distortion", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
    float MaxDistortionAmount = 0.4f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio Effects|Reverb", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
    float MinReverbAmount = 0.1f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio Effects|Reverb", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
    float MaxReverbAmount = 0.6f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio Effects|Flanger", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
    float MinFlangerAmount = 0.15f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio Effects|Flanger", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
    float MaxFlangerAmount = 0.4f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Randomization|Volume", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
    float MinVolume = 0.8f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Randomization|Volume", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
    float MaxVolume = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Randomization|Pitch", meta = (ClampMin = "0.5", ClampMax = "2.0", UIMin = "0.5", UIMax = "2.0"))
    float MinPitch = 0.8f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Randomization|Pitch", meta = (ClampMin = "0.5", ClampMax = "2.0", UIMin = "0.5", UIMax = "2.0"))
    float MaxPitch = 1.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Randomization|Delay", meta = (ClampMin = "0.0", ClampMax = "5.0", UIMin = "0.0", UIMax = "5.0"))
    float MinDelay = 0.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Randomization|Delay", meta = (ClampMin = "0.0", ClampMax = "5.0", UIMin = "0.0", UIMax = "5.0"))
    float MaxDelay = 1.2f;

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
