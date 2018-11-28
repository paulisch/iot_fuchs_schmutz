# Project #02
### 28.11.2018

##### Lab Outline

* Start project 2: measuring liquid (water and oil) challenge (acoustic distance, optical distance, weight, analog and binary conductive sensing)
* Measuring liquid (water and oil) challenge (acoustic distance, optical distance, weight, conductive sensing, physical switches)
  * Bring props: 3 bottles/containers (one for clear water, one with vegetable oil, one with dirty water), something to block lights in bottle, magnet, swimmer (cork?), scissors, glue, cardboard
* For different liquid types (clear water, dirty, oil) and each measuring challenge build systems to measure series of data over time
* Rate quality for that sensor for the specific liquid
* Produce table and recommendation for use case
* Scales stay in university

---

## Aufgaben Paul

### Raindrop Sensor

Siehe [Code](./code/raindropsensor/raindropsensor.ino).

Analoger Sensor

Bei Trockenheit liefert er Werte von 1024 (max)

Wird Wasser auf die Platte gegeben, sinkt der Wert unter 1024

![](./img/raindrop_sensor.jpg)



## Aufgaben Boris

### Time of flight Sensor

Siehe [Code](./code/TimeOfFlight/TimeOfFlight.ino).

Library verwenden: https://learn.adafruit.com/adafruit-vl53l0x-micro-lidar-distance-sensor-breakout/arduino-code

Liefert Distanz-Werte in mm

von ca. 10 mm bis 8190 mm

![](./img/VL53L0X-arduino.png)

![](./img/time_of_flight.jpg)



## Aufgaben gemeinsam

### Ultrasonic sensor

Siehe [Code](./code/ultrasonicSensor/ultrasonicSensor.ino).

Sample Code verwenden von: https://howtomechatronics.com/tutorials/arduino/ultrasonic-sensor-hc-sr04/

Liefert Distanz-Werte in cm

Sollte nicht nass werden

![](./img/ultrasonic_sensor.jpg)





















