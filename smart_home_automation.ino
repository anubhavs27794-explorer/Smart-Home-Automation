#include <Arduino.h>

#define PIR_PIN 27
#define LDR_PIN 34
#define TEMP_PIN 35
#define RELAY_LIGHT 26
#define RELAY_FAN 25

void setup() {
  Serial.begin(115200);
  pinMode(PIR_PIN, INPUT);
  pinMode(LDR_PIN, INPUT);
  pinMode(TEMP_PIN, INPUT);
  pinMode(RELAY_LIGHT, OUTPUT);
  pinMode(RELAY_FAN, OUTPUT);
  digitalWrite(RELAY_LIGHT, LOW);
  digitalWrite(RELAY_FAN, LOW);
}

void loop() {
  int motion = digitalRead(PIR_PIN);
  int lightLevel = analogRead(LDR_PIN);
  int temperatureValue = analogRead(TEMP_PIN);

  Serial.printf("Motion: %d | Light: %d | Temp sensor: %d\n", motion, lightLevel, temperatureValue);

  // Turn light on when motion is detected in a dark environment.
  digitalWrite(RELAY_LIGHT, (motion == HIGH && lightLevel < 1500) ? HIGH : LOW);

  // Demonstration threshold for a generic analog temperature sensor.
  digitalWrite(RELAY_FAN, temperatureValue > 2000 ? HIGH : LOW);

  delay(1000);
}
