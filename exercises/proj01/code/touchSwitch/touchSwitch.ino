#include <ESP8266WiFi.h>

const int touchPin = D5;     
const int ledPin =  D1;      

// variables will change:
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
   pinMode(touchPin, INPUT);
   pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(touchPin);
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
