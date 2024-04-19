#include <RadioHead.h>
#include <RH_ASK.h>
#include <SPI.h> // Not actualy used but needed to compile

RH_ASK driver;
uint8_t Received = 1;
long distance = 0

void setup()
{
    Serial.begin(9600);	// Debugging only
    if (!driver.init())
         Serial.println("init failed");
}

void loop()
{
    
    if (rf_driver.recv((uint8_t *) (&distance), &Received)) // Non-blocking
    {
      Serial.print("distance: ");
      Serial.println(distance);        
    }
}
