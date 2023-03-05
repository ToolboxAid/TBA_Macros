#include "Arduino.h"

#include "TBA_Macros.h"

void setup()
{
  // Use serial port
  Serial.begin(115200);
  while (!Serial && (millis() <= 1000))
  {
  };

  Serial.println();
  Serial.println("__FILE__");
  Serial.print(" <");
  Serial.print(__FILE__);
  Serial.print("> ");
  Serial.println();

  Serial.println();
  Serial.println("__FILENAME__");
  Serial.print(" <");
  Serial.print(__FILENAME__);
  Serial.print("> ");
  Serial.println();

  Serial.println();
  Serial.println("formatBool");
  Serial.println(formatBool(true));
  Serial.println(formatBool(false));
  Serial.println();

  Serial.println("formatBoolean");
  Serial.println(formatBoolean(true));
  Serial.println(formatBoolean(false));
  Serial.println();
}

void loop()
{
  delay(1000);
  Serial.print(".");
}
