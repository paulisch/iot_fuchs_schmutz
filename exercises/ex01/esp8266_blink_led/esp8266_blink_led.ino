#include <ESP8266WiFi.h>
 
int LED_Pin = LED_BUILTIN;
 
void setup() 
{
    pinMode(LED_Pin, OUTPUT);
 
}
 
 
void loop() 
{ 
    digitalWrite(LED_Pin, HIGH);
    delay(500);
  
  digitalWrite(LED_Pin, LOW);
    delay(500);
}
