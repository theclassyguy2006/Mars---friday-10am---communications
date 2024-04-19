# YUSUF AHMAD - EC23B1033 

Hello, We were given two tasks today.

The first task was to make a transmitter-receiver combo using a 433Mhz RF transmitter and its receiver and 2 Arduino boards. My task was to connect the receiver module to the Arduino and write the code while the two others would transmit signals through their transmitters.

So, I started learning from some sites. This site: (https://randomnerdtutorials.com/rf-433mhz-transmitter-receiver-module-with-arduino/) was very good for learning stuff about the code and this site: (https://how2electronics.com/433mhz-rf-module-works-interfacing-arduino/) was very helpful in understanding the concepts of Amplitude shift keying(ASK).

Amplitude shift keying is very simple. Whenever the digital data or clock pulse we may say, is at a high state, then the carrier wave is received, but if it is at a low state, it is ignored.

So I started on the code by first installing the radio head library and adding it to the Arduino library folder. Then I included that library and two more necessary libraries in the code.

Then I wrote the code for receiving the signals. Then I went to the connections.

Step-by-step guide for connections:

1. First connect pin-2,pin-3 and pin-8 to the ground pin of arduino.
2. Now connect pin-4 and pin-5 to the 5v pin(I had to connect one to 5v and another to 3.3v due to lack of a breadboard).
3. At last, we need to connect pin-6 and pin-7 to any digital pin(I connected it to the 11th digital GPIO pin of Arduino).
4. Now that your connections are done, just find out the com-port with which you connect the Arduino to the USB of the laptop through the device manager. 

After successfully running, It will display the message that has been received.

For part II, the receiver module connections stayed the same, but my friends had to add in an ultrasonic sensor.

I now, instead of reading a string, had to read an integer that would be sent to me, so I tweaked the code a bit. Then the distance was received on my receiver module and appeared on the screen. A very important learning was the fact that if our hand goes too far from the sensor, the distance will be 0, when we bring it at a specific distance, it will start calculating, and when we bring it very near , it again goes to 0.

Overall, it was a fun experience, working with some of my fellow mates, and learning along the way.
