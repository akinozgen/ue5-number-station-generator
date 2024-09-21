# Number Station Generator for Unreal Engine

This project includes a number-station generator made with/for Unreal Engine, allowing you to translate text into a creepy number-station broadcast with customizable audio effects.

[Check playable demo](https://github.com/akinozgen/ue5-number-station-generator/releases)

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
![image](https://github.com/user-attachments/assets/44697118-92f9-4602-b030-022bef757fad)

#### Distortion
 ![image](https://github.com/user-attachments/assets/4d6f73ec-6024-4077-8e8f-bda7e0bc162f)
- **Min Distortion Amount**: Controls the minimum distortion applied to the audio, making it sound slightly garbled and damaged, as if played on malfunctioning equipment.
- **Max Distortion Amount**: Controls the maximum distortion level, which can range from subtle to harsh noise depending on your setting.

#### Reverb
![image](https://github.com/user-attachments/assets/e324f216-723f-4c80-98a5-6ed05fa686e8)

- **Min Reverb Amount**: Adds a minimum amount of reverb, simulating sound in a large, empty room or broadcast hall.
- **Max Reverb Amount**: Sets the maximum reverb effect, allowing the sound to echo more intensely in a larger simulated space.
  

#### Flanger
![image](https://github.com/user-attachments/assets/5a043b0b-6640-416e-979f-9efd0882d252)
- **Min Flanger Amount**: Controls the minimum level of the flanger effect, giving a subtle warping effect to the audio.
- **Max Flanger Amount**: Adjusts the maximum flanger, increasing the warping or sweeping effect for a more noticeable alteration in sound.

---

### **Sequence Player Controls**
These controls allow you to input the text to be broadcasted and play/stop the sequence.

- **Input String**: The text you want to be converted into a number-station broadcast. The generator will translate the text and play it through the sequence.
  
  ![image](https://github.com/user-attachments/assets/78dc1b69-dc9f-4787-8cbb-8a4ec467da16)


---

### **Randomization**

![image](https://github.com/user-attachments/assets/e7f0a61b-1fd9-484e-ab59-3907d9cc70b3)


These settings control the randomization behavior of audio volume, pitch, and delays between sounds, adding variability to the broadcast.

#### Volume
![image](https://github.com/user-attachments/assets/6256e764-673e-4c85-9e7c-9a4ef17e14c8)

- **Min Volume**: Sets the minimum volume level for each sound.
- **Max Volume**: Sets the maximum volume level, ensuring the sound does not exceed a certain loudness.
  
#### Pitch
![image](https://github.com/user-attachments/assets/357bfd57-e6ed-48a6-8b1c-667e48d69321)

- **Min Pitch**: Adjusts the lowest pitch variation for the sound.
- **Max Pitch**: Controls the highest pitch variation, allowing sounds to become slightly higher or deeper in tone.
  
#### Delay
![image](https://github.com/user-attachments/assets/5e29adfc-c7e5-45a4-9b81-49523fc65433)

- **Min Delay**: Sets the minimum delay between the playback of each sound in the sequence.
- **Max Delay**: Adjusts the maximum possible delay between each sound to increase randomness.
  
---

## Attribution
![image](https://github.com/user-attachments/assets/9b75f509-03d3-48b8-8ac0-a2d5ba878e29)

- For attribution, see the level named **Attribution**.

## Customization
- You can tweak these parameters directly in the Unreal Engine Editor under the `BP_SequencePlayer` blueprint to customize your number-station generator.
- Feel free to modify the C++ code located in the `Source/` folder to extend or customize functionality further.

## Support
If you run into any issues or have questions, feel free to open an issue.
