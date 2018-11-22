#include <ESP8266WiFi.h>
 
int Laser_Pin = D1;
int PhotoResistor_Pin = A0;
int val = 0;

void setup() {
  Serial.begin(9600);
  pinMode(Laser_Pin, OUTPUT);
  pinMode(PhotoResistor_Pin, INPUT);
}

void loop() {
  digitalWrite(Laser_Pin, LOW);
  val=analogRead(PhotoResistor_Pin);
  Serial.println(val);
  delay(300);
}
