# Exercise #06
### 27.11.2018

##### Lab Outline
* Rebuild project 1 with UlnoIoT (completely in hardware, when available)
  * If device not supported, talk with me for replacement
  * Do at least one adoption process and document it

---

## Aufgaben Paul



## Aufgaben Boris



## Aufgaben gemeinsam

### First IoT Nodes

* einstieg in das ulnoIoT local web portal -> dann ins home-directory
* ulnoiot/lib/system_template -> kopieren -> einfügen in ulnoIoT/projects -> system_template umbenannt in savepihomesecurity -> unser projekt verzeichniss
* node_template -> node.conf -> bearbeiten -> board="esp8266"
* initialize serial -> geht nicht, vergessen node_template umzubenennen -> neuen node ordner (security_devices) angelegt
* in security_devices -> initialize serial -> Error: Please specify `upload_port` for environment or use global `--upload-port` option.
* in security_devices -> änderung von board="esp8266" auf board="Wemos D1 Mini"
* initialize serial -> wieder ein fehler: failed reading byte
* alle komponenten von esp8266 abgesteckt (laser, photoresistor, photointerrupter); esp8266 neu mit raspberry verbunden
* erneut initialize serial -> funktioniert jetzt

# Security Devices (Laser, Photointerrupter, Photoresistor)

### laser emitter ansteuern
* -> setup.cpp -> eingefügt: output("laser", D5, "on", "off").set("on"); -> deploy -> Error: expected initializer before string constant -> uhelp output -> example: led(yellow, D7, "turn on", "turn off") -> 1. Argument darf kein String sein
* neuer versuch: output(laser, D5, "on", "off").set("on"); -> Error: Sending invitation to security-devices.local -> Authenticating...FAIL -> 06:35:39 [ERROR]: ERR: ERROR[11]: Invalid bootstra -> *** [upload] Error 1
* esp8266 ausgesteckt und wieder eingesteckt -> deploy -> hat funktioniert
* Laser leuchtet nicht -> Laser ist invertiert (on und off vertauscht) -> Anpassung setup.cpp: output(laser, D5, "off", "on").set("on"); -> deploy
* laser leuchtet

### Photoresistor ansteuern
* uhelp analog -> beispiel: analog("water").with_precision(10).with_threshold(100, "wet", "dry");
* Hinzufügen zu setup.cpp: analog("alarm").with_precision(10).with_threshold(150, "1", "0");
* MQTT fx -> subscribe: savepihomesecurity/security_devices/alarm
* deploy -> Error: src/setup.h:5:1: note: in expansion of macro 'analog' -> analog("alarm").with_precision(10).with_threshold(150, "1", "0"); -> src/setup.h:5:8: error: expected initializer before string constant
* Example water-sensor angesehen -> dort wird a0 festgelegt (analog(a0))
* versuch: analog(a0) -> hat funktioniert -> problem dabei ist, dass wir nun nicht wissen wie wir das über mqtt ansteuern? -> haben kollegen gefragt -> anscheinend ist a0 das topic -> analog(alarm).with_precision(10).with_threshold(150, "1", "0");
* versuch mit laser auf photoresistor zu leuchten -> geht nicht -> falsches mqtt topic -> neu: security_devices/alarm (MQTT topic für den Photoresistor) -> funktioniert jetzt (schickt 0 wen <150 und 1 wenn >150) 

### Photointerrupter
* ulnoIoT update (ulnoiot upgrade)
* input(alarm, D2, "1", "0"); -> setup.cpp -> deplo -> console: disconnected -> raspberry abgeschmiert -> werden ein anderes netzteil verwenden
* fehler: internal compiler error: Segmentation faultint _EXFUN(renameat, (int, const char , int, const char ));
* nochmal deploy -> selber fehler
* setup.cpp -> auskommentieren von photointerrupter -> nochmals deploy -> geht nicht (wahrscheinlich wegen update, da das selbe gestern noch funktioniert hat)
* nochmals ulnoIoT upgrade 
* deploy -> geht nicht mehr -> build error ->  internal compiler error: Segmentation fault -> Raspberry extrem heiß 

* Tausch raspberry -> neuer versuch -> compile und deploy haben funktioniert
* Photointerrupter funktioniert, leider funktioniert jetzt der Photoresistor nicht mehr -> wieder compile error
* wieder fehler -> denken dass hier etwas mit dem "analog()" nicht passt
* ändern analog(alarm) in analog (a0)

setup.cpp:

//Laser
output(laser, D5, "off", "on").set("on");

//Photoresistor
analog(a0).with_precision(10).with_threshold(150, "1", "0");

//Photointerrupter
input(alarm, D2, "0", "1");

* Mit dem Code werden 2 Topics erzeugt -> security_devices/a0 -> security_devices/alarm

# Security Monitor: Button, LED, Buzzer

* node.conf wieder auf wemos d1 mini 
* initialize serial -> hat funktioniert
* deploy -> Trouble compiling or uploading new firmware, check errors. -> ERROR[11]: Invalid bootstra
* esp8266 jetzt bei laptop angeschlossen -> deploy -> [ERROR]: Host security-monitor.local Not Found
* nochmal deploy am laptop -> deploy successfully done

### Button

* input(systemstatus, D2, "1", "0"); -> deploy -> funktioniert

### LED (RED, GREEN)

* output(ledred, D0, "1", "0");
* output(ledgreen, D3, "1", "0");
* -> deploy -> funktioniert

### Buzzer

* output(speaker, D5, "1", "0");  -> deploy -> 

# Node Red
* der rest wird mit node red abgebildet (siehe Abbildung)

![noered](./img/node_red.png)






