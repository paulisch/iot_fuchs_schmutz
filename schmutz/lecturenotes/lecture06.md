

# Lecture #06

### 27.11.2018

#### Sensing/Acting

My topic: 4, WS2812 RGB Strip

Source: https://randomnerdtutorials.com/guide-for-ws2812b-addressable-rgb-led-strip-with-arduino/

how to wire to GPIO/analog port(s)?

what to measure/trigger/thresholds?



can control color and brightness of all LEDs individually

IC built right into the LED

communication via a one-wire interface

can control lots of LEDs using just one digital pin

can be cut to any length (in every cut place there are connectors)

requires 5V

Need "FastLED" library

![led strip](https://i2.wp.com/randomnerdtutorials.com/wp-content/uploads/2016/09/LED-strip.jpg?w=700&ssl=1)



Example schematics:

![arduino](https://i0.wp.com/randomnerdtutorials.com/wp-content/uploads/2016/09/WS2812B-with-Arduino_bb.png?w=700&ssl=1)

In this example, 14 LEDs are used. If you use more LEDs you need an external (stronger) power source and connect ground to the Arduino

#### UlnoIoT Live Demo

* Check covered features (and check off the personal covered features)
  * My requested features were:
    * Device management (status, battery state, voltage, errors, defect devices)
      * Covered by ulnoIoT: ?
    * Updating multiple devices at once
      - Covered by ulnoIoT: ?
    * Being able to run low-level hardware
      - Covered by ulnoIoT: ?
    * Graphical assistance but the possibility to write code
      - Covered by ulnoIoT: ?
* Write down and ask questions (related to realization of own project)
* 3 questions, recommendations, feature requests each
  * Questions
    * Why did you create your "own system"?
    * How long did it take to create UlnoIOT?
    * Who is using UlnoIOT?
    * What are the borders of UlnoIOT? Which features can not be covered?
  * Recommendations
    * Would rather use a popular operating system and IoT solution
    * Your custom commands may hide a bit, how things actually work in the background. So a standardized system (with custom IoT extensions) would be better
    * If there is an error, I have no idea what to do --> maybe have a solution for that
  * 
* Any special requests to show?