# Session #01
### 15.11.2018

#### Introduction
Today was the first day of the new course Internet Of Things (IOT). I was already looking forward to a new subject after weeks of Secure Mobile Systems (SMS). Also, I was curious about what the contents of IOT will be.

#### Lecture #01
At first, I was very confused about the structure of the lecture. Different from the rest of our courses all resources were located in places other than moodle. Secondly, the syllabus was quite unusual - especially some grading factors:
* lecture records
* portfolio

I have to admit, I was very unhappy in the first lecture, confused and I didn't know what creating a portfolio means. In my opinion, one could structure the explanation of what the exact tasks for us students consists of more clearer.
An exhilarating fact however was, that there is no exam. So after some minutes of thinking (and asking questions to you) I realized that the system is actually pretty good, but just a bit new to me.
I myself am not a designer, however I think slides could need some fancy improvements overall, but I am good with simple structured and non-overly-colorful resources.
Also, I have to mention, that (altough it was confusing and hard to understand at first) you are friendly, speak clearly and are ready to help anytime, which is important for me.
Furthermore, it is a good idea to keep the students awake during lecture with some questions to work on. I found the first lecture's content about IOT interesting. Besides the questions, I found it especially interesting, what the video showed about IOT and what dimension to expect from IOT.
To sum it up, I was quite overwhelmed in the first place, however as things got clearer to me, I now like the concept of the course.


PS: You can find the lecture notes [here](../lecturenotes/lecture01.md).

#### Exercise #01
##### Lab Outline
* Setup raspberry pi iot gateway based on ulnoiot image
* [Setup key and ssh into it]
* Learn to blink on ESP8266 with Arduino IDE
* Login to wifi of pi from ESP8266
* Trigger blink remotely.
* Work in pairs.
* Document everything also (especially) failures → in portfolio git folder
* Optional: make button work remotely (on second ESP8266), explore platformio
---
I work together with Boris Fuchs. As he already has experience with Raspberry Pi, he worked on setting up the Raspberry with the provided image.
While Boris was working on the Raspberry my task was to deal with the ESP8266. Quickly Boris and me found all necessary components to program and connect.
Setting up the Arduino IDE was quite easy. I 've never worked with it before. To work with the ESP8266 you have to do some extra steps to get the program to the ESP - downloading the right configuration (see exercise notes). It took me a while to select the right board (which was LOLIN(WEMOS) D1 R2 & mini). As there are example programs (and google/stackoverflow) after the I quickly found out how to write a LED blinking program (see [here](https://github.com/paulisch/iot_fuchs_schmutz/blob/master/exercises/ex01/esp8266_blink_led/esp8266_blink_led.ino)).
Also, by combining an internet source with a WiFi example in Arduino IDE I completed setting up a web page with buttons to turn on/off the LED in a few minutes. A tricky part was to find out the IP address of the ESP. That was in fact clear afterwards, as it was included in the example - to print it out to the Serial printer and show it with the Arduino Serial monitor. You can find the LED webserver program [here](../../exercises/ex01/esp8266_wifi_led/esp8266_wifi_led.ino).

PS: You can find the exercise notes [here](../../exercises/ex01/fuchs_schmutz_ex01.md).
* * *





# Session #02
### 16.11.2018

#### Lecture #02
Today I was more comfortable from the beginning. As expected we had to do some more team work. Somehow I am not too excited about group work in the lecture. However, as soon as things get going, I feel better and follow the "flow" of the class.
Today's first exercise was finding out about RS232 (1), I2C (2), SPI (3), Onewire(4). I had the topic "Onewire" together with Markus Seiberl, Valentin and Stefan. After that we compared results with the other groups, which I spoke about with Boris, Anika and Simon. At first I thought it is not efficient to split in groups but afterwards I thought we found quite much information.
Furthermore, we learned about "(user) stories" describing business ideas relying on IOT. It is actually quite hard to find such stories. However, I think it is very useful to form stories as you can derive class models for the later software model.
Part of our tasks was to create a story which you can find in the lecture notes. It was really interesting discussing and finding ideas!

PS: You can find the lecture notes [here](../lecturenotes/lecture02.md).

#### Exercise #02
##### Lab Outline
* Finish tasks from Lab 1 (especially remote trigger)
* Create Button Device, which triggers via HTTP Post to IFTTT WebHook → then triggers (a) report to phone or (b) tweet (emergency remote, tweet button, shopping button)
* Figure out how to use I2C 2 lines display
  * optional: use I2C display to show message when ifttt event triggered
* Get remote data from DS11 onewire temperature device
* HW:
  * Finish Lab work
  * In team: come up/research 2 potentially useful IoT scenarios where parts could be commercialized → tell a story where this is used successfully → needs to show up in portfolio (which I will review first time next week)
---

Regarding **homework**: You can find the 2 ideas in my lecture notes. The first one of them was done in a group in the lecture. The second one counts as idea 1 of the 2 ideas (which was made by me) I do with Boris. So check Boris' notes for the 2. idea.

Today's exercise was a bit more advanced than yesterday and it sets up on the findings of the last exercise. As I am more the software type of person, I mostly dealt with writing software in the Arduino IDE making the buttons, WiFi etc. work. As Boris is good at dealing with the hardware stuff we made a good team today. He managed to put the components and cables into the right place and communicated the relevant ports for me. I then used the ports in the software to run the system as a whole. Sometimes it was a bit tricky to find the right library and manage to finally get the code to work but after some trying and cooperating with Boris everything was up and running smoothly.
I liked today's exercise, although I was really kind of stressed as my head was full from concentrating the whole time.

PS: You can find the exercise notes [here](../../exercises/ex01/fuchs_schmutz_ex02.md).
* * *





# Session #03
### 20.11.2018

#### Lecture #03
Lecture today was mainly doing research in teams. I adapted to the different (compared to ordinary teacher-centred teaching), however it is still something new to me. Today's lecture still didn't quit blow my mind, as IoT (by now) is still very theoretical for me.
The lecture's topic was protocols for IoT. I don't disagree with the idea of the students researching certain topics, although I would like a bit more crucial facts covered in the slides. The reason is that many students may find different sources which could possibly be unreliable and also sharing the research with others by speaking and listening can be error-prone as well. Therefore, I would appreciate "one true source" of the professor including essential facts and practical examples to use for the exercise. As it is now, I find myself always researching again and again in the exercise because I still don't know what certain tools are or how to use them which could be covered in the slides.
Nevertheless, I found the topic of protocols quite interesting and useful. I already knew some of them, like JSON and XML. However, CBOR was highly interesting to me as it is a binary format based on JSON which can be of interest for me in future projects.

PS: You can find the lecture notes [here](../lecturenotes/lecture03.md).

#### Exercise #03
##### Lab Outline
* COAP
 * Install simple COAP Arduino library example (use esp32 example, adjust led, and use ESP8266Wifi.h)
 * Explore and switch with Copper4Cr (Chrome developer extension – or old firefox <= 55 with copper extension)
 * Optional: use libcoap binary tools
* MQTT
 * Install mqtt.fx on your laptop
 * Send and receive with mqtt.fx messages to mosquitto (mqtt server) running on pi
 * Build simulators (use your peferred language and mqtt library or consider ulnoiot's integriot in python)
  * Temperature sensor simulator
   * Start temp, end temp, time to linearly rise
  * Relay switch (like AC) simulator
   * Showing on and off
  * Integrator: switch at specific temperature (can be hardcoded)
---
First of all, COAP and MQTT are entirely new to me. Today we were a bit slow at doing the exercise. We just managed to do the first part "COAP". The Arduino code was easy to set up. The way "talking" to the ESP8266 was a bit buggy. Boris tried different browsers and finally Chrome worked after several (same) tries. In the end, it was not difficult at all but somehow always when doing things for the first time it requires some effort.
Also, we started the secon part which is trying MQTT with the raspberry pi. The simulator is not yet implemented. As things work so far I think we will make good progress next time.
I liked the first insight into IoT protocols. It feels more like doing business-related standardized tasks which are of more practical use than exercises before and also allow greater opportunities in shorter programs. In my opinion that is the goal of the course anyway - to start from zero and slowly develop to finally be able to do more complex projects while understanding everything from the ground up.

PS: You can find the exercise notes [here](../../exercises/ex01/fuchs_schmutz_ex03.md).
PPS: I am definitely sure, that the simulation task of MQTT will be great for me as I see myself as the software developing type.

# Session #04
### 21.11.2018

#### Lecture #04
TODO

PS: You can find the lecture notes [here](../lecturenotes/lecture04.md).

#### Exercise #04
##### Lab Outline
TODO
---


PS: You can find the exercise notes [here](../../exercises/ex01/fuchs_schmutz_ex04.md).