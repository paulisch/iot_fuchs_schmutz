#include <ESP8266WiFi.h>
 
int Photo_Pin = D1;
int val = 0;

void setup() {
  Serial.begin(115200);
  pinMode(Photo_Pin, INPUT);
}

void loop() {
  val=digitalRead(Photo_Pin);
  Serial.print("Value: ");
  Serial.println(val);
  delay(700);
}
