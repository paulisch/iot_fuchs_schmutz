# IobT (internet of broken things)

### What could break?

* cybercriminal
* many IoT devices are not designed to be secured or updated after deployment
* alles wird vernetzt, auch das haus....kann dann gehackt werden
* unsichere �berwachungskameras -> veralterte software; keine updates
* viren verbreiten sich schneller, da alles miteinander kommuniziert

### causes for breakage

* firmen halten nicht alle ihre devices up to date
* vieles in einem smart home h�ngt an dem selben netzwerk, wenn eines gehackt wird -> alles unsicher
* Wifi networks sind sehr unsicher, standart WPA 2 von 2009
* Zombie webcams -> default password 

deauth attack -> schmei�t alle ger�te die nicht 802.11w standart unterst�tzen aus dem wifi netz; falls ein alter router -> dann werden alle ger�te rausgeschmi�en
krack attack -> www.krackattack.com

### Research Exercise: Fixable?

* https://www.owasp.org/index.php/OWASP_Internet_of_Things_Project
* Daten nochmals verschl�sseln, nicht nur beim senden sondern auch im ruhenden zustand
* accsess point f�r smart home der nicht mit dem internet verbunden ist; oder alles mit kabel machen
* guten wifi standart verwenden (wpa3)
* WPA3 - Die Antwort auf die "Krack"-Sicherheitsl�cke -> seit juni
* etwas mehr geld in security investieren -> neuesten ger�te kaufen (smartphone, neuesandroid)
* Sichere, einzigartige und lange Passw�rter sind und bleiben der beste Schutz. 
* technischer fortschritt, viele sachen erleichtern uns das leben
* certificate validation
* extra firewall oder security system zwischen router und internetanschluss (zB. Raspberry Pi als Firewall einrichten)
* am beispiel krankenhaus -> das netzwerk muss geschlossen bleiben -> am besten alles mit kabel -> wichtige ger�te (MRT, CT) sollten nicht im gleichen netzwerk h�ngen wie ein pc mit dem man internet surft
* einen plan B haben, was paassiert falls das system angegriffen wurde




