#include <ESP8266WiFi.h>
#include <PubSubClient.h>

const char* ssid     = "dirtyfox";
const char* password = "fuchsschmutz";
const char* mqtt_server = "192.168.12.1";
const char* inTopic = "testin";
const char* outTopic = "testout";
const int touchPin = D5;     
const int ledPinRed =  D1;
const int ledPinGreen =  D2;
const int buzzerPin = D3;
int buttonState = 0;
int lastbuttonstate = 0;
int systemstatus = 0;
int alarmOn = 0;

WiFiClient espClient;
PubSubClient client(espClient);
long lastMsg = 0;
char msg[50];
int value = 0;

void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  for (int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
  }
  Serial.println();

  if (strcmp(topic, "systemstatus") == 0){   
    if ((char)payload[0] == '1') {
      systemstatus = 1;
      digitalWrite(ledPinGreen, HIGH);
      digitalWrite(ledPinRed, LOW);
    } else {
      systemstatus = 0;
      alarmOn = 0;
       digitalWrite(ledPinGreen, LOW);
       digitalWrite(ledPinRed, LOW);
    }
  }
  
  if (strcmp(topic, "alarm") == 0){   
    if ((char)payload[0] == '1'&& systemstatus == 1) {
      alarmOn = 1;
    } else {
       alarmOn = 0;
    }
  }
}

void reconnect() {
  // Loop until we're reconnected
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    // Create a random client ID
    String clientId = "ESP8266Client-";
    clientId += String(random(0xffff), HEX);
    // Attempt to connect
    if (client.connect(clientId.c_str())) {
      Serial.println("connected");
      client.subscribe("systemstatus");
      client.subscribe("alarm");
      
      // Once connected, publish an announcement...
      client.publish("devicestatus", "hello world");
      // ... and resubscribe
      
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}

void setup(void)
{
  
  setupLED();
  setupTouch();
  Serial.begin(115200);

  delay(10);

  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  /* Explicitly set the ESP8266 to be a WiFi-client, otherwise, it by default,
   would try to act as both a client and an access-point and could cause
   network-issues with your other WiFi-devices on your WiFi-network. */
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  randomSeed(micros());
  
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

  client.setServer(mqtt_server, 1883);
  client.setCallback(callback);
}

void loop(void)
{
  lastbuttonstate = buttonState;
  buttonState = digitalRead(touchPin);
  
  if (buttonState == HIGH && lastbuttonstate != buttonState) {
    if (systemstatus == 1){
      client.publish("systemstatus", "0");
    } else {
      client.publish("systemstatus", "1");
    }  
  } else {
    
  }

  if (alarmOn == 1) {
    digitalWrite(ledPinRed, HIGH);
    digitalWrite(ledPinGreen, LOW);
    //digitalWrite(buzzerPin, HIGH);
    pinMode (buzzerPin, OUTPUT);
    tone(buzzerPin, 1000);
  }else {
    noTone(buzzerPin);
    pinMode (buzzerPin, INPUT);
    if (systemstatus == 1){
      digitalWrite(ledPinGreen, HIGH);
      digitalWrite(ledPinRed, LOW);
    }else{
      digitalWrite(ledPinGreen, LOW);
      digitalWrite(ledPinRed, LOW);
    }
  }
  
  
  if (!client.connected()) {
    reconnect();
  }
  client.loop();
  
  delay(100);
}

void setupLED(void)
{
  pinMode(ledPinGreen, OUTPUT);
  pinMode(ledPinRed, OUTPUT);
}

void setupTouch(void)
{
  pinMode(touchPin, INPUT);  
}

void setupBuzzer(void)
{
  pinMode (buzzerPin, OUTPUT);
}
