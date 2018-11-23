#include <ESP8266WiFi.h>
#include <PubSubClient.h>

const char* ssid     = "dirtyfox";
const char* password = "fuchsschmutz";
const char* mqtt_server = "192.168.12.1";
const char* alarmTopic = "alarm";
const char* systemTopic = "systemstatus";
const char* deviceTopic = "devicestatus";
int systemStatus = 0;
int alarm = 0;

int Photo_Pin = D2;
int Laser_Pin = D1;
int PhotoResistor_Pin = A0;

WiFiClient espClient;
PubSubClient client(espClient);

void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  for (int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
  }
  Serial.println();

  if (strcmp(topic, systemTopic) == 0) {
    if ((char)payload[0] == '1') {
      systemStatus = 1;
    } else {
      systemStatus = 0;
      alarm = 0;
    }
  }

  if (strcmp(topic, alarmTopic) == 0) {
    if ((char)payload[0] == '1') {
      alarm = 1;
    } else {
      alarm = 0;
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
      client.subscribe(systemTopic);
      client.subscribe(alarmTopic);
      client.publish(deviceTopic, "hello world");
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
  pinMode(Laser_Pin, OUTPUT);
  pinMode(PhotoResistor_Pin, INPUT);
  pinMode(Photo_Pin, INPUT);
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
  if (!client.connected()) {
    reconnect();
  }
  client.loop();

  //Turn on laser
  digitalWrite(Laser_Pin, LOW);

  if (systemStatus == 1) {
    int photoVal=digitalRead(Photo_Pin);
    int photoResVal=analogRead(PhotoResistor_Pin);

    //Serial.print("Photo interrupter: ");
    //Serial.println(photoVal);

    //Serial.print("Photo resistor: ");
    //Serial.println(photoResVal);

    // If alarm detected
    if (photoVal == 0 || photoResVal > 400) {
      if (alarm == 0) {
        alarm = 1;
        Serial.println("Sending alarm");
        client.publish(alarmTopic, "1");
      }
    }
  }
  
  delay(100);
}
