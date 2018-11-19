# Low Level Buses

RS232 (1), I2C (2), SPI (3), Onewire(4)

# RS232

* Wird fast nicht mehr benutzt -> fr�her f�r Modems, Maus, Tastatur. Jetzt wird er in Router oder Switches verwendet (aber nur selten)

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

* I�C ist als Master-Slave-Bus konzipiert. Ein Datentransfer wird immer durch einen Master initiiert der �ber eine Adresse angesprochene Slave reagiert darauf. Mehrere Master sind m�glich (Multimaster-Betrieb). Wenn im Multimaster-Betrieb ein Master-Baustein auch als Slave arbeitet, kann ein anderer Master direkt mit jenem Baustein kommunizieren, indem er ihn als Slave anspricht.

# SPI
* Das Serial Peripheral Interface (kurz SPI) ist ein im Jahr 1987 von Susan C. Hill Et al., damals bei dem Halbleiterhersteller Motorola (heute NXP Semiconductors), entwickeltes Bus-System und stellt einen �lockeren� Standard f�r einen synchronen seriellen Datenbus (Synchronous Serial Port) dar, mit dem digitale Schaltungen nach dem Master-Slave-Prinzip miteinander verbunden werden k�nnen.[1]

- synchroner serieller Datenbus

* gemeinsame Leitungen, an denen jeder Teilnehmer angeschlossen ist:
- SCLK (englisch Serial Clock) auch SCK, wird vom Master zur Synchronisation ausgegeben
- MOSI oder SIMO (englisch Master Output, Slave Input)
- MISO oder SOMI (englisch Master Input, Slave Output)
- one line specific for every device: SS (Slave Select) - the pin on each device that the master can use to enable and disable specific devices.

* Vollduplexf�hig
* Vielf�ltige Einsatzm�glichkeiten in Audio- und Messanwendungen, zur Daten�bertragung zwischen Mikrocontrollern.


* SPI library
- Arduino Homepage

* Serial Peripheral Interface (SPI) is a synchronous serial data protocol used by microcontrollers for communicating with one or more peripheral devices quickly over short distances. It can also be used for communication between two microcontrollers.

* Verwendung
- Barometric Pressure Sensor: Read air pressure and temperature from a sensor using the SPI protocol.
- Digital Pot Control: Control a AD5206 digital potentiometer using the SPI protocol.
- Micro SD Card reader

* Kann bis zu 3m kommunizieren -> nur f�r kurze Distanzen

# Onewire

* �hnlich zu I2C
* niedrige datenrate -> hohe Reichweite
* wird f�r low level communication verwendet
* netzwerk von solchen ger�ten -> micro lan
* ein Datenkabel und ein Ground
* onewire chips -> jeder eine eindeutige ID
* Anwendungen: chip f�r t�r, oder chip f�r alarmanlage
* halfduplex, bidirectional
* master, slave
* master kommuniziert mit slave �ber 64 bit adressen

------------------------------------------------------------------------------------------------------

# You build home gateways

* Ideen:
- Kaffemaschine umbauen in smart kaffe
- �berwachungssystem f�r Haus

# IoT Scenario *Home gateways*

* Working with: Boris, Markus, Hannes

* Sepp hat ein Haus. Er hat sein Haus neuerdings mit Smart Home Komponenten ausgestattet, n�mlich mit dem Home Gateway System "HomA - Home Automation".Es ist Winter. Sepp schl�ft gerade. Die Heizung h�lt die Temperatur auf 21 �C. Alexa dient als Wecker, welcher um 07.30 Uhr l�utet. Gleichzeitig mit dem Wecker werden in Sepp's Zimmer die Roll�den automatisiert nach oben gefahren und das Licht geht an.Alexa fragt Sepp, ob und wann er einen Kaffee will. Sepp sagt: "Ich m�chte in 10 min Kaffee trinken." W�hrend Sepp sich fertig macht, macht die Kaffeemaschine frischen Kaffee und es wird das Mediensystem gestartet. Alexa fragt Sepp, ob er lieber Nachrichten oder Musik h�ren will. Sepp entscheidet sich heute f�r die Nachrichten. Alexa gibt den Befehl zum Mediensystem weiter. Das Mediensystem erkennt, in welchem Raum sich Sepp aufh�lt, und gibt dort die Nachrichten wieder. Sepp geht in die K�che. Das Mediensystem erkennt den Raumwechsel und Sepp trinkt seinen fertigen Kaffee. Sepp f�hrt in die Arbeit. Die Heizung f�hrt in den Energiesparmodus (17 �C). Licht, Kaffeemaschine und Mediensystem werden gehen in den Ruhemodus. Die Roll�den werden heruntergefahren.Nach einem harten Arbeitstag startet Sepp in einer Pause 30min vor Dienstschluss seine HomA App. Er teilt dem System mit, dass er in ca. 45min zuhause ist. Im Zuge dessen werden sein Auto und auch sein Smart Home vorgeheizt, sodass bei Ankunft ca. 21 �C erreicht werden.

# IoT Scenario *Save SmartHome*

Fabian hat sich ein neues Haus gekauft. Da das Haus schon etwas in die Jahre gekommen ist, hat es keinerlei moderne "Spielerein" verbaut. Nach einiger Zeit bemerkt er, dass er hin und wieder vergisst das Garagentor �ber Nacht zu schlie�en. Zudem ist Fabien f�rchterlich immer etwas zerstreut da er �fters bis sp�t in die Nacht arbeiten muss. Dadurch ist es ihm auch schon passiert, dass er seine Terassent�re offen gelassen hat.
Durch diese Vorkommnisse beschlie�t Fabian einige Sicherheitsma�nahmen zu setzten. Er bestellt sich einen Techniker ins Haus und muss leider feststellen das so ein Sicherheitssystem sehr sehr teuer ist. Fabin ist ungl�cklicherweise immer etwas kanpp bei Kasse und entscheidet sich das Ganze selbst umzusetzten.
Nach einiger Zeit hat er das System implementiert.

Fabian ist heute erst um 22:00 Uhr mit seiner Arbeit fertig. Er er hat sich gerade fertig f�rs Bett geacht und legt sich hin. Er ist sich nicht mehr sicher ob er alle T�ren geschlossen hat und checkt mit seiner App die neu verbauten Kameras im Haus. Er sieht in seiner App eine auflistung aller WebCams im Haus. Die Garage ist geschlossen und auch die Terassent�re ist geschlossen. Fabian Kann beruhigt einschlafen.
Am n�chsten Tag bekommt er eine Push-Benachrichtigung auf sein Handy, dass jemand an seiner Haust�re leutet. Er verbindet sich mit dem Lautsprecher und der Kamera die an seiner T�r angebracht sind und checkt wer angel�utet hat. Es ist ein DHL-Lieferant. Fabian teilt ihm mit, dass er das P�ckchen unter die Stiege legen soll.
Zus�tzlich hat Fabian die Kameras im Haus auf Bewegungserkennung gestellt. Er bekommt etwas sp�ter noch eine Push-Benachrichtigung von seiner Wohnzimmer Kamera. Er checkt sofort seine App. Die Kameras zeichnet ab jetzt alles auf und speichern die Daten. Er sieht das die Nachbarskatzte durch sein Haus l�uft, da er vergessen hatte die Terassent�r zu schlie�en als er sein Haus verlassen hat. 
Nun hat er zus�tzlich Kontaktschalter an den T�ren und Fenstern angebracht. Diese zeigen ihm von jedem Fenster und von jeder T�r im Haus den aktuellen Status (offen oder geschlossen). 


------------------------------------------------------------------------------------------------------

# Bers�nlich Anmerkungen

* Die Gruppenarbeit gleich zu Beginn der Vorlesung war eine gute M�glichkeit "in die G�nge" zu kommen. Die Gruppenarbeit hat gut funktioniert, auch wenn die Zeit sehr knapp bemessen war.
* Dadurch war nur ein kurzer �berblick �ber die vorgegebenen Low Level Buses m�glich.
* Auch dass dann jeder "seinen" Low Level Bus der Gruppe vorstellen musste, 
* Die Vorstellen jedes Low Level Buses war dann etwas hektisch und unkontrolliert, hat aber trotzdem ganz gut funktioniert. (mit etwas Rechere im Nachhinein)
* Der Punkt Story Driven Modeling hat mir mehr Spa� gemacht als der erste Punkt (Low Level Buses). Das Schreiben der Geschichte ist uns leicht gefallen und hat sehr viel Spa� gemacht
* Grunds�tzlich war diese Vorlesung wieder sehr gut Verst�ndlich und hatte eine gute Struktur.














