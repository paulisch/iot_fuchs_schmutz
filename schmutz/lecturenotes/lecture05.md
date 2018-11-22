# Lecture #05
### 22.11.2018

#### How can one toggle in Node-RED?

Create a function node to store the state in the context:

~~~javascript
if (msg.payload === "released") {
    if (context.state === "on") {
        context.state = "off";
    } else {
        context.state = "on";
    }
    msg.payload = context.state;
}
return msg;
~~~



In Node-RED there is a mechanism to detect changes, to prevent checking that in JavaScript (because the "released" Event is coming in often). Solution is the **rbe node**.



There also is an **UI** in Node-RED.

Add a **switch node** to the graph. Create a GUI with "On/Off" by editing the switch node.

Create new tab in dashboard. In the tab add a group. Move the switch node from the admin group into the new created node.

---

#### SDM4IoT

*Story Driven Modeling als agile Vorgehensmethode für das Internet der Dinge*

**Questions:**

* How is code generated out of graphical stories?
* Did you build the robots yourself? How? Did you consider using Lego Mindstorms?

---

#### Write down features you would like to see in an IoT Framework

* Device management (status, battery state, voltage, errors, defect devices)
* Updating multiple devices at once
* Being able to run low-level hardware
* Graphical assistance but the possibility to write code



<!--Discussion-->

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



#### Features UlnoIoT and Live Demo



