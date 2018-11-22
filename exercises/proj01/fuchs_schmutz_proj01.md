# Project #01
### 21.11.2018

##### Lab Outline
* Present working system with 2-3 Wemos and gateway (the use of mqtt is obligatory, no direct communication between nodes!) using all (and more) what we have explored so far
* Use custom integrator or Node-RED
* Make use of 3 different sensors and two actors
* Design a scenario (giving this project a frame and being able to play through it in 5 minutes)
---

## Aufgaben Paul
### MQTT für MSP8266

Recherche für MQTT für MSP8266

Download von MQTT Client Library: https://github.com/knolleary/pubsubclient/releases/tag/v2.7

pubsubclient-2.7.zip Datei in Arduino IDE als Library hinzufügen



### Photointerrupter

Siehe Sample Programm [hier](./code/PhotoInterrupterDemo/PhotoInterrupterDemo.ino)

Diese Komponente soll simulieren, dass bei einem Fenster festgestellt werden kann, wann es geöffnet wird, indem das Herausnehmen (=Öffnen des Fensters) aus dem Schranken detektiert wird.

**Aufbau in Hardware:**

![photointerrupter_hardware](./img/photointerrupter_hardware.jpg)



Beispielsweise könnte mit Papierstreifen nun der Schranken unterbrochen werden. Bei Unterbrechung wird eine 1 gesendet, wenn nicht, dann 0:

![photointerrupter_serial_mon](./img/photointerrupter_serial_mon.png)



### Laser Emitter und Photo Resistor

Dieser Aufbau dient als eine Art Bewegungsmelder. Wenn die Lichtschranke unterbrochen wird, weißt das auf eine Person hin, die an dieser Stelle durch den Laserstrahl geht.

Siehe Sample Programm [hier](./code/LaserEmitterPhotoResistorDemo/LaserEmitterPhotoResistorDemo.ino)

**Aufbau in Hardware:**

![laser_photo_hardware](./img/laser_photo_hardware.jpg)



Laser Emitter funktioniert mit DigitalWrite LOW. Das Gerät funktioniert mit 3V sowie mit 5V (mit 5V deutlich kräftigerer Laser-Strahl).

Photo Resistor funktioniert mittels AnalogRead

Wird mit dem Laser darauf geleuchtet, erhält man niedrige Analogwerte. Sobald das Licht vom Laser weg ist, steigt der gelesene Wert. Dies kann mit dem SerialPlotter in Arduino festgestellt werden. Hier eine Darstellung, wie vorgegangen wird:

![laser_photo_hardware_demo](./img/laser_photo_hardware_demo.jpg)



Am Serial Plotter kann folgende Veränderung beobachtet werden. Wird der Laser abgewendet, steigen die Werte. Ansonsten bleiben sie niedrig:

![laser_photo_serialplotter](./img/laser_photo_serialplotter.png)



## Aufgaben Boris
### Dual-Color LED

Im Gesamtaufbau dient die LED für die Ausgabe des Status der Alarmanlage:

* Aus --> Alarmanlage nicht aktiv
* <span style="color: green;">Grün</span> --> Alarmanlage aktiv
* <span style="color: red;">Rot</span> --> Alarm (entweder Lichtschranke oder Photointerrupter)

Siehe Sample Programm [hier](./code/dualcolorLED/dualcolorLED.ino)

Mittels einer Library für die Dual-Color LED kann die LED gesteuert werden: https://playground.arduino.cc/Code/BiColorLED

**Aufbau in Hardware (rote Leuchte):**

![led_speaker_touch_hardware](./img/led_speaker_touch_hardware.jpg)



Anschließend jedoch wurde das Beispiel ohne Library gelöst, einfach durch ansteuern der GPIO Ports, siehe Code.



### Active Buzzer

Dies dient als Lautsprecher für die Alarmanlage und kann mit speziellen Befehlen angesteuert werden (siehe Code). Bei Detektion eines Alarms wird ein Audioalarm ausgegeben.

Siehe Sample Programm [hier](./code/activeBuzzer/activeBuzzer.ino)

**Aufbau in Hardware (ganz unten):**

![led_speaker_touch_hardware](./img/led_speaker_touch_hardware.jpg)



### Touch Switch

Im Gesamtaufbau dient der Touch Switch zum Aus- und Einschalten der Alarmanlage. Dies dient einerseits zum Aktiv-Stellen der Alarmanlage. Andererseits wenn ein Alarm ausgelöst wird, kann er mit diesem Button ebenfalls wieder deaktiviert werden.

Siehe Sample Programm [hier](./code/touchSwitch/touchSwitch.ino)

**Aufbau in Hardware (ganz oben):**

![led_speaker_touch_hardware](./img/led_speaker_touch_hardware.jpg)



## Aufgaben gemeinsam
TODO