# Exchange Formats

## Simple Object Access Protocol

wird aber nicht mehr so genannt, da es erstens (subjektiv) keineswegs einfach (Simple) ist und zweitens nicht nur dem Zugriff auf Objekte (Object Access) dient.

ist ein Netzwerkprotokoll, mit dessen Hilfe Daten zwischen Systemen ausgetauscht und Remote 
Procedure Calls durchgeführt werden können.
SOAP ist ein industrieller Standard des World Wide Web Consortiums (W3C).

Es stellt Regeln für das Nachrichtendesign auf. Es regelt, wie Daten in der Nachricht abzubilden und zu 
interpretieren sind, und gibt eine Konvention für entfernte Prozeduraufrufe mittels SOAP-Nachrichten vor. 

SOAP stützt sich auf XML zur Repräsentation der Daten und auf Internet-Protokolle 
der Transport- und Anwendungsschicht (vgl. TCP/IP-Referenzmodell) zur Übertragung der Nachrichten.

muss nicht XML -> andere Formate wie Base64 oder CSV sind auch möglich

Zum Senden von Nachrichten können beliebige Transportprotokolle verwendet werden, beispielsweise FTP, SMTP, HTTP oder auch JMS.

## XML

Die Extensible Markup Language (dt. Erweiterbare Auszeichnungssprache), abgekürzt XML, ist eine 
Auszeichnungssprache zur Darstellung hierarchisch strukturierter 
Daten im Format einer Textdatei, die sowohl von Menschen als auch von Maschinen lesbar ist.

Ein XML-Dokument besteht aus Textzeichen in der UTF-8-Kodierung. 
XML kann in allen Texteditoren, die UTF-8 unterstützen, angezeigt und bearbeitet werden.

Wenn das XML-Dokument Binärdaten enthalten soll, müssen diese Daten als Text umkodiert werden.
Dazu kann z. B. die Base64-Kodierung verwendet werden.

Die wichtigste Struktureinheit eines XML-Dokumentes ist das Element. 
Elemente können Text wie auch weitere Elemente als Inhalt enthalten.

Wohlgeformtheit
Ein XML-Dokument heißt „wohlgeformt“ (oder englisch well-formed), wenn es alle XML-Regeln einhält. 

Gültigkeit (Validität)
Soll XML für den Datenaustausch verwendet werden, ist es von Vorteil, wenn das Format 
mittels einer Grammatik (z. B. einer Dokumenttypdefinition oder eines XML-Schemas) definiert ist.

Parser
Programme oder Programmteile, die XML-Daten auslesen, interpretieren und ggf. auf Gültigkeit prüfen, nennt man XML-Parser.

---------------------------------------------------------------------------------------------------------------------

### Binary - CBOR

* Binär Format, basiert auf JSON 
* Nachteil -> lesbarkeit für Mensch nicht gegeben
* Dafür bringt die Übertragung mehr Daten als JSON

### Text

* lesbar für Menschen
* kein Standart Format 
* für Debuging sehr gut geeignet
* Sender und Empfänger müssen kein Protokoll lernen
* Nachteil für jeden lesbar
* für PC schwirig zu lesen

---------------------------------------------------------------------------------------------------------------------

### OCF
* Title: Open Connectivity Foundation

* Members:
  * Microsoft, intel, cisco, lg, Qualcomm, samsung ..... more than 300

* Purpose: 
  * Billions of connected devices (devices, phones, computers and sensors) should be able to communicate with one another regardless of manufacturer, operating system, chipset or physical transport. The Open Connectivity Foundation (OCF) is creating a specification and sponsoring an open source project to make this possible.

  * Zahlreiche namhafte Firmen wie Intel, Samsung, Cisco, Microsoft und Qualcomm haben sich zusammengeschlossen, um die Kommunikation zwischen IoT-Endgeräten zu standardisieren und (noch) ein Industriekonsortium aufzubauen.
  * OCF hatte sich im Februar 2016 als Nachfolgerin des Open Internet Consortium (OIC) neu aufgestellt. 

  * Die konsortiale Organisation möchte Standards schaffen, damit IoT-Endgeräte (Internet of Things) miteinander kommunizieren können, unabhängig vom jeweiligen Chipset und Betriebssystem sowie der Transportschicht. 

* Cost:
  * Diamond Member Benefits (Annual Dues: $350,000 USD)
  * Platinum Member Benefits (Annual Dues: Tiered from $5,000 to $50,000 USD**)
  * Gold Member Benefits (Annual Dues: $2,000 USD)
  * Nonprofit Educational Gold Member Benefits (One time fee: $1,000 USD***)
  * Basic Member Benefits (Annual Dues: $0 USD)

### AllSeen Alliance

* 2016 -> geht in OCF über
* Die AllSeen Alliance geht auf den Mobilfunkkommunikationsexperten Qualcomm zurück.
  * AllJoyn ist ein Open-Source-Projekt, das ein Programmiergerüst und Kerndienste für die Kommunikation, unabhängig von Produktkategorie, Plattform-, Marken und Verbindungstyp von Geräten und Anwendungen mittels Peer-to-Peer (P2P) Connection bereitstellt. Qualcomm hat das Open-Source-Projekt entwickelt und erstmals 2011 auf dem Mobile World Congress präsentiert.[1]
* Open-Source-Framework AllJoyn 

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

### Industrial Internet Consortium
* 258 members (November 2016)
* founded by AT&T, Cisco, General Electric, IBM and Intel
* executive director = Richard Soley
* chief technical officer = Stephen J. Mellor
* Costs:
    * IIC founding membery pay annual dues uf US$150.000
    * IIC contributing members pay annual dues of US$150.000
    * IIC large industry members pay annual dues of US$50.000
    * IIC small industry members pay annual dues of US$5.000
    
* Challenges:
    * Track and Trace (industrial internet)
    * Communication & Control Testbed for Microgrid Applications 
    * Edge Intelligence (real-time analytics for industrial IoT applications)

### ISO
	
International Organization for Standardization 
ISO/IEC JTC 1/SC 41 - Internet of Things and related technologies

Notable members and their roles
* Chairperson (until end 2019): Dr François Coallier 
* ISO Technical Programme Manager : Mr Stephen Dutnall 
* National member organisations of every country

Purpose/challenges
Create standards for IoT topics like:
* ISO/IEC 19637:2016 Information technology - Sensor network testing framework
* ISO/IEC TR 22417:2017 Information technology - Internet of things (IoT) use cases
* ISO/IEC 29182-1:2013 Information technology - Sensor networks: Sensor Network Reference Architecture (SNRA) -- Part 1: General overview and requirements
* Source: https://www.iso.org/committee/6483279/x/catalogue/p/1/u/0/w/0/d/0

How to become member
Get in contact with Austrian Standards International – Standardisation and Innovation (A.S.I.), the austrian member of the ISO.	


### IETF

* The Internet Engineering Task Force is an open standards organization, which develops and promotes voluntary Internet standards, in particular the standards that comprise the Internet protocol suite (TCP/IP).

* Notable members
  * has no formal membership or membership requirements ( All participants and managers are volunteers, though their work is usually funded by their employers or sponsors.)

* Chairperson
  * Alissa Cooper (2017- )

* Purpose
  * Creating voluntary standards to maintain and improve the usability and interoperability of the Internet.

* Access to consortium
  * A Nominating Committee (NomCom) of ten randomly chosen volunteers who participate regularly at meetings is vested with the power to appoint, reappoint, and remove members of the IESG, IAB, IASA, and the IAOC.

---------------------------------------------------------------------------------------------------------------------

### HTTP Post


### CoAP
* “The Constrained Application Protocol (CoAP) is a specialized web transfer protocol for use with constrained nodes and constrained networks in the Internet of Things. The protocol is designed for machine-to-machine (M2M) applications such as smart energy and building automation.”

* REST model for small devices
  * Like HTTP, CoAP is based on the wildly successful REST model: Servers make resources available under a URL, and clients access these resources using methods such as GET, PUT, POST, and DELETE.

* Example
  * Constrained devices - Implementations for constrained devices are typically written in Cs.
  * Server-side -> Java -> One significant Java-based implementation of CoAP is Californium.
  * Browser-based -> Copper is an extension for Firefox to enable direct access to CoAP resources from a browser.
  * Smartphones -> Some implementations are specifically targeting mobile devices such as smartphones and tablets. These tend to differ between platforms:
  * Commercial implementations
  * zB Homeautomation from IKEA

### MQTT






