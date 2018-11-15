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
 
WiFiServer server(80);
 
String header = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n";
String html_1 = "<!DOCTYPE html><html><head><title>LED Control</title></head><body><div id='main'><h2>LED Control</h2>";
String html_2 = "<form id='F1' action='LEDON'><input class='button' type='submit' value='LED ON' ></form><br>";
String html_3 = "<form id='F2' action='LEDOFF'><input class='button' type='submit' value='LED OFF' ></form><br>";
String html_4 = "</div></body></html>";
 
String request = "";
int LED_Pin = LED_BUILTIN;
 
void setup() 
{
    Serial.begin(115200);
    pinMode(LED_Pin, OUTPUT);

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
  
    server.begin();
    
    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
} // void setup()
 
 
void loop() 
{
 
    // Check if a client has connected
    WiFiClient client = server.available();
    if (!client)  {  return;  }
 
    // Read the first line of the request
    request = client.readStringUntil('\r');
 
    if       ( request.indexOf("LEDOFF") > 0 )  { digitalWrite(LED_Pin, HIGH);  }
    else if  ( request.indexOf("LEDON") > 0 ) { digitalWrite(LED_Pin, LOW);   }
 
    client.flush();
 
    client.print( header );
    client.print( html_1 );
    client.print( html_2 );
    client.print( html_3 );
    client.print( html_4);
 
    delay(5);
  // The client will actually be disconnected when the function returns and 'client' object is detroyed
 
} // void loop()
