#include <Arduino.h>

void setup()
{
  Serial.begin(115200);
  Serial.println("ESP32-C6 + Arduino in PlatformIO");
}

void loop()
{
  Serial.println("Hello from loop()");
  delay(1000);
}
