#include <inttypes.h>
#include "Wire.h"
#include <lm75.h>
 
TempI2C_LM75 Temperature = TempI2C_LM75(0x48,TempI2C_LM75::nine_bits);
 
 
void setup()
{
Serial.begin(9600);
Serial.println("Start");
Serial.print("Actual temp ");
Serial.print(Temperature.getTemp());
Serial.println(" oC");
delay(2000);
}
 
void loop()
{
Serial.print(Temperature.getTemp());
Serial.println(" oC");
delay(2000);
}
