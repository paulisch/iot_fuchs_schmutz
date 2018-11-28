int RainPin = A0;

void setup() {
  Serial.begin(115200);
  pinMode(RainPin, INPUT);
}

void loop() {
  int rainValue=analogRead(RainPin);
  Serial.println(rainValue);
  delay(200);
}
