# Raspberry PI Kamera mit MotionEyeOS

* laden und einrichten von MotionEyeOS
  * Download Image -> https://github.com/ccrisan/motioneyeos/releases
  * image auf sd karte -> mit etcher
* WLAN verbindung vorbereiten -> https://github.com/ccrisan/motioneyeos/wiki/Wifi-Preconfiguration
  * erstellen von wpa_supplicant.conf
  * einfügen des code:
    
	country=AT
        update_config=1
        ctrl_interface=/var/run/wpa_supplicant
        
        network={
            scan_ssid=1
            ssid="MyWiFiSSID"
            psk="S3cr3tp@$$w0rc|"
        }
  * sd karte in raspberry -> starten des Raspberry
  * finde raspbery nicht -> ändern der network einstellungen auf: network: scan_ssid=1; ssid="dirtyfox"; psk="S3cr3tp@$$w0rc|"
  * finde IP nicht (git bash) -> versuche jetzt über externen bildschirm einzusteiigen
  * geht noch immer nicht, bildschirm bleibt schwarz
  * image wird neu aufgespeilt auf sd karte
  * jetzt zeigt der raspberry etwas auf dem bildschirm an, er kann sich nicht mit dem WLAN verbinden (no Linkt)
  * versuche nochmal wpa_supplicant.conf zu bearbeiten -> geht nicht, er verbindet sich nicht mit unserem netzwerk (dirtyfox)
  
  * tausch des raspberry pi 1 auf einen raspberry pi 3 -> da dieser ein wlan modul integriert hat
  * hat jetzt funktioniert -> motionOS läuft unter 192.168.12.20
  
  * versuche mit node red zu verbinden -> laut den entwicklern von MotionEyeOS ist dies nicht unterstützt, man musste dies selber im sourcecode implementieren
  * versuche push-benachrichtigung zu senden 
  
 
 