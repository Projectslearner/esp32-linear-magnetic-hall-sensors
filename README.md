# ESP32 Linear Hall Sensor Project

## Project Overview
The ESP32 Linear Hall Sensor project demonstrates how to interface a Linear Hall Effect Sensor with an ESP32 microcontroller to measure magnetic field strength. Hall Effect Sensors generate a voltage proportional to the magnetic field passing through them, making them suitable for applications like proximity detection, speed detection, and current sensing.

## Components Needed
- ESP32 Microcontroller
- Linear Hall Effect Sensor
- Magnet (to generate magnetic field)
- Jumper Wires
- Breadboard

## Block Diagram
*(If available, provide a visual representation of your circuit setup)*

## Circuit Setup
1. **Connecting Hall Sensor to ESP32:**
   - Connect the output pin of the Hall Effect Sensor to GPIO pin 34 (analog input A2) on the ESP32.
   - Ensure proper power and ground connections for both the sensor and the ESP32.

## Instructions
1. **Setup:**
   - Initialize serial communication in the `setup()` function with `Serial.begin(9600)`.
   - Define the Hall sensor pin as an input using `pinMode(hallSensorPin, INPUT)`.

2. **Operation:**
   - In the `loop()` function:
     - Read the analog value from the Hall Effect Sensor using `analogRead(hallSensorPin)`.
     - Print the raw analog value to the Serial Monitor.
     - Interpret the analog value relative to the magnetic field strength or proximity to a magnet.

3. **Considerations:**
   - **Magnetic Field:** Ensure the sensor is exposed to varying magnetic fields for testing and calibration.
   - **Calibration:** Calibrate the sensor readings based on the specific magnetic field strength range expected in your application.
   - **Sensor Orientation:** Position the sensor appropriately relative to the magnet to maximize sensitivity and accuracy.

## Applications
- **Proximity Detection:** Detect the presence or absence of a magnet or magnetic field.
- **Position Sensing:** Determine the position of moving objects with magnets attached.
- **Speed Sensing:** Measure the rotational speed of magnetic objects.

## Notes
- **Analog Input:** ESP32 ADC has a 12-bit resolution (0-4095), converting to a voltage range of 0-3.3V.
- **Serial Output:** Use the Serial Monitor for real-time monitoring and debugging of Hall sensor readings.

---

## Useful Links
🌐 [ProjectsLearner - ESP32 Linear Hall Sensor](https://projectslearner.com/learn/esp32-linear-hall-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner