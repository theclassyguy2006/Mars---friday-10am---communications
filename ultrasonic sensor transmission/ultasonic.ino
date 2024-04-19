#include <RadioHead.h>

#include <RH_ASK.h>
#include <SPI.h> // Not actually used but needed to compile

int trigpin=10;
int echopin=11;
long time;
int distance;
RH_ASK driver;

void setup()
{
   	 
     pinMode(10, OUTPUT);
    pinMode(11,INPUT);
    Serial.begin(9600); // Debugging only
    if (!driver.init())
         Serial.println("init failed");
    
}

void loop()
{
    
    digitalWrite(10,LOW);
  delayMicroseconds(2); // Wait for 2 microsecond(s)
  
  digitalWrite(10,HIGH);
  delayMicroseconds(10); // Wait for 10 microsecond(s)
  digitalWrite(10,LOW);
  
 //calculating time and distance
 
  time=pulseIn(11,HIGH);
  distance=time*0.034/2;
  
  // Serial.print("distance: ");
  // Serial.println(distance);
  
    

    driver.send((uint8_t *)distance,(uint8_t)1);
    driver.waitPacketSent();
    delay(1000);
}
