// Geocache Compass main file
// made by T&R (Mecknavorz)
// in collaboration with Antares Husky

// includes
#include <Arduino.h>
#include <Wifi.h>

#include <RingControl.h>
#include <UMS3.h>

#include "Configuration.h"

// tinys3 helper
UMS3 ums3;

void setup()
{
  // Initialize all board peripherals, call this first
  ums3.begin();

  // builtin led
  ums3.setPixelBrightness(255 / 3);

  // serial setup
  Serial.begin(9600);

  // wifi setup
  WiFi.begin("connect for a bad time", "evangelion");

  // LED Ring Set Up
  ringControlSetup();
}

int color = 0;
void loop()
{
  // put your main code here, to run repeatedly:
  ringControl();

#ifdef WIFI_DEBUG
  Serial.println(WiFi.status());
  delay(1000);
#endif // WIFI_DEBUG

  ums3.setPixelColor(UMS3::colorWheel(color++));
}