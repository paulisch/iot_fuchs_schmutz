# Lecture #04
### 21.11.2018

## Scaling and testing
### What will be issues scaling (system size, number of systems, management)?
* network utilization
* device identification
* finding defect devices => watchdog mechanism; heartbeat, central monitor
* debugging
* updating every single device (bulk update): OTA, regarding to configuration
* Simulators for specific cases
* Configuration management --> what do you want to manage
* Scale up scenarios and put more devices in there --> Detect problems without having tested it with many devices
* Simulators allow the simulation of a multitude of devices
* Attention: Simulators are only approximation of real world
* Communication, community consortiums, SLAs, support processes
* Framework

### How can we do testing?
* automated testing
* simulators

### What role will play
* Simulator(-component)s
 * for Testing
 * independent implementation of components
* MQTT
 * observer pattern still usable for many devices
 * no polling needed
* Stories?
 * better specification for functionality, testing, etc.
 * used for story driven development

## IoT Frameworks - How can we develop and manage software faster for IoT
* at least 6
* title
* publicly available/open source/reference implementation
* how good and plentiful is documentation (good examples, videos, easy to understand)
* which devices/OS supported (also as nodes)
* mass deployment/maintenance (managing multiple nodes at once)
* security/privacy (safe against man in the middle attacks?)
### Eclipse Kura
-

### Node-RED (me)
* visual wiring tool for IoT
* publicly available: yes
* browser-based flow-editing built on Node.js
* event-driven, non-blocking model
* suitable for low-cost hardware such as the Raspberry Pi, Arduinos as well as the cloud
* Documentation:
  * Good documentation with "Getting started" guide, well understandable, tutorials on youtube
* Wide range of supported devices and platforms:
  * as it is browser-based and built on Node.js --> most desktop systems (Windows, Mac, Linux)
  * Raspberry Pi (Raspbian, Debian, Ubuntu, Diet-Pi, ...)
  * BeagleBone Boards
  * Interaction with Arduino via protocols
  * Android
  * Cloud:
    * IBM Cloud
    * SenseTecnic FRES
    * Amazon Web Services
    * Microsoft Azure
* Managing multiple nodes:
  * possible
* Supports MQTT and CoAP
* Security:
  * by default editor is not secured (accessible by IP address)
  * possibility of username/password/OAuth based authentication
  * routes exposed by the HTTP In nodes can be secured using basic authentication

### Flogo
-

### Alljoyn (maybe also Iotivity)
-

### OpenHAB
-

### AWS IoT
-

