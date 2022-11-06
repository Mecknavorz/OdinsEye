#include <Arduino.h>
#include <Adafruit_NeoPixel.h>  //librariers for the LED ring

//Pin info, what's hooked up to what
//currently placeholder values
#define LEDPIN 1

//how many pixels we have
#define NUMPIXELS 24
//refresh rate of LED ring
#define DELAY 100


Adafruit_NeoPixel pixels(NUMPIXELS, LEDPIN, NEO_GRB + NEO_KHZ800);

void setup() {
  //setup stuff
  pixels.begin(); //turn on our ring

}

void loop() {
  // put your main code here, to run repeatedly:
}

//controls the LED ring
//sDir is the direction of our selves
//gDir is the direction of the geocache
void ringControl(){
  pixels.clear();
  for(int i=0; i<NUMPIXELS; i++){
    //pixel colors are r, g, b
    pixels.setPixelColor(i, pixels.Color(150, 0, 0));
    pixels.show();
    delay(DELAY);
  }
}