

# Lecture #09

### 04.12.2018

#### LORA

##### Relation bandwidth/range/power

Low Power Wide Area Network

The more power, the longer the range to achieve.

But nowadays, low power is needed and also long range.

Bandwidth can fix the dilemma. The smaller the bandwidth, the lower the capacity. So lower bandwidth can enable longer range, however: not a lot of data can be transmitted

##### What is the link budget?

Budget: Something you spend over time from the beginning on.

Link budget between sender and receiver

given in dB

frequency-dependet

Link budget is spent during travel time in obstacles; if too many obstacles --> budget is spent receiver will not receive valid data

LORA has more dB than mobile networks => longer range

Obstacles request budget

8m cable ~ many km in air

Help: amplifier, antenna with gain

Each region uses different frequencies for LORA

accounting of all of the gains and losses from the transmitter, through the medium (air, cable, ...di) to the receiver

##### What is the community approach?

Support by a lot of companies

LoRaWAN

Commercial and community approach

Connect device to available network.

Community approach led by THE THINGS NETWORK. Transfer messages between gateways and your IoT devices. Any person can build gateways. It's a private concept.

##### What are benefits with LORA?

Long range

Low power consumption

Ideal for low power sensors distributed and far from the next gateway.

##### What are problems with LORA?

Bandwidth is reduced even more, because channel is divided into pieces, so more users can use the gateway in parallel.

Same channel for sender and receiver.

RF modules are not as cheap as others, because it is owned by one company

##### Radio link budget calculator

###### LORA

50km

0,863GHz

Rain rate: 0 mm/h

Received power: -125.1 dBm



50km

0,863GHz

Rain rate: 100 mm/h

Received power: -125.2 dBm



###### WiFi

50km

2,4GHz

Rain rate: 0 mm/h

Received power: -134.0 dBm



15km

2,4GHz

Rain rate: 0 mm/h

Received power: -123.6 dBm

##### Activities in Austria and Linz

Hagenberg: none

Linz: Some gateways

##### How expensive a LORA client adapter, LORA gateway

Client adapter: 4€ (Ali express)

Gateway: 60€ - 200€

##### LORA software support

Library: Radiohead

##### How does LORA fit into IoT?

* Low power and long range

##### Difficulties

* Low bandwidth
* Community might be too small in some regions
* Expensive hardware

#### TTN

##### What is TTN (in context with LORA)?

Supports developers in building IoT applications/solutions at small cost featuring security and scalability

Community based initiative to build a global LPWAN IoT network. Volunteers spread the technology and open gateways.

LORA: Contains only the link layer protocol for P2P communication between nodes. Modules are cheaper than for LORAWAN.

LORAWAN: Includes network layer, too. Send information to any base station connected.

=> both are not compatible with each other because the protocols are different

##### What does it stand for?

THE THINGS NETWORK

##### Which problems does it solve?

Cover uncovered areas and use it free of charge

Security

Number of gateways (not enough)

##### How does it solve them?

AES-128 end-to-end encryption

#### More LORA from Andreas Spiess

##### What new feature do you learn about regarding the esp8266?

Wemos node will act as receiver (client), can use node RED over WiFi

LMIC library

For P2P connection --> Radiohead library, LORA library

**Has a sleep mode**

LORA is not as reliable as MQTT and does not ACK all messages

##### How do you see LORA could be used in UlnoIoT? What would need to be adjusted?

UlnoIoT relies on MQTT implicitly. There would have to be another part for that.

Replace MQTT with LORA. Probably remote update feature is lost.