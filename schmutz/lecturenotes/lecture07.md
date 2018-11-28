

# Lecture #07

### 28.11.2018

#### ulnoIoT System in Folders

Which topics need to be called to

* switch on the coffee machine
  * kitchen/coffee-machine/switch/set        on
* set all lights in living room to blue
  * living_room/leds1/rgb/set          blue
  * living_room/leds2/rgb/set          blue
* turn the main power off
  * main/switch/set          off



What is the general rule for forming topics in UlnoIT?

Start at folder of system.conf

Names of folders/Name of node/Device



When does it make sense to change something in system.conf?

To connect to another WiFi

If UlnoIoT does not run on the gateway



#### Nodes

##### What needs to/can go into node.conf?

The type of the board, like that:

board="Wemos D1 Mini"



##### How do config.txt, etc/ulnoiot.conf, system.conf and node.conf influence environment variables for compiling?

* ulnoiot.conf
  * (global) Access point configuration
  * (global) MQTT configuration
  * => sets where to connect in the default WiFi connection code and MQTT connection code
* system.conf
  * for projects
  * to change access point or MQTT configuration for single projects
  * carries over to node.conf
  * All variables can be changed in the sub-configurations! See config.txt/config.bash
  * => sets where to connect in the project specific WiFi connection code and MQTT connection code
* node.conf
  * Sets the board
  * Changes the used headers for connecting
* config.txt
  * Change boot config?
  * Global configuration



ulnoiot.conf and config.txt are read first (after boot?)

for projects, it reads the config.txt again and the node.conf

can use the same variables everywhere

order: ulnoiot.conf, config.txt, system.conf, node.conf



#### UlnoIoT recap

Check covered features (and check off the personal covered features)

- My requested features were:
  - Device management (status, battery state, voltage, errors, defect devices)
    - Covered by ulnoIoT: no?
  - Updating multiple devices at once
    - Covered by ulnoIoT: no idea?
  - Being able to run low-level hardware
    - Covered by ulnoIoT: just raspberry, so not really as raspberry is still quite powerful
  - Graphical assistance but the possibility to write code
    - Covered by ulnoIoT: partly graphical, it is just a folder structure



#### PlatformIO

An open source ecosystem for IoT development

Cross-platform IDE and unified debugger

Remote unit testing and firmware updates

C/C++

More an IDE than a IoT framework

Debugging is commercial part, would be a simple debugging mechanism, however it costs money

Can only debug one device

Device support: for multiple platforms at the same time

Good library support, auto update

Active forum

Testing with Arduino, if it becomes serious => use PlatformIO



#### Compilation

##### What are the steps UlnoIoT executes, when you call deploy in a node-folder (or room or system folder)?

Prepares compile cache

Links all source code together

Takes source code from lib/node_types/NODE_TYPE/src (NODE_TYPE depends on the chosen node, for example esp8266)

Links it always to the same cache directory

##### Why can only 1 deploy process run at once?

Because it uses the same compile cache

##### What benefit is this restriction?

Problem, when having a compile cache for every single node:

Initial compile on raspberry takes like 10min, does is not necessary for every single node by using just one compile cache directory

One cache directory --> enhance speed

Saves a lot of space



#### Device

* What are the common functions, devices support?
  * Send MQTT messages
  * measure values, poll measures
  * check for changes
  * add subdevices
* What is the “fluent interface”?
  * a method for designing object oriented APIS based extensively on method chaining
  * goal is making the readability of the source code close to source coe of ordinary writen prose
  * creating a domain-specific language
  * example
~~~
mock.expects(once()).method("m").with( or(stringContains("hello"),
                                          stringContains("howdy")) );
~~~

* Which functions need to be overwritten?
  * virtual void measure_init() {};
  * virtual void start() { _started = true; }
  * virtual bool measure() { return true; }
* In which order and when are they overwritten
  * measure_init, start, measure
* Functions called?
* What is a Subdevice (look at output for example)?
  * A device has subdevices
  * kind of a sub topic
  * for example in the output.cpp:
    * add_subdevice("set")
  * => needed for construction of MQTT topic

#### Driver

* Analyze and understand the analog driver (header cpp), note down remarkable features.
* Analyze and understand I2C_Device
  * What functionality does it add?
* Analyze the new VL53L0X driver
  * How could you implement a driver for the BMP180 based
    on this?
  * Write a small strategy

