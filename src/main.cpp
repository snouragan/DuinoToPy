#include <Arduino.h>

void setup() {
  // SERIAL:
  Serial.begin(9600);
}

void loop() {
  Serial.println("alo");
  delay(1000);
}