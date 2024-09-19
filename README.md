# Number Station Generator for Unreal Engine

This project includes a number-station generator made with/for Unreal Engine, allowing you to translate text into a creepy number-station broadcast with customizable audio effects.

## How to Use

### 1. Clone or Download the Repository
- You can clone this repository using Git or download it as a ZIP file and extract it into your desired location.

### 2. Open the Project
- Locate the `.uproject` file in the root folder (e.g., `NumberStationGenerator.uproject`).

### 3. Generate Visual Studio Project Files (C++ Projects Only)
1. **Right-click** on the `.uproject` file.
2. Select **Generate Visual Studio project files**.
3. Open the generated `.sln` file in Visual Studio.

### 4. Build and Compile
- In Visual Studio, build and compile the project to ensure everything is ready to use.

### 5. Open in Unreal Engine
- After generating the project files (and compiling, if needed), double-click the `.uproject` file to open the project in Unreal Engine.

### 6. Use the Asset Pack
- Once in Unreal Engine, the blueprint (BP_SequencePlayer) will be available in the **Content** folder under `NumberStationGenerator/`.

---

## **BP_SequencePlayer Blueprint Variables**

These are the exposed variables within the `BP_SequencePlayer` blueprint, which allow you to adjust various audio settings and randomization behaviors. Below is an explanation of each variable.

---

### **Audio Effects**
These settings modify how sound effects are processed during playback.

#### Distortion
- **Min Distortion Amount**: Controls the minimum distortion applied to the audio, making it sound slightly garbled and damaged, as if played on malfunctioning equipment.
  
  ![MinDistortionAmount](placeholder_image_path)

- **Max Distortion Amount**: Controls the maximum distortion level, which can range from subtle to harsh noise depending on your setting.
  
  ![MaxDistortionAmount](placeholder_image_path)

#### Reverb
- **Min Reverb Amount**: Adds a minimum amount of reverb, simulating sound in a large, empty room or broadcast hall.
  
  ![MinReverbAmount](placeholder_image_path)

- **Max Reverb Amount**: Sets the maximum reverb effect, allowing the sound to echo more intensely in a larger simulated space.
  
  ![MaxReverbAmount](placeholder_image_path)

#### Flanger
- **Min Flanger Amount**: Controls the minimum level of the flanger effect, giving a subtle warping effect to the audio.
  
  ![MinFlangerAmount](placeholder_image_path)

- **Max Flanger Amount**: Adjusts the maximum flanger, increasing the warping or sweeping effect for a more noticeable alteration in sound.
  
  ![MaxFlangerAmount](placeholder_image_path)

---

### **Sequence Player Controls**
These controls allow you to input the text to be broadcasted and play/stop the sequence.

- **Input String**: The text you want to be converted into a number-station broadcast. The generator will translate the text and play it through the sequence.
  
  ![InputString](placeholder_image_path)

---

### **Randomization**
These settings control the randomization behavior of audio volume, pitch, and delays between sounds, adding variability to the broadcast.

#### Volume
- **Min Volume**: Sets the minimum volume level for each sound.
  
  ![MinVolume](placeholder_image_path)

- **Max Volume**: Sets the maximum volume level, ensuring the sound does not exceed a certain loudness.
  
  ![MaxVolume](placeholder_image_path)

#### Pitch
- **Min Pitch**: Adjusts the lowest pitch variation for the sound.
  
  ![MinPitch](placeholder_image_path)

- **Max Pitch**: Controls the highest pitch variation, allowing sounds to become slightly higher or deeper in tone.
  
  ![MaxPitch](placeholder_image_path)

#### Delay
- **Min Delay**: Sets the minimum delay between the playback of each sound in the sequence.
  
  ![MinDelay](placeholder_image_path)

- **Max Delay**: Adjusts the maximum possible delay between each sound to increase randomness.
  
  ![MaxDelay](placeholder_image_path)

---

## Attribution
- For attribution, see the level named **Attribution**.

## Customization
- You can tweak these parameters directly in the Unreal Engine Editor under the `BP_SequencePlayer` blueprint to customize your number-station generator.
- Feel free to modify the C++ code located in the `Source/` folder to extend or customize functionality further.

## Support
If you run into any issues or have questions, feel free to open an issue.