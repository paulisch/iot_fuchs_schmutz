# Lecture #02
### 16.11.2018

## Research on RS232 (1), I2C (2), SPI (3), Onewire(4)
### Onewire(4) = My group
* provides:
  * low-speed data
  * signaling
  * power over a single conductor (Leiter)
* similar to I2C, but has lower data rates and longer range
* used for inexpensive communications like with digital thermometers
* network of Onewire devices = MicroLAN
* can use only two wires (data and ground), 3rd possible
* often included as a single component in a product
* Each Onewire chip has an unique identifier
  * for example key to open a lock
  * deactivate burglar alarms
* Examples:
  * iButton (Dallas Key)
  * Java Ring
* always 1 master in a MircoLAN, multiple slaves

<!--Notes of listening to others:-->
* cheap, easy to use, simple to use
* 64 bit address
* Master communicates over address
* Master: also commucates with skip-ROM command
* voltage-based digital system
* half-duplex, bidirectional
* Usage
  * battery monitoring
  * real-time clock
  * flow measurements
  * wheather instruments

### RS232 (1)
* not often used
* former used in modems, routers, switches, mouses and keyboards
* speed depends on cable and wanted speed; the more the power, the shorter the cable
* connections for listen state and communicate state
* low-capacity ~ 300m; normal capacity ~ 15m

### I2C(2)
* low-speed periphal processors
* low-cost, low-active bus working with different voltage
* standard 100 kBit/s, fast mode 400 kBit/s, high-speed 3.4 MBit/s
* usage
  * change volume of devices
  * for real-time clocks
  * fans in computers
* two bidirectional connectors, serial data line, serial clock line
* 7-bit address space
* master-slave mode
* message protocol (master <-> slave)

### SPI (3)
* Serial Peripheral Interface
* synchronous serial data bus
* master-slave architecture
* wires are
  * serial clock
  * master output
  * slave input
* MOSI, MISO
* full-duplex capable
* usage:
  * audio
  * communications between micro controllers
  * air pressure, temperature, Micro SD card reader
* distance: max. 3m
* slave-select: enable/disable specific devices
* * *

## Story v3+
Story is good for a pitch, has several use cases

## IoT Scenarios (*Homework: 2 scenarios*)
**Home gateways**
<span style="color: blue">*Members: Boris, Markus Schiller, Hannes, Paul (me)*</span>
Sepp hat ein Haus. Er hat sein Haus neuerdings mit Smart Home Komponenten ausgestattet, nämlich mit dem Home Gateway System "HomA - Home Automation".
Es ist Winter. Sepp schläft gerade. Die Heizung hält die Temperatur auf 21 °C. Alexa dient als Wecker, welcher um 07.30 Uhr läutet. Gleichzeitig mit dem Wecker werden in Sepp's Zimmer die Rolläden automatisiert nach oben gefahren und das Licht geht an.
Alexa fragt Sepp, ob und wann er einen Kaffee will. Sepp sagt: "Ich möchte in 10 min Kaffee trinken." Während Sepp sich fertig macht, macht die Kaffeemaschine frischen Kaffee und es wird das Mediensystem gestartet. Alexa fragt Sepp, ob er lieber Nachrichten oder Musik hören will. Sepp entscheidet sich heute für die Nachrichten. Alexa gibt den Befehl zum Mediensystem weiter. Das Mediensystem erkennt, in welchem Raum sich Sepp aufhält, und gibt dort die Nachrichten wieder. Sepp geht in die Küche. Das Mediensystem erkennt den Raumwechsel und Sepp trinkt seinen fertigen Kaffee.
Sepp fährt in die Arbeit. Die Heizung fährt in den Energiesparmodus (17 °C). Licht, Kaffeemaschine und Mediensystem werden gehen in den Ruhemodus. Die Rolläden werden hue
Nach einem harten Arbeitstag startet Sepp in einer Pause 30min vor Dienstschluss seine HomA App. Er teilt dem System mit, dass er in ca. 45min zuhause ist. Im Zuge dessen werden sein Auto und auch sein Smart Home vorgeheizt, sodass bei Ankunft ca. 21 °C erreicht werden.

**Training**
<span style="color: blue">*Members: Paul (me)*</span>
Neben seinem Job ist Hans begeisterter Sportler und hat deshalb einen Sportraum zuhause eingerichtet. Dabei interessieren ihn vor allem Auswertungen und Informationen über seinen Trainingsverlauf und seine Performance. Deshalb hat er "Workout Smart" in seinem Trainingsraum installiert. Das System verbindet sein Smartphone, einen Start-, Stopp- und Pause-Button sowie einen Brustgurt mit der Cloud, wo die Daten aufbereitet und visualisiert werden.
Hans hat heute wieder ein Training geplant. Er legt seinen Brustgurt an, der sich bei Betreten des Trainingsraums automatisch mit dem System verbindet. Sein Workout kann er mithilfe dem Start- und Stopp-Button steuern oder auch per App. Durch die Überwachung seiner Herzfrequenz kann das System über Lautsprecher über seine Performance Auskunft geben und ihm die bevorzugte Trainingszeit im Vorhinein bekannt geben. Auch bei Pausen während des Workouts wird er über Messung seiner Herzfrequenz erinnert und motiviert zum Weitermachen, damit er das beste aus ihm herausholen kann. Muss Hans während des Trainings kurzfristig dringend weg (zB wegen einem Anruf), so drückt er ganz einfach den Pause Button. Hans trainiert nun schon eine Weile und ist schon sehr ausgepowert. Daher beschließt er, sein Workout zu beenden. Dazu drückt er den Stopp-Button (es wäre auch über seine Smartphone App gegangen). Workout Smart speichert die Daten in der Cloud und gibt Hans über eine Website und die App Analysen seiner Workouts und seines Fitnesszustandes. Damit bekommt Hans Tipps für sein nächstes Training und kann sich darauf optimal vorbereiten