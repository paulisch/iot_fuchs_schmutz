int HallPin = D0;

void setup() {
  Serial.begin(115200);
  pinMode(HallPin, INPUT);
}

void loop() {
  int val = digitalRead(HallPin);
  Serial.println(val);
  delay(200);
}
