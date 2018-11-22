#include <ESP8266WiFi.h>

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  tone(D4, 100);
  delay(1000);
  noTone(D4); // An dieser Stelle geht der erste Ton aus.
  tone(D4, 200); // Der zweite Ton mit der neuen Tonhöhe “200” ertönt.
  delay(1000); //… und zwar für eine Sekunde...
  noTone(D4);
}
