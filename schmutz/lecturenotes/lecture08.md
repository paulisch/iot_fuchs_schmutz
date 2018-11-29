

# Lecture #08

### 29.11.2018

#### IoT is Here: What Could Break?

* What did already break?
  * DoS attack at the DNS provider Dyn => DoS at home systems: believed to have been executed through a botnet consisting of a large number of Internet-connected devices—such as printers, IP cameras, residential gateways and baby monitors—that had been infected with the Mirai malware
  * Many developers don't know how to properly secure solutions and don't spend time on security
  * Smart TV, security cameras
* What will break?
  * Many developers don't know how to properly secure solutions and don't spend time on security
* Why?



#### Google threats, reflect on the threats (still valid?), research more threats and countermeasures

* Companies
  * updates are not reliable
  * assume new devices are put in the same network at home as other devices => threat of trojans
  * is still a problem nowadays, for example: there are still old Android devices
* Changing passwords regularly is insecure
  * still valid
* DoS attack
  * still valid
* Man in the middle attack
  * old problem, but may still be relevant
  * need a trusted third party with certificates
  * should do certificate validation
  * is still a problem nowadays
* Deauth Attack
  * a device
  * Most WiFi devices are safe nowadays, but in hospitals it may still be a harm
  * illegal
* Krack Attack
  * most WAP networks insecure
  * can bring them in a mode to allows you to read the key and read everything in clear text
  * solution: new WiFi standard, VPN
  * still a problem, however new devices are safe
  * all devices of the network have to be patched to avoid the issue
* Cyber Abuse
  * causing damage with digital information to harm others
  * for example, when family breaks up and the "technical guy" is kicked out he can do damage

#### Research: Fixable?

* Come up with 5 action points that when addressed will fix the IoBT
  * owasp.org => tips for IoT security
  * use encryption always! also disk encryption
  * upgrade to newest devices and security standards and do not support insecure algorithms/devices
  * use certificate validation
  * counter measurements against DoS attacks
  * for things only used for home and not over the internet, use another router without internet connection and a modern encryption standard like WPA3; OR using cables
  * always choose very long distinct passwords

* 2 Arguments for continuing to use and build the IoT
  * it's fun
  * can build cool gadgets at home



