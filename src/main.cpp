#include <Arduino.h>
#include <FastLED.h>  //librariers for the LED ring

//Pin info, what's hooked up to what
//currently placeholder values
#define LEDPIN 1

//how many pixels we have
//the ring has 24 but we're using the 0 as a sacrifice
#define NUM_LEDS 25
CRGB leds[NUM_LEDS]; //array to manage LEDs

void setup() {
  //setup stuff
  //LED Ring Set Up
  FastLED.addLeds<NEOPIXEL, 6>(leds, NUM_LEDS);

}

void loop() {
  // put your main code here, to run repeatedly:
  ringControl();
}

//controls the LED ring
//sDir is the direction of our selves
//gDir is the direction of the geocache
void ringControl(){
  //generic blink
  leds[0] = CRGB::White;
  FastLED.show();
  delay(30);

  leds[0] = CRGB::Black;
  FastLED.show();
  delay(30);
}