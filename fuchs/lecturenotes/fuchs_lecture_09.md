# LORA

* https://www.youtube.com/watch?v=hMOwbNUpDQA
* Low Power Wide Area Network = LPWAN
* Network braucht einen Standart, weil es so viele verschiedene Devices unterschiedlicher Hersteller gibt

– What is the relation bandwidth/range/power?
  * normalerweise ist range limitiert auf ein paar meter um den Accsesspoint (zB WLAN) -> nicht im wide area network
  * zusätzlich würde eine hohe range auch viel power benötigen 
  * durch eine kleine bandbreite ist es möglich mit wenig power über weite strecken zu übertragen
  * WiFi hat eine hohe Bandbreite aber eine kleine range -> braucht viel power
  * 2G-5G hohe Bandbreite, etwas größere range -> muss aber ein Telfeonmast in der nähe sein -> braucht power
  * Bluetooth/BLE -> weniger bandbreite, wenig range, dafür weniger power
  * LORA -> long range, low power, kleine Bandbreite

– What is the link budget?
  * ist ein Budget das man am anfang hat, wird über die zeit verbraucht bis man nichts mehr hat
  * link -> verbindung zwischen sender und receiver
  * wird in DB berechnet
  * aufgefüllt mit der Übertragungsleistung des senders und mit der Empfindlichkeit des receivers
  * wird verringerd durch: Distanz, Wände, Bäume, Kabel,.... (umso dicker das medium ist, umso größer die verringerung)
  * reflektierende signale (zB an häusern; keine sichtlinie zum objekt zu dem gesendet wird); verringert das link budget enorm
  * man kann das link budget aber auch erhöhen (aufstellen eines amplifiers) oder durch antenna gain
  * LORA -> link budget -> 154 dB (ist um einiges höher als das link budget von LTE -> 130dB)
  * LORA in europa -> 868 MHz  

– What is the community approach?
  * es gibt zwei verschiedene ansätze (kommerziellen ansatz und community ansatz)
  * the things network -> stellen die infrasruktur (schicken der nachrichten vom gateway zur applikation) für LORA her
  * brauchen viele gateways auf der ganzen welt -> jeder kann einen gateway zur verfügung stellen (community) -> sie sind froh wen jemand einen gateway herstellt und dann zur verfügung stellt
  * es gibt eine Karte mit allen verfügbaren gateways; wenn ein gateway in der nähe ist kann man sich damit verbinden (diese verbindung dann mit LORA nutzen)

– What are benefits with LORA?
  * hohe reichweite
  * wenig energiebedarf
  * bei sensoren die nicht viele daten schicken ist Lora sehr gut aufgestellt (zB Feuchtigkeitssensor bei plfanzen auf großen feldern)
  * hohes link budget
  * kann mit billigen komponenten hergestellt werden
  * wird von einer großen allianz von firmen unterstützt -> LORA Alliance

– what are problems with LORA?
  * kleine Bandbreite (250bps-50kbps)
  * langsamer als morsen -> 250 bps -> 1% davon nutzbar bei einem gateway -> /100 = 2,5 bps (morsen = 20 bps)
  * es darf immer nur einer am kanal senden oder empfangen (singel channel)
  * in manchen regionen gibt es keine community (keine gateways)


## radio link budget calculator

* LORA

50km
0,863GHz
rain rate: 0 mm/h
received power: -125.1 dBm

50km
0,863GHz
rain rate: 100 mm/h
received power: -125.2 dBm

* WiFi

50km
2,4GHz
rain rate: 0 mm/h
received power: -134.0 dBm

15km
2,4GHz
rain rate: 0 mm/h
received power: -123.6 dBm

## LORA in Austria and Linz

* hagenberg: keine
* salzburg: einige gateways
* linz: einige gateways

## how expensive a LORA client adapter, LORA gateway

* client adapter: 5€-10€
* gateway: ca. 60€

## LORA software support

* bibliothek -> radiohead

## how does LORA fit into IoT?

* wenig energiebedarf und hohe reichweite -> super für kleinere sensoren geeignet

# TTN

* What is TTN (in contect with Lora)?
  * the things network -> ist ein community ansatz -> stellt für LORA infrastruktur zur verfügung (oder versucht es)
  * es ist die community nötig um eine gute infrastruktur zu erhalten -> leute müssen gateways aufstellen
  * unterstützt entwickler bei deren IoT projekten/applikationen im low budget bereich

* What does it stand for?
  * the things network

* Which problems does it solve?
  * security
  * menge der gateways -> brauchen noch mehr
  * kostenfaktor
  * abdeckung weiter bereiche durch community

* How does it solve them?
 * AES-128 end-to-end encryption

# More Lora from Andreas Spiess
LORA models sind alle Transceiver = Transmitter + Resceiver

* What new feature do you learn about regarding the esp8266? 
  * lora mini kann damit verbunden werden
  * 15$ für einen single channel LORA gateway
  * für point to point -> radiohead library, LORA library
  * hat einen sleep mode
  * bei deep sleep -> reboot -> vergisst alle variablen
  * wemos ist client -> node red über WiFi
  * precompiler directives

* How do you see Lora could be used in UlnoIoT; What would need to be adjusted?
