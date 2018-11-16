# Exercise #02
### 16.11.2018

##### Lab Outline
* Finish tasks from Lab 1 (especially remote trigger)
* Create Button Device, which triggers via HTTP Post to IFTTT WebHook → then triggers (a) report to phone or (b) tweet (emergency remote, tweet button, shopping button)
* Figure out how to use I2C 2 lines display
  * optional: use I2C display to show message when ifttt event triggered
* Get remote data from DS11 onewire temperature device
* HW:
  * Finish Lab work
  * In team: come up/research 2 potentially useful IoT scenarios where parts could be commercialized → tell a story where this is used successfully → needs to show up in portfolio (which I will review first time next week)
---

## Aufgaben Paul
Registrieren bei IFTTT WebHook https://ifttt.com
Neuen IFTTT Service anlegen: If new IFTTT update, then send email to paul.schmutz96@gmail.com
Dieser Trigger kann auch über die IFTTT App eingerichtet werden
Markus hat geholfen, um Webhooks einzurichten
Unter https://ifttt.com/maker_webhooks -> Documentation kann man die URLs für den Request einsehen
Applet verworfen
Neues Applet anlegen mit Service Webhooks mit dem Namen button_pressed => dies ist der Trigger
Als Action, die ausgelöst werden soll, wird Gmail gewählt (ist auf dem Handy installiert)
Beispielsweise kann nun das Event mit curl -X POST https://maker.ifttt.com/trigger/button_pressed/with/key/cR8QrXa3Sb1S1TdxVH_ziy ausgelöst werden. Diese URL muss durch den Button Press auf ESP angesteuert werden
Der Button wurde von Boris auf D2 verbunden. Auf diesen Input reagiert das Arduino Programm. Siehe [hier](https://github.com/paulisch/iot_fuchs_schmutz/blob/master/exercises/ex02/esp8266_wifi_button_ifttt/esp8266_wifi_button_ifttt.ino)

Für die Temperaturmessung eine Library suchen. Unter https://github.com/esp8266/Basic gibt es die DallasTemperature Library.
Dann jedoch https://www.arduinolibraries.info/libraries/dallas-temperature genommen.

## Aufgaben Boris
Zuerst probiert mit einem Steckbrett und dem ESP8266 und einem Button den Button-Trigger zu bauen
Auf Frage zu Tobias und Markus jedoch verwenden wir einen Button, der mit kurzen Kabeln direkt am ESP8266 angeschlossen wird:
![](https://raw.githubusercontent.com/paulisch/iot_fuchs_schmutz/master/exercises/ex02/img/01.jpg)
Bauen eines Steckbretts mit dem I2C 2 lines display.

Bauen des Systems mit Temperatursensor:
![](https://raw.githubusercontent.com/paulisch/iot_fuchs_schmutz/master/exercises/ex02/img/02.jpg)

## Aufgaben gemeinsam
Für das Arduino Programm für Display Library suchen; die beiden Libraries unter https://www.instructables.com/id/How-to-Connect-I2C-Lcd-Display-to-Arduino-Uno/ werden jeweils mittels Arduino Sketch>Include Library>Add .ZIP Library hinzugefügt

Wire Library passt, jedoch LiquidCrystal_I2C ersetzt mit https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library

Das Verbinden mit dem Display war schwierig, weil zuerst die Verkabelung falsch war
Display muss auf speziellen Ports angeschlossen werden
Siehe hier (=>SCL, SDA)
![hier](https://escapequotes.net/wp-content/uploads/2016/02/esp8266-wemos-d1-mini-pinout.png)

Die optionale Aufgabe "use I2C display to show message when ifttt event triggered" funktioniert ebenfalls. Es wird die Meldung "Success" ausgegeben, siehe fertiges Programm [hier](https://github.com/paulisch/iot_fuchs_schmutz/blob/master/exercises/ex02/esp8266_wifi_button_ifttt_display/esp8266_wifi_button_ifttt_display.ino)

Temperaturmessung
Nun arbeiten wir wieder gemeinsam
Download der OneWire Library für Arduino
Zusätzlich nun ein Temperatursensor:
![](https://raw.githubusercontent.com/paulisch/iot_fuchs_schmutz/master/exercises/ex02/img/03.jpg)
Wie in der 1. Übung kann nun der Code für den Webservice verwendet werden.
Der Wert der Temperatur wird über DallasTemperature ausgelesen.
Siehe Code [hier](https://github.com/paulisch/iot_fuchs_schmutz/blob/master/exercises/ex02/esp8266_wifi_temperature/esp8266_wifi_temperature.ino)