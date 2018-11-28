# System in Folders

With neighbor (5min):
* which topic needs to be called with what to
  * switch on the coffee machine?
    * kitchen/coffee-machine/switch/set        on
  * set all lights in living room to blue?
    * living_room/leds1/rgb/set          blue
    * living_room/leds2/rgb/set          blue
  * turn the main power off?
    * main/switch/set          off
* what is the general rule for forming topics in UlnoIoT?
  * Start at folder of system.conf
  * Names of folders/Name of node/Device
* When does it make sense to change something in system.conf?
  * To connect to another WiFi
  * If UlnoIoT does not run on the gateway

# Nodes

With neighbor (10min)
### What needs to/can go into node.conf?
* set board typ
* 
### How do config.txt, etc/ulnoiot.conf, system.conf, and node.conf influence environment variables for compiling?
* ulnoiot.conf
  * (global) Access point config.
  * (global) MQTT config.
  * 
* system.conf
  * für projekte
  * änderung des access points oder der MQTT einstellungen für einzelne projekte
  * 
* node.conf
  * set board typ
  * global config.
* config.txt
  * änderung der board config.
  * global config.


# PlatformIO

PlatformIO is an open source ecosystem for IoT development
* Cross-platform IDE and unified debugger. Remote unit testing and firmware updates
* it supports: 29 Platforms, 17 Frameworks, 566 Boards, 179 Examples, 5,897 Libraries
* es ist kein IoT framework -> es ist "nur" eine erweiterung
* zum starten -> arduino ide; später dann -> platformIO

# Compilation

With neighbor (10min):

* What are the steps UlnoIoT executes, when you call deploy in a node-folder (or room or system folder)?
  * bereitet den compile cache vor
  * links all source code together
  * woher nimmt es den source code zum erstellen eines compile cache -> lib/node_types/NODE_TYPE/src
  * links it always to the same cache directory  
  * create specific config file (overwrite)

  * deploy must be called from a node directory (or one of its parent system directories) and reads its configuration from there.
  * It rebuilds firmwares for the affected nodes and remotely flashes the respected nodes.

* Why can only one deploy run at once?
  * it use the same compile cache, so it overwrites it

* What benefit is this restriction?
  * zeitfaktor -> würde sonst zu lange dauern (zB 5 nodes gleichzeitig zu compilieren)
  * dauert sehr lange auf raspberry
  * es würde mehr speicher brauchen

# Device

With neighbor (15min)
* What are the common functions, devices support?
  * send MQTT msg. 
  * measures values, poll measures
  * check for changes
  * add subdevices
* What is the “fluent interface”?
  *  ist ein Konzept für Programmierschnittstellen in der Software-Entwicklung, bei dessen Befolgung man beinahe in Form von Sätzen natürlicher Sprache programmieren kann. Der danach verfasste Programmcode ist gut lesbar und erleichtert das Verständnis des Programms.
* Which functions need to be overwritten?
  * virtual void measure_init() {};
  * virtual void start() {_started=true;}
  * virtual bool measure{} {retrun true}
  * ....alle methoden mit virtual
* In which order and when are the overwritten functions called?
  * measure_init, start, measure 
* What is a Subdevice (look at output for example)?
  * a device has subdevices
  * kind of sub topic
  * output.h -> subdevice -> add a callback

# How to write a driver


### Analyze and understand the analog driver (header and cpp), note down remarkable features.

* for example in Output, it created the subdevice out and adds to the construction of the topic

* it adds the functions start, measure, with\_threshold, with\_precision, read\_float, read\_int, write\_float, write\_int


### Analyze and understand I2C_Device

* What functionality does it add?
 
  - start, measure, measure\_init, clear\_bus init\_i2c, i2c\_start
 
  - to initialize and read devices connected with I2C


### Analyze the new VL53L0X driver

* Distance sensor library (Time-of-Flight Distance Sensor)


* Register offsets are defined in the header file

* Functions for writing/reading the registers

* setAddress -> Can set new adress for the device


* Functions for changing signal rate, setting timeouts





