# Exercise #03
### 20.11.2018

##### Lab Outline
* COAP
 – Install simple COAP Arduino library example (use esp32 example, adjust led, and use ESP8266Wifi.h)
 – Explore and switch with Copper4Cr (Chrome developer extension – or old firefox <= 55 with copper extension)
 – Optional: use libcoap binary tools
* MQTT
 – Install mqtt.fx on your laptop
 – Send and receive with mqtt.fx messages to mosquitto (mqtt server) running on pi
 – Build simulators (use your peferred language and mqtt library or consider ulnoiot's integriot in python)
  ● Temperature sensor simulator
   – Start temp, end temp, time to linearly rise
  ● Relay switch (like AC) simulator
   – Showing on and off
  ● Integrator: switch at specific temperature (can be hardcoded)

---

## Aufgaben Paul
Einlesen in ESP32 Example
man kann null oder eins senden

rechere mqtt.fx -> download unter https://mqttfx.jensd.de/index.php/download
mqtt.fx installiert
mqtt profil anlegen (für raspberry) -> 192.168.12.1 -> funktioniert nicht
fehler -> http weg bei ip adresse -> hat funktioniert (via connect)


## Aufgaben Boris
rechere Copper4Cr -> Copper for Chrome -> A Chrome app+extension to browse the Internet of Things
gefunden auf https://github.com/mkovatsc/Copper4Cr -> für chrome
versuche zuerst älteren firefox herunter zu laden und dann copper als plugin zu installieren
copper (CU) plugin installiert-> geht nicht -> coap://coap.me/ oder coap://californium.eclipse.org/ lässt sich nicht eingeben
umstieg auf die chrome variante -> installation mithilfe des readme auf github (https://github.com/mkovatsc/Copper4Cr/blob/master/README.md)
in chrome hat es funktioniert

rechere zu verbindungsproblemen zwischen mqtt und pi -> https://tutorials-raspberrypi.de/datenaustausch-raspberry-pi-mqtt-broker-client/


## Aufgaben gemeinsam
Vorbereitungen:Raspberry angeschlossen und hochgefahren -> ESP8266 via usb angeschlossen
CoAP Library suchen für Arduino -> https://www.arduinolibraries.info/libraries/co-ap-simple-library
Wir haben die Library integriert
Examples durchsuchen nach ESP32 -> gefunden -> nun Analyse
neues File erstellt (ESP8266_coap) -> versuchen Teile des Codes von Example einzubinden 

copper for chrome gestartet -> verbinden mit 192.168.12.146 (ESP8266)
Versuchen über copper4cr den raspberry oder den esp8266 anzupingen ->funktioniert nicht 4.04 not found
versuche mit endpoint coap://192.168.12.146:5683/light -> 4.04 not found
fehlersuche, wir wissen nicht wie man sich mit dem esp8266 verbindet
haben jetzt mehrmals das gleiche probiert und nach einigen versuchen hat es funktioniert




