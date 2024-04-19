# YUSUF AHMAD - EC23B1033 

Hello, We were given two tasks today.

The first task was to make a transmitter-receiver combo using a 433Mhz RF transmitter and its receiver and 2 Arduino boards. My task was to connect the receiver module to the arduino and write the code while the two others would transmit signals through their transmitters.

So , I started learning from some sites.This site: (https://randomnerdtutorials.com/rf-433mhz-transmitter-receiver-module-with-arduino/) was very good for learning stuff about the code and this site: (https://how2electronics.com/433mhz-rf-module-works-interfacing-arduino/) was very helpful in understanding the concepts of Amplitude shift keying(ASK).

Amplitude shift keying is very simple.Whenever the digital data or clock pulse we may say , is at a high state , then the carrier wave is received , but if it at a low state , it is ignored.

So I started on the code by first installing the radio head library and adding it to the Arduino library folder. Then I included that library and two more necessary libraries in the code.

The I wrote the code for recieving the signals.Then I went to the connections.

Step by step guide for connections:

1.First connect the 
