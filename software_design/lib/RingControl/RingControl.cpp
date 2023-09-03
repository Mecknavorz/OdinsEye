#include <RingControl.h>

CRGB leds[NUM_LEDS];

// controls the LED ring
// sDir is the direction of our selves
// gDir is the direction of the geocache
void ringControl()
{
    // generic blink
    leds[0] = CRGB::White;
    FastLED.show();
    delay(30);

    leds[0] = CRGB::Black;
    FastLED.show();
    delay(30);
}

void ringControlSetup()
{
    FastLED.addLeds<NEOPIXEL, 6>(leds, NUM_LEDS);
}