// Include the libraries we need
#include <OneWire.h>
#include <DallasTemperature.h>
#include <ESP8266WiFi.h>

const char* ssid     = "dirtyfox";
const char* password = "fuchsschmutz";

WiFiServer server(80);
 
String header = "HTTP/1.1 200 OK\r\nContent-Type: application/json\r\n\r\n";
String str_1 = "{ \"temperature\": ";
String str_2 = " }";

// Data wire is plugged into port 2 on the Arduino
#define ONE_WIRE_BUS D3

// Setup a oneWire instance to communicate with any OneWire devices (not just Maxim/Dallas temperature ICs)
OneWire oneWire(ONE_WIRE_BUS);

// Pass our oneWire reference to Dallas Temperature. 
DallasTemperature sensors(&oneWire);

/*
 * The setup function. We only start the sensors here
 */
void setup(void)
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
  
    server.begin();
    
    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
    
    sensors.begin();
}

/*
 * Main function, get and show the temperature
 */
void loop(void)
{
  sensors.requestTemperatures(); // Send the command to get temperatures
  
  // Check if a client has connected
    WiFiClient client = server.available();
    if (!client)  {  return;  }
    
    client.flush();
 
    client.print( header );
    client.print( str_1 );
    client.print( sensors.getTempCByIndex(0) );
    client.print( str_2 );
 
    delay(5);
}
