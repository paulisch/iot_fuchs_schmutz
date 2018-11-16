/*
 * Sketch: ESP8266_LED_Control_02
 * Control an LED from a web browser
 * Intended to be run on an ESP8266
 * 
 * connect to the ESP8266 AP then
 * use web broswer to go to 192.168.4.1
 * 
 */
 
 
#include <ESP8266WiFi.h>
const char* ssid     = "dirtyfox";
const char* password = "fuchsschmutz";

const char* server = "maker.ifttt.com";
const char* resource = "/trigger/button_pressed/with/key/cR8QrXa3Sb1S1TdxVH_ziy";

const int BUTTON_PIN = D2;

int btnPressed = 0;
int btnRead = 0;
 
void setup() 
{
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
  
    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());

    pinMode(BUTTON_PIN, INPUT);
} // void setup()
 
 
void loop() 
{
     btnRead = digitalRead(BUTTON_PIN);
     if (btnRead == LOW) {
        if (btnPressed == 0) {
           Serial.println("Send request");
           requestIFTTT();
        }
        btnPressed = 1;
     } else {
        btnPressed = 0;
     }
    delay(20); 
} // void loop()

void requestIFTTT()
{
    WiFiClient client;
    int retries=5;
    while(!!!client.connect(server, 80) && (retries-- > 0)) {
      Serial.print(".");
    }
    Serial.println();

    if(!!!client.connected()) {
      Serial.println("Failed to connect!");
    }

    client.print(String("GET ") + resource + " HTTP/1.1\r\n" + "Host: " + server + "\r\n" + "Connection: close\r\n\r\n");
    int timeout = 5 * 10; //5 seconds
    while(!!!client.available() && (timeout-- > 0)) {
      delay(100);
    }

    while(!!!client.available()) {
      Serial.println("No response!");
    }

    while(client.available()) {
      Serial.write(client.read());
    }

    client.stop();
}
