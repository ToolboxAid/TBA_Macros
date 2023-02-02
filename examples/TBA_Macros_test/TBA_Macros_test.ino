#include "Arduino.h"

#include "TBA_Macros.h"

void setup()
{
  // Use serial port
  Serial.begin(115200);
  while (!Serial && (millis() <= 1000))
  {  };

  Serial.print(" <");
  Serial.print(__FILENAME__);
  Serial.print("> ");

  Serial.println();
}

void loop()
{
  delay(1000);
  Serial.print  (" <");
  Serial.print  (__FILENAME__);
  Serial.println("> ");
}
