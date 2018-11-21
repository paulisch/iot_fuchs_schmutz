# Scaling and testing
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
* Communication, community, consortiums, SLAs, support processes

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

# IoT Frameworks
* Find 8
* Title
* Publicly available?
* good documentation? -> tutorials, videos?
* Which devices/OS are supported?
* Mass deployment
* Security?


### Eclipse Kura
* Info:

  * Kura aims at offering a Java/OSGi-based container for M2M applications running in service gateways. machine-to-machine projects
  * Das erweiterbare Open Source Java / OSGi (Open Services Gateway initiatives) IoT Edge Framework
  * Kura bietet API-Zugriff auf die Hardwareschnittstellen von IoT-Gateways (serielle Schnittstellen, GPS, Watchdog, GPIOs, I2C usw.).
  * Easy to use API layer for IoT application to communicate with a remote server.
  * Eclipse Kura requires at least Java 8 and OSGi R6.

* Publicly available?
  * ja -> open source
  * https://github.com/eclipse/kura/blob/KURA_4.0.0_RELEASE/README.md

* good documentation?
  * sehr gute Dokumentation/Tutorials -> https://eclipse.github.io/kura/ -> https://wiki.eclipse.org/Kura -> zusätzlich viele videos

* Which devices/OS
  * Raspberry Pi Quick Start Guide
  * BeagleBone Quick Start Guide
  * Custom Target Hardware Quick Start Guide
  * The Eclipse Installer based setup works for the main used platforms like Linux, Mac Os and Windows.
  * Currently, the emulator web ui is not properly working on Windows -> The full build of Kura is only supported for Linux and Mac Os based systems.

* Mass deployment
  * remotely manage a device running Kura through the Everyware Cloud Console
  * a new application embedded in a deployment package can be deployed and configured using Everyware Cloud Console.

* Security?
  * Package org.eclipse.kura.security
  * Provides security related APIs

### Node-RED
- from IBM
- opensource
- operating systems: raspberry pi, Beaglebone black(all based on JS)
- good documentation(https://nodered.org/docs/)
- mass deployment: restAPI
- per default not secure, but you can add some extra security

### Flogo
* Flogo is an acronym of "flying" and "logos" and is an open source ecosystem for event-driven apps. Flogo has extremely lightweight edge applications which can make a big difference if your hardware and bandwidth is bogged down by queries. Flogo is powered by Golang and is also a visual tool. It uses a BSD-style license. Flogo is a zero dependency model allowing to share leightweight binaries on devices.
* Flogo provides a lot of documentation on their website. Because it is a step-by-step guide it is easy to understand. Also labs and tutorials on the website. In addition tutorials can be found on youtube.
* Flogo can run almost anywhere. From the largest clouds to the smallest of devices. It supports the operating systems Windows, MacOS and Linux.
* It allows for an air gap (a network security measure) to ensure that a secure computer network is physically isolated from unsecured networks.
* easy installation and integration workflow
* color-coded visual designer equally suited to specialists and non-specialists
* flows are shareable as JSON files or strings
* also runs on a wide range of edge, container, cloud or premise platforms

### Alljoyn
- OpenSource
- Peer-To-Peer connection
- Good documentation for Microsoft with many examples and setup(https://docs.microsoft.com/en-us/windows/iot-core/archive/alljoyn)
- Operating systems: Linux, Windows, iOS (also smartphones,.. as nodes)
- the amout of devices depends on network configurations
- complex security model for application to application communication
	
### OpenHAB
* Title
  * open Home Automation Bus

* Source Availability, Reference Implementation
  * Open-Source
  * Libraries for multiple operating systems

* Documentation
  * Several tutorials and examples
  * Extensive documentation
  * Also aimed at beginners.

* Supported Devices/Operating Systems (as Nodes)
  * 200 different technologies and systems and thousands of devices!

* Mass Deployment/Maintenance
  * openhab cloud connector for remote access 
  * As the founder of OpenHAB wrote in a post, OpenHAB is aimed at makers. Not really for a mass market. Therefore, I did not really find solutions for mass deployment or maintenance.

* Security/Privacy
  * SSH or HTTPS depending on how it is accessed.
	
### AWS IoT
* **Title:** Amazon Webservices IoT
* **Availability:** Not a free Framework. Different categories for pricing.
* *Connectivity:* Priced at $0.08 per million of minutes of connection.($0.042 per year of connection for 24/7 connectivity)
* *Messaging:* starts at $1 per million messages up to $0.7 depending on volume. A message counts as 5KB of data.
* *Rules Engine:* $0.15 per million rules triggered and $0.15 per million actions triggered. One Rule can process a 5KB message (8KB data counted as 2 rules)
* *Device Shadown and Registry Updates:* number of device shadow or registry data modifications. $1.25 per million operations.
* **Documentation:**
* An extensive documentation is available at their website. They also have a youtube channel with tutorials and relevant information.
* **Device/OS support:**
* Hundreds of common used devices/OSs as Android, iOS, etc.
* **Mass Deployment/maintenance:**
* Easy fleet deployment support with AWS IoT Device Management Serivces
* **Security:**
* Support for many TLS-Cipher Suites. MiM should not be possible as long AWS IoT's private key is safe.







