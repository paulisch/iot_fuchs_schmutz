# Node Red

* Auf unseren Raspberry voinstalliert
* Empfehlung -> auf dem Rechner installieren und 
* default passwort/username
* username: ulnoiot
* passwort: iotempire

### Tutorial:

* test anlegen
* verschiedene nodes können angelegt werden
* debug node -> msg.payload lesen
* change node (set msg.payload -> "hello world") zwischen timestamp und debug -> deploy
* hello world wird nun auf der debug konsole ausgegeben
* mqtt node einfügen (mit msg.payload verbinden) -> localhost:1883 -> topic test1/button1 -> deploy
* mqtt output -> topic test2/blue/set
* change node -> msg.payload -> pressed -> on 
* change -> msg.payyload -> released -> off

----
### Google -> toggle LED

function node -> javascript

if (msg.payload === "released") {
    if (context.state === "on") {
        context.state = "off";
    } else {
        context.state = "on";
    }
    msg.payload = context.state;
}
return msg;
---

* change node entfernen und stattdessen den function node (name: toggle) einfügen
* rbe (report by exception, reagiert auf veränderungen) -> zwischen mqtt test1/button1 und function toggle
* man kann eine UI mit node red machen -> unter "dashboard" findet man alle nötigen elemente
* switch einfügen -> mit mqtt output verbinden -> on/off GUI
* neuen tab erstellen (in dashboard) -> neue Gruppe erstellen -> switch node von admin gruppe in die neue gruppe verschieben

-------

# SDM4IoT
* Story Driven Modeling als agile Vorgehensmethode für IoT

### Questions:

* wie wurden die lego mindstorm roboter programmiert? OS? verbindung zu arduino?
* welche hardware wurde dafür verwendet? hardware-development?
* node red vs eclipse
* wie viele leute haben an diesem projekt gearbeitet? 

-----

# Write down features you would like to see in an IoT Framework

* Betriebssystem und Hardware übergreifend
* übersichtliches management (UI)
* gutes Hardware-management
* einfache handhabung 
* guter support (tutorial, hilfestellungen, how-to,...)
* ressourcen schonend (z.B: hardwarevorraussetzungen für pc)

### open discussion

* Mass deployment option
* good documentation, tutorials and videos
* visualization of network of devices
* open-source
* easy to integrate with other services
* security and privacy
* self-hostable (not dependent on the cloud)
* good debugging features
* easily teachable
* affordable (hardware and software)
* scalable
* testable
* MQTT support
* offline functionality
* system maintenance overview
* debug guide

### UlnoIOT -> Framework and Ecosystem for IoT

* Check covered features:

  * Betriebssystem und Hardware übergreifend -> ja
  * übersichtliches management (UI) -> ja (ulnoIoT local web portal)
  * gutes Hardware-management -> ja (node red)
  * einfache handhabung -> ja, sehr schnell umgesetzt
  * guter support (tutorial, hilfestellungen, how-to,...) -> https://github.com/ulno/ulnoiot/blob/master/README.rst Es gibt ein GIT repository mit allen nötigen infos; zusätzlich noch ein forum https://riot.im/app/#/room/#ulnoiot:matrix.org (hier kann man alle möglichen fragen an leute stellen die sich ebenfalls mit UlnoIoT beschäftigen)
  * ressourcen schonend (z.B: hardwarevorraussetzungen für pc) -> ja, ich denke schon




