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
- Überwachungssystem für Haus

# IoT Scenario *Home gateways*

* Working with: Boris, Markus, Hannes

* Sepp hat ein Haus. Er hat sein Haus neuerdings mit Smart Home Komponenten ausgestattet, nämlich mit dem Home Gateway System "HomA - Home Automation".Es ist Winter. Sepp schläft gerade. Die Heizung hält die Temperatur auf 21 °C. Alexa dient als Wecker, welcher um 07.30 Uhr läutet. Gleichzeitig mit dem Wecker werden in Sepp's Zimmer die Rolläden automatisiert nach oben gefahren und das Licht geht an.Alexa fragt Sepp, ob und wann er einen Kaffee will. Sepp sagt: "Ich möchte in 10 min Kaffee trinken." Während Sepp sich fertig macht, macht die Kaffeemaschine frischen Kaffee und es wird das Mediensystem gestartet. Alexa fragt Sepp, ob er lieber Nachrichten oder Musik hören will. Sepp entscheidet sich heute für die Nachrichten. Alexa gibt den Befehl zum Mediensystem weiter. Das Mediensystem erkennt, in welchem Raum sich Sepp aufhält, und gibt dort die Nachrichten wieder. Sepp geht in die Küche. Das Mediensystem erkennt den Raumwechsel und Sepp trinkt seinen fertigen Kaffee. Sepp fährt in die Arbeit. Die Heizung fährt in den Energiesparmodus (17 °C). Licht, Kaffeemaschine und Mediensystem werden gehen in den Ruhemodus. Die Rolläden werden heruntergefahren.Nach einem harten Arbeitstag startet Sepp in einer Pause 30min vor Dienstschluss seine HomA App. Er teilt dem System mit, dass er in ca. 45min zuhause ist. Im Zuge dessen werden sein Auto und auch sein Smart Home vorgeheizt, sodass bei Ankunft ca. 21 °C erreicht werden.

# IoT Scenario *Save SmartHome*

Fabian hat sich ein neues Haus gekauft. Da das Haus schon etwas in die Jahre gekommen ist, hat es keinerlei moderne "Spielerein" verbaut. Nach einiger Zeit bemerkt er, dass er hin und wieder vergisst das Garagentor über Nacht zu schließen. Zudem ist Fabien fürchterlich immer etwas zerstreut da er öfters bis spät in die Nacht arbeiten muss. Dadurch ist es ihm auch schon passiert, dass er seine Terassentüre offen gelassen hat.
Durch diese Vorkommnisse beschließt Fabian einige Sicherheitsmaßnahmen zu setzten. Er bestellt sich einen Techniker ins Haus und muss leider feststellen das so ein Sicherheitssystem sehr sehr teuer ist. Fabin ist unglücklicherweise immer etwas kanpp bei Kasse und entscheidet sich das Ganze selbst umzusetzten.
Nach einiger Zeit hat er das System implementiert.

Fabian ist heute erst um 22:00 Uhr mit seiner Arbeit fertig. Er er hat sich gerade fertig fürs Bett geacht und legt sich hin. Er ist sich nicht mehr sicher ob er alle Türen geschlossen hat und checkt mit seiner App die neu verbauten Kameras im Haus. Er sieht in seiner App eine auflistung aller WebCams im Haus. Die Garage ist geschlossen und auch die Terassentüre ist geschlossen. Fabian Kann beruhigt einschlafen.
Am nächsten Tag bekommt er eine Push-Benachrichtigung auf sein Handy, dass jemand an seiner Haustüre leutet. Er verbindet sich mit dem Lautsprecher und der Kamera die an seiner Tür angebracht sind und checkt wer angeläutet hat. Es ist ein DHL-Lieferant. Fabian teilt ihm mit, dass er das Päckchen unter die Stiege legen soll.
Zusätzlich hat Fabian die Kameras im Haus auf Bewegungserkennung gestellt. Er bekommt etwas später noch eine Push-Benachrichtigung von seiner Wohnzimmer Kamera. Er checkt sofort seine App. Die Kameras zeichnet ab jetzt alles auf und speichern die Daten. Er sieht das die Nachbarskatzte durch sein Haus läuft, da er vergessen hatte die Terassentür zu schließen als er sein Haus verlassen hat. 
Nun hat er zusätzlich Kontaktschalter an den Türen und Fenstern angebracht. Diese zeigen ihm von jedem Fenster und von jeder Tür im Haus den aktuellen Status (offen oder geschlossen). 


------------------------------------------------------------------------------------------------------

# Bersönlich Anmerkungen

* Die Gruppenarbeit gleich zu Beginn der Vorlesung war eine gute Möglichkeit "in die Gänge" zu kommen. Die Gruppenarbeit hat gut funktioniert, auch wenn die Zeit sehr knapp bemessen war.
* Dadurch war nur ein kurzer Überblick über die vorgegebenen Low Level Buses möglich.
* Auch dass dann jeder "seinen" Low Level Bus der Gruppe vorstellen musste, 
* Die Vorstellen jedes Low Level Buses war dann etwas hektisch und unkontrolliert, hat aber trotzdem ganz gut funktioniert. (mit etwas Rechere im Nachhinein)
* Der Punkt Story Driven Modeling hat mir mehr Spaß gemacht als der erste Punkt (Low Level Buses). Das Schreiben der Geschichte ist uns leicht gefallen und hat sehr viel Spaß gemacht
* Grundsätzlich war diese Vorlesung wieder sehr gut Verständlich und hatte eine gute Struktur.














