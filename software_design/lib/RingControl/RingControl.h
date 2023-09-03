#ifndef _RING_CONTROL_H
#define _RING_CONTROL_H

#include <Arduino.h>
#include <FastLED.h>
#include "../../src/Configuration.h"

static const uint8_t NUM_LEDS = RINGLED_NUM_LEDS;

void ringControl();
void ringControlSetup();

#endif // _RING_CONTROL_H