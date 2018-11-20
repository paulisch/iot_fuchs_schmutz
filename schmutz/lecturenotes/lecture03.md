# Lecture #03
### 20.11.2018

## How to speak IoT?
### Protocols
### Examples and properties (speed, readability, user friendliness)
### Pick two advantages and two disadvantages
---
### My research: CBOR and JSON
#### CBOR
* =Concise Binary Object Representation
* ist ein binäres Serialisierungsformat
* basiert auf JSON
* beinhaltet Name-Value-Paare in einer kürzeren Form als JSON
* schwierig zu Debuggen
* erhöht Übertragungsgeschwindigkeit, jedoch ist Menschenlesbarkeit verloren
* um verschlüsselte Daten zu senden

#### JSON
* =JavaScript Object Notation
* ist ein Textdateiformat
* ist menschenlesbar
* häufig gebrauchtes Datenformat für asynchrone Browser-Kommunikation
* ersetzt XML
* einfach zu debuggen
* abgeleitet von JavaScricpt, jedoch sprachenunabhängig

#### Text
* menschenlesbar im Gegensatz zu Binary
* unterschiedliche Apps unterschiedliche Methoden zum Versenden von Daten
* Request und Response oft als ASCII-Texte
* für Debuggen gut geeignet
* Sender und Empfänger müssen kein neues Protokoll lernen
* Nachteilig ist, dass es jeder lesen kann
* für Computer schwieriger zu lesen, langsamer

#### XML
* Darstellung hierarchisch strukturierter Daten in Textformat
* für Menschen und Computer leicht lesbar
* Textzeichen der UTF-8 Kodierung
* wenn Binärdaten beinhaltet --> in Text umkonvertieren, zB mittels Base64
* wohlgeformt & gültig
* SOAP=Simple Object Access Protocol
  * Netzwerkprotokoll
  * Datenaustausch zw. Systemen
  * für Remote-Procedure-Calls
  * gestützt auf XML

...

## Consortiums/Foundations/Alliances => Who does IoT?
### OCF
Open Connectivity Foundation

Members:
Microsoft, intel, cisco, lg, Qualcomm, samsung ..... more than 300

Purpose: 
Billions of connected devices (devices, phones, computers and sensors) should be 
able to communicate with one another regardless of manufacturer, operating system, chipset or physical transport. 
The Open Connectivity Foundation (OCF) is creating a specification and sponsoring an open source project to make this possible.

Zahlreiche namhafte Firmen wie Intel, Samsung, Cisco, Microsoft und Qualcomm haben sich zusammengeschlossen, um die Kommunikation 
zwischen IoT-Endgeräten zu standardisieren und (noch) ein Industriekonsortium aufzubauen.

OCF hatte sich im Februar 2016 als Nachfolgerin des Open Internet Consortium (OIC) neu aufgestellt. 

Die konsortiale Organisation möchte Standards schaffen, damit IoT-Endgeräte (Internet of Things) miteinander kommunizieren können, 
unabhängig vom jeweiligen Chipset und Betriebssystem sowie der Transportschicht. 

Cost:
Diamond Member Benefits (Annual Dues: $350,000 USD)
Platinum Member Benefits (Annual Dues: Tiered from $5,000 to $50,000 USD**)
Gold Member Benefits (Annual Dues: $2,000 USD)
Nonprofit Educational Gold Member Benefits (One time fee: $1,000 USD***)
Basic Member Benefits (Annual Dues: $0 USD)

### AllSeen Alliance
2016 -> geht in OCF über
Die AllSeen Alliance geht auf den Mobilfunkkommunikationsexperten Qualcomm zurück.
AllJoyn ist ein Open-Source-Projekt, das ein Programmiergerüst und Kerndienste für die Kommunikation, unabhängig 
von Produktkategorie, Plattform-, Marken und Verbindungstyp von Geräten und Anwendungen mittels Peer-to-Peer (P2P) 
Connection bereitstellt. Qualcomm hat das Open-Source-Projekt entwickelt und erstmals 2011 auf dem 
Mobile World Congress präsentiert.[1]
Open-Source-Framework AllJoyn 

### Lora Alliance (me)
* Title: -
* Notable Members:
  * Actility, Cisco, Eolane, IBM
* Purpose:
  * von Industrieführenden ins Leben gerufen, um Low Power Wide Area Networks (LPWAN) in der ganzen Welt zu verbreiten, um IoT, Smart City und Industrieapplikationen zu ermöglichen
* Cost:
  * Adopter: 3.000$
  * Institutional: gratis
  * Contributor: 20.000$
  * Sponsor: 50.000$

### IoT eclipse.org (me)
* Title: -
* Notable Members:
  * Bosch, Eurotech, Red Hat, ADLINK Technology Inc., Azul Systems, BREDEX GmbH
* Purpose:
  * Ziel ist das Aufbauen eines Open IoT, Fokus auf Open Source  Technologien
* Cost:
  * ?

### IIC
siehe Moodle

### IEEE
siehe Moodle

### ISO
siehe Moodle

### IETF
siehe Moodle

## Protocols
### CoAP
Constrained Application Protocol
von IETF
Web-Transfer-Protokoll für das Internet of Things
Grundzüge von REST übernommen
Low Power/Low Memory Devices
zwischen Geräten im selben Netzwerk verwendet, auch Geräten im Internet
übersetzt HTTP für die einfache Verwendung im Web
UDP
SMS in Mobilkommunikationsnetzen
IKEA => Home Automation verwendet CoAP

### MQTT