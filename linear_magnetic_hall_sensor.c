/*
    Project name: ESP32 Linear Hall Sensor
    Modified Date: 24-06-2024
    Code by: Projectslearner
    Website: https://projectslearner.com/learn/esp32-linear-hall-sensor
*/

// Analog pin connected to Hall sensor output
const int hallSensorPin = 34; // GPIO 34 on ESP32

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the analog value from Hall sensor
  int hallValue = analogRead(hallSensorPin);

  // Print the raw Hall sensor value to Serial Monitor
  Serial.print("Hall Sensor Value: ");
  Serial.println(hallValue);

  // Add a delay before the next reading
  delay(1000);
}
