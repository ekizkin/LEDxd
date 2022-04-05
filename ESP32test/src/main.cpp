#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2,HIGH);
  Serial.println("on");
  delay(500);
  digitalWrite(2,LOW);
  Serial.println("off");
  delay(500);
}