# Low Level Buses

RS232 (1), I2C (2), SPI (3), Onewire(4)

# RS232

* Wird fast nicht mehr benutzt -> früher für Modems, Maus, Tastatur. Jetzt wird er in Router oder Switches verwendet (aber nur selten)

* weniger Distanz -> mehr Power
- 2,4 kBd = 900m
- 9,6 kBd = 152m
- 115,2 kBd < 2m

* Kabel:
- listening lines
- speaking lines

* max length
- 15m = normale kap
- 300m = low kap

# I2C Inter-Integrated Circuit

* synchroous, multi-master, multi-slave, packet switched, single.ended, serial computer bus
* kostet wenig

* speed
- standard (100 kbps)
- fast-mode (400 kbps)
- high speed (3,4 Mbps)

* Verwendung
- kleine Displays, real time clocks, 

* I²C ist als Master-Slave-Bus konzipiert. Ein Datentransfer wird immer durch einen Master initiiert der über eine Adresse angesprochene Slave reagiert darauf. Mehrere Master sind möglich (Multimaster-Betrieb). Wenn im Multimaster-Betrieb ein Master-Baustein auch als Slave arbeitet, kann ein anderer Master direkt mit jenem Baustein kommunizieren, indem er ihn als Slave anspricht.

# SPI
* Das Serial Peripheral Interface (kurz SPI) ist ein im Jahr 1987 von Susan C. Hill Et al., damals bei dem Halbleiterhersteller Motorola (heute NXP Semiconductors), entwickeltes Bus-System und stellt einen „lockeren“ Standard für einen synchronen seriellen Datenbus (Synchronous Serial Port) dar, mit dem digitale Schaltungen nach dem Master-Slave-Prinzip miteinander verbunden werden können.[1]

- synchroner serieller Datenbus

* gemeinsame Leitungen, an denen jeder Teilnehmer angeschlossen ist:
- SCLK (englisch Serial Clock) auch SCK, wird vom Master zur Synchronisation ausgegeben
- MOSI oder SIMO (englisch Master Output, Slave Input)
- MISO oder SOMI (englisch Master Input, Slave Output)
- one line specific for every device: SS (Slave Select) - the pin on each device that the master can use to enable and disable specific devices.

* Vollduplexfähig
* Vielfältige Einsatzmöglichkeiten in Audio- und Messanwendungen, zur Datenübertragung zwischen Mikrocontrollern.


* SPI library
- Arduino Homepage

* Serial Peripheral Interface (SPI) is a synchronous serial data protocol used by microcontrollers for communicating with one or more peripheral devices quickly over short distances. It can also be used for communication between two microcontrollers.

* Verwendung
- Barometric Pressure Sensor: Read air pressure and temperature from a sensor using the SPI protocol.
- Digital Pot Control: Control a AD5206 digital potentiometer using the SPI protocol.
- Micro SD Card reader

* Kann bis zu 3m kommunizieren -> nur für kurze Distanzen

# Onewire

* ähnlich zu I2C
* niedrige datenrate -> hohe Reichweite
* wird für low level communication verwendet
* netzwerk von solchen geräten -> micro lan
* ein Datenkabel und ein Ground
* onewire chips -> jeder eine eindeutige ID
* Anwendungen: chip für tür, oder chip für alarmanlage
* halfduplex, bidirectional
* master, slave
* master kommuniziert mit slave über 64 bit adressen

------------------------------------------------------------------------------------------------------

# You build home gateways

* Ideen:
- Kaffemaschine umbauen in smart kaffe
- Gewichtssensor in Toilette 

# IoT Scenario *Home gateways*

* Working with: Boris, Markus, Hannes

* Sepp hat ein Haus. Er hat sein Haus neuerdings mit Smart Home Komponenten ausgestattet, nämlich mit dem Home Gateway System "HomA - Home Automation".Es ist Winter. Sepp schläft gerade. Die Heizung hält die Temperatur auf 21 °C. Alexa dient als Wecker, welcher um 07.30 Uhr läutet. Gleichzeitig mit dem Wecker werden in Sepp's Zimmer die Rolläden automatisiert nach oben gefahren und das Licht geht an.Alexa fragt Sepp, ob und wann er einen Kaffee will. Sepp sagt: "Ich möchte in 10 min Kaffee trinken." Während Sepp sich fertig macht, macht die Kaffeemaschine frischen Kaffee und es wird das Mediensystem gestartet. Alexa fragt Sepp, ob er lieber Nachrichten oder Musik hören will. Sepp entscheidet sich heute für die Nachrichten. Alexa gibt den Befehl zum Mediensystem weiter. Das Mediensystem erkennt, in welchem Raum sich Sepp aufhält, und gibt dort die Nachrichten wieder. Sepp geht in die Küche. Das Mediensystem erkennt den Raumwechsel und Sepp trinkt seinen fertigen Kaffee. Sepp fährt in die Arbeit. Die Heizung fährt in den Energiesparmodus (17 °C). Licht, Kaffeemaschine und Mediensystem werden gehen in den Ruhemodus. Die Rolläden werden heruntergefahren.Nach einem harten Arbeitstag startet Sepp in einer Pause 30min vor Dienstschluss seine HomA App. Er teilt dem System mit, dass er in ca. 45min zuhause ist. Im Zuge dessen werden sein Auto und auch sein Smart Home vorgeheizt, sodass bei Ankunft ca. 21 °C erreicht werden.

------------------------------------------------------------------------------------------------------

# Bersönlich Anmerkungen

* Die Gruppenarbeit gleich zu Beginn der Vorlesung war eine gute Möglichkeit "in die Gänge" zu kommen. Die Gruppenarbeit hat gut funktioniert, auch wenn die Zeit sehr knapp bemessen war.
* Dadurch war nur ein kurzer Überblick über die vorgegebenen Low Level Buses möglich.
* Auch dass dann jeder "seinen" Low Level Bus der Gruppe vorstellen musste, 
* Die Vorstellen jedes Low Level Buses war dann etwas hektisch und unkontrolliert, hat aber trotzdem ganz gut funktioniert. (mit etwas Rechere im Nachhinein)
* Der Punkt Story Driven Modeling hat mir mehr Spaß gemacht als der erste Punkt (Low Level Buses). Das Schreiben der Geschichte ist uns leicht gefallen und hat sehr viel Spaß gemacht
* Grundsätzlich war diese Vorlesung wieder sehr gut Verständlich und hatte eine gute Struktur.














