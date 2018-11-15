
# Aufgaben Schmutz

1. Arduino IDE installiert (hat gut funktioniert)
2. Software zum blinken der LED auf ESP8266 
3. Link in File Preferences/Additional Boards Manager kopiert: http://arduino.esp8266.com/stable/package_esp8266com_index.json
4. Tools/Board Manager/ESP8266 Paket installiert: Tools/Board/NodeMCU 1.0 (ESP-12E Module)

Für den Source-Code siehe
* Blinking LED: https://github.com/paulisch/iot_fuchs_schmutz/blob/master/exercises/ex01/esp8266_blink_led/esp8266_blink_led.ino
* WiFi and Server: https://github.com/paulisch/iot_fuchs_schmutz/blob/master/exercises/ex01/esp8266_wifi_led/esp8266_wifi_led.ino

---

# Aufgaben Fuchs

Raspberry pi und Zubehör erhalten
SD-Karte formatiert (leichte Verzögerung, da bereits sehr viele Partitionen auf SD-Karte vohanden waren)
Image erhalten -> Image auf Raspberry (mit win32imager) -> hat alles gut funktioniert
config.txt bearbeitet (Passwort und Name von WLans)
Raspberry via Ethernet mit dem FH Netzwerk verbunden -> Raspberry dient nun als WLan Router
Unter verfügbare Wlan gefunden (dirtyfox) -> login mit gesetztem Passwort (alles gut funktioniert)
Zugriff auf Raspberry via IP-Adresse UlnoIoT Local Web Portal (hat gut funktioniert) https://192.168.12.1

---

# Gemeinsam

Via cmd in Windows -> arp -a -> netzwerk anzeigen lassen -> Pingen von uns beiden funktioniert, aber ESP nicht gefunden
Software verbessert (einige Verbindungsprobleme mit alter Software) und wieder auf ESP8266
-> hat funktioniert -> unter 192.168.12.146 kann man den ESP ansteuern -> Button für LED ein und Button für LED aus
zusätzlich wird über die Konsole von Arduino IDE die IP-Adresse des ESP ausgegeben

Ausgabe des SerialMonitor im Arduino IDE:

Connecting to dirtyfox
...
WiFi connected
IP address: 
192.168.12.146