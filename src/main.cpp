#include <Arduino.h>

void setup() {
  // SERIAL:
  Serial.begin(9600);
}

void loop() {
  Serial.println("alo");  
  if(Serial.available() > 0) {
    String data = Serial.readStringUntil('\n');
    Serial.println(data);
  }



}