# Sensing/Acting

### Mini I2C LCD display
* GPIO: 4 Pins (SCL, SDA, VCC, GND)
* Daten: muss an SCL und SDA angeschlossen werdn
* und dann nach an 5V und GND

-> dan library herunterladen und in der arduino software integrieren (https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library)
-> danach kann darauf zugegriffen werden

include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

lcd.print("Success");

### Acoustic Distance HC SR04

* Pin Belegung
  * VCC, Versorgungsspannung 5V
  * Triggereingang, TTL-Pegel
  * Echo, Ausgang Messergebnis, TTL-Pegel
  * GND, 0V

* messbare Distanz
  * 2cm - ca. 300cm

* Messintervall
  * 0,3cm

* max Messungen pro Sekunde
  * maximal 50

* Vorgehensweise
  * Low pulse für 5 microsekunden schicken um einen klaren High pulse schicken zu können
  * HIGH pulse für 10 microsekunden schicken
  * mit "duration = pulseIn(echoPin, HIGH);" kann die dauer ausgelesen werden
  * distance = (traveltime/2) * speed of sound

* Library
  * NewPin
  * "unsigned int distance = sonar.ping_cm();"


# UlnoIoT Live Demo

TODO: during demo
* Check covered features (and check off the personal covered features). -> in lecture report 5 -> https://github.com/paulisch/iot_fuchs_schmutz/blob/master/fuchs/lecturenotes/fuchs_lecture_05.md
* Write down and ask questions (related to realization of own project) -> lecture report (3 questions, recommendations, feature requests each)
  * wie lange hat es gedauert UlnoIoT zu entwickeln? (bis es funktioniert hat)
  * wieviele leute haben dabei mitgewirkt?
  * was waren dabei die größten hürden/probleme?
* Any special requests to show?



